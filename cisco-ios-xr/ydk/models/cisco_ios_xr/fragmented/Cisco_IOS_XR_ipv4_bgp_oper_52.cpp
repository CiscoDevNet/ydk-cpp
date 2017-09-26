
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_52.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_73.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_53.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_60.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_67.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_56.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_58.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_64.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_62.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_72.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_70.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_68.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_66.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_57.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_71.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_bgp_oper {

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::Ipv6RibServer()
    :
    is_rib_connection_up{YType::boolean, "is-rib-connection-up"},
    last_rib_connection_down_age{YType::uint32, "last-rib-connection-down-age"},
    last_rib_connection_up_age{YType::uint32, "last-rib-connection-up-age"},
    rib_connection_down_count{YType::uint32, "rib-connection-down-count"},
    rib_connection_up_count{YType::uint32, "rib-connection-up-count"}
    	,
    first_rib_connection_down_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp>())
	,first_rib_connection_up_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp>())
	,last_rib_connection_down_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp>())
	,last_rib_connection_up_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp>())
{
    first_rib_connection_down_timestamp->parent = this;
    first_rib_connection_up_timestamp->parent = this;
    last_rib_connection_down_timestamp->parent = this;
    last_rib_connection_up_timestamp->parent = this;

    yang_name = "ipv6rib-server"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::~Ipv6RibServer()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::has_data() const
{
    return is_rib_connection_up.is_set
	|| last_rib_connection_down_age.is_set
	|| last_rib_connection_up_age.is_set
	|| rib_connection_down_count.is_set
	|| rib_connection_up_count.is_set
	|| (first_rib_connection_down_timestamp !=  nullptr && first_rib_connection_down_timestamp->has_data())
	|| (first_rib_connection_up_timestamp !=  nullptr && first_rib_connection_up_timestamp->has_data())
	|| (last_rib_connection_down_timestamp !=  nullptr && last_rib_connection_down_timestamp->has_data())
	|| (last_rib_connection_up_timestamp !=  nullptr && last_rib_connection_up_timestamp->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_rib_connection_up.yfilter)
	|| ydk::is_set(last_rib_connection_down_age.yfilter)
	|| ydk::is_set(last_rib_connection_up_age.yfilter)
	|| ydk::is_set(rib_connection_down_count.yfilter)
	|| ydk::is_set(rib_connection_up_count.yfilter)
	|| (first_rib_connection_down_timestamp !=  nullptr && first_rib_connection_down_timestamp->has_operation())
	|| (first_rib_connection_up_timestamp !=  nullptr && first_rib_connection_up_timestamp->has_operation())
	|| (last_rib_connection_down_timestamp !=  nullptr && last_rib_connection_down_timestamp->has_operation())
	|| (last_rib_connection_up_timestamp !=  nullptr && last_rib_connection_up_timestamp->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6rib-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_rib_connection_up.is_set || is_set(is_rib_connection_up.yfilter)) leaf_name_data.push_back(is_rib_connection_up.get_name_leafdata());
    if (last_rib_connection_down_age.is_set || is_set(last_rib_connection_down_age.yfilter)) leaf_name_data.push_back(last_rib_connection_down_age.get_name_leafdata());
    if (last_rib_connection_up_age.is_set || is_set(last_rib_connection_up_age.yfilter)) leaf_name_data.push_back(last_rib_connection_up_age.get_name_leafdata());
    if (rib_connection_down_count.is_set || is_set(rib_connection_down_count.yfilter)) leaf_name_data.push_back(rib_connection_down_count.get_name_leafdata());
    if (rib_connection_up_count.is_set || is_set(rib_connection_up_count.yfilter)) leaf_name_data.push_back(rib_connection_up_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "first-rib-connection-down-timestamp")
    {
        if(first_rib_connection_down_timestamp == nullptr)
        {
            first_rib_connection_down_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp>();
        }
        return first_rib_connection_down_timestamp;
    }

    if(child_yang_name == "first-rib-connection-up-timestamp")
    {
        if(first_rib_connection_up_timestamp == nullptr)
        {
            first_rib_connection_up_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp>();
        }
        return first_rib_connection_up_timestamp;
    }

    if(child_yang_name == "last-rib-connection-down-timestamp")
    {
        if(last_rib_connection_down_timestamp == nullptr)
        {
            last_rib_connection_down_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp>();
        }
        return last_rib_connection_down_timestamp;
    }

    if(child_yang_name == "last-rib-connection-up-timestamp")
    {
        if(last_rib_connection_up_timestamp == nullptr)
        {
            last_rib_connection_up_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp>();
        }
        return last_rib_connection_up_timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(first_rib_connection_down_timestamp != nullptr)
    {
        children["first-rib-connection-down-timestamp"] = first_rib_connection_down_timestamp;
    }

    if(first_rib_connection_up_timestamp != nullptr)
    {
        children["first-rib-connection-up-timestamp"] = first_rib_connection_up_timestamp;
    }

    if(last_rib_connection_down_timestamp != nullptr)
    {
        children["last-rib-connection-down-timestamp"] = last_rib_connection_down_timestamp;
    }

    if(last_rib_connection_up_timestamp != nullptr)
    {
        children["last-rib-connection-up-timestamp"] = last_rib_connection_up_timestamp;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-rib-connection-up")
    {
        is_rib_connection_up = value;
        is_rib_connection_up.value_namespace = name_space;
        is_rib_connection_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-rib-connection-down-age")
    {
        last_rib_connection_down_age = value;
        last_rib_connection_down_age.value_namespace = name_space;
        last_rib_connection_down_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-rib-connection-up-age")
    {
        last_rib_connection_up_age = value;
        last_rib_connection_up_age.value_namespace = name_space;
        last_rib_connection_up_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-connection-down-count")
    {
        rib_connection_down_count = value;
        rib_connection_down_count.value_namespace = name_space;
        rib_connection_down_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-connection-up-count")
    {
        rib_connection_up_count = value;
        rib_connection_up_count.value_namespace = name_space;
        rib_connection_up_count.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-rib-connection-up")
    {
        is_rib_connection_up.yfilter = yfilter;
    }
    if(value_path == "last-rib-connection-down-age")
    {
        last_rib_connection_down_age.yfilter = yfilter;
    }
    if(value_path == "last-rib-connection-up-age")
    {
        last_rib_connection_up_age.yfilter = yfilter;
    }
    if(value_path == "rib-connection-down-count")
    {
        rib_connection_down_count.yfilter = yfilter;
    }
    if(value_path == "rib-connection-up-count")
    {
        rib_connection_up_count.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "first-rib-connection-down-timestamp" || name == "first-rib-connection-up-timestamp" || name == "last-rib-connection-down-timestamp" || name == "last-rib-connection-up-timestamp" || name == "is-rib-connection-up" || name == "last-rib-connection-down-age" || name == "last-rib-connection-up-age" || name == "rib-connection-down-count" || name == "rib-connection-up-count")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp::FirstRibConnectionDownTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "first-rib-connection-down-timestamp"; yang_parent_name = "ipv6rib-server"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp::~FirstRibConnectionDownTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-rib-connection-down-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp::FirstRibConnectionUpTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "first-rib-connection-up-timestamp"; yang_parent_name = "ipv6rib-server"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp::~FirstRibConnectionUpTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-rib-connection-up-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp::LastRibConnectionDownTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "last-rib-connection-down-timestamp"; yang_parent_name = "ipv6rib-server"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp::~LastRibConnectionDownTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-rib-connection-down-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp::LastRibConnectionUpTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "last-rib-connection-up-timestamp"; yang_parent_name = "ipv6rib-server"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp::~LastRibConnectionUpTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-rib-connection-up-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::IssuMilestone::IssuMilestone()
    :
    milestone_met_timestamp{YType::uint32, "milestone-met-timestamp"},
    milestone_name{YType::str, "milestone-name"},
    milestone_start_timestamp{YType::uint32, "milestone-start-timestamp"}
{

    yang_name = "issu-milestone"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::IssuMilestone::~IssuMilestone()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::IssuMilestone::has_data() const
{
    return milestone_met_timestamp.is_set
	|| milestone_name.is_set
	|| milestone_start_timestamp.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::IssuMilestone::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(milestone_met_timestamp.yfilter)
	|| ydk::is_set(milestone_name.yfilter)
	|| ydk::is_set(milestone_start_timestamp.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::IssuMilestone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issu-milestone";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::IssuMilestone::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (milestone_met_timestamp.is_set || is_set(milestone_met_timestamp.yfilter)) leaf_name_data.push_back(milestone_met_timestamp.get_name_leafdata());
    if (milestone_name.is_set || is_set(milestone_name.yfilter)) leaf_name_data.push_back(milestone_name.get_name_leafdata());
    if (milestone_start_timestamp.is_set || is_set(milestone_start_timestamp.yfilter)) leaf_name_data.push_back(milestone_start_timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::IssuMilestone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::IssuMilestone::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::IssuMilestone::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "milestone-met-timestamp")
    {
        milestone_met_timestamp = value;
        milestone_met_timestamp.value_namespace = name_space;
        milestone_met_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "milestone-name")
    {
        milestone_name = value;
        milestone_name.value_namespace = name_space;
        milestone_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "milestone-start-timestamp")
    {
        milestone_start_timestamp = value;
        milestone_start_timestamp.value_namespace = name_space;
        milestone_start_timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::IssuMilestone::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "milestone-met-timestamp")
    {
        milestone_met_timestamp.yfilter = yfilter;
    }
    if(value_path == "milestone-name")
    {
        milestone_name.yfilter = yfilter;
    }
    if(value_path == "milestone-start-timestamp")
    {
        milestone_start_timestamp.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::IssuMilestone::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "milestone-met-timestamp" || name == "milestone-name" || name == "milestone-start-timestamp")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LsdConnection()
    :
    connection_down_count{YType::uint32, "connection-down-count"},
    connection_up_count{YType::uint32, "connection-up-count"},
    is_connection_up{YType::boolean, "is-connection-up"},
    last_connection_down_age{YType::uint32, "last-connection-down-age"},
    last_connection_up_age{YType::uint32, "last-connection-up-age"}
    	,
    first_connection_down_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp>())
	,first_connection_up_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp>())
	,last_connection_down_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp>())
	,last_connection_up_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp>())
{
    first_connection_down_timestamp->parent = this;
    first_connection_up_timestamp->parent = this;
    last_connection_down_timestamp->parent = this;
    last_connection_up_timestamp->parent = this;

    yang_name = "lsd-connection"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::~LsdConnection()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::has_data() const
{
    return connection_down_count.is_set
	|| connection_up_count.is_set
	|| is_connection_up.is_set
	|| last_connection_down_age.is_set
	|| last_connection_up_age.is_set
	|| (first_connection_down_timestamp !=  nullptr && first_connection_down_timestamp->has_data())
	|| (first_connection_up_timestamp !=  nullptr && first_connection_up_timestamp->has_data())
	|| (last_connection_down_timestamp !=  nullptr && last_connection_down_timestamp->has_data())
	|| (last_connection_up_timestamp !=  nullptr && last_connection_up_timestamp->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(connection_down_count.yfilter)
	|| ydk::is_set(connection_up_count.yfilter)
	|| ydk::is_set(is_connection_up.yfilter)
	|| ydk::is_set(last_connection_down_age.yfilter)
	|| ydk::is_set(last_connection_up_age.yfilter)
	|| (first_connection_down_timestamp !=  nullptr && first_connection_down_timestamp->has_operation())
	|| (first_connection_up_timestamp !=  nullptr && first_connection_up_timestamp->has_operation())
	|| (last_connection_down_timestamp !=  nullptr && last_connection_down_timestamp->has_operation())
	|| (last_connection_up_timestamp !=  nullptr && last_connection_up_timestamp->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsd-connection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connection_down_count.is_set || is_set(connection_down_count.yfilter)) leaf_name_data.push_back(connection_down_count.get_name_leafdata());
    if (connection_up_count.is_set || is_set(connection_up_count.yfilter)) leaf_name_data.push_back(connection_up_count.get_name_leafdata());
    if (is_connection_up.is_set || is_set(is_connection_up.yfilter)) leaf_name_data.push_back(is_connection_up.get_name_leafdata());
    if (last_connection_down_age.is_set || is_set(last_connection_down_age.yfilter)) leaf_name_data.push_back(last_connection_down_age.get_name_leafdata());
    if (last_connection_up_age.is_set || is_set(last_connection_up_age.yfilter)) leaf_name_data.push_back(last_connection_up_age.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "first-connection-down-timestamp")
    {
        if(first_connection_down_timestamp == nullptr)
        {
            first_connection_down_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp>();
        }
        return first_connection_down_timestamp;
    }

    if(child_yang_name == "first-connection-up-timestamp")
    {
        if(first_connection_up_timestamp == nullptr)
        {
            first_connection_up_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp>();
        }
        return first_connection_up_timestamp;
    }

    if(child_yang_name == "last-connection-down-timestamp")
    {
        if(last_connection_down_timestamp == nullptr)
        {
            last_connection_down_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp>();
        }
        return last_connection_down_timestamp;
    }

    if(child_yang_name == "last-connection-up-timestamp")
    {
        if(last_connection_up_timestamp == nullptr)
        {
            last_connection_up_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp>();
        }
        return last_connection_up_timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(first_connection_down_timestamp != nullptr)
    {
        children["first-connection-down-timestamp"] = first_connection_down_timestamp;
    }

    if(first_connection_up_timestamp != nullptr)
    {
        children["first-connection-up-timestamp"] = first_connection_up_timestamp;
    }

    if(last_connection_down_timestamp != nullptr)
    {
        children["last-connection-down-timestamp"] = last_connection_down_timestamp;
    }

    if(last_connection_up_timestamp != nullptr)
    {
        children["last-connection-up-timestamp"] = last_connection_up_timestamp;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "connection-down-count")
    {
        connection_down_count = value;
        connection_down_count.value_namespace = name_space;
        connection_down_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-up-count")
    {
        connection_up_count = value;
        connection_up_count.value_namespace = name_space;
        connection_up_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-connection-up")
    {
        is_connection_up = value;
        is_connection_up.value_namespace = name_space;
        is_connection_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-connection-down-age")
    {
        last_connection_down_age = value;
        last_connection_down_age.value_namespace = name_space;
        last_connection_down_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-connection-up-age")
    {
        last_connection_up_age = value;
        last_connection_up_age.value_namespace = name_space;
        last_connection_up_age.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "connection-down-count")
    {
        connection_down_count.yfilter = yfilter;
    }
    if(value_path == "connection-up-count")
    {
        connection_up_count.yfilter = yfilter;
    }
    if(value_path == "is-connection-up")
    {
        is_connection_up.yfilter = yfilter;
    }
    if(value_path == "last-connection-down-age")
    {
        last_connection_down_age.yfilter = yfilter;
    }
    if(value_path == "last-connection-up-age")
    {
        last_connection_up_age.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "first-connection-down-timestamp" || name == "first-connection-up-timestamp" || name == "last-connection-down-timestamp" || name == "last-connection-up-timestamp" || name == "connection-down-count" || name == "connection-up-count" || name == "is-connection-up" || name == "last-connection-down-age" || name == "last-connection-up-age")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp::FirstConnectionDownTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "first-connection-down-timestamp"; yang_parent_name = "lsd-connection"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp::~FirstConnectionDownTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-connection-down-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp::FirstConnectionUpTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "first-connection-up-timestamp"; yang_parent_name = "lsd-connection"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp::~FirstConnectionUpTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-connection-up-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp::LastConnectionDownTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "last-connection-down-timestamp"; yang_parent_name = "lsd-connection"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp::~LastConnectionDownTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-connection-down-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp::LastConnectionUpTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "last-connection-up-timestamp"; yang_parent_name = "lsd-connection"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp::~LastConnectionUpTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-connection-up-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::PostitCountInfo()
    :
    postit_count{YType::uint32, "postit-count"},
    vrf_name{YType::str, "vrf-name"}
    	,
    neighbor_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "postit-count-info"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::~PostitCountInfo()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::has_data() const
{
    return postit_count.is_set
	|| vrf_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(postit_count.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "postit-count-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (postit_count.is_set || is_set(postit_count.yfilter)) leaf_name_data.push_back(postit_count.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "postit-count")
    {
        postit_count = value;
        postit_count.value_namespace = name_space;
        postit_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "postit-count")
    {
        postit_count.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "postit-count" || name == "vrf-name")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::NeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress>())
	,l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnVplsAddress>())
{
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;
    l2vpn_mspw_address->parent = this;
    l2vpn_vpls_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "postit-count-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4_sr_policy_address != nullptr)
    {
        children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(l2vpn_vpls_address != nullptr)
    {
        children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
        ipv4vpna_mcastddress.value_namespace = name_space;
        ipv4vpna_mcastddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
        l2vpn_evpn_address.value_namespace = name_space;
        l2vpn_evpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
        ls_ls_address.value_namespace = name_space;
        ls_ls_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "l2vpn-mspw-address" || name == "l2vpn-vpls-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-flowspec-address" || name == "ipv4-label-address" || name == "ipv4-mcast-address" || name == "ipv4-mdt-address" || name == "ipv4-tunnel-address" || name == "ipv4mvpn-address" || name == "ipv4vpn-address" || name == "ipv4vpn-flowspec-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-flowspec-address" || name == "ipv6-label-address" || name == "ipv6-mcast-address" || name == "ipv6mvpn-address" || name == "ipv6vpn-address" || name == "ipv6vpn-flowspec-address" || name == "ipv6vpn-mcast-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "rt-constraint-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::StandbyNsrModeEnterTime::StandbyNsrModeEnterTime()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "standby-nsr-mode-enter-time"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::StandbyNsrModeEnterTime::~StandbyNsrModeEnterTime()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::StandbyNsrModeEnterTime::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::StandbyNsrModeEnterTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::StandbyNsrModeEnterTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby-nsr-mode-enter-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::StandbyNsrModeEnterTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::StandbyNsrModeEnterTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::StandbyNsrModeEnterTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::StandbyNsrModeEnterTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::StandbyNsrModeEnterTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::StandbyNsrModeEnterTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::TeConnection()
    :
    connection_down_count{YType::uint32, "connection-down-count"},
    connection_up_count{YType::uint32, "connection-up-count"},
    is_connection_up{YType::boolean, "is-connection-up"},
    last_connection_down_age{YType::uint32, "last-connection-down-age"},
    last_connection_up_age{YType::uint32, "last-connection-up-age"}
    	,
    first_connection_down_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp>())
	,first_connection_up_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp>())
	,last_connection_down_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp>())
	,last_connection_up_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp>())
{
    first_connection_down_timestamp->parent = this;
    first_connection_up_timestamp->parent = this;
    last_connection_down_timestamp->parent = this;
    last_connection_up_timestamp->parent = this;

    yang_name = "te-connection"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::~TeConnection()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::has_data() const
{
    return connection_down_count.is_set
	|| connection_up_count.is_set
	|| is_connection_up.is_set
	|| last_connection_down_age.is_set
	|| last_connection_up_age.is_set
	|| (first_connection_down_timestamp !=  nullptr && first_connection_down_timestamp->has_data())
	|| (first_connection_up_timestamp !=  nullptr && first_connection_up_timestamp->has_data())
	|| (last_connection_down_timestamp !=  nullptr && last_connection_down_timestamp->has_data())
	|| (last_connection_up_timestamp !=  nullptr && last_connection_up_timestamp->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(connection_down_count.yfilter)
	|| ydk::is_set(connection_up_count.yfilter)
	|| ydk::is_set(is_connection_up.yfilter)
	|| ydk::is_set(last_connection_down_age.yfilter)
	|| ydk::is_set(last_connection_up_age.yfilter)
	|| (first_connection_down_timestamp !=  nullptr && first_connection_down_timestamp->has_operation())
	|| (first_connection_up_timestamp !=  nullptr && first_connection_up_timestamp->has_operation())
	|| (last_connection_down_timestamp !=  nullptr && last_connection_down_timestamp->has_operation())
	|| (last_connection_up_timestamp !=  nullptr && last_connection_up_timestamp->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-connection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connection_down_count.is_set || is_set(connection_down_count.yfilter)) leaf_name_data.push_back(connection_down_count.get_name_leafdata());
    if (connection_up_count.is_set || is_set(connection_up_count.yfilter)) leaf_name_data.push_back(connection_up_count.get_name_leafdata());
    if (is_connection_up.is_set || is_set(is_connection_up.yfilter)) leaf_name_data.push_back(is_connection_up.get_name_leafdata());
    if (last_connection_down_age.is_set || is_set(last_connection_down_age.yfilter)) leaf_name_data.push_back(last_connection_down_age.get_name_leafdata());
    if (last_connection_up_age.is_set || is_set(last_connection_up_age.yfilter)) leaf_name_data.push_back(last_connection_up_age.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "first-connection-down-timestamp")
    {
        if(first_connection_down_timestamp == nullptr)
        {
            first_connection_down_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp>();
        }
        return first_connection_down_timestamp;
    }

    if(child_yang_name == "first-connection-up-timestamp")
    {
        if(first_connection_up_timestamp == nullptr)
        {
            first_connection_up_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp>();
        }
        return first_connection_up_timestamp;
    }

    if(child_yang_name == "last-connection-down-timestamp")
    {
        if(last_connection_down_timestamp == nullptr)
        {
            last_connection_down_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp>();
        }
        return last_connection_down_timestamp;
    }

    if(child_yang_name == "last-connection-up-timestamp")
    {
        if(last_connection_up_timestamp == nullptr)
        {
            last_connection_up_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp>();
        }
        return last_connection_up_timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(first_connection_down_timestamp != nullptr)
    {
        children["first-connection-down-timestamp"] = first_connection_down_timestamp;
    }

    if(first_connection_up_timestamp != nullptr)
    {
        children["first-connection-up-timestamp"] = first_connection_up_timestamp;
    }

    if(last_connection_down_timestamp != nullptr)
    {
        children["last-connection-down-timestamp"] = last_connection_down_timestamp;
    }

    if(last_connection_up_timestamp != nullptr)
    {
        children["last-connection-up-timestamp"] = last_connection_up_timestamp;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "connection-down-count")
    {
        connection_down_count = value;
        connection_down_count.value_namespace = name_space;
        connection_down_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-up-count")
    {
        connection_up_count = value;
        connection_up_count.value_namespace = name_space;
        connection_up_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-connection-up")
    {
        is_connection_up = value;
        is_connection_up.value_namespace = name_space;
        is_connection_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-connection-down-age")
    {
        last_connection_down_age = value;
        last_connection_down_age.value_namespace = name_space;
        last_connection_down_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-connection-up-age")
    {
        last_connection_up_age = value;
        last_connection_up_age.value_namespace = name_space;
        last_connection_up_age.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "connection-down-count")
    {
        connection_down_count.yfilter = yfilter;
    }
    if(value_path == "connection-up-count")
    {
        connection_up_count.yfilter = yfilter;
    }
    if(value_path == "is-connection-up")
    {
        is_connection_up.yfilter = yfilter;
    }
    if(value_path == "last-connection-down-age")
    {
        last_connection_down_age.yfilter = yfilter;
    }
    if(value_path == "last-connection-up-age")
    {
        last_connection_up_age.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "first-connection-down-timestamp" || name == "first-connection-up-timestamp" || name == "last-connection-down-timestamp" || name == "last-connection-up-timestamp" || name == "connection-down-count" || name == "connection-up-count" || name == "is-connection-up" || name == "last-connection-down-age" || name == "last-connection-up-age")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp::FirstConnectionDownTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "first-connection-down-timestamp"; yang_parent_name = "te-connection"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp::~FirstConnectionDownTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-connection-down-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp::FirstConnectionUpTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "first-connection-up-timestamp"; yang_parent_name = "te-connection"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp::~FirstConnectionUpTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-connection-up-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp::LastConnectionDownTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "last-connection-down-timestamp"; yang_parent_name = "te-connection"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp::~LastConnectionDownTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-connection-down-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp::LastConnectionUpTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "last-connection-up-timestamp"; yang_parent_name = "te-connection"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp::~LastConnectionUpTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-connection-up-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Vrf_::Vrf_()
    :
    data_bytes_read{YType::uint32, "data-bytes-read"},
    data_bytes_written{YType::uint32, "data-bytes-written"},
    high_throttled_read_count{YType::uint32, "high-throttled-read-count"},
    inbound_update_messages{YType::uint32, "inbound-update-messages"},
    inbound_update_messages_time{YType::uint32, "inbound-update-messages-time"},
    io_read_time{YType::uint32, "io-read-time"},
    io_write_time{YType::uint32, "io-write-time"},
    low_throttled_read_count{YType::uint32, "low-throttled-read-count"},
    lpts_calls{YType::uint32, "lpts-calls"},
    lpts_set_up_time{YType::uint32, "lpts-set-up-time"},
    read_calls_count{YType::uint32, "read-calls-count"},
    read_messages_count{YType::uint32, "read-messages-count"},
    read_throttles_count{YType::uint32, "read-throttles-count"},
    subgroup_list_time{YType::uint32, "subgroup-list-time"},
    write_calls_count{YType::uint32, "write-calls-count"},
    write_queue_calls_count{YType::uint32, "write-queue-calls-count"},
    write_queue_messages_count{YType::uint32, "write-queue-messages-count"},
    write_queue_time{YType::uint32, "write-queue-time"},
    write_subgroup_calls_count{YType::uint32, "write-subgroup-calls-count"},
    write_subgroup_messages_count{YType::uint32, "write-subgroup-messages-count"}
{

    yang_name = "vrf"; yang_parent_name = "performance-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Vrf_::~Vrf_()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Vrf_::has_data() const
{
    return data_bytes_read.is_set
	|| data_bytes_written.is_set
	|| high_throttled_read_count.is_set
	|| inbound_update_messages.is_set
	|| inbound_update_messages_time.is_set
	|| io_read_time.is_set
	|| io_write_time.is_set
	|| low_throttled_read_count.is_set
	|| lpts_calls.is_set
	|| lpts_set_up_time.is_set
	|| read_calls_count.is_set
	|| read_messages_count.is_set
	|| read_throttles_count.is_set
	|| subgroup_list_time.is_set
	|| write_calls_count.is_set
	|| write_queue_calls_count.is_set
	|| write_queue_messages_count.is_set
	|| write_queue_time.is_set
	|| write_subgroup_calls_count.is_set
	|| write_subgroup_messages_count.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Vrf_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_bytes_read.yfilter)
	|| ydk::is_set(data_bytes_written.yfilter)
	|| ydk::is_set(high_throttled_read_count.yfilter)
	|| ydk::is_set(inbound_update_messages.yfilter)
	|| ydk::is_set(inbound_update_messages_time.yfilter)
	|| ydk::is_set(io_read_time.yfilter)
	|| ydk::is_set(io_write_time.yfilter)
	|| ydk::is_set(low_throttled_read_count.yfilter)
	|| ydk::is_set(lpts_calls.yfilter)
	|| ydk::is_set(lpts_set_up_time.yfilter)
	|| ydk::is_set(read_calls_count.yfilter)
	|| ydk::is_set(read_messages_count.yfilter)
	|| ydk::is_set(read_throttles_count.yfilter)
	|| ydk::is_set(subgroup_list_time.yfilter)
	|| ydk::is_set(write_calls_count.yfilter)
	|| ydk::is_set(write_queue_calls_count.yfilter)
	|| ydk::is_set(write_queue_messages_count.yfilter)
	|| ydk::is_set(write_queue_time.yfilter)
	|| ydk::is_set(write_subgroup_calls_count.yfilter)
	|| ydk::is_set(write_subgroup_messages_count.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Vrf_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_bytes_read.is_set || is_set(data_bytes_read.yfilter)) leaf_name_data.push_back(data_bytes_read.get_name_leafdata());
    if (data_bytes_written.is_set || is_set(data_bytes_written.yfilter)) leaf_name_data.push_back(data_bytes_written.get_name_leafdata());
    if (high_throttled_read_count.is_set || is_set(high_throttled_read_count.yfilter)) leaf_name_data.push_back(high_throttled_read_count.get_name_leafdata());
    if (inbound_update_messages.is_set || is_set(inbound_update_messages.yfilter)) leaf_name_data.push_back(inbound_update_messages.get_name_leafdata());
    if (inbound_update_messages_time.is_set || is_set(inbound_update_messages_time.yfilter)) leaf_name_data.push_back(inbound_update_messages_time.get_name_leafdata());
    if (io_read_time.is_set || is_set(io_read_time.yfilter)) leaf_name_data.push_back(io_read_time.get_name_leafdata());
    if (io_write_time.is_set || is_set(io_write_time.yfilter)) leaf_name_data.push_back(io_write_time.get_name_leafdata());
    if (low_throttled_read_count.is_set || is_set(low_throttled_read_count.yfilter)) leaf_name_data.push_back(low_throttled_read_count.get_name_leafdata());
    if (lpts_calls.is_set || is_set(lpts_calls.yfilter)) leaf_name_data.push_back(lpts_calls.get_name_leafdata());
    if (lpts_set_up_time.is_set || is_set(lpts_set_up_time.yfilter)) leaf_name_data.push_back(lpts_set_up_time.get_name_leafdata());
    if (read_calls_count.is_set || is_set(read_calls_count.yfilter)) leaf_name_data.push_back(read_calls_count.get_name_leafdata());
    if (read_messages_count.is_set || is_set(read_messages_count.yfilter)) leaf_name_data.push_back(read_messages_count.get_name_leafdata());
    if (read_throttles_count.is_set || is_set(read_throttles_count.yfilter)) leaf_name_data.push_back(read_throttles_count.get_name_leafdata());
    if (subgroup_list_time.is_set || is_set(subgroup_list_time.yfilter)) leaf_name_data.push_back(subgroup_list_time.get_name_leafdata());
    if (write_calls_count.is_set || is_set(write_calls_count.yfilter)) leaf_name_data.push_back(write_calls_count.get_name_leafdata());
    if (write_queue_calls_count.is_set || is_set(write_queue_calls_count.yfilter)) leaf_name_data.push_back(write_queue_calls_count.get_name_leafdata());
    if (write_queue_messages_count.is_set || is_set(write_queue_messages_count.yfilter)) leaf_name_data.push_back(write_queue_messages_count.get_name_leafdata());
    if (write_queue_time.is_set || is_set(write_queue_time.yfilter)) leaf_name_data.push_back(write_queue_time.get_name_leafdata());
    if (write_subgroup_calls_count.is_set || is_set(write_subgroup_calls_count.yfilter)) leaf_name_data.push_back(write_subgroup_calls_count.get_name_leafdata());
    if (write_subgroup_messages_count.is_set || is_set(write_subgroup_messages_count.yfilter)) leaf_name_data.push_back(write_subgroup_messages_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Vrf_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Vrf_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-bytes-read")
    {
        data_bytes_read = value;
        data_bytes_read.value_namespace = name_space;
        data_bytes_read.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-bytes-written")
    {
        data_bytes_written = value;
        data_bytes_written.value_namespace = name_space;
        data_bytes_written.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high-throttled-read-count")
    {
        high_throttled_read_count = value;
        high_throttled_read_count.value_namespace = name_space;
        high_throttled_read_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inbound-update-messages")
    {
        inbound_update_messages = value;
        inbound_update_messages.value_namespace = name_space;
        inbound_update_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inbound-update-messages-time")
    {
        inbound_update_messages_time = value;
        inbound_update_messages_time.value_namespace = name_space;
        inbound_update_messages_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "io-read-time")
    {
        io_read_time = value;
        io_read_time.value_namespace = name_space;
        io_read_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "io-write-time")
    {
        io_write_time = value;
        io_write_time.value_namespace = name_space;
        io_write_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low-throttled-read-count")
    {
        low_throttled_read_count = value;
        low_throttled_read_count.value_namespace = name_space;
        low_throttled_read_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lpts-calls")
    {
        lpts_calls = value;
        lpts_calls.value_namespace = name_space;
        lpts_calls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lpts-set-up-time")
    {
        lpts_set_up_time = value;
        lpts_set_up_time.value_namespace = name_space;
        lpts_set_up_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "read-calls-count")
    {
        read_calls_count = value;
        read_calls_count.value_namespace = name_space;
        read_calls_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "read-messages-count")
    {
        read_messages_count = value;
        read_messages_count.value_namespace = name_space;
        read_messages_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "read-throttles-count")
    {
        read_throttles_count = value;
        read_throttles_count.value_namespace = name_space;
        read_throttles_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subgroup-list-time")
    {
        subgroup_list_time = value;
        subgroup_list_time.value_namespace = name_space;
        subgroup_list_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "write-calls-count")
    {
        write_calls_count = value;
        write_calls_count.value_namespace = name_space;
        write_calls_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "write-queue-calls-count")
    {
        write_queue_calls_count = value;
        write_queue_calls_count.value_namespace = name_space;
        write_queue_calls_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "write-queue-messages-count")
    {
        write_queue_messages_count = value;
        write_queue_messages_count.value_namespace = name_space;
        write_queue_messages_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "write-queue-time")
    {
        write_queue_time = value;
        write_queue_time.value_namespace = name_space;
        write_queue_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "write-subgroup-calls-count")
    {
        write_subgroup_calls_count = value;
        write_subgroup_calls_count.value_namespace = name_space;
        write_subgroup_calls_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "write-subgroup-messages-count")
    {
        write_subgroup_messages_count = value;
        write_subgroup_messages_count.value_namespace = name_space;
        write_subgroup_messages_count.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Vrf_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-bytes-read")
    {
        data_bytes_read.yfilter = yfilter;
    }
    if(value_path == "data-bytes-written")
    {
        data_bytes_written.yfilter = yfilter;
    }
    if(value_path == "high-throttled-read-count")
    {
        high_throttled_read_count.yfilter = yfilter;
    }
    if(value_path == "inbound-update-messages")
    {
        inbound_update_messages.yfilter = yfilter;
    }
    if(value_path == "inbound-update-messages-time")
    {
        inbound_update_messages_time.yfilter = yfilter;
    }
    if(value_path == "io-read-time")
    {
        io_read_time.yfilter = yfilter;
    }
    if(value_path == "io-write-time")
    {
        io_write_time.yfilter = yfilter;
    }
    if(value_path == "low-throttled-read-count")
    {
        low_throttled_read_count.yfilter = yfilter;
    }
    if(value_path == "lpts-calls")
    {
        lpts_calls.yfilter = yfilter;
    }
    if(value_path == "lpts-set-up-time")
    {
        lpts_set_up_time.yfilter = yfilter;
    }
    if(value_path == "read-calls-count")
    {
        read_calls_count.yfilter = yfilter;
    }
    if(value_path == "read-messages-count")
    {
        read_messages_count.yfilter = yfilter;
    }
    if(value_path == "read-throttles-count")
    {
        read_throttles_count.yfilter = yfilter;
    }
    if(value_path == "subgroup-list-time")
    {
        subgroup_list_time.yfilter = yfilter;
    }
    if(value_path == "write-calls-count")
    {
        write_calls_count.yfilter = yfilter;
    }
    if(value_path == "write-queue-calls-count")
    {
        write_queue_calls_count.yfilter = yfilter;
    }
    if(value_path == "write-queue-messages-count")
    {
        write_queue_messages_count.yfilter = yfilter;
    }
    if(value_path == "write-queue-time")
    {
        write_queue_time.yfilter = yfilter;
    }
    if(value_path == "write-subgroup-calls-count")
    {
        write_subgroup_calls_count.yfilter = yfilter;
    }
    if(value_path == "write-subgroup-messages-count")
    {
        write_subgroup_messages_count.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Vrf_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-bytes-read" || name == "data-bytes-written" || name == "high-throttled-read-count" || name == "inbound-update-messages" || name == "inbound-update-messages-time" || name == "io-read-time" || name == "io-write-time" || name == "low-throttled-read-count" || name == "lpts-calls" || name == "lpts-set-up-time" || name == "read-calls-count" || name == "read-messages-count" || name == "read-throttles-count" || name == "subgroup-list-time" || name == "write-calls-count" || name == "write-queue-calls-count" || name == "write-queue-messages-count" || name == "write-queue-time" || name == "write-subgroup-calls-count" || name == "write-subgroup-messages-count")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Vrf_::Vrf_()
    :
    established_neighbors_count{YType::uint32, "established-neighbors-count"},
    neighbors_count{YType::uint32, "neighbors-count"},
    network_count{YType::uint32, "network-count"},
    notifications_received{YType::uint32, "notifications-received"},
    notifications_sent{YType::uint32, "notifications-sent"},
    path_count{YType::uint32, "path-count"},
    update_messages_received{YType::uint32, "update-messages-received"},
    update_messages_sent{YType::uint32, "update-messages-sent"}
{

    yang_name = "vrf"; yang_parent_name = "process-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Vrf_::~Vrf_()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Vrf_::has_data() const
{
    return established_neighbors_count.is_set
	|| neighbors_count.is_set
	|| network_count.is_set
	|| notifications_received.is_set
	|| notifications_sent.is_set
	|| path_count.is_set
	|| update_messages_received.is_set
	|| update_messages_sent.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Vrf_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(established_neighbors_count.yfilter)
	|| ydk::is_set(neighbors_count.yfilter)
	|| ydk::is_set(network_count.yfilter)
	|| ydk::is_set(notifications_received.yfilter)
	|| ydk::is_set(notifications_sent.yfilter)
	|| ydk::is_set(path_count.yfilter)
	|| ydk::is_set(update_messages_received.yfilter)
	|| ydk::is_set(update_messages_sent.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Vrf_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (established_neighbors_count.is_set || is_set(established_neighbors_count.yfilter)) leaf_name_data.push_back(established_neighbors_count.get_name_leafdata());
    if (neighbors_count.is_set || is_set(neighbors_count.yfilter)) leaf_name_data.push_back(neighbors_count.get_name_leafdata());
    if (network_count.is_set || is_set(network_count.yfilter)) leaf_name_data.push_back(network_count.get_name_leafdata());
    if (notifications_received.is_set || is_set(notifications_received.yfilter)) leaf_name_data.push_back(notifications_received.get_name_leafdata());
    if (notifications_sent.is_set || is_set(notifications_sent.yfilter)) leaf_name_data.push_back(notifications_sent.get_name_leafdata());
    if (path_count.is_set || is_set(path_count.yfilter)) leaf_name_data.push_back(path_count.get_name_leafdata());
    if (update_messages_received.is_set || is_set(update_messages_received.yfilter)) leaf_name_data.push_back(update_messages_received.get_name_leafdata());
    if (update_messages_sent.is_set || is_set(update_messages_sent.yfilter)) leaf_name_data.push_back(update_messages_sent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Vrf_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Vrf_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "established-neighbors-count")
    {
        established_neighbors_count = value;
        established_neighbors_count.value_namespace = name_space;
        established_neighbors_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbors-count")
    {
        neighbors_count = value;
        neighbors_count.value_namespace = name_space;
        neighbors_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-count")
    {
        network_count = value;
        network_count.value_namespace = name_space;
        network_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notifications-received")
    {
        notifications_received = value;
        notifications_received.value_namespace = name_space;
        notifications_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notifications-sent")
    {
        notifications_sent = value;
        notifications_sent.value_namespace = name_space;
        notifications_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-count")
    {
        path_count = value;
        path_count.value_namespace = name_space;
        path_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-messages-received")
    {
        update_messages_received = value;
        update_messages_received.value_namespace = name_space;
        update_messages_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-messages-sent")
    {
        update_messages_sent = value;
        update_messages_sent.value_namespace = name_space;
        update_messages_sent.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Vrf_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "established-neighbors-count")
    {
        established_neighbors_count.yfilter = yfilter;
    }
    if(value_path == "neighbors-count")
    {
        neighbors_count.yfilter = yfilter;
    }
    if(value_path == "network-count")
    {
        network_count.yfilter = yfilter;
    }
    if(value_path == "notifications-received")
    {
        notifications_received.yfilter = yfilter;
    }
    if(value_path == "notifications-sent")
    {
        notifications_sent.yfilter = yfilter;
    }
    if(value_path == "path-count")
    {
        path_count.yfilter = yfilter;
    }
    if(value_path == "update-messages-received")
    {
        update_messages_received.yfilter = yfilter;
    }
    if(value_path == "update-messages-sent")
    {
        update_messages_sent.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo::Vrf_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "established-neighbors-count" || name == "neighbors-count" || name == "network-count" || name == "notifications-received" || name == "notifications-sent" || name == "path-count" || name == "update-messages-received" || name == "update-messages-sent")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Sessions()
{

    yang_name = "sessions"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::~Sessions()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::has_data() const
{
    for (std::size_t index=0; index<session.size(); index++)
    {
        if(session[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::has_operation() const
{
    for (std::size_t index=0; index<session.size(); index++)
    {
        if(session[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session")
    {
        for(auto const & c : session)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session>();
        c->parent = this;
        session.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : session)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::Session()
    :
    neighbor_address{YType::str, "neighbor-address"},
    connection_state{YType::enumeration, "connection-state"},
    description{YType::str, "description"},
    is_local_address_configured{YType::boolean, "is-local-address-configured"},
    local_as{YType::uint32, "local-as"},
    messages_queued_in{YType::uint32, "messages-queued-in"},
    messages_queued_out{YType::uint32, "messages-queued-out"},
    nsr_enabled{YType::boolean, "nsr-enabled"},
    nsr_state{YType::enumeration, "nsr-state"},
    postit_pending{YType::boolean, "postit-pending"},
    remote_as{YType::uint32, "remote-as"},
    speaker_id{YType::uint8, "speaker-id"},
    vrf_name{YType::str, "vrf-name"}
    	,
    connection_local_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress>())
	,connection_remote_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress>())
{
    connection_local_address->parent = this;
    connection_remote_address->parent = this;

    yang_name = "session"; yang_parent_name = "sessions"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::~Session()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::has_data() const
{
    return neighbor_address.is_set
	|| connection_state.is_set
	|| description.is_set
	|| is_local_address_configured.is_set
	|| local_as.is_set
	|| messages_queued_in.is_set
	|| messages_queued_out.is_set
	|| nsr_enabled.is_set
	|| nsr_state.is_set
	|| postit_pending.is_set
	|| remote_as.is_set
	|| speaker_id.is_set
	|| vrf_name.is_set
	|| (connection_local_address !=  nullptr && connection_local_address->has_data())
	|| (connection_remote_address !=  nullptr && connection_remote_address->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(connection_state.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(is_local_address_configured.yfilter)
	|| ydk::is_set(local_as.yfilter)
	|| ydk::is_set(messages_queued_in.yfilter)
	|| ydk::is_set(messages_queued_out.yfilter)
	|| ydk::is_set(nsr_enabled.yfilter)
	|| ydk::is_set(nsr_state.yfilter)
	|| ydk::is_set(postit_pending.yfilter)
	|| ydk::is_set(remote_as.yfilter)
	|| ydk::is_set(speaker_id.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (connection_local_address !=  nullptr && connection_local_address->has_operation())
	|| (connection_remote_address !=  nullptr && connection_remote_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session" <<"[neighbor-address='" <<neighbor_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (connection_state.is_set || is_set(connection_state.yfilter)) leaf_name_data.push_back(connection_state.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (is_local_address_configured.is_set || is_set(is_local_address_configured.yfilter)) leaf_name_data.push_back(is_local_address_configured.get_name_leafdata());
    if (local_as.is_set || is_set(local_as.yfilter)) leaf_name_data.push_back(local_as.get_name_leafdata());
    if (messages_queued_in.is_set || is_set(messages_queued_in.yfilter)) leaf_name_data.push_back(messages_queued_in.get_name_leafdata());
    if (messages_queued_out.is_set || is_set(messages_queued_out.yfilter)) leaf_name_data.push_back(messages_queued_out.get_name_leafdata());
    if (nsr_enabled.is_set || is_set(nsr_enabled.yfilter)) leaf_name_data.push_back(nsr_enabled.get_name_leafdata());
    if (nsr_state.is_set || is_set(nsr_state.yfilter)) leaf_name_data.push_back(nsr_state.get_name_leafdata());
    if (postit_pending.is_set || is_set(postit_pending.yfilter)) leaf_name_data.push_back(postit_pending.get_name_leafdata());
    if (remote_as.is_set || is_set(remote_as.yfilter)) leaf_name_data.push_back(remote_as.get_name_leafdata());
    if (speaker_id.is_set || is_set(speaker_id.yfilter)) leaf_name_data.push_back(speaker_id.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "connection-local-address")
    {
        if(connection_local_address == nullptr)
        {
            connection_local_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress>();
        }
        return connection_local_address;
    }

    if(child_yang_name == "connection-remote-address")
    {
        if(connection_remote_address == nullptr)
        {
            connection_remote_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress>();
        }
        return connection_remote_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(connection_local_address != nullptr)
    {
        children["connection-local-address"] = connection_local_address;
    }

    if(connection_remote_address != nullptr)
    {
        children["connection-remote-address"] = connection_remote_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-state")
    {
        connection_state = value;
        connection_state.value_namespace = name_space;
        connection_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-local-address-configured")
    {
        is_local_address_configured = value;
        is_local_address_configured.value_namespace = name_space;
        is_local_address_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-as")
    {
        local_as = value;
        local_as.value_namespace = name_space;
        local_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "messages-queued-in")
    {
        messages_queued_in = value;
        messages_queued_in.value_namespace = name_space;
        messages_queued_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "messages-queued-out")
    {
        messages_queued_out = value;
        messages_queued_out.value_namespace = name_space;
        messages_queued_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-enabled")
    {
        nsr_enabled = value;
        nsr_enabled.value_namespace = name_space;
        nsr_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-state")
    {
        nsr_state = value;
        nsr_state.value_namespace = name_space;
        nsr_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "postit-pending")
    {
        postit_pending = value;
        postit_pending.value_namespace = name_space;
        postit_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-as")
    {
        remote_as = value;
        remote_as.value_namespace = name_space;
        remote_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speaker-id")
    {
        speaker_id = value;
        speaker_id.value_namespace = name_space;
        speaker_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "connection-state")
    {
        connection_state.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "is-local-address-configured")
    {
        is_local_address_configured.yfilter = yfilter;
    }
    if(value_path == "local-as")
    {
        local_as.yfilter = yfilter;
    }
    if(value_path == "messages-queued-in")
    {
        messages_queued_in.yfilter = yfilter;
    }
    if(value_path == "messages-queued-out")
    {
        messages_queued_out.yfilter = yfilter;
    }
    if(value_path == "nsr-enabled")
    {
        nsr_enabled.yfilter = yfilter;
    }
    if(value_path == "nsr-state")
    {
        nsr_state.yfilter = yfilter;
    }
    if(value_path == "postit-pending")
    {
        postit_pending.yfilter = yfilter;
    }
    if(value_path == "remote-as")
    {
        remote_as.yfilter = yfilter;
    }
    if(value_path == "speaker-id")
    {
        speaker_id.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connection-local-address" || name == "connection-remote-address" || name == "neighbor-address" || name == "connection-state" || name == "description" || name == "is-local-address-configured" || name == "local-as" || name == "messages-queued-in" || name == "messages-queued-out" || name == "nsr-enabled" || name == "nsr-state" || name == "postit-pending" || name == "remote-as" || name == "speaker-id" || name == "vrf-name")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::ConnectionLocalAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnMspwAddress>())
	,l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnVplsAddress>())
{
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;
    l2vpn_mspw_address->parent = this;
    l2vpn_vpls_address->parent = this;

    yang_name = "connection-local-address"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::~ConnectionLocalAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connection-local-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4_sr_policy_address != nullptr)
    {
        children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(l2vpn_vpls_address != nullptr)
    {
        children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
        ipv4vpna_mcastddress.value_namespace = name_space;
        ipv4vpna_mcastddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
        l2vpn_evpn_address.value_namespace = name_space;
        l2vpn_evpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
        ls_ls_address.value_namespace = name_space;
        ls_ls_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "l2vpn-mspw-address" || name == "l2vpn-vpls-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-flowspec-address" || name == "ipv4-label-address" || name == "ipv4-mcast-address" || name == "ipv4-mdt-address" || name == "ipv4-tunnel-address" || name == "ipv4mvpn-address" || name == "ipv4vpn-address" || name == "ipv4vpn-flowspec-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-flowspec-address" || name == "ipv6-label-address" || name == "ipv6-mcast-address" || name == "ipv6mvpn-address" || name == "ipv6vpn-address" || name == "ipv6vpn-flowspec-address" || name == "ipv6vpn-mcast-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "rt-constraint-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "connection-local-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "connection-local-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "connection-local-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "connection-local-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::ConnectionRemoteAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnMspwAddress>())
	,l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnVplsAddress>())
{
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;
    l2vpn_mspw_address->parent = this;
    l2vpn_vpls_address->parent = this;

    yang_name = "connection-remote-address"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::~ConnectionRemoteAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connection-remote-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4_sr_policy_address != nullptr)
    {
        children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(l2vpn_vpls_address != nullptr)
    {
        children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
        ipv4vpna_mcastddress.value_namespace = name_space;
        ipv4vpna_mcastddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
        l2vpn_evpn_address.value_namespace = name_space;
        l2vpn_evpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
        ls_ls_address.value_namespace = name_space;
        ls_ls_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "l2vpn-mspw-address" || name == "l2vpn-vpls-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-flowspec-address" || name == "ipv4-label-address" || name == "ipv4-mcast-address" || name == "ipv4-mdt-address" || name == "ipv4-tunnel-address" || name == "ipv4mvpn-address" || name == "ipv4vpn-address" || name == "ipv4vpn-flowspec-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-flowspec-address" || name == "ipv6-label-address" || name == "ipv6-mcast-address" || name == "ipv6mvpn-address" || name == "ipv6vpn-address" || name == "ipv6vpn-flowspec-address" || name == "ipv6vpn-mcast-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "rt-constraint-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "connection-remote-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "connection-remote-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "connection-remote-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "connection-remote-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbors()
{

    yang_name = "update-inbound-error-neighbors"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::~UpdateInboundErrorNeighbors()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::has_data() const
{
    for (std::size_t index=0; index<update_inbound_error_neighbor.size(); index++)
    {
        if(update_inbound_error_neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::has_operation() const
{
    for (std::size_t index=0; index<update_inbound_error_neighbor.size(); index++)
    {
        if(update_inbound_error_neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-inbound-error-neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "update-inbound-error-neighbor")
    {
        for(auto const & c : update_inbound_error_neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor>();
        c->parent = this;
        update_inbound_error_neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : update_inbound_error_neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update-inbound-error-neighbor")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateInboundErrorNeighbor()
    :
    neighbor_address{YType::str, "neighbor-address"},
    establishment_total_update_message_count{YType::uint32, "establishment-total-update-message-count"},
    last_error_handling_reset_age{YType::uint32, "last-error-handling-reset-age"},
    last_update_malformed_age{YType::uint32, "last-update-malformed-age"},
    last_update_memory_allocation_fail_age{YType::uint32, "last-update-memory-allocation-fail-age"},
    total_update_message_count{YType::uint32, "total-update-message-count"},
    update_attribute_discard_count{YType::uint32, "update-attribute-discard-count"},
    update_error_handling_avoid_reset{YType::boolean, "update-error-handling-avoid-reset"},
    update_error_handling_reset_count{YType::uint32, "update-error-handling-reset-count"},
    update_error_message_list_count{YType::uint32, "update-error-message-list-count"},
    update_malformed_message_count{YType::uint32, "update-malformed-message-count"},
    update_memory_allocation_fail_count{YType::uint32, "update-memory-allocation-fail-count"},
    update_vrf_name{YType::str, "update-vrf-name"}
    	,
    first_update_error_handling_reset_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp>())
	,first_update_malformed_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp>())
	,first_update_memory_allocation_fail_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp>())
	,last_error_handling_reset_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp>())
	,last_update_malformed_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp>())
	,last_update_memory_allocation_fail_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp>())
	,update_neighbor_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress>())
{
    first_update_error_handling_reset_timestamp->parent = this;
    first_update_malformed_timestamp->parent = this;
    first_update_memory_allocation_fail_timestamp->parent = this;
    last_error_handling_reset_timestamp->parent = this;
    last_update_malformed_timestamp->parent = this;
    last_update_memory_allocation_fail_timestamp->parent = this;
    update_neighbor_address->parent = this;

    yang_name = "update-inbound-error-neighbor"; yang_parent_name = "update-inbound-error-neighbors"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::~UpdateInboundErrorNeighbor()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::has_data() const
{
    for (std::size_t index=0; index<establishment_action_count.size(); index++)
    {
        if(establishment_action_count[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<update_error_message.size(); index++)
    {
        if(update_error_message[index]->has_data())
            return true;
    }
    return neighbor_address.is_set
	|| establishment_total_update_message_count.is_set
	|| last_error_handling_reset_age.is_set
	|| last_update_malformed_age.is_set
	|| last_update_memory_allocation_fail_age.is_set
	|| total_update_message_count.is_set
	|| update_attribute_discard_count.is_set
	|| update_error_handling_avoid_reset.is_set
	|| update_error_handling_reset_count.is_set
	|| update_error_message_list_count.is_set
	|| update_malformed_message_count.is_set
	|| update_memory_allocation_fail_count.is_set
	|| update_vrf_name.is_set
	|| (first_update_error_handling_reset_timestamp !=  nullptr && first_update_error_handling_reset_timestamp->has_data())
	|| (first_update_malformed_timestamp !=  nullptr && first_update_malformed_timestamp->has_data())
	|| (first_update_memory_allocation_fail_timestamp !=  nullptr && first_update_memory_allocation_fail_timestamp->has_data())
	|| (last_error_handling_reset_timestamp !=  nullptr && last_error_handling_reset_timestamp->has_data())
	|| (last_update_malformed_timestamp !=  nullptr && last_update_malformed_timestamp->has_data())
	|| (last_update_memory_allocation_fail_timestamp !=  nullptr && last_update_memory_allocation_fail_timestamp->has_data())
	|| (update_neighbor_address !=  nullptr && update_neighbor_address->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::has_operation() const
{
    for (std::size_t index=0; index<establishment_action_count.size(); index++)
    {
        if(establishment_action_count[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<update_error_message.size(); index++)
    {
        if(update_error_message[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(establishment_total_update_message_count.yfilter)
	|| ydk::is_set(last_error_handling_reset_age.yfilter)
	|| ydk::is_set(last_update_malformed_age.yfilter)
	|| ydk::is_set(last_update_memory_allocation_fail_age.yfilter)
	|| ydk::is_set(total_update_message_count.yfilter)
	|| ydk::is_set(update_attribute_discard_count.yfilter)
	|| ydk::is_set(update_error_handling_avoid_reset.yfilter)
	|| ydk::is_set(update_error_handling_reset_count.yfilter)
	|| ydk::is_set(update_error_message_list_count.yfilter)
	|| ydk::is_set(update_malformed_message_count.yfilter)
	|| ydk::is_set(update_memory_allocation_fail_count.yfilter)
	|| ydk::is_set(update_vrf_name.yfilter)
	|| (first_update_error_handling_reset_timestamp !=  nullptr && first_update_error_handling_reset_timestamp->has_operation())
	|| (first_update_malformed_timestamp !=  nullptr && first_update_malformed_timestamp->has_operation())
	|| (first_update_memory_allocation_fail_timestamp !=  nullptr && first_update_memory_allocation_fail_timestamp->has_operation())
	|| (last_error_handling_reset_timestamp !=  nullptr && last_error_handling_reset_timestamp->has_operation())
	|| (last_update_malformed_timestamp !=  nullptr && last_update_malformed_timestamp->has_operation())
	|| (last_update_memory_allocation_fail_timestamp !=  nullptr && last_update_memory_allocation_fail_timestamp->has_operation())
	|| (update_neighbor_address !=  nullptr && update_neighbor_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-inbound-error-neighbor" <<"[neighbor-address='" <<neighbor_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (establishment_total_update_message_count.is_set || is_set(establishment_total_update_message_count.yfilter)) leaf_name_data.push_back(establishment_total_update_message_count.get_name_leafdata());
    if (last_error_handling_reset_age.is_set || is_set(last_error_handling_reset_age.yfilter)) leaf_name_data.push_back(last_error_handling_reset_age.get_name_leafdata());
    if (last_update_malformed_age.is_set || is_set(last_update_malformed_age.yfilter)) leaf_name_data.push_back(last_update_malformed_age.get_name_leafdata());
    if (last_update_memory_allocation_fail_age.is_set || is_set(last_update_memory_allocation_fail_age.yfilter)) leaf_name_data.push_back(last_update_memory_allocation_fail_age.get_name_leafdata());
    if (total_update_message_count.is_set || is_set(total_update_message_count.yfilter)) leaf_name_data.push_back(total_update_message_count.get_name_leafdata());
    if (update_attribute_discard_count.is_set || is_set(update_attribute_discard_count.yfilter)) leaf_name_data.push_back(update_attribute_discard_count.get_name_leafdata());
    if (update_error_handling_avoid_reset.is_set || is_set(update_error_handling_avoid_reset.yfilter)) leaf_name_data.push_back(update_error_handling_avoid_reset.get_name_leafdata());
    if (update_error_handling_reset_count.is_set || is_set(update_error_handling_reset_count.yfilter)) leaf_name_data.push_back(update_error_handling_reset_count.get_name_leafdata());
    if (update_error_message_list_count.is_set || is_set(update_error_message_list_count.yfilter)) leaf_name_data.push_back(update_error_message_list_count.get_name_leafdata());
    if (update_malformed_message_count.is_set || is_set(update_malformed_message_count.yfilter)) leaf_name_data.push_back(update_malformed_message_count.get_name_leafdata());
    if (update_memory_allocation_fail_count.is_set || is_set(update_memory_allocation_fail_count.yfilter)) leaf_name_data.push_back(update_memory_allocation_fail_count.get_name_leafdata());
    if (update_vrf_name.is_set || is_set(update_vrf_name.yfilter)) leaf_name_data.push_back(update_vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "establishment-action-count")
    {
        for(auto const & c : establishment_action_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount>();
        c->parent = this;
        establishment_action_count.push_back(c);
        return c;
    }

    if(child_yang_name == "first-update-error-handling-reset-timestamp")
    {
        if(first_update_error_handling_reset_timestamp == nullptr)
        {
            first_update_error_handling_reset_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp>();
        }
        return first_update_error_handling_reset_timestamp;
    }

    if(child_yang_name == "first-update-malformed-timestamp")
    {
        if(first_update_malformed_timestamp == nullptr)
        {
            first_update_malformed_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp>();
        }
        return first_update_malformed_timestamp;
    }

    if(child_yang_name == "first-update-memory-allocation-fail-timestamp")
    {
        if(first_update_memory_allocation_fail_timestamp == nullptr)
        {
            first_update_memory_allocation_fail_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp>();
        }
        return first_update_memory_allocation_fail_timestamp;
    }

    if(child_yang_name == "last-error-handling-reset-timestamp")
    {
        if(last_error_handling_reset_timestamp == nullptr)
        {
            last_error_handling_reset_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp>();
        }
        return last_error_handling_reset_timestamp;
    }

    if(child_yang_name == "last-update-malformed-timestamp")
    {
        if(last_update_malformed_timestamp == nullptr)
        {
            last_update_malformed_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp>();
        }
        return last_update_malformed_timestamp;
    }

    if(child_yang_name == "last-update-memory-allocation-fail-timestamp")
    {
        if(last_update_memory_allocation_fail_timestamp == nullptr)
        {
            last_update_memory_allocation_fail_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp>();
        }
        return last_update_memory_allocation_fail_timestamp;
    }

    if(child_yang_name == "update-error-message")
    {
        for(auto const & c : update_error_message)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage>();
        c->parent = this;
        update_error_message.push_back(c);
        return c;
    }

    if(child_yang_name == "update-neighbor-address")
    {
        if(update_neighbor_address == nullptr)
        {
            update_neighbor_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress>();
        }
        return update_neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : establishment_action_count)
    {
        children[c->get_segment_path()] = c;
    }

    if(first_update_error_handling_reset_timestamp != nullptr)
    {
        children["first-update-error-handling-reset-timestamp"] = first_update_error_handling_reset_timestamp;
    }

    if(first_update_malformed_timestamp != nullptr)
    {
        children["first-update-malformed-timestamp"] = first_update_malformed_timestamp;
    }

    if(first_update_memory_allocation_fail_timestamp != nullptr)
    {
        children["first-update-memory-allocation-fail-timestamp"] = first_update_memory_allocation_fail_timestamp;
    }

    if(last_error_handling_reset_timestamp != nullptr)
    {
        children["last-error-handling-reset-timestamp"] = last_error_handling_reset_timestamp;
    }

    if(last_update_malformed_timestamp != nullptr)
    {
        children["last-update-malformed-timestamp"] = last_update_malformed_timestamp;
    }

    if(last_update_memory_allocation_fail_timestamp != nullptr)
    {
        children["last-update-memory-allocation-fail-timestamp"] = last_update_memory_allocation_fail_timestamp;
    }

    for (auto const & c : update_error_message)
    {
        children[c->get_segment_path()] = c;
    }

    if(update_neighbor_address != nullptr)
    {
        children["update-neighbor-address"] = update_neighbor_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "establishment-total-update-message-count")
    {
        establishment_total_update_message_count = value;
        establishment_total_update_message_count.value_namespace = name_space;
        establishment_total_update_message_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-error-handling-reset-age")
    {
        last_error_handling_reset_age = value;
        last_error_handling_reset_age.value_namespace = name_space;
        last_error_handling_reset_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-malformed-age")
    {
        last_update_malformed_age = value;
        last_update_malformed_age.value_namespace = name_space;
        last_update_malformed_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-memory-allocation-fail-age")
    {
        last_update_memory_allocation_fail_age = value;
        last_update_memory_allocation_fail_age.value_namespace = name_space;
        last_update_memory_allocation_fail_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-update-message-count")
    {
        total_update_message_count = value;
        total_update_message_count.value_namespace = name_space;
        total_update_message_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-attribute-discard-count")
    {
        update_attribute_discard_count = value;
        update_attribute_discard_count.value_namespace = name_space;
        update_attribute_discard_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-error-handling-avoid-reset")
    {
        update_error_handling_avoid_reset = value;
        update_error_handling_avoid_reset.value_namespace = name_space;
        update_error_handling_avoid_reset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-error-handling-reset-count")
    {
        update_error_handling_reset_count = value;
        update_error_handling_reset_count.value_namespace = name_space;
        update_error_handling_reset_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-error-message-list-count")
    {
        update_error_message_list_count = value;
        update_error_message_list_count.value_namespace = name_space;
        update_error_message_list_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-malformed-message-count")
    {
        update_malformed_message_count = value;
        update_malformed_message_count.value_namespace = name_space;
        update_malformed_message_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-memory-allocation-fail-count")
    {
        update_memory_allocation_fail_count = value;
        update_memory_allocation_fail_count.value_namespace = name_space;
        update_memory_allocation_fail_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-vrf-name")
    {
        update_vrf_name = value;
        update_vrf_name.value_namespace = name_space;
        update_vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "establishment-total-update-message-count")
    {
        establishment_total_update_message_count.yfilter = yfilter;
    }
    if(value_path == "last-error-handling-reset-age")
    {
        last_error_handling_reset_age.yfilter = yfilter;
    }
    if(value_path == "last-update-malformed-age")
    {
        last_update_malformed_age.yfilter = yfilter;
    }
    if(value_path == "last-update-memory-allocation-fail-age")
    {
        last_update_memory_allocation_fail_age.yfilter = yfilter;
    }
    if(value_path == "total-update-message-count")
    {
        total_update_message_count.yfilter = yfilter;
    }
    if(value_path == "update-attribute-discard-count")
    {
        update_attribute_discard_count.yfilter = yfilter;
    }
    if(value_path == "update-error-handling-avoid-reset")
    {
        update_error_handling_avoid_reset.yfilter = yfilter;
    }
    if(value_path == "update-error-handling-reset-count")
    {
        update_error_handling_reset_count.yfilter = yfilter;
    }
    if(value_path == "update-error-message-list-count")
    {
        update_error_message_list_count.yfilter = yfilter;
    }
    if(value_path == "update-malformed-message-count")
    {
        update_malformed_message_count.yfilter = yfilter;
    }
    if(value_path == "update-memory-allocation-fail-count")
    {
        update_memory_allocation_fail_count.yfilter = yfilter;
    }
    if(value_path == "update-vrf-name")
    {
        update_vrf_name.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "establishment-action-count" || name == "first-update-error-handling-reset-timestamp" || name == "first-update-malformed-timestamp" || name == "first-update-memory-allocation-fail-timestamp" || name == "last-error-handling-reset-timestamp" || name == "last-update-malformed-timestamp" || name == "last-update-memory-allocation-fail-timestamp" || name == "update-error-message" || name == "update-neighbor-address" || name == "neighbor-address" || name == "establishment-total-update-message-count" || name == "last-error-handling-reset-age" || name == "last-update-malformed-age" || name == "last-update-memory-allocation-fail-age" || name == "total-update-message-count" || name == "update-attribute-discard-count" || name == "update-error-handling-avoid-reset" || name == "update-error-handling-reset-count" || name == "update-error-message-list-count" || name == "update-malformed-message-count" || name == "update-memory-allocation-fail-count" || name == "update-vrf-name")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount::EstablishmentActionCount()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "establishment-action-count"; yang_parent_name = "update-inbound-error-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount::~EstablishmentActionCount()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "establishment-action-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp::FirstUpdateErrorHandlingResetTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "first-update-error-handling-reset-timestamp"; yang_parent_name = "update-inbound-error-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp::~FirstUpdateErrorHandlingResetTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-update-error-handling-reset-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp::FirstUpdateMalformedTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "first-update-malformed-timestamp"; yang_parent_name = "update-inbound-error-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp::~FirstUpdateMalformedTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-update-malformed-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp::FirstUpdateMemoryAllocationFailTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "first-update-memory-allocation-fail-timestamp"; yang_parent_name = "update-inbound-error-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp::~FirstUpdateMemoryAllocationFailTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-update-memory-allocation-fail-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp::LastErrorHandlingResetTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "last-error-handling-reset-timestamp"; yang_parent_name = "update-inbound-error-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp::~LastErrorHandlingResetTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-error-handling-reset-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp::LastUpdateMalformedTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "last-update-malformed-timestamp"; yang_parent_name = "update-inbound-error-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp::~LastUpdateMalformedTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-malformed-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp::LastUpdateMemoryAllocationFailTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "last-update-memory-allocation-fail-timestamp"; yang_parent_name = "update-inbound-error-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp::~LastUpdateMemoryAllocationFailTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-memory-allocation-fail-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorMessage()
    :
    update_attribute_discard_count{YType::uint32, "update-attribute-discard-count"},
    update_error_final_action{YType::enumeration, "update-error-final-action"},
    update_error_nlri_address_family{YType::enumeration, "update-error-nlri-address-family"},
    update_error_nlri_string{YType::str, "update-error-nlri-string"},
    update_error_nlri_string_truncated{YType::boolean, "update-error-nlri-string-truncated"}
    	,
    update_message_reset_data(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData>())
	,update_message_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp>())
{
    update_message_reset_data->parent = this;
    update_message_timestamp->parent = this;

    yang_name = "update-error-message"; yang_parent_name = "update-inbound-error-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::~UpdateErrorMessage()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::has_data() const
{
    for (std::size_t index=0; index<update_error_element.size(); index++)
    {
        if(update_error_element[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<update_message_data.size(); index++)
    {
        if(update_message_data[index]->has_data())
            return true;
    }
    return update_attribute_discard_count.is_set
	|| update_error_final_action.is_set
	|| update_error_nlri_address_family.is_set
	|| update_error_nlri_string.is_set
	|| update_error_nlri_string_truncated.is_set
	|| (update_message_reset_data !=  nullptr && update_message_reset_data->has_data())
	|| (update_message_timestamp !=  nullptr && update_message_timestamp->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::has_operation() const
{
    for (std::size_t index=0; index<update_error_element.size(); index++)
    {
        if(update_error_element[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<update_message_data.size(); index++)
    {
        if(update_message_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(update_attribute_discard_count.yfilter)
	|| ydk::is_set(update_error_final_action.yfilter)
	|| ydk::is_set(update_error_nlri_address_family.yfilter)
	|| ydk::is_set(update_error_nlri_string.yfilter)
	|| ydk::is_set(update_error_nlri_string_truncated.yfilter)
	|| (update_message_reset_data !=  nullptr && update_message_reset_data->has_operation())
	|| (update_message_timestamp !=  nullptr && update_message_timestamp->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-error-message";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_attribute_discard_count.is_set || is_set(update_attribute_discard_count.yfilter)) leaf_name_data.push_back(update_attribute_discard_count.get_name_leafdata());
    if (update_error_final_action.is_set || is_set(update_error_final_action.yfilter)) leaf_name_data.push_back(update_error_final_action.get_name_leafdata());
    if (update_error_nlri_address_family.is_set || is_set(update_error_nlri_address_family.yfilter)) leaf_name_data.push_back(update_error_nlri_address_family.get_name_leafdata());
    if (update_error_nlri_string.is_set || is_set(update_error_nlri_string.yfilter)) leaf_name_data.push_back(update_error_nlri_string.get_name_leafdata());
    if (update_error_nlri_string_truncated.is_set || is_set(update_error_nlri_string_truncated.yfilter)) leaf_name_data.push_back(update_error_nlri_string_truncated.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "update-error-element")
    {
        for(auto const & c : update_error_element)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement>();
        c->parent = this;
        update_error_element.push_back(c);
        return c;
    }

    if(child_yang_name == "update-message-data")
    {
        for(auto const & c : update_message_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData>();
        c->parent = this;
        update_message_data.push_back(c);
        return c;
    }

    if(child_yang_name == "update-message-reset-data")
    {
        if(update_message_reset_data == nullptr)
        {
            update_message_reset_data = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData>();
        }
        return update_message_reset_data;
    }

    if(child_yang_name == "update-message-timestamp")
    {
        if(update_message_timestamp == nullptr)
        {
            update_message_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp>();
        }
        return update_message_timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : update_error_element)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : update_message_data)
    {
        children[c->get_segment_path()] = c;
    }

    if(update_message_reset_data != nullptr)
    {
        children["update-message-reset-data"] = update_message_reset_data;
    }

    if(update_message_timestamp != nullptr)
    {
        children["update-message-timestamp"] = update_message_timestamp;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "update-attribute-discard-count")
    {
        update_attribute_discard_count = value;
        update_attribute_discard_count.value_namespace = name_space;
        update_attribute_discard_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-error-final-action")
    {
        update_error_final_action = value;
        update_error_final_action.value_namespace = name_space;
        update_error_final_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-error-nlri-address-family")
    {
        update_error_nlri_address_family = value;
        update_error_nlri_address_family.value_namespace = name_space;
        update_error_nlri_address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-error-nlri-string")
    {
        update_error_nlri_string = value;
        update_error_nlri_string.value_namespace = name_space;
        update_error_nlri_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-error-nlri-string-truncated")
    {
        update_error_nlri_string_truncated = value;
        update_error_nlri_string_truncated.value_namespace = name_space;
        update_error_nlri_string_truncated.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "update-attribute-discard-count")
    {
        update_attribute_discard_count.yfilter = yfilter;
    }
    if(value_path == "update-error-final-action")
    {
        update_error_final_action.yfilter = yfilter;
    }
    if(value_path == "update-error-nlri-address-family")
    {
        update_error_nlri_address_family.yfilter = yfilter;
    }
    if(value_path == "update-error-nlri-string")
    {
        update_error_nlri_string.yfilter = yfilter;
    }
    if(value_path == "update-error-nlri-string-truncated")
    {
        update_error_nlri_string_truncated.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update-error-element" || name == "update-message-data" || name == "update-message-reset-data" || name == "update-message-timestamp" || name == "update-attribute-discard-count" || name == "update-error-final-action" || name == "update-error-nlri-address-family" || name == "update-error-nlri-string" || name == "update-error-nlri-string-truncated")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement::UpdateErrorElement()
    :
    update_attribute_code{YType::uint8, "update-attribute-code"},
    update_attribute_flags{YType::uint8, "update-attribute-flags"},
    update_attribute_length{YType::uint16, "update-attribute-length"},
    update_error_action{YType::enumeration, "update-error-action"},
    update_error_data{YType::str, "update-error-data"},
    update_error_data_length{YType::uint16, "update-error-data-length"}
{

    yang_name = "update-error-element"; yang_parent_name = "update-error-message"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement::~UpdateErrorElement()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement::has_data() const
{
    return update_attribute_code.is_set
	|| update_attribute_flags.is_set
	|| update_attribute_length.is_set
	|| update_error_action.is_set
	|| update_error_data.is_set
	|| update_error_data_length.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(update_attribute_code.yfilter)
	|| ydk::is_set(update_attribute_flags.yfilter)
	|| ydk::is_set(update_attribute_length.yfilter)
	|| ydk::is_set(update_error_action.yfilter)
	|| ydk::is_set(update_error_data.yfilter)
	|| ydk::is_set(update_error_data_length.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-error-element";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_attribute_code.is_set || is_set(update_attribute_code.yfilter)) leaf_name_data.push_back(update_attribute_code.get_name_leafdata());
    if (update_attribute_flags.is_set || is_set(update_attribute_flags.yfilter)) leaf_name_data.push_back(update_attribute_flags.get_name_leafdata());
    if (update_attribute_length.is_set || is_set(update_attribute_length.yfilter)) leaf_name_data.push_back(update_attribute_length.get_name_leafdata());
    if (update_error_action.is_set || is_set(update_error_action.yfilter)) leaf_name_data.push_back(update_error_action.get_name_leafdata());
    if (update_error_data.is_set || is_set(update_error_data.yfilter)) leaf_name_data.push_back(update_error_data.get_name_leafdata());
    if (update_error_data_length.is_set || is_set(update_error_data_length.yfilter)) leaf_name_data.push_back(update_error_data_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "update-attribute-code")
    {
        update_attribute_code = value;
        update_attribute_code.value_namespace = name_space;
        update_attribute_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-attribute-flags")
    {
        update_attribute_flags = value;
        update_attribute_flags.value_namespace = name_space;
        update_attribute_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-attribute-length")
    {
        update_attribute_length = value;
        update_attribute_length.value_namespace = name_space;
        update_attribute_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-error-action")
    {
        update_error_action = value;
        update_error_action.value_namespace = name_space;
        update_error_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-error-data")
    {
        update_error_data = value;
        update_error_data.value_namespace = name_space;
        update_error_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-error-data-length")
    {
        update_error_data_length = value;
        update_error_data_length.value_namespace = name_space;
        update_error_data_length.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "update-attribute-code")
    {
        update_attribute_code.yfilter = yfilter;
    }
    if(value_path == "update-attribute-flags")
    {
        update_attribute_flags.yfilter = yfilter;
    }
    if(value_path == "update-attribute-length")
    {
        update_attribute_length.yfilter = yfilter;
    }
    if(value_path == "update-error-action")
    {
        update_error_action.yfilter = yfilter;
    }
    if(value_path == "update-error-data")
    {
        update_error_data.yfilter = yfilter;
    }
    if(value_path == "update-error-data-length")
    {
        update_error_data_length.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update-attribute-code" || name == "update-attribute-flags" || name == "update-attribute-length" || name == "update-error-action" || name == "update-error-data" || name == "update-error-data-length")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData::UpdateMessageData()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "update-message-data"; yang_parent_name = "update-error-message"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData::~UpdateMessageData()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-message-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData::UpdateMessageResetData()
    :
    update_error_reset_notification_code{YType::uint8, "update-error-reset-notification-code"},
    update_error_reset_notification_data{YType::str, "update-error-reset-notification-data"},
    update_error_reset_notification_data_length{YType::uint16, "update-error-reset-notification-data-length"},
    update_error_reset_notification_sub_code{YType::uint16, "update-error-reset-notification-sub-code"},
    update_error_reset_reason{YType::enumeration, "update-error-reset-reason"}
{

    yang_name = "update-message-reset-data"; yang_parent_name = "update-error-message"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData::~UpdateMessageResetData()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData::has_data() const
{
    return update_error_reset_notification_code.is_set
	|| update_error_reset_notification_data.is_set
	|| update_error_reset_notification_data_length.is_set
	|| update_error_reset_notification_sub_code.is_set
	|| update_error_reset_reason.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(update_error_reset_notification_code.yfilter)
	|| ydk::is_set(update_error_reset_notification_data.yfilter)
	|| ydk::is_set(update_error_reset_notification_data_length.yfilter)
	|| ydk::is_set(update_error_reset_notification_sub_code.yfilter)
	|| ydk::is_set(update_error_reset_reason.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-message-reset-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_error_reset_notification_code.is_set || is_set(update_error_reset_notification_code.yfilter)) leaf_name_data.push_back(update_error_reset_notification_code.get_name_leafdata());
    if (update_error_reset_notification_data.is_set || is_set(update_error_reset_notification_data.yfilter)) leaf_name_data.push_back(update_error_reset_notification_data.get_name_leafdata());
    if (update_error_reset_notification_data_length.is_set || is_set(update_error_reset_notification_data_length.yfilter)) leaf_name_data.push_back(update_error_reset_notification_data_length.get_name_leafdata());
    if (update_error_reset_notification_sub_code.is_set || is_set(update_error_reset_notification_sub_code.yfilter)) leaf_name_data.push_back(update_error_reset_notification_sub_code.get_name_leafdata());
    if (update_error_reset_reason.is_set || is_set(update_error_reset_reason.yfilter)) leaf_name_data.push_back(update_error_reset_reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "update-error-reset-notification-code")
    {
        update_error_reset_notification_code = value;
        update_error_reset_notification_code.value_namespace = name_space;
        update_error_reset_notification_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-error-reset-notification-data")
    {
        update_error_reset_notification_data = value;
        update_error_reset_notification_data.value_namespace = name_space;
        update_error_reset_notification_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-error-reset-notification-data-length")
    {
        update_error_reset_notification_data_length = value;
        update_error_reset_notification_data_length.value_namespace = name_space;
        update_error_reset_notification_data_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-error-reset-notification-sub-code")
    {
        update_error_reset_notification_sub_code = value;
        update_error_reset_notification_sub_code.value_namespace = name_space;
        update_error_reset_notification_sub_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-error-reset-reason")
    {
        update_error_reset_reason = value;
        update_error_reset_reason.value_namespace = name_space;
        update_error_reset_reason.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "update-error-reset-notification-code")
    {
        update_error_reset_notification_code.yfilter = yfilter;
    }
    if(value_path == "update-error-reset-notification-data")
    {
        update_error_reset_notification_data.yfilter = yfilter;
    }
    if(value_path == "update-error-reset-notification-data-length")
    {
        update_error_reset_notification_data_length.yfilter = yfilter;
    }
    if(value_path == "update-error-reset-notification-sub-code")
    {
        update_error_reset_notification_sub_code.yfilter = yfilter;
    }
    if(value_path == "update-error-reset-reason")
    {
        update_error_reset_reason.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update-error-reset-notification-code" || name == "update-error-reset-notification-data" || name == "update-error-reset-notification-data-length" || name == "update-error-reset-notification-sub-code" || name == "update-error-reset-reason")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp::UpdateMessageTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "update-message-timestamp"; yang_parent_name = "update-error-message"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp::~UpdateMessageTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-message-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::UpdateNeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress>())
	,l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnVplsAddress>())
{
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;
    l2vpn_mspw_address->parent = this;
    l2vpn_vpls_address->parent = this;

    yang_name = "update-neighbor-address"; yang_parent_name = "update-inbound-error-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::~UpdateNeighborAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4_sr_policy_address != nullptr)
    {
        children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(l2vpn_vpls_address != nullptr)
    {
        children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
        ipv4vpna_mcastddress.value_namespace = name_space;
        ipv4vpna_mcastddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
        l2vpn_evpn_address.value_namespace = name_space;
        l2vpn_evpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
        ls_ls_address.value_namespace = name_space;
        ls_ls_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "l2vpn-mspw-address" || name == "l2vpn-vpls-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-flowspec-address" || name == "ipv4-label-address" || name == "ipv4-mcast-address" || name == "ipv4-mdt-address" || name == "ipv4-tunnel-address" || name == "ipv4mvpn-address" || name == "ipv4vpn-address" || name == "ipv4vpn-flowspec-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-flowspec-address" || name == "ipv6-label-address" || name == "ipv6-mcast-address" || name == "ipv6mvpn-address" || name == "ipv6vpn-address" || name == "ipv6vpn-flowspec-address" || name == "ipv6vpn-mcast-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "rt-constraint-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "update-neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "update-neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "update-neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "update-neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorVrf::UpdateInboundErrorVrf()
    :
    last_update_malformed_age{YType::uint32, "last-update-malformed-age"},
    update_malformed_message_count{YType::uint32, "update-malformed-message-count"},
    update_malformed_neighbor_count{YType::uint32, "update-malformed-neighbor-count"},
    update_vrf_name{YType::str, "update-vrf-name"}
    	,
    last_update_malformed_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp>())
{
    last_update_malformed_timestamp->parent = this;

    yang_name = "update-inbound-error-vrf"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorVrf::~UpdateInboundErrorVrf()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorVrf::has_data() const
{
    return last_update_malformed_age.is_set
	|| update_malformed_message_count.is_set
	|| update_malformed_neighbor_count.is_set
	|| update_vrf_name.is_set
	|| (last_update_malformed_timestamp !=  nullptr && last_update_malformed_timestamp->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorVrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_update_malformed_age.yfilter)
	|| ydk::is_set(update_malformed_message_count.yfilter)
	|| ydk::is_set(update_malformed_neighbor_count.yfilter)
	|| ydk::is_set(update_vrf_name.yfilter)
	|| (last_update_malformed_timestamp !=  nullptr && last_update_malformed_timestamp->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-inbound-error-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_update_malformed_age.is_set || is_set(last_update_malformed_age.yfilter)) leaf_name_data.push_back(last_update_malformed_age.get_name_leafdata());
    if (update_malformed_message_count.is_set || is_set(update_malformed_message_count.yfilter)) leaf_name_data.push_back(update_malformed_message_count.get_name_leafdata());
    if (update_malformed_neighbor_count.is_set || is_set(update_malformed_neighbor_count.yfilter)) leaf_name_data.push_back(update_malformed_neighbor_count.get_name_leafdata());
    if (update_vrf_name.is_set || is_set(update_vrf_name.yfilter)) leaf_name_data.push_back(update_vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-update-malformed-timestamp")
    {
        if(last_update_malformed_timestamp == nullptr)
        {
            last_update_malformed_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp>();
        }
        return last_update_malformed_timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_update_malformed_timestamp != nullptr)
    {
        children["last-update-malformed-timestamp"] = last_update_malformed_timestamp;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-update-malformed-age")
    {
        last_update_malformed_age = value;
        last_update_malformed_age.value_namespace = name_space;
        last_update_malformed_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-malformed-message-count")
    {
        update_malformed_message_count = value;
        update_malformed_message_count.value_namespace = name_space;
        update_malformed_message_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-malformed-neighbor-count")
    {
        update_malformed_neighbor_count = value;
        update_malformed_neighbor_count.value_namespace = name_space;
        update_malformed_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-vrf-name")
    {
        update_vrf_name = value;
        update_vrf_name.value_namespace = name_space;
        update_vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-update-malformed-age")
    {
        last_update_malformed_age.yfilter = yfilter;
    }
    if(value_path == "update-malformed-message-count")
    {
        update_malformed_message_count.yfilter = yfilter;
    }
    if(value_path == "update-malformed-neighbor-count")
    {
        update_malformed_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "update-vrf-name")
    {
        update_vrf_name.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-update-malformed-timestamp" || name == "last-update-malformed-age" || name == "update-malformed-message-count" || name == "update-malformed-neighbor-count" || name == "update-vrf-name")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp::LastUpdateMalformedTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "last-update-malformed-timestamp"; yang_parent_name = "update-inbound-error-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp::~LastUpdateMalformedTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-malformed-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbors()
{

    yang_name = "update-inbound-filter-neighbors"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::~UpdateInboundFilterNeighbors()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::has_data() const
{
    for (std::size_t index=0; index<update_inbound_filter_neighbor.size(); index++)
    {
        if(update_inbound_filter_neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::has_operation() const
{
    for (std::size_t index=0; index<update_inbound_filter_neighbor.size(); index++)
    {
        if(update_inbound_filter_neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-inbound-filter-neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "update-inbound-filter-neighbor")
    {
        for(auto const & c : update_inbound_filter_neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor>();
        c->parent = this;
        update_inbound_filter_neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : update_inbound_filter_neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update-inbound-filter-neighbor")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateInboundFilterNeighbor()
    :
    neighbor_address{YType::str, "neighbor-address"},
    configured_update_filter_message_buffer_count{YType::uint32, "configured-update-filter-message-buffer-count"},
    establishment_total_filter_update_message_count{YType::uint32, "establishment-total-filter-update-message-count"},
    establishment_update_filtered_message_count{YType::uint32, "establishment-update-filtered-message-count"},
    last_update_filtered_age{YType::uint32, "last-update-filtered-age"},
    message_update_attribute_filtering_enabled{YType::boolean, "message-update-attribute-filtering-enabled"},
    operational_update_attribute_filtering_enabled{YType::boolean, "operational-update-attribute-filtering-enabled"},
    operational_update_filter_message_buffer_count{YType::uint32, "operational-update-filter-message-buffer-count"},
    total_filter_update_message_count{YType::uint32, "total-filter-update-message-count"},
    update_attribute_filter_group_name{YType::str, "update-attribute-filter-group-name"},
    update_filter_logging_enabled{YType::boolean, "update-filter-logging-enabled"},
    update_filter_message_buffer_circular{YType::boolean, "update-filter-message-buffer-circular"},
    update_filter_message_list_count{YType::uint32, "update-filter-message-list-count"},
    update_filtered_message_count{YType::uint32, "update-filtered-message-count"},
    update_vrf_name{YType::str, "update-vrf-name"}
    	,
    first_update_filtered_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp>())
	,last_update_filtered_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp>())
	,update_neighbor_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress>())
{
    first_update_filtered_timestamp->parent = this;
    last_update_filtered_timestamp->parent = this;
    update_neighbor_address->parent = this;

    yang_name = "update-inbound-filter-neighbor"; yang_parent_name = "update-inbound-filter-neighbors"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::~UpdateInboundFilterNeighbor()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::has_data() const
{
    for (std::size_t index=0; index<update_attribute_filter_attributes.size(); index++)
    {
        if(update_attribute_filter_attributes[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<update_filter_message.size(); index++)
    {
        if(update_filter_message[index]->has_data())
            return true;
    }
    return neighbor_address.is_set
	|| configured_update_filter_message_buffer_count.is_set
	|| establishment_total_filter_update_message_count.is_set
	|| establishment_update_filtered_message_count.is_set
	|| last_update_filtered_age.is_set
	|| message_update_attribute_filtering_enabled.is_set
	|| operational_update_attribute_filtering_enabled.is_set
	|| operational_update_filter_message_buffer_count.is_set
	|| total_filter_update_message_count.is_set
	|| update_attribute_filter_group_name.is_set
	|| update_filter_logging_enabled.is_set
	|| update_filter_message_buffer_circular.is_set
	|| update_filter_message_list_count.is_set
	|| update_filtered_message_count.is_set
	|| update_vrf_name.is_set
	|| (first_update_filtered_timestamp !=  nullptr && first_update_filtered_timestamp->has_data())
	|| (last_update_filtered_timestamp !=  nullptr && last_update_filtered_timestamp->has_data())
	|| (update_neighbor_address !=  nullptr && update_neighbor_address->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::has_operation() const
{
    for (std::size_t index=0; index<update_attribute_filter_attributes.size(); index++)
    {
        if(update_attribute_filter_attributes[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<update_filter_message.size(); index++)
    {
        if(update_filter_message[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(configured_update_filter_message_buffer_count.yfilter)
	|| ydk::is_set(establishment_total_filter_update_message_count.yfilter)
	|| ydk::is_set(establishment_update_filtered_message_count.yfilter)
	|| ydk::is_set(last_update_filtered_age.yfilter)
	|| ydk::is_set(message_update_attribute_filtering_enabled.yfilter)
	|| ydk::is_set(operational_update_attribute_filtering_enabled.yfilter)
	|| ydk::is_set(operational_update_filter_message_buffer_count.yfilter)
	|| ydk::is_set(total_filter_update_message_count.yfilter)
	|| ydk::is_set(update_attribute_filter_group_name.yfilter)
	|| ydk::is_set(update_filter_logging_enabled.yfilter)
	|| ydk::is_set(update_filter_message_buffer_circular.yfilter)
	|| ydk::is_set(update_filter_message_list_count.yfilter)
	|| ydk::is_set(update_filtered_message_count.yfilter)
	|| ydk::is_set(update_vrf_name.yfilter)
	|| (first_update_filtered_timestamp !=  nullptr && first_update_filtered_timestamp->has_operation())
	|| (last_update_filtered_timestamp !=  nullptr && last_update_filtered_timestamp->has_operation())
	|| (update_neighbor_address !=  nullptr && update_neighbor_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-inbound-filter-neighbor" <<"[neighbor-address='" <<neighbor_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (configured_update_filter_message_buffer_count.is_set || is_set(configured_update_filter_message_buffer_count.yfilter)) leaf_name_data.push_back(configured_update_filter_message_buffer_count.get_name_leafdata());
    if (establishment_total_filter_update_message_count.is_set || is_set(establishment_total_filter_update_message_count.yfilter)) leaf_name_data.push_back(establishment_total_filter_update_message_count.get_name_leafdata());
    if (establishment_update_filtered_message_count.is_set || is_set(establishment_update_filtered_message_count.yfilter)) leaf_name_data.push_back(establishment_update_filtered_message_count.get_name_leafdata());
    if (last_update_filtered_age.is_set || is_set(last_update_filtered_age.yfilter)) leaf_name_data.push_back(last_update_filtered_age.get_name_leafdata());
    if (message_update_attribute_filtering_enabled.is_set || is_set(message_update_attribute_filtering_enabled.yfilter)) leaf_name_data.push_back(message_update_attribute_filtering_enabled.get_name_leafdata());
    if (operational_update_attribute_filtering_enabled.is_set || is_set(operational_update_attribute_filtering_enabled.yfilter)) leaf_name_data.push_back(operational_update_attribute_filtering_enabled.get_name_leafdata());
    if (operational_update_filter_message_buffer_count.is_set || is_set(operational_update_filter_message_buffer_count.yfilter)) leaf_name_data.push_back(operational_update_filter_message_buffer_count.get_name_leafdata());
    if (total_filter_update_message_count.is_set || is_set(total_filter_update_message_count.yfilter)) leaf_name_data.push_back(total_filter_update_message_count.get_name_leafdata());
    if (update_attribute_filter_group_name.is_set || is_set(update_attribute_filter_group_name.yfilter)) leaf_name_data.push_back(update_attribute_filter_group_name.get_name_leafdata());
    if (update_filter_logging_enabled.is_set || is_set(update_filter_logging_enabled.yfilter)) leaf_name_data.push_back(update_filter_logging_enabled.get_name_leafdata());
    if (update_filter_message_buffer_circular.is_set || is_set(update_filter_message_buffer_circular.yfilter)) leaf_name_data.push_back(update_filter_message_buffer_circular.get_name_leafdata());
    if (update_filter_message_list_count.is_set || is_set(update_filter_message_list_count.yfilter)) leaf_name_data.push_back(update_filter_message_list_count.get_name_leafdata());
    if (update_filtered_message_count.is_set || is_set(update_filtered_message_count.yfilter)) leaf_name_data.push_back(update_filtered_message_count.get_name_leafdata());
    if (update_vrf_name.is_set || is_set(update_vrf_name.yfilter)) leaf_name_data.push_back(update_vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "first-update-filtered-timestamp")
    {
        if(first_update_filtered_timestamp == nullptr)
        {
            first_update_filtered_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp>();
        }
        return first_update_filtered_timestamp;
    }

    if(child_yang_name == "last-update-filtered-timestamp")
    {
        if(last_update_filtered_timestamp == nullptr)
        {
            last_update_filtered_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp>();
        }
        return last_update_filtered_timestamp;
    }

    if(child_yang_name == "update-attribute-filter-attributes")
    {
        for(auto const & c : update_attribute_filter_attributes)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes>();
        c->parent = this;
        update_attribute_filter_attributes.push_back(c);
        return c;
    }

    if(child_yang_name == "update-filter-message")
    {
        for(auto const & c : update_filter_message)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage>();
        c->parent = this;
        update_filter_message.push_back(c);
        return c;
    }

    if(child_yang_name == "update-neighbor-address")
    {
        if(update_neighbor_address == nullptr)
        {
            update_neighbor_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress>();
        }
        return update_neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(first_update_filtered_timestamp != nullptr)
    {
        children["first-update-filtered-timestamp"] = first_update_filtered_timestamp;
    }

    if(last_update_filtered_timestamp != nullptr)
    {
        children["last-update-filtered-timestamp"] = last_update_filtered_timestamp;
    }

    for (auto const & c : update_attribute_filter_attributes)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : update_filter_message)
    {
        children[c->get_segment_path()] = c;
    }

    if(update_neighbor_address != nullptr)
    {
        children["update-neighbor-address"] = update_neighbor_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-update-filter-message-buffer-count")
    {
        configured_update_filter_message_buffer_count = value;
        configured_update_filter_message_buffer_count.value_namespace = name_space;
        configured_update_filter_message_buffer_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "establishment-total-filter-update-message-count")
    {
        establishment_total_filter_update_message_count = value;
        establishment_total_filter_update_message_count.value_namespace = name_space;
        establishment_total_filter_update_message_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "establishment-update-filtered-message-count")
    {
        establishment_update_filtered_message_count = value;
        establishment_update_filtered_message_count.value_namespace = name_space;
        establishment_update_filtered_message_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-filtered-age")
    {
        last_update_filtered_age = value;
        last_update_filtered_age.value_namespace = name_space;
        last_update_filtered_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "message-update-attribute-filtering-enabled")
    {
        message_update_attribute_filtering_enabled = value;
        message_update_attribute_filtering_enabled.value_namespace = name_space;
        message_update_attribute_filtering_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operational-update-attribute-filtering-enabled")
    {
        operational_update_attribute_filtering_enabled = value;
        operational_update_attribute_filtering_enabled.value_namespace = name_space;
        operational_update_attribute_filtering_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operational-update-filter-message-buffer-count")
    {
        operational_update_filter_message_buffer_count = value;
        operational_update_filter_message_buffer_count.value_namespace = name_space;
        operational_update_filter_message_buffer_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-filter-update-message-count")
    {
        total_filter_update_message_count = value;
        total_filter_update_message_count.value_namespace = name_space;
        total_filter_update_message_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-attribute-filter-group-name")
    {
        update_attribute_filter_group_name = value;
        update_attribute_filter_group_name.value_namespace = name_space;
        update_attribute_filter_group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-filter-logging-enabled")
    {
        update_filter_logging_enabled = value;
        update_filter_logging_enabled.value_namespace = name_space;
        update_filter_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-filter-message-buffer-circular")
    {
        update_filter_message_buffer_circular = value;
        update_filter_message_buffer_circular.value_namespace = name_space;
        update_filter_message_buffer_circular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-filter-message-list-count")
    {
        update_filter_message_list_count = value;
        update_filter_message_list_count.value_namespace = name_space;
        update_filter_message_list_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-filtered-message-count")
    {
        update_filtered_message_count = value;
        update_filtered_message_count.value_namespace = name_space;
        update_filtered_message_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-vrf-name")
    {
        update_vrf_name = value;
        update_vrf_name.value_namespace = name_space;
        update_vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "configured-update-filter-message-buffer-count")
    {
        configured_update_filter_message_buffer_count.yfilter = yfilter;
    }
    if(value_path == "establishment-total-filter-update-message-count")
    {
        establishment_total_filter_update_message_count.yfilter = yfilter;
    }
    if(value_path == "establishment-update-filtered-message-count")
    {
        establishment_update_filtered_message_count.yfilter = yfilter;
    }
    if(value_path == "last-update-filtered-age")
    {
        last_update_filtered_age.yfilter = yfilter;
    }
    if(value_path == "message-update-attribute-filtering-enabled")
    {
        message_update_attribute_filtering_enabled.yfilter = yfilter;
    }
    if(value_path == "operational-update-attribute-filtering-enabled")
    {
        operational_update_attribute_filtering_enabled.yfilter = yfilter;
    }
    if(value_path == "operational-update-filter-message-buffer-count")
    {
        operational_update_filter_message_buffer_count.yfilter = yfilter;
    }
    if(value_path == "total-filter-update-message-count")
    {
        total_filter_update_message_count.yfilter = yfilter;
    }
    if(value_path == "update-attribute-filter-group-name")
    {
        update_attribute_filter_group_name.yfilter = yfilter;
    }
    if(value_path == "update-filter-logging-enabled")
    {
        update_filter_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "update-filter-message-buffer-circular")
    {
        update_filter_message_buffer_circular.yfilter = yfilter;
    }
    if(value_path == "update-filter-message-list-count")
    {
        update_filter_message_list_count.yfilter = yfilter;
    }
    if(value_path == "update-filtered-message-count")
    {
        update_filtered_message_count.yfilter = yfilter;
    }
    if(value_path == "update-vrf-name")
    {
        update_vrf_name.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "first-update-filtered-timestamp" || name == "last-update-filtered-timestamp" || name == "update-attribute-filter-attributes" || name == "update-filter-message" || name == "update-neighbor-address" || name == "neighbor-address" || name == "configured-update-filter-message-buffer-count" || name == "establishment-total-filter-update-message-count" || name == "establishment-update-filtered-message-count" || name == "last-update-filtered-age" || name == "message-update-attribute-filtering-enabled" || name == "operational-update-attribute-filtering-enabled" || name == "operational-update-filter-message-buffer-count" || name == "total-filter-update-message-count" || name == "update-attribute-filter-group-name" || name == "update-filter-logging-enabled" || name == "update-filter-message-buffer-circular" || name == "update-filter-message-list-count" || name == "update-filtered-message-count" || name == "update-vrf-name")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp::FirstUpdateFilteredTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "first-update-filtered-timestamp"; yang_parent_name = "update-inbound-filter-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp::~FirstUpdateFilteredTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-update-filtered-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp::LastUpdateFilteredTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "last-update-filtered-timestamp"; yang_parent_name = "update-inbound-filter-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp::~LastUpdateFilteredTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-filtered-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::UpdateAttributeFilterAttributes()
    :
    establishment_update_filter_match_count{YType::uint32, "establishment-update-filter-match-count"},
    last_update_filter_match_age{YType::uint32, "last-update-filter-match-age"},
    update_filter_action{YType::enumeration, "update-filter-action"},
    update_filter_match_count{YType::uint32, "update-filter-match-count"},
    update_internal_attribute_code{YType::uint32, "update-internal-attribute-code"}
    	,
    last_update_filter_match_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp>())
{
    last_update_filter_match_timestamp->parent = this;

    yang_name = "update-attribute-filter-attributes"; yang_parent_name = "update-inbound-filter-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::~UpdateAttributeFilterAttributes()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::has_data() const
{
    return establishment_update_filter_match_count.is_set
	|| last_update_filter_match_age.is_set
	|| update_filter_action.is_set
	|| update_filter_match_count.is_set
	|| update_internal_attribute_code.is_set
	|| (last_update_filter_match_timestamp !=  nullptr && last_update_filter_match_timestamp->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(establishment_update_filter_match_count.yfilter)
	|| ydk::is_set(last_update_filter_match_age.yfilter)
	|| ydk::is_set(update_filter_action.yfilter)
	|| ydk::is_set(update_filter_match_count.yfilter)
	|| ydk::is_set(update_internal_attribute_code.yfilter)
	|| (last_update_filter_match_timestamp !=  nullptr && last_update_filter_match_timestamp->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-attribute-filter-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (establishment_update_filter_match_count.is_set || is_set(establishment_update_filter_match_count.yfilter)) leaf_name_data.push_back(establishment_update_filter_match_count.get_name_leafdata());
    if (last_update_filter_match_age.is_set || is_set(last_update_filter_match_age.yfilter)) leaf_name_data.push_back(last_update_filter_match_age.get_name_leafdata());
    if (update_filter_action.is_set || is_set(update_filter_action.yfilter)) leaf_name_data.push_back(update_filter_action.get_name_leafdata());
    if (update_filter_match_count.is_set || is_set(update_filter_match_count.yfilter)) leaf_name_data.push_back(update_filter_match_count.get_name_leafdata());
    if (update_internal_attribute_code.is_set || is_set(update_internal_attribute_code.yfilter)) leaf_name_data.push_back(update_internal_attribute_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-update-filter-match-timestamp")
    {
        if(last_update_filter_match_timestamp == nullptr)
        {
            last_update_filter_match_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp>();
        }
        return last_update_filter_match_timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_update_filter_match_timestamp != nullptr)
    {
        children["last-update-filter-match-timestamp"] = last_update_filter_match_timestamp;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "establishment-update-filter-match-count")
    {
        establishment_update_filter_match_count = value;
        establishment_update_filter_match_count.value_namespace = name_space;
        establishment_update_filter_match_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-filter-match-age")
    {
        last_update_filter_match_age = value;
        last_update_filter_match_age.value_namespace = name_space;
        last_update_filter_match_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-filter-action")
    {
        update_filter_action = value;
        update_filter_action.value_namespace = name_space;
        update_filter_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-filter-match-count")
    {
        update_filter_match_count = value;
        update_filter_match_count.value_namespace = name_space;
        update_filter_match_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-internal-attribute-code")
    {
        update_internal_attribute_code = value;
        update_internal_attribute_code.value_namespace = name_space;
        update_internal_attribute_code.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "establishment-update-filter-match-count")
    {
        establishment_update_filter_match_count.yfilter = yfilter;
    }
    if(value_path == "last-update-filter-match-age")
    {
        last_update_filter_match_age.yfilter = yfilter;
    }
    if(value_path == "update-filter-action")
    {
        update_filter_action.yfilter = yfilter;
    }
    if(value_path == "update-filter-match-count")
    {
        update_filter_match_count.yfilter = yfilter;
    }
    if(value_path == "update-internal-attribute-code")
    {
        update_internal_attribute_code.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-update-filter-match-timestamp" || name == "establishment-update-filter-match-count" || name == "last-update-filter-match-age" || name == "update-filter-action" || name == "update-filter-match-count" || name == "update-internal-attribute-code")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp::LastUpdateFilterMatchTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "last-update-filter-match-timestamp"; yang_parent_name = "update-attribute-filter-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp::~LastUpdateFilterMatchTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-filter-match-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessage()
    :
    update_filter_final_action{YType::enumeration, "update-filter-final-action"},
    update_filter_nlri_address_family{YType::enumeration, "update-filter-nlri-address-family"},
    update_filter_nlri_string{YType::str, "update-filter-nlri-string"},
    update_filter_nlri_string_truncated{YType::boolean, "update-filter-nlri-string-truncated"},
    update_filtered_attribute_count{YType::uint32, "update-filtered-attribute-count"}
    	,
    update_filter_message_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp>())
{
    update_filter_message_timestamp->parent = this;

    yang_name = "update-filter-message"; yang_parent_name = "update-inbound-filter-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::~UpdateFilterMessage()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::has_data() const
{
    for (std::size_t index=0; index<update_filter_element.size(); index++)
    {
        if(update_filter_element[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<update_filter_message_data.size(); index++)
    {
        if(update_filter_message_data[index]->has_data())
            return true;
    }
    return update_filter_final_action.is_set
	|| update_filter_nlri_address_family.is_set
	|| update_filter_nlri_string.is_set
	|| update_filter_nlri_string_truncated.is_set
	|| update_filtered_attribute_count.is_set
	|| (update_filter_message_timestamp !=  nullptr && update_filter_message_timestamp->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::has_operation() const
{
    for (std::size_t index=0; index<update_filter_element.size(); index++)
    {
        if(update_filter_element[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<update_filter_message_data.size(); index++)
    {
        if(update_filter_message_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(update_filter_final_action.yfilter)
	|| ydk::is_set(update_filter_nlri_address_family.yfilter)
	|| ydk::is_set(update_filter_nlri_string.yfilter)
	|| ydk::is_set(update_filter_nlri_string_truncated.yfilter)
	|| ydk::is_set(update_filtered_attribute_count.yfilter)
	|| (update_filter_message_timestamp !=  nullptr && update_filter_message_timestamp->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-filter-message";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_filter_final_action.is_set || is_set(update_filter_final_action.yfilter)) leaf_name_data.push_back(update_filter_final_action.get_name_leafdata());
    if (update_filter_nlri_address_family.is_set || is_set(update_filter_nlri_address_family.yfilter)) leaf_name_data.push_back(update_filter_nlri_address_family.get_name_leafdata());
    if (update_filter_nlri_string.is_set || is_set(update_filter_nlri_string.yfilter)) leaf_name_data.push_back(update_filter_nlri_string.get_name_leafdata());
    if (update_filter_nlri_string_truncated.is_set || is_set(update_filter_nlri_string_truncated.yfilter)) leaf_name_data.push_back(update_filter_nlri_string_truncated.get_name_leafdata());
    if (update_filtered_attribute_count.is_set || is_set(update_filtered_attribute_count.yfilter)) leaf_name_data.push_back(update_filtered_attribute_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "update-filter-element")
    {
        for(auto const & c : update_filter_element)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement>();
        c->parent = this;
        update_filter_element.push_back(c);
        return c;
    }

    if(child_yang_name == "update-filter-message-data")
    {
        for(auto const & c : update_filter_message_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData>();
        c->parent = this;
        update_filter_message_data.push_back(c);
        return c;
    }

    if(child_yang_name == "update-filter-message-timestamp")
    {
        if(update_filter_message_timestamp == nullptr)
        {
            update_filter_message_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp>();
        }
        return update_filter_message_timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : update_filter_element)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : update_filter_message_data)
    {
        children[c->get_segment_path()] = c;
    }

    if(update_filter_message_timestamp != nullptr)
    {
        children["update-filter-message-timestamp"] = update_filter_message_timestamp;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "update-filter-final-action")
    {
        update_filter_final_action = value;
        update_filter_final_action.value_namespace = name_space;
        update_filter_final_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-filter-nlri-address-family")
    {
        update_filter_nlri_address_family = value;
        update_filter_nlri_address_family.value_namespace = name_space;
        update_filter_nlri_address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-filter-nlri-string")
    {
        update_filter_nlri_string = value;
        update_filter_nlri_string.value_namespace = name_space;
        update_filter_nlri_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-filter-nlri-string-truncated")
    {
        update_filter_nlri_string_truncated = value;
        update_filter_nlri_string_truncated.value_namespace = name_space;
        update_filter_nlri_string_truncated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-filtered-attribute-count")
    {
        update_filtered_attribute_count = value;
        update_filtered_attribute_count.value_namespace = name_space;
        update_filtered_attribute_count.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "update-filter-final-action")
    {
        update_filter_final_action.yfilter = yfilter;
    }
    if(value_path == "update-filter-nlri-address-family")
    {
        update_filter_nlri_address_family.yfilter = yfilter;
    }
    if(value_path == "update-filter-nlri-string")
    {
        update_filter_nlri_string.yfilter = yfilter;
    }
    if(value_path == "update-filter-nlri-string-truncated")
    {
        update_filter_nlri_string_truncated.yfilter = yfilter;
    }
    if(value_path == "update-filtered-attribute-count")
    {
        update_filtered_attribute_count.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update-filter-element" || name == "update-filter-message-data" || name == "update-filter-message-timestamp" || name == "update-filter-final-action" || name == "update-filter-nlri-address-family" || name == "update-filter-nlri-string" || name == "update-filter-nlri-string-truncated" || name == "update-filtered-attribute-count")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement::UpdateFilterElement()
    :
    update_attribute_code{YType::uint8, "update-attribute-code"},
    update_attribute_flags{YType::uint8, "update-attribute-flags"},
    update_filter_action{YType::enumeration, "update-filter-action"}
{

    yang_name = "update-filter-element"; yang_parent_name = "update-filter-message"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement::~UpdateFilterElement()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement::has_data() const
{
    return update_attribute_code.is_set
	|| update_attribute_flags.is_set
	|| update_filter_action.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(update_attribute_code.yfilter)
	|| ydk::is_set(update_attribute_flags.yfilter)
	|| ydk::is_set(update_filter_action.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-filter-element";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_attribute_code.is_set || is_set(update_attribute_code.yfilter)) leaf_name_data.push_back(update_attribute_code.get_name_leafdata());
    if (update_attribute_flags.is_set || is_set(update_attribute_flags.yfilter)) leaf_name_data.push_back(update_attribute_flags.get_name_leafdata());
    if (update_filter_action.is_set || is_set(update_filter_action.yfilter)) leaf_name_data.push_back(update_filter_action.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "update-attribute-code")
    {
        update_attribute_code = value;
        update_attribute_code.value_namespace = name_space;
        update_attribute_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-attribute-flags")
    {
        update_attribute_flags = value;
        update_attribute_flags.value_namespace = name_space;
        update_attribute_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-filter-action")
    {
        update_filter_action = value;
        update_filter_action.value_namespace = name_space;
        update_filter_action.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "update-attribute-code")
    {
        update_attribute_code.yfilter = yfilter;
    }
    if(value_path == "update-attribute-flags")
    {
        update_attribute_flags.yfilter = yfilter;
    }
    if(value_path == "update-filter-action")
    {
        update_filter_action.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update-attribute-code" || name == "update-attribute-flags" || name == "update-filter-action")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData::UpdateFilterMessageData()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "update-filter-message-data"; yang_parent_name = "update-filter-message"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData::~UpdateFilterMessageData()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-filter-message-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp::UpdateFilterMessageTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "update-filter-message-timestamp"; yang_parent_name = "update-filter-message"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp::~UpdateFilterMessageTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-filter-message-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::UpdateNeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnMspwAddress>())
	,l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnVplsAddress>())
{
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;
    l2vpn_mspw_address->parent = this;
    l2vpn_vpls_address->parent = this;

    yang_name = "update-neighbor-address"; yang_parent_name = "update-inbound-filter-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::~UpdateNeighborAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4_sr_policy_address != nullptr)
    {
        children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(l2vpn_vpls_address != nullptr)
    {
        children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
        ipv4vpna_mcastddress.value_namespace = name_space;
        ipv4vpna_mcastddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
        l2vpn_evpn_address.value_namespace = name_space;
        l2vpn_evpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
        ls_ls_address.value_namespace = name_space;
        ls_ls_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "l2vpn-mspw-address" || name == "l2vpn-vpls-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-flowspec-address" || name == "ipv4-label-address" || name == "ipv4-mcast-address" || name == "ipv4-mdt-address" || name == "ipv4-tunnel-address" || name == "ipv4mvpn-address" || name == "ipv4vpn-address" || name == "ipv4vpn-flowspec-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-flowspec-address" || name == "ipv6-label-address" || name == "ipv6-mcast-address" || name == "ipv6mvpn-address" || name == "ipv6vpn-address" || name == "ipv6vpn-flowspec-address" || name == "ipv6vpn-mcast-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "rt-constraint-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "update-neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "update-neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "update-neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "update-neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterVrf::UpdateInboundFilterVrf()
    :
    last_update_filtered_age{YType::uint32, "last-update-filtered-age"},
    update_filtered_message_count{YType::uint32, "update-filtered-message-count"},
    update_filtered_neighbor_count{YType::uint32, "update-filtered-neighbor-count"},
    update_vrf_name{YType::str, "update-vrf-name"}
    	,
    last_update_filtered_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp>())
{
    last_update_filtered_timestamp->parent = this;

    yang_name = "update-inbound-filter-vrf"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterVrf::~UpdateInboundFilterVrf()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterVrf::has_data() const
{
    return last_update_filtered_age.is_set
	|| update_filtered_message_count.is_set
	|| update_filtered_neighbor_count.is_set
	|| update_vrf_name.is_set
	|| (last_update_filtered_timestamp !=  nullptr && last_update_filtered_timestamp->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterVrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_update_filtered_age.yfilter)
	|| ydk::is_set(update_filtered_message_count.yfilter)
	|| ydk::is_set(update_filtered_neighbor_count.yfilter)
	|| ydk::is_set(update_vrf_name.yfilter)
	|| (last_update_filtered_timestamp !=  nullptr && last_update_filtered_timestamp->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-inbound-filter-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_update_filtered_age.is_set || is_set(last_update_filtered_age.yfilter)) leaf_name_data.push_back(last_update_filtered_age.get_name_leafdata());
    if (update_filtered_message_count.is_set || is_set(update_filtered_message_count.yfilter)) leaf_name_data.push_back(update_filtered_message_count.get_name_leafdata());
    if (update_filtered_neighbor_count.is_set || is_set(update_filtered_neighbor_count.yfilter)) leaf_name_data.push_back(update_filtered_neighbor_count.get_name_leafdata());
    if (update_vrf_name.is_set || is_set(update_vrf_name.yfilter)) leaf_name_data.push_back(update_vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-update-filtered-timestamp")
    {
        if(last_update_filtered_timestamp == nullptr)
        {
            last_update_filtered_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp>();
        }
        return last_update_filtered_timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_update_filtered_timestamp != nullptr)
    {
        children["last-update-filtered-timestamp"] = last_update_filtered_timestamp;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-update-filtered-age")
    {
        last_update_filtered_age = value;
        last_update_filtered_age.value_namespace = name_space;
        last_update_filtered_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-filtered-message-count")
    {
        update_filtered_message_count = value;
        update_filtered_message_count.value_namespace = name_space;
        update_filtered_message_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-filtered-neighbor-count")
    {
        update_filtered_neighbor_count = value;
        update_filtered_neighbor_count.value_namespace = name_space;
        update_filtered_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-vrf-name")
    {
        update_vrf_name = value;
        update_vrf_name.value_namespace = name_space;
        update_vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-update-filtered-age")
    {
        last_update_filtered_age.yfilter = yfilter;
    }
    if(value_path == "update-filtered-message-count")
    {
        update_filtered_message_count.yfilter = yfilter;
    }
    if(value_path == "update-filtered-neighbor-count")
    {
        update_filtered_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "update-vrf-name")
    {
        update_vrf_name.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-update-filtered-timestamp" || name == "last-update-filtered-age" || name == "update-filtered-message-count" || name == "update-filtered-neighbor-count" || name == "update-vrf-name")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::LastUpdateFilteredTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "last-update-filtered-timestamp"; yang_parent_name = "update-inbound-filter-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::~LastUpdateFilteredTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-filtered-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::InstanceStandby()
    :
    attribute_filter_groups(std::make_shared<Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups>())
	,attributes(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes>())
	,default_vrf(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf>())
	,rpki_refresh_afs(std::make_shared<Bgp::Instances::Instance::InstanceStandby::RpkiRefreshAfs>())
	,rpki_routes(std::make_shared<Bgp::Instances::Instance::InstanceStandby::RpkiRoutes>())
	,rpki_server_list(std::make_shared<Bgp::Instances::Instance::InstanceStandby::RpkiServerList>())
	,rpki_summary(std::make_shared<Bgp::Instances::Instance::InstanceStandby::RpkiSummary>())
	,rt_entries(std::make_shared<Bgp::Instances::Instance::InstanceStandby::RtEntries>())
	,update_generation_process(std::make_shared<Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess>())
	,update_inbound_error_process(std::make_shared<Bgp::Instances::Instance::InstanceStandby::UpdateInboundErrorProcess>())
	,update_inbound_filter_process(std::make_shared<Bgp::Instances::Instance::InstanceStandby::UpdateInboundFilterProcess>())
	,vrfs(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs>())
{
    attribute_filter_groups->parent = this;
    attributes->parent = this;
    default_vrf->parent = this;
    rpki_refresh_afs->parent = this;
    rpki_routes->parent = this;
    rpki_server_list->parent = this;
    rpki_summary->parent = this;
    rt_entries->parent = this;
    update_generation_process->parent = this;
    update_inbound_error_process->parent = this;
    update_inbound_filter_process->parent = this;
    vrfs->parent = this;

    yang_name = "instance-standby"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::~InstanceStandby()
{
}

bool Bgp::Instances::Instance::InstanceStandby::has_data() const
{
    return (attribute_filter_groups !=  nullptr && attribute_filter_groups->has_data())
	|| (attributes !=  nullptr && attributes->has_data())
	|| (default_vrf !=  nullptr && default_vrf->has_data())
	|| (rpki_refresh_afs !=  nullptr && rpki_refresh_afs->has_data())
	|| (rpki_routes !=  nullptr && rpki_routes->has_data())
	|| (rpki_server_list !=  nullptr && rpki_server_list->has_data())
	|| (rpki_summary !=  nullptr && rpki_summary->has_data())
	|| (rt_entries !=  nullptr && rt_entries->has_data())
	|| (update_generation_process !=  nullptr && update_generation_process->has_data())
	|| (update_inbound_error_process !=  nullptr && update_inbound_error_process->has_data())
	|| (update_inbound_filter_process !=  nullptr && update_inbound_filter_process->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::has_operation() const
{
    return is_set(yfilter)
	|| (attribute_filter_groups !=  nullptr && attribute_filter_groups->has_operation())
	|| (attributes !=  nullptr && attributes->has_operation())
	|| (default_vrf !=  nullptr && default_vrf->has_operation())
	|| (rpki_refresh_afs !=  nullptr && rpki_refresh_afs->has_operation())
	|| (rpki_routes !=  nullptr && rpki_routes->has_operation())
	|| (rpki_server_list !=  nullptr && rpki_server_list->has_operation())
	|| (rpki_summary !=  nullptr && rpki_summary->has_operation())
	|| (rt_entries !=  nullptr && rt_entries->has_operation())
	|| (update_generation_process !=  nullptr && update_generation_process->has_operation())
	|| (update_inbound_error_process !=  nullptr && update_inbound_error_process->has_operation())
	|| (update_inbound_filter_process !=  nullptr && update_inbound_filter_process->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance-standby";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-filter-groups")
    {
        if(attribute_filter_groups == nullptr)
        {
            attribute_filter_groups = std::make_shared<Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups>();
        }
        return attribute_filter_groups;
    }

    if(child_yang_name == "attributes")
    {
        if(attributes == nullptr)
        {
            attributes = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes>();
        }
        return attributes;
    }

    if(child_yang_name == "default-vrf")
    {
        if(default_vrf == nullptr)
        {
            default_vrf = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf>();
        }
        return default_vrf;
    }

    if(child_yang_name == "rpki-refresh-afs")
    {
        if(rpki_refresh_afs == nullptr)
        {
            rpki_refresh_afs = std::make_shared<Bgp::Instances::Instance::InstanceStandby::RpkiRefreshAfs>();
        }
        return rpki_refresh_afs;
    }

    if(child_yang_name == "rpki-routes")
    {
        if(rpki_routes == nullptr)
        {
            rpki_routes = std::make_shared<Bgp::Instances::Instance::InstanceStandby::RpkiRoutes>();
        }
        return rpki_routes;
    }

    if(child_yang_name == "rpki-server-list")
    {
        if(rpki_server_list == nullptr)
        {
            rpki_server_list = std::make_shared<Bgp::Instances::Instance::InstanceStandby::RpkiServerList>();
        }
        return rpki_server_list;
    }

    if(child_yang_name == "rpki-summary")
    {
        if(rpki_summary == nullptr)
        {
            rpki_summary = std::make_shared<Bgp::Instances::Instance::InstanceStandby::RpkiSummary>();
        }
        return rpki_summary;
    }

    if(child_yang_name == "rt-entries")
    {
        if(rt_entries == nullptr)
        {
            rt_entries = std::make_shared<Bgp::Instances::Instance::InstanceStandby::RtEntries>();
        }
        return rt_entries;
    }

    if(child_yang_name == "update-generation-process")
    {
        if(update_generation_process == nullptr)
        {
            update_generation_process = std::make_shared<Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess>();
        }
        return update_generation_process;
    }

    if(child_yang_name == "update-inbound-error-process")
    {
        if(update_inbound_error_process == nullptr)
        {
            update_inbound_error_process = std::make_shared<Bgp::Instances::Instance::InstanceStandby::UpdateInboundErrorProcess>();
        }
        return update_inbound_error_process;
    }

    if(child_yang_name == "update-inbound-filter-process")
    {
        if(update_inbound_filter_process == nullptr)
        {
            update_inbound_filter_process = std::make_shared<Bgp::Instances::Instance::InstanceStandby::UpdateInboundFilterProcess>();
        }
        return update_inbound_filter_process;
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs>();
        }
        return vrfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attribute_filter_groups != nullptr)
    {
        children["attribute-filter-groups"] = attribute_filter_groups;
    }

    if(attributes != nullptr)
    {
        children["attributes"] = attributes;
    }

    if(default_vrf != nullptr)
    {
        children["default-vrf"] = default_vrf;
    }

    if(rpki_refresh_afs != nullptr)
    {
        children["rpki-refresh-afs"] = rpki_refresh_afs;
    }

    if(rpki_routes != nullptr)
    {
        children["rpki-routes"] = rpki_routes;
    }

    if(rpki_server_list != nullptr)
    {
        children["rpki-server-list"] = rpki_server_list;
    }

    if(rpki_summary != nullptr)
    {
        children["rpki-summary"] = rpki_summary;
    }

    if(rt_entries != nullptr)
    {
        children["rt-entries"] = rt_entries;
    }

    if(update_generation_process != nullptr)
    {
        children["update-generation-process"] = update_generation_process;
    }

    if(update_inbound_error_process != nullptr)
    {
        children["update-inbound-error-process"] = update_inbound_error_process;
    }

    if(update_inbound_filter_process != nullptr)
    {
        children["update-inbound-filter-process"] = update_inbound_filter_process;
    }

    if(vrfs != nullptr)
    {
        children["vrfs"] = vrfs;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-filter-groups" || name == "attributes" || name == "default-vrf" || name == "rpki-refresh-afs" || name == "rpki-routes" || name == "rpki-server-list" || name == "rpki-summary" || name == "rt-entries" || name == "update-generation-process" || name == "update-inbound-error-process" || name == "update-inbound-filter-process" || name == "vrfs")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroups()
{

    yang_name = "attribute-filter-groups"; yang_parent_name = "instance-standby"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::~AttributeFilterGroups()
{
}

bool Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::has_data() const
{
    for (std::size_t index=0; index<attribute_filter_group.size(); index++)
    {
        if(attribute_filter_group[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::has_operation() const
{
    for (std::size_t index=0; index<attribute_filter_group.size(); index++)
    {
        if(attribute_filter_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-filter-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-filter-group")
    {
        for(auto const & c : attribute_filter_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup>();
        c->parent = this;
        attribute_filter_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : attribute_filter_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-filter-group")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::AttributeFilterGroup()
    :
    group_name{YType::str, "group-name"},
    attribute_filter_group_name{YType::str, "attribute-filter-group-name"},
    attribute_filter_total_group_count{YType::uint32, "attribute-filter-total-group-count"}
{

    yang_name = "attribute-filter-group"; yang_parent_name = "attribute-filter-groups"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::~AttributeFilterGroup()
{
}

bool Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::has_data() const
{
    for (std::size_t index=0; index<attribute_filter_entry.size(); index++)
    {
        if(attribute_filter_entry[index]->has_data())
            return true;
    }
    return group_name.is_set
	|| attribute_filter_group_name.is_set
	|| attribute_filter_total_group_count.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::has_operation() const
{
    for (std::size_t index=0; index<attribute_filter_entry.size(); index++)
    {
        if(attribute_filter_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(attribute_filter_group_name.yfilter)
	|| ydk::is_set(attribute_filter_total_group_count.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-filter-group" <<"[group-name='" <<group_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (attribute_filter_group_name.is_set || is_set(attribute_filter_group_name.yfilter)) leaf_name_data.push_back(attribute_filter_group_name.get_name_leafdata());
    if (attribute_filter_total_group_count.is_set || is_set(attribute_filter_total_group_count.yfilter)) leaf_name_data.push_back(attribute_filter_total_group_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-filter-entry")
    {
        for(auto const & c : attribute_filter_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::AttributeFilterEntry>();
        c->parent = this;
        attribute_filter_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : attribute_filter_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-filter-group-name")
    {
        attribute_filter_group_name = value;
        attribute_filter_group_name.value_namespace = name_space;
        attribute_filter_group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-filter-total-group-count")
    {
        attribute_filter_total_group_count = value;
        attribute_filter_total_group_count.value_namespace = name_space;
        attribute_filter_total_group_count.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "attribute-filter-group-name")
    {
        attribute_filter_group_name.yfilter = yfilter;
    }
    if(value_path == "attribute-filter-total-group-count")
    {
        attribute_filter_total_group_count.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-filter-entry" || name == "group-name" || name == "attribute-filter-group-name" || name == "attribute-filter-total-group-count")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::AttributeFilterEntry::AttributeFilterEntry()
    :
    attribute_filter_entry_range_end{YType::uint32, "attribute-filter-entry-range-end"},
    attribute_filter_entry_range_start{YType::uint32, "attribute-filter-entry-range-start"},
    attribute_filter_entry_requested_action{YType::enumeration, "attribute-filter-entry-requested-action"}
{

    yang_name = "attribute-filter-entry"; yang_parent_name = "attribute-filter-group"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::AttributeFilterEntry::~AttributeFilterEntry()
{
}

bool Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::AttributeFilterEntry::has_data() const
{
    return attribute_filter_entry_range_end.is_set
	|| attribute_filter_entry_range_start.is_set
	|| attribute_filter_entry_requested_action.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::AttributeFilterEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute_filter_entry_range_end.yfilter)
	|| ydk::is_set(attribute_filter_entry_range_start.yfilter)
	|| ydk::is_set(attribute_filter_entry_requested_action.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::AttributeFilterEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-filter-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::AttributeFilterEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_filter_entry_range_end.is_set || is_set(attribute_filter_entry_range_end.yfilter)) leaf_name_data.push_back(attribute_filter_entry_range_end.get_name_leafdata());
    if (attribute_filter_entry_range_start.is_set || is_set(attribute_filter_entry_range_start.yfilter)) leaf_name_data.push_back(attribute_filter_entry_range_start.get_name_leafdata());
    if (attribute_filter_entry_requested_action.is_set || is_set(attribute_filter_entry_requested_action.yfilter)) leaf_name_data.push_back(attribute_filter_entry_requested_action.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::AttributeFilterEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::AttributeFilterEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::AttributeFilterEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute-filter-entry-range-end")
    {
        attribute_filter_entry_range_end = value;
        attribute_filter_entry_range_end.value_namespace = name_space;
        attribute_filter_entry_range_end.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-filter-entry-range-start")
    {
        attribute_filter_entry_range_start = value;
        attribute_filter_entry_range_start.value_namespace = name_space;
        attribute_filter_entry_range_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-filter-entry-requested-action")
    {
        attribute_filter_entry_requested_action = value;
        attribute_filter_entry_requested_action.value_namespace = name_space;
        attribute_filter_entry_requested_action.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::AttributeFilterEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute-filter-entry-range-end")
    {
        attribute_filter_entry_range_end.yfilter = yfilter;
    }
    if(value_path == "attribute-filter-entry-range-start")
    {
        attribute_filter_entry_range_start.yfilter = yfilter;
    }
    if(value_path == "attribute-filter-entry-requested-action")
    {
        attribute_filter_entry_requested_action.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups::AttributeFilterGroup::AttributeFilterEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-filter-entry-range-end" || name == "attribute-filter-entry-range-start" || name == "attribute-filter-entry-requested-action")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attributes()
{

    yang_name = "attributes"; yang_parent_name = "instance-standby"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::~Attributes()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::has_data() const
{
    for (std::size_t index=0; index<attribute.size(); index++)
    {
        if(attribute[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::has_operation() const
{
    for (std::size_t index=0; index<attribute.size(); index++)
    {
        if(attribute[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute")
    {
        for(auto const & c : attribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute>();
        c->parent = this;
        attribute.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : attribute)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::Attribute()
    :
    attribute_cache_bucket{YType::int32, "attribute-cache-bucket"},
    attribute_cache_id{YType::int32, "attribute-cache-id"},
    attribute_iid{YType::int32, "attribute-iid"},
    attribute_instance_id{YType::uint8, "attribute-instance-id"},
    attribute_structure_hash_value{YType::uint32, "attribute-structure-hash-value"},
    attribute_structure_id{YType::uint32, "attribute-structure-id"},
    process_instance_id{YType::uint8, "process-instance-id"},
    reference_count{YType::uint32, "reference-count"}
    	,
    attribute_info(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo>())
{
    attribute_info->parent = this;

    yang_name = "attribute"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::~Attribute()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::has_data() const
{
    return attribute_cache_bucket.is_set
	|| attribute_cache_id.is_set
	|| attribute_iid.is_set
	|| attribute_instance_id.is_set
	|| attribute_structure_hash_value.is_set
	|| attribute_structure_id.is_set
	|| process_instance_id.is_set
	|| reference_count.is_set
	|| (attribute_info !=  nullptr && attribute_info->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute_cache_bucket.yfilter)
	|| ydk::is_set(attribute_cache_id.yfilter)
	|| ydk::is_set(attribute_iid.yfilter)
	|| ydk::is_set(attribute_instance_id.yfilter)
	|| ydk::is_set(attribute_structure_hash_value.yfilter)
	|| ydk::is_set(attribute_structure_id.yfilter)
	|| ydk::is_set(process_instance_id.yfilter)
	|| ydk::is_set(reference_count.yfilter)
	|| (attribute_info !=  nullptr && attribute_info->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_cache_bucket.is_set || is_set(attribute_cache_bucket.yfilter)) leaf_name_data.push_back(attribute_cache_bucket.get_name_leafdata());
    if (attribute_cache_id.is_set || is_set(attribute_cache_id.yfilter)) leaf_name_data.push_back(attribute_cache_id.get_name_leafdata());
    if (attribute_iid.is_set || is_set(attribute_iid.yfilter)) leaf_name_data.push_back(attribute_iid.get_name_leafdata());
    if (attribute_instance_id.is_set || is_set(attribute_instance_id.yfilter)) leaf_name_data.push_back(attribute_instance_id.get_name_leafdata());
    if (attribute_structure_hash_value.is_set || is_set(attribute_structure_hash_value.yfilter)) leaf_name_data.push_back(attribute_structure_hash_value.get_name_leafdata());
    if (attribute_structure_id.is_set || is_set(attribute_structure_id.yfilter)) leaf_name_data.push_back(attribute_structure_id.get_name_leafdata());
    if (process_instance_id.is_set || is_set(process_instance_id.yfilter)) leaf_name_data.push_back(process_instance_id.get_name_leafdata());
    if (reference_count.is_set || is_set(reference_count.yfilter)) leaf_name_data.push_back(reference_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-info")
    {
        if(attribute_info == nullptr)
        {
            attribute_info = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo>();
        }
        return attribute_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attribute_info != nullptr)
    {
        children["attribute-info"] = attribute_info;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute-cache-bucket")
    {
        attribute_cache_bucket = value;
        attribute_cache_bucket.value_namespace = name_space;
        attribute_cache_bucket.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-cache-id")
    {
        attribute_cache_id = value;
        attribute_cache_id.value_namespace = name_space;
        attribute_cache_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-iid")
    {
        attribute_iid = value;
        attribute_iid.value_namespace = name_space;
        attribute_iid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-instance-id")
    {
        attribute_instance_id = value;
        attribute_instance_id.value_namespace = name_space;
        attribute_instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-structure-hash-value")
    {
        attribute_structure_hash_value = value;
        attribute_structure_hash_value.value_namespace = name_space;
        attribute_structure_hash_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-structure-id")
    {
        attribute_structure_id = value;
        attribute_structure_id.value_namespace = name_space;
        attribute_structure_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-instance-id")
    {
        process_instance_id = value;
        process_instance_id.value_namespace = name_space;
        process_instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reference-count")
    {
        reference_count = value;
        reference_count.value_namespace = name_space;
        reference_count.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute-cache-bucket")
    {
        attribute_cache_bucket.yfilter = yfilter;
    }
    if(value_path == "attribute-cache-id")
    {
        attribute_cache_id.yfilter = yfilter;
    }
    if(value_path == "attribute-iid")
    {
        attribute_iid.yfilter = yfilter;
    }
    if(value_path == "attribute-instance-id")
    {
        attribute_instance_id.yfilter = yfilter;
    }
    if(value_path == "attribute-structure-hash-value")
    {
        attribute_structure_hash_value.yfilter = yfilter;
    }
    if(value_path == "attribute-structure-id")
    {
        attribute_structure_id.yfilter = yfilter;
    }
    if(value_path == "process-instance-id")
    {
        process_instance_id.yfilter = yfilter;
    }
    if(value_path == "reference-count")
    {
        reference_count.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-info" || name == "attribute-cache-bucket" || name == "attribute-cache-id" || name == "attribute-iid" || name == "attribute-instance-id" || name == "attribute-structure-hash-value" || name == "attribute-structure-id" || name == "process-instance-id" || name == "reference-count")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttributeInfo()
    :
    attribute_key_number{YType::uint32, "attribute-key-number"},
    attribute_reuse_id_config{YType::boolean, "attribute-reuse-id-config"},
    attribute_reuse_id_current{YType::uint32, "attribute-reuse-id-current"},
    attribute_reuse_id_keys{YType::uint32, "attribute-reuse-id-keys"},
    attribute_reuse_id_max_id{YType::uint32, "attribute-reuse-id-max-id"},
    attribute_reuse_id_node{YType::uint32, "attribute-reuse-id-node"},
    attribute_reuse_id_recover_sec{YType::uint32, "attribute-reuse-id-recover-sec"},
    is_application_gateway_present{YType::boolean, "is-application-gateway-present"},
    is_as_path2_byte{YType::boolean, "is-as-path2-byte"},
    is_attr_set_present{YType::boolean, "is-attr-set-present"},
    is_ribrnh_present{YType::boolean, "is-ribrnh-present"},
    is_rnh_present{YType::boolean, "is-rnh-present"},
    ribrnh_encap{YType::uint8, "ribrnh-encap"},
    ribrnh_mac{YType::str, "ribrnh-mac"},
    ribrnh_table{YType::uint32, "ribrnh-table"},
    ribrnh_vni{YType::uint32, "ribrnh-vni"},
    ribrnhip_table{YType::uint32, "ribrnhip-table"},
    rnh_addr_len{YType::uint32, "rnh-addr-len"},
    rnh_len{YType::uint8, "rnh-len"},
    rnh_type{YType::uint16, "rnh-type"},
    set_aigp_inbound_igp{YType::boolean, "set-aigp-inbound-igp"},
    set_aigp_inbound_metric{YType::boolean, "set-aigp-inbound-metric"},
    vpn_distinguisher{YType::uint32, "vpn-distinguisher"}
    	,
    attr_set(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet>())
	,common_attributes(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes>())
	,ribrnh_ip(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp>())
	,rnh_addr(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RnhAddr>())
{
    attr_set->parent = this;
    common_attributes->parent = this;
    ribrnh_ip->parent = this;
    rnh_addr->parent = this;

    yang_name = "attribute-info"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::~AttributeInfo()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::has_data() const
{
    return attribute_key_number.is_set
	|| attribute_reuse_id_config.is_set
	|| attribute_reuse_id_current.is_set
	|| attribute_reuse_id_keys.is_set
	|| attribute_reuse_id_max_id.is_set
	|| attribute_reuse_id_node.is_set
	|| attribute_reuse_id_recover_sec.is_set
	|| is_application_gateway_present.is_set
	|| is_as_path2_byte.is_set
	|| is_attr_set_present.is_set
	|| is_ribrnh_present.is_set
	|| is_rnh_present.is_set
	|| ribrnh_encap.is_set
	|| ribrnh_mac.is_set
	|| ribrnh_table.is_set
	|| ribrnh_vni.is_set
	|| ribrnhip_table.is_set
	|| rnh_addr_len.is_set
	|| rnh_len.is_set
	|| rnh_type.is_set
	|| set_aigp_inbound_igp.is_set
	|| set_aigp_inbound_metric.is_set
	|| vpn_distinguisher.is_set
	|| (attr_set !=  nullptr && attr_set->has_data())
	|| (common_attributes !=  nullptr && common_attributes->has_data())
	|| (ribrnh_ip !=  nullptr && ribrnh_ip->has_data())
	|| (rnh_addr !=  nullptr && rnh_addr->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute_key_number.yfilter)
	|| ydk::is_set(attribute_reuse_id_config.yfilter)
	|| ydk::is_set(attribute_reuse_id_current.yfilter)
	|| ydk::is_set(attribute_reuse_id_keys.yfilter)
	|| ydk::is_set(attribute_reuse_id_max_id.yfilter)
	|| ydk::is_set(attribute_reuse_id_node.yfilter)
	|| ydk::is_set(attribute_reuse_id_recover_sec.yfilter)
	|| ydk::is_set(is_application_gateway_present.yfilter)
	|| ydk::is_set(is_as_path2_byte.yfilter)
	|| ydk::is_set(is_attr_set_present.yfilter)
	|| ydk::is_set(is_ribrnh_present.yfilter)
	|| ydk::is_set(is_rnh_present.yfilter)
	|| ydk::is_set(ribrnh_encap.yfilter)
	|| ydk::is_set(ribrnh_mac.yfilter)
	|| ydk::is_set(ribrnh_table.yfilter)
	|| ydk::is_set(ribrnh_vni.yfilter)
	|| ydk::is_set(ribrnhip_table.yfilter)
	|| ydk::is_set(rnh_addr_len.yfilter)
	|| ydk::is_set(rnh_len.yfilter)
	|| ydk::is_set(rnh_type.yfilter)
	|| ydk::is_set(set_aigp_inbound_igp.yfilter)
	|| ydk::is_set(set_aigp_inbound_metric.yfilter)
	|| ydk::is_set(vpn_distinguisher.yfilter)
	|| (attr_set !=  nullptr && attr_set->has_operation())
	|| (common_attributes !=  nullptr && common_attributes->has_operation())
	|| (ribrnh_ip !=  nullptr && ribrnh_ip->has_operation())
	|| (rnh_addr !=  nullptr && rnh_addr->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_key_number.is_set || is_set(attribute_key_number.yfilter)) leaf_name_data.push_back(attribute_key_number.get_name_leafdata());
    if (attribute_reuse_id_config.is_set || is_set(attribute_reuse_id_config.yfilter)) leaf_name_data.push_back(attribute_reuse_id_config.get_name_leafdata());
    if (attribute_reuse_id_current.is_set || is_set(attribute_reuse_id_current.yfilter)) leaf_name_data.push_back(attribute_reuse_id_current.get_name_leafdata());
    if (attribute_reuse_id_keys.is_set || is_set(attribute_reuse_id_keys.yfilter)) leaf_name_data.push_back(attribute_reuse_id_keys.get_name_leafdata());
    if (attribute_reuse_id_max_id.is_set || is_set(attribute_reuse_id_max_id.yfilter)) leaf_name_data.push_back(attribute_reuse_id_max_id.get_name_leafdata());
    if (attribute_reuse_id_node.is_set || is_set(attribute_reuse_id_node.yfilter)) leaf_name_data.push_back(attribute_reuse_id_node.get_name_leafdata());
    if (attribute_reuse_id_recover_sec.is_set || is_set(attribute_reuse_id_recover_sec.yfilter)) leaf_name_data.push_back(attribute_reuse_id_recover_sec.get_name_leafdata());
    if (is_application_gateway_present.is_set || is_set(is_application_gateway_present.yfilter)) leaf_name_data.push_back(is_application_gateway_present.get_name_leafdata());
    if (is_as_path2_byte.is_set || is_set(is_as_path2_byte.yfilter)) leaf_name_data.push_back(is_as_path2_byte.get_name_leafdata());
    if (is_attr_set_present.is_set || is_set(is_attr_set_present.yfilter)) leaf_name_data.push_back(is_attr_set_present.get_name_leafdata());
    if (is_ribrnh_present.is_set || is_set(is_ribrnh_present.yfilter)) leaf_name_data.push_back(is_ribrnh_present.get_name_leafdata());
    if (is_rnh_present.is_set || is_set(is_rnh_present.yfilter)) leaf_name_data.push_back(is_rnh_present.get_name_leafdata());
    if (ribrnh_encap.is_set || is_set(ribrnh_encap.yfilter)) leaf_name_data.push_back(ribrnh_encap.get_name_leafdata());
    if (ribrnh_mac.is_set || is_set(ribrnh_mac.yfilter)) leaf_name_data.push_back(ribrnh_mac.get_name_leafdata());
    if (ribrnh_table.is_set || is_set(ribrnh_table.yfilter)) leaf_name_data.push_back(ribrnh_table.get_name_leafdata());
    if (ribrnh_vni.is_set || is_set(ribrnh_vni.yfilter)) leaf_name_data.push_back(ribrnh_vni.get_name_leafdata());
    if (ribrnhip_table.is_set || is_set(ribrnhip_table.yfilter)) leaf_name_data.push_back(ribrnhip_table.get_name_leafdata());
    if (rnh_addr_len.is_set || is_set(rnh_addr_len.yfilter)) leaf_name_data.push_back(rnh_addr_len.get_name_leafdata());
    if (rnh_len.is_set || is_set(rnh_len.yfilter)) leaf_name_data.push_back(rnh_len.get_name_leafdata());
    if (rnh_type.is_set || is_set(rnh_type.yfilter)) leaf_name_data.push_back(rnh_type.get_name_leafdata());
    if (set_aigp_inbound_igp.is_set || is_set(set_aigp_inbound_igp.yfilter)) leaf_name_data.push_back(set_aigp_inbound_igp.get_name_leafdata());
    if (set_aigp_inbound_metric.is_set || is_set(set_aigp_inbound_metric.yfilter)) leaf_name_data.push_back(set_aigp_inbound_metric.get_name_leafdata());
    if (vpn_distinguisher.is_set || is_set(vpn_distinguisher.yfilter)) leaf_name_data.push_back(vpn_distinguisher.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attr-set")
    {
        if(attr_set == nullptr)
        {
            attr_set = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet>();
        }
        return attr_set;
    }

    if(child_yang_name == "common-attributes")
    {
        if(common_attributes == nullptr)
        {
            common_attributes = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes>();
        }
        return common_attributes;
    }

    if(child_yang_name == "ribrnh-ip")
    {
        if(ribrnh_ip == nullptr)
        {
            ribrnh_ip = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp>();
        }
        return ribrnh_ip;
    }

    if(child_yang_name == "rnh-addr")
    {
        if(rnh_addr == nullptr)
        {
            rnh_addr = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RnhAddr>();
        }
        return rnh_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attr_set != nullptr)
    {
        children["attr-set"] = attr_set;
    }

    if(common_attributes != nullptr)
    {
        children["common-attributes"] = common_attributes;
    }

    if(ribrnh_ip != nullptr)
    {
        children["ribrnh-ip"] = ribrnh_ip;
    }

    if(rnh_addr != nullptr)
    {
        children["rnh-addr"] = rnh_addr;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute-key-number")
    {
        attribute_key_number = value;
        attribute_key_number.value_namespace = name_space;
        attribute_key_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-reuse-id-config")
    {
        attribute_reuse_id_config = value;
        attribute_reuse_id_config.value_namespace = name_space;
        attribute_reuse_id_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-reuse-id-current")
    {
        attribute_reuse_id_current = value;
        attribute_reuse_id_current.value_namespace = name_space;
        attribute_reuse_id_current.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-reuse-id-keys")
    {
        attribute_reuse_id_keys = value;
        attribute_reuse_id_keys.value_namespace = name_space;
        attribute_reuse_id_keys.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-reuse-id-max-id")
    {
        attribute_reuse_id_max_id = value;
        attribute_reuse_id_max_id.value_namespace = name_space;
        attribute_reuse_id_max_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-reuse-id-node")
    {
        attribute_reuse_id_node = value;
        attribute_reuse_id_node.value_namespace = name_space;
        attribute_reuse_id_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-reuse-id-recover-sec")
    {
        attribute_reuse_id_recover_sec = value;
        attribute_reuse_id_recover_sec.value_namespace = name_space;
        attribute_reuse_id_recover_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-application-gateway-present")
    {
        is_application_gateway_present = value;
        is_application_gateway_present.value_namespace = name_space;
        is_application_gateway_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-as-path2-byte")
    {
        is_as_path2_byte = value;
        is_as_path2_byte.value_namespace = name_space;
        is_as_path2_byte.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-attr-set-present")
    {
        is_attr_set_present = value;
        is_attr_set_present.value_namespace = name_space;
        is_attr_set_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ribrnh-present")
    {
        is_ribrnh_present = value;
        is_ribrnh_present.value_namespace = name_space;
        is_ribrnh_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rnh-present")
    {
        is_rnh_present = value;
        is_rnh_present.value_namespace = name_space;
        is_rnh_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ribrnh-encap")
    {
        ribrnh_encap = value;
        ribrnh_encap.value_namespace = name_space;
        ribrnh_encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ribrnh-mac")
    {
        ribrnh_mac = value;
        ribrnh_mac.value_namespace = name_space;
        ribrnh_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ribrnh-table")
    {
        ribrnh_table = value;
        ribrnh_table.value_namespace = name_space;
        ribrnh_table.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ribrnh-vni")
    {
        ribrnh_vni = value;
        ribrnh_vni.value_namespace = name_space;
        ribrnh_vni.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ribrnhip-table")
    {
        ribrnhip_table = value;
        ribrnhip_table.value_namespace = name_space;
        ribrnhip_table.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rnh-addr-len")
    {
        rnh_addr_len = value;
        rnh_addr_len.value_namespace = name_space;
        rnh_addr_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rnh-len")
    {
        rnh_len = value;
        rnh_len.value_namespace = name_space;
        rnh_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rnh-type")
    {
        rnh_type = value;
        rnh_type.value_namespace = name_space;
        rnh_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-aigp-inbound-igp")
    {
        set_aigp_inbound_igp = value;
        set_aigp_inbound_igp.value_namespace = name_space;
        set_aigp_inbound_igp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-aigp-inbound-metric")
    {
        set_aigp_inbound_metric = value;
        set_aigp_inbound_metric.value_namespace = name_space;
        set_aigp_inbound_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpn-distinguisher")
    {
        vpn_distinguisher = value;
        vpn_distinguisher.value_namespace = name_space;
        vpn_distinguisher.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute-key-number")
    {
        attribute_key_number.yfilter = yfilter;
    }
    if(value_path == "attribute-reuse-id-config")
    {
        attribute_reuse_id_config.yfilter = yfilter;
    }
    if(value_path == "attribute-reuse-id-current")
    {
        attribute_reuse_id_current.yfilter = yfilter;
    }
    if(value_path == "attribute-reuse-id-keys")
    {
        attribute_reuse_id_keys.yfilter = yfilter;
    }
    if(value_path == "attribute-reuse-id-max-id")
    {
        attribute_reuse_id_max_id.yfilter = yfilter;
    }
    if(value_path == "attribute-reuse-id-node")
    {
        attribute_reuse_id_node.yfilter = yfilter;
    }
    if(value_path == "attribute-reuse-id-recover-sec")
    {
        attribute_reuse_id_recover_sec.yfilter = yfilter;
    }
    if(value_path == "is-application-gateway-present")
    {
        is_application_gateway_present.yfilter = yfilter;
    }
    if(value_path == "is-as-path2-byte")
    {
        is_as_path2_byte.yfilter = yfilter;
    }
    if(value_path == "is-attr-set-present")
    {
        is_attr_set_present.yfilter = yfilter;
    }
    if(value_path == "is-ribrnh-present")
    {
        is_ribrnh_present.yfilter = yfilter;
    }
    if(value_path == "is-rnh-present")
    {
        is_rnh_present.yfilter = yfilter;
    }
    if(value_path == "ribrnh-encap")
    {
        ribrnh_encap.yfilter = yfilter;
    }
    if(value_path == "ribrnh-mac")
    {
        ribrnh_mac.yfilter = yfilter;
    }
    if(value_path == "ribrnh-table")
    {
        ribrnh_table.yfilter = yfilter;
    }
    if(value_path == "ribrnh-vni")
    {
        ribrnh_vni.yfilter = yfilter;
    }
    if(value_path == "ribrnhip-table")
    {
        ribrnhip_table.yfilter = yfilter;
    }
    if(value_path == "rnh-addr-len")
    {
        rnh_addr_len.yfilter = yfilter;
    }
    if(value_path == "rnh-len")
    {
        rnh_len.yfilter = yfilter;
    }
    if(value_path == "rnh-type")
    {
        rnh_type.yfilter = yfilter;
    }
    if(value_path == "set-aigp-inbound-igp")
    {
        set_aigp_inbound_igp.yfilter = yfilter;
    }
    if(value_path == "set-aigp-inbound-metric")
    {
        set_aigp_inbound_metric.yfilter = yfilter;
    }
    if(value_path == "vpn-distinguisher")
    {
        vpn_distinguisher.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attr-set" || name == "common-attributes" || name == "ribrnh-ip" || name == "rnh-addr" || name == "attribute-key-number" || name == "attribute-reuse-id-config" || name == "attribute-reuse-id-current" || name == "attribute-reuse-id-keys" || name == "attribute-reuse-id-max-id" || name == "attribute-reuse-id-node" || name == "attribute-reuse-id-recover-sec" || name == "is-application-gateway-present" || name == "is-as-path2-byte" || name == "is-attr-set-present" || name == "is-ribrnh-present" || name == "is-rnh-present" || name == "ribrnh-encap" || name == "ribrnh-mac" || name == "ribrnh-table" || name == "ribrnh-vni" || name == "ribrnhip-table" || name == "rnh-addr-len" || name == "rnh-len" || name == "rnh-type" || name == "set-aigp-inbound-igp" || name == "set-aigp-inbound-metric" || name == "vpn-distinguisher")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::AttrSet()
    :
    aggregator_address{YType::str, "aggregator-address"},
    aggregator_as{YType::uint32, "aggregator-as"},
    aigp_metric_value{YType::uint64, "aigp-metric-value"},
    as_path{YType::str, "as-path"},
    connector_type{YType::uint16, "connector-type"},
    extended_community_flags{YType::uint8, "extended-community-flags"},
    is_aggregator_present{YType::boolean, "is-aggregator-present"},
    is_aigp_present{YType::boolean, "is-aigp-present"},
    is_as_path_present{YType::boolean, "is-as-path-present"},
    is_atomic_aggregate_present{YType::boolean, "is-atomic-aggregate-present"},
    is_community_present{YType::boolean, "is-community-present"},
    is_connector_present{YType::boolean, "is-connector-present"},
    is_extended_community_present{YType::boolean, "is-extended-community-present"},
    is_label_index_present{YType::boolean, "is-label-index-present"},
    is_large_community_present{YType::boolean, "is-large-community-present"},
    is_local_pref_present{YType::boolean, "is-local-pref-present"},
    is_ls_attribute_present{YType::boolean, "is-ls-attribute-present"},
    is_metric_present{YType::boolean, "is-metric-present"},
    is_origin_present{YType::boolean, "is-origin-present"},
    is_pe_distinguisher_label_present{YType::boolean, "is-pe-distinguisher-label-present"},
    is_pmsi_present{YType::boolean, "is-pmsi-present"},
    is_pppmp_present{YType::boolean, "is-pppmp-present"},
    is_ssa_present{YType::boolean, "is-ssa-present"},
    l2tpv3_session_id{YType::uint32, "l2tpv3-session-id"},
    local_preference{YType::uint32, "local-preference"},
    metric{YType::uint32, "metric"},
    neighbor_as{YType::uint32, "neighbor-as"},
    origin{YType::uint16, "origin"},
    originator{YType::str, "originator"},
    pmsi_flags{YType::uint8, "pmsi-flags"},
    pmsi_label{YType::uint32, "pmsi-label"},
    pmsi_type{YType::uint16, "pmsi-type"},
    ppm_pvalue{YType::uint32, "ppm-pvalue"}
    	,
    tunnel_encap(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap>())
{
    tunnel_encap->parent = this;

    yang_name = "attr-set"; yang_parent_name = "attribute-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::~AttrSet()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::has_data() const
{
    for (std::size_t index=0; index<cluster.size(); index++)
    {
        if(cluster[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<community.size(); index++)
    {
        if(community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<connector_value.size(); index++)
    {
        if(connector_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_community.size(); index++)
    {
        if(extended_community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<l2tpv3_cookie.size(); index++)
    {
        if(l2tpv3_cookie[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<label_index_attr.size(); index++)
    {
        if(label_index_attr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<large_community.size(); index++)
    {
        if(large_community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ls_attr.size(); index++)
    {
        if(ls_attr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pe_distinguisher_label.size(); index++)
    {
        if(pe_distinguisher_label[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pmsi_value.size(); index++)
    {
        if(pmsi_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<unknown_attribute.size(); index++)
    {
        if(unknown_attribute[index]->has_data())
            return true;
    }
    return aggregator_address.is_set
	|| aggregator_as.is_set
	|| aigp_metric_value.is_set
	|| as_path.is_set
	|| connector_type.is_set
	|| extended_community_flags.is_set
	|| is_aggregator_present.is_set
	|| is_aigp_present.is_set
	|| is_as_path_present.is_set
	|| is_atomic_aggregate_present.is_set
	|| is_community_present.is_set
	|| is_connector_present.is_set
	|| is_extended_community_present.is_set
	|| is_label_index_present.is_set
	|| is_large_community_present.is_set
	|| is_local_pref_present.is_set
	|| is_ls_attribute_present.is_set
	|| is_metric_present.is_set
	|| is_origin_present.is_set
	|| is_pe_distinguisher_label_present.is_set
	|| is_pmsi_present.is_set
	|| is_pppmp_present.is_set
	|| is_ssa_present.is_set
	|| l2tpv3_session_id.is_set
	|| local_preference.is_set
	|| metric.is_set
	|| neighbor_as.is_set
	|| origin.is_set
	|| originator.is_set
	|| pmsi_flags.is_set
	|| pmsi_label.is_set
	|| pmsi_type.is_set
	|| ppm_pvalue.is_set
	|| (tunnel_encap !=  nullptr && tunnel_encap->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::has_operation() const
{
    for (std::size_t index=0; index<cluster.size(); index++)
    {
        if(cluster[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<community.size(); index++)
    {
        if(community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<connector_value.size(); index++)
    {
        if(connector_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_community.size(); index++)
    {
        if(extended_community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<l2tpv3_cookie.size(); index++)
    {
        if(l2tpv3_cookie[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<label_index_attr.size(); index++)
    {
        if(label_index_attr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<large_community.size(); index++)
    {
        if(large_community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ls_attr.size(); index++)
    {
        if(ls_attr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pe_distinguisher_label.size(); index++)
    {
        if(pe_distinguisher_label[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pmsi_value.size(); index++)
    {
        if(pmsi_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<unknown_attribute.size(); index++)
    {
        if(unknown_attribute[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(aggregator_address.yfilter)
	|| ydk::is_set(aggregator_as.yfilter)
	|| ydk::is_set(aigp_metric_value.yfilter)
	|| ydk::is_set(as_path.yfilter)
	|| ydk::is_set(connector_type.yfilter)
	|| ydk::is_set(extended_community_flags.yfilter)
	|| ydk::is_set(is_aggregator_present.yfilter)
	|| ydk::is_set(is_aigp_present.yfilter)
	|| ydk::is_set(is_as_path_present.yfilter)
	|| ydk::is_set(is_atomic_aggregate_present.yfilter)
	|| ydk::is_set(is_community_present.yfilter)
	|| ydk::is_set(is_connector_present.yfilter)
	|| ydk::is_set(is_extended_community_present.yfilter)
	|| ydk::is_set(is_label_index_present.yfilter)
	|| ydk::is_set(is_large_community_present.yfilter)
	|| ydk::is_set(is_local_pref_present.yfilter)
	|| ydk::is_set(is_ls_attribute_present.yfilter)
	|| ydk::is_set(is_metric_present.yfilter)
	|| ydk::is_set(is_origin_present.yfilter)
	|| ydk::is_set(is_pe_distinguisher_label_present.yfilter)
	|| ydk::is_set(is_pmsi_present.yfilter)
	|| ydk::is_set(is_pppmp_present.yfilter)
	|| ydk::is_set(is_ssa_present.yfilter)
	|| ydk::is_set(l2tpv3_session_id.yfilter)
	|| ydk::is_set(local_preference.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(neighbor_as.yfilter)
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(originator.yfilter)
	|| ydk::is_set(pmsi_flags.yfilter)
	|| ydk::is_set(pmsi_label.yfilter)
	|| ydk::is_set(pmsi_type.yfilter)
	|| ydk::is_set(ppm_pvalue.yfilter)
	|| (tunnel_encap !=  nullptr && tunnel_encap->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attr-set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aggregator_address.is_set || is_set(aggregator_address.yfilter)) leaf_name_data.push_back(aggregator_address.get_name_leafdata());
    if (aggregator_as.is_set || is_set(aggregator_as.yfilter)) leaf_name_data.push_back(aggregator_as.get_name_leafdata());
    if (aigp_metric_value.is_set || is_set(aigp_metric_value.yfilter)) leaf_name_data.push_back(aigp_metric_value.get_name_leafdata());
    if (as_path.is_set || is_set(as_path.yfilter)) leaf_name_data.push_back(as_path.get_name_leafdata());
    if (connector_type.is_set || is_set(connector_type.yfilter)) leaf_name_data.push_back(connector_type.get_name_leafdata());
    if (extended_community_flags.is_set || is_set(extended_community_flags.yfilter)) leaf_name_data.push_back(extended_community_flags.get_name_leafdata());
    if (is_aggregator_present.is_set || is_set(is_aggregator_present.yfilter)) leaf_name_data.push_back(is_aggregator_present.get_name_leafdata());
    if (is_aigp_present.is_set || is_set(is_aigp_present.yfilter)) leaf_name_data.push_back(is_aigp_present.get_name_leafdata());
    if (is_as_path_present.is_set || is_set(is_as_path_present.yfilter)) leaf_name_data.push_back(is_as_path_present.get_name_leafdata());
    if (is_atomic_aggregate_present.is_set || is_set(is_atomic_aggregate_present.yfilter)) leaf_name_data.push_back(is_atomic_aggregate_present.get_name_leafdata());
    if (is_community_present.is_set || is_set(is_community_present.yfilter)) leaf_name_data.push_back(is_community_present.get_name_leafdata());
    if (is_connector_present.is_set || is_set(is_connector_present.yfilter)) leaf_name_data.push_back(is_connector_present.get_name_leafdata());
    if (is_extended_community_present.is_set || is_set(is_extended_community_present.yfilter)) leaf_name_data.push_back(is_extended_community_present.get_name_leafdata());
    if (is_label_index_present.is_set || is_set(is_label_index_present.yfilter)) leaf_name_data.push_back(is_label_index_present.get_name_leafdata());
    if (is_large_community_present.is_set || is_set(is_large_community_present.yfilter)) leaf_name_data.push_back(is_large_community_present.get_name_leafdata());
    if (is_local_pref_present.is_set || is_set(is_local_pref_present.yfilter)) leaf_name_data.push_back(is_local_pref_present.get_name_leafdata());
    if (is_ls_attribute_present.is_set || is_set(is_ls_attribute_present.yfilter)) leaf_name_data.push_back(is_ls_attribute_present.get_name_leafdata());
    if (is_metric_present.is_set || is_set(is_metric_present.yfilter)) leaf_name_data.push_back(is_metric_present.get_name_leafdata());
    if (is_origin_present.is_set || is_set(is_origin_present.yfilter)) leaf_name_data.push_back(is_origin_present.get_name_leafdata());
    if (is_pe_distinguisher_label_present.is_set || is_set(is_pe_distinguisher_label_present.yfilter)) leaf_name_data.push_back(is_pe_distinguisher_label_present.get_name_leafdata());
    if (is_pmsi_present.is_set || is_set(is_pmsi_present.yfilter)) leaf_name_data.push_back(is_pmsi_present.get_name_leafdata());
    if (is_pppmp_present.is_set || is_set(is_pppmp_present.yfilter)) leaf_name_data.push_back(is_pppmp_present.get_name_leafdata());
    if (is_ssa_present.is_set || is_set(is_ssa_present.yfilter)) leaf_name_data.push_back(is_ssa_present.get_name_leafdata());
    if (l2tpv3_session_id.is_set || is_set(l2tpv3_session_id.yfilter)) leaf_name_data.push_back(l2tpv3_session_id.get_name_leafdata());
    if (local_preference.is_set || is_set(local_preference.yfilter)) leaf_name_data.push_back(local_preference.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (neighbor_as.is_set || is_set(neighbor_as.yfilter)) leaf_name_data.push_back(neighbor_as.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (originator.is_set || is_set(originator.yfilter)) leaf_name_data.push_back(originator.get_name_leafdata());
    if (pmsi_flags.is_set || is_set(pmsi_flags.yfilter)) leaf_name_data.push_back(pmsi_flags.get_name_leafdata());
    if (pmsi_label.is_set || is_set(pmsi_label.yfilter)) leaf_name_data.push_back(pmsi_label.get_name_leafdata());
    if (pmsi_type.is_set || is_set(pmsi_type.yfilter)) leaf_name_data.push_back(pmsi_type.get_name_leafdata());
    if (ppm_pvalue.is_set || is_set(ppm_pvalue.yfilter)) leaf_name_data.push_back(ppm_pvalue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cluster")
    {
        for(auto const & c : cluster)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::Cluster>();
        c->parent = this;
        cluster.push_back(c);
        return c;
    }

    if(child_yang_name == "community")
    {
        for(auto const & c : community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::Community>();
        c->parent = this;
        community.push_back(c);
        return c;
    }

    if(child_yang_name == "connector-value")
    {
        for(auto const & c : connector_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue>();
        c->parent = this;
        connector_value.push_back(c);
        return c;
    }

    if(child_yang_name == "extended-community")
    {
        for(auto const & c : extended_community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity>();
        c->parent = this;
        extended_community.push_back(c);
        return c;
    }

    if(child_yang_name == "l2tpv3-cookie")
    {
        for(auto const & c : l2tpv3_cookie)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie>();
        c->parent = this;
        l2tpv3_cookie.push_back(c);
        return c;
    }

    if(child_yang_name == "label-index-attr")
    {
        for(auto const & c : label_index_attr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr>();
        c->parent = this;
        label_index_attr.push_back(c);
        return c;
    }

    if(child_yang_name == "large-community")
    {
        for(auto const & c : large_community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity>();
        c->parent = this;
        large_community.push_back(c);
        return c;
    }

    if(child_yang_name == "ls-attr")
    {
        for(auto const & c : ls_attr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr>();
        c->parent = this;
        ls_attr.push_back(c);
        return c;
    }

    if(child_yang_name == "pe-distinguisher-label")
    {
        for(auto const & c : pe_distinguisher_label)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel>();
        c->parent = this;
        pe_distinguisher_label.push_back(c);
        return c;
    }

    if(child_yang_name == "pmsi-value")
    {
        for(auto const & c : pmsi_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue>();
        c->parent = this;
        pmsi_value.push_back(c);
        return c;
    }

    if(child_yang_name == "tunnel-encap")
    {
        if(tunnel_encap == nullptr)
        {
            tunnel_encap = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap>();
        }
        return tunnel_encap;
    }

    if(child_yang_name == "unknown-attribute")
    {
        for(auto const & c : unknown_attribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute>();
        c->parent = this;
        unknown_attribute.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cluster)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : community)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : connector_value)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : extended_community)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : l2tpv3_cookie)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : label_index_attr)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : large_community)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ls_attr)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : pe_distinguisher_label)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : pmsi_value)
    {
        children[c->get_segment_path()] = c;
    }

    if(tunnel_encap != nullptr)
    {
        children["tunnel-encap"] = tunnel_encap;
    }

    for (auto const & c : unknown_attribute)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aggregator-address")
    {
        aggregator_address = value;
        aggregator_address.value_namespace = name_space;
        aggregator_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggregator-as")
    {
        aggregator_as = value;
        aggregator_as.value_namespace = name_space;
        aggregator_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aigp-metric-value")
    {
        aigp_metric_value = value;
        aigp_metric_value.value_namespace = name_space;
        aigp_metric_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-path")
    {
        as_path = value;
        as_path.value_namespace = name_space;
        as_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connector-type")
    {
        connector_type = value;
        connector_type.value_namespace = name_space;
        connector_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-community-flags")
    {
        extended_community_flags = value;
        extended_community_flags.value_namespace = name_space;
        extended_community_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-aggregator-present")
    {
        is_aggregator_present = value;
        is_aggregator_present.value_namespace = name_space;
        is_aggregator_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-aigp-present")
    {
        is_aigp_present = value;
        is_aigp_present.value_namespace = name_space;
        is_aigp_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-as-path-present")
    {
        is_as_path_present = value;
        is_as_path_present.value_namespace = name_space;
        is_as_path_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-atomic-aggregate-present")
    {
        is_atomic_aggregate_present = value;
        is_atomic_aggregate_present.value_namespace = name_space;
        is_atomic_aggregate_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-community-present")
    {
        is_community_present = value;
        is_community_present.value_namespace = name_space;
        is_community_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-connector-present")
    {
        is_connector_present = value;
        is_connector_present.value_namespace = name_space;
        is_connector_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-extended-community-present")
    {
        is_extended_community_present = value;
        is_extended_community_present.value_namespace = name_space;
        is_extended_community_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-label-index-present")
    {
        is_label_index_present = value;
        is_label_index_present.value_namespace = name_space;
        is_label_index_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-large-community-present")
    {
        is_large_community_present = value;
        is_large_community_present.value_namespace = name_space;
        is_large_community_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-local-pref-present")
    {
        is_local_pref_present = value;
        is_local_pref_present.value_namespace = name_space;
        is_local_pref_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ls-attribute-present")
    {
        is_ls_attribute_present = value;
        is_ls_attribute_present.value_namespace = name_space;
        is_ls_attribute_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-metric-present")
    {
        is_metric_present = value;
        is_metric_present.value_namespace = name_space;
        is_metric_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-origin-present")
    {
        is_origin_present = value;
        is_origin_present.value_namespace = name_space;
        is_origin_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pe-distinguisher-label-present")
    {
        is_pe_distinguisher_label_present = value;
        is_pe_distinguisher_label_present.value_namespace = name_space;
        is_pe_distinguisher_label_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pmsi-present")
    {
        is_pmsi_present = value;
        is_pmsi_present.value_namespace = name_space;
        is_pmsi_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pppmp-present")
    {
        is_pppmp_present = value;
        is_pppmp_present.value_namespace = name_space;
        is_pppmp_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ssa-present")
    {
        is_ssa_present = value;
        is_ssa_present.value_namespace = name_space;
        is_ssa_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2tpv3-session-id")
    {
        l2tpv3_session_id = value;
        l2tpv3_session_id.value_namespace = name_space;
        l2tpv3_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-preference")
    {
        local_preference = value;
        local_preference.value_namespace = name_space;
        local_preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-as")
    {
        neighbor_as = value;
        neighbor_as.value_namespace = name_space;
        neighbor_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "originator")
    {
        originator = value;
        originator.value_namespace = name_space;
        originator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pmsi-flags")
    {
        pmsi_flags = value;
        pmsi_flags.value_namespace = name_space;
        pmsi_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pmsi-label")
    {
        pmsi_label = value;
        pmsi_label.value_namespace = name_space;
        pmsi_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pmsi-type")
    {
        pmsi_type = value;
        pmsi_type.value_namespace = name_space;
        pmsi_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ppm-pvalue")
    {
        ppm_pvalue = value;
        ppm_pvalue.value_namespace = name_space;
        ppm_pvalue.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aggregator-address")
    {
        aggregator_address.yfilter = yfilter;
    }
    if(value_path == "aggregator-as")
    {
        aggregator_as.yfilter = yfilter;
    }
    if(value_path == "aigp-metric-value")
    {
        aigp_metric_value.yfilter = yfilter;
    }
    if(value_path == "as-path")
    {
        as_path.yfilter = yfilter;
    }
    if(value_path == "connector-type")
    {
        connector_type.yfilter = yfilter;
    }
    if(value_path == "extended-community-flags")
    {
        extended_community_flags.yfilter = yfilter;
    }
    if(value_path == "is-aggregator-present")
    {
        is_aggregator_present.yfilter = yfilter;
    }
    if(value_path == "is-aigp-present")
    {
        is_aigp_present.yfilter = yfilter;
    }
    if(value_path == "is-as-path-present")
    {
        is_as_path_present.yfilter = yfilter;
    }
    if(value_path == "is-atomic-aggregate-present")
    {
        is_atomic_aggregate_present.yfilter = yfilter;
    }
    if(value_path == "is-community-present")
    {
        is_community_present.yfilter = yfilter;
    }
    if(value_path == "is-connector-present")
    {
        is_connector_present.yfilter = yfilter;
    }
    if(value_path == "is-extended-community-present")
    {
        is_extended_community_present.yfilter = yfilter;
    }
    if(value_path == "is-label-index-present")
    {
        is_label_index_present.yfilter = yfilter;
    }
    if(value_path == "is-large-community-present")
    {
        is_large_community_present.yfilter = yfilter;
    }
    if(value_path == "is-local-pref-present")
    {
        is_local_pref_present.yfilter = yfilter;
    }
    if(value_path == "is-ls-attribute-present")
    {
        is_ls_attribute_present.yfilter = yfilter;
    }
    if(value_path == "is-metric-present")
    {
        is_metric_present.yfilter = yfilter;
    }
    if(value_path == "is-origin-present")
    {
        is_origin_present.yfilter = yfilter;
    }
    if(value_path == "is-pe-distinguisher-label-present")
    {
        is_pe_distinguisher_label_present.yfilter = yfilter;
    }
    if(value_path == "is-pmsi-present")
    {
        is_pmsi_present.yfilter = yfilter;
    }
    if(value_path == "is-pppmp-present")
    {
        is_pppmp_present.yfilter = yfilter;
    }
    if(value_path == "is-ssa-present")
    {
        is_ssa_present.yfilter = yfilter;
    }
    if(value_path == "l2tpv3-session-id")
    {
        l2tpv3_session_id.yfilter = yfilter;
    }
    if(value_path == "local-preference")
    {
        local_preference.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "neighbor-as")
    {
        neighbor_as.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "originator")
    {
        originator.yfilter = yfilter;
    }
    if(value_path == "pmsi-flags")
    {
        pmsi_flags.yfilter = yfilter;
    }
    if(value_path == "pmsi-label")
    {
        pmsi_label.yfilter = yfilter;
    }
    if(value_path == "pmsi-type")
    {
        pmsi_type.yfilter = yfilter;
    }
    if(value_path == "ppm-pvalue")
    {
        ppm_pvalue.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cluster" || name == "community" || name == "connector-value" || name == "extended-community" || name == "l2tpv3-cookie" || name == "label-index-attr" || name == "large-community" || name == "ls-attr" || name == "pe-distinguisher-label" || name == "pmsi-value" || name == "tunnel-encap" || name == "unknown-attribute" || name == "aggregator-address" || name == "aggregator-as" || name == "aigp-metric-value" || name == "as-path" || name == "connector-type" || name == "extended-community-flags" || name == "is-aggregator-present" || name == "is-aigp-present" || name == "is-as-path-present" || name == "is-atomic-aggregate-present" || name == "is-community-present" || name == "is-connector-present" || name == "is-extended-community-present" || name == "is-label-index-present" || name == "is-large-community-present" || name == "is-local-pref-present" || name == "is-ls-attribute-present" || name == "is-metric-present" || name == "is-origin-present" || name == "is-pe-distinguisher-label-present" || name == "is-pmsi-present" || name == "is-pppmp-present" || name == "is-ssa-present" || name == "l2tpv3-session-id" || name == "local-preference" || name == "metric" || name == "neighbor-as" || name == "origin" || name == "originator" || name == "pmsi-flags" || name == "pmsi-label" || name == "pmsi-type" || name == "ppm-pvalue")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::Cluster()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "cluster"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::~Cluster()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cluster";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::Community::Community()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "community"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::Community::~Community()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::Community::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::Community::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::Community::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::Community::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::Community::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::Community::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::ConnectorValue()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "connector-value"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::~ConnectorValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connector-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::ExtendedCommunity()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "extended-community"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::~ExtendedCommunity()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie::L2Tpv3Cookie()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "l2tpv3-cookie"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie::~L2Tpv3Cookie()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv3-cookie";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr::LabelIndexAttr()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "label-index-attr"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr::~LabelIndexAttr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-index-attr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::LargeCommunity()
    :
    global_admin{YType::uint32, "global-admin"},
    local_data1{YType::uint32, "local-data1"},
    local_data2{YType::uint32, "local-data2"}
{

    yang_name = "large-community"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::~LargeCommunity()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::has_data() const
{
    return global_admin.is_set
	|| local_data1.is_set
	|| local_data2.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(global_admin.yfilter)
	|| ydk::is_set(local_data1.yfilter)
	|| ydk::is_set(local_data2.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "large-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_admin.is_set || is_set(global_admin.yfilter)) leaf_name_data.push_back(global_admin.get_name_leafdata());
    if (local_data1.is_set || is_set(local_data1.yfilter)) leaf_name_data.push_back(local_data1.get_name_leafdata());
    if (local_data2.is_set || is_set(local_data2.yfilter)) leaf_name_data.push_back(local_data2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "global-admin")
    {
        global_admin = value;
        global_admin.value_namespace = name_space;
        global_admin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-data1")
    {
        local_data1 = value;
        local_data1.value_namespace = name_space;
        local_data1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-data2")
    {
        local_data2 = value;
        local_data2.value_namespace = name_space;
        local_data2.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "global-admin")
    {
        global_admin.yfilter = yfilter;
    }
    if(value_path == "local-data1")
    {
        local_data1.yfilter = yfilter;
    }
    if(value_path == "local-data2")
    {
        local_data2.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-admin" || name == "local-data1" || name == "local-data2")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::LsAttr()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "ls-attr"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::~LsAttr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ls-attr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::PeDistinguisherLabel()
    :
    label{YType::uint32, "label"},
    pe_address{YType::str, "pe-address"}
{

    yang_name = "pe-distinguisher-label"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::~PeDistinguisherLabel()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::has_data() const
{
    return label.is_set
	|| pe_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(pe_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pe-distinguisher-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (pe_address.is_set || is_set(pe_address.yfilter)) leaf_name_data.push_back(pe_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pe-address")
    {
        pe_address = value;
        pe_address.value_namespace = name_space;
        pe_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "pe-address")
    {
        pe_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label" || name == "pe-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::PmsiValue()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "pmsi-value"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::~PmsiValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmsi-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::TunnelEncap()
    :
    sr_policy(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy>())
{
    sr_policy->parent = this;

    yang_name = "tunnel-encap"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::~TunnelEncap()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::has_data() const
{
    return (sr_policy !=  nullptr && sr_policy->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::has_operation() const
{
    return is_set(yfilter)
	|| (sr_policy !=  nullptr && sr_policy->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-encap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-policy")
    {
        if(sr_policy == nullptr)
        {
            sr_policy = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy>();
        }
        return sr_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sr_policy != nullptr)
    {
        children["sr-policy"] = sr_policy;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-policy")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SrPolicy()
    :
    preference{YType::uint32, "preference"},
    request_state{YType::enumeration, "request-state"},
    state{YType::boolean, "state"},
    tunnel_encap_type{YType::uint16, "tunnel-encap-type"}
    	,
    allocated_binding_sid(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid>())
	,binding_sid(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid>())
{
    allocated_binding_sid->parent = this;
    binding_sid->parent = this;

    yang_name = "sr-policy"; yang_parent_name = "tunnel-encap"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::~SrPolicy()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::has_data() const
{
    for (std::size_t index=0; index<segment_list.size(); index++)
    {
        if(segment_list[index]->has_data())
            return true;
    }
    return preference.is_set
	|| request_state.is_set
	|| state.is_set
	|| tunnel_encap_type.is_set
	|| (allocated_binding_sid !=  nullptr && allocated_binding_sid->has_data())
	|| (binding_sid !=  nullptr && binding_sid->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::has_operation() const
{
    for (std::size_t index=0; index<segment_list.size(); index++)
    {
        if(segment_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(preference.yfilter)
	|| ydk::is_set(request_state.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(tunnel_encap_type.yfilter)
	|| (allocated_binding_sid !=  nullptr && allocated_binding_sid->has_operation())
	|| (binding_sid !=  nullptr && binding_sid->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (preference.is_set || is_set(preference.yfilter)) leaf_name_data.push_back(preference.get_name_leafdata());
    if (request_state.is_set || is_set(request_state.yfilter)) leaf_name_data.push_back(request_state.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (tunnel_encap_type.is_set || is_set(tunnel_encap_type.yfilter)) leaf_name_data.push_back(tunnel_encap_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "allocated-binding-sid")
    {
        if(allocated_binding_sid == nullptr)
        {
            allocated_binding_sid = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid>();
        }
        return allocated_binding_sid;
    }

    if(child_yang_name == "binding-sid")
    {
        if(binding_sid == nullptr)
        {
            binding_sid = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid>();
        }
        return binding_sid;
    }

    if(child_yang_name == "segment-list")
    {
        for(auto const & c : segment_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList>();
        c->parent = this;
        segment_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(allocated_binding_sid != nullptr)
    {
        children["allocated-binding-sid"] = allocated_binding_sid;
    }

    if(binding_sid != nullptr)
    {
        children["binding-sid"] = binding_sid;
    }

    for (auto const & c : segment_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "preference")
    {
        preference = value;
        preference.value_namespace = name_space;
        preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-state")
    {
        request_state = value;
        request_state.value_namespace = name_space;
        request_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-encap-type")
    {
        tunnel_encap_type = value;
        tunnel_encap_type.value_namespace = name_space;
        tunnel_encap_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "preference")
    {
        preference.yfilter = yfilter;
    }
    if(value_path == "request-state")
    {
        request_state.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "tunnel-encap-type")
    {
        tunnel_encap_type.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allocated-binding-sid" || name == "binding-sid" || name == "segment-list" || name == "preference" || name == "request-state" || name == "state" || name == "tunnel-encap-type")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::AllocatedBindingSid()
    :
    ipv6_address{YType::str, "ipv6-address"},
    label{YType::uint32, "label"},
    type{YType::enumeration, "type"}
{

    yang_name = "allocated-binding-sid"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::~AllocatedBindingSid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::has_data() const
{
    return ipv6_address.is_set
	|| label.is_set
	|| type.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allocated-binding-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-address" || name == "label" || name == "type")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::BindingSid()
    :
    ipv6_address{YType::str, "ipv6-address"},
    label{YType::uint32, "label"},
    type{YType::enumeration, "type"}
{

    yang_name = "binding-sid"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::~BindingSid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::has_data() const
{
    return ipv6_address.is_set
	|| label.is_set
	|| type.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-address" || name == "label" || name == "type")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::SegmentList()
    :
    weight{YType::uint8, "weight"}
{

    yang_name = "segment-list"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::~SegmentList()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::has_data() const
{
    for (std::size_t index=0; index<segment.size(); index++)
    {
        if(segment[index]->has_data())
            return true;
    }
    return weight.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::has_operation() const
{
    for (std::size_t index=0; index<segment.size(); index++)
    {
        if(segment[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment")
    {
        for(auto const & c : segment)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment>();
        c->parent = this;
        segment.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : segment)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment" || name == "weight")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::Segment()
    :
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    label{YType::uint32, "label"},
    type{YType::enumeration, "type"}
{

    yang_name = "segment"; yang_parent_name = "segment-list"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::~Segment()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::has_data() const
{
    return ipv4_address.is_set
	|| ipv6_address.is_set
	|| label.is_set
	|| type.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "ipv6-address" || name == "label" || name == "type")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::UnknownAttribute()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "unknown-attribute"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::~UnknownAttribute()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::CommonAttributes()
    :
    aggregator_address{YType::str, "aggregator-address"},
    aggregator_as{YType::uint32, "aggregator-as"},
    aigp_metric_value{YType::uint64, "aigp-metric-value"},
    as_path{YType::str, "as-path"},
    connector_type{YType::uint16, "connector-type"},
    extended_community_flags{YType::uint8, "extended-community-flags"},
    is_aggregator_present{YType::boolean, "is-aggregator-present"},
    is_aigp_present{YType::boolean, "is-aigp-present"},
    is_as_path_present{YType::boolean, "is-as-path-present"},
    is_atomic_aggregate_present{YType::boolean, "is-atomic-aggregate-present"},
    is_community_present{YType::boolean, "is-community-present"},
    is_connector_present{YType::boolean, "is-connector-present"},
    is_extended_community_present{YType::boolean, "is-extended-community-present"},
    is_label_index_present{YType::boolean, "is-label-index-present"},
    is_large_community_present{YType::boolean, "is-large-community-present"},
    is_local_pref_present{YType::boolean, "is-local-pref-present"},
    is_ls_attribute_present{YType::boolean, "is-ls-attribute-present"},
    is_metric_present{YType::boolean, "is-metric-present"},
    is_origin_present{YType::boolean, "is-origin-present"},
    is_pe_distinguisher_label_present{YType::boolean, "is-pe-distinguisher-label-present"},
    is_pmsi_present{YType::boolean, "is-pmsi-present"},
    is_pppmp_present{YType::boolean, "is-pppmp-present"},
    is_ssa_present{YType::boolean, "is-ssa-present"},
    l2tpv3_session_id{YType::uint32, "l2tpv3-session-id"},
    local_preference{YType::uint32, "local-preference"},
    metric{YType::uint32, "metric"},
    neighbor_as{YType::uint32, "neighbor-as"},
    origin{YType::uint16, "origin"},
    originator{YType::str, "originator"},
    pmsi_flags{YType::uint8, "pmsi-flags"},
    pmsi_label{YType::uint32, "pmsi-label"},
    pmsi_type{YType::uint16, "pmsi-type"},
    ppm_pvalue{YType::uint32, "ppm-pvalue"}
    	,
    tunnel_encap(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap>())
{
    tunnel_encap->parent = this;

    yang_name = "common-attributes"; yang_parent_name = "attribute-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::~CommonAttributes()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::has_data() const
{
    for (std::size_t index=0; index<cluster.size(); index++)
    {
        if(cluster[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<community.size(); index++)
    {
        if(community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<connector_value.size(); index++)
    {
        if(connector_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_community.size(); index++)
    {
        if(extended_community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<l2tpv3_cookie.size(); index++)
    {
        if(l2tpv3_cookie[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<label_index_attr.size(); index++)
    {
        if(label_index_attr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<large_community.size(); index++)
    {
        if(large_community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ls_attr.size(); index++)
    {
        if(ls_attr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pe_distinguisher_label.size(); index++)
    {
        if(pe_distinguisher_label[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pmsi_value.size(); index++)
    {
        if(pmsi_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<unknown_attribute.size(); index++)
    {
        if(unknown_attribute[index]->has_data())
            return true;
    }
    return aggregator_address.is_set
	|| aggregator_as.is_set
	|| aigp_metric_value.is_set
	|| as_path.is_set
	|| connector_type.is_set
	|| extended_community_flags.is_set
	|| is_aggregator_present.is_set
	|| is_aigp_present.is_set
	|| is_as_path_present.is_set
	|| is_atomic_aggregate_present.is_set
	|| is_community_present.is_set
	|| is_connector_present.is_set
	|| is_extended_community_present.is_set
	|| is_label_index_present.is_set
	|| is_large_community_present.is_set
	|| is_local_pref_present.is_set
	|| is_ls_attribute_present.is_set
	|| is_metric_present.is_set
	|| is_origin_present.is_set
	|| is_pe_distinguisher_label_present.is_set
	|| is_pmsi_present.is_set
	|| is_pppmp_present.is_set
	|| is_ssa_present.is_set
	|| l2tpv3_session_id.is_set
	|| local_preference.is_set
	|| metric.is_set
	|| neighbor_as.is_set
	|| origin.is_set
	|| originator.is_set
	|| pmsi_flags.is_set
	|| pmsi_label.is_set
	|| pmsi_type.is_set
	|| ppm_pvalue.is_set
	|| (tunnel_encap !=  nullptr && tunnel_encap->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::has_operation() const
{
    for (std::size_t index=0; index<cluster.size(); index++)
    {
        if(cluster[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<community.size(); index++)
    {
        if(community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<connector_value.size(); index++)
    {
        if(connector_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_community.size(); index++)
    {
        if(extended_community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<l2tpv3_cookie.size(); index++)
    {
        if(l2tpv3_cookie[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<label_index_attr.size(); index++)
    {
        if(label_index_attr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<large_community.size(); index++)
    {
        if(large_community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ls_attr.size(); index++)
    {
        if(ls_attr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pe_distinguisher_label.size(); index++)
    {
        if(pe_distinguisher_label[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pmsi_value.size(); index++)
    {
        if(pmsi_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<unknown_attribute.size(); index++)
    {
        if(unknown_attribute[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(aggregator_address.yfilter)
	|| ydk::is_set(aggregator_as.yfilter)
	|| ydk::is_set(aigp_metric_value.yfilter)
	|| ydk::is_set(as_path.yfilter)
	|| ydk::is_set(connector_type.yfilter)
	|| ydk::is_set(extended_community_flags.yfilter)
	|| ydk::is_set(is_aggregator_present.yfilter)
	|| ydk::is_set(is_aigp_present.yfilter)
	|| ydk::is_set(is_as_path_present.yfilter)
	|| ydk::is_set(is_atomic_aggregate_present.yfilter)
	|| ydk::is_set(is_community_present.yfilter)
	|| ydk::is_set(is_connector_present.yfilter)
	|| ydk::is_set(is_extended_community_present.yfilter)
	|| ydk::is_set(is_label_index_present.yfilter)
	|| ydk::is_set(is_large_community_present.yfilter)
	|| ydk::is_set(is_local_pref_present.yfilter)
	|| ydk::is_set(is_ls_attribute_present.yfilter)
	|| ydk::is_set(is_metric_present.yfilter)
	|| ydk::is_set(is_origin_present.yfilter)
	|| ydk::is_set(is_pe_distinguisher_label_present.yfilter)
	|| ydk::is_set(is_pmsi_present.yfilter)
	|| ydk::is_set(is_pppmp_present.yfilter)
	|| ydk::is_set(is_ssa_present.yfilter)
	|| ydk::is_set(l2tpv3_session_id.yfilter)
	|| ydk::is_set(local_preference.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(neighbor_as.yfilter)
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(originator.yfilter)
	|| ydk::is_set(pmsi_flags.yfilter)
	|| ydk::is_set(pmsi_label.yfilter)
	|| ydk::is_set(pmsi_type.yfilter)
	|| ydk::is_set(ppm_pvalue.yfilter)
	|| (tunnel_encap !=  nullptr && tunnel_encap->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aggregator_address.is_set || is_set(aggregator_address.yfilter)) leaf_name_data.push_back(aggregator_address.get_name_leafdata());
    if (aggregator_as.is_set || is_set(aggregator_as.yfilter)) leaf_name_data.push_back(aggregator_as.get_name_leafdata());
    if (aigp_metric_value.is_set || is_set(aigp_metric_value.yfilter)) leaf_name_data.push_back(aigp_metric_value.get_name_leafdata());
    if (as_path.is_set || is_set(as_path.yfilter)) leaf_name_data.push_back(as_path.get_name_leafdata());
    if (connector_type.is_set || is_set(connector_type.yfilter)) leaf_name_data.push_back(connector_type.get_name_leafdata());
    if (extended_community_flags.is_set || is_set(extended_community_flags.yfilter)) leaf_name_data.push_back(extended_community_flags.get_name_leafdata());
    if (is_aggregator_present.is_set || is_set(is_aggregator_present.yfilter)) leaf_name_data.push_back(is_aggregator_present.get_name_leafdata());
    if (is_aigp_present.is_set || is_set(is_aigp_present.yfilter)) leaf_name_data.push_back(is_aigp_present.get_name_leafdata());
    if (is_as_path_present.is_set || is_set(is_as_path_present.yfilter)) leaf_name_data.push_back(is_as_path_present.get_name_leafdata());
    if (is_atomic_aggregate_present.is_set || is_set(is_atomic_aggregate_present.yfilter)) leaf_name_data.push_back(is_atomic_aggregate_present.get_name_leafdata());
    if (is_community_present.is_set || is_set(is_community_present.yfilter)) leaf_name_data.push_back(is_community_present.get_name_leafdata());
    if (is_connector_present.is_set || is_set(is_connector_present.yfilter)) leaf_name_data.push_back(is_connector_present.get_name_leafdata());
    if (is_extended_community_present.is_set || is_set(is_extended_community_present.yfilter)) leaf_name_data.push_back(is_extended_community_present.get_name_leafdata());
    if (is_label_index_present.is_set || is_set(is_label_index_present.yfilter)) leaf_name_data.push_back(is_label_index_present.get_name_leafdata());
    if (is_large_community_present.is_set || is_set(is_large_community_present.yfilter)) leaf_name_data.push_back(is_large_community_present.get_name_leafdata());
    if (is_local_pref_present.is_set || is_set(is_local_pref_present.yfilter)) leaf_name_data.push_back(is_local_pref_present.get_name_leafdata());
    if (is_ls_attribute_present.is_set || is_set(is_ls_attribute_present.yfilter)) leaf_name_data.push_back(is_ls_attribute_present.get_name_leafdata());
    if (is_metric_present.is_set || is_set(is_metric_present.yfilter)) leaf_name_data.push_back(is_metric_present.get_name_leafdata());
    if (is_origin_present.is_set || is_set(is_origin_present.yfilter)) leaf_name_data.push_back(is_origin_present.get_name_leafdata());
    if (is_pe_distinguisher_label_present.is_set || is_set(is_pe_distinguisher_label_present.yfilter)) leaf_name_data.push_back(is_pe_distinguisher_label_present.get_name_leafdata());
    if (is_pmsi_present.is_set || is_set(is_pmsi_present.yfilter)) leaf_name_data.push_back(is_pmsi_present.get_name_leafdata());
    if (is_pppmp_present.is_set || is_set(is_pppmp_present.yfilter)) leaf_name_data.push_back(is_pppmp_present.get_name_leafdata());
    if (is_ssa_present.is_set || is_set(is_ssa_present.yfilter)) leaf_name_data.push_back(is_ssa_present.get_name_leafdata());
    if (l2tpv3_session_id.is_set || is_set(l2tpv3_session_id.yfilter)) leaf_name_data.push_back(l2tpv3_session_id.get_name_leafdata());
    if (local_preference.is_set || is_set(local_preference.yfilter)) leaf_name_data.push_back(local_preference.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (neighbor_as.is_set || is_set(neighbor_as.yfilter)) leaf_name_data.push_back(neighbor_as.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (originator.is_set || is_set(originator.yfilter)) leaf_name_data.push_back(originator.get_name_leafdata());
    if (pmsi_flags.is_set || is_set(pmsi_flags.yfilter)) leaf_name_data.push_back(pmsi_flags.get_name_leafdata());
    if (pmsi_label.is_set || is_set(pmsi_label.yfilter)) leaf_name_data.push_back(pmsi_label.get_name_leafdata());
    if (pmsi_type.is_set || is_set(pmsi_type.yfilter)) leaf_name_data.push_back(pmsi_type.get_name_leafdata());
    if (ppm_pvalue.is_set || is_set(ppm_pvalue.yfilter)) leaf_name_data.push_back(ppm_pvalue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cluster")
    {
        for(auto const & c : cluster)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster>();
        c->parent = this;
        cluster.push_back(c);
        return c;
    }

    if(child_yang_name == "community")
    {
        for(auto const & c : community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::Community>();
        c->parent = this;
        community.push_back(c);
        return c;
    }

    if(child_yang_name == "connector-value")
    {
        for(auto const & c : connector_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue>();
        c->parent = this;
        connector_value.push_back(c);
        return c;
    }

    if(child_yang_name == "extended-community")
    {
        for(auto const & c : extended_community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity>();
        c->parent = this;
        extended_community.push_back(c);
        return c;
    }

    if(child_yang_name == "l2tpv3-cookie")
    {
        for(auto const & c : l2tpv3_cookie)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie>();
        c->parent = this;
        l2tpv3_cookie.push_back(c);
        return c;
    }

    if(child_yang_name == "label-index-attr")
    {
        for(auto const & c : label_index_attr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr>();
        c->parent = this;
        label_index_attr.push_back(c);
        return c;
    }

    if(child_yang_name == "large-community")
    {
        for(auto const & c : large_community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity>();
        c->parent = this;
        large_community.push_back(c);
        return c;
    }

    if(child_yang_name == "ls-attr")
    {
        for(auto const & c : ls_attr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr>();
        c->parent = this;
        ls_attr.push_back(c);
        return c;
    }

    if(child_yang_name == "pe-distinguisher-label")
    {
        for(auto const & c : pe_distinguisher_label)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel>();
        c->parent = this;
        pe_distinguisher_label.push_back(c);
        return c;
    }

    if(child_yang_name == "pmsi-value")
    {
        for(auto const & c : pmsi_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue>();
        c->parent = this;
        pmsi_value.push_back(c);
        return c;
    }

    if(child_yang_name == "tunnel-encap")
    {
        if(tunnel_encap == nullptr)
        {
            tunnel_encap = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap>();
        }
        return tunnel_encap;
    }

    if(child_yang_name == "unknown-attribute")
    {
        for(auto const & c : unknown_attribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute>();
        c->parent = this;
        unknown_attribute.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cluster)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : community)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : connector_value)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : extended_community)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : l2tpv3_cookie)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : label_index_attr)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : large_community)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ls_attr)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : pe_distinguisher_label)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : pmsi_value)
    {
        children[c->get_segment_path()] = c;
    }

    if(tunnel_encap != nullptr)
    {
        children["tunnel-encap"] = tunnel_encap;
    }

    for (auto const & c : unknown_attribute)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aggregator-address")
    {
        aggregator_address = value;
        aggregator_address.value_namespace = name_space;
        aggregator_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggregator-as")
    {
        aggregator_as = value;
        aggregator_as.value_namespace = name_space;
        aggregator_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aigp-metric-value")
    {
        aigp_metric_value = value;
        aigp_metric_value.value_namespace = name_space;
        aigp_metric_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-path")
    {
        as_path = value;
        as_path.value_namespace = name_space;
        as_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connector-type")
    {
        connector_type = value;
        connector_type.value_namespace = name_space;
        connector_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-community-flags")
    {
        extended_community_flags = value;
        extended_community_flags.value_namespace = name_space;
        extended_community_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-aggregator-present")
    {
        is_aggregator_present = value;
        is_aggregator_present.value_namespace = name_space;
        is_aggregator_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-aigp-present")
    {
        is_aigp_present = value;
        is_aigp_present.value_namespace = name_space;
        is_aigp_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-as-path-present")
    {
        is_as_path_present = value;
        is_as_path_present.value_namespace = name_space;
        is_as_path_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-atomic-aggregate-present")
    {
        is_atomic_aggregate_present = value;
        is_atomic_aggregate_present.value_namespace = name_space;
        is_atomic_aggregate_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-community-present")
    {
        is_community_present = value;
        is_community_present.value_namespace = name_space;
        is_community_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-connector-present")
    {
        is_connector_present = value;
        is_connector_present.value_namespace = name_space;
        is_connector_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-extended-community-present")
    {
        is_extended_community_present = value;
        is_extended_community_present.value_namespace = name_space;
        is_extended_community_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-label-index-present")
    {
        is_label_index_present = value;
        is_label_index_present.value_namespace = name_space;
        is_label_index_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-large-community-present")
    {
        is_large_community_present = value;
        is_large_community_present.value_namespace = name_space;
        is_large_community_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-local-pref-present")
    {
        is_local_pref_present = value;
        is_local_pref_present.value_namespace = name_space;
        is_local_pref_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ls-attribute-present")
    {
        is_ls_attribute_present = value;
        is_ls_attribute_present.value_namespace = name_space;
        is_ls_attribute_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-metric-present")
    {
        is_metric_present = value;
        is_metric_present.value_namespace = name_space;
        is_metric_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-origin-present")
    {
        is_origin_present = value;
        is_origin_present.value_namespace = name_space;
        is_origin_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pe-distinguisher-label-present")
    {
        is_pe_distinguisher_label_present = value;
        is_pe_distinguisher_label_present.value_namespace = name_space;
        is_pe_distinguisher_label_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pmsi-present")
    {
        is_pmsi_present = value;
        is_pmsi_present.value_namespace = name_space;
        is_pmsi_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pppmp-present")
    {
        is_pppmp_present = value;
        is_pppmp_present.value_namespace = name_space;
        is_pppmp_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ssa-present")
    {
        is_ssa_present = value;
        is_ssa_present.value_namespace = name_space;
        is_ssa_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2tpv3-session-id")
    {
        l2tpv3_session_id = value;
        l2tpv3_session_id.value_namespace = name_space;
        l2tpv3_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-preference")
    {
        local_preference = value;
        local_preference.value_namespace = name_space;
        local_preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-as")
    {
        neighbor_as = value;
        neighbor_as.value_namespace = name_space;
        neighbor_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "originator")
    {
        originator = value;
        originator.value_namespace = name_space;
        originator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pmsi-flags")
    {
        pmsi_flags = value;
        pmsi_flags.value_namespace = name_space;
        pmsi_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pmsi-label")
    {
        pmsi_label = value;
        pmsi_label.value_namespace = name_space;
        pmsi_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pmsi-type")
    {
        pmsi_type = value;
        pmsi_type.value_namespace = name_space;
        pmsi_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ppm-pvalue")
    {
        ppm_pvalue = value;
        ppm_pvalue.value_namespace = name_space;
        ppm_pvalue.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aggregator-address")
    {
        aggregator_address.yfilter = yfilter;
    }
    if(value_path == "aggregator-as")
    {
        aggregator_as.yfilter = yfilter;
    }
    if(value_path == "aigp-metric-value")
    {
        aigp_metric_value.yfilter = yfilter;
    }
    if(value_path == "as-path")
    {
        as_path.yfilter = yfilter;
    }
    if(value_path == "connector-type")
    {
        connector_type.yfilter = yfilter;
    }
    if(value_path == "extended-community-flags")
    {
        extended_community_flags.yfilter = yfilter;
    }
    if(value_path == "is-aggregator-present")
    {
        is_aggregator_present.yfilter = yfilter;
    }
    if(value_path == "is-aigp-present")
    {
        is_aigp_present.yfilter = yfilter;
    }
    if(value_path == "is-as-path-present")
    {
        is_as_path_present.yfilter = yfilter;
    }
    if(value_path == "is-atomic-aggregate-present")
    {
        is_atomic_aggregate_present.yfilter = yfilter;
    }
    if(value_path == "is-community-present")
    {
        is_community_present.yfilter = yfilter;
    }
    if(value_path == "is-connector-present")
    {
        is_connector_present.yfilter = yfilter;
    }
    if(value_path == "is-extended-community-present")
    {
        is_extended_community_present.yfilter = yfilter;
    }
    if(value_path == "is-label-index-present")
    {
        is_label_index_present.yfilter = yfilter;
    }
    if(value_path == "is-large-community-present")
    {
        is_large_community_present.yfilter = yfilter;
    }
    if(value_path == "is-local-pref-present")
    {
        is_local_pref_present.yfilter = yfilter;
    }
    if(value_path == "is-ls-attribute-present")
    {
        is_ls_attribute_present.yfilter = yfilter;
    }
    if(value_path == "is-metric-present")
    {
        is_metric_present.yfilter = yfilter;
    }
    if(value_path == "is-origin-present")
    {
        is_origin_present.yfilter = yfilter;
    }
    if(value_path == "is-pe-distinguisher-label-present")
    {
        is_pe_distinguisher_label_present.yfilter = yfilter;
    }
    if(value_path == "is-pmsi-present")
    {
        is_pmsi_present.yfilter = yfilter;
    }
    if(value_path == "is-pppmp-present")
    {
        is_pppmp_present.yfilter = yfilter;
    }
    if(value_path == "is-ssa-present")
    {
        is_ssa_present.yfilter = yfilter;
    }
    if(value_path == "l2tpv3-session-id")
    {
        l2tpv3_session_id.yfilter = yfilter;
    }
    if(value_path == "local-preference")
    {
        local_preference.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "neighbor-as")
    {
        neighbor_as.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "originator")
    {
        originator.yfilter = yfilter;
    }
    if(value_path == "pmsi-flags")
    {
        pmsi_flags.yfilter = yfilter;
    }
    if(value_path == "pmsi-label")
    {
        pmsi_label.yfilter = yfilter;
    }
    if(value_path == "pmsi-type")
    {
        pmsi_type.yfilter = yfilter;
    }
    if(value_path == "ppm-pvalue")
    {
        ppm_pvalue.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cluster" || name == "community" || name == "connector-value" || name == "extended-community" || name == "l2tpv3-cookie" || name == "label-index-attr" || name == "large-community" || name == "ls-attr" || name == "pe-distinguisher-label" || name == "pmsi-value" || name == "tunnel-encap" || name == "unknown-attribute" || name == "aggregator-address" || name == "aggregator-as" || name == "aigp-metric-value" || name == "as-path" || name == "connector-type" || name == "extended-community-flags" || name == "is-aggregator-present" || name == "is-aigp-present" || name == "is-as-path-present" || name == "is-atomic-aggregate-present" || name == "is-community-present" || name == "is-connector-present" || name == "is-extended-community-present" || name == "is-label-index-present" || name == "is-large-community-present" || name == "is-local-pref-present" || name == "is-ls-attribute-present" || name == "is-metric-present" || name == "is-origin-present" || name == "is-pe-distinguisher-label-present" || name == "is-pmsi-present" || name == "is-pppmp-present" || name == "is-ssa-present" || name == "l2tpv3-session-id" || name == "local-preference" || name == "metric" || name == "neighbor-as" || name == "origin" || name == "originator" || name == "pmsi-flags" || name == "pmsi-label" || name == "pmsi-type" || name == "ppm-pvalue")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::Cluster()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "cluster"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::~Cluster()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cluster";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::Community()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "community"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::~Community()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::ConnectorValue()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "connector-value"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::~ConnectorValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connector-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::ExtendedCommunity()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "extended-community"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::~ExtendedCommunity()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie::L2Tpv3Cookie()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "l2tpv3-cookie"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie::~L2Tpv3Cookie()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv3-cookie";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr::LabelIndexAttr()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "label-index-attr"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr::~LabelIndexAttr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-index-attr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::LargeCommunity()
    :
    global_admin{YType::uint32, "global-admin"},
    local_data1{YType::uint32, "local-data1"},
    local_data2{YType::uint32, "local-data2"}
{

    yang_name = "large-community"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::~LargeCommunity()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::has_data() const
{
    return global_admin.is_set
	|| local_data1.is_set
	|| local_data2.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(global_admin.yfilter)
	|| ydk::is_set(local_data1.yfilter)
	|| ydk::is_set(local_data2.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "large-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_admin.is_set || is_set(global_admin.yfilter)) leaf_name_data.push_back(global_admin.get_name_leafdata());
    if (local_data1.is_set || is_set(local_data1.yfilter)) leaf_name_data.push_back(local_data1.get_name_leafdata());
    if (local_data2.is_set || is_set(local_data2.yfilter)) leaf_name_data.push_back(local_data2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "global-admin")
    {
        global_admin = value;
        global_admin.value_namespace = name_space;
        global_admin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-data1")
    {
        local_data1 = value;
        local_data1.value_namespace = name_space;
        local_data1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-data2")
    {
        local_data2 = value;
        local_data2.value_namespace = name_space;
        local_data2.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "global-admin")
    {
        global_admin.yfilter = yfilter;
    }
    if(value_path == "local-data1")
    {
        local_data1.yfilter = yfilter;
    }
    if(value_path == "local-data2")
    {
        local_data2.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-admin" || name == "local-data1" || name == "local-data2")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::LsAttr()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "ls-attr"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::~LsAttr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ls-attr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::PeDistinguisherLabel()
    :
    label{YType::uint32, "label"},
    pe_address{YType::str, "pe-address"}
{

    yang_name = "pe-distinguisher-label"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::~PeDistinguisherLabel()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::has_data() const
{
    return label.is_set
	|| pe_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(pe_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pe-distinguisher-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (pe_address.is_set || is_set(pe_address.yfilter)) leaf_name_data.push_back(pe_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pe-address")
    {
        pe_address = value;
        pe_address.value_namespace = name_space;
        pe_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "pe-address")
    {
        pe_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label" || name == "pe-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::PmsiValue()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "pmsi-value"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::~PmsiValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmsi-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::TunnelEncap()
    :
    sr_policy(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy>())
{
    sr_policy->parent = this;

    yang_name = "tunnel-encap"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::~TunnelEncap()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::has_data() const
{
    return (sr_policy !=  nullptr && sr_policy->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::has_operation() const
{
    return is_set(yfilter)
	|| (sr_policy !=  nullptr && sr_policy->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-encap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-policy")
    {
        if(sr_policy == nullptr)
        {
            sr_policy = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy>();
        }
        return sr_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sr_policy != nullptr)
    {
        children["sr-policy"] = sr_policy;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-policy")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SrPolicy()
    :
    preference{YType::uint32, "preference"},
    request_state{YType::enumeration, "request-state"},
    state{YType::boolean, "state"},
    tunnel_encap_type{YType::uint16, "tunnel-encap-type"}
    	,
    allocated_binding_sid(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid>())
	,binding_sid(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid>())
{
    allocated_binding_sid->parent = this;
    binding_sid->parent = this;

    yang_name = "sr-policy"; yang_parent_name = "tunnel-encap"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::~SrPolicy()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::has_data() const
{
    for (std::size_t index=0; index<segment_list.size(); index++)
    {
        if(segment_list[index]->has_data())
            return true;
    }
    return preference.is_set
	|| request_state.is_set
	|| state.is_set
	|| tunnel_encap_type.is_set
	|| (allocated_binding_sid !=  nullptr && allocated_binding_sid->has_data())
	|| (binding_sid !=  nullptr && binding_sid->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::has_operation() const
{
    for (std::size_t index=0; index<segment_list.size(); index++)
    {
        if(segment_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(preference.yfilter)
	|| ydk::is_set(request_state.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(tunnel_encap_type.yfilter)
	|| (allocated_binding_sid !=  nullptr && allocated_binding_sid->has_operation())
	|| (binding_sid !=  nullptr && binding_sid->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (preference.is_set || is_set(preference.yfilter)) leaf_name_data.push_back(preference.get_name_leafdata());
    if (request_state.is_set || is_set(request_state.yfilter)) leaf_name_data.push_back(request_state.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (tunnel_encap_type.is_set || is_set(tunnel_encap_type.yfilter)) leaf_name_data.push_back(tunnel_encap_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "allocated-binding-sid")
    {
        if(allocated_binding_sid == nullptr)
        {
            allocated_binding_sid = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid>();
        }
        return allocated_binding_sid;
    }

    if(child_yang_name == "binding-sid")
    {
        if(binding_sid == nullptr)
        {
            binding_sid = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid>();
        }
        return binding_sid;
    }

    if(child_yang_name == "segment-list")
    {
        for(auto const & c : segment_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList>();
        c->parent = this;
        segment_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(allocated_binding_sid != nullptr)
    {
        children["allocated-binding-sid"] = allocated_binding_sid;
    }

    if(binding_sid != nullptr)
    {
        children["binding-sid"] = binding_sid;
    }

    for (auto const & c : segment_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "preference")
    {
        preference = value;
        preference.value_namespace = name_space;
        preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-state")
    {
        request_state = value;
        request_state.value_namespace = name_space;
        request_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-encap-type")
    {
        tunnel_encap_type = value;
        tunnel_encap_type.value_namespace = name_space;
        tunnel_encap_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "preference")
    {
        preference.yfilter = yfilter;
    }
    if(value_path == "request-state")
    {
        request_state.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "tunnel-encap-type")
    {
        tunnel_encap_type.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allocated-binding-sid" || name == "binding-sid" || name == "segment-list" || name == "preference" || name == "request-state" || name == "state" || name == "tunnel-encap-type")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::AllocatedBindingSid()
    :
    ipv6_address{YType::str, "ipv6-address"},
    label{YType::uint32, "label"},
    type{YType::enumeration, "type"}
{

    yang_name = "allocated-binding-sid"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::~AllocatedBindingSid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::has_data() const
{
    return ipv6_address.is_set
	|| label.is_set
	|| type.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allocated-binding-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-address" || name == "label" || name == "type")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::BindingSid()
    :
    ipv6_address{YType::str, "ipv6-address"},
    label{YType::uint32, "label"},
    type{YType::enumeration, "type"}
{

    yang_name = "binding-sid"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::~BindingSid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::has_data() const
{
    return ipv6_address.is_set
	|| label.is_set
	|| type.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-address" || name == "label" || name == "type")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::SegmentList()
    :
    weight{YType::uint8, "weight"}
{

    yang_name = "segment-list"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::~SegmentList()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::has_data() const
{
    for (std::size_t index=0; index<segment.size(); index++)
    {
        if(segment[index]->has_data())
            return true;
    }
    return weight.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::has_operation() const
{
    for (std::size_t index=0; index<segment.size(); index++)
    {
        if(segment[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment")
    {
        for(auto const & c : segment)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment>();
        c->parent = this;
        segment.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : segment)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment" || name == "weight")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::Segment()
    :
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    label{YType::uint32, "label"},
    type{YType::enumeration, "type"}
{

    yang_name = "segment"; yang_parent_name = "segment-list"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::~Segment()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::has_data() const
{
    return ipv4_address.is_set
	|| ipv6_address.is_set
	|| label.is_set
	|| type.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "ipv6-address" || name == "label" || name == "type")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::UnknownAttribute()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "unknown-attribute"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::~UnknownAttribute()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::RibrnhIp()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress>())
	,l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnVplsAddress>())
{
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;
    l2vpn_mspw_address->parent = this;
    l2vpn_vpls_address->parent = this;

    yang_name = "ribrnh-ip"; yang_parent_name = "attribute-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::~RibrnhIp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ribrnh-ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4_sr_policy_address != nullptr)
    {
        children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(l2vpn_vpls_address != nullptr)
    {
        children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
        ipv4vpna_mcastddress.value_namespace = name_space;
        ipv4vpna_mcastddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
        l2vpn_evpn_address.value_namespace = name_space;
        l2vpn_evpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
        ls_ls_address.value_namespace = name_space;
        ls_ls_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "l2vpn-mspw-address" || name == "l2vpn-vpls-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-flowspec-address" || name == "ipv4-label-address" || name == "ipv4-mcast-address" || name == "ipv4-mdt-address" || name == "ipv4-tunnel-address" || name == "ipv4mvpn-address" || name == "ipv4vpn-address" || name == "ipv4vpn-flowspec-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-flowspec-address" || name == "ipv6-label-address" || name == "ipv6-mcast-address" || name == "ipv6mvpn-address" || name == "ipv6vpn-address" || name == "ipv6vpn-flowspec-address" || name == "ipv6vpn-mcast-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "rt-constraint-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "ribrnh-ip"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "ribrnh-ip"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "ribrnh-ip"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "ribrnh-ip"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RnhAddr::RnhAddr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    len{YType::enumeration, "len"},
    mac_address{YType::str, "mac-address"}
{

    yang_name = "rnh-addr"; yang_parent_name = "attribute-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RnhAddr::~RnhAddr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RnhAddr::has_data() const
{
    return ipv4_address.is_set
	|| ipv6_address.is_set
	|| len.is_set
	|| mac_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RnhAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(mac_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RnhAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rnh-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RnhAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RnhAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RnhAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RnhAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RnhAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Attributes::Attribute::AttributeInfo::RnhAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "ipv6-address" || name == "len" || name == "mac-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::DefaultVrf()
    :
    afs(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs>())
	,bmp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp>())
	,global_process_info(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo>())
	,information(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Information>())
	,message_logs(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs>())
	,neighbor_ranges(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges>())
	,neighbors(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors>())
	,next_hop_vrf(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NextHopVrf>())
	,postits(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits>())
	,process_info(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo>())
	,sessions(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions>())
	,update_inbound_error_neighbors(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors>())
	,update_inbound_error_vrf(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorVrf>())
	,update_inbound_filter_neighbors(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors>())
	,update_inbound_filter_vrf(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf>())
{
    afs->parent = this;
    bmp->parent = this;
    global_process_info->parent = this;
    information->parent = this;
    message_logs->parent = this;
    neighbor_ranges->parent = this;
    neighbors->parent = this;
    next_hop_vrf->parent = this;
    postits->parent = this;
    process_info->parent = this;
    sessions->parent = this;
    update_inbound_error_neighbors->parent = this;
    update_inbound_error_vrf->parent = this;
    update_inbound_filter_neighbors->parent = this;
    update_inbound_filter_vrf->parent = this;

    yang_name = "default-vrf"; yang_parent_name = "instance-standby"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::~DefaultVrf()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::has_data() const
{
    return (afs !=  nullptr && afs->has_data())
	|| (bmp !=  nullptr && bmp->has_data())
	|| (global_process_info !=  nullptr && global_process_info->has_data())
	|| (information !=  nullptr && information->has_data())
	|| (message_logs !=  nullptr && message_logs->has_data())
	|| (neighbor_ranges !=  nullptr && neighbor_ranges->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data())
	|| (next_hop_vrf !=  nullptr && next_hop_vrf->has_data())
	|| (postits !=  nullptr && postits->has_data())
	|| (process_info !=  nullptr && process_info->has_data())
	|| (sessions !=  nullptr && sessions->has_data())
	|| (update_inbound_error_neighbors !=  nullptr && update_inbound_error_neighbors->has_data())
	|| (update_inbound_error_vrf !=  nullptr && update_inbound_error_vrf->has_data())
	|| (update_inbound_filter_neighbors !=  nullptr && update_inbound_filter_neighbors->has_data())
	|| (update_inbound_filter_vrf !=  nullptr && update_inbound_filter_vrf->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::has_operation() const
{
    return is_set(yfilter)
	|| (afs !=  nullptr && afs->has_operation())
	|| (bmp !=  nullptr && bmp->has_operation())
	|| (global_process_info !=  nullptr && global_process_info->has_operation())
	|| (information !=  nullptr && information->has_operation())
	|| (message_logs !=  nullptr && message_logs->has_operation())
	|| (neighbor_ranges !=  nullptr && neighbor_ranges->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (next_hop_vrf !=  nullptr && next_hop_vrf->has_operation())
	|| (postits !=  nullptr && postits->has_operation())
	|| (process_info !=  nullptr && process_info->has_operation())
	|| (sessions !=  nullptr && sessions->has_operation())
	|| (update_inbound_error_neighbors !=  nullptr && update_inbound_error_neighbors->has_operation())
	|| (update_inbound_error_vrf !=  nullptr && update_inbound_error_vrf->has_operation())
	|| (update_inbound_filter_neighbors !=  nullptr && update_inbound_filter_neighbors->has_operation())
	|| (update_inbound_filter_vrf !=  nullptr && update_inbound_filter_vrf->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "afs")
    {
        if(afs == nullptr)
        {
            afs = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs>();
        }
        return afs;
    }

    if(child_yang_name == "bmp")
    {
        if(bmp == nullptr)
        {
            bmp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp>();
        }
        return bmp;
    }

    if(child_yang_name == "global-process-info")
    {
        if(global_process_info == nullptr)
        {
            global_process_info = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo>();
        }
        return global_process_info;
    }

    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Information>();
        }
        return information;
    }

    if(child_yang_name == "message-logs")
    {
        if(message_logs == nullptr)
        {
            message_logs = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs>();
        }
        return message_logs;
    }

    if(child_yang_name == "neighbor-ranges")
    {
        if(neighbor_ranges == nullptr)
        {
            neighbor_ranges = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges>();
        }
        return neighbor_ranges;
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors>();
        }
        return neighbors;
    }

    if(child_yang_name == "next-hop-vrf")
    {
        if(next_hop_vrf == nullptr)
        {
            next_hop_vrf = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NextHopVrf>();
        }
        return next_hop_vrf;
    }

    if(child_yang_name == "postits")
    {
        if(postits == nullptr)
        {
            postits = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits>();
        }
        return postits;
    }

    if(child_yang_name == "process-info")
    {
        if(process_info == nullptr)
        {
            process_info = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo>();
        }
        return process_info;
    }

    if(child_yang_name == "sessions")
    {
        if(sessions == nullptr)
        {
            sessions = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions>();
        }
        return sessions;
    }

    if(child_yang_name == "update-inbound-error-neighbors")
    {
        if(update_inbound_error_neighbors == nullptr)
        {
            update_inbound_error_neighbors = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors>();
        }
        return update_inbound_error_neighbors;
    }

    if(child_yang_name == "update-inbound-error-vrf")
    {
        if(update_inbound_error_vrf == nullptr)
        {
            update_inbound_error_vrf = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorVrf>();
        }
        return update_inbound_error_vrf;
    }

    if(child_yang_name == "update-inbound-filter-neighbors")
    {
        if(update_inbound_filter_neighbors == nullptr)
        {
            update_inbound_filter_neighbors = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors>();
        }
        return update_inbound_filter_neighbors;
    }

    if(child_yang_name == "update-inbound-filter-vrf")
    {
        if(update_inbound_filter_vrf == nullptr)
        {
            update_inbound_filter_vrf = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf>();
        }
        return update_inbound_filter_vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(afs != nullptr)
    {
        children["afs"] = afs;
    }

    if(bmp != nullptr)
    {
        children["bmp"] = bmp;
    }

    if(global_process_info != nullptr)
    {
        children["global-process-info"] = global_process_info;
    }

    if(information != nullptr)
    {
        children["information"] = information;
    }

    if(message_logs != nullptr)
    {
        children["message-logs"] = message_logs;
    }

    if(neighbor_ranges != nullptr)
    {
        children["neighbor-ranges"] = neighbor_ranges;
    }

    if(neighbors != nullptr)
    {
        children["neighbors"] = neighbors;
    }

    if(next_hop_vrf != nullptr)
    {
        children["next-hop-vrf"] = next_hop_vrf;
    }

    if(postits != nullptr)
    {
        children["postits"] = postits;
    }

    if(process_info != nullptr)
    {
        children["process-info"] = process_info;
    }

    if(sessions != nullptr)
    {
        children["sessions"] = sessions;
    }

    if(update_inbound_error_neighbors != nullptr)
    {
        children["update-inbound-error-neighbors"] = update_inbound_error_neighbors;
    }

    if(update_inbound_error_vrf != nullptr)
    {
        children["update-inbound-error-vrf"] = update_inbound_error_vrf;
    }

    if(update_inbound_filter_neighbors != nullptr)
    {
        children["update-inbound-filter-neighbors"] = update_inbound_filter_neighbors;
    }

    if(update_inbound_filter_vrf != nullptr)
    {
        children["update-inbound-filter-vrf"] = update_inbound_filter_vrf;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afs" || name == "bmp" || name == "global-process-info" || name == "information" || name == "message-logs" || name == "neighbor-ranges" || name == "neighbors" || name == "next-hop-vrf" || name == "postits" || name == "process-info" || name == "sessions" || name == "update-inbound-error-neighbors" || name == "update-inbound-error-vrf" || name == "update-inbound-filter-neighbors" || name == "update-inbound-filter-vrf")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Afs()
{

    yang_name = "afs"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::~Afs()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::has_data() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::has_operation() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af")
    {
        for(auto const & c : af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af>();
        c->parent = this;
        af.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : af)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Af()
    :
    af_name{YType::enumeration, "af-name"}
    	,
    advertised_path_counts(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathCounts>())
	,advertised_path_xr(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr>())
	,advertised_paths(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths>())
	,af_process_info(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AfProcessInfo>())
	,attributes(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes>())
	,bmp_path_table_generic(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::BmpPathTableGeneric>())
	,bmp_paths(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::BmpPaths>())
	,convergence(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Convergence>())
	,dampenings(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings>())
	,epes(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Epes>())
	,global_af_process_info(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::GlobalAfProcessInfo>())
	,neighbor_af_table(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NeighborAfTable>())
	,network_all_rds(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds>())
	,network_lookup_all_rds(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds>())
	,network_prefixes(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkPrefixes>())
	,networks(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Networks>())
	,next_hop_address_families(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies>())
	,path_labeled_table(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PathLabeledTable>())
	,path_table(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PathTable>())
	,path_used_table(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PathUsedTable>())
	,policies(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Policies>())
	,prefix_filters(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters>())
	,rpc_sets(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::RpcSets>())
	,rt_set_counters(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::RtSetCounters>())
	,sourced_networks(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks>())
	,update_generation_address_family(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationAddressFamily>())
	,update_generation_filter_groups(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationFilterGroups>())
	,update_generation_neighbors(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationNeighbors>())
	,update_generation_sub_groups(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups>())
	,update_generation_update_groups(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationUpdateGroups>())
	,update_groups(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups>())
{
    advertised_path_counts->parent = this;
    advertised_path_xr->parent = this;
    advertised_paths->parent = this;
    af_process_info->parent = this;
    attributes->parent = this;
    bmp_path_table_generic->parent = this;
    bmp_paths->parent = this;
    convergence->parent = this;
    dampenings->parent = this;
    epes->parent = this;
    global_af_process_info->parent = this;
    neighbor_af_table->parent = this;
    network_all_rds->parent = this;
    network_lookup_all_rds->parent = this;
    network_prefixes->parent = this;
    networks->parent = this;
    next_hop_address_families->parent = this;
    path_labeled_table->parent = this;
    path_table->parent = this;
    path_used_table->parent = this;
    policies->parent = this;
    prefix_filters->parent = this;
    rpc_sets->parent = this;
    rt_set_counters->parent = this;
    sourced_networks->parent = this;
    update_generation_address_family->parent = this;
    update_generation_filter_groups->parent = this;
    update_generation_neighbors->parent = this;
    update_generation_sub_groups->parent = this;
    update_generation_update_groups->parent = this;
    update_groups->parent = this;

    yang_name = "af"; yang_parent_name = "afs"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::~Af()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::has_data() const
{
    return af_name.is_set
	|| (advertised_path_counts !=  nullptr && advertised_path_counts->has_data())
	|| (advertised_path_xr !=  nullptr && advertised_path_xr->has_data())
	|| (advertised_paths !=  nullptr && advertised_paths->has_data())
	|| (af_process_info !=  nullptr && af_process_info->has_data())
	|| (attributes !=  nullptr && attributes->has_data())
	|| (bmp_path_table_generic !=  nullptr && bmp_path_table_generic->has_data())
	|| (bmp_paths !=  nullptr && bmp_paths->has_data())
	|| (convergence !=  nullptr && convergence->has_data())
	|| (dampenings !=  nullptr && dampenings->has_data())
	|| (epes !=  nullptr && epes->has_data())
	|| (global_af_process_info !=  nullptr && global_af_process_info->has_data())
	|| (neighbor_af_table !=  nullptr && neighbor_af_table->has_data())
	|| (network_all_rds !=  nullptr && network_all_rds->has_data())
	|| (network_lookup_all_rds !=  nullptr && network_lookup_all_rds->has_data())
	|| (network_prefixes !=  nullptr && network_prefixes->has_data())
	|| (networks !=  nullptr && networks->has_data())
	|| (next_hop_address_families !=  nullptr && next_hop_address_families->has_data())
	|| (path_labeled_table !=  nullptr && path_labeled_table->has_data())
	|| (path_table !=  nullptr && path_table->has_data())
	|| (path_used_table !=  nullptr && path_used_table->has_data())
	|| (policies !=  nullptr && policies->has_data())
	|| (prefix_filters !=  nullptr && prefix_filters->has_data())
	|| (rpc_sets !=  nullptr && rpc_sets->has_data())
	|| (rt_set_counters !=  nullptr && rt_set_counters->has_data())
	|| (sourced_networks !=  nullptr && sourced_networks->has_data())
	|| (update_generation_address_family !=  nullptr && update_generation_address_family->has_data())
	|| (update_generation_filter_groups !=  nullptr && update_generation_filter_groups->has_data())
	|| (update_generation_neighbors !=  nullptr && update_generation_neighbors->has_data())
	|| (update_generation_sub_groups !=  nullptr && update_generation_sub_groups->has_data())
	|| (update_generation_update_groups !=  nullptr && update_generation_update_groups->has_data())
	|| (update_groups !=  nullptr && update_groups->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| (advertised_path_counts !=  nullptr && advertised_path_counts->has_operation())
	|| (advertised_path_xr !=  nullptr && advertised_path_xr->has_operation())
	|| (advertised_paths !=  nullptr && advertised_paths->has_operation())
	|| (af_process_info !=  nullptr && af_process_info->has_operation())
	|| (attributes !=  nullptr && attributes->has_operation())
	|| (bmp_path_table_generic !=  nullptr && bmp_path_table_generic->has_operation())
	|| (bmp_paths !=  nullptr && bmp_paths->has_operation())
	|| (convergence !=  nullptr && convergence->has_operation())
	|| (dampenings !=  nullptr && dampenings->has_operation())
	|| (epes !=  nullptr && epes->has_operation())
	|| (global_af_process_info !=  nullptr && global_af_process_info->has_operation())
	|| (neighbor_af_table !=  nullptr && neighbor_af_table->has_operation())
	|| (network_all_rds !=  nullptr && network_all_rds->has_operation())
	|| (network_lookup_all_rds !=  nullptr && network_lookup_all_rds->has_operation())
	|| (network_prefixes !=  nullptr && network_prefixes->has_operation())
	|| (networks !=  nullptr && networks->has_operation())
	|| (next_hop_address_families !=  nullptr && next_hop_address_families->has_operation())
	|| (path_labeled_table !=  nullptr && path_labeled_table->has_operation())
	|| (path_table !=  nullptr && path_table->has_operation())
	|| (path_used_table !=  nullptr && path_used_table->has_operation())
	|| (policies !=  nullptr && policies->has_operation())
	|| (prefix_filters !=  nullptr && prefix_filters->has_operation())
	|| (rpc_sets !=  nullptr && rpc_sets->has_operation())
	|| (rt_set_counters !=  nullptr && rt_set_counters->has_operation())
	|| (sourced_networks !=  nullptr && sourced_networks->has_operation())
	|| (update_generation_address_family !=  nullptr && update_generation_address_family->has_operation())
	|| (update_generation_filter_groups !=  nullptr && update_generation_filter_groups->has_operation())
	|| (update_generation_neighbors !=  nullptr && update_generation_neighbors->has_operation())
	|| (update_generation_sub_groups !=  nullptr && update_generation_sub_groups->has_operation())
	|| (update_generation_update_groups !=  nullptr && update_generation_update_groups->has_operation())
	|| (update_groups !=  nullptr && update_groups->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af" <<"[af-name='" <<af_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertised-path-counts")
    {
        if(advertised_path_counts == nullptr)
        {
            advertised_path_counts = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathCounts>();
        }
        return advertised_path_counts;
    }

    if(child_yang_name == "advertised-path-xr")
    {
        if(advertised_path_xr == nullptr)
        {
            advertised_path_xr = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr>();
        }
        return advertised_path_xr;
    }

    if(child_yang_name == "advertised-paths")
    {
        if(advertised_paths == nullptr)
        {
            advertised_paths = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths>();
        }
        return advertised_paths;
    }

    if(child_yang_name == "af-process-info")
    {
        if(af_process_info == nullptr)
        {
            af_process_info = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AfProcessInfo>();
        }
        return af_process_info;
    }

    if(child_yang_name == "attributes")
    {
        if(attributes == nullptr)
        {
            attributes = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes>();
        }
        return attributes;
    }

    if(child_yang_name == "bmp-path-table-generic")
    {
        if(bmp_path_table_generic == nullptr)
        {
            bmp_path_table_generic = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::BmpPathTableGeneric>();
        }
        return bmp_path_table_generic;
    }

    if(child_yang_name == "bmp-paths")
    {
        if(bmp_paths == nullptr)
        {
            bmp_paths = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::BmpPaths>();
        }
        return bmp_paths;
    }

    if(child_yang_name == "convergence")
    {
        if(convergence == nullptr)
        {
            convergence = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Convergence>();
        }
        return convergence;
    }

    if(child_yang_name == "dampenings")
    {
        if(dampenings == nullptr)
        {
            dampenings = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings>();
        }
        return dampenings;
    }

    if(child_yang_name == "epes")
    {
        if(epes == nullptr)
        {
            epes = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Epes>();
        }
        return epes;
    }

    if(child_yang_name == "global-af-process-info")
    {
        if(global_af_process_info == nullptr)
        {
            global_af_process_info = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::GlobalAfProcessInfo>();
        }
        return global_af_process_info;
    }

    if(child_yang_name == "neighbor-af-table")
    {
        if(neighbor_af_table == nullptr)
        {
            neighbor_af_table = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NeighborAfTable>();
        }
        return neighbor_af_table;
    }

    if(child_yang_name == "network-all-rds")
    {
        if(network_all_rds == nullptr)
        {
            network_all_rds = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds>();
        }
        return network_all_rds;
    }

    if(child_yang_name == "network-lookup-all-rds")
    {
        if(network_lookup_all_rds == nullptr)
        {
            network_lookup_all_rds = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds>();
        }
        return network_lookup_all_rds;
    }

    if(child_yang_name == "network-prefixes")
    {
        if(network_prefixes == nullptr)
        {
            network_prefixes = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkPrefixes>();
        }
        return network_prefixes;
    }

    if(child_yang_name == "networks")
    {
        if(networks == nullptr)
        {
            networks = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Networks>();
        }
        return networks;
    }

    if(child_yang_name == "next-hop-address-families")
    {
        if(next_hop_address_families == nullptr)
        {
            next_hop_address_families = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies>();
        }
        return next_hop_address_families;
    }

    if(child_yang_name == "path-labeled-table")
    {
        if(path_labeled_table == nullptr)
        {
            path_labeled_table = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PathLabeledTable>();
        }
        return path_labeled_table;
    }

    if(child_yang_name == "path-table")
    {
        if(path_table == nullptr)
        {
            path_table = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PathTable>();
        }
        return path_table;
    }

    if(child_yang_name == "path-used-table")
    {
        if(path_used_table == nullptr)
        {
            path_used_table = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PathUsedTable>();
        }
        return path_used_table;
    }

    if(child_yang_name == "policies")
    {
        if(policies == nullptr)
        {
            policies = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Policies>();
        }
        return policies;
    }

    if(child_yang_name == "prefix-filters")
    {
        if(prefix_filters == nullptr)
        {
            prefix_filters = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters>();
        }
        return prefix_filters;
    }

    if(child_yang_name == "rpc-sets")
    {
        if(rpc_sets == nullptr)
        {
            rpc_sets = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::RpcSets>();
        }
        return rpc_sets;
    }

    if(child_yang_name == "rt-set-counters")
    {
        if(rt_set_counters == nullptr)
        {
            rt_set_counters = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::RtSetCounters>();
        }
        return rt_set_counters;
    }

    if(child_yang_name == "sourced-networks")
    {
        if(sourced_networks == nullptr)
        {
            sourced_networks = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks>();
        }
        return sourced_networks;
    }

    if(child_yang_name == "update-generation-address-family")
    {
        if(update_generation_address_family == nullptr)
        {
            update_generation_address_family = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationAddressFamily>();
        }
        return update_generation_address_family;
    }

    if(child_yang_name == "update-generation-filter-groups")
    {
        if(update_generation_filter_groups == nullptr)
        {
            update_generation_filter_groups = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationFilterGroups>();
        }
        return update_generation_filter_groups;
    }

    if(child_yang_name == "update-generation-neighbors")
    {
        if(update_generation_neighbors == nullptr)
        {
            update_generation_neighbors = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationNeighbors>();
        }
        return update_generation_neighbors;
    }

    if(child_yang_name == "update-generation-sub-groups")
    {
        if(update_generation_sub_groups == nullptr)
        {
            update_generation_sub_groups = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups>();
        }
        return update_generation_sub_groups;
    }

    if(child_yang_name == "update-generation-update-groups")
    {
        if(update_generation_update_groups == nullptr)
        {
            update_generation_update_groups = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationUpdateGroups>();
        }
        return update_generation_update_groups;
    }

    if(child_yang_name == "update-groups")
    {
        if(update_groups == nullptr)
        {
            update_groups = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups>();
        }
        return update_groups;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(advertised_path_counts != nullptr)
    {
        children["advertised-path-counts"] = advertised_path_counts;
    }

    if(advertised_path_xr != nullptr)
    {
        children["advertised-path-xr"] = advertised_path_xr;
    }

    if(advertised_paths != nullptr)
    {
        children["advertised-paths"] = advertised_paths;
    }

    if(af_process_info != nullptr)
    {
        children["af-process-info"] = af_process_info;
    }

    if(attributes != nullptr)
    {
        children["attributes"] = attributes;
    }

    if(bmp_path_table_generic != nullptr)
    {
        children["bmp-path-table-generic"] = bmp_path_table_generic;
    }

    if(bmp_paths != nullptr)
    {
        children["bmp-paths"] = bmp_paths;
    }

    if(convergence != nullptr)
    {
        children["convergence"] = convergence;
    }

    if(dampenings != nullptr)
    {
        children["dampenings"] = dampenings;
    }

    if(epes != nullptr)
    {
        children["epes"] = epes;
    }

    if(global_af_process_info != nullptr)
    {
        children["global-af-process-info"] = global_af_process_info;
    }

    if(neighbor_af_table != nullptr)
    {
        children["neighbor-af-table"] = neighbor_af_table;
    }

    if(network_all_rds != nullptr)
    {
        children["network-all-rds"] = network_all_rds;
    }

    if(network_lookup_all_rds != nullptr)
    {
        children["network-lookup-all-rds"] = network_lookup_all_rds;
    }

    if(network_prefixes != nullptr)
    {
        children["network-prefixes"] = network_prefixes;
    }

    if(networks != nullptr)
    {
        children["networks"] = networks;
    }

    if(next_hop_address_families != nullptr)
    {
        children["next-hop-address-families"] = next_hop_address_families;
    }

    if(path_labeled_table != nullptr)
    {
        children["path-labeled-table"] = path_labeled_table;
    }

    if(path_table != nullptr)
    {
        children["path-table"] = path_table;
    }

    if(path_used_table != nullptr)
    {
        children["path-used-table"] = path_used_table;
    }

    if(policies != nullptr)
    {
        children["policies"] = policies;
    }

    if(prefix_filters != nullptr)
    {
        children["prefix-filters"] = prefix_filters;
    }

    if(rpc_sets != nullptr)
    {
        children["rpc-sets"] = rpc_sets;
    }

    if(rt_set_counters != nullptr)
    {
        children["rt-set-counters"] = rt_set_counters;
    }

    if(sourced_networks != nullptr)
    {
        children["sourced-networks"] = sourced_networks;
    }

    if(update_generation_address_family != nullptr)
    {
        children["update-generation-address-family"] = update_generation_address_family;
    }

    if(update_generation_filter_groups != nullptr)
    {
        children["update-generation-filter-groups"] = update_generation_filter_groups;
    }

    if(update_generation_neighbors != nullptr)
    {
        children["update-generation-neighbors"] = update_generation_neighbors;
    }

    if(update_generation_sub_groups != nullptr)
    {
        children["update-generation-sub-groups"] = update_generation_sub_groups;
    }

    if(update_generation_update_groups != nullptr)
    {
        children["update-generation-update-groups"] = update_generation_update_groups;
    }

    if(update_groups != nullptr)
    {
        children["update-groups"] = update_groups;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertised-path-counts" || name == "advertised-path-xr" || name == "advertised-paths" || name == "af-process-info" || name == "attributes" || name == "bmp-path-table-generic" || name == "bmp-paths" || name == "convergence" || name == "dampenings" || name == "epes" || name == "global-af-process-info" || name == "neighbor-af-table" || name == "network-all-rds" || name == "network-lookup-all-rds" || name == "network-prefixes" || name == "networks" || name == "next-hop-address-families" || name == "path-labeled-table" || name == "path-table" || name == "path-used-table" || name == "policies" || name == "prefix-filters" || name == "rpc-sets" || name == "rt-set-counters" || name == "sourced-networks" || name == "update-generation-address-family" || name == "update-generation-filter-groups" || name == "update-generation-neighbors" || name == "update-generation-sub-groups" || name == "update-generation-update-groups" || name == "update-groups" || name == "af-name")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathCounts::AdvertisedPathCounts()
{

    yang_name = "advertised-path-counts"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathCounts::~AdvertisedPathCounts()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathCounts::has_data() const
{
    for (std::size_t index=0; index<advertised_path_count.size(); index++)
    {
        if(advertised_path_count[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathCounts::has_operation() const
{
    for (std::size_t index=0; index<advertised_path_count.size(); index++)
    {
        if(advertised_path_count[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathCounts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertised-path-counts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathCounts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathCounts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertised-path-count")
    {
        for(auto const & c : advertised_path_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathCounts::AdvertisedPathCount>();
        c->parent = this;
        advertised_path_count.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathCounts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : advertised_path_count)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathCounts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathCounts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathCounts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertised-path-count")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathCounts::AdvertisedPathCount::AdvertisedPathCount()
    :
    neighbor_address{YType::str, "neighbor-address"},
    max_prefix_advertisedcount{YType::uint32, "max-prefix-advertisedcount"}
{

    yang_name = "advertised-path-count"; yang_parent_name = "advertised-path-counts"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathCounts::AdvertisedPathCount::~AdvertisedPathCount()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathCounts::AdvertisedPathCount::has_data() const
{
    return neighbor_address.is_set
	|| max_prefix_advertisedcount.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathCounts::AdvertisedPathCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(max_prefix_advertisedcount.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathCounts::AdvertisedPathCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertised-path-count" <<"[neighbor-address='" <<neighbor_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathCounts::AdvertisedPathCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (max_prefix_advertisedcount.is_set || is_set(max_prefix_advertisedcount.yfilter)) leaf_name_data.push_back(max_prefix_advertisedcount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathCounts::AdvertisedPathCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathCounts::AdvertisedPathCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathCounts::AdvertisedPathCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-prefix-advertisedcount")
    {
        max_prefix_advertisedcount = value;
        max_prefix_advertisedcount.value_namespace = name_space;
        max_prefix_advertisedcount.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathCounts::AdvertisedPathCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "max-prefix-advertisedcount")
    {
        max_prefix_advertisedcount.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathCounts::AdvertisedPathCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "max-prefix-advertisedcount")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPathXr()
{

    yang_name = "advertised-path-xr"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::~AdvertisedPathXr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::has_data() const
{
    for (std::size_t index=0; index<advertised_path.size(); index++)
    {
        if(advertised_path[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::has_operation() const
{
    for (std::size_t index=0; index<advertised_path.size(); index++)
    {
        if(advertised_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertised-path-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertised-path")
    {
        for(auto const & c : advertised_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath>();
        c->parent = this;
        advertised_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : advertised_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertised-path")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AdvertisedPath()
    :
    af_name{YType::enumeration, "af-name"},
    label_fail{YType::boolean, "label-fail"},
    label_o_or_version{YType::uint32, "label-o-or-version"},
    label_oor{YType::boolean, "label-oor"},
    neighbor_address{YType::str, "neighbor-address"},
    network{YType::str, "network"},
    no_path{YType::boolean, "no-path"},
    prefix_length{YType::int32, "prefix-length"},
    prefix_version{YType::uint32, "prefix-version"},
    process_instance_id{YType::uint8, "process-instance-id"},
    rd{YType::str, "rd"},
    route_distinguisher{YType::str, "route-distinguisher"},
    source_route_distinguisher{YType::str, "source-route-distinguisher"},
    source_vrf_name{YType::str, "source-vrf-name"},
    srcaf_name{YType::enumeration, "srcaf-name"},
    vrf_name{YType::str, "vrf-name"}
    	,
    attributes_after_policy_in(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn>())
	,neighbor_address_xr(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::NeighborAddressXr>())
	,path_information(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation>())
{
    attributes_after_policy_in->parent = this;
    neighbor_address_xr->parent = this;
    path_information->parent = this;

    yang_name = "advertised-path"; yang_parent_name = "advertised-path-xr"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::~AdvertisedPath()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::has_data() const
{
    return af_name.is_set
	|| label_fail.is_set
	|| label_o_or_version.is_set
	|| label_oor.is_set
	|| neighbor_address.is_set
	|| network.is_set
	|| no_path.is_set
	|| prefix_length.is_set
	|| prefix_version.is_set
	|| process_instance_id.is_set
	|| rd.is_set
	|| route_distinguisher.is_set
	|| source_route_distinguisher.is_set
	|| source_vrf_name.is_set
	|| srcaf_name.is_set
	|| vrf_name.is_set
	|| (attributes_after_policy_in !=  nullptr && attributes_after_policy_in->has_data())
	|| (neighbor_address_xr !=  nullptr && neighbor_address_xr->has_data())
	|| (path_information !=  nullptr && path_information->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(label_fail.yfilter)
	|| ydk::is_set(label_o_or_version.yfilter)
	|| ydk::is_set(label_oor.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(network.yfilter)
	|| ydk::is_set(no_path.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(prefix_version.yfilter)
	|| ydk::is_set(process_instance_id.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| ydk::is_set(route_distinguisher.yfilter)
	|| ydk::is_set(source_route_distinguisher.yfilter)
	|| ydk::is_set(source_vrf_name.yfilter)
	|| ydk::is_set(srcaf_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (attributes_after_policy_in !=  nullptr && attributes_after_policy_in->has_operation())
	|| (neighbor_address_xr !=  nullptr && neighbor_address_xr->has_operation())
	|| (path_information !=  nullptr && path_information->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertised-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (label_fail.is_set || is_set(label_fail.yfilter)) leaf_name_data.push_back(label_fail.get_name_leafdata());
    if (label_o_or_version.is_set || is_set(label_o_or_version.yfilter)) leaf_name_data.push_back(label_o_or_version.get_name_leafdata());
    if (label_oor.is_set || is_set(label_oor.yfilter)) leaf_name_data.push_back(label_oor.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());
    if (no_path.is_set || is_set(no_path.yfilter)) leaf_name_data.push_back(no_path.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix_version.is_set || is_set(prefix_version.yfilter)) leaf_name_data.push_back(prefix_version.get_name_leafdata());
    if (process_instance_id.is_set || is_set(process_instance_id.yfilter)) leaf_name_data.push_back(process_instance_id.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (route_distinguisher.is_set || is_set(route_distinguisher.yfilter)) leaf_name_data.push_back(route_distinguisher.get_name_leafdata());
    if (source_route_distinguisher.is_set || is_set(source_route_distinguisher.yfilter)) leaf_name_data.push_back(source_route_distinguisher.get_name_leafdata());
    if (source_vrf_name.is_set || is_set(source_vrf_name.yfilter)) leaf_name_data.push_back(source_vrf_name.get_name_leafdata());
    if (srcaf_name.is_set || is_set(srcaf_name.yfilter)) leaf_name_data.push_back(srcaf_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attributes-after-policy-in")
    {
        if(attributes_after_policy_in == nullptr)
        {
            attributes_after_policy_in = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn>();
        }
        return attributes_after_policy_in;
    }

    if(child_yang_name == "neighbor-address-xr")
    {
        if(neighbor_address_xr == nullptr)
        {
            neighbor_address_xr = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::NeighborAddressXr>();
        }
        return neighbor_address_xr;
    }

    if(child_yang_name == "path-information")
    {
        if(path_information == nullptr)
        {
            path_information = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation>();
        }
        return path_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attributes_after_policy_in != nullptr)
    {
        children["attributes-after-policy-in"] = attributes_after_policy_in;
    }

    if(neighbor_address_xr != nullptr)
    {
        children["neighbor-address-xr"] = neighbor_address_xr;
    }

    if(path_information != nullptr)
    {
        children["path-information"] = path_information;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-fail")
    {
        label_fail = value;
        label_fail.value_namespace = name_space;
        label_fail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-o-or-version")
    {
        label_o_or_version = value;
        label_o_or_version.value_namespace = name_space;
        label_o_or_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-oor")
    {
        label_oor = value;
        label_oor.value_namespace = name_space;
        label_oor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network")
    {
        network = value;
        network.value_namespace = name_space;
        network.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-path")
    {
        no_path = value;
        no_path.value_namespace = name_space;
        no_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-version")
    {
        prefix_version = value;
        prefix_version.value_namespace = name_space;
        prefix_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-instance-id")
    {
        process_instance_id = value;
        process_instance_id.value_namespace = name_space;
        process_instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-distinguisher")
    {
        route_distinguisher = value;
        route_distinguisher.value_namespace = name_space;
        route_distinguisher.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-route-distinguisher")
    {
        source_route_distinguisher = value;
        source_route_distinguisher.value_namespace = name_space;
        source_route_distinguisher.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-vrf-name")
    {
        source_vrf_name = value;
        source_vrf_name.value_namespace = name_space;
        source_vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcaf-name")
    {
        srcaf_name = value;
        srcaf_name.value_namespace = name_space;
        srcaf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "label-fail")
    {
        label_fail.yfilter = yfilter;
    }
    if(value_path == "label-o-or-version")
    {
        label_o_or_version.yfilter = yfilter;
    }
    if(value_path == "label-oor")
    {
        label_oor.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "network")
    {
        network.yfilter = yfilter;
    }
    if(value_path == "no-path")
    {
        no_path.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "prefix-version")
    {
        prefix_version.yfilter = yfilter;
    }
    if(value_path == "process-instance-id")
    {
        process_instance_id.yfilter = yfilter;
    }
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
    if(value_path == "route-distinguisher")
    {
        route_distinguisher.yfilter = yfilter;
    }
    if(value_path == "source-route-distinguisher")
    {
        source_route_distinguisher.yfilter = yfilter;
    }
    if(value_path == "source-vrf-name")
    {
        source_vrf_name.yfilter = yfilter;
    }
    if(value_path == "srcaf-name")
    {
        srcaf_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attributes-after-policy-in" || name == "neighbor-address-xr" || name == "path-information" || name == "af-name" || name == "label-fail" || name == "label-o-or-version" || name == "label-oor" || name == "neighbor-address" || name == "network" || name == "no-path" || name == "prefix-length" || name == "prefix-version" || name == "process-instance-id" || name == "rd" || name == "route-distinguisher" || name == "source-route-distinguisher" || name == "source-vrf-name" || name == "srcaf-name" || name == "vrf-name")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttributesAfterPolicyIn()
    :
    attribute_key_number{YType::uint32, "attribute-key-number"},
    attribute_reuse_id_config{YType::boolean, "attribute-reuse-id-config"},
    attribute_reuse_id_current{YType::uint32, "attribute-reuse-id-current"},
    attribute_reuse_id_keys{YType::uint32, "attribute-reuse-id-keys"},
    attribute_reuse_id_max_id{YType::uint32, "attribute-reuse-id-max-id"},
    attribute_reuse_id_node{YType::uint32, "attribute-reuse-id-node"},
    attribute_reuse_id_recover_sec{YType::uint32, "attribute-reuse-id-recover-sec"},
    is_application_gateway_present{YType::boolean, "is-application-gateway-present"},
    is_as_path2_byte{YType::boolean, "is-as-path2-byte"},
    is_attr_set_present{YType::boolean, "is-attr-set-present"},
    is_ribrnh_present{YType::boolean, "is-ribrnh-present"},
    is_rnh_present{YType::boolean, "is-rnh-present"},
    ribrnh_encap{YType::uint8, "ribrnh-encap"},
    ribrnh_mac{YType::str, "ribrnh-mac"},
    ribrnh_table{YType::uint32, "ribrnh-table"},
    ribrnh_vni{YType::uint32, "ribrnh-vni"},
    ribrnhip_table{YType::uint32, "ribrnhip-table"},
    rnh_addr_len{YType::uint32, "rnh-addr-len"},
    rnh_len{YType::uint8, "rnh-len"},
    rnh_type{YType::uint16, "rnh-type"},
    set_aigp_inbound_igp{YType::boolean, "set-aigp-inbound-igp"},
    set_aigp_inbound_metric{YType::boolean, "set-aigp-inbound-metric"},
    vpn_distinguisher{YType::uint32, "vpn-distinguisher"}
    	,
    attr_set(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet>())
	,common_attributes(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes>())
	,ribrnh_ip(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp>())
	,rnh_addr(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RnhAddr>())
{
    attr_set->parent = this;
    common_attributes->parent = this;
    ribrnh_ip->parent = this;
    rnh_addr->parent = this;

    yang_name = "attributes-after-policy-in"; yang_parent_name = "advertised-path"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::~AttributesAfterPolicyIn()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::has_data() const
{
    return attribute_key_number.is_set
	|| attribute_reuse_id_config.is_set
	|| attribute_reuse_id_current.is_set
	|| attribute_reuse_id_keys.is_set
	|| attribute_reuse_id_max_id.is_set
	|| attribute_reuse_id_node.is_set
	|| attribute_reuse_id_recover_sec.is_set
	|| is_application_gateway_present.is_set
	|| is_as_path2_byte.is_set
	|| is_attr_set_present.is_set
	|| is_ribrnh_present.is_set
	|| is_rnh_present.is_set
	|| ribrnh_encap.is_set
	|| ribrnh_mac.is_set
	|| ribrnh_table.is_set
	|| ribrnh_vni.is_set
	|| ribrnhip_table.is_set
	|| rnh_addr_len.is_set
	|| rnh_len.is_set
	|| rnh_type.is_set
	|| set_aigp_inbound_igp.is_set
	|| set_aigp_inbound_metric.is_set
	|| vpn_distinguisher.is_set
	|| (attr_set !=  nullptr && attr_set->has_data())
	|| (common_attributes !=  nullptr && common_attributes->has_data())
	|| (ribrnh_ip !=  nullptr && ribrnh_ip->has_data())
	|| (rnh_addr !=  nullptr && rnh_addr->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute_key_number.yfilter)
	|| ydk::is_set(attribute_reuse_id_config.yfilter)
	|| ydk::is_set(attribute_reuse_id_current.yfilter)
	|| ydk::is_set(attribute_reuse_id_keys.yfilter)
	|| ydk::is_set(attribute_reuse_id_max_id.yfilter)
	|| ydk::is_set(attribute_reuse_id_node.yfilter)
	|| ydk::is_set(attribute_reuse_id_recover_sec.yfilter)
	|| ydk::is_set(is_application_gateway_present.yfilter)
	|| ydk::is_set(is_as_path2_byte.yfilter)
	|| ydk::is_set(is_attr_set_present.yfilter)
	|| ydk::is_set(is_ribrnh_present.yfilter)
	|| ydk::is_set(is_rnh_present.yfilter)
	|| ydk::is_set(ribrnh_encap.yfilter)
	|| ydk::is_set(ribrnh_mac.yfilter)
	|| ydk::is_set(ribrnh_table.yfilter)
	|| ydk::is_set(ribrnh_vni.yfilter)
	|| ydk::is_set(ribrnhip_table.yfilter)
	|| ydk::is_set(rnh_addr_len.yfilter)
	|| ydk::is_set(rnh_len.yfilter)
	|| ydk::is_set(rnh_type.yfilter)
	|| ydk::is_set(set_aigp_inbound_igp.yfilter)
	|| ydk::is_set(set_aigp_inbound_metric.yfilter)
	|| ydk::is_set(vpn_distinguisher.yfilter)
	|| (attr_set !=  nullptr && attr_set->has_operation())
	|| (common_attributes !=  nullptr && common_attributes->has_operation())
	|| (ribrnh_ip !=  nullptr && ribrnh_ip->has_operation())
	|| (rnh_addr !=  nullptr && rnh_addr->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes-after-policy-in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_key_number.is_set || is_set(attribute_key_number.yfilter)) leaf_name_data.push_back(attribute_key_number.get_name_leafdata());
    if (attribute_reuse_id_config.is_set || is_set(attribute_reuse_id_config.yfilter)) leaf_name_data.push_back(attribute_reuse_id_config.get_name_leafdata());
    if (attribute_reuse_id_current.is_set || is_set(attribute_reuse_id_current.yfilter)) leaf_name_data.push_back(attribute_reuse_id_current.get_name_leafdata());
    if (attribute_reuse_id_keys.is_set || is_set(attribute_reuse_id_keys.yfilter)) leaf_name_data.push_back(attribute_reuse_id_keys.get_name_leafdata());
    if (attribute_reuse_id_max_id.is_set || is_set(attribute_reuse_id_max_id.yfilter)) leaf_name_data.push_back(attribute_reuse_id_max_id.get_name_leafdata());
    if (attribute_reuse_id_node.is_set || is_set(attribute_reuse_id_node.yfilter)) leaf_name_data.push_back(attribute_reuse_id_node.get_name_leafdata());
    if (attribute_reuse_id_recover_sec.is_set || is_set(attribute_reuse_id_recover_sec.yfilter)) leaf_name_data.push_back(attribute_reuse_id_recover_sec.get_name_leafdata());
    if (is_application_gateway_present.is_set || is_set(is_application_gateway_present.yfilter)) leaf_name_data.push_back(is_application_gateway_present.get_name_leafdata());
    if (is_as_path2_byte.is_set || is_set(is_as_path2_byte.yfilter)) leaf_name_data.push_back(is_as_path2_byte.get_name_leafdata());
    if (is_attr_set_present.is_set || is_set(is_attr_set_present.yfilter)) leaf_name_data.push_back(is_attr_set_present.get_name_leafdata());
    if (is_ribrnh_present.is_set || is_set(is_ribrnh_present.yfilter)) leaf_name_data.push_back(is_ribrnh_present.get_name_leafdata());
    if (is_rnh_present.is_set || is_set(is_rnh_present.yfilter)) leaf_name_data.push_back(is_rnh_present.get_name_leafdata());
    if (ribrnh_encap.is_set || is_set(ribrnh_encap.yfilter)) leaf_name_data.push_back(ribrnh_encap.get_name_leafdata());
    if (ribrnh_mac.is_set || is_set(ribrnh_mac.yfilter)) leaf_name_data.push_back(ribrnh_mac.get_name_leafdata());
    if (ribrnh_table.is_set || is_set(ribrnh_table.yfilter)) leaf_name_data.push_back(ribrnh_table.get_name_leafdata());
    if (ribrnh_vni.is_set || is_set(ribrnh_vni.yfilter)) leaf_name_data.push_back(ribrnh_vni.get_name_leafdata());
    if (ribrnhip_table.is_set || is_set(ribrnhip_table.yfilter)) leaf_name_data.push_back(ribrnhip_table.get_name_leafdata());
    if (rnh_addr_len.is_set || is_set(rnh_addr_len.yfilter)) leaf_name_data.push_back(rnh_addr_len.get_name_leafdata());
    if (rnh_len.is_set || is_set(rnh_len.yfilter)) leaf_name_data.push_back(rnh_len.get_name_leafdata());
    if (rnh_type.is_set || is_set(rnh_type.yfilter)) leaf_name_data.push_back(rnh_type.get_name_leafdata());
    if (set_aigp_inbound_igp.is_set || is_set(set_aigp_inbound_igp.yfilter)) leaf_name_data.push_back(set_aigp_inbound_igp.get_name_leafdata());
    if (set_aigp_inbound_metric.is_set || is_set(set_aigp_inbound_metric.yfilter)) leaf_name_data.push_back(set_aigp_inbound_metric.get_name_leafdata());
    if (vpn_distinguisher.is_set || is_set(vpn_distinguisher.yfilter)) leaf_name_data.push_back(vpn_distinguisher.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attr-set")
    {
        if(attr_set == nullptr)
        {
            attr_set = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet>();
        }
        return attr_set;
    }

    if(child_yang_name == "common-attributes")
    {
        if(common_attributes == nullptr)
        {
            common_attributes = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes>();
        }
        return common_attributes;
    }

    if(child_yang_name == "ribrnh-ip")
    {
        if(ribrnh_ip == nullptr)
        {
            ribrnh_ip = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp>();
        }
        return ribrnh_ip;
    }

    if(child_yang_name == "rnh-addr")
    {
        if(rnh_addr == nullptr)
        {
            rnh_addr = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RnhAddr>();
        }
        return rnh_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attr_set != nullptr)
    {
        children["attr-set"] = attr_set;
    }

    if(common_attributes != nullptr)
    {
        children["common-attributes"] = common_attributes;
    }

    if(ribrnh_ip != nullptr)
    {
        children["ribrnh-ip"] = ribrnh_ip;
    }

    if(rnh_addr != nullptr)
    {
        children["rnh-addr"] = rnh_addr;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute-key-number")
    {
        attribute_key_number = value;
        attribute_key_number.value_namespace = name_space;
        attribute_key_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-reuse-id-config")
    {
        attribute_reuse_id_config = value;
        attribute_reuse_id_config.value_namespace = name_space;
        attribute_reuse_id_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-reuse-id-current")
    {
        attribute_reuse_id_current = value;
        attribute_reuse_id_current.value_namespace = name_space;
        attribute_reuse_id_current.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-reuse-id-keys")
    {
        attribute_reuse_id_keys = value;
        attribute_reuse_id_keys.value_namespace = name_space;
        attribute_reuse_id_keys.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-reuse-id-max-id")
    {
        attribute_reuse_id_max_id = value;
        attribute_reuse_id_max_id.value_namespace = name_space;
        attribute_reuse_id_max_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-reuse-id-node")
    {
        attribute_reuse_id_node = value;
        attribute_reuse_id_node.value_namespace = name_space;
        attribute_reuse_id_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-reuse-id-recover-sec")
    {
        attribute_reuse_id_recover_sec = value;
        attribute_reuse_id_recover_sec.value_namespace = name_space;
        attribute_reuse_id_recover_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-application-gateway-present")
    {
        is_application_gateway_present = value;
        is_application_gateway_present.value_namespace = name_space;
        is_application_gateway_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-as-path2-byte")
    {
        is_as_path2_byte = value;
        is_as_path2_byte.value_namespace = name_space;
        is_as_path2_byte.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-attr-set-present")
    {
        is_attr_set_present = value;
        is_attr_set_present.value_namespace = name_space;
        is_attr_set_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ribrnh-present")
    {
        is_ribrnh_present = value;
        is_ribrnh_present.value_namespace = name_space;
        is_ribrnh_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rnh-present")
    {
        is_rnh_present = value;
        is_rnh_present.value_namespace = name_space;
        is_rnh_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ribrnh-encap")
    {
        ribrnh_encap = value;
        ribrnh_encap.value_namespace = name_space;
        ribrnh_encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ribrnh-mac")
    {
        ribrnh_mac = value;
        ribrnh_mac.value_namespace = name_space;
        ribrnh_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ribrnh-table")
    {
        ribrnh_table = value;
        ribrnh_table.value_namespace = name_space;
        ribrnh_table.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ribrnh-vni")
    {
        ribrnh_vni = value;
        ribrnh_vni.value_namespace = name_space;
        ribrnh_vni.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ribrnhip-table")
    {
        ribrnhip_table = value;
        ribrnhip_table.value_namespace = name_space;
        ribrnhip_table.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rnh-addr-len")
    {
        rnh_addr_len = value;
        rnh_addr_len.value_namespace = name_space;
        rnh_addr_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rnh-len")
    {
        rnh_len = value;
        rnh_len.value_namespace = name_space;
        rnh_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rnh-type")
    {
        rnh_type = value;
        rnh_type.value_namespace = name_space;
        rnh_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-aigp-inbound-igp")
    {
        set_aigp_inbound_igp = value;
        set_aigp_inbound_igp.value_namespace = name_space;
        set_aigp_inbound_igp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-aigp-inbound-metric")
    {
        set_aigp_inbound_metric = value;
        set_aigp_inbound_metric.value_namespace = name_space;
        set_aigp_inbound_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpn-distinguisher")
    {
        vpn_distinguisher = value;
        vpn_distinguisher.value_namespace = name_space;
        vpn_distinguisher.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute-key-number")
    {
        attribute_key_number.yfilter = yfilter;
    }
    if(value_path == "attribute-reuse-id-config")
    {
        attribute_reuse_id_config.yfilter = yfilter;
    }
    if(value_path == "attribute-reuse-id-current")
    {
        attribute_reuse_id_current.yfilter = yfilter;
    }
    if(value_path == "attribute-reuse-id-keys")
    {
        attribute_reuse_id_keys.yfilter = yfilter;
    }
    if(value_path == "attribute-reuse-id-max-id")
    {
        attribute_reuse_id_max_id.yfilter = yfilter;
    }
    if(value_path == "attribute-reuse-id-node")
    {
        attribute_reuse_id_node.yfilter = yfilter;
    }
    if(value_path == "attribute-reuse-id-recover-sec")
    {
        attribute_reuse_id_recover_sec.yfilter = yfilter;
    }
    if(value_path == "is-application-gateway-present")
    {
        is_application_gateway_present.yfilter = yfilter;
    }
    if(value_path == "is-as-path2-byte")
    {
        is_as_path2_byte.yfilter = yfilter;
    }
    if(value_path == "is-attr-set-present")
    {
        is_attr_set_present.yfilter = yfilter;
    }
    if(value_path == "is-ribrnh-present")
    {
        is_ribrnh_present.yfilter = yfilter;
    }
    if(value_path == "is-rnh-present")
    {
        is_rnh_present.yfilter = yfilter;
    }
    if(value_path == "ribrnh-encap")
    {
        ribrnh_encap.yfilter = yfilter;
    }
    if(value_path == "ribrnh-mac")
    {
        ribrnh_mac.yfilter = yfilter;
    }
    if(value_path == "ribrnh-table")
    {
        ribrnh_table.yfilter = yfilter;
    }
    if(value_path == "ribrnh-vni")
    {
        ribrnh_vni.yfilter = yfilter;
    }
    if(value_path == "ribrnhip-table")
    {
        ribrnhip_table.yfilter = yfilter;
    }
    if(value_path == "rnh-addr-len")
    {
        rnh_addr_len.yfilter = yfilter;
    }
    if(value_path == "rnh-len")
    {
        rnh_len.yfilter = yfilter;
    }
    if(value_path == "rnh-type")
    {
        rnh_type.yfilter = yfilter;
    }
    if(value_path == "set-aigp-inbound-igp")
    {
        set_aigp_inbound_igp.yfilter = yfilter;
    }
    if(value_path == "set-aigp-inbound-metric")
    {
        set_aigp_inbound_metric.yfilter = yfilter;
    }
    if(value_path == "vpn-distinguisher")
    {
        vpn_distinguisher.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attr-set" || name == "common-attributes" || name == "ribrnh-ip" || name == "rnh-addr" || name == "attribute-key-number" || name == "attribute-reuse-id-config" || name == "attribute-reuse-id-current" || name == "attribute-reuse-id-keys" || name == "attribute-reuse-id-max-id" || name == "attribute-reuse-id-node" || name == "attribute-reuse-id-recover-sec" || name == "is-application-gateway-present" || name == "is-as-path2-byte" || name == "is-attr-set-present" || name == "is-ribrnh-present" || name == "is-rnh-present" || name == "ribrnh-encap" || name == "ribrnh-mac" || name == "ribrnh-table" || name == "ribrnh-vni" || name == "ribrnhip-table" || name == "rnh-addr-len" || name == "rnh-len" || name == "rnh-type" || name == "set-aigp-inbound-igp" || name == "set-aigp-inbound-metric" || name == "vpn-distinguisher")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::AttrSet()
    :
    aggregator_address{YType::str, "aggregator-address"},
    aggregator_as{YType::uint32, "aggregator-as"},
    aigp_metric_value{YType::uint64, "aigp-metric-value"},
    as_path{YType::str, "as-path"},
    connector_type{YType::uint16, "connector-type"},
    extended_community_flags{YType::uint8, "extended-community-flags"},
    is_aggregator_present{YType::boolean, "is-aggregator-present"},
    is_aigp_present{YType::boolean, "is-aigp-present"},
    is_as_path_present{YType::boolean, "is-as-path-present"},
    is_atomic_aggregate_present{YType::boolean, "is-atomic-aggregate-present"},
    is_community_present{YType::boolean, "is-community-present"},
    is_connector_present{YType::boolean, "is-connector-present"},
    is_extended_community_present{YType::boolean, "is-extended-community-present"},
    is_label_index_present{YType::boolean, "is-label-index-present"},
    is_large_community_present{YType::boolean, "is-large-community-present"},
    is_local_pref_present{YType::boolean, "is-local-pref-present"},
    is_ls_attribute_present{YType::boolean, "is-ls-attribute-present"},
    is_metric_present{YType::boolean, "is-metric-present"},
    is_origin_present{YType::boolean, "is-origin-present"},
    is_pe_distinguisher_label_present{YType::boolean, "is-pe-distinguisher-label-present"},
    is_pmsi_present{YType::boolean, "is-pmsi-present"},
    is_pppmp_present{YType::boolean, "is-pppmp-present"},
    is_ssa_present{YType::boolean, "is-ssa-present"},
    l2tpv3_session_id{YType::uint32, "l2tpv3-session-id"},
    local_preference{YType::uint32, "local-preference"},
    metric{YType::uint32, "metric"},
    neighbor_as{YType::uint32, "neighbor-as"},
    origin{YType::uint16, "origin"},
    originator{YType::str, "originator"},
    pmsi_flags{YType::uint8, "pmsi-flags"},
    pmsi_label{YType::uint32, "pmsi-label"},
    pmsi_type{YType::uint16, "pmsi-type"},
    ppm_pvalue{YType::uint32, "ppm-pvalue"}
    	,
    tunnel_encap(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap>())
{
    tunnel_encap->parent = this;

    yang_name = "attr-set"; yang_parent_name = "attributes-after-policy-in"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::~AttrSet()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::has_data() const
{
    for (std::size_t index=0; index<cluster.size(); index++)
    {
        if(cluster[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<community.size(); index++)
    {
        if(community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<connector_value.size(); index++)
    {
        if(connector_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_community.size(); index++)
    {
        if(extended_community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<l2tpv3_cookie.size(); index++)
    {
        if(l2tpv3_cookie[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<label_index_attr.size(); index++)
    {
        if(label_index_attr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<large_community.size(); index++)
    {
        if(large_community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ls_attr.size(); index++)
    {
        if(ls_attr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pe_distinguisher_label.size(); index++)
    {
        if(pe_distinguisher_label[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pmsi_value.size(); index++)
    {
        if(pmsi_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<unknown_attribute.size(); index++)
    {
        if(unknown_attribute[index]->has_data())
            return true;
    }
    return aggregator_address.is_set
	|| aggregator_as.is_set
	|| aigp_metric_value.is_set
	|| as_path.is_set
	|| connector_type.is_set
	|| extended_community_flags.is_set
	|| is_aggregator_present.is_set
	|| is_aigp_present.is_set
	|| is_as_path_present.is_set
	|| is_atomic_aggregate_present.is_set
	|| is_community_present.is_set
	|| is_connector_present.is_set
	|| is_extended_community_present.is_set
	|| is_label_index_present.is_set
	|| is_large_community_present.is_set
	|| is_local_pref_present.is_set
	|| is_ls_attribute_present.is_set
	|| is_metric_present.is_set
	|| is_origin_present.is_set
	|| is_pe_distinguisher_label_present.is_set
	|| is_pmsi_present.is_set
	|| is_pppmp_present.is_set
	|| is_ssa_present.is_set
	|| l2tpv3_session_id.is_set
	|| local_preference.is_set
	|| metric.is_set
	|| neighbor_as.is_set
	|| origin.is_set
	|| originator.is_set
	|| pmsi_flags.is_set
	|| pmsi_label.is_set
	|| pmsi_type.is_set
	|| ppm_pvalue.is_set
	|| (tunnel_encap !=  nullptr && tunnel_encap->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::has_operation() const
{
    for (std::size_t index=0; index<cluster.size(); index++)
    {
        if(cluster[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<community.size(); index++)
    {
        if(community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<connector_value.size(); index++)
    {
        if(connector_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_community.size(); index++)
    {
        if(extended_community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<l2tpv3_cookie.size(); index++)
    {
        if(l2tpv3_cookie[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<label_index_attr.size(); index++)
    {
        if(label_index_attr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<large_community.size(); index++)
    {
        if(large_community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ls_attr.size(); index++)
    {
        if(ls_attr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pe_distinguisher_label.size(); index++)
    {
        if(pe_distinguisher_label[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pmsi_value.size(); index++)
    {
        if(pmsi_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<unknown_attribute.size(); index++)
    {
        if(unknown_attribute[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(aggregator_address.yfilter)
	|| ydk::is_set(aggregator_as.yfilter)
	|| ydk::is_set(aigp_metric_value.yfilter)
	|| ydk::is_set(as_path.yfilter)
	|| ydk::is_set(connector_type.yfilter)
	|| ydk::is_set(extended_community_flags.yfilter)
	|| ydk::is_set(is_aggregator_present.yfilter)
	|| ydk::is_set(is_aigp_present.yfilter)
	|| ydk::is_set(is_as_path_present.yfilter)
	|| ydk::is_set(is_atomic_aggregate_present.yfilter)
	|| ydk::is_set(is_community_present.yfilter)
	|| ydk::is_set(is_connector_present.yfilter)
	|| ydk::is_set(is_extended_community_present.yfilter)
	|| ydk::is_set(is_label_index_present.yfilter)
	|| ydk::is_set(is_large_community_present.yfilter)
	|| ydk::is_set(is_local_pref_present.yfilter)
	|| ydk::is_set(is_ls_attribute_present.yfilter)
	|| ydk::is_set(is_metric_present.yfilter)
	|| ydk::is_set(is_origin_present.yfilter)
	|| ydk::is_set(is_pe_distinguisher_label_present.yfilter)
	|| ydk::is_set(is_pmsi_present.yfilter)
	|| ydk::is_set(is_pppmp_present.yfilter)
	|| ydk::is_set(is_ssa_present.yfilter)
	|| ydk::is_set(l2tpv3_session_id.yfilter)
	|| ydk::is_set(local_preference.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(neighbor_as.yfilter)
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(originator.yfilter)
	|| ydk::is_set(pmsi_flags.yfilter)
	|| ydk::is_set(pmsi_label.yfilter)
	|| ydk::is_set(pmsi_type.yfilter)
	|| ydk::is_set(ppm_pvalue.yfilter)
	|| (tunnel_encap !=  nullptr && tunnel_encap->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attr-set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aggregator_address.is_set || is_set(aggregator_address.yfilter)) leaf_name_data.push_back(aggregator_address.get_name_leafdata());
    if (aggregator_as.is_set || is_set(aggregator_as.yfilter)) leaf_name_data.push_back(aggregator_as.get_name_leafdata());
    if (aigp_metric_value.is_set || is_set(aigp_metric_value.yfilter)) leaf_name_data.push_back(aigp_metric_value.get_name_leafdata());
    if (as_path.is_set || is_set(as_path.yfilter)) leaf_name_data.push_back(as_path.get_name_leafdata());
    if (connector_type.is_set || is_set(connector_type.yfilter)) leaf_name_data.push_back(connector_type.get_name_leafdata());
    if (extended_community_flags.is_set || is_set(extended_community_flags.yfilter)) leaf_name_data.push_back(extended_community_flags.get_name_leafdata());
    if (is_aggregator_present.is_set || is_set(is_aggregator_present.yfilter)) leaf_name_data.push_back(is_aggregator_present.get_name_leafdata());
    if (is_aigp_present.is_set || is_set(is_aigp_present.yfilter)) leaf_name_data.push_back(is_aigp_present.get_name_leafdata());
    if (is_as_path_present.is_set || is_set(is_as_path_present.yfilter)) leaf_name_data.push_back(is_as_path_present.get_name_leafdata());
    if (is_atomic_aggregate_present.is_set || is_set(is_atomic_aggregate_present.yfilter)) leaf_name_data.push_back(is_atomic_aggregate_present.get_name_leafdata());
    if (is_community_present.is_set || is_set(is_community_present.yfilter)) leaf_name_data.push_back(is_community_present.get_name_leafdata());
    if (is_connector_present.is_set || is_set(is_connector_present.yfilter)) leaf_name_data.push_back(is_connector_present.get_name_leafdata());
    if (is_extended_community_present.is_set || is_set(is_extended_community_present.yfilter)) leaf_name_data.push_back(is_extended_community_present.get_name_leafdata());
    if (is_label_index_present.is_set || is_set(is_label_index_present.yfilter)) leaf_name_data.push_back(is_label_index_present.get_name_leafdata());
    if (is_large_community_present.is_set || is_set(is_large_community_present.yfilter)) leaf_name_data.push_back(is_large_community_present.get_name_leafdata());
    if (is_local_pref_present.is_set || is_set(is_local_pref_present.yfilter)) leaf_name_data.push_back(is_local_pref_present.get_name_leafdata());
    if (is_ls_attribute_present.is_set || is_set(is_ls_attribute_present.yfilter)) leaf_name_data.push_back(is_ls_attribute_present.get_name_leafdata());
    if (is_metric_present.is_set || is_set(is_metric_present.yfilter)) leaf_name_data.push_back(is_metric_present.get_name_leafdata());
    if (is_origin_present.is_set || is_set(is_origin_present.yfilter)) leaf_name_data.push_back(is_origin_present.get_name_leafdata());
    if (is_pe_distinguisher_label_present.is_set || is_set(is_pe_distinguisher_label_present.yfilter)) leaf_name_data.push_back(is_pe_distinguisher_label_present.get_name_leafdata());
    if (is_pmsi_present.is_set || is_set(is_pmsi_present.yfilter)) leaf_name_data.push_back(is_pmsi_present.get_name_leafdata());
    if (is_pppmp_present.is_set || is_set(is_pppmp_present.yfilter)) leaf_name_data.push_back(is_pppmp_present.get_name_leafdata());
    if (is_ssa_present.is_set || is_set(is_ssa_present.yfilter)) leaf_name_data.push_back(is_ssa_present.get_name_leafdata());
    if (l2tpv3_session_id.is_set || is_set(l2tpv3_session_id.yfilter)) leaf_name_data.push_back(l2tpv3_session_id.get_name_leafdata());
    if (local_preference.is_set || is_set(local_preference.yfilter)) leaf_name_data.push_back(local_preference.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (neighbor_as.is_set || is_set(neighbor_as.yfilter)) leaf_name_data.push_back(neighbor_as.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (originator.is_set || is_set(originator.yfilter)) leaf_name_data.push_back(originator.get_name_leafdata());
    if (pmsi_flags.is_set || is_set(pmsi_flags.yfilter)) leaf_name_data.push_back(pmsi_flags.get_name_leafdata());
    if (pmsi_label.is_set || is_set(pmsi_label.yfilter)) leaf_name_data.push_back(pmsi_label.get_name_leafdata());
    if (pmsi_type.is_set || is_set(pmsi_type.yfilter)) leaf_name_data.push_back(pmsi_type.get_name_leafdata());
    if (ppm_pvalue.is_set || is_set(ppm_pvalue.yfilter)) leaf_name_data.push_back(ppm_pvalue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cluster")
    {
        for(auto const & c : cluster)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::Cluster>();
        c->parent = this;
        cluster.push_back(c);
        return c;
    }

    if(child_yang_name == "community")
    {
        for(auto const & c : community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::Community>();
        c->parent = this;
        community.push_back(c);
        return c;
    }

    if(child_yang_name == "connector-value")
    {
        for(auto const & c : connector_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::ConnectorValue>();
        c->parent = this;
        connector_value.push_back(c);
        return c;
    }

    if(child_yang_name == "extended-community")
    {
        for(auto const & c : extended_community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity>();
        c->parent = this;
        extended_community.push_back(c);
        return c;
    }

    if(child_yang_name == "l2tpv3-cookie")
    {
        for(auto const & c : l2tpv3_cookie)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie>();
        c->parent = this;
        l2tpv3_cookie.push_back(c);
        return c;
    }

    if(child_yang_name == "label-index-attr")
    {
        for(auto const & c : label_index_attr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr>();
        c->parent = this;
        label_index_attr.push_back(c);
        return c;
    }

    if(child_yang_name == "large-community")
    {
        for(auto const & c : large_community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LargeCommunity>();
        c->parent = this;
        large_community.push_back(c);
        return c;
    }

    if(child_yang_name == "ls-attr")
    {
        for(auto const & c : ls_attr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LsAttr>();
        c->parent = this;
        ls_attr.push_back(c);
        return c;
    }

    if(child_yang_name == "pe-distinguisher-label")
    {
        for(auto const & c : pe_distinguisher_label)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel>();
        c->parent = this;
        pe_distinguisher_label.push_back(c);
        return c;
    }

    if(child_yang_name == "pmsi-value")
    {
        for(auto const & c : pmsi_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::PmsiValue>();
        c->parent = this;
        pmsi_value.push_back(c);
        return c;
    }

    if(child_yang_name == "tunnel-encap")
    {
        if(tunnel_encap == nullptr)
        {
            tunnel_encap = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap>();
        }
        return tunnel_encap;
    }

    if(child_yang_name == "unknown-attribute")
    {
        for(auto const & c : unknown_attribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::UnknownAttribute>();
        c->parent = this;
        unknown_attribute.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cluster)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : community)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : connector_value)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : extended_community)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : l2tpv3_cookie)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : label_index_attr)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : large_community)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ls_attr)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : pe_distinguisher_label)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : pmsi_value)
    {
        children[c->get_segment_path()] = c;
    }

    if(tunnel_encap != nullptr)
    {
        children["tunnel-encap"] = tunnel_encap;
    }

    for (auto const & c : unknown_attribute)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aggregator-address")
    {
        aggregator_address = value;
        aggregator_address.value_namespace = name_space;
        aggregator_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggregator-as")
    {
        aggregator_as = value;
        aggregator_as.value_namespace = name_space;
        aggregator_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aigp-metric-value")
    {
        aigp_metric_value = value;
        aigp_metric_value.value_namespace = name_space;
        aigp_metric_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-path")
    {
        as_path = value;
        as_path.value_namespace = name_space;
        as_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connector-type")
    {
        connector_type = value;
        connector_type.value_namespace = name_space;
        connector_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-community-flags")
    {
        extended_community_flags = value;
        extended_community_flags.value_namespace = name_space;
        extended_community_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-aggregator-present")
    {
        is_aggregator_present = value;
        is_aggregator_present.value_namespace = name_space;
        is_aggregator_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-aigp-present")
    {
        is_aigp_present = value;
        is_aigp_present.value_namespace = name_space;
        is_aigp_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-as-path-present")
    {
        is_as_path_present = value;
        is_as_path_present.value_namespace = name_space;
        is_as_path_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-atomic-aggregate-present")
    {
        is_atomic_aggregate_present = value;
        is_atomic_aggregate_present.value_namespace = name_space;
        is_atomic_aggregate_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-community-present")
    {
        is_community_present = value;
        is_community_present.value_namespace = name_space;
        is_community_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-connector-present")
    {
        is_connector_present = value;
        is_connector_present.value_namespace = name_space;
        is_connector_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-extended-community-present")
    {
        is_extended_community_present = value;
        is_extended_community_present.value_namespace = name_space;
        is_extended_community_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-label-index-present")
    {
        is_label_index_present = value;
        is_label_index_present.value_namespace = name_space;
        is_label_index_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-large-community-present")
    {
        is_large_community_present = value;
        is_large_community_present.value_namespace = name_space;
        is_large_community_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-local-pref-present")
    {
        is_local_pref_present = value;
        is_local_pref_present.value_namespace = name_space;
        is_local_pref_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ls-attribute-present")
    {
        is_ls_attribute_present = value;
        is_ls_attribute_present.value_namespace = name_space;
        is_ls_attribute_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-metric-present")
    {
        is_metric_present = value;
        is_metric_present.value_namespace = name_space;
        is_metric_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-origin-present")
    {
        is_origin_present = value;
        is_origin_present.value_namespace = name_space;
        is_origin_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pe-distinguisher-label-present")
    {
        is_pe_distinguisher_label_present = value;
        is_pe_distinguisher_label_present.value_namespace = name_space;
        is_pe_distinguisher_label_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pmsi-present")
    {
        is_pmsi_present = value;
        is_pmsi_present.value_namespace = name_space;
        is_pmsi_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pppmp-present")
    {
        is_pppmp_present = value;
        is_pppmp_present.value_namespace = name_space;
        is_pppmp_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ssa-present")
    {
        is_ssa_present = value;
        is_ssa_present.value_namespace = name_space;
        is_ssa_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2tpv3-session-id")
    {
        l2tpv3_session_id = value;
        l2tpv3_session_id.value_namespace = name_space;
        l2tpv3_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-preference")
    {
        local_preference = value;
        local_preference.value_namespace = name_space;
        local_preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-as")
    {
        neighbor_as = value;
        neighbor_as.value_namespace = name_space;
        neighbor_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "originator")
    {
        originator = value;
        originator.value_namespace = name_space;
        originator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pmsi-flags")
    {
        pmsi_flags = value;
        pmsi_flags.value_namespace = name_space;
        pmsi_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pmsi-label")
    {
        pmsi_label = value;
        pmsi_label.value_namespace = name_space;
        pmsi_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pmsi-type")
    {
        pmsi_type = value;
        pmsi_type.value_namespace = name_space;
        pmsi_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ppm-pvalue")
    {
        ppm_pvalue = value;
        ppm_pvalue.value_namespace = name_space;
        ppm_pvalue.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aggregator-address")
    {
        aggregator_address.yfilter = yfilter;
    }
    if(value_path == "aggregator-as")
    {
        aggregator_as.yfilter = yfilter;
    }
    if(value_path == "aigp-metric-value")
    {
        aigp_metric_value.yfilter = yfilter;
    }
    if(value_path == "as-path")
    {
        as_path.yfilter = yfilter;
    }
    if(value_path == "connector-type")
    {
        connector_type.yfilter = yfilter;
    }
    if(value_path == "extended-community-flags")
    {
        extended_community_flags.yfilter = yfilter;
    }
    if(value_path == "is-aggregator-present")
    {
        is_aggregator_present.yfilter = yfilter;
    }
    if(value_path == "is-aigp-present")
    {
        is_aigp_present.yfilter = yfilter;
    }
    if(value_path == "is-as-path-present")
    {
        is_as_path_present.yfilter = yfilter;
    }
    if(value_path == "is-atomic-aggregate-present")
    {
        is_atomic_aggregate_present.yfilter = yfilter;
    }
    if(value_path == "is-community-present")
    {
        is_community_present.yfilter = yfilter;
    }
    if(value_path == "is-connector-present")
    {
        is_connector_present.yfilter = yfilter;
    }
    if(value_path == "is-extended-community-present")
    {
        is_extended_community_present.yfilter = yfilter;
    }
    if(value_path == "is-label-index-present")
    {
        is_label_index_present.yfilter = yfilter;
    }
    if(value_path == "is-large-community-present")
    {
        is_large_community_present.yfilter = yfilter;
    }
    if(value_path == "is-local-pref-present")
    {
        is_local_pref_present.yfilter = yfilter;
    }
    if(value_path == "is-ls-attribute-present")
    {
        is_ls_attribute_present.yfilter = yfilter;
    }
    if(value_path == "is-metric-present")
    {
        is_metric_present.yfilter = yfilter;
    }
    if(value_path == "is-origin-present")
    {
        is_origin_present.yfilter = yfilter;
    }
    if(value_path == "is-pe-distinguisher-label-present")
    {
        is_pe_distinguisher_label_present.yfilter = yfilter;
    }
    if(value_path == "is-pmsi-present")
    {
        is_pmsi_present.yfilter = yfilter;
    }
    if(value_path == "is-pppmp-present")
    {
        is_pppmp_present.yfilter = yfilter;
    }
    if(value_path == "is-ssa-present")
    {
        is_ssa_present.yfilter = yfilter;
    }
    if(value_path == "l2tpv3-session-id")
    {
        l2tpv3_session_id.yfilter = yfilter;
    }
    if(value_path == "local-preference")
    {
        local_preference.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "neighbor-as")
    {
        neighbor_as.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "originator")
    {
        originator.yfilter = yfilter;
    }
    if(value_path == "pmsi-flags")
    {
        pmsi_flags.yfilter = yfilter;
    }
    if(value_path == "pmsi-label")
    {
        pmsi_label.yfilter = yfilter;
    }
    if(value_path == "pmsi-type")
    {
        pmsi_type.yfilter = yfilter;
    }
    if(value_path == "ppm-pvalue")
    {
        ppm_pvalue.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cluster" || name == "community" || name == "connector-value" || name == "extended-community" || name == "l2tpv3-cookie" || name == "label-index-attr" || name == "large-community" || name == "ls-attr" || name == "pe-distinguisher-label" || name == "pmsi-value" || name == "tunnel-encap" || name == "unknown-attribute" || name == "aggregator-address" || name == "aggregator-as" || name == "aigp-metric-value" || name == "as-path" || name == "connector-type" || name == "extended-community-flags" || name == "is-aggregator-present" || name == "is-aigp-present" || name == "is-as-path-present" || name == "is-atomic-aggregate-present" || name == "is-community-present" || name == "is-connector-present" || name == "is-extended-community-present" || name == "is-label-index-present" || name == "is-large-community-present" || name == "is-local-pref-present" || name == "is-ls-attribute-present" || name == "is-metric-present" || name == "is-origin-present" || name == "is-pe-distinguisher-label-present" || name == "is-pmsi-present" || name == "is-pppmp-present" || name == "is-ssa-present" || name == "l2tpv3-session-id" || name == "local-preference" || name == "metric" || name == "neighbor-as" || name == "origin" || name == "originator" || name == "pmsi-flags" || name == "pmsi-label" || name == "pmsi-type" || name == "ppm-pvalue")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::Cluster::Cluster()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "cluster"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::Cluster::~Cluster()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::Cluster::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::Cluster::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::Cluster::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cluster";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::Cluster::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::Cluster::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::Cluster::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::Cluster::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::Cluster::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::Cluster::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::Community::Community()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "community"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::Community::~Community()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::Community::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::Community::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::Community::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::Community::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::Community::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::Community::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::ConnectorValue::ConnectorValue()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "connector-value"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::ConnectorValue::~ConnectorValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::ConnectorValue::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::ConnectorValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::ConnectorValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connector-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::ConnectorValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::ConnectorValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::ConnectorValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::ConnectorValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::ConnectorValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::ConnectorValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::ExtendedCommunity()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "extended-community"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::~ExtendedCommunity()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie::L2Tpv3Cookie()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "l2tpv3-cookie"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie::~L2Tpv3Cookie()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv3-cookie";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr::LabelIndexAttr()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "label-index-attr"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr::~LabelIndexAttr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-index-attr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LargeCommunity::LargeCommunity()
    :
    global_admin{YType::uint32, "global-admin"},
    local_data1{YType::uint32, "local-data1"},
    local_data2{YType::uint32, "local-data2"}
{

    yang_name = "large-community"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LargeCommunity::~LargeCommunity()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LargeCommunity::has_data() const
{
    return global_admin.is_set
	|| local_data1.is_set
	|| local_data2.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LargeCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(global_admin.yfilter)
	|| ydk::is_set(local_data1.yfilter)
	|| ydk::is_set(local_data2.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LargeCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "large-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LargeCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_admin.is_set || is_set(global_admin.yfilter)) leaf_name_data.push_back(global_admin.get_name_leafdata());
    if (local_data1.is_set || is_set(local_data1.yfilter)) leaf_name_data.push_back(local_data1.get_name_leafdata());
    if (local_data2.is_set || is_set(local_data2.yfilter)) leaf_name_data.push_back(local_data2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LargeCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LargeCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LargeCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "global-admin")
    {
        global_admin = value;
        global_admin.value_namespace = name_space;
        global_admin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-data1")
    {
        local_data1 = value;
        local_data1.value_namespace = name_space;
        local_data1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-data2")
    {
        local_data2 = value;
        local_data2.value_namespace = name_space;
        local_data2.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LargeCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "global-admin")
    {
        global_admin.yfilter = yfilter;
    }
    if(value_path == "local-data1")
    {
        local_data1.yfilter = yfilter;
    }
    if(value_path == "local-data2")
    {
        local_data2.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LargeCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-admin" || name == "local-data1" || name == "local-data2")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LsAttr::LsAttr()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "ls-attr"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LsAttr::~LsAttr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LsAttr::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LsAttr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LsAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ls-attr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LsAttr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LsAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LsAttr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LsAttr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LsAttr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LsAttr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::PeDistinguisherLabel()
    :
    label{YType::uint32, "label"},
    pe_address{YType::str, "pe-address"}
{

    yang_name = "pe-distinguisher-label"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::~PeDistinguisherLabel()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::has_data() const
{
    return label.is_set
	|| pe_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(pe_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pe-distinguisher-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (pe_address.is_set || is_set(pe_address.yfilter)) leaf_name_data.push_back(pe_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pe-address")
    {
        pe_address = value;
        pe_address.value_namespace = name_space;
        pe_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "pe-address")
    {
        pe_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label" || name == "pe-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::PmsiValue::PmsiValue()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "pmsi-value"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::PmsiValue::~PmsiValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::PmsiValue::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::PmsiValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::PmsiValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmsi-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::PmsiValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::PmsiValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::PmsiValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::PmsiValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::PmsiValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::PmsiValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::TunnelEncap()
    :
    sr_policy(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy>())
{
    sr_policy->parent = this;

    yang_name = "tunnel-encap"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::~TunnelEncap()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::has_data() const
{
    return (sr_policy !=  nullptr && sr_policy->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::has_operation() const
{
    return is_set(yfilter)
	|| (sr_policy !=  nullptr && sr_policy->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-encap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-policy")
    {
        if(sr_policy == nullptr)
        {
            sr_policy = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy>();
        }
        return sr_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sr_policy != nullptr)
    {
        children["sr-policy"] = sr_policy;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-policy")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SrPolicy()
    :
    preference{YType::uint32, "preference"},
    request_state{YType::enumeration, "request-state"},
    state{YType::boolean, "state"},
    tunnel_encap_type{YType::uint16, "tunnel-encap-type"}
    	,
    allocated_binding_sid(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid>())
	,binding_sid(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid>())
{
    allocated_binding_sid->parent = this;
    binding_sid->parent = this;

    yang_name = "sr-policy"; yang_parent_name = "tunnel-encap"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::~SrPolicy()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::has_data() const
{
    for (std::size_t index=0; index<segment_list.size(); index++)
    {
        if(segment_list[index]->has_data())
            return true;
    }
    return preference.is_set
	|| request_state.is_set
	|| state.is_set
	|| tunnel_encap_type.is_set
	|| (allocated_binding_sid !=  nullptr && allocated_binding_sid->has_data())
	|| (binding_sid !=  nullptr && binding_sid->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::has_operation() const
{
    for (std::size_t index=0; index<segment_list.size(); index++)
    {
        if(segment_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(preference.yfilter)
	|| ydk::is_set(request_state.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(tunnel_encap_type.yfilter)
	|| (allocated_binding_sid !=  nullptr && allocated_binding_sid->has_operation())
	|| (binding_sid !=  nullptr && binding_sid->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (preference.is_set || is_set(preference.yfilter)) leaf_name_data.push_back(preference.get_name_leafdata());
    if (request_state.is_set || is_set(request_state.yfilter)) leaf_name_data.push_back(request_state.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (tunnel_encap_type.is_set || is_set(tunnel_encap_type.yfilter)) leaf_name_data.push_back(tunnel_encap_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "allocated-binding-sid")
    {
        if(allocated_binding_sid == nullptr)
        {
            allocated_binding_sid = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid>();
        }
        return allocated_binding_sid;
    }

    if(child_yang_name == "binding-sid")
    {
        if(binding_sid == nullptr)
        {
            binding_sid = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid>();
        }
        return binding_sid;
    }

    if(child_yang_name == "segment-list")
    {
        for(auto const & c : segment_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList>();
        c->parent = this;
        segment_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(allocated_binding_sid != nullptr)
    {
        children["allocated-binding-sid"] = allocated_binding_sid;
    }

    if(binding_sid != nullptr)
    {
        children["binding-sid"] = binding_sid;
    }

    for (auto const & c : segment_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "preference")
    {
        preference = value;
        preference.value_namespace = name_space;
        preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-state")
    {
        request_state = value;
        request_state.value_namespace = name_space;
        request_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-encap-type")
    {
        tunnel_encap_type = value;
        tunnel_encap_type.value_namespace = name_space;
        tunnel_encap_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "preference")
    {
        preference.yfilter = yfilter;
    }
    if(value_path == "request-state")
    {
        request_state.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "tunnel-encap-type")
    {
        tunnel_encap_type.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allocated-binding-sid" || name == "binding-sid" || name == "segment-list" || name == "preference" || name == "request-state" || name == "state" || name == "tunnel-encap-type")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::AllocatedBindingSid()
    :
    ipv6_address{YType::str, "ipv6-address"},
    label{YType::uint32, "label"},
    type{YType::enumeration, "type"}
{

    yang_name = "allocated-binding-sid"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::~AllocatedBindingSid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::has_data() const
{
    return ipv6_address.is_set
	|| label.is_set
	|| type.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allocated-binding-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-address" || name == "label" || name == "type")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid::BindingSid()
    :
    ipv6_address{YType::str, "ipv6-address"},
    label{YType::uint32, "label"},
    type{YType::enumeration, "type"}
{

    yang_name = "binding-sid"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid::~BindingSid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid::has_data() const
{
    return ipv6_address.is_set
	|| label.is_set
	|| type.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-address" || name == "label" || name == "type")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::SegmentList()
    :
    weight{YType::uint8, "weight"}
{

    yang_name = "segment-list"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::~SegmentList()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::has_data() const
{
    for (std::size_t index=0; index<segment.size(); index++)
    {
        if(segment[index]->has_data())
            return true;
    }
    return weight.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::has_operation() const
{
    for (std::size_t index=0; index<segment.size(); index++)
    {
        if(segment[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment")
    {
        for(auto const & c : segment)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment>();
        c->parent = this;
        segment.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : segment)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment" || name == "weight")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::Segment()
    :
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    label{YType::uint32, "label"},
    type{YType::enumeration, "type"}
{

    yang_name = "segment"; yang_parent_name = "segment-list"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::~Segment()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::has_data() const
{
    return ipv4_address.is_set
	|| ipv6_address.is_set
	|| label.is_set
	|| type.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "ipv6-address" || name == "label" || name == "type")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::UnknownAttribute()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "unknown-attribute"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::~UnknownAttribute()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}


}
}

