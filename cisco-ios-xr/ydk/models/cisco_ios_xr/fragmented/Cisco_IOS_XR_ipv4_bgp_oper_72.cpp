
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_72.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_73.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_bgp_oper {

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Open()
    :
    rx(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Rx>())
	,tx(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Tx>())
{
    rx->parent = this;
    tx->parent = this;

    yang_name = "open"; yang_parent_name = "message-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::~Open()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::has_data() const
{
    return (rx !=  nullptr && rx->has_data())
	|| (tx !=  nullptr && tx->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::has_operation() const
{
    return is_set(yfilter)
	|| (rx !=  nullptr && rx->has_operation())
	|| (tx !=  nullptr && tx->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "open";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rx")
    {
        if(rx == nullptr)
        {
            rx = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Rx>();
        }
        return rx;
    }

    if(child_yang_name == "tx")
    {
        if(tx == nullptr)
        {
            tx = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Tx>();
        }
        return tx;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rx != nullptr)
    {
        children["rx"] = rx;
    }

    if(tx != nullptr)
    {
        children["tx"] = tx;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rx" || name == "tx")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::Rx()
    :
    count{YType::uint32, "count"}
    	,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec>())
{
    last_time_spec->parent = this;

    yang_name = "rx"; yang_parent_name = "open"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::~Rx()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::has_data() const
{
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec == nullptr)
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec>();
        }
        return last_time_spec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_time_spec != nullptr)
    {
        children["last-time-spec"] = last_time_spec;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-time-spec" || name == "count")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec::LastTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "last-time-spec"; yang_parent_name = "rx"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::Tx()
    :
    count{YType::uint32, "count"}
    	,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec>())
{
    last_time_spec->parent = this;

    yang_name = "tx"; yang_parent_name = "open"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::~Tx()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::has_data() const
{
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec == nullptr)
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec>();
        }
        return last_time_spec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_time_spec != nullptr)
    {
        children["last-time-spec"] = last_time_spec;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-time-spec" || name == "count")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec::LastTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "last-time-spec"; yang_parent_name = "tx"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::RouteRefresh()
    :
    rx(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx>())
	,tx(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx>())
{
    rx->parent = this;
    tx->parent = this;

    yang_name = "route-refresh"; yang_parent_name = "message-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::~RouteRefresh()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::has_data() const
{
    return (rx !=  nullptr && rx->has_data())
	|| (tx !=  nullptr && tx->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::has_operation() const
{
    return is_set(yfilter)
	|| (rx !=  nullptr && rx->has_operation())
	|| (tx !=  nullptr && tx->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-refresh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rx")
    {
        if(rx == nullptr)
        {
            rx = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx>();
        }
        return rx;
    }

    if(child_yang_name == "tx")
    {
        if(tx == nullptr)
        {
            tx = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx>();
        }
        return tx;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rx != nullptr)
    {
        children["rx"] = rx;
    }

    if(tx != nullptr)
    {
        children["tx"] = tx;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rx" || name == "tx")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::Rx()
    :
    count{YType::uint32, "count"}
    	,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec>())
{
    last_time_spec->parent = this;

    yang_name = "rx"; yang_parent_name = "route-refresh"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::~Rx()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::has_data() const
{
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec == nullptr)
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec>();
        }
        return last_time_spec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_time_spec != nullptr)
    {
        children["last-time-spec"] = last_time_spec;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-time-spec" || name == "count")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec::LastTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "last-time-spec"; yang_parent_name = "rx"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::Tx()
    :
    count{YType::uint32, "count"}
    	,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec>())
{
    last_time_spec->parent = this;

    yang_name = "tx"; yang_parent_name = "route-refresh"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::~Tx()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::has_data() const
{
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec == nullptr)
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec>();
        }
        return last_time_spec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_time_spec != nullptr)
    {
        children["last-time-spec"] = last_time_spec;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-time-spec" || name == "count")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec::LastTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "last-time-spec"; yang_parent_name = "tx"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Total()
    :
    rx(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Rx>())
	,tx(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Tx>())
{
    rx->parent = this;
    tx->parent = this;

    yang_name = "total"; yang_parent_name = "message-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::~Total()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::has_data() const
{
    return (rx !=  nullptr && rx->has_data())
	|| (tx !=  nullptr && tx->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::has_operation() const
{
    return is_set(yfilter)
	|| (rx !=  nullptr && rx->has_operation())
	|| (tx !=  nullptr && tx->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rx")
    {
        if(rx == nullptr)
        {
            rx = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Rx>();
        }
        return rx;
    }

    if(child_yang_name == "tx")
    {
        if(tx == nullptr)
        {
            tx = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Tx>();
        }
        return tx;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rx != nullptr)
    {
        children["rx"] = rx;
    }

    if(tx != nullptr)
    {
        children["tx"] = tx;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rx" || name == "tx")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::Rx()
    :
    count{YType::uint32, "count"}
    	,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec>())
{
    last_time_spec->parent = this;

    yang_name = "rx"; yang_parent_name = "total"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::~Rx()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::has_data() const
{
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec == nullptr)
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec>();
        }
        return last_time_spec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_time_spec != nullptr)
    {
        children["last-time-spec"] = last_time_spec;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-time-spec" || name == "count")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec::LastTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "last-time-spec"; yang_parent_name = "rx"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::Tx()
    :
    count{YType::uint32, "count"}
    	,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec>())
{
    last_time_spec->parent = this;

    yang_name = "tx"; yang_parent_name = "total"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::~Tx()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::has_data() const
{
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec == nullptr)
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec>();
        }
        return last_time_spec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_time_spec != nullptr)
    {
        children["last-time-spec"] = last_time_spec;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-time-spec" || name == "count")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec::LastTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "last-time-spec"; yang_parent_name = "tx"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Update()
    :
    rx(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx>())
	,tx(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx>())
{
    rx->parent = this;
    tx->parent = this;

    yang_name = "update"; yang_parent_name = "message-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::~Update()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::has_data() const
{
    return (rx !=  nullptr && rx->has_data())
	|| (tx !=  nullptr && tx->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::has_operation() const
{
    return is_set(yfilter)
	|| (rx !=  nullptr && rx->has_operation())
	|| (tx !=  nullptr && tx->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rx")
    {
        if(rx == nullptr)
        {
            rx = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx>();
        }
        return rx;
    }

    if(child_yang_name == "tx")
    {
        if(tx == nullptr)
        {
            tx = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx>();
        }
        return tx;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rx != nullptr)
    {
        children["rx"] = rx;
    }

    if(tx != nullptr)
    {
        children["tx"] = tx;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rx" || name == "tx")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::Rx()
    :
    count{YType::uint32, "count"}
    	,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec>())
{
    last_time_spec->parent = this;

    yang_name = "rx"; yang_parent_name = "update"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::~Rx()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::has_data() const
{
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec == nullptr)
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec>();
        }
        return last_time_spec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_time_spec != nullptr)
    {
        children["last-time-spec"] = last_time_spec;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-time-spec" || name == "count")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec::LastTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "last-time-spec"; yang_parent_name = "rx"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::Tx()
    :
    count{YType::uint32, "count"}
    	,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec>())
{
    last_time_spec->parent = this;

    yang_name = "tx"; yang_parent_name = "update"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::~Tx()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::has_data() const
{
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec == nullptr)
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec>();
        }
        return last_time_spec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_time_spec != nullptr)
    {
        children["last-time-spec"] = last_time_spec;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-time-spec" || name == "count")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec::LastTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "last-time-spec"; yang_parent_name = "tx"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::PerformanceStatistics::PerformanceStatistics()
    :
    active_collision{YType::uint32, "active-collision"},
    actives{YType::uint32, "actives"},
    control_to_read_thread_trigger{YType::uint32, "control-to-read-thread-trigger"},
    control_to_write_thread_trigger{YType::uint32, "control-to-write-thread-trigger"},
    data_bytes_read{YType::uint32, "data-bytes-read"},
    data_bytes_written{YType::uint32, "data-bytes-written"},
    failed_post_actives{YType::uint32, "failed-post-actives"},
    high_throttled_read{YType::uint32, "high-throttled-read"},
    inbound_update_messages{YType::uint32, "inbound-update-messages"},
    inbound_update_messages_time{YType::uint32, "inbound-update-messages-time"},
    io_read_time{YType::uint32, "io-read-time"},
    io_write_time{YType::uint32, "io-write-time"},
    last_nsr_scoped_sync{YType::uint32, "last-nsr-scoped-sync"},
    last_sent_seq_no{YType::uint32, "last-sent-seq-no"},
    low_throttled_read{YType::uint32, "low-throttled-read"},
    maximum_read_size{YType::uint32, "maximum-read-size"},
    nbr_fd{YType::int32, "nbr-fd"},
    nbr_flags{YType::uint32, "nbr-flags"},
    network_status{YType::uint32, "network-status"},
    nsr_oper_down_count{YType::uint32, "nsr-oper-down-count"},
    passive_collision{YType::uint32, "passive-collision"},
    passives{YType::uint32, "passives"},
    read_calls_count{YType::uint32, "read-calls-count"},
    read_messages_count{YType::uint32, "read-messages-count"},
    read_throttles{YType::uint32, "read-throttles"},
    rejected_passives{YType::uint32, "rejected-passives"},
    reset_flags{YType::uint32, "reset-flags"},
    reset_retries{YType::uint8, "reset-retries"},
    subgroup_list_time{YType::uint32, "subgroup-list-time"},
    sync_flags{YType::uint32, "sync-flags"},
    time_since_last_throttled_read{YType::uint32, "time-since-last-throttled-read"},
    write_calls_count{YType::uint32, "write-calls-count"},
    write_queue_calls_count{YType::uint32, "write-queue-calls-count"},
    write_queue_messages_count{YType::uint32, "write-queue-messages-count"},
    write_queue_time{YType::uint32, "write-queue-time"},
    write_subgroup_calls_count{YType::uint32, "write-subgroup-calls-count"},
    write_subgroup_messages_count{YType::uint32, "write-subgroup-messages-count"}
{

    yang_name = "performance-statistics"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::PerformanceStatistics::~PerformanceStatistics()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::PerformanceStatistics::has_data() const
{
    return active_collision.is_set
	|| actives.is_set
	|| control_to_read_thread_trigger.is_set
	|| control_to_write_thread_trigger.is_set
	|| data_bytes_read.is_set
	|| data_bytes_written.is_set
	|| failed_post_actives.is_set
	|| high_throttled_read.is_set
	|| inbound_update_messages.is_set
	|| inbound_update_messages_time.is_set
	|| io_read_time.is_set
	|| io_write_time.is_set
	|| last_nsr_scoped_sync.is_set
	|| last_sent_seq_no.is_set
	|| low_throttled_read.is_set
	|| maximum_read_size.is_set
	|| nbr_fd.is_set
	|| nbr_flags.is_set
	|| network_status.is_set
	|| nsr_oper_down_count.is_set
	|| passive_collision.is_set
	|| passives.is_set
	|| read_calls_count.is_set
	|| read_messages_count.is_set
	|| read_throttles.is_set
	|| rejected_passives.is_set
	|| reset_flags.is_set
	|| reset_retries.is_set
	|| subgroup_list_time.is_set
	|| sync_flags.is_set
	|| time_since_last_throttled_read.is_set
	|| write_calls_count.is_set
	|| write_queue_calls_count.is_set
	|| write_queue_messages_count.is_set
	|| write_queue_time.is_set
	|| write_subgroup_calls_count.is_set
	|| write_subgroup_messages_count.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::PerformanceStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_collision.yfilter)
	|| ydk::is_set(actives.yfilter)
	|| ydk::is_set(control_to_read_thread_trigger.yfilter)
	|| ydk::is_set(control_to_write_thread_trigger.yfilter)
	|| ydk::is_set(data_bytes_read.yfilter)
	|| ydk::is_set(data_bytes_written.yfilter)
	|| ydk::is_set(failed_post_actives.yfilter)
	|| ydk::is_set(high_throttled_read.yfilter)
	|| ydk::is_set(inbound_update_messages.yfilter)
	|| ydk::is_set(inbound_update_messages_time.yfilter)
	|| ydk::is_set(io_read_time.yfilter)
	|| ydk::is_set(io_write_time.yfilter)
	|| ydk::is_set(last_nsr_scoped_sync.yfilter)
	|| ydk::is_set(last_sent_seq_no.yfilter)
	|| ydk::is_set(low_throttled_read.yfilter)
	|| ydk::is_set(maximum_read_size.yfilter)
	|| ydk::is_set(nbr_fd.yfilter)
	|| ydk::is_set(nbr_flags.yfilter)
	|| ydk::is_set(network_status.yfilter)
	|| ydk::is_set(nsr_oper_down_count.yfilter)
	|| ydk::is_set(passive_collision.yfilter)
	|| ydk::is_set(passives.yfilter)
	|| ydk::is_set(read_calls_count.yfilter)
	|| ydk::is_set(read_messages_count.yfilter)
	|| ydk::is_set(read_throttles.yfilter)
	|| ydk::is_set(rejected_passives.yfilter)
	|| ydk::is_set(reset_flags.yfilter)
	|| ydk::is_set(reset_retries.yfilter)
	|| ydk::is_set(subgroup_list_time.yfilter)
	|| ydk::is_set(sync_flags.yfilter)
	|| ydk::is_set(time_since_last_throttled_read.yfilter)
	|| ydk::is_set(write_calls_count.yfilter)
	|| ydk::is_set(write_queue_calls_count.yfilter)
	|| ydk::is_set(write_queue_messages_count.yfilter)
	|| ydk::is_set(write_queue_time.yfilter)
	|| ydk::is_set(write_subgroup_calls_count.yfilter)
	|| ydk::is_set(write_subgroup_messages_count.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::PerformanceStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "performance-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::PerformanceStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_collision.is_set || is_set(active_collision.yfilter)) leaf_name_data.push_back(active_collision.get_name_leafdata());
    if (actives.is_set || is_set(actives.yfilter)) leaf_name_data.push_back(actives.get_name_leafdata());
    if (control_to_read_thread_trigger.is_set || is_set(control_to_read_thread_trigger.yfilter)) leaf_name_data.push_back(control_to_read_thread_trigger.get_name_leafdata());
    if (control_to_write_thread_trigger.is_set || is_set(control_to_write_thread_trigger.yfilter)) leaf_name_data.push_back(control_to_write_thread_trigger.get_name_leafdata());
    if (data_bytes_read.is_set || is_set(data_bytes_read.yfilter)) leaf_name_data.push_back(data_bytes_read.get_name_leafdata());
    if (data_bytes_written.is_set || is_set(data_bytes_written.yfilter)) leaf_name_data.push_back(data_bytes_written.get_name_leafdata());
    if (failed_post_actives.is_set || is_set(failed_post_actives.yfilter)) leaf_name_data.push_back(failed_post_actives.get_name_leafdata());
    if (high_throttled_read.is_set || is_set(high_throttled_read.yfilter)) leaf_name_data.push_back(high_throttled_read.get_name_leafdata());
    if (inbound_update_messages.is_set || is_set(inbound_update_messages.yfilter)) leaf_name_data.push_back(inbound_update_messages.get_name_leafdata());
    if (inbound_update_messages_time.is_set || is_set(inbound_update_messages_time.yfilter)) leaf_name_data.push_back(inbound_update_messages_time.get_name_leafdata());
    if (io_read_time.is_set || is_set(io_read_time.yfilter)) leaf_name_data.push_back(io_read_time.get_name_leafdata());
    if (io_write_time.is_set || is_set(io_write_time.yfilter)) leaf_name_data.push_back(io_write_time.get_name_leafdata());
    if (last_nsr_scoped_sync.is_set || is_set(last_nsr_scoped_sync.yfilter)) leaf_name_data.push_back(last_nsr_scoped_sync.get_name_leafdata());
    if (last_sent_seq_no.is_set || is_set(last_sent_seq_no.yfilter)) leaf_name_data.push_back(last_sent_seq_no.get_name_leafdata());
    if (low_throttled_read.is_set || is_set(low_throttled_read.yfilter)) leaf_name_data.push_back(low_throttled_read.get_name_leafdata());
    if (maximum_read_size.is_set || is_set(maximum_read_size.yfilter)) leaf_name_data.push_back(maximum_read_size.get_name_leafdata());
    if (nbr_fd.is_set || is_set(nbr_fd.yfilter)) leaf_name_data.push_back(nbr_fd.get_name_leafdata());
    if (nbr_flags.is_set || is_set(nbr_flags.yfilter)) leaf_name_data.push_back(nbr_flags.get_name_leafdata());
    if (network_status.is_set || is_set(network_status.yfilter)) leaf_name_data.push_back(network_status.get_name_leafdata());
    if (nsr_oper_down_count.is_set || is_set(nsr_oper_down_count.yfilter)) leaf_name_data.push_back(nsr_oper_down_count.get_name_leafdata());
    if (passive_collision.is_set || is_set(passive_collision.yfilter)) leaf_name_data.push_back(passive_collision.get_name_leafdata());
    if (passives.is_set || is_set(passives.yfilter)) leaf_name_data.push_back(passives.get_name_leafdata());
    if (read_calls_count.is_set || is_set(read_calls_count.yfilter)) leaf_name_data.push_back(read_calls_count.get_name_leafdata());
    if (read_messages_count.is_set || is_set(read_messages_count.yfilter)) leaf_name_data.push_back(read_messages_count.get_name_leafdata());
    if (read_throttles.is_set || is_set(read_throttles.yfilter)) leaf_name_data.push_back(read_throttles.get_name_leafdata());
    if (rejected_passives.is_set || is_set(rejected_passives.yfilter)) leaf_name_data.push_back(rejected_passives.get_name_leafdata());
    if (reset_flags.is_set || is_set(reset_flags.yfilter)) leaf_name_data.push_back(reset_flags.get_name_leafdata());
    if (reset_retries.is_set || is_set(reset_retries.yfilter)) leaf_name_data.push_back(reset_retries.get_name_leafdata());
    if (subgroup_list_time.is_set || is_set(subgroup_list_time.yfilter)) leaf_name_data.push_back(subgroup_list_time.get_name_leafdata());
    if (sync_flags.is_set || is_set(sync_flags.yfilter)) leaf_name_data.push_back(sync_flags.get_name_leafdata());
    if (time_since_last_throttled_read.is_set || is_set(time_since_last_throttled_read.yfilter)) leaf_name_data.push_back(time_since_last_throttled_read.get_name_leafdata());
    if (write_calls_count.is_set || is_set(write_calls_count.yfilter)) leaf_name_data.push_back(write_calls_count.get_name_leafdata());
    if (write_queue_calls_count.is_set || is_set(write_queue_calls_count.yfilter)) leaf_name_data.push_back(write_queue_calls_count.get_name_leafdata());
    if (write_queue_messages_count.is_set || is_set(write_queue_messages_count.yfilter)) leaf_name_data.push_back(write_queue_messages_count.get_name_leafdata());
    if (write_queue_time.is_set || is_set(write_queue_time.yfilter)) leaf_name_data.push_back(write_queue_time.get_name_leafdata());
    if (write_subgroup_calls_count.is_set || is_set(write_subgroup_calls_count.yfilter)) leaf_name_data.push_back(write_subgroup_calls_count.get_name_leafdata());
    if (write_subgroup_messages_count.is_set || is_set(write_subgroup_messages_count.yfilter)) leaf_name_data.push_back(write_subgroup_messages_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::PerformanceStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::PerformanceStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::PerformanceStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-collision")
    {
        active_collision = value;
        active_collision.value_namespace = name_space;
        active_collision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actives")
    {
        actives = value;
        actives.value_namespace = name_space;
        actives.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-to-read-thread-trigger")
    {
        control_to_read_thread_trigger = value;
        control_to_read_thread_trigger.value_namespace = name_space;
        control_to_read_thread_trigger.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-to-write-thread-trigger")
    {
        control_to_write_thread_trigger = value;
        control_to_write_thread_trigger.value_namespace = name_space;
        control_to_write_thread_trigger.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "failed-post-actives")
    {
        failed_post_actives = value;
        failed_post_actives.value_namespace = name_space;
        failed_post_actives.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high-throttled-read")
    {
        high_throttled_read = value;
        high_throttled_read.value_namespace = name_space;
        high_throttled_read.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "last-nsr-scoped-sync")
    {
        last_nsr_scoped_sync = value;
        last_nsr_scoped_sync.value_namespace = name_space;
        last_nsr_scoped_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-sent-seq-no")
    {
        last_sent_seq_no = value;
        last_sent_seq_no.value_namespace = name_space;
        last_sent_seq_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low-throttled-read")
    {
        low_throttled_read = value;
        low_throttled_read.value_namespace = name_space;
        low_throttled_read.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-read-size")
    {
        maximum_read_size = value;
        maximum_read_size.value_namespace = name_space;
        maximum_read_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbr-fd")
    {
        nbr_fd = value;
        nbr_fd.value_namespace = name_space;
        nbr_fd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbr-flags")
    {
        nbr_flags = value;
        nbr_flags.value_namespace = name_space;
        nbr_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-status")
    {
        network_status = value;
        network_status.value_namespace = name_space;
        network_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-oper-down-count")
    {
        nsr_oper_down_count = value;
        nsr_oper_down_count.value_namespace = name_space;
        nsr_oper_down_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive-collision")
    {
        passive_collision = value;
        passive_collision.value_namespace = name_space;
        passive_collision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passives")
    {
        passives = value;
        passives.value_namespace = name_space;
        passives.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "read-throttles")
    {
        read_throttles = value;
        read_throttles.value_namespace = name_space;
        read_throttles.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rejected-passives")
    {
        rejected_passives = value;
        rejected_passives.value_namespace = name_space;
        rejected_passives.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reset-flags")
    {
        reset_flags = value;
        reset_flags.value_namespace = name_space;
        reset_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reset-retries")
    {
        reset_retries = value;
        reset_retries.value_namespace = name_space;
        reset_retries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subgroup-list-time")
    {
        subgroup_list_time = value;
        subgroup_list_time.value_namespace = name_space;
        subgroup_list_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-flags")
    {
        sync_flags = value;
        sync_flags.value_namespace = name_space;
        sync_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-last-throttled-read")
    {
        time_since_last_throttled_read = value;
        time_since_last_throttled_read.value_namespace = name_space;
        time_since_last_throttled_read.value_namespace_prefix = name_space_prefix;
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::PerformanceStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-collision")
    {
        active_collision.yfilter = yfilter;
    }
    if(value_path == "actives")
    {
        actives.yfilter = yfilter;
    }
    if(value_path == "control-to-read-thread-trigger")
    {
        control_to_read_thread_trigger.yfilter = yfilter;
    }
    if(value_path == "control-to-write-thread-trigger")
    {
        control_to_write_thread_trigger.yfilter = yfilter;
    }
    if(value_path == "data-bytes-read")
    {
        data_bytes_read.yfilter = yfilter;
    }
    if(value_path == "data-bytes-written")
    {
        data_bytes_written.yfilter = yfilter;
    }
    if(value_path == "failed-post-actives")
    {
        failed_post_actives.yfilter = yfilter;
    }
    if(value_path == "high-throttled-read")
    {
        high_throttled_read.yfilter = yfilter;
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
    if(value_path == "last-nsr-scoped-sync")
    {
        last_nsr_scoped_sync.yfilter = yfilter;
    }
    if(value_path == "last-sent-seq-no")
    {
        last_sent_seq_no.yfilter = yfilter;
    }
    if(value_path == "low-throttled-read")
    {
        low_throttled_read.yfilter = yfilter;
    }
    if(value_path == "maximum-read-size")
    {
        maximum_read_size.yfilter = yfilter;
    }
    if(value_path == "nbr-fd")
    {
        nbr_fd.yfilter = yfilter;
    }
    if(value_path == "nbr-flags")
    {
        nbr_flags.yfilter = yfilter;
    }
    if(value_path == "network-status")
    {
        network_status.yfilter = yfilter;
    }
    if(value_path == "nsr-oper-down-count")
    {
        nsr_oper_down_count.yfilter = yfilter;
    }
    if(value_path == "passive-collision")
    {
        passive_collision.yfilter = yfilter;
    }
    if(value_path == "passives")
    {
        passives.yfilter = yfilter;
    }
    if(value_path == "read-calls-count")
    {
        read_calls_count.yfilter = yfilter;
    }
    if(value_path == "read-messages-count")
    {
        read_messages_count.yfilter = yfilter;
    }
    if(value_path == "read-throttles")
    {
        read_throttles.yfilter = yfilter;
    }
    if(value_path == "rejected-passives")
    {
        rejected_passives.yfilter = yfilter;
    }
    if(value_path == "reset-flags")
    {
        reset_flags.yfilter = yfilter;
    }
    if(value_path == "reset-retries")
    {
        reset_retries.yfilter = yfilter;
    }
    if(value_path == "subgroup-list-time")
    {
        subgroup_list_time.yfilter = yfilter;
    }
    if(value_path == "sync-flags")
    {
        sync_flags.yfilter = yfilter;
    }
    if(value_path == "time-since-last-throttled-read")
    {
        time_since_last_throttled_read.yfilter = yfilter;
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::PerformanceStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-collision" || name == "actives" || name == "control-to-read-thread-trigger" || name == "control-to-write-thread-trigger" || name == "data-bytes-read" || name == "data-bytes-written" || name == "failed-post-actives" || name == "high-throttled-read" || name == "inbound-update-messages" || name == "inbound-update-messages-time" || name == "io-read-time" || name == "io-write-time" || name == "last-nsr-scoped-sync" || name == "last-sent-seq-no" || name == "low-throttled-read" || name == "maximum-read-size" || name == "nbr-fd" || name == "nbr-flags" || name == "network-status" || name == "nsr-oper-down-count" || name == "passive-collision" || name == "passives" || name == "read-calls-count" || name == "read-messages-count" || name == "read-throttles" || name == "rejected-passives" || name == "reset-flags" || name == "reset-retries" || name == "subgroup-list-time" || name == "sync-flags" || name == "time-since-last-throttled-read" || name == "write-calls-count" || name == "write-queue-calls-count" || name == "write-queue-messages-count" || name == "write-queue-time" || name == "write-subgroup-calls-count" || name == "write-subgroup-messages-count")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ReceivedNotificationInfo::ReceivedNotificationInfo()
    :
    notification_error_code{YType::uint8, "notification-error-code"},
    notification_error_subcode{YType::uint8, "notification-error-subcode"},
    time_since_last_notification{YType::uint32, "time-since-last-notification"}
{

    yang_name = "received-notification-info"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ReceivedNotificationInfo::~ReceivedNotificationInfo()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ReceivedNotificationInfo::has_data() const
{
    for (std::size_t index=0; index<last_notification_data.size(); index++)
    {
        if(last_notification_data[index]->has_data())
            return true;
    }
    return notification_error_code.is_set
	|| notification_error_subcode.is_set
	|| time_since_last_notification.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ReceivedNotificationInfo::has_operation() const
{
    for (std::size_t index=0; index<last_notification_data.size(); index++)
    {
        if(last_notification_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(notification_error_code.yfilter)
	|| ydk::is_set(notification_error_subcode.yfilter)
	|| ydk::is_set(time_since_last_notification.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ReceivedNotificationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-notification-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ReceivedNotificationInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (notification_error_code.is_set || is_set(notification_error_code.yfilter)) leaf_name_data.push_back(notification_error_code.get_name_leafdata());
    if (notification_error_subcode.is_set || is_set(notification_error_subcode.yfilter)) leaf_name_data.push_back(notification_error_subcode.get_name_leafdata());
    if (time_since_last_notification.is_set || is_set(time_since_last_notification.yfilter)) leaf_name_data.push_back(time_since_last_notification.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ReceivedNotificationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-notification-data")
    {
        for(auto const & c : last_notification_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ReceivedNotificationInfo::LastNotificationData>();
        c->parent = this;
        last_notification_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ReceivedNotificationInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : last_notification_data)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ReceivedNotificationInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "notification-error-code")
    {
        notification_error_code = value;
        notification_error_code.value_namespace = name_space;
        notification_error_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notification-error-subcode")
    {
        notification_error_subcode = value;
        notification_error_subcode.value_namespace = name_space;
        notification_error_subcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-last-notification")
    {
        time_since_last_notification = value;
        time_since_last_notification.value_namespace = name_space;
        time_since_last_notification.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ReceivedNotificationInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "notification-error-code")
    {
        notification_error_code.yfilter = yfilter;
    }
    if(value_path == "notification-error-subcode")
    {
        notification_error_subcode.yfilter = yfilter;
    }
    if(value_path == "time-since-last-notification")
    {
        time_since_last_notification.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ReceivedNotificationInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-notification-data" || name == "notification-error-code" || name == "notification-error-subcode" || name == "time-since-last-notification")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ReceivedNotificationInfo::LastNotificationData::LastNotificationData()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "last-notification-data"; yang_parent_name = "received-notification-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ReceivedNotificationInfo::LastNotificationData::~LastNotificationData()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ReceivedNotificationInfo::LastNotificationData::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ReceivedNotificationInfo::LastNotificationData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ReceivedNotificationInfo::LastNotificationData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-notification-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ReceivedNotificationInfo::LastNotificationData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ReceivedNotificationInfo::LastNotificationData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ReceivedNotificationInfo::LastNotificationData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ReceivedNotificationInfo::LastNotificationData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ReceivedNotificationInfo::LastNotificationData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::ReceivedNotificationInfo::LastNotificationData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::SendNotificationInfo::SendNotificationInfo()
    :
    notification_error_code{YType::uint8, "notification-error-code"},
    notification_error_subcode{YType::uint8, "notification-error-subcode"},
    time_since_last_notification{YType::uint32, "time-since-last-notification"}
{

    yang_name = "send-notification-info"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::SendNotificationInfo::~SendNotificationInfo()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::SendNotificationInfo::has_data() const
{
    for (std::size_t index=0; index<last_notification_data.size(); index++)
    {
        if(last_notification_data[index]->has_data())
            return true;
    }
    return notification_error_code.is_set
	|| notification_error_subcode.is_set
	|| time_since_last_notification.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::SendNotificationInfo::has_operation() const
{
    for (std::size_t index=0; index<last_notification_data.size(); index++)
    {
        if(last_notification_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(notification_error_code.yfilter)
	|| ydk::is_set(notification_error_subcode.yfilter)
	|| ydk::is_set(time_since_last_notification.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::SendNotificationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-notification-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::SendNotificationInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (notification_error_code.is_set || is_set(notification_error_code.yfilter)) leaf_name_data.push_back(notification_error_code.get_name_leafdata());
    if (notification_error_subcode.is_set || is_set(notification_error_subcode.yfilter)) leaf_name_data.push_back(notification_error_subcode.get_name_leafdata());
    if (time_since_last_notification.is_set || is_set(time_since_last_notification.yfilter)) leaf_name_data.push_back(time_since_last_notification.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::SendNotificationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-notification-data")
    {
        for(auto const & c : last_notification_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::SendNotificationInfo::LastNotificationData>();
        c->parent = this;
        last_notification_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::SendNotificationInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : last_notification_data)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::SendNotificationInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "notification-error-code")
    {
        notification_error_code = value;
        notification_error_code.value_namespace = name_space;
        notification_error_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notification-error-subcode")
    {
        notification_error_subcode = value;
        notification_error_subcode.value_namespace = name_space;
        notification_error_subcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-last-notification")
    {
        time_since_last_notification = value;
        time_since_last_notification.value_namespace = name_space;
        time_since_last_notification.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::SendNotificationInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "notification-error-code")
    {
        notification_error_code.yfilter = yfilter;
    }
    if(value_path == "notification-error-subcode")
    {
        notification_error_subcode.yfilter = yfilter;
    }
    if(value_path == "time-since-last-notification")
    {
        time_since_last_notification.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::SendNotificationInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-notification-data" || name == "notification-error-code" || name == "notification-error-subcode" || name == "time-since-last-notification")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::SendNotificationInfo::LastNotificationData::LastNotificationData()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "last-notification-data"; yang_parent_name = "send-notification-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::SendNotificationInfo::LastNotificationData::~LastNotificationData()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::SendNotificationInfo::LastNotificationData::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::SendNotificationInfo::LastNotificationData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::SendNotificationInfo::LastNotificationData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-notification-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::SendNotificationInfo::LastNotificationData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::SendNotificationInfo::LastNotificationData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::SendNotificationInfo::LastNotificationData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::SendNotificationInfo::LastNotificationData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::SendNotificationInfo::LastNotificationData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::SendNotificationInfo::LastNotificationData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncDoneTimeSpec::TcpInitSyncDoneTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "tcp-init-sync-done-time-spec"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncDoneTimeSpec::~TcpInitSyncDoneTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncDoneTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncDoneTimeSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncDoneTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-init-sync-done-time-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncDoneTimeSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncDoneTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncDoneTimeSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncDoneTimeSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncDoneTimeSpec::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncDoneTimeSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncPhaseTwoTimeSpec::TcpInitSyncPhaseTwoTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "tcp-init-sync-phase-two-time-spec"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncPhaseTwoTimeSpec::~TcpInitSyncPhaseTwoTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncPhaseTwoTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncPhaseTwoTimeSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncPhaseTwoTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-init-sync-phase-two-time-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncPhaseTwoTimeSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncPhaseTwoTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncPhaseTwoTimeSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncPhaseTwoTimeSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncPhaseTwoTimeSpec::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncPhaseTwoTimeSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncTimeSpec::TcpInitSyncTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "tcp-init-sync-time-spec"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncTimeSpec::~TcpInitSyncTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncTimeSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-init-sync-time-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncTimeSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncTimeSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncTimeSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncTimeSpec::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors::Neighbor::TcpInitSyncTimeSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NextHopVrf::NextHopVrf()
    :
    last_notification_processing_time{YType::uint32, "last-notification-processing-time"},
    last_notificationication_time{YType::uint32, "last-notificationication-time"},
    max_notification_bestpath_changes{YType::uint32, "max-notification-bestpath-changes"},
    max_notification_bestpath_deletes{YType::uint32, "max-notification-bestpath-deletes"},
    max_proc_notification_time{YType::uint32, "max-proc-notification-time"},
    maximum_processing_time{YType::uint32, "maximum-processing-time"},
    total_processing_time{YType::uint32, "total-processing-time"}
{

    yang_name = "next-hop-vrf"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NextHopVrf::~NextHopVrf()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NextHopVrf::has_data() const
{
    return last_notification_processing_time.is_set
	|| last_notificationication_time.is_set
	|| max_notification_bestpath_changes.is_set
	|| max_notification_bestpath_deletes.is_set
	|| max_proc_notification_time.is_set
	|| maximum_processing_time.is_set
	|| total_processing_time.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NextHopVrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_notification_processing_time.yfilter)
	|| ydk::is_set(last_notificationication_time.yfilter)
	|| ydk::is_set(max_notification_bestpath_changes.yfilter)
	|| ydk::is_set(max_notification_bestpath_deletes.yfilter)
	|| ydk::is_set(max_proc_notification_time.yfilter)
	|| ydk::is_set(maximum_processing_time.yfilter)
	|| ydk::is_set(total_processing_time.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NextHopVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NextHopVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_notification_processing_time.is_set || is_set(last_notification_processing_time.yfilter)) leaf_name_data.push_back(last_notification_processing_time.get_name_leafdata());
    if (last_notificationication_time.is_set || is_set(last_notificationication_time.yfilter)) leaf_name_data.push_back(last_notificationication_time.get_name_leafdata());
    if (max_notification_bestpath_changes.is_set || is_set(max_notification_bestpath_changes.yfilter)) leaf_name_data.push_back(max_notification_bestpath_changes.get_name_leafdata());
    if (max_notification_bestpath_deletes.is_set || is_set(max_notification_bestpath_deletes.yfilter)) leaf_name_data.push_back(max_notification_bestpath_deletes.get_name_leafdata());
    if (max_proc_notification_time.is_set || is_set(max_proc_notification_time.yfilter)) leaf_name_data.push_back(max_proc_notification_time.get_name_leafdata());
    if (maximum_processing_time.is_set || is_set(maximum_processing_time.yfilter)) leaf_name_data.push_back(maximum_processing_time.get_name_leafdata());
    if (total_processing_time.is_set || is_set(total_processing_time.yfilter)) leaf_name_data.push_back(total_processing_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NextHopVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NextHopVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NextHopVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-notification-processing-time")
    {
        last_notification_processing_time = value;
        last_notification_processing_time.value_namespace = name_space;
        last_notification_processing_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-notificationication-time")
    {
        last_notificationication_time = value;
        last_notificationication_time.value_namespace = name_space;
        last_notificationication_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-notification-bestpath-changes")
    {
        max_notification_bestpath_changes = value;
        max_notification_bestpath_changes.value_namespace = name_space;
        max_notification_bestpath_changes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-notification-bestpath-deletes")
    {
        max_notification_bestpath_deletes = value;
        max_notification_bestpath_deletes.value_namespace = name_space;
        max_notification_bestpath_deletes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-proc-notification-time")
    {
        max_proc_notification_time = value;
        max_proc_notification_time.value_namespace = name_space;
        max_proc_notification_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-processing-time")
    {
        maximum_processing_time = value;
        maximum_processing_time.value_namespace = name_space;
        maximum_processing_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-processing-time")
    {
        total_processing_time = value;
        total_processing_time.value_namespace = name_space;
        total_processing_time.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NextHopVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-notification-processing-time")
    {
        last_notification_processing_time.yfilter = yfilter;
    }
    if(value_path == "last-notificationication-time")
    {
        last_notificationication_time.yfilter = yfilter;
    }
    if(value_path == "max-notification-bestpath-changes")
    {
        max_notification_bestpath_changes.yfilter = yfilter;
    }
    if(value_path == "max-notification-bestpath-deletes")
    {
        max_notification_bestpath_deletes.yfilter = yfilter;
    }
    if(value_path == "max-proc-notification-time")
    {
        max_proc_notification_time.yfilter = yfilter;
    }
    if(value_path == "maximum-processing-time")
    {
        maximum_processing_time.yfilter = yfilter;
    }
    if(value_path == "total-processing-time")
    {
        total_processing_time.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NextHopVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-notification-processing-time" || name == "last-notificationication-time" || name == "max-notification-bestpath-changes" || name == "max-notification-bestpath-deletes" || name == "max-proc-notification-time" || name == "maximum-processing-time" || name == "total-processing-time")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postits()
{

    yang_name = "postits"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::~Postits()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::has_data() const
{
    for (std::size_t index=0; index<postit.size(); index++)
    {
        if(postit[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::has_operation() const
{
    for (std::size_t index=0; index<postit.size(); index++)
    {
        if(postit[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "postits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "postit")
    {
        for(auto const & c : postit)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit>();
        c->parent = this;
        postit.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : postit)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "postit")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::Postit()
    :
    neighbor_address{YType::str, "neighbor-address"},
    connect_state{YType::uint32, "connect-state"},
    nsr_state{YType::enumeration, "nsr-state"},
    start_time{YType::uint32, "start-time"},
    vrf_name{YType::str, "vrf-name"}
    	,
    neighbors_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress>())
{
    neighbors_address->parent = this;

    yang_name = "postit"; yang_parent_name = "postits"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::~Postit()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::has_data() const
{
    for (std::size_t index=0; index<neighbor_af.size(); index++)
    {
        if(neighbor_af[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<postit_info.size(); index++)
    {
        if(postit_info[index]->has_data())
            return true;
    }
    return neighbor_address.is_set
	|| connect_state.is_set
	|| nsr_state.is_set
	|| start_time.is_set
	|| vrf_name.is_set
	|| (neighbors_address !=  nullptr && neighbors_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::has_operation() const
{
    for (std::size_t index=0; index<neighbor_af.size(); index++)
    {
        if(neighbor_af[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<postit_info.size(); index++)
    {
        if(postit_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(connect_state.yfilter)
	|| ydk::is_set(nsr_state.yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (neighbors_address !=  nullptr && neighbors_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "postit" <<"[neighbor-address='" <<neighbor_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (connect_state.is_set || is_set(connect_state.yfilter)) leaf_name_data.push_back(connect_state.get_name_leafdata());
    if (nsr_state.is_set || is_set(nsr_state.yfilter)) leaf_name_data.push_back(nsr_state.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-af")
    {
        for(auto const & c : neighbor_af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborAf>();
        c->parent = this;
        neighbor_af.push_back(c);
        return c;
    }

    if(child_yang_name == "neighbors-address")
    {
        if(neighbors_address == nullptr)
        {
            neighbors_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress>();
        }
        return neighbors_address;
    }

    if(child_yang_name == "postit-info")
    {
        for(auto const & c : postit_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo>();
        c->parent = this;
        postit_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor_af)
    {
        children[c->get_segment_path()] = c;
    }

    if(neighbors_address != nullptr)
    {
        children["neighbors-address"] = neighbors_address;
    }

    for (auto const & c : postit_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connect-state")
    {
        connect_state = value;
        connect_state.value_namespace = name_space;
        connect_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-state")
    {
        nsr_state = value;
        nsr_state.value_namespace = name_space;
        nsr_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "connect-state")
    {
        connect_state.yfilter = yfilter;
    }
    if(value_path == "nsr-state")
    {
        nsr_state.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-af" || name == "neighbors-address" || name == "postit-info" || name == "neighbor-address" || name == "connect-state" || name == "nsr-state" || name == "start-time" || name == "vrf-name")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborAf::NeighborAf()
    :
    entry{YType::boolean, "entry"}
{

    yang_name = "neighbor-af"; yang_parent_name = "postit"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborAf::~NeighborAf()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborAf::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborAf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborAf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-af";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborAf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborAf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborAf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborAf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborAf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborAf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::NeighborsAddress()
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
    ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnMspwAddress>())
	,l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnVplsAddress>())
{
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;
    l2vpn_mspw_address->parent = this;
    l2vpn_vpls_address->parent = this;

    yang_name = "neighbors-address"; yang_parent_name = "postit"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::~NeighborsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::get_children() const
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "l2vpn-mspw-address" || name == "l2vpn-vpls-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-flowspec-address" || name == "ipv4-label-address" || name == "ipv4-mcast-address" || name == "ipv4-mdt-address" || name == "ipv4-tunnel-address" || name == "ipv4mvpn-address" || name == "ipv4vpn-address" || name == "ipv4vpn-flowspec-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-flowspec-address" || name == "ipv6-label-address" || name == "ipv6-mcast-address" || name == "ipv6mvpn-address" || name == "ipv6vpn-address" || name == "ipv6vpn-flowspec-address" || name == "ipv6vpn-mcast-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "rt-constraint-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbors-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbors-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbors-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbors-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitInfo()
    :
    peer_id{YType::uint32, "peer-id"},
    postit_af_name{YType::enumeration, "postit-af-name"},
    postit_direction{YType::uint8, "postit-direction"},
    postit_flags{YType::uint8, "postit-flags"},
    postit_id{YType::uint32, "postit-id"},
    postit_policy{YType::str, "postit-policy"},
    postit_reset{YType::enumeration, "postit-reset"},
    postit_subtype{YType::uint32, "postit-subtype"},
    postit_ts{YType::uint64, "postit-ts"},
    postit_type{YType::uint32, "postit-type"}
    	,
    postit_notification(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification>())
{
    postit_notification->parent = this;

    yang_name = "postit-info"; yang_parent_name = "postit"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::~PostitInfo()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::has_data() const
{
    return peer_id.is_set
	|| postit_af_name.is_set
	|| postit_direction.is_set
	|| postit_flags.is_set
	|| postit_id.is_set
	|| postit_policy.is_set
	|| postit_reset.is_set
	|| postit_subtype.is_set
	|| postit_ts.is_set
	|| postit_type.is_set
	|| (postit_notification !=  nullptr && postit_notification->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_id.yfilter)
	|| ydk::is_set(postit_af_name.yfilter)
	|| ydk::is_set(postit_direction.yfilter)
	|| ydk::is_set(postit_flags.yfilter)
	|| ydk::is_set(postit_id.yfilter)
	|| ydk::is_set(postit_policy.yfilter)
	|| ydk::is_set(postit_reset.yfilter)
	|| ydk::is_set(postit_subtype.yfilter)
	|| ydk::is_set(postit_ts.yfilter)
	|| ydk::is_set(postit_type.yfilter)
	|| (postit_notification !=  nullptr && postit_notification->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "postit-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_id.is_set || is_set(peer_id.yfilter)) leaf_name_data.push_back(peer_id.get_name_leafdata());
    if (postit_af_name.is_set || is_set(postit_af_name.yfilter)) leaf_name_data.push_back(postit_af_name.get_name_leafdata());
    if (postit_direction.is_set || is_set(postit_direction.yfilter)) leaf_name_data.push_back(postit_direction.get_name_leafdata());
    if (postit_flags.is_set || is_set(postit_flags.yfilter)) leaf_name_data.push_back(postit_flags.get_name_leafdata());
    if (postit_id.is_set || is_set(postit_id.yfilter)) leaf_name_data.push_back(postit_id.get_name_leafdata());
    if (postit_policy.is_set || is_set(postit_policy.yfilter)) leaf_name_data.push_back(postit_policy.get_name_leafdata());
    if (postit_reset.is_set || is_set(postit_reset.yfilter)) leaf_name_data.push_back(postit_reset.get_name_leafdata());
    if (postit_subtype.is_set || is_set(postit_subtype.yfilter)) leaf_name_data.push_back(postit_subtype.get_name_leafdata());
    if (postit_ts.is_set || is_set(postit_ts.yfilter)) leaf_name_data.push_back(postit_ts.get_name_leafdata());
    if (postit_type.is_set || is_set(postit_type.yfilter)) leaf_name_data.push_back(postit_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "postit-notification")
    {
        if(postit_notification == nullptr)
        {
            postit_notification = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification>();
        }
        return postit_notification;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(postit_notification != nullptr)
    {
        children["postit-notification"] = postit_notification;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-id")
    {
        peer_id = value;
        peer_id.value_namespace = name_space;
        peer_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "postit-af-name")
    {
        postit_af_name = value;
        postit_af_name.value_namespace = name_space;
        postit_af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "postit-direction")
    {
        postit_direction = value;
        postit_direction.value_namespace = name_space;
        postit_direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "postit-flags")
    {
        postit_flags = value;
        postit_flags.value_namespace = name_space;
        postit_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "postit-id")
    {
        postit_id = value;
        postit_id.value_namespace = name_space;
        postit_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "postit-policy")
    {
        postit_policy = value;
        postit_policy.value_namespace = name_space;
        postit_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "postit-reset")
    {
        postit_reset = value;
        postit_reset.value_namespace = name_space;
        postit_reset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "postit-subtype")
    {
        postit_subtype = value;
        postit_subtype.value_namespace = name_space;
        postit_subtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "postit-ts")
    {
        postit_ts = value;
        postit_ts.value_namespace = name_space;
        postit_ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "postit-type")
    {
        postit_type = value;
        postit_type.value_namespace = name_space;
        postit_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-id")
    {
        peer_id.yfilter = yfilter;
    }
    if(value_path == "postit-af-name")
    {
        postit_af_name.yfilter = yfilter;
    }
    if(value_path == "postit-direction")
    {
        postit_direction.yfilter = yfilter;
    }
    if(value_path == "postit-flags")
    {
        postit_flags.yfilter = yfilter;
    }
    if(value_path == "postit-id")
    {
        postit_id.yfilter = yfilter;
    }
    if(value_path == "postit-policy")
    {
        postit_policy.yfilter = yfilter;
    }
    if(value_path == "postit-reset")
    {
        postit_reset.yfilter = yfilter;
    }
    if(value_path == "postit-subtype")
    {
        postit_subtype.yfilter = yfilter;
    }
    if(value_path == "postit-ts")
    {
        postit_ts.yfilter = yfilter;
    }
    if(value_path == "postit-type")
    {
        postit_type.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "postit-notification" || name == "peer-id" || name == "postit-af-name" || name == "postit-direction" || name == "postit-flags" || name == "postit-id" || name == "postit-policy" || name == "postit-reset" || name == "postit-subtype" || name == "postit-ts" || name == "postit-type")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::PostitNotification()
    :
    notification_error_code{YType::uint8, "notification-error-code"},
    notification_error_subcode{YType::uint8, "notification-error-subcode"},
    time_since_last_notification{YType::uint32, "time-since-last-notification"}
{

    yang_name = "postit-notification"; yang_parent_name = "postit-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::~PostitNotification()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::has_data() const
{
    for (std::size_t index=0; index<last_notification_data.size(); index++)
    {
        if(last_notification_data[index]->has_data())
            return true;
    }
    return notification_error_code.is_set
	|| notification_error_subcode.is_set
	|| time_since_last_notification.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::has_operation() const
{
    for (std::size_t index=0; index<last_notification_data.size(); index++)
    {
        if(last_notification_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(notification_error_code.yfilter)
	|| ydk::is_set(notification_error_subcode.yfilter)
	|| ydk::is_set(time_since_last_notification.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "postit-notification";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (notification_error_code.is_set || is_set(notification_error_code.yfilter)) leaf_name_data.push_back(notification_error_code.get_name_leafdata());
    if (notification_error_subcode.is_set || is_set(notification_error_subcode.yfilter)) leaf_name_data.push_back(notification_error_subcode.get_name_leafdata());
    if (time_since_last_notification.is_set || is_set(time_since_last_notification.yfilter)) leaf_name_data.push_back(time_since_last_notification.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-notification-data")
    {
        for(auto const & c : last_notification_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData>();
        c->parent = this;
        last_notification_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : last_notification_data)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "notification-error-code")
    {
        notification_error_code = value;
        notification_error_code.value_namespace = name_space;
        notification_error_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notification-error-subcode")
    {
        notification_error_subcode = value;
        notification_error_subcode.value_namespace = name_space;
        notification_error_subcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-last-notification")
    {
        time_since_last_notification = value;
        time_since_last_notification.value_namespace = name_space;
        time_since_last_notification.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "notification-error-code")
    {
        notification_error_code.yfilter = yfilter;
    }
    if(value_path == "notification-error-subcode")
    {
        notification_error_subcode.yfilter = yfilter;
    }
    if(value_path == "time-since-last-notification")
    {
        time_since_last_notification.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-notification-data" || name == "notification-error-code" || name == "notification-error-subcode" || name == "time-since-last-notification")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData::LastNotificationData()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "last-notification-data"; yang_parent_name = "postit-notification"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData::~LastNotificationData()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-notification-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::ProcessInfo()
    :
    process_instance{YType::uint8, "process-instance"},
    vrf_name{YType::str, "vrf-name"},
    vrf_totals{YType::boolean, "vrf-totals"}
    	,
    global(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global>())
	,performance_statistics(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics>())
	,vrf(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Vrf>())
{
    global->parent = this;
    performance_statistics->parent = this;
    vrf->parent = this;

    yang_name = "process-info"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::~ProcessInfo()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::has_data() const
{
    return process_instance.is_set
	|| vrf_name.is_set
	|| vrf_totals.is_set
	|| (global !=  nullptr && global->has_data())
	|| (performance_statistics !=  nullptr && performance_statistics->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(process_instance.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(vrf_totals.yfilter)
	|| (global !=  nullptr && global->has_operation())
	|| (performance_statistics !=  nullptr && performance_statistics->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_instance.is_set || is_set(process_instance.yfilter)) leaf_name_data.push_back(process_instance.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (vrf_totals.is_set || is_set(vrf_totals.yfilter)) leaf_name_data.push_back(vrf_totals.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global>();
        }
        return global;
    }

    if(child_yang_name == "performance-statistics")
    {
        if(performance_statistics == nullptr)
        {
            performance_statistics = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics>();
        }
        return performance_statistics;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(global != nullptr)
    {
        children["global"] = global;
    }

    if(performance_statistics != nullptr)
    {
        children["performance-statistics"] = performance_statistics;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process-instance")
    {
        process_instance = value;
        process_instance.value_namespace = name_space;
        process_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-totals")
    {
        vrf_totals = value;
        vrf_totals.value_namespace = name_space;
        vrf_totals.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process-instance")
    {
        process_instance.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "vrf-totals")
    {
        vrf_totals.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global" || name == "performance-statistics" || name == "vrf" || name == "process-instance" || name == "vrf-name" || name == "vrf-totals")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::Global()
    :
    as_path_entries_memory{YType::uint32, "as-path-entries-memory"},
    as_path_entry_count{YType::uint32, "as-path-entry-count"},
    attr_set_entry_count{YType::uint32, "attr-set-entry-count"},
    attr_set_memory{YType::uint32, "attr-set-memory"},
    community_entry_count{YType::uint32, "community-entry-count"},
    community_memory{YType::uint32, "community-memory"},
    established_neighbors_count_total{YType::uint32, "established-neighbors-count-total"},
    extended_community_entry_count{YType::uint32, "extended-community-entry-count"},
    extended_community_memory{YType::uint32, "extended-community-memory"},
    large_community_entry_count{YType::uint32, "large-community-entry-count"},
    large_community_memory{YType::uint32, "large-community-memory"},
    lindex_entry_count{YType::uint32, "lindex-entry-count"},
    lindex_memory{YType::uint32, "lindex-memory"},
    local_as{YType::uint32, "local-as"},
    lsattr_entry_count{YType::uint32, "lsattr-entry-count"},
    lsattr_memory{YType::uint32, "lsattr-memory"},
    neighbors_count_total{YType::uint32, "neighbors-count-total"},
    nexthop_count{YType::uint32, "nexthop-count"},
    nexthop_memory{YType::uint32, "nexthop-memory"},
    path_attribute_memory{YType::uint32, "path-attribute-memory"},
    path_attributes_entry_count{YType::uint32, "path-attributes-entry-count"},
    pe_distinguisher_label_entry_count{YType::uint32, "pe-distinguisher-label-entry-count"},
    pe_distinguisher_label_memory{YType::uint32, "pe-distinguisher-label-memory"},
    ppmp_entry_count{YType::uint32, "ppmp-entry-count"},
    ppmp_memory{YType::uint32, "ppmp-memory"},
    process_instance_node{YType::str, "process-instance-node"},
    pta_entry_count{YType::uint32, "pta-entry-count"},
    pta_memory{YType::uint32, "pta-memory"},
    restart_count{YType::uint32, "restart-count"},
    ribrnh_entry_count{YType::uint32, "ribrnh-entry-count"},
    ribrnh_memory{YType::uint32, "ribrnh-memory"},
    route_reflector_memory{YType::uint32, "route-reflector-memory"},
    route_reflectors{YType::uint32, "route-reflectors"},
    sn_num_non_dflt_vrf_nbrs{YType::uint32, "sn-num-non-dflt-vrf-nbrs"},
    sn_num_non_dflt_vrf_nbrs_estab{YType::uint32, "sn-num-non-dflt-vrf-nbrs-estab"},
    total_vrf_count{YType::uint32, "total-vrf-count"},
    tunnel_encap_entry_count{YType::uint32, "tunnel-encap-entry-count"},
    tunnel_encap_memory{YType::uint32, "tunnel-encap-memory"}
{

    yang_name = "global"; yang_parent_name = "process-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::~Global()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::has_data() const
{
    for (std::size_t index=0; index<bmp_pool_alloc_count.size(); index++)
    {
        if(bmp_pool_alloc_count[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<bmp_pool_free_count.size(); index++)
    {
        if(bmp_pool_free_count[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<bmp_pool_size.size(); index++)
    {
        if(bmp_pool_size[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<msg_log_pool_alloc_count.size(); index++)
    {
        if(msg_log_pool_alloc_count[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<msg_log_pool_free_count.size(); index++)
    {
        if(msg_log_pool_free_count[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<msg_log_pool_size.size(); index++)
    {
        if(msg_log_pool_size[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pool_alloc_count.size(); index++)
    {
        if(pool_alloc_count[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pool_free_count.size(); index++)
    {
        if(pool_free_count[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pool_size.size(); index++)
    {
        if(pool_size[index]->has_data())
            return true;
    }
    return as_path_entries_memory.is_set
	|| as_path_entry_count.is_set
	|| attr_set_entry_count.is_set
	|| attr_set_memory.is_set
	|| community_entry_count.is_set
	|| community_memory.is_set
	|| established_neighbors_count_total.is_set
	|| extended_community_entry_count.is_set
	|| extended_community_memory.is_set
	|| large_community_entry_count.is_set
	|| large_community_memory.is_set
	|| lindex_entry_count.is_set
	|| lindex_memory.is_set
	|| local_as.is_set
	|| lsattr_entry_count.is_set
	|| lsattr_memory.is_set
	|| neighbors_count_total.is_set
	|| nexthop_count.is_set
	|| nexthop_memory.is_set
	|| path_attribute_memory.is_set
	|| path_attributes_entry_count.is_set
	|| pe_distinguisher_label_entry_count.is_set
	|| pe_distinguisher_label_memory.is_set
	|| ppmp_entry_count.is_set
	|| ppmp_memory.is_set
	|| process_instance_node.is_set
	|| pta_entry_count.is_set
	|| pta_memory.is_set
	|| restart_count.is_set
	|| ribrnh_entry_count.is_set
	|| ribrnh_memory.is_set
	|| route_reflector_memory.is_set
	|| route_reflectors.is_set
	|| sn_num_non_dflt_vrf_nbrs.is_set
	|| sn_num_non_dflt_vrf_nbrs_estab.is_set
	|| total_vrf_count.is_set
	|| tunnel_encap_entry_count.is_set
	|| tunnel_encap_memory.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::has_operation() const
{
    for (std::size_t index=0; index<bmp_pool_alloc_count.size(); index++)
    {
        if(bmp_pool_alloc_count[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<bmp_pool_free_count.size(); index++)
    {
        if(bmp_pool_free_count[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<bmp_pool_size.size(); index++)
    {
        if(bmp_pool_size[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<msg_log_pool_alloc_count.size(); index++)
    {
        if(msg_log_pool_alloc_count[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<msg_log_pool_free_count.size(); index++)
    {
        if(msg_log_pool_free_count[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<msg_log_pool_size.size(); index++)
    {
        if(msg_log_pool_size[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pool_alloc_count.size(); index++)
    {
        if(pool_alloc_count[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pool_free_count.size(); index++)
    {
        if(pool_free_count[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pool_size.size(); index++)
    {
        if(pool_size[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(as_path_entries_memory.yfilter)
	|| ydk::is_set(as_path_entry_count.yfilter)
	|| ydk::is_set(attr_set_entry_count.yfilter)
	|| ydk::is_set(attr_set_memory.yfilter)
	|| ydk::is_set(community_entry_count.yfilter)
	|| ydk::is_set(community_memory.yfilter)
	|| ydk::is_set(established_neighbors_count_total.yfilter)
	|| ydk::is_set(extended_community_entry_count.yfilter)
	|| ydk::is_set(extended_community_memory.yfilter)
	|| ydk::is_set(large_community_entry_count.yfilter)
	|| ydk::is_set(large_community_memory.yfilter)
	|| ydk::is_set(lindex_entry_count.yfilter)
	|| ydk::is_set(lindex_memory.yfilter)
	|| ydk::is_set(local_as.yfilter)
	|| ydk::is_set(lsattr_entry_count.yfilter)
	|| ydk::is_set(lsattr_memory.yfilter)
	|| ydk::is_set(neighbors_count_total.yfilter)
	|| ydk::is_set(nexthop_count.yfilter)
	|| ydk::is_set(nexthop_memory.yfilter)
	|| ydk::is_set(path_attribute_memory.yfilter)
	|| ydk::is_set(path_attributes_entry_count.yfilter)
	|| ydk::is_set(pe_distinguisher_label_entry_count.yfilter)
	|| ydk::is_set(pe_distinguisher_label_memory.yfilter)
	|| ydk::is_set(ppmp_entry_count.yfilter)
	|| ydk::is_set(ppmp_memory.yfilter)
	|| ydk::is_set(process_instance_node.yfilter)
	|| ydk::is_set(pta_entry_count.yfilter)
	|| ydk::is_set(pta_memory.yfilter)
	|| ydk::is_set(restart_count.yfilter)
	|| ydk::is_set(ribrnh_entry_count.yfilter)
	|| ydk::is_set(ribrnh_memory.yfilter)
	|| ydk::is_set(route_reflector_memory.yfilter)
	|| ydk::is_set(route_reflectors.yfilter)
	|| ydk::is_set(sn_num_non_dflt_vrf_nbrs.yfilter)
	|| ydk::is_set(sn_num_non_dflt_vrf_nbrs_estab.yfilter)
	|| ydk::is_set(total_vrf_count.yfilter)
	|| ydk::is_set(tunnel_encap_entry_count.yfilter)
	|| ydk::is_set(tunnel_encap_memory.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_path_entries_memory.is_set || is_set(as_path_entries_memory.yfilter)) leaf_name_data.push_back(as_path_entries_memory.get_name_leafdata());
    if (as_path_entry_count.is_set || is_set(as_path_entry_count.yfilter)) leaf_name_data.push_back(as_path_entry_count.get_name_leafdata());
    if (attr_set_entry_count.is_set || is_set(attr_set_entry_count.yfilter)) leaf_name_data.push_back(attr_set_entry_count.get_name_leafdata());
    if (attr_set_memory.is_set || is_set(attr_set_memory.yfilter)) leaf_name_data.push_back(attr_set_memory.get_name_leafdata());
    if (community_entry_count.is_set || is_set(community_entry_count.yfilter)) leaf_name_data.push_back(community_entry_count.get_name_leafdata());
    if (community_memory.is_set || is_set(community_memory.yfilter)) leaf_name_data.push_back(community_memory.get_name_leafdata());
    if (established_neighbors_count_total.is_set || is_set(established_neighbors_count_total.yfilter)) leaf_name_data.push_back(established_neighbors_count_total.get_name_leafdata());
    if (extended_community_entry_count.is_set || is_set(extended_community_entry_count.yfilter)) leaf_name_data.push_back(extended_community_entry_count.get_name_leafdata());
    if (extended_community_memory.is_set || is_set(extended_community_memory.yfilter)) leaf_name_data.push_back(extended_community_memory.get_name_leafdata());
    if (large_community_entry_count.is_set || is_set(large_community_entry_count.yfilter)) leaf_name_data.push_back(large_community_entry_count.get_name_leafdata());
    if (large_community_memory.is_set || is_set(large_community_memory.yfilter)) leaf_name_data.push_back(large_community_memory.get_name_leafdata());
    if (lindex_entry_count.is_set || is_set(lindex_entry_count.yfilter)) leaf_name_data.push_back(lindex_entry_count.get_name_leafdata());
    if (lindex_memory.is_set || is_set(lindex_memory.yfilter)) leaf_name_data.push_back(lindex_memory.get_name_leafdata());
    if (local_as.is_set || is_set(local_as.yfilter)) leaf_name_data.push_back(local_as.get_name_leafdata());
    if (lsattr_entry_count.is_set || is_set(lsattr_entry_count.yfilter)) leaf_name_data.push_back(lsattr_entry_count.get_name_leafdata());
    if (lsattr_memory.is_set || is_set(lsattr_memory.yfilter)) leaf_name_data.push_back(lsattr_memory.get_name_leafdata());
    if (neighbors_count_total.is_set || is_set(neighbors_count_total.yfilter)) leaf_name_data.push_back(neighbors_count_total.get_name_leafdata());
    if (nexthop_count.is_set || is_set(nexthop_count.yfilter)) leaf_name_data.push_back(nexthop_count.get_name_leafdata());
    if (nexthop_memory.is_set || is_set(nexthop_memory.yfilter)) leaf_name_data.push_back(nexthop_memory.get_name_leafdata());
    if (path_attribute_memory.is_set || is_set(path_attribute_memory.yfilter)) leaf_name_data.push_back(path_attribute_memory.get_name_leafdata());
    if (path_attributes_entry_count.is_set || is_set(path_attributes_entry_count.yfilter)) leaf_name_data.push_back(path_attributes_entry_count.get_name_leafdata());
    if (pe_distinguisher_label_entry_count.is_set || is_set(pe_distinguisher_label_entry_count.yfilter)) leaf_name_data.push_back(pe_distinguisher_label_entry_count.get_name_leafdata());
    if (pe_distinguisher_label_memory.is_set || is_set(pe_distinguisher_label_memory.yfilter)) leaf_name_data.push_back(pe_distinguisher_label_memory.get_name_leafdata());
    if (ppmp_entry_count.is_set || is_set(ppmp_entry_count.yfilter)) leaf_name_data.push_back(ppmp_entry_count.get_name_leafdata());
    if (ppmp_memory.is_set || is_set(ppmp_memory.yfilter)) leaf_name_data.push_back(ppmp_memory.get_name_leafdata());
    if (process_instance_node.is_set || is_set(process_instance_node.yfilter)) leaf_name_data.push_back(process_instance_node.get_name_leafdata());
    if (pta_entry_count.is_set || is_set(pta_entry_count.yfilter)) leaf_name_data.push_back(pta_entry_count.get_name_leafdata());
    if (pta_memory.is_set || is_set(pta_memory.yfilter)) leaf_name_data.push_back(pta_memory.get_name_leafdata());
    if (restart_count.is_set || is_set(restart_count.yfilter)) leaf_name_data.push_back(restart_count.get_name_leafdata());
    if (ribrnh_entry_count.is_set || is_set(ribrnh_entry_count.yfilter)) leaf_name_data.push_back(ribrnh_entry_count.get_name_leafdata());
    if (ribrnh_memory.is_set || is_set(ribrnh_memory.yfilter)) leaf_name_data.push_back(ribrnh_memory.get_name_leafdata());
    if (route_reflector_memory.is_set || is_set(route_reflector_memory.yfilter)) leaf_name_data.push_back(route_reflector_memory.get_name_leafdata());
    if (route_reflectors.is_set || is_set(route_reflectors.yfilter)) leaf_name_data.push_back(route_reflectors.get_name_leafdata());
    if (sn_num_non_dflt_vrf_nbrs.is_set || is_set(sn_num_non_dflt_vrf_nbrs.yfilter)) leaf_name_data.push_back(sn_num_non_dflt_vrf_nbrs.get_name_leafdata());
    if (sn_num_non_dflt_vrf_nbrs_estab.is_set || is_set(sn_num_non_dflt_vrf_nbrs_estab.yfilter)) leaf_name_data.push_back(sn_num_non_dflt_vrf_nbrs_estab.get_name_leafdata());
    if (total_vrf_count.is_set || is_set(total_vrf_count.yfilter)) leaf_name_data.push_back(total_vrf_count.get_name_leafdata());
    if (tunnel_encap_entry_count.is_set || is_set(tunnel_encap_entry_count.yfilter)) leaf_name_data.push_back(tunnel_encap_entry_count.get_name_leafdata());
    if (tunnel_encap_memory.is_set || is_set(tunnel_encap_memory.yfilter)) leaf_name_data.push_back(tunnel_encap_memory.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bmp-pool-alloc-count")
    {
        for(auto const & c : bmp_pool_alloc_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolAllocCount>();
        c->parent = this;
        bmp_pool_alloc_count.push_back(c);
        return c;
    }

    if(child_yang_name == "bmp-pool-free-count")
    {
        for(auto const & c : bmp_pool_free_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolFreeCount>();
        c->parent = this;
        bmp_pool_free_count.push_back(c);
        return c;
    }

    if(child_yang_name == "bmp-pool-size")
    {
        for(auto const & c : bmp_pool_size)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolSize>();
        c->parent = this;
        bmp_pool_size.push_back(c);
        return c;
    }

    if(child_yang_name == "msg-log-pool-alloc-count")
    {
        for(auto const & c : msg_log_pool_alloc_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolAllocCount>();
        c->parent = this;
        msg_log_pool_alloc_count.push_back(c);
        return c;
    }

    if(child_yang_name == "msg-log-pool-free-count")
    {
        for(auto const & c : msg_log_pool_free_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolFreeCount>();
        c->parent = this;
        msg_log_pool_free_count.push_back(c);
        return c;
    }

    if(child_yang_name == "msg-log-pool-size")
    {
        for(auto const & c : msg_log_pool_size)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolSize>();
        c->parent = this;
        msg_log_pool_size.push_back(c);
        return c;
    }

    if(child_yang_name == "pool-alloc-count")
    {
        for(auto const & c : pool_alloc_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolAllocCount>();
        c->parent = this;
        pool_alloc_count.push_back(c);
        return c;
    }

    if(child_yang_name == "pool-free-count")
    {
        for(auto const & c : pool_free_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolFreeCount>();
        c->parent = this;
        pool_free_count.push_back(c);
        return c;
    }

    if(child_yang_name == "pool-size")
    {
        for(auto const & c : pool_size)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolSize>();
        c->parent = this;
        pool_size.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bmp_pool_alloc_count)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : bmp_pool_free_count)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : bmp_pool_size)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : msg_log_pool_alloc_count)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : msg_log_pool_free_count)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : msg_log_pool_size)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : pool_alloc_count)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : pool_free_count)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : pool_size)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-path-entries-memory")
    {
        as_path_entries_memory = value;
        as_path_entries_memory.value_namespace = name_space;
        as_path_entries_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-path-entry-count")
    {
        as_path_entry_count = value;
        as_path_entry_count.value_namespace = name_space;
        as_path_entry_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attr-set-entry-count")
    {
        attr_set_entry_count = value;
        attr_set_entry_count.value_namespace = name_space;
        attr_set_entry_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attr-set-memory")
    {
        attr_set_memory = value;
        attr_set_memory.value_namespace = name_space;
        attr_set_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "community-entry-count")
    {
        community_entry_count = value;
        community_entry_count.value_namespace = name_space;
        community_entry_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "community-memory")
    {
        community_memory = value;
        community_memory.value_namespace = name_space;
        community_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "established-neighbors-count-total")
    {
        established_neighbors_count_total = value;
        established_neighbors_count_total.value_namespace = name_space;
        established_neighbors_count_total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-community-entry-count")
    {
        extended_community_entry_count = value;
        extended_community_entry_count.value_namespace = name_space;
        extended_community_entry_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-community-memory")
    {
        extended_community_memory = value;
        extended_community_memory.value_namespace = name_space;
        extended_community_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "large-community-entry-count")
    {
        large_community_entry_count = value;
        large_community_entry_count.value_namespace = name_space;
        large_community_entry_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "large-community-memory")
    {
        large_community_memory = value;
        large_community_memory.value_namespace = name_space;
        large_community_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lindex-entry-count")
    {
        lindex_entry_count = value;
        lindex_entry_count.value_namespace = name_space;
        lindex_entry_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lindex-memory")
    {
        lindex_memory = value;
        lindex_memory.value_namespace = name_space;
        lindex_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-as")
    {
        local_as = value;
        local_as.value_namespace = name_space;
        local_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsattr-entry-count")
    {
        lsattr_entry_count = value;
        lsattr_entry_count.value_namespace = name_space;
        lsattr_entry_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsattr-memory")
    {
        lsattr_memory = value;
        lsattr_memory.value_namespace = name_space;
        lsattr_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbors-count-total")
    {
        neighbors_count_total = value;
        neighbors_count_total.value_namespace = name_space;
        neighbors_count_total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nexthop-count")
    {
        nexthop_count = value;
        nexthop_count.value_namespace = name_space;
        nexthop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nexthop-memory")
    {
        nexthop_memory = value;
        nexthop_memory.value_namespace = name_space;
        nexthop_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-attribute-memory")
    {
        path_attribute_memory = value;
        path_attribute_memory.value_namespace = name_space;
        path_attribute_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-attributes-entry-count")
    {
        path_attributes_entry_count = value;
        path_attributes_entry_count.value_namespace = name_space;
        path_attributes_entry_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pe-distinguisher-label-entry-count")
    {
        pe_distinguisher_label_entry_count = value;
        pe_distinguisher_label_entry_count.value_namespace = name_space;
        pe_distinguisher_label_entry_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pe-distinguisher-label-memory")
    {
        pe_distinguisher_label_memory = value;
        pe_distinguisher_label_memory.value_namespace = name_space;
        pe_distinguisher_label_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ppmp-entry-count")
    {
        ppmp_entry_count = value;
        ppmp_entry_count.value_namespace = name_space;
        ppmp_entry_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ppmp-memory")
    {
        ppmp_memory = value;
        ppmp_memory.value_namespace = name_space;
        ppmp_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-instance-node")
    {
        process_instance_node = value;
        process_instance_node.value_namespace = name_space;
        process_instance_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pta-entry-count")
    {
        pta_entry_count = value;
        pta_entry_count.value_namespace = name_space;
        pta_entry_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pta-memory")
    {
        pta_memory = value;
        pta_memory.value_namespace = name_space;
        pta_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-count")
    {
        restart_count = value;
        restart_count.value_namespace = name_space;
        restart_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ribrnh-entry-count")
    {
        ribrnh_entry_count = value;
        ribrnh_entry_count.value_namespace = name_space;
        ribrnh_entry_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ribrnh-memory")
    {
        ribrnh_memory = value;
        ribrnh_memory.value_namespace = name_space;
        ribrnh_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-reflector-memory")
    {
        route_reflector_memory = value;
        route_reflector_memory.value_namespace = name_space;
        route_reflector_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-reflectors")
    {
        route_reflectors = value;
        route_reflectors.value_namespace = name_space;
        route_reflectors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sn-num-non-dflt-vrf-nbrs")
    {
        sn_num_non_dflt_vrf_nbrs = value;
        sn_num_non_dflt_vrf_nbrs.value_namespace = name_space;
        sn_num_non_dflt_vrf_nbrs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sn-num-non-dflt-vrf-nbrs-estab")
    {
        sn_num_non_dflt_vrf_nbrs_estab = value;
        sn_num_non_dflt_vrf_nbrs_estab.value_namespace = name_space;
        sn_num_non_dflt_vrf_nbrs_estab.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-vrf-count")
    {
        total_vrf_count = value;
        total_vrf_count.value_namespace = name_space;
        total_vrf_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-encap-entry-count")
    {
        tunnel_encap_entry_count = value;
        tunnel_encap_entry_count.value_namespace = name_space;
        tunnel_encap_entry_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-encap-memory")
    {
        tunnel_encap_memory = value;
        tunnel_encap_memory.value_namespace = name_space;
        tunnel_encap_memory.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-path-entries-memory")
    {
        as_path_entries_memory.yfilter = yfilter;
    }
    if(value_path == "as-path-entry-count")
    {
        as_path_entry_count.yfilter = yfilter;
    }
    if(value_path == "attr-set-entry-count")
    {
        attr_set_entry_count.yfilter = yfilter;
    }
    if(value_path == "attr-set-memory")
    {
        attr_set_memory.yfilter = yfilter;
    }
    if(value_path == "community-entry-count")
    {
        community_entry_count.yfilter = yfilter;
    }
    if(value_path == "community-memory")
    {
        community_memory.yfilter = yfilter;
    }
    if(value_path == "established-neighbors-count-total")
    {
        established_neighbors_count_total.yfilter = yfilter;
    }
    if(value_path == "extended-community-entry-count")
    {
        extended_community_entry_count.yfilter = yfilter;
    }
    if(value_path == "extended-community-memory")
    {
        extended_community_memory.yfilter = yfilter;
    }
    if(value_path == "large-community-entry-count")
    {
        large_community_entry_count.yfilter = yfilter;
    }
    if(value_path == "large-community-memory")
    {
        large_community_memory.yfilter = yfilter;
    }
    if(value_path == "lindex-entry-count")
    {
        lindex_entry_count.yfilter = yfilter;
    }
    if(value_path == "lindex-memory")
    {
        lindex_memory.yfilter = yfilter;
    }
    if(value_path == "local-as")
    {
        local_as.yfilter = yfilter;
    }
    if(value_path == "lsattr-entry-count")
    {
        lsattr_entry_count.yfilter = yfilter;
    }
    if(value_path == "lsattr-memory")
    {
        lsattr_memory.yfilter = yfilter;
    }
    if(value_path == "neighbors-count-total")
    {
        neighbors_count_total.yfilter = yfilter;
    }
    if(value_path == "nexthop-count")
    {
        nexthop_count.yfilter = yfilter;
    }
    if(value_path == "nexthop-memory")
    {
        nexthop_memory.yfilter = yfilter;
    }
    if(value_path == "path-attribute-memory")
    {
        path_attribute_memory.yfilter = yfilter;
    }
    if(value_path == "path-attributes-entry-count")
    {
        path_attributes_entry_count.yfilter = yfilter;
    }
    if(value_path == "pe-distinguisher-label-entry-count")
    {
        pe_distinguisher_label_entry_count.yfilter = yfilter;
    }
    if(value_path == "pe-distinguisher-label-memory")
    {
        pe_distinguisher_label_memory.yfilter = yfilter;
    }
    if(value_path == "ppmp-entry-count")
    {
        ppmp_entry_count.yfilter = yfilter;
    }
    if(value_path == "ppmp-memory")
    {
        ppmp_memory.yfilter = yfilter;
    }
    if(value_path == "process-instance-node")
    {
        process_instance_node.yfilter = yfilter;
    }
    if(value_path == "pta-entry-count")
    {
        pta_entry_count.yfilter = yfilter;
    }
    if(value_path == "pta-memory")
    {
        pta_memory.yfilter = yfilter;
    }
    if(value_path == "restart-count")
    {
        restart_count.yfilter = yfilter;
    }
    if(value_path == "ribrnh-entry-count")
    {
        ribrnh_entry_count.yfilter = yfilter;
    }
    if(value_path == "ribrnh-memory")
    {
        ribrnh_memory.yfilter = yfilter;
    }
    if(value_path == "route-reflector-memory")
    {
        route_reflector_memory.yfilter = yfilter;
    }
    if(value_path == "route-reflectors")
    {
        route_reflectors.yfilter = yfilter;
    }
    if(value_path == "sn-num-non-dflt-vrf-nbrs")
    {
        sn_num_non_dflt_vrf_nbrs.yfilter = yfilter;
    }
    if(value_path == "sn-num-non-dflt-vrf-nbrs-estab")
    {
        sn_num_non_dflt_vrf_nbrs_estab.yfilter = yfilter;
    }
    if(value_path == "total-vrf-count")
    {
        total_vrf_count.yfilter = yfilter;
    }
    if(value_path == "tunnel-encap-entry-count")
    {
        tunnel_encap_entry_count.yfilter = yfilter;
    }
    if(value_path == "tunnel-encap-memory")
    {
        tunnel_encap_memory.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bmp-pool-alloc-count" || name == "bmp-pool-free-count" || name == "bmp-pool-size" || name == "msg-log-pool-alloc-count" || name == "msg-log-pool-free-count" || name == "msg-log-pool-size" || name == "pool-alloc-count" || name == "pool-free-count" || name == "pool-size" || name == "as-path-entries-memory" || name == "as-path-entry-count" || name == "attr-set-entry-count" || name == "attr-set-memory" || name == "community-entry-count" || name == "community-memory" || name == "established-neighbors-count-total" || name == "extended-community-entry-count" || name == "extended-community-memory" || name == "large-community-entry-count" || name == "large-community-memory" || name == "lindex-entry-count" || name == "lindex-memory" || name == "local-as" || name == "lsattr-entry-count" || name == "lsattr-memory" || name == "neighbors-count-total" || name == "nexthop-count" || name == "nexthop-memory" || name == "path-attribute-memory" || name == "path-attributes-entry-count" || name == "pe-distinguisher-label-entry-count" || name == "pe-distinguisher-label-memory" || name == "ppmp-entry-count" || name == "ppmp-memory" || name == "process-instance-node" || name == "pta-entry-count" || name == "pta-memory" || name == "restart-count" || name == "ribrnh-entry-count" || name == "ribrnh-memory" || name == "route-reflector-memory" || name == "route-reflectors" || name == "sn-num-non-dflt-vrf-nbrs" || name == "sn-num-non-dflt-vrf-nbrs-estab" || name == "total-vrf-count" || name == "tunnel-encap-entry-count" || name == "tunnel-encap-memory")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolAllocCount::BmpPoolAllocCount()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "bmp-pool-alloc-count"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolAllocCount::~BmpPoolAllocCount()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolAllocCount::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolAllocCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolAllocCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-pool-alloc-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolAllocCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolAllocCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolAllocCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolAllocCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolAllocCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolAllocCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolFreeCount::BmpPoolFreeCount()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "bmp-pool-free-count"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolFreeCount::~BmpPoolFreeCount()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolFreeCount::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolFreeCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolFreeCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-pool-free-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolFreeCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolFreeCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolFreeCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolFreeCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolFreeCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolFreeCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolSize::BmpPoolSize()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "bmp-pool-size"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolSize::~BmpPoolSize()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolSize::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolSize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-pool-size";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolSize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolSize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolSize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolSize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolSize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolAllocCount::MsgLogPoolAllocCount()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "msg-log-pool-alloc-count"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolAllocCount::~MsgLogPoolAllocCount()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolAllocCount::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolAllocCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolAllocCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msg-log-pool-alloc-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolAllocCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolAllocCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolAllocCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolAllocCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolAllocCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolAllocCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolFreeCount::MsgLogPoolFreeCount()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "msg-log-pool-free-count"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolFreeCount::~MsgLogPoolFreeCount()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolFreeCount::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolFreeCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolFreeCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msg-log-pool-free-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolFreeCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolFreeCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolFreeCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolFreeCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolFreeCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolFreeCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolSize::MsgLogPoolSize()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "msg-log-pool-size"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolSize::~MsgLogPoolSize()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolSize::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolSize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msg-log-pool-size";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolSize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolSize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolSize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolSize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolSize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolAllocCount::PoolAllocCount()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "pool-alloc-count"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolAllocCount::~PoolAllocCount()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolAllocCount::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolAllocCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolAllocCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool-alloc-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolAllocCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolAllocCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolAllocCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolAllocCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolAllocCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolAllocCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolFreeCount::PoolFreeCount()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "pool-free-count"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolFreeCount::~PoolFreeCount()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolFreeCount::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolFreeCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolFreeCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool-free-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolFreeCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolFreeCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolFreeCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolFreeCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolFreeCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolFreeCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolSize::PoolSize()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "pool-size"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolSize::~PoolSize()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolSize::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolSize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool-size";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolSize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolSize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolSize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolSize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolSize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::PerformanceStatistics()
    :
    global(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global>())
	,vrf(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Vrf>())
{
    global->parent = this;
    vrf->parent = this;

    yang_name = "performance-statistics"; yang_parent_name = "process-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::~PerformanceStatistics()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::has_data() const
{
    return (global !=  nullptr && global->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::has_operation() const
{
    return is_set(yfilter)
	|| (global !=  nullptr && global->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "performance-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global>();
        }
        return global;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(global != nullptr)
    {
        children["global"] = global;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global" || name == "vrf")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Global()
    :
    active_nsr_state{YType::uint32, "active-nsr-state"},
    active_nsrtcp_phase_two_enter_time{YType::uint32, "active-nsrtcp-phase-two-enter-time"},
    brib_api_input_bytes{YType::uint32, "brib-api-input-bytes"},
    brib_api_input_messages{YType::uint32, "brib-api-input-messages"},
    brib_api_input_prefixes_received{YType::uint32, "brib-api-input-prefixes-received"},
    brib_api_input_processing_time{YType::uint32, "brib-api-input-processing-time"},
    brib_api_input_withdrawn_prefixes{YType::uint32, "brib-api-input-withdrawn-prefixes"},
    brib_api_output_bytes_generated{YType::uint32, "brib-api-output-bytes-generated"},
    brib_api_output_bytes_sent{YType::uint32, "brib-api-output-bytes-sent"},
    brib_api_output_calls{YType::uint32, "brib-api-output-calls"},
    brib_api_output_generation_time{YType::uint32, "brib-api-output-generation-time"},
    brib_api_output_messages_sent{YType::uint32, "brib-api-output-messages-sent"},
    brib_api_output_prefixes_advertised{YType::uint32, "brib-api-output-prefixes-advertised"},
    brib_api_output_prefixes_withdrawn{YType::uint32, "brib-api-output-prefixes-withdrawn"},
    brib_api_output_sending_time{YType::uint32, "brib-api-output-sending-time"},
    configuration_items_processed{YType::uint32, "configuration-items-processed"},
    configuration_processing_time{YType::uint32, "configuration-processing-time"},
    current_clock_time{YType::uint64, "current-clock-time"},
    edm_processing_time{YType::uint32, "edm-processing-time"},
    edm_requests_count{YType::uint32, "edm-requests-count"},
    in_event_attach_calls{YType::uint32, "in-event-attach-calls"},
    in_out_event_attach_calls{YType::uint32, "in-out-event-attach-calls"},
    initial_sync_sessions_added{YType::boolean, "initial-sync-sessions-added"},
    instance_node_role{YType::boolean, "instance-node-role"},
    io_handler_tm{YType::uint64, "io-handler-tm"},
    io_timer_id{YType::uint32, "io-timer-id"},
    io_tree_timer_expiry{YType::uint64, "io-tree-timer-expiry"},
    io_tree_timer_left{YType::uint64, "io-tree-timer-left"},
    nsr_last_reset_reason{YType::uint8, "nsr-last-reset-reason"},
    out_event_attach_calls{YType::uint32, "out-event-attach-calls"},
    proc_scoped_sync_state{YType::enumeration, "proc-scoped-sync-state"},
    qad_ac_ks_failure{YType::uint32, "qad-ac-ks-failure"},
    qad_ac_ks_received{YType::uint32, "qad-ac-ks-received"},
    qad_init_drops{YType::uint32, "qad-init-drops"},
    qad_messages_received{YType::uint32, "qad-messages-received"},
    qad_messages_sent{YType::uint32, "qad-messages-sent"},
    qad_processed{YType::uint32, "qad-processed"},
    qad_recv_drops{YType::uint32, "qad-recv-drops"},
    qad_resumes{YType::uint32, "qad-resumes"},
    qad_send_drops{YType::uint32, "qad-send-drops"},
    qad_send_failure{YType::uint32, "qad-send-failure"},
    qad_suspends{YType::uint32, "qad-suspends"},
    qad_timeout_received{YType::uint32, "qad-timeout-received"},
    qad_timeout_recvd{YType::uint32, "qad-timeout-recvd"},
    qadack_sent{YType::uint32, "qadack-sent"},
    qadoos_drops{YType::uint32, "qadoos-drops"},
    redcon_nsr_ready{YType::boolean, "redcon-nsr-ready"},
    redcon_state_time{YType::uint32, "redcon-state-time"},
    sec_active_nsr_state{YType::uint32, "sec-active-nsr-state"},
    sec_active_nsrtcp_phase_two_enter_time{YType::uint32, "sec-active-nsrtcp-phase-two-enter-time"},
    tep2p_auto_tunnel_enabled{YType::boolean, "tep2p-auto-tunnel-enabled"},
    total_neighbors_with_pending_postits{YType::uint32, "total-neighbors-with-pending-postits"},
    total_outstanding_postits{YType::uint32, "total-outstanding-postits"},
    updgen_handler_tm{YType::uint64, "updgen-handler-tm"},
    updgen_timer_id{YType::uint32, "updgen-timer-id"},
    updgen_tree_timer_expiry{YType::uint64, "updgen-tree-timer-expiry"},
    updgen_tree_timer_left{YType::uint64, "updgen-tree-timer-left"}
    	,
    ds_npl(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl>())
	,ipv4rib_server(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer>())
	,ipv6rib_server(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer>())
	,lsd_connection(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection>())
	,te_connection(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection>())
{
    ds_npl->parent = this;
    ipv4rib_server->parent = this;
    ipv6rib_server->parent = this;
    lsd_connection->parent = this;
    te_connection->parent = this;

    yang_name = "global"; yang_parent_name = "performance-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::~Global()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::has_data() const
{
    for (std::size_t index=0; index<active_nsr_mode_enter_time.size(); index++)
    {
        if(active_nsr_mode_enter_time[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<active_nsrfo_time.size(); index++)
    {
        if(active_nsrfo_time[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<issu_milestone.size(); index++)
    {
        if(issu_milestone[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<postit_count_info.size(); index++)
    {
        if(postit_count_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<standby_nsr_mode_enter_time.size(); index++)
    {
        if(standby_nsr_mode_enter_time[index]->has_data())
            return true;
    }
    return active_nsr_state.is_set
	|| active_nsrtcp_phase_two_enter_time.is_set
	|| brib_api_input_bytes.is_set
	|| brib_api_input_messages.is_set
	|| brib_api_input_prefixes_received.is_set
	|| brib_api_input_processing_time.is_set
	|| brib_api_input_withdrawn_prefixes.is_set
	|| brib_api_output_bytes_generated.is_set
	|| brib_api_output_bytes_sent.is_set
	|| brib_api_output_calls.is_set
	|| brib_api_output_generation_time.is_set
	|| brib_api_output_messages_sent.is_set
	|| brib_api_output_prefixes_advertised.is_set
	|| brib_api_output_prefixes_withdrawn.is_set
	|| brib_api_output_sending_time.is_set
	|| configuration_items_processed.is_set
	|| configuration_processing_time.is_set
	|| current_clock_time.is_set
	|| edm_processing_time.is_set
	|| edm_requests_count.is_set
	|| in_event_attach_calls.is_set
	|| in_out_event_attach_calls.is_set
	|| initial_sync_sessions_added.is_set
	|| instance_node_role.is_set
	|| io_handler_tm.is_set
	|| io_timer_id.is_set
	|| io_tree_timer_expiry.is_set
	|| io_tree_timer_left.is_set
	|| nsr_last_reset_reason.is_set
	|| out_event_attach_calls.is_set
	|| proc_scoped_sync_state.is_set
	|| qad_ac_ks_failure.is_set
	|| qad_ac_ks_received.is_set
	|| qad_init_drops.is_set
	|| qad_messages_received.is_set
	|| qad_messages_sent.is_set
	|| qad_processed.is_set
	|| qad_recv_drops.is_set
	|| qad_resumes.is_set
	|| qad_send_drops.is_set
	|| qad_send_failure.is_set
	|| qad_suspends.is_set
	|| qad_timeout_received.is_set
	|| qad_timeout_recvd.is_set
	|| qadack_sent.is_set
	|| qadoos_drops.is_set
	|| redcon_nsr_ready.is_set
	|| redcon_state_time.is_set
	|| sec_active_nsr_state.is_set
	|| sec_active_nsrtcp_phase_two_enter_time.is_set
	|| tep2p_auto_tunnel_enabled.is_set
	|| total_neighbors_with_pending_postits.is_set
	|| total_outstanding_postits.is_set
	|| updgen_handler_tm.is_set
	|| updgen_timer_id.is_set
	|| updgen_tree_timer_expiry.is_set
	|| updgen_tree_timer_left.is_set
	|| (ds_npl !=  nullptr && ds_npl->has_data())
	|| (ipv4rib_server !=  nullptr && ipv4rib_server->has_data())
	|| (ipv6rib_server !=  nullptr && ipv6rib_server->has_data())
	|| (lsd_connection !=  nullptr && lsd_connection->has_data())
	|| (te_connection !=  nullptr && te_connection->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::has_operation() const
{
    for (std::size_t index=0; index<active_nsr_mode_enter_time.size(); index++)
    {
        if(active_nsr_mode_enter_time[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<active_nsrfo_time.size(); index++)
    {
        if(active_nsrfo_time[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<issu_milestone.size(); index++)
    {
        if(issu_milestone[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<postit_count_info.size(); index++)
    {
        if(postit_count_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<standby_nsr_mode_enter_time.size(); index++)
    {
        if(standby_nsr_mode_enter_time[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(active_nsr_state.yfilter)
	|| ydk::is_set(active_nsrtcp_phase_two_enter_time.yfilter)
	|| ydk::is_set(brib_api_input_bytes.yfilter)
	|| ydk::is_set(brib_api_input_messages.yfilter)
	|| ydk::is_set(brib_api_input_prefixes_received.yfilter)
	|| ydk::is_set(brib_api_input_processing_time.yfilter)
	|| ydk::is_set(brib_api_input_withdrawn_prefixes.yfilter)
	|| ydk::is_set(brib_api_output_bytes_generated.yfilter)
	|| ydk::is_set(brib_api_output_bytes_sent.yfilter)
	|| ydk::is_set(brib_api_output_calls.yfilter)
	|| ydk::is_set(brib_api_output_generation_time.yfilter)
	|| ydk::is_set(brib_api_output_messages_sent.yfilter)
	|| ydk::is_set(brib_api_output_prefixes_advertised.yfilter)
	|| ydk::is_set(brib_api_output_prefixes_withdrawn.yfilter)
	|| ydk::is_set(brib_api_output_sending_time.yfilter)
	|| ydk::is_set(configuration_items_processed.yfilter)
	|| ydk::is_set(configuration_processing_time.yfilter)
	|| ydk::is_set(current_clock_time.yfilter)
	|| ydk::is_set(edm_processing_time.yfilter)
	|| ydk::is_set(edm_requests_count.yfilter)
	|| ydk::is_set(in_event_attach_calls.yfilter)
	|| ydk::is_set(in_out_event_attach_calls.yfilter)
	|| ydk::is_set(initial_sync_sessions_added.yfilter)
	|| ydk::is_set(instance_node_role.yfilter)
	|| ydk::is_set(io_handler_tm.yfilter)
	|| ydk::is_set(io_timer_id.yfilter)
	|| ydk::is_set(io_tree_timer_expiry.yfilter)
	|| ydk::is_set(io_tree_timer_left.yfilter)
	|| ydk::is_set(nsr_last_reset_reason.yfilter)
	|| ydk::is_set(out_event_attach_calls.yfilter)
	|| ydk::is_set(proc_scoped_sync_state.yfilter)
	|| ydk::is_set(qad_ac_ks_failure.yfilter)
	|| ydk::is_set(qad_ac_ks_received.yfilter)
	|| ydk::is_set(qad_init_drops.yfilter)
	|| ydk::is_set(qad_messages_received.yfilter)
	|| ydk::is_set(qad_messages_sent.yfilter)
	|| ydk::is_set(qad_processed.yfilter)
	|| ydk::is_set(qad_recv_drops.yfilter)
	|| ydk::is_set(qad_resumes.yfilter)
	|| ydk::is_set(qad_send_drops.yfilter)
	|| ydk::is_set(qad_send_failure.yfilter)
	|| ydk::is_set(qad_suspends.yfilter)
	|| ydk::is_set(qad_timeout_received.yfilter)
	|| ydk::is_set(qad_timeout_recvd.yfilter)
	|| ydk::is_set(qadack_sent.yfilter)
	|| ydk::is_set(qadoos_drops.yfilter)
	|| ydk::is_set(redcon_nsr_ready.yfilter)
	|| ydk::is_set(redcon_state_time.yfilter)
	|| ydk::is_set(sec_active_nsr_state.yfilter)
	|| ydk::is_set(sec_active_nsrtcp_phase_two_enter_time.yfilter)
	|| ydk::is_set(tep2p_auto_tunnel_enabled.yfilter)
	|| ydk::is_set(total_neighbors_with_pending_postits.yfilter)
	|| ydk::is_set(total_outstanding_postits.yfilter)
	|| ydk::is_set(updgen_handler_tm.yfilter)
	|| ydk::is_set(updgen_timer_id.yfilter)
	|| ydk::is_set(updgen_tree_timer_expiry.yfilter)
	|| ydk::is_set(updgen_tree_timer_left.yfilter)
	|| (ds_npl !=  nullptr && ds_npl->has_operation())
	|| (ipv4rib_server !=  nullptr && ipv4rib_server->has_operation())
	|| (ipv6rib_server !=  nullptr && ipv6rib_server->has_operation())
	|| (lsd_connection !=  nullptr && lsd_connection->has_operation())
	|| (te_connection !=  nullptr && te_connection->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_nsr_state.is_set || is_set(active_nsr_state.yfilter)) leaf_name_data.push_back(active_nsr_state.get_name_leafdata());
    if (active_nsrtcp_phase_two_enter_time.is_set || is_set(active_nsrtcp_phase_two_enter_time.yfilter)) leaf_name_data.push_back(active_nsrtcp_phase_two_enter_time.get_name_leafdata());
    if (brib_api_input_bytes.is_set || is_set(brib_api_input_bytes.yfilter)) leaf_name_data.push_back(brib_api_input_bytes.get_name_leafdata());
    if (brib_api_input_messages.is_set || is_set(brib_api_input_messages.yfilter)) leaf_name_data.push_back(brib_api_input_messages.get_name_leafdata());
    if (brib_api_input_prefixes_received.is_set || is_set(brib_api_input_prefixes_received.yfilter)) leaf_name_data.push_back(brib_api_input_prefixes_received.get_name_leafdata());
    if (brib_api_input_processing_time.is_set || is_set(brib_api_input_processing_time.yfilter)) leaf_name_data.push_back(brib_api_input_processing_time.get_name_leafdata());
    if (brib_api_input_withdrawn_prefixes.is_set || is_set(brib_api_input_withdrawn_prefixes.yfilter)) leaf_name_data.push_back(brib_api_input_withdrawn_prefixes.get_name_leafdata());
    if (brib_api_output_bytes_generated.is_set || is_set(brib_api_output_bytes_generated.yfilter)) leaf_name_data.push_back(brib_api_output_bytes_generated.get_name_leafdata());
    if (brib_api_output_bytes_sent.is_set || is_set(brib_api_output_bytes_sent.yfilter)) leaf_name_data.push_back(brib_api_output_bytes_sent.get_name_leafdata());
    if (brib_api_output_calls.is_set || is_set(brib_api_output_calls.yfilter)) leaf_name_data.push_back(brib_api_output_calls.get_name_leafdata());
    if (brib_api_output_generation_time.is_set || is_set(brib_api_output_generation_time.yfilter)) leaf_name_data.push_back(brib_api_output_generation_time.get_name_leafdata());
    if (brib_api_output_messages_sent.is_set || is_set(brib_api_output_messages_sent.yfilter)) leaf_name_data.push_back(brib_api_output_messages_sent.get_name_leafdata());
    if (brib_api_output_prefixes_advertised.is_set || is_set(brib_api_output_prefixes_advertised.yfilter)) leaf_name_data.push_back(brib_api_output_prefixes_advertised.get_name_leafdata());
    if (brib_api_output_prefixes_withdrawn.is_set || is_set(brib_api_output_prefixes_withdrawn.yfilter)) leaf_name_data.push_back(brib_api_output_prefixes_withdrawn.get_name_leafdata());
    if (brib_api_output_sending_time.is_set || is_set(brib_api_output_sending_time.yfilter)) leaf_name_data.push_back(brib_api_output_sending_time.get_name_leafdata());
    if (configuration_items_processed.is_set || is_set(configuration_items_processed.yfilter)) leaf_name_data.push_back(configuration_items_processed.get_name_leafdata());
    if (configuration_processing_time.is_set || is_set(configuration_processing_time.yfilter)) leaf_name_data.push_back(configuration_processing_time.get_name_leafdata());
    if (current_clock_time.is_set || is_set(current_clock_time.yfilter)) leaf_name_data.push_back(current_clock_time.get_name_leafdata());
    if (edm_processing_time.is_set || is_set(edm_processing_time.yfilter)) leaf_name_data.push_back(edm_processing_time.get_name_leafdata());
    if (edm_requests_count.is_set || is_set(edm_requests_count.yfilter)) leaf_name_data.push_back(edm_requests_count.get_name_leafdata());
    if (in_event_attach_calls.is_set || is_set(in_event_attach_calls.yfilter)) leaf_name_data.push_back(in_event_attach_calls.get_name_leafdata());
    if (in_out_event_attach_calls.is_set || is_set(in_out_event_attach_calls.yfilter)) leaf_name_data.push_back(in_out_event_attach_calls.get_name_leafdata());
    if (initial_sync_sessions_added.is_set || is_set(initial_sync_sessions_added.yfilter)) leaf_name_data.push_back(initial_sync_sessions_added.get_name_leafdata());
    if (instance_node_role.is_set || is_set(instance_node_role.yfilter)) leaf_name_data.push_back(instance_node_role.get_name_leafdata());
    if (io_handler_tm.is_set || is_set(io_handler_tm.yfilter)) leaf_name_data.push_back(io_handler_tm.get_name_leafdata());
    if (io_timer_id.is_set || is_set(io_timer_id.yfilter)) leaf_name_data.push_back(io_timer_id.get_name_leafdata());
    if (io_tree_timer_expiry.is_set || is_set(io_tree_timer_expiry.yfilter)) leaf_name_data.push_back(io_tree_timer_expiry.get_name_leafdata());
    if (io_tree_timer_left.is_set || is_set(io_tree_timer_left.yfilter)) leaf_name_data.push_back(io_tree_timer_left.get_name_leafdata());
    if (nsr_last_reset_reason.is_set || is_set(nsr_last_reset_reason.yfilter)) leaf_name_data.push_back(nsr_last_reset_reason.get_name_leafdata());
    if (out_event_attach_calls.is_set || is_set(out_event_attach_calls.yfilter)) leaf_name_data.push_back(out_event_attach_calls.get_name_leafdata());
    if (proc_scoped_sync_state.is_set || is_set(proc_scoped_sync_state.yfilter)) leaf_name_data.push_back(proc_scoped_sync_state.get_name_leafdata());
    if (qad_ac_ks_failure.is_set || is_set(qad_ac_ks_failure.yfilter)) leaf_name_data.push_back(qad_ac_ks_failure.get_name_leafdata());
    if (qad_ac_ks_received.is_set || is_set(qad_ac_ks_received.yfilter)) leaf_name_data.push_back(qad_ac_ks_received.get_name_leafdata());
    if (qad_init_drops.is_set || is_set(qad_init_drops.yfilter)) leaf_name_data.push_back(qad_init_drops.get_name_leafdata());
    if (qad_messages_received.is_set || is_set(qad_messages_received.yfilter)) leaf_name_data.push_back(qad_messages_received.get_name_leafdata());
    if (qad_messages_sent.is_set || is_set(qad_messages_sent.yfilter)) leaf_name_data.push_back(qad_messages_sent.get_name_leafdata());
    if (qad_processed.is_set || is_set(qad_processed.yfilter)) leaf_name_data.push_back(qad_processed.get_name_leafdata());
    if (qad_recv_drops.is_set || is_set(qad_recv_drops.yfilter)) leaf_name_data.push_back(qad_recv_drops.get_name_leafdata());
    if (qad_resumes.is_set || is_set(qad_resumes.yfilter)) leaf_name_data.push_back(qad_resumes.get_name_leafdata());
    if (qad_send_drops.is_set || is_set(qad_send_drops.yfilter)) leaf_name_data.push_back(qad_send_drops.get_name_leafdata());
    if (qad_send_failure.is_set || is_set(qad_send_failure.yfilter)) leaf_name_data.push_back(qad_send_failure.get_name_leafdata());
    if (qad_suspends.is_set || is_set(qad_suspends.yfilter)) leaf_name_data.push_back(qad_suspends.get_name_leafdata());
    if (qad_timeout_received.is_set || is_set(qad_timeout_received.yfilter)) leaf_name_data.push_back(qad_timeout_received.get_name_leafdata());
    if (qad_timeout_recvd.is_set || is_set(qad_timeout_recvd.yfilter)) leaf_name_data.push_back(qad_timeout_recvd.get_name_leafdata());
    if (qadack_sent.is_set || is_set(qadack_sent.yfilter)) leaf_name_data.push_back(qadack_sent.get_name_leafdata());
    if (qadoos_drops.is_set || is_set(qadoos_drops.yfilter)) leaf_name_data.push_back(qadoos_drops.get_name_leafdata());
    if (redcon_nsr_ready.is_set || is_set(redcon_nsr_ready.yfilter)) leaf_name_data.push_back(redcon_nsr_ready.get_name_leafdata());
    if (redcon_state_time.is_set || is_set(redcon_state_time.yfilter)) leaf_name_data.push_back(redcon_state_time.get_name_leafdata());
    if (sec_active_nsr_state.is_set || is_set(sec_active_nsr_state.yfilter)) leaf_name_data.push_back(sec_active_nsr_state.get_name_leafdata());
    if (sec_active_nsrtcp_phase_two_enter_time.is_set || is_set(sec_active_nsrtcp_phase_two_enter_time.yfilter)) leaf_name_data.push_back(sec_active_nsrtcp_phase_two_enter_time.get_name_leafdata());
    if (tep2p_auto_tunnel_enabled.is_set || is_set(tep2p_auto_tunnel_enabled.yfilter)) leaf_name_data.push_back(tep2p_auto_tunnel_enabled.get_name_leafdata());
    if (total_neighbors_with_pending_postits.is_set || is_set(total_neighbors_with_pending_postits.yfilter)) leaf_name_data.push_back(total_neighbors_with_pending_postits.get_name_leafdata());
    if (total_outstanding_postits.is_set || is_set(total_outstanding_postits.yfilter)) leaf_name_data.push_back(total_outstanding_postits.get_name_leafdata());
    if (updgen_handler_tm.is_set || is_set(updgen_handler_tm.yfilter)) leaf_name_data.push_back(updgen_handler_tm.get_name_leafdata());
    if (updgen_timer_id.is_set || is_set(updgen_timer_id.yfilter)) leaf_name_data.push_back(updgen_timer_id.get_name_leafdata());
    if (updgen_tree_timer_expiry.is_set || is_set(updgen_tree_timer_expiry.yfilter)) leaf_name_data.push_back(updgen_tree_timer_expiry.get_name_leafdata());
    if (updgen_tree_timer_left.is_set || is_set(updgen_tree_timer_left.yfilter)) leaf_name_data.push_back(updgen_tree_timer_left.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active-nsr-mode-enter-time")
    {
        for(auto const & c : active_nsr_mode_enter_time)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrModeEnterTime>();
        c->parent = this;
        active_nsr_mode_enter_time.push_back(c);
        return c;
    }

    if(child_yang_name == "active-nsrfo-time")
    {
        for(auto const & c : active_nsrfo_time)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrfoTime>();
        c->parent = this;
        active_nsrfo_time.push_back(c);
        return c;
    }

    if(child_yang_name == "ds-npl")
    {
        if(ds_npl == nullptr)
        {
            ds_npl = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl>();
        }
        return ds_npl;
    }

    if(child_yang_name == "ipv4rib-server")
    {
        if(ipv4rib_server == nullptr)
        {
            ipv4rib_server = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer>();
        }
        return ipv4rib_server;
    }

    if(child_yang_name == "ipv6rib-server")
    {
        if(ipv6rib_server == nullptr)
        {
            ipv6rib_server = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer>();
        }
        return ipv6rib_server;
    }

    if(child_yang_name == "issu-milestone")
    {
        for(auto const & c : issu_milestone)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::IssuMilestone>();
        c->parent = this;
        issu_milestone.push_back(c);
        return c;
    }

    if(child_yang_name == "lsd-connection")
    {
        if(lsd_connection == nullptr)
        {
            lsd_connection = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection>();
        }
        return lsd_connection;
    }

    if(child_yang_name == "postit-count-info")
    {
        for(auto const & c : postit_count_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo>();
        c->parent = this;
        postit_count_info.push_back(c);
        return c;
    }

    if(child_yang_name == "standby-nsr-mode-enter-time")
    {
        for(auto const & c : standby_nsr_mode_enter_time)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::StandbyNsrModeEnterTime>();
        c->parent = this;
        standby_nsr_mode_enter_time.push_back(c);
        return c;
    }

    if(child_yang_name == "te-connection")
    {
        if(te_connection == nullptr)
        {
            te_connection = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection>();
        }
        return te_connection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : active_nsr_mode_enter_time)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : active_nsrfo_time)
    {
        children[c->get_segment_path()] = c;
    }

    if(ds_npl != nullptr)
    {
        children["ds-npl"] = ds_npl;
    }

    if(ipv4rib_server != nullptr)
    {
        children["ipv4rib-server"] = ipv4rib_server;
    }

    if(ipv6rib_server != nullptr)
    {
        children["ipv6rib-server"] = ipv6rib_server;
    }

    for (auto const & c : issu_milestone)
    {
        children[c->get_segment_path()] = c;
    }

    if(lsd_connection != nullptr)
    {
        children["lsd-connection"] = lsd_connection;
    }

    for (auto const & c : postit_count_info)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : standby_nsr_mode_enter_time)
    {
        children[c->get_segment_path()] = c;
    }

    if(te_connection != nullptr)
    {
        children["te-connection"] = te_connection;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-nsr-state")
    {
        active_nsr_state = value;
        active_nsr_state.value_namespace = name_space;
        active_nsr_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-nsrtcp-phase-two-enter-time")
    {
        active_nsrtcp_phase_two_enter_time = value;
        active_nsrtcp_phase_two_enter_time.value_namespace = name_space;
        active_nsrtcp_phase_two_enter_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "brib-api-input-bytes")
    {
        brib_api_input_bytes = value;
        brib_api_input_bytes.value_namespace = name_space;
        brib_api_input_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "brib-api-input-messages")
    {
        brib_api_input_messages = value;
        brib_api_input_messages.value_namespace = name_space;
        brib_api_input_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "brib-api-input-prefixes-received")
    {
        brib_api_input_prefixes_received = value;
        brib_api_input_prefixes_received.value_namespace = name_space;
        brib_api_input_prefixes_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "brib-api-input-processing-time")
    {
        brib_api_input_processing_time = value;
        brib_api_input_processing_time.value_namespace = name_space;
        brib_api_input_processing_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "brib-api-input-withdrawn-prefixes")
    {
        brib_api_input_withdrawn_prefixes = value;
        brib_api_input_withdrawn_prefixes.value_namespace = name_space;
        brib_api_input_withdrawn_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "brib-api-output-bytes-generated")
    {
        brib_api_output_bytes_generated = value;
        brib_api_output_bytes_generated.value_namespace = name_space;
        brib_api_output_bytes_generated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "brib-api-output-bytes-sent")
    {
        brib_api_output_bytes_sent = value;
        brib_api_output_bytes_sent.value_namespace = name_space;
        brib_api_output_bytes_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "brib-api-output-calls")
    {
        brib_api_output_calls = value;
        brib_api_output_calls.value_namespace = name_space;
        brib_api_output_calls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "brib-api-output-generation-time")
    {
        brib_api_output_generation_time = value;
        brib_api_output_generation_time.value_namespace = name_space;
        brib_api_output_generation_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "brib-api-output-messages-sent")
    {
        brib_api_output_messages_sent = value;
        brib_api_output_messages_sent.value_namespace = name_space;
        brib_api_output_messages_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "brib-api-output-prefixes-advertised")
    {
        brib_api_output_prefixes_advertised = value;
        brib_api_output_prefixes_advertised.value_namespace = name_space;
        brib_api_output_prefixes_advertised.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "brib-api-output-prefixes-withdrawn")
    {
        brib_api_output_prefixes_withdrawn = value;
        brib_api_output_prefixes_withdrawn.value_namespace = name_space;
        brib_api_output_prefixes_withdrawn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "brib-api-output-sending-time")
    {
        brib_api_output_sending_time = value;
        brib_api_output_sending_time.value_namespace = name_space;
        brib_api_output_sending_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configuration-items-processed")
    {
        configuration_items_processed = value;
        configuration_items_processed.value_namespace = name_space;
        configuration_items_processed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configuration-processing-time")
    {
        configuration_processing_time = value;
        configuration_processing_time.value_namespace = name_space;
        configuration_processing_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-clock-time")
    {
        current_clock_time = value;
        current_clock_time.value_namespace = name_space;
        current_clock_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "edm-processing-time")
    {
        edm_processing_time = value;
        edm_processing_time.value_namespace = name_space;
        edm_processing_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "edm-requests-count")
    {
        edm_requests_count = value;
        edm_requests_count.value_namespace = name_space;
        edm_requests_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-event-attach-calls")
    {
        in_event_attach_calls = value;
        in_event_attach_calls.value_namespace = name_space;
        in_event_attach_calls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-out-event-attach-calls")
    {
        in_out_event_attach_calls = value;
        in_out_event_attach_calls.value_namespace = name_space;
        in_out_event_attach_calls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initial-sync-sessions-added")
    {
        initial_sync_sessions_added = value;
        initial_sync_sessions_added.value_namespace = name_space;
        initial_sync_sessions_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-node-role")
    {
        instance_node_role = value;
        instance_node_role.value_namespace = name_space;
        instance_node_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "io-handler-tm")
    {
        io_handler_tm = value;
        io_handler_tm.value_namespace = name_space;
        io_handler_tm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "io-timer-id")
    {
        io_timer_id = value;
        io_timer_id.value_namespace = name_space;
        io_timer_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "io-tree-timer-expiry")
    {
        io_tree_timer_expiry = value;
        io_tree_timer_expiry.value_namespace = name_space;
        io_tree_timer_expiry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "io-tree-timer-left")
    {
        io_tree_timer_left = value;
        io_tree_timer_left.value_namespace = name_space;
        io_tree_timer_left.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-last-reset-reason")
    {
        nsr_last_reset_reason = value;
        nsr_last_reset_reason.value_namespace = name_space;
        nsr_last_reset_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-event-attach-calls")
    {
        out_event_attach_calls = value;
        out_event_attach_calls.value_namespace = name_space;
        out_event_attach_calls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proc-scoped-sync-state")
    {
        proc_scoped_sync_state = value;
        proc_scoped_sync_state.value_namespace = name_space;
        proc_scoped_sync_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qad-ac-ks-failure")
    {
        qad_ac_ks_failure = value;
        qad_ac_ks_failure.value_namespace = name_space;
        qad_ac_ks_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qad-ac-ks-received")
    {
        qad_ac_ks_received = value;
        qad_ac_ks_received.value_namespace = name_space;
        qad_ac_ks_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qad-init-drops")
    {
        qad_init_drops = value;
        qad_init_drops.value_namespace = name_space;
        qad_init_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qad-messages-received")
    {
        qad_messages_received = value;
        qad_messages_received.value_namespace = name_space;
        qad_messages_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qad-messages-sent")
    {
        qad_messages_sent = value;
        qad_messages_sent.value_namespace = name_space;
        qad_messages_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qad-processed")
    {
        qad_processed = value;
        qad_processed.value_namespace = name_space;
        qad_processed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qad-recv-drops")
    {
        qad_recv_drops = value;
        qad_recv_drops.value_namespace = name_space;
        qad_recv_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qad-resumes")
    {
        qad_resumes = value;
        qad_resumes.value_namespace = name_space;
        qad_resumes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qad-send-drops")
    {
        qad_send_drops = value;
        qad_send_drops.value_namespace = name_space;
        qad_send_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qad-send-failure")
    {
        qad_send_failure = value;
        qad_send_failure.value_namespace = name_space;
        qad_send_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qad-suspends")
    {
        qad_suspends = value;
        qad_suspends.value_namespace = name_space;
        qad_suspends.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qad-timeout-received")
    {
        qad_timeout_received = value;
        qad_timeout_received.value_namespace = name_space;
        qad_timeout_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qad-timeout-recvd")
    {
        qad_timeout_recvd = value;
        qad_timeout_recvd.value_namespace = name_space;
        qad_timeout_recvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qadack-sent")
    {
        qadack_sent = value;
        qadack_sent.value_namespace = name_space;
        qadack_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qadoos-drops")
    {
        qadoos_drops = value;
        qadoos_drops.value_namespace = name_space;
        qadoos_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redcon-nsr-ready")
    {
        redcon_nsr_ready = value;
        redcon_nsr_ready.value_namespace = name_space;
        redcon_nsr_ready.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redcon-state-time")
    {
        redcon_state_time = value;
        redcon_state_time.value_namespace = name_space;
        redcon_state_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sec-active-nsr-state")
    {
        sec_active_nsr_state = value;
        sec_active_nsr_state.value_namespace = name_space;
        sec_active_nsr_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sec-active-nsrtcp-phase-two-enter-time")
    {
        sec_active_nsrtcp_phase_two_enter_time = value;
        sec_active_nsrtcp_phase_two_enter_time.value_namespace = name_space;
        sec_active_nsrtcp_phase_two_enter_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tep2p-auto-tunnel-enabled")
    {
        tep2p_auto_tunnel_enabled = value;
        tep2p_auto_tunnel_enabled.value_namespace = name_space;
        tep2p_auto_tunnel_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-neighbors-with-pending-postits")
    {
        total_neighbors_with_pending_postits = value;
        total_neighbors_with_pending_postits.value_namespace = name_space;
        total_neighbors_with_pending_postits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-outstanding-postits")
    {
        total_outstanding_postits = value;
        total_outstanding_postits.value_namespace = name_space;
        total_outstanding_postits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "updgen-handler-tm")
    {
        updgen_handler_tm = value;
        updgen_handler_tm.value_namespace = name_space;
        updgen_handler_tm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "updgen-timer-id")
    {
        updgen_timer_id = value;
        updgen_timer_id.value_namespace = name_space;
        updgen_timer_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "updgen-tree-timer-expiry")
    {
        updgen_tree_timer_expiry = value;
        updgen_tree_timer_expiry.value_namespace = name_space;
        updgen_tree_timer_expiry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "updgen-tree-timer-left")
    {
        updgen_tree_timer_left = value;
        updgen_tree_timer_left.value_namespace = name_space;
        updgen_tree_timer_left.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-nsr-state")
    {
        active_nsr_state.yfilter = yfilter;
    }
    if(value_path == "active-nsrtcp-phase-two-enter-time")
    {
        active_nsrtcp_phase_two_enter_time.yfilter = yfilter;
    }
    if(value_path == "brib-api-input-bytes")
    {
        brib_api_input_bytes.yfilter = yfilter;
    }
    if(value_path == "brib-api-input-messages")
    {
        brib_api_input_messages.yfilter = yfilter;
    }
    if(value_path == "brib-api-input-prefixes-received")
    {
        brib_api_input_prefixes_received.yfilter = yfilter;
    }
    if(value_path == "brib-api-input-processing-time")
    {
        brib_api_input_processing_time.yfilter = yfilter;
    }
    if(value_path == "brib-api-input-withdrawn-prefixes")
    {
        brib_api_input_withdrawn_prefixes.yfilter = yfilter;
    }
    if(value_path == "brib-api-output-bytes-generated")
    {
        brib_api_output_bytes_generated.yfilter = yfilter;
    }
    if(value_path == "brib-api-output-bytes-sent")
    {
        brib_api_output_bytes_sent.yfilter = yfilter;
    }
    if(value_path == "brib-api-output-calls")
    {
        brib_api_output_calls.yfilter = yfilter;
    }
    if(value_path == "brib-api-output-generation-time")
    {
        brib_api_output_generation_time.yfilter = yfilter;
    }
    if(value_path == "brib-api-output-messages-sent")
    {
        brib_api_output_messages_sent.yfilter = yfilter;
    }
    if(value_path == "brib-api-output-prefixes-advertised")
    {
        brib_api_output_prefixes_advertised.yfilter = yfilter;
    }
    if(value_path == "brib-api-output-prefixes-withdrawn")
    {
        brib_api_output_prefixes_withdrawn.yfilter = yfilter;
    }
    if(value_path == "brib-api-output-sending-time")
    {
        brib_api_output_sending_time.yfilter = yfilter;
    }
    if(value_path == "configuration-items-processed")
    {
        configuration_items_processed.yfilter = yfilter;
    }
    if(value_path == "configuration-processing-time")
    {
        configuration_processing_time.yfilter = yfilter;
    }
    if(value_path == "current-clock-time")
    {
        current_clock_time.yfilter = yfilter;
    }
    if(value_path == "edm-processing-time")
    {
        edm_processing_time.yfilter = yfilter;
    }
    if(value_path == "edm-requests-count")
    {
        edm_requests_count.yfilter = yfilter;
    }
    if(value_path == "in-event-attach-calls")
    {
        in_event_attach_calls.yfilter = yfilter;
    }
    if(value_path == "in-out-event-attach-calls")
    {
        in_out_event_attach_calls.yfilter = yfilter;
    }
    if(value_path == "initial-sync-sessions-added")
    {
        initial_sync_sessions_added.yfilter = yfilter;
    }
    if(value_path == "instance-node-role")
    {
        instance_node_role.yfilter = yfilter;
    }
    if(value_path == "io-handler-tm")
    {
        io_handler_tm.yfilter = yfilter;
    }
    if(value_path == "io-timer-id")
    {
        io_timer_id.yfilter = yfilter;
    }
    if(value_path == "io-tree-timer-expiry")
    {
        io_tree_timer_expiry.yfilter = yfilter;
    }
    if(value_path == "io-tree-timer-left")
    {
        io_tree_timer_left.yfilter = yfilter;
    }
    if(value_path == "nsr-last-reset-reason")
    {
        nsr_last_reset_reason.yfilter = yfilter;
    }
    if(value_path == "out-event-attach-calls")
    {
        out_event_attach_calls.yfilter = yfilter;
    }
    if(value_path == "proc-scoped-sync-state")
    {
        proc_scoped_sync_state.yfilter = yfilter;
    }
    if(value_path == "qad-ac-ks-failure")
    {
        qad_ac_ks_failure.yfilter = yfilter;
    }
    if(value_path == "qad-ac-ks-received")
    {
        qad_ac_ks_received.yfilter = yfilter;
    }
    if(value_path == "qad-init-drops")
    {
        qad_init_drops.yfilter = yfilter;
    }
    if(value_path == "qad-messages-received")
    {
        qad_messages_received.yfilter = yfilter;
    }
    if(value_path == "qad-messages-sent")
    {
        qad_messages_sent.yfilter = yfilter;
    }
    if(value_path == "qad-processed")
    {
        qad_processed.yfilter = yfilter;
    }
    if(value_path == "qad-recv-drops")
    {
        qad_recv_drops.yfilter = yfilter;
    }
    if(value_path == "qad-resumes")
    {
        qad_resumes.yfilter = yfilter;
    }
    if(value_path == "qad-send-drops")
    {
        qad_send_drops.yfilter = yfilter;
    }
    if(value_path == "qad-send-failure")
    {
        qad_send_failure.yfilter = yfilter;
    }
    if(value_path == "qad-suspends")
    {
        qad_suspends.yfilter = yfilter;
    }
    if(value_path == "qad-timeout-received")
    {
        qad_timeout_received.yfilter = yfilter;
    }
    if(value_path == "qad-timeout-recvd")
    {
        qad_timeout_recvd.yfilter = yfilter;
    }
    if(value_path == "qadack-sent")
    {
        qadack_sent.yfilter = yfilter;
    }
    if(value_path == "qadoos-drops")
    {
        qadoos_drops.yfilter = yfilter;
    }
    if(value_path == "redcon-nsr-ready")
    {
        redcon_nsr_ready.yfilter = yfilter;
    }
    if(value_path == "redcon-state-time")
    {
        redcon_state_time.yfilter = yfilter;
    }
    if(value_path == "sec-active-nsr-state")
    {
        sec_active_nsr_state.yfilter = yfilter;
    }
    if(value_path == "sec-active-nsrtcp-phase-two-enter-time")
    {
        sec_active_nsrtcp_phase_two_enter_time.yfilter = yfilter;
    }
    if(value_path == "tep2p-auto-tunnel-enabled")
    {
        tep2p_auto_tunnel_enabled.yfilter = yfilter;
    }
    if(value_path == "total-neighbors-with-pending-postits")
    {
        total_neighbors_with_pending_postits.yfilter = yfilter;
    }
    if(value_path == "total-outstanding-postits")
    {
        total_outstanding_postits.yfilter = yfilter;
    }
    if(value_path == "updgen-handler-tm")
    {
        updgen_handler_tm.yfilter = yfilter;
    }
    if(value_path == "updgen-timer-id")
    {
        updgen_timer_id.yfilter = yfilter;
    }
    if(value_path == "updgen-tree-timer-expiry")
    {
        updgen_tree_timer_expiry.yfilter = yfilter;
    }
    if(value_path == "updgen-tree-timer-left")
    {
        updgen_tree_timer_left.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-nsr-mode-enter-time" || name == "active-nsrfo-time" || name == "ds-npl" || name == "ipv4rib-server" || name == "ipv6rib-server" || name == "issu-milestone" || name == "lsd-connection" || name == "postit-count-info" || name == "standby-nsr-mode-enter-time" || name == "te-connection" || name == "active-nsr-state" || name == "active-nsrtcp-phase-two-enter-time" || name == "brib-api-input-bytes" || name == "brib-api-input-messages" || name == "brib-api-input-prefixes-received" || name == "brib-api-input-processing-time" || name == "brib-api-input-withdrawn-prefixes" || name == "brib-api-output-bytes-generated" || name == "brib-api-output-bytes-sent" || name == "brib-api-output-calls" || name == "brib-api-output-generation-time" || name == "brib-api-output-messages-sent" || name == "brib-api-output-prefixes-advertised" || name == "brib-api-output-prefixes-withdrawn" || name == "brib-api-output-sending-time" || name == "configuration-items-processed" || name == "configuration-processing-time" || name == "current-clock-time" || name == "edm-processing-time" || name == "edm-requests-count" || name == "in-event-attach-calls" || name == "in-out-event-attach-calls" || name == "initial-sync-sessions-added" || name == "instance-node-role" || name == "io-handler-tm" || name == "io-timer-id" || name == "io-tree-timer-expiry" || name == "io-tree-timer-left" || name == "nsr-last-reset-reason" || name == "out-event-attach-calls" || name == "proc-scoped-sync-state" || name == "qad-ac-ks-failure" || name == "qad-ac-ks-received" || name == "qad-init-drops" || name == "qad-messages-received" || name == "qad-messages-sent" || name == "qad-processed" || name == "qad-recv-drops" || name == "qad-resumes" || name == "qad-send-drops" || name == "qad-send-failure" || name == "qad-suspends" || name == "qad-timeout-received" || name == "qad-timeout-recvd" || name == "qadack-sent" || name == "qadoos-drops" || name == "redcon-nsr-ready" || name == "redcon-state-time" || name == "sec-active-nsr-state" || name == "sec-active-nsrtcp-phase-two-enter-time" || name == "tep2p-auto-tunnel-enabled" || name == "total-neighbors-with-pending-postits" || name == "total-outstanding-postits" || name == "updgen-handler-tm" || name == "updgen-timer-id" || name == "updgen-tree-timer-expiry" || name == "updgen-tree-timer-left")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrModeEnterTime::ActiveNsrModeEnterTime()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "active-nsr-mode-enter-time"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrModeEnterTime::~ActiveNsrModeEnterTime()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrModeEnterTime::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrModeEnterTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrModeEnterTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-nsr-mode-enter-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrModeEnterTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrModeEnterTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrModeEnterTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrModeEnterTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrModeEnterTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrModeEnterTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrfoTime::ActiveNsrfoTime()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "active-nsrfo-time"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrfoTime::~ActiveNsrfoTime()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrfoTime::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrfoTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrfoTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-nsrfo-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrfoTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrfoTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrfoTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrfoTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrfoTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrfoTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::DsNpl()
    :
    dir_service_conn_state{YType::enumeration, "dir-service-conn-state"},
    dsissu_status_flag{YType::uint32, "dsissu-status-flag"},
    issu_mgr_conn_state{YType::enumeration, "issu-mgr-conn-state"},
    issu_phase{YType::str, "issu-phase"},
    issu_type_ng{YType::boolean, "issu-type-ng"},
    issuha_option{YType::str, "issuha-option"},
    local_ds_handle{YType::uint64, "local-ds-handle"},
    service_name{YType::str, "service-name"}
{

    yang_name = "ds-npl"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::~DsNpl()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::has_data() const
{
    for (std::size_t index=0; index<npl_endpoint.size(); index++)
    {
        if(npl_endpoint[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<npl_priority_statistic.size(); index++)
    {
        if(npl_priority_statistic[index]->has_data())
            return true;
    }
    return dir_service_conn_state.is_set
	|| dsissu_status_flag.is_set
	|| issu_mgr_conn_state.is_set
	|| issu_phase.is_set
	|| issu_type_ng.is_set
	|| issuha_option.is_set
	|| local_ds_handle.is_set
	|| service_name.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::has_operation() const
{
    for (std::size_t index=0; index<npl_endpoint.size(); index++)
    {
        if(npl_endpoint[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<npl_priority_statistic.size(); index++)
    {
        if(npl_priority_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(dir_service_conn_state.yfilter)
	|| ydk::is_set(dsissu_status_flag.yfilter)
	|| ydk::is_set(issu_mgr_conn_state.yfilter)
	|| ydk::is_set(issu_phase.yfilter)
	|| ydk::is_set(issu_type_ng.yfilter)
	|| ydk::is_set(issuha_option.yfilter)
	|| ydk::is_set(local_ds_handle.yfilter)
	|| ydk::is_set(service_name.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ds-npl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dir_service_conn_state.is_set || is_set(dir_service_conn_state.yfilter)) leaf_name_data.push_back(dir_service_conn_state.get_name_leafdata());
    if (dsissu_status_flag.is_set || is_set(dsissu_status_flag.yfilter)) leaf_name_data.push_back(dsissu_status_flag.get_name_leafdata());
    if (issu_mgr_conn_state.is_set || is_set(issu_mgr_conn_state.yfilter)) leaf_name_data.push_back(issu_mgr_conn_state.get_name_leafdata());
    if (issu_phase.is_set || is_set(issu_phase.yfilter)) leaf_name_data.push_back(issu_phase.get_name_leafdata());
    if (issu_type_ng.is_set || is_set(issu_type_ng.yfilter)) leaf_name_data.push_back(issu_type_ng.get_name_leafdata());
    if (issuha_option.is_set || is_set(issuha_option.yfilter)) leaf_name_data.push_back(issuha_option.get_name_leafdata());
    if (local_ds_handle.is_set || is_set(local_ds_handle.yfilter)) leaf_name_data.push_back(local_ds_handle.get_name_leafdata());
    if (service_name.is_set || is_set(service_name.yfilter)) leaf_name_data.push_back(service_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "npl-endpoint")
    {
        for(auto const & c : npl_endpoint)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint>();
        c->parent = this;
        npl_endpoint.push_back(c);
        return c;
    }

    if(child_yang_name == "npl-priority-statistic")
    {
        for(auto const & c : npl_priority_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic>();
        c->parent = this;
        npl_priority_statistic.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : npl_endpoint)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : npl_priority_statistic)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dir-service-conn-state")
    {
        dir_service_conn_state = value;
        dir_service_conn_state.value_namespace = name_space;
        dir_service_conn_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsissu-status-flag")
    {
        dsissu_status_flag = value;
        dsissu_status_flag.value_namespace = name_space;
        dsissu_status_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "issu-mgr-conn-state")
    {
        issu_mgr_conn_state = value;
        issu_mgr_conn_state.value_namespace = name_space;
        issu_mgr_conn_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "issu-phase")
    {
        issu_phase = value;
        issu_phase.value_namespace = name_space;
        issu_phase.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "issu-type-ng")
    {
        issu_type_ng = value;
        issu_type_ng.value_namespace = name_space;
        issu_type_ng.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "issuha-option")
    {
        issuha_option = value;
        issuha_option.value_namespace = name_space;
        issuha_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-ds-handle")
    {
        local_ds_handle = value;
        local_ds_handle.value_namespace = name_space;
        local_ds_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-name")
    {
        service_name = value;
        service_name.value_namespace = name_space;
        service_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dir-service-conn-state")
    {
        dir_service_conn_state.yfilter = yfilter;
    }
    if(value_path == "dsissu-status-flag")
    {
        dsissu_status_flag.yfilter = yfilter;
    }
    if(value_path == "issu-mgr-conn-state")
    {
        issu_mgr_conn_state.yfilter = yfilter;
    }
    if(value_path == "issu-phase")
    {
        issu_phase.yfilter = yfilter;
    }
    if(value_path == "issu-type-ng")
    {
        issu_type_ng.yfilter = yfilter;
    }
    if(value_path == "issuha-option")
    {
        issuha_option.yfilter = yfilter;
    }
    if(value_path == "local-ds-handle")
    {
        local_ds_handle.yfilter = yfilter;
    }
    if(value_path == "service-name")
    {
        service_name.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "npl-endpoint" || name == "npl-priority-statistic" || name == "dir-service-conn-state" || name == "dsissu-status-flag" || name == "issu-mgr-conn-state" || name == "issu-phase" || name == "issu-type-ng" || name == "issuha-option" || name == "local-ds-handle" || name == "service-name")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::NplEndpoint()
    :
    endpoint_active_flag{YType::boolean, "endpoint-active-flag"},
    endpoint_handle{YType::uint64, "endpoint-handle"},
    endpoint_issu_role{YType::str, "endpoint-issu-role"},
    endpoint_name{YType::str, "endpoint-name"},
    endpoint_stale_flag{YType::boolean, "endpoint-stale-flag"},
    expected_sequence_num{YType::uint32, "expected-sequence-num"},
    msg_size{YType::uint32, "msg-size"},
    node_id{YType::str, "node-id"},
    sync_group_name{YType::str, "sync-group-name"},
    wheel_id{YType::uint32, "wheel-id"}
{

    yang_name = "npl-endpoint"; yang_parent_name = "ds-npl"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::~NplEndpoint()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::has_data() const
{
    for (std::size_t index=0; index<endpoint.size(); index++)
    {
        if(endpoint[index]->has_data())
            return true;
    }
    return endpoint_active_flag.is_set
	|| endpoint_handle.is_set
	|| endpoint_issu_role.is_set
	|| endpoint_name.is_set
	|| endpoint_stale_flag.is_set
	|| expected_sequence_num.is_set
	|| msg_size.is_set
	|| node_id.is_set
	|| sync_group_name.is_set
	|| wheel_id.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::has_operation() const
{
    for (std::size_t index=0; index<endpoint.size(); index++)
    {
        if(endpoint[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(endpoint_active_flag.yfilter)
	|| ydk::is_set(endpoint_handle.yfilter)
	|| ydk::is_set(endpoint_issu_role.yfilter)
	|| ydk::is_set(endpoint_name.yfilter)
	|| ydk::is_set(endpoint_stale_flag.yfilter)
	|| ydk::is_set(expected_sequence_num.yfilter)
	|| ydk::is_set(msg_size.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(sync_group_name.yfilter)
	|| ydk::is_set(wheel_id.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "npl-endpoint";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (endpoint_active_flag.is_set || is_set(endpoint_active_flag.yfilter)) leaf_name_data.push_back(endpoint_active_flag.get_name_leafdata());
    if (endpoint_handle.is_set || is_set(endpoint_handle.yfilter)) leaf_name_data.push_back(endpoint_handle.get_name_leafdata());
    if (endpoint_issu_role.is_set || is_set(endpoint_issu_role.yfilter)) leaf_name_data.push_back(endpoint_issu_role.get_name_leafdata());
    if (endpoint_name.is_set || is_set(endpoint_name.yfilter)) leaf_name_data.push_back(endpoint_name.get_name_leafdata());
    if (endpoint_stale_flag.is_set || is_set(endpoint_stale_flag.yfilter)) leaf_name_data.push_back(endpoint_stale_flag.get_name_leafdata());
    if (expected_sequence_num.is_set || is_set(expected_sequence_num.yfilter)) leaf_name_data.push_back(expected_sequence_num.get_name_leafdata());
    if (msg_size.is_set || is_set(msg_size.yfilter)) leaf_name_data.push_back(msg_size.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (sync_group_name.is_set || is_set(sync_group_name.yfilter)) leaf_name_data.push_back(sync_group_name.get_name_leafdata());
    if (wheel_id.is_set || is_set(wheel_id.yfilter)) leaf_name_data.push_back(wheel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "endpoint")
    {
        for(auto const & c : endpoint)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::Endpoint>();
        c->parent = this;
        endpoint.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : endpoint)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "endpoint-active-flag")
    {
        endpoint_active_flag = value;
        endpoint_active_flag.value_namespace = name_space;
        endpoint_active_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endpoint-handle")
    {
        endpoint_handle = value;
        endpoint_handle.value_namespace = name_space;
        endpoint_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endpoint-issu-role")
    {
        endpoint_issu_role = value;
        endpoint_issu_role.value_namespace = name_space;
        endpoint_issu_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endpoint-name")
    {
        endpoint_name = value;
        endpoint_name.value_namespace = name_space;
        endpoint_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endpoint-stale-flag")
    {
        endpoint_stale_flag = value;
        endpoint_stale_flag.value_namespace = name_space;
        endpoint_stale_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expected-sequence-num")
    {
        expected_sequence_num = value;
        expected_sequence_num.value_namespace = name_space;
        expected_sequence_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-size")
    {
        msg_size = value;
        msg_size.value_namespace = name_space;
        msg_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-group-name")
    {
        sync_group_name = value;
        sync_group_name.value_namespace = name_space;
        sync_group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wheel-id")
    {
        wheel_id = value;
        wheel_id.value_namespace = name_space;
        wheel_id.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "endpoint-active-flag")
    {
        endpoint_active_flag.yfilter = yfilter;
    }
    if(value_path == "endpoint-handle")
    {
        endpoint_handle.yfilter = yfilter;
    }
    if(value_path == "endpoint-issu-role")
    {
        endpoint_issu_role.yfilter = yfilter;
    }
    if(value_path == "endpoint-name")
    {
        endpoint_name.yfilter = yfilter;
    }
    if(value_path == "endpoint-stale-flag")
    {
        endpoint_stale_flag.yfilter = yfilter;
    }
    if(value_path == "expected-sequence-num")
    {
        expected_sequence_num.yfilter = yfilter;
    }
    if(value_path == "msg-size")
    {
        msg_size.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "sync-group-name")
    {
        sync_group_name.yfilter = yfilter;
    }
    if(value_path == "wheel-id")
    {
        wheel_id.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "endpoint" || name == "endpoint-active-flag" || name == "endpoint-handle" || name == "endpoint-issu-role" || name == "endpoint-name" || name == "endpoint-stale-flag" || name == "expected-sequence-num" || name == "msg-size" || name == "node-id" || name == "sync-group-name" || name == "wheel-id")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::Endpoint::Endpoint()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "endpoint"; yang_parent_name = "npl-endpoint"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::Endpoint::~Endpoint()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::Endpoint::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::Endpoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::Endpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "endpoint";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::Endpoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::Endpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::Endpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::Endpoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::Endpoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::Endpoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NplPriorityStatistic()
{

    yang_name = "npl-priority-statistic"; yang_parent_name = "ds-npl"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::~NplPriorityStatistic()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::has_data() const
{
    for (std::size_t index=0; index<num_recv.size(); index++)
    {
        if(num_recv[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<num_recv_drop.size(); index++)
    {
        if(num_recv_drop[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<num_sent.size(); index++)
    {
        if(num_sent[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<num_sent_drop.size(); index++)
    {
        if(num_sent_drop[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::has_operation() const
{
    for (std::size_t index=0; index<num_recv.size(); index++)
    {
        if(num_recv[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<num_recv_drop.size(); index++)
    {
        if(num_recv_drop[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<num_sent.size(); index++)
    {
        if(num_sent[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<num_sent_drop.size(); index++)
    {
        if(num_sent_drop[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "npl-priority-statistic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "num-recv")
    {
        for(auto const & c : num_recv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecv>();
        c->parent = this;
        num_recv.push_back(c);
        return c;
    }

    if(child_yang_name == "num-recv-drop")
    {
        for(auto const & c : num_recv_drop)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop>();
        c->parent = this;
        num_recv_drop.push_back(c);
        return c;
    }

    if(child_yang_name == "num-sent")
    {
        for(auto const & c : num_sent)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSent>();
        c->parent = this;
        num_sent.push_back(c);
        return c;
    }

    if(child_yang_name == "num-sent-drop")
    {
        for(auto const & c : num_sent_drop)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop>();
        c->parent = this;
        num_sent_drop.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : num_recv)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : num_recv_drop)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : num_sent)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : num_sent_drop)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-recv" || name == "num-recv-drop" || name == "num-sent" || name == "num-sent-drop")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecv::NumRecv()
    :
    entry{YType::uint64, "entry"}
{

    yang_name = "num-recv"; yang_parent_name = "npl-priority-statistic"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecv::~NumRecv()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecv::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "num-recv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::NumRecvDrop()
{

    yang_name = "num-recv-drop"; yang_parent_name = "npl-priority-statistic"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::~NumRecvDrop()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::has_data() const
{
    for (std::size_t index=0; index<nsr_pl_recv_drop_array.size(); index++)
    {
        if(nsr_pl_recv_drop_array[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::has_operation() const
{
    for (std::size_t index=0; index<nsr_pl_recv_drop_array.size(); index++)
    {
        if(nsr_pl_recv_drop_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "num-recv-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nsr-pl-recv-drop-array")
    {
        for(auto const & c : nsr_pl_recv_drop_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::NsrPlRecvDropArray>();
        c->parent = this;
        nsr_pl_recv_drop_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nsr_pl_recv_drop_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-pl-recv-drop-array")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::NsrPlRecvDropArray::NsrPlRecvDropArray()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "nsr-pl-recv-drop-array"; yang_parent_name = "num-recv-drop"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::NsrPlRecvDropArray::~NsrPlRecvDropArray()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::NsrPlRecvDropArray::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::NsrPlRecvDropArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::NsrPlRecvDropArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-pl-recv-drop-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::NsrPlRecvDropArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::NsrPlRecvDropArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::NsrPlRecvDropArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::NsrPlRecvDropArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::NsrPlRecvDropArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::NsrPlRecvDropArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSent::NumSent()
    :
    entry{YType::uint64, "entry"}
{

    yang_name = "num-sent"; yang_parent_name = "npl-priority-statistic"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSent::~NumSent()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSent::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "num-sent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::NumSentDrop()
{

    yang_name = "num-sent-drop"; yang_parent_name = "npl-priority-statistic"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::~NumSentDrop()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::has_data() const
{
    for (std::size_t index=0; index<nsr_pl_send_drop_array.size(); index++)
    {
        if(nsr_pl_send_drop_array[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::has_operation() const
{
    for (std::size_t index=0; index<nsr_pl_send_drop_array.size(); index++)
    {
        if(nsr_pl_send_drop_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "num-sent-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nsr-pl-send-drop-array")
    {
        for(auto const & c : nsr_pl_send_drop_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::NsrPlSendDropArray>();
        c->parent = this;
        nsr_pl_send_drop_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nsr_pl_send_drop_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-pl-send-drop-array")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::NsrPlSendDropArray::NsrPlSendDropArray()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "nsr-pl-send-drop-array"; yang_parent_name = "num-sent-drop"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::NsrPlSendDropArray::~NsrPlSendDropArray()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::NsrPlSendDropArray::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::NsrPlSendDropArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::NsrPlSendDropArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-pl-send-drop-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::NsrPlSendDropArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::NsrPlSendDropArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::NsrPlSendDropArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::NsrPlSendDropArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::NsrPlSendDropArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::NsrPlSendDropArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::Ipv4RibServer()
    :
    is_rib_connection_up{YType::boolean, "is-rib-connection-up"},
    last_rib_connection_down_age{YType::uint32, "last-rib-connection-down-age"},
    last_rib_connection_up_age{YType::uint32, "last-rib-connection-up-age"},
    rib_connection_down_count{YType::uint32, "rib-connection-down-count"},
    rib_connection_up_count{YType::uint32, "rib-connection-up-count"}
    	,
    first_rib_connection_down_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp>())
	,first_rib_connection_up_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp>())
	,last_rib_connection_down_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp>())
	,last_rib_connection_up_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp>())
{
    first_rib_connection_down_timestamp->parent = this;
    first_rib_connection_up_timestamp->parent = this;
    last_rib_connection_down_timestamp->parent = this;
    last_rib_connection_up_timestamp->parent = this;

    yang_name = "ipv4rib-server"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::~Ipv4RibServer()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4rib-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_rib_connection_up.is_set || is_set(is_rib_connection_up.yfilter)) leaf_name_data.push_back(is_rib_connection_up.get_name_leafdata());
    if (last_rib_connection_down_age.is_set || is_set(last_rib_connection_down_age.yfilter)) leaf_name_data.push_back(last_rib_connection_down_age.get_name_leafdata());
    if (last_rib_connection_up_age.is_set || is_set(last_rib_connection_up_age.yfilter)) leaf_name_data.push_back(last_rib_connection_up_age.get_name_leafdata());
    if (rib_connection_down_count.is_set || is_set(rib_connection_down_count.yfilter)) leaf_name_data.push_back(rib_connection_down_count.get_name_leafdata());
    if (rib_connection_up_count.is_set || is_set(rib_connection_up_count.yfilter)) leaf_name_data.push_back(rib_connection_up_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "first-rib-connection-down-timestamp")
    {
        if(first_rib_connection_down_timestamp == nullptr)
        {
            first_rib_connection_down_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp>();
        }
        return first_rib_connection_down_timestamp;
    }

    if(child_yang_name == "first-rib-connection-up-timestamp")
    {
        if(first_rib_connection_up_timestamp == nullptr)
        {
            first_rib_connection_up_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp>();
        }
        return first_rib_connection_up_timestamp;
    }

    if(child_yang_name == "last-rib-connection-down-timestamp")
    {
        if(last_rib_connection_down_timestamp == nullptr)
        {
            last_rib_connection_down_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp>();
        }
        return last_rib_connection_down_timestamp;
    }

    if(child_yang_name == "last-rib-connection-up-timestamp")
    {
        if(last_rib_connection_up_timestamp == nullptr)
        {
            last_rib_connection_up_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp>();
        }
        return last_rib_connection_up_timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::get_children() const
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "first-rib-connection-down-timestamp" || name == "first-rib-connection-up-timestamp" || name == "last-rib-connection-down-timestamp" || name == "last-rib-connection-up-timestamp" || name == "is-rib-connection-up" || name == "last-rib-connection-down-age" || name == "last-rib-connection-up-age" || name == "rib-connection-down-count" || name == "rib-connection-up-count")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp::FirstRibConnectionDownTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "first-rib-connection-down-timestamp"; yang_parent_name = "ipv4rib-server"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp::~FirstRibConnectionDownTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-rib-connection-down-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp::FirstRibConnectionUpTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "first-rib-connection-up-timestamp"; yang_parent_name = "ipv4rib-server"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp::~FirstRibConnectionUpTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-rib-connection-up-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp::LastRibConnectionDownTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "last-rib-connection-down-timestamp"; yang_parent_name = "ipv4rib-server"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp::~LastRibConnectionDownTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-rib-connection-down-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp::LastRibConnectionUpTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "last-rib-connection-up-timestamp"; yang_parent_name = "ipv4rib-server"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp::~LastRibConnectionUpTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-rib-connection-up-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::Ipv6RibServer()
    :
    is_rib_connection_up{YType::boolean, "is-rib-connection-up"},
    last_rib_connection_down_age{YType::uint32, "last-rib-connection-down-age"},
    last_rib_connection_up_age{YType::uint32, "last-rib-connection-up-age"},
    rib_connection_down_count{YType::uint32, "rib-connection-down-count"},
    rib_connection_up_count{YType::uint32, "rib-connection-up-count"}
    	,
    first_rib_connection_down_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp>())
	,first_rib_connection_up_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp>())
	,last_rib_connection_down_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp>())
	,last_rib_connection_up_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp>())
{
    first_rib_connection_down_timestamp->parent = this;
    first_rib_connection_up_timestamp->parent = this;
    last_rib_connection_down_timestamp->parent = this;
    last_rib_connection_up_timestamp->parent = this;

    yang_name = "ipv6rib-server"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::~Ipv6RibServer()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6rib-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_rib_connection_up.is_set || is_set(is_rib_connection_up.yfilter)) leaf_name_data.push_back(is_rib_connection_up.get_name_leafdata());
    if (last_rib_connection_down_age.is_set || is_set(last_rib_connection_down_age.yfilter)) leaf_name_data.push_back(last_rib_connection_down_age.get_name_leafdata());
    if (last_rib_connection_up_age.is_set || is_set(last_rib_connection_up_age.yfilter)) leaf_name_data.push_back(last_rib_connection_up_age.get_name_leafdata());
    if (rib_connection_down_count.is_set || is_set(rib_connection_down_count.yfilter)) leaf_name_data.push_back(rib_connection_down_count.get_name_leafdata());
    if (rib_connection_up_count.is_set || is_set(rib_connection_up_count.yfilter)) leaf_name_data.push_back(rib_connection_up_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "first-rib-connection-down-timestamp")
    {
        if(first_rib_connection_down_timestamp == nullptr)
        {
            first_rib_connection_down_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp>();
        }
        return first_rib_connection_down_timestamp;
    }

    if(child_yang_name == "first-rib-connection-up-timestamp")
    {
        if(first_rib_connection_up_timestamp == nullptr)
        {
            first_rib_connection_up_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp>();
        }
        return first_rib_connection_up_timestamp;
    }

    if(child_yang_name == "last-rib-connection-down-timestamp")
    {
        if(last_rib_connection_down_timestamp == nullptr)
        {
            last_rib_connection_down_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp>();
        }
        return last_rib_connection_down_timestamp;
    }

    if(child_yang_name == "last-rib-connection-up-timestamp")
    {
        if(last_rib_connection_up_timestamp == nullptr)
        {
            last_rib_connection_up_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp>();
        }
        return last_rib_connection_up_timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::get_children() const
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "first-rib-connection-down-timestamp" || name == "first-rib-connection-up-timestamp" || name == "last-rib-connection-down-timestamp" || name == "last-rib-connection-up-timestamp" || name == "is-rib-connection-up" || name == "last-rib-connection-down-age" || name == "last-rib-connection-up-age" || name == "rib-connection-down-count" || name == "rib-connection-up-count")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp::FirstRibConnectionDownTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "first-rib-connection-down-timestamp"; yang_parent_name = "ipv6rib-server"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp::~FirstRibConnectionDownTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-rib-connection-down-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp::FirstRibConnectionUpTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "first-rib-connection-up-timestamp"; yang_parent_name = "ipv6rib-server"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp::~FirstRibConnectionUpTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-rib-connection-up-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp::LastRibConnectionDownTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "last-rib-connection-down-timestamp"; yang_parent_name = "ipv6rib-server"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp::~LastRibConnectionDownTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-rib-connection-down-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp::LastRibConnectionUpTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "last-rib-connection-up-timestamp"; yang_parent_name = "ipv6rib-server"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp::~LastRibConnectionUpTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-rib-connection-up-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::IssuMilestone::IssuMilestone()
    :
    milestone_met_timestamp{YType::uint32, "milestone-met-timestamp"},
    milestone_name{YType::str, "milestone-name"},
    milestone_start_timestamp{YType::uint32, "milestone-start-timestamp"}
{

    yang_name = "issu-milestone"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::IssuMilestone::~IssuMilestone()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::IssuMilestone::has_data() const
{
    return milestone_met_timestamp.is_set
	|| milestone_name.is_set
	|| milestone_start_timestamp.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::IssuMilestone::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(milestone_met_timestamp.yfilter)
	|| ydk::is_set(milestone_name.yfilter)
	|| ydk::is_set(milestone_start_timestamp.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::IssuMilestone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issu-milestone";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::IssuMilestone::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (milestone_met_timestamp.is_set || is_set(milestone_met_timestamp.yfilter)) leaf_name_data.push_back(milestone_met_timestamp.get_name_leafdata());
    if (milestone_name.is_set || is_set(milestone_name.yfilter)) leaf_name_data.push_back(milestone_name.get_name_leafdata());
    if (milestone_start_timestamp.is_set || is_set(milestone_start_timestamp.yfilter)) leaf_name_data.push_back(milestone_start_timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::IssuMilestone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::IssuMilestone::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::IssuMilestone::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::IssuMilestone::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::IssuMilestone::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "milestone-met-timestamp" || name == "milestone-name" || name == "milestone-start-timestamp")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LsdConnection()
    :
    connection_down_count{YType::uint32, "connection-down-count"},
    connection_up_count{YType::uint32, "connection-up-count"},
    is_connection_up{YType::boolean, "is-connection-up"},
    last_connection_down_age{YType::uint32, "last-connection-down-age"},
    last_connection_up_age{YType::uint32, "last-connection-up-age"}
    	,
    first_connection_down_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp>())
	,first_connection_up_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp>())
	,last_connection_down_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp>())
	,last_connection_up_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp>())
{
    first_connection_down_timestamp->parent = this;
    first_connection_up_timestamp->parent = this;
    last_connection_down_timestamp->parent = this;
    last_connection_up_timestamp->parent = this;

    yang_name = "lsd-connection"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::~LsdConnection()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsd-connection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connection_down_count.is_set || is_set(connection_down_count.yfilter)) leaf_name_data.push_back(connection_down_count.get_name_leafdata());
    if (connection_up_count.is_set || is_set(connection_up_count.yfilter)) leaf_name_data.push_back(connection_up_count.get_name_leafdata());
    if (is_connection_up.is_set || is_set(is_connection_up.yfilter)) leaf_name_data.push_back(is_connection_up.get_name_leafdata());
    if (last_connection_down_age.is_set || is_set(last_connection_down_age.yfilter)) leaf_name_data.push_back(last_connection_down_age.get_name_leafdata());
    if (last_connection_up_age.is_set || is_set(last_connection_up_age.yfilter)) leaf_name_data.push_back(last_connection_up_age.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "first-connection-down-timestamp")
    {
        if(first_connection_down_timestamp == nullptr)
        {
            first_connection_down_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp>();
        }
        return first_connection_down_timestamp;
    }

    if(child_yang_name == "first-connection-up-timestamp")
    {
        if(first_connection_up_timestamp == nullptr)
        {
            first_connection_up_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp>();
        }
        return first_connection_up_timestamp;
    }

    if(child_yang_name == "last-connection-down-timestamp")
    {
        if(last_connection_down_timestamp == nullptr)
        {
            last_connection_down_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp>();
        }
        return last_connection_down_timestamp;
    }

    if(child_yang_name == "last-connection-up-timestamp")
    {
        if(last_connection_up_timestamp == nullptr)
        {
            last_connection_up_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp>();
        }
        return last_connection_up_timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::get_children() const
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "first-connection-down-timestamp" || name == "first-connection-up-timestamp" || name == "last-connection-down-timestamp" || name == "last-connection-up-timestamp" || name == "connection-down-count" || name == "connection-up-count" || name == "is-connection-up" || name == "last-connection-down-age" || name == "last-connection-up-age")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp::FirstConnectionDownTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "first-connection-down-timestamp"; yang_parent_name = "lsd-connection"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp::~FirstConnectionDownTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-connection-down-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp::FirstConnectionUpTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "first-connection-up-timestamp"; yang_parent_name = "lsd-connection"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp::~FirstConnectionUpTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-connection-up-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp::LastConnectionDownTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "last-connection-down-timestamp"; yang_parent_name = "lsd-connection"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp::~LastConnectionDownTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-connection-down-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp::LastConnectionUpTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "last-connection-up-timestamp"; yang_parent_name = "lsd-connection"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp::~LastConnectionUpTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-connection-up-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::PostitCountInfo()
    :
    postit_count{YType::uint32, "postit-count"},
    vrf_name{YType::str, "vrf-name"}
    	,
    neighbor_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "postit-count-info"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::~PostitCountInfo()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::has_data() const
{
    return postit_count.is_set
	|| vrf_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(postit_count.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "postit-count-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (postit_count.is_set || is_set(postit_count.yfilter)) leaf_name_data.push_back(postit_count.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "postit-count" || name == "vrf-name")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::NeighborAddress()
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
    ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress>())
	,l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnVplsAddress>())
{
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;
    l2vpn_mspw_address->parent = this;
    l2vpn_vpls_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "postit-count-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::get_children() const
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "l2vpn-mspw-address" || name == "l2vpn-vpls-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-flowspec-address" || name == "ipv4-label-address" || name == "ipv4-mcast-address" || name == "ipv4-mdt-address" || name == "ipv4-tunnel-address" || name == "ipv4mvpn-address" || name == "ipv4vpn-address" || name == "ipv4vpn-flowspec-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-flowspec-address" || name == "ipv6-label-address" || name == "ipv6-mcast-address" || name == "ipv6mvpn-address" || name == "ipv6vpn-address" || name == "ipv6vpn-flowspec-address" || name == "ipv6vpn-mcast-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "rt-constraint-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::StandbyNsrModeEnterTime::StandbyNsrModeEnterTime()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "standby-nsr-mode-enter-time"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::StandbyNsrModeEnterTime::~StandbyNsrModeEnterTime()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::StandbyNsrModeEnterTime::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::StandbyNsrModeEnterTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::StandbyNsrModeEnterTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby-nsr-mode-enter-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::StandbyNsrModeEnterTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::StandbyNsrModeEnterTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::StandbyNsrModeEnterTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::StandbyNsrModeEnterTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::StandbyNsrModeEnterTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::StandbyNsrModeEnterTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::TeConnection()
    :
    connection_down_count{YType::uint32, "connection-down-count"},
    connection_up_count{YType::uint32, "connection-up-count"},
    is_connection_up{YType::boolean, "is-connection-up"},
    last_connection_down_age{YType::uint32, "last-connection-down-age"},
    last_connection_up_age{YType::uint32, "last-connection-up-age"}
    	,
    first_connection_down_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp>())
	,first_connection_up_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp>())
	,last_connection_down_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp>())
	,last_connection_up_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp>())
{
    first_connection_down_timestamp->parent = this;
    first_connection_up_timestamp->parent = this;
    last_connection_down_timestamp->parent = this;
    last_connection_up_timestamp->parent = this;

    yang_name = "te-connection"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::~TeConnection()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-connection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connection_down_count.is_set || is_set(connection_down_count.yfilter)) leaf_name_data.push_back(connection_down_count.get_name_leafdata());
    if (connection_up_count.is_set || is_set(connection_up_count.yfilter)) leaf_name_data.push_back(connection_up_count.get_name_leafdata());
    if (is_connection_up.is_set || is_set(is_connection_up.yfilter)) leaf_name_data.push_back(is_connection_up.get_name_leafdata());
    if (last_connection_down_age.is_set || is_set(last_connection_down_age.yfilter)) leaf_name_data.push_back(last_connection_down_age.get_name_leafdata());
    if (last_connection_up_age.is_set || is_set(last_connection_up_age.yfilter)) leaf_name_data.push_back(last_connection_up_age.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "first-connection-down-timestamp")
    {
        if(first_connection_down_timestamp == nullptr)
        {
            first_connection_down_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp>();
        }
        return first_connection_down_timestamp;
    }

    if(child_yang_name == "first-connection-up-timestamp")
    {
        if(first_connection_up_timestamp == nullptr)
        {
            first_connection_up_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp>();
        }
        return first_connection_up_timestamp;
    }

    if(child_yang_name == "last-connection-down-timestamp")
    {
        if(last_connection_down_timestamp == nullptr)
        {
            last_connection_down_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp>();
        }
        return last_connection_down_timestamp;
    }

    if(child_yang_name == "last-connection-up-timestamp")
    {
        if(last_connection_up_timestamp == nullptr)
        {
            last_connection_up_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp>();
        }
        return last_connection_up_timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::get_children() const
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "first-connection-down-timestamp" || name == "first-connection-up-timestamp" || name == "last-connection-down-timestamp" || name == "last-connection-up-timestamp" || name == "connection-down-count" || name == "connection-up-count" || name == "is-connection-up" || name == "last-connection-down-age" || name == "last-connection-up-age")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp::FirstConnectionDownTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "first-connection-down-timestamp"; yang_parent_name = "te-connection"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp::~FirstConnectionDownTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-connection-down-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp::FirstConnectionUpTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "first-connection-up-timestamp"; yang_parent_name = "te-connection"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp::~FirstConnectionUpTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-connection-up-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp::LastConnectionDownTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "last-connection-down-timestamp"; yang_parent_name = "te-connection"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp::~LastConnectionDownTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-connection-down-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp::LastConnectionUpTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "last-connection-up-timestamp"; yang_parent_name = "te-connection"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp::~LastConnectionUpTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-connection-up-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Vrf::Vrf()
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

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Vrf::~Vrf()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Vrf::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Vrf::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Vrf::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-bytes-read" || name == "data-bytes-written" || name == "high-throttled-read-count" || name == "inbound-update-messages" || name == "inbound-update-messages-time" || name == "io-read-time" || name == "io-write-time" || name == "low-throttled-read-count" || name == "lpts-calls" || name == "lpts-set-up-time" || name == "read-calls-count" || name == "read-messages-count" || name == "read-throttles-count" || name == "subgroup-list-time" || name == "write-calls-count" || name == "write-queue-calls-count" || name == "write-queue-messages-count" || name == "write-queue-time" || name == "write-subgroup-calls-count" || name == "write-subgroup-messages-count")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Vrf::Vrf()
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

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Vrf::~Vrf()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Vrf::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Vrf::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Vrf::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "established-neighbors-count" || name == "neighbors-count" || name == "network-count" || name == "notifications-received" || name == "notifications-sent" || name == "path-count" || name == "update-messages-received" || name == "update-messages-sent")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Sessions()
{

    yang_name = "sessions"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::~Sessions()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::has_data() const
{
    for (std::size_t index=0; index<session.size(); index++)
    {
        if(session[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::has_operation() const
{
    for (std::size_t index=0; index<session.size(); index++)
    {
        if(session[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session>();
        c->parent = this;
        session.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : session)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::Session()
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
    connection_local_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress>())
	,connection_remote_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress>())
{
    connection_local_address->parent = this;
    connection_remote_address->parent = this;

    yang_name = "session"; yang_parent_name = "sessions"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::~Session()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session" <<"[neighbor-address='" <<neighbor_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "connection-local-address")
    {
        if(connection_local_address == nullptr)
        {
            connection_local_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress>();
        }
        return connection_local_address;
    }

    if(child_yang_name == "connection-remote-address")
    {
        if(connection_remote_address == nullptr)
        {
            connection_remote_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress>();
        }
        return connection_remote_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::get_children() const
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connection-local-address" || name == "connection-remote-address" || name == "neighbor-address" || name == "connection-state" || name == "description" || name == "is-local-address-configured" || name == "local-as" || name == "messages-queued-in" || name == "messages-queued-out" || name == "nsr-enabled" || name == "nsr-state" || name == "postit-pending" || name == "remote-as" || name == "speaker-id" || name == "vrf-name")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::ConnectionLocalAddress()
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
    ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::L2VpnMspwAddress>())
	,l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::L2VpnVplsAddress>())
{
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;
    l2vpn_mspw_address->parent = this;
    l2vpn_vpls_address->parent = this;

    yang_name = "connection-local-address"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::~ConnectionLocalAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connection-local-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::get_children() const
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "l2vpn-mspw-address" || name == "l2vpn-vpls-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-flowspec-address" || name == "ipv4-label-address" || name == "ipv4-mcast-address" || name == "ipv4-mdt-address" || name == "ipv4-tunnel-address" || name == "ipv4mvpn-address" || name == "ipv4vpn-address" || name == "ipv4vpn-flowspec-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-flowspec-address" || name == "ipv6-label-address" || name == "ipv6-mcast-address" || name == "ipv6mvpn-address" || name == "ipv6vpn-address" || name == "ipv6vpn-flowspec-address" || name == "ipv6vpn-mcast-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "rt-constraint-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "connection-local-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "connection-local-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "connection-local-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "connection-local-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionLocalAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::ConnectionRemoteAddress()
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
    ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::L2VpnMspwAddress>())
	,l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::L2VpnVplsAddress>())
{
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;
    l2vpn_mspw_address->parent = this;
    l2vpn_vpls_address->parent = this;

    yang_name = "connection-remote-address"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::~ConnectionRemoteAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connection-remote-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::get_children() const
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "l2vpn-mspw-address" || name == "l2vpn-vpls-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-flowspec-address" || name == "ipv4-label-address" || name == "ipv4-mcast-address" || name == "ipv4-mdt-address" || name == "ipv4-tunnel-address" || name == "ipv4mvpn-address" || name == "ipv4vpn-address" || name == "ipv4vpn-flowspec-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-flowspec-address" || name == "ipv6-label-address" || name == "ipv6-mcast-address" || name == "ipv6mvpn-address" || name == "ipv6vpn-address" || name == "ipv6vpn-flowspec-address" || name == "ipv6vpn-mcast-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "rt-constraint-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "connection-remote-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "connection-remote-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "connection-remote-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "connection-remote-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session::ConnectionRemoteAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbors()
{

    yang_name = "update-inbound-error-neighbors"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::~UpdateInboundErrorNeighbors()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::has_data() const
{
    for (std::size_t index=0; index<update_inbound_error_neighbor.size(); index++)
    {
        if(update_inbound_error_neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::has_operation() const
{
    for (std::size_t index=0; index<update_inbound_error_neighbor.size(); index++)
    {
        if(update_inbound_error_neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-inbound-error-neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor>();
        c->parent = this;
        update_inbound_error_neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : update_inbound_error_neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update-inbound-error-neighbor")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateInboundErrorNeighbor()
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
    first_update_error_handling_reset_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp>())
	,first_update_malformed_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp>())
	,first_update_memory_allocation_fail_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp>())
	,last_error_handling_reset_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp>())
	,last_update_malformed_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp>())
	,last_update_memory_allocation_fail_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp>())
	,update_neighbor_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress>())
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

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::~UpdateInboundErrorNeighbor()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-inbound-error-neighbor" <<"[neighbor-address='" <<neighbor_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount>();
        c->parent = this;
        establishment_action_count.push_back(c);
        return c;
    }

    if(child_yang_name == "first-update-error-handling-reset-timestamp")
    {
        if(first_update_error_handling_reset_timestamp == nullptr)
        {
            first_update_error_handling_reset_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp>();
        }
        return first_update_error_handling_reset_timestamp;
    }

    if(child_yang_name == "first-update-malformed-timestamp")
    {
        if(first_update_malformed_timestamp == nullptr)
        {
            first_update_malformed_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp>();
        }
        return first_update_malformed_timestamp;
    }

    if(child_yang_name == "first-update-memory-allocation-fail-timestamp")
    {
        if(first_update_memory_allocation_fail_timestamp == nullptr)
        {
            first_update_memory_allocation_fail_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp>();
        }
        return first_update_memory_allocation_fail_timestamp;
    }

    if(child_yang_name == "last-error-handling-reset-timestamp")
    {
        if(last_error_handling_reset_timestamp == nullptr)
        {
            last_error_handling_reset_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp>();
        }
        return last_error_handling_reset_timestamp;
    }

    if(child_yang_name == "last-update-malformed-timestamp")
    {
        if(last_update_malformed_timestamp == nullptr)
        {
            last_update_malformed_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp>();
        }
        return last_update_malformed_timestamp;
    }

    if(child_yang_name == "last-update-memory-allocation-fail-timestamp")
    {
        if(last_update_memory_allocation_fail_timestamp == nullptr)
        {
            last_update_memory_allocation_fail_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp>();
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
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage>();
        c->parent = this;
        update_error_message.push_back(c);
        return c;
    }

    if(child_yang_name == "update-neighbor-address")
    {
        if(update_neighbor_address == nullptr)
        {
            update_neighbor_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress>();
        }
        return update_neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::get_children() const
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "establishment-action-count" || name == "first-update-error-handling-reset-timestamp" || name == "first-update-malformed-timestamp" || name == "first-update-memory-allocation-fail-timestamp" || name == "last-error-handling-reset-timestamp" || name == "last-update-malformed-timestamp" || name == "last-update-memory-allocation-fail-timestamp" || name == "update-error-message" || name == "update-neighbor-address" || name == "neighbor-address" || name == "establishment-total-update-message-count" || name == "last-error-handling-reset-age" || name == "last-update-malformed-age" || name == "last-update-memory-allocation-fail-age" || name == "total-update-message-count" || name == "update-attribute-discard-count" || name == "update-error-handling-avoid-reset" || name == "update-error-handling-reset-count" || name == "update-error-message-list-count" || name == "update-malformed-message-count" || name == "update-memory-allocation-fail-count" || name == "update-vrf-name")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount::EstablishmentActionCount()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "establishment-action-count"; yang_parent_name = "update-inbound-error-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount::~EstablishmentActionCount()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "establishment-action-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp::FirstUpdateErrorHandlingResetTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "first-update-error-handling-reset-timestamp"; yang_parent_name = "update-inbound-error-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp::~FirstUpdateErrorHandlingResetTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-update-error-handling-reset-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp::FirstUpdateMalformedTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "first-update-malformed-timestamp"; yang_parent_name = "update-inbound-error-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp::~FirstUpdateMalformedTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-update-malformed-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp::FirstUpdateMemoryAllocationFailTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "first-update-memory-allocation-fail-timestamp"; yang_parent_name = "update-inbound-error-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp::~FirstUpdateMemoryAllocationFailTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-update-memory-allocation-fail-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp::LastErrorHandlingResetTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "last-error-handling-reset-timestamp"; yang_parent_name = "update-inbound-error-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp::~LastErrorHandlingResetTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-error-handling-reset-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp::LastUpdateMalformedTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "last-update-malformed-timestamp"; yang_parent_name = "update-inbound-error-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp::~LastUpdateMalformedTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-malformed-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp::LastUpdateMemoryAllocationFailTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "last-update-memory-allocation-fail-timestamp"; yang_parent_name = "update-inbound-error-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp::~LastUpdateMemoryAllocationFailTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-memory-allocation-fail-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorMessage()
    :
    update_attribute_discard_count{YType::uint32, "update-attribute-discard-count"},
    update_error_final_action{YType::enumeration, "update-error-final-action"},
    update_error_nlri_address_family{YType::enumeration, "update-error-nlri-address-family"},
    update_error_nlri_string{YType::str, "update-error-nlri-string"},
    update_error_nlri_string_truncated{YType::boolean, "update-error-nlri-string-truncated"}
    	,
    update_message_reset_data(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData>())
	,update_message_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp>())
{
    update_message_reset_data->parent = this;
    update_message_timestamp->parent = this;

    yang_name = "update-error-message"; yang_parent_name = "update-inbound-error-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::~UpdateErrorMessage()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-error-message";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_attribute_discard_count.is_set || is_set(update_attribute_discard_count.yfilter)) leaf_name_data.push_back(update_attribute_discard_count.get_name_leafdata());
    if (update_error_final_action.is_set || is_set(update_error_final_action.yfilter)) leaf_name_data.push_back(update_error_final_action.get_name_leafdata());
    if (update_error_nlri_address_family.is_set || is_set(update_error_nlri_address_family.yfilter)) leaf_name_data.push_back(update_error_nlri_address_family.get_name_leafdata());
    if (update_error_nlri_string.is_set || is_set(update_error_nlri_string.yfilter)) leaf_name_data.push_back(update_error_nlri_string.get_name_leafdata());
    if (update_error_nlri_string_truncated.is_set || is_set(update_error_nlri_string_truncated.yfilter)) leaf_name_data.push_back(update_error_nlri_string_truncated.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement>();
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
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData>();
        c->parent = this;
        update_message_data.push_back(c);
        return c;
    }

    if(child_yang_name == "update-message-reset-data")
    {
        if(update_message_reset_data == nullptr)
        {
            update_message_reset_data = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData>();
        }
        return update_message_reset_data;
    }

    if(child_yang_name == "update-message-timestamp")
    {
        if(update_message_timestamp == nullptr)
        {
            update_message_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp>();
        }
        return update_message_timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::get_children() const
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update-error-element" || name == "update-message-data" || name == "update-message-reset-data" || name == "update-message-timestamp" || name == "update-attribute-discard-count" || name == "update-error-final-action" || name == "update-error-nlri-address-family" || name == "update-error-nlri-string" || name == "update-error-nlri-string-truncated")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement::UpdateErrorElement()
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

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement::~UpdateErrorElement()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement::has_data() const
{
    return update_attribute_code.is_set
	|| update_attribute_flags.is_set
	|| update_attribute_length.is_set
	|| update_error_action.is_set
	|| update_error_data.is_set
	|| update_error_data_length.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(update_attribute_code.yfilter)
	|| ydk::is_set(update_attribute_flags.yfilter)
	|| ydk::is_set(update_attribute_length.yfilter)
	|| ydk::is_set(update_error_action.yfilter)
	|| ydk::is_set(update_error_data.yfilter)
	|| ydk::is_set(update_error_data_length.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-error-element";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update-attribute-code" || name == "update-attribute-flags" || name == "update-attribute-length" || name == "update-error-action" || name == "update-error-data" || name == "update-error-data-length")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData::UpdateMessageData()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "update-message-data"; yang_parent_name = "update-error-message"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData::~UpdateMessageData()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-message-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData::UpdateMessageResetData()
    :
    update_error_reset_notification_code{YType::uint8, "update-error-reset-notification-code"},
    update_error_reset_notification_data{YType::str, "update-error-reset-notification-data"},
    update_error_reset_notification_data_length{YType::uint16, "update-error-reset-notification-data-length"},
    update_error_reset_notification_sub_code{YType::uint16, "update-error-reset-notification-sub-code"},
    update_error_reset_reason{YType::enumeration, "update-error-reset-reason"}
{

    yang_name = "update-message-reset-data"; yang_parent_name = "update-error-message"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData::~UpdateMessageResetData()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData::has_data() const
{
    return update_error_reset_notification_code.is_set
	|| update_error_reset_notification_data.is_set
	|| update_error_reset_notification_data_length.is_set
	|| update_error_reset_notification_sub_code.is_set
	|| update_error_reset_reason.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(update_error_reset_notification_code.yfilter)
	|| ydk::is_set(update_error_reset_notification_data.yfilter)
	|| ydk::is_set(update_error_reset_notification_data_length.yfilter)
	|| ydk::is_set(update_error_reset_notification_sub_code.yfilter)
	|| ydk::is_set(update_error_reset_reason.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-message-reset-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_error_reset_notification_code.is_set || is_set(update_error_reset_notification_code.yfilter)) leaf_name_data.push_back(update_error_reset_notification_code.get_name_leafdata());
    if (update_error_reset_notification_data.is_set || is_set(update_error_reset_notification_data.yfilter)) leaf_name_data.push_back(update_error_reset_notification_data.get_name_leafdata());
    if (update_error_reset_notification_data_length.is_set || is_set(update_error_reset_notification_data_length.yfilter)) leaf_name_data.push_back(update_error_reset_notification_data_length.get_name_leafdata());
    if (update_error_reset_notification_sub_code.is_set || is_set(update_error_reset_notification_sub_code.yfilter)) leaf_name_data.push_back(update_error_reset_notification_sub_code.get_name_leafdata());
    if (update_error_reset_reason.is_set || is_set(update_error_reset_reason.yfilter)) leaf_name_data.push_back(update_error_reset_reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update-error-reset-notification-code" || name == "update-error-reset-notification-data" || name == "update-error-reset-notification-data-length" || name == "update-error-reset-notification-sub-code" || name == "update-error-reset-reason")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp::UpdateMessageTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "update-message-timestamp"; yang_parent_name = "update-error-message"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp::~UpdateMessageTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-message-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::UpdateNeighborAddress()
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
    ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress>())
	,l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnVplsAddress>())
{
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;
    l2vpn_mspw_address->parent = this;
    l2vpn_vpls_address->parent = this;

    yang_name = "update-neighbor-address"; yang_parent_name = "update-inbound-error-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::~UpdateNeighborAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::get_children() const
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "l2vpn-mspw-address" || name == "l2vpn-vpls-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-flowspec-address" || name == "ipv4-label-address" || name == "ipv4-mcast-address" || name == "ipv4-mdt-address" || name == "ipv4-tunnel-address" || name == "ipv4mvpn-address" || name == "ipv4vpn-address" || name == "ipv4vpn-flowspec-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-flowspec-address" || name == "ipv6-label-address" || name == "ipv6-mcast-address" || name == "ipv6mvpn-address" || name == "ipv6vpn-address" || name == "ipv6vpn-flowspec-address" || name == "ipv6vpn-mcast-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "rt-constraint-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "update-neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "update-neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "update-neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "update-neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorVrf::UpdateInboundErrorVrf()
    :
    last_update_malformed_age{YType::uint32, "last-update-malformed-age"},
    update_malformed_message_count{YType::uint32, "update-malformed-message-count"},
    update_malformed_neighbor_count{YType::uint32, "update-malformed-neighbor-count"},
    update_vrf_name{YType::str, "update-vrf-name"}
    	,
    last_update_malformed_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp>())
{
    last_update_malformed_timestamp->parent = this;

    yang_name = "update-inbound-error-vrf"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorVrf::~UpdateInboundErrorVrf()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorVrf::has_data() const
{
    return last_update_malformed_age.is_set
	|| update_malformed_message_count.is_set
	|| update_malformed_neighbor_count.is_set
	|| update_vrf_name.is_set
	|| (last_update_malformed_timestamp !=  nullptr && last_update_malformed_timestamp->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorVrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_update_malformed_age.yfilter)
	|| ydk::is_set(update_malformed_message_count.yfilter)
	|| ydk::is_set(update_malformed_neighbor_count.yfilter)
	|| ydk::is_set(update_vrf_name.yfilter)
	|| (last_update_malformed_timestamp !=  nullptr && last_update_malformed_timestamp->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-inbound-error-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_update_malformed_age.is_set || is_set(last_update_malformed_age.yfilter)) leaf_name_data.push_back(last_update_malformed_age.get_name_leafdata());
    if (update_malformed_message_count.is_set || is_set(update_malformed_message_count.yfilter)) leaf_name_data.push_back(update_malformed_message_count.get_name_leafdata());
    if (update_malformed_neighbor_count.is_set || is_set(update_malformed_neighbor_count.yfilter)) leaf_name_data.push_back(update_malformed_neighbor_count.get_name_leafdata());
    if (update_vrf_name.is_set || is_set(update_vrf_name.yfilter)) leaf_name_data.push_back(update_vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-update-malformed-timestamp")
    {
        if(last_update_malformed_timestamp == nullptr)
        {
            last_update_malformed_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp>();
        }
        return last_update_malformed_timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_update_malformed_timestamp != nullptr)
    {
        children["last-update-malformed-timestamp"] = last_update_malformed_timestamp;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorVrf::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-update-malformed-timestamp" || name == "last-update-malformed-age" || name == "update-malformed-message-count" || name == "update-malformed-neighbor-count" || name == "update-vrf-name")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp::LastUpdateMalformedTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "last-update-malformed-timestamp"; yang_parent_name = "update-inbound-error-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp::~LastUpdateMalformedTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-malformed-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbors()
{

    yang_name = "update-inbound-filter-neighbors"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::~UpdateInboundFilterNeighbors()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::has_data() const
{
    for (std::size_t index=0; index<update_inbound_filter_neighbor.size(); index++)
    {
        if(update_inbound_filter_neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::has_operation() const
{
    for (std::size_t index=0; index<update_inbound_filter_neighbor.size(); index++)
    {
        if(update_inbound_filter_neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-inbound-filter-neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor>();
        c->parent = this;
        update_inbound_filter_neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : update_inbound_filter_neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update-inbound-filter-neighbor")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateInboundFilterNeighbor()
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
    first_update_filtered_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp>())
	,last_update_filtered_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp>())
	,update_neighbor_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress>())
{
    first_update_filtered_timestamp->parent = this;
    last_update_filtered_timestamp->parent = this;
    update_neighbor_address->parent = this;

    yang_name = "update-inbound-filter-neighbor"; yang_parent_name = "update-inbound-filter-neighbors"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::~UpdateInboundFilterNeighbor()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-inbound-filter-neighbor" <<"[neighbor-address='" <<neighbor_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "first-update-filtered-timestamp")
    {
        if(first_update_filtered_timestamp == nullptr)
        {
            first_update_filtered_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp>();
        }
        return first_update_filtered_timestamp;
    }

    if(child_yang_name == "last-update-filtered-timestamp")
    {
        if(last_update_filtered_timestamp == nullptr)
        {
            last_update_filtered_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp>();
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
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes>();
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
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage>();
        c->parent = this;
        update_filter_message.push_back(c);
        return c;
    }

    if(child_yang_name == "update-neighbor-address")
    {
        if(update_neighbor_address == nullptr)
        {
            update_neighbor_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress>();
        }
        return update_neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::get_children() const
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "first-update-filtered-timestamp" || name == "last-update-filtered-timestamp" || name == "update-attribute-filter-attributes" || name == "update-filter-message" || name == "update-neighbor-address" || name == "neighbor-address" || name == "configured-update-filter-message-buffer-count" || name == "establishment-total-filter-update-message-count" || name == "establishment-update-filtered-message-count" || name == "last-update-filtered-age" || name == "message-update-attribute-filtering-enabled" || name == "operational-update-attribute-filtering-enabled" || name == "operational-update-filter-message-buffer-count" || name == "total-filter-update-message-count" || name == "update-attribute-filter-group-name" || name == "update-filter-logging-enabled" || name == "update-filter-message-buffer-circular" || name == "update-filter-message-list-count" || name == "update-filtered-message-count" || name == "update-vrf-name")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp::FirstUpdateFilteredTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "first-update-filtered-timestamp"; yang_parent_name = "update-inbound-filter-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp::~FirstUpdateFilteredTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-update-filtered-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp::LastUpdateFilteredTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "last-update-filtered-timestamp"; yang_parent_name = "update-inbound-filter-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp::~LastUpdateFilteredTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-filtered-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::UpdateAttributeFilterAttributes()
    :
    establishment_update_filter_match_count{YType::uint32, "establishment-update-filter-match-count"},
    last_update_filter_match_age{YType::uint32, "last-update-filter-match-age"},
    update_filter_action{YType::enumeration, "update-filter-action"},
    update_filter_match_count{YType::uint32, "update-filter-match-count"},
    update_internal_attribute_code{YType::uint32, "update-internal-attribute-code"}
    	,
    last_update_filter_match_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp>())
{
    last_update_filter_match_timestamp->parent = this;

    yang_name = "update-attribute-filter-attributes"; yang_parent_name = "update-inbound-filter-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::~UpdateAttributeFilterAttributes()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::has_data() const
{
    return establishment_update_filter_match_count.is_set
	|| last_update_filter_match_age.is_set
	|| update_filter_action.is_set
	|| update_filter_match_count.is_set
	|| update_internal_attribute_code.is_set
	|| (last_update_filter_match_timestamp !=  nullptr && last_update_filter_match_timestamp->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(establishment_update_filter_match_count.yfilter)
	|| ydk::is_set(last_update_filter_match_age.yfilter)
	|| ydk::is_set(update_filter_action.yfilter)
	|| ydk::is_set(update_filter_match_count.yfilter)
	|| ydk::is_set(update_internal_attribute_code.yfilter)
	|| (last_update_filter_match_timestamp !=  nullptr && last_update_filter_match_timestamp->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-attribute-filter-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (establishment_update_filter_match_count.is_set || is_set(establishment_update_filter_match_count.yfilter)) leaf_name_data.push_back(establishment_update_filter_match_count.get_name_leafdata());
    if (last_update_filter_match_age.is_set || is_set(last_update_filter_match_age.yfilter)) leaf_name_data.push_back(last_update_filter_match_age.get_name_leafdata());
    if (update_filter_action.is_set || is_set(update_filter_action.yfilter)) leaf_name_data.push_back(update_filter_action.get_name_leafdata());
    if (update_filter_match_count.is_set || is_set(update_filter_match_count.yfilter)) leaf_name_data.push_back(update_filter_match_count.get_name_leafdata());
    if (update_internal_attribute_code.is_set || is_set(update_internal_attribute_code.yfilter)) leaf_name_data.push_back(update_internal_attribute_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-update-filter-match-timestamp")
    {
        if(last_update_filter_match_timestamp == nullptr)
        {
            last_update_filter_match_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp>();
        }
        return last_update_filter_match_timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_update_filter_match_timestamp != nullptr)
    {
        children["last-update-filter-match-timestamp"] = last_update_filter_match_timestamp;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-update-filter-match-timestamp" || name == "establishment-update-filter-match-count" || name == "last-update-filter-match-age" || name == "update-filter-action" || name == "update-filter-match-count" || name == "update-internal-attribute-code")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp::LastUpdateFilterMatchTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "last-update-filter-match-timestamp"; yang_parent_name = "update-attribute-filter-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp::~LastUpdateFilterMatchTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-filter-match-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessage()
    :
    update_filter_final_action{YType::enumeration, "update-filter-final-action"},
    update_filter_nlri_address_family{YType::enumeration, "update-filter-nlri-address-family"},
    update_filter_nlri_string{YType::str, "update-filter-nlri-string"},
    update_filter_nlri_string_truncated{YType::boolean, "update-filter-nlri-string-truncated"},
    update_filtered_attribute_count{YType::uint32, "update-filtered-attribute-count"}
    	,
    update_filter_message_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp>())
{
    update_filter_message_timestamp->parent = this;

    yang_name = "update-filter-message"; yang_parent_name = "update-inbound-filter-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::~UpdateFilterMessage()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-filter-message";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_filter_final_action.is_set || is_set(update_filter_final_action.yfilter)) leaf_name_data.push_back(update_filter_final_action.get_name_leafdata());
    if (update_filter_nlri_address_family.is_set || is_set(update_filter_nlri_address_family.yfilter)) leaf_name_data.push_back(update_filter_nlri_address_family.get_name_leafdata());
    if (update_filter_nlri_string.is_set || is_set(update_filter_nlri_string.yfilter)) leaf_name_data.push_back(update_filter_nlri_string.get_name_leafdata());
    if (update_filter_nlri_string_truncated.is_set || is_set(update_filter_nlri_string_truncated.yfilter)) leaf_name_data.push_back(update_filter_nlri_string_truncated.get_name_leafdata());
    if (update_filtered_attribute_count.is_set || is_set(update_filtered_attribute_count.yfilter)) leaf_name_data.push_back(update_filtered_attribute_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement>();
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
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData>();
        c->parent = this;
        update_filter_message_data.push_back(c);
        return c;
    }

    if(child_yang_name == "update-filter-message-timestamp")
    {
        if(update_filter_message_timestamp == nullptr)
        {
            update_filter_message_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp>();
        }
        return update_filter_message_timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::get_children() const
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update-filter-element" || name == "update-filter-message-data" || name == "update-filter-message-timestamp" || name == "update-filter-final-action" || name == "update-filter-nlri-address-family" || name == "update-filter-nlri-string" || name == "update-filter-nlri-string-truncated" || name == "update-filtered-attribute-count")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement::UpdateFilterElement()
    :
    update_attribute_code{YType::uint8, "update-attribute-code"},
    update_attribute_flags{YType::uint8, "update-attribute-flags"},
    update_filter_action{YType::enumeration, "update-filter-action"}
{

    yang_name = "update-filter-element"; yang_parent_name = "update-filter-message"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement::~UpdateFilterElement()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement::has_data() const
{
    return update_attribute_code.is_set
	|| update_attribute_flags.is_set
	|| update_filter_action.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(update_attribute_code.yfilter)
	|| ydk::is_set(update_attribute_flags.yfilter)
	|| ydk::is_set(update_filter_action.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-filter-element";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_attribute_code.is_set || is_set(update_attribute_code.yfilter)) leaf_name_data.push_back(update_attribute_code.get_name_leafdata());
    if (update_attribute_flags.is_set || is_set(update_attribute_flags.yfilter)) leaf_name_data.push_back(update_attribute_flags.get_name_leafdata());
    if (update_filter_action.is_set || is_set(update_filter_action.yfilter)) leaf_name_data.push_back(update_filter_action.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update-attribute-code" || name == "update-attribute-flags" || name == "update-filter-action")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData::UpdateFilterMessageData()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "update-filter-message-data"; yang_parent_name = "update-filter-message"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData::~UpdateFilterMessageData()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-filter-message-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp::UpdateFilterMessageTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "update-filter-message-timestamp"; yang_parent_name = "update-filter-message"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp::~UpdateFilterMessageTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-filter-message-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::UpdateNeighborAddress()
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
    ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnMspwAddress>())
	,l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnVplsAddress>())
{
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;
    l2vpn_mspw_address->parent = this;
    l2vpn_vpls_address->parent = this;

    yang_name = "update-neighbor-address"; yang_parent_name = "update-inbound-filter-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::~UpdateNeighborAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::get_children() const
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "l2vpn-mspw-address" || name == "l2vpn-vpls-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-flowspec-address" || name == "ipv4-label-address" || name == "ipv4-mcast-address" || name == "ipv4-mdt-address" || name == "ipv4-tunnel-address" || name == "ipv4mvpn-address" || name == "ipv4vpn-address" || name == "ipv4vpn-flowspec-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-flowspec-address" || name == "ipv6-label-address" || name == "ipv6-mcast-address" || name == "ipv6mvpn-address" || name == "ipv6vpn-address" || name == "ipv6vpn-flowspec-address" || name == "ipv6vpn-mcast-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "rt-constraint-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "update-neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "update-neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "update-neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "update-neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::UpdateInboundFilterVrf()
    :
    last_update_filtered_age{YType::uint32, "last-update-filtered-age"},
    update_filtered_message_count{YType::uint32, "update-filtered-message-count"},
    update_filtered_neighbor_count{YType::uint32, "update-filtered-neighbor-count"},
    update_vrf_name{YType::str, "update-vrf-name"}
    	,
    last_update_filtered_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp>())
{
    last_update_filtered_timestamp->parent = this;

    yang_name = "update-inbound-filter-vrf"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::~UpdateInboundFilterVrf()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::has_data() const
{
    return last_update_filtered_age.is_set
	|| update_filtered_message_count.is_set
	|| update_filtered_neighbor_count.is_set
	|| update_vrf_name.is_set
	|| (last_update_filtered_timestamp !=  nullptr && last_update_filtered_timestamp->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_update_filtered_age.yfilter)
	|| ydk::is_set(update_filtered_message_count.yfilter)
	|| ydk::is_set(update_filtered_neighbor_count.yfilter)
	|| ydk::is_set(update_vrf_name.yfilter)
	|| (last_update_filtered_timestamp !=  nullptr && last_update_filtered_timestamp->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-inbound-filter-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_update_filtered_age.is_set || is_set(last_update_filtered_age.yfilter)) leaf_name_data.push_back(last_update_filtered_age.get_name_leafdata());
    if (update_filtered_message_count.is_set || is_set(update_filtered_message_count.yfilter)) leaf_name_data.push_back(update_filtered_message_count.get_name_leafdata());
    if (update_filtered_neighbor_count.is_set || is_set(update_filtered_neighbor_count.yfilter)) leaf_name_data.push_back(update_filtered_neighbor_count.get_name_leafdata());
    if (update_vrf_name.is_set || is_set(update_vrf_name.yfilter)) leaf_name_data.push_back(update_vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-update-filtered-timestamp")
    {
        if(last_update_filtered_timestamp == nullptr)
        {
            last_update_filtered_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp>();
        }
        return last_update_filtered_timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_update_filtered_timestamp != nullptr)
    {
        children["last-update-filtered-timestamp"] = last_update_filtered_timestamp;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-update-filtered-timestamp" || name == "last-update-filtered-age" || name == "update-filtered-message-count" || name == "update-filtered-neighbor-count" || name == "update-vrf-name")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::LastUpdateFilteredTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "last-update-filtered-timestamp"; yang_parent_name = "update-inbound-filter-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::~LastUpdateFilteredTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-filtered-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::RpkiRefreshAfs::RpkiRefreshAfs()
{

    yang_name = "rpki-refresh-afs"; yang_parent_name = "instance-standby"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::RpkiRefreshAfs::~RpkiRefreshAfs()
{
}

bool Bgp::Instances::Instance::InstanceStandby::RpkiRefreshAfs::has_data() const
{
    for (std::size_t index=0; index<rpki_refresh_af.size(); index++)
    {
        if(rpki_refresh_af[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::RpkiRefreshAfs::has_operation() const
{
    for (std::size_t index=0; index<rpki_refresh_af.size(); index++)
    {
        if(rpki_refresh_af[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::RpkiRefreshAfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpki-refresh-afs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::RpkiRefreshAfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::RpkiRefreshAfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpki-refresh-af")
    {
        for(auto const & c : rpki_refresh_af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::RpkiRefreshAfs::RpkiRefreshAf>();
        c->parent = this;
        rpki_refresh_af.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::RpkiRefreshAfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rpki_refresh_af)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::RpkiRefreshAfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::RpkiRefreshAfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::RpkiRefreshAfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpki-refresh-af")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::RpkiRefreshAfs::RpkiRefreshAf::RpkiRefreshAf()
    :
    af_name{YType::enumeration, "af-name"}
{

    yang_name = "rpki-refresh-af"; yang_parent_name = "rpki-refresh-afs"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::RpkiRefreshAfs::RpkiRefreshAf::~RpkiRefreshAf()
{
}

bool Bgp::Instances::Instance::InstanceStandby::RpkiRefreshAfs::RpkiRefreshAf::has_data() const
{
    for (std::size_t index=0; index<refresh_entry.size(); index++)
    {
        if(refresh_entry[index]->has_data())
            return true;
    }
    return af_name.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::RpkiRefreshAfs::RpkiRefreshAf::has_operation() const
{
    for (std::size_t index=0; index<refresh_entry.size(); index++)
    {
        if(refresh_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::RpkiRefreshAfs::RpkiRefreshAf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpki-refresh-af" <<"[af-name='" <<af_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::RpkiRefreshAfs::RpkiRefreshAf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::RpkiRefreshAfs::RpkiRefreshAf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "refresh-entry")
    {
        for(auto const & c : refresh_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::RpkiRefreshAfs::RpkiRefreshAf::RefreshEntry>();
        c->parent = this;
        refresh_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::RpkiRefreshAfs::RpkiRefreshAf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : refresh_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::RpkiRefreshAfs::RpkiRefreshAf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::RpkiRefreshAfs::RpkiRefreshAf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::RpkiRefreshAfs::RpkiRefreshAf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "refresh-entry" || name == "af-name")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::RpkiRefreshAfs::RpkiRefreshAf::RefreshEntry::RefreshEntry()
    :
    af_name{YType::enumeration, "af-name"},
    drop{YType::boolean, "drop"},
    neighbor{YType::str, "neighbor"},
    paths{YType::uint32, "paths"},
    policy{YType::str, "policy"}
{

    yang_name = "refresh-entry"; yang_parent_name = "rpki-refresh-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::RpkiRefreshAfs::RpkiRefreshAf::RefreshEntry::~RefreshEntry()
{
}

bool Bgp::Instances::Instance::InstanceStandby::RpkiRefreshAfs::RpkiRefreshAf::RefreshEntry::has_data() const
{
    return af_name.is_set
	|| drop.is_set
	|| neighbor.is_set
	|| paths.is_set
	|| policy.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::RpkiRefreshAfs::RpkiRefreshAf::RefreshEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(drop.yfilter)
	|| ydk::is_set(neighbor.yfilter)
	|| ydk::is_set(paths.yfilter)
	|| ydk::is_set(policy.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::RpkiRefreshAfs::RpkiRefreshAf::RefreshEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "refresh-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::RpkiRefreshAfs::RpkiRefreshAf::RefreshEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (drop.is_set || is_set(drop.yfilter)) leaf_name_data.push_back(drop.get_name_leafdata());
    if (neighbor.is_set || is_set(neighbor.yfilter)) leaf_name_data.push_back(neighbor.get_name_leafdata());
    if (paths.is_set || is_set(paths.yfilter)) leaf_name_data.push_back(paths.get_name_leafdata());
    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::RpkiRefreshAfs::RpkiRefreshAf::RefreshEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::RpkiRefreshAfs::RpkiRefreshAf::RefreshEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::RpkiRefreshAfs::RpkiRefreshAf::RefreshEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop")
    {
        drop = value;
        drop.value_namespace = name_space;
        drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor")
    {
        neighbor = value;
        neighbor.value_namespace = name_space;
        neighbor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths")
    {
        paths = value;
        paths.value_namespace = name_space;
        paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::RpkiRefreshAfs::RpkiRefreshAf::RefreshEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "drop")
    {
        drop.yfilter = yfilter;
    }
    if(value_path == "neighbor")
    {
        neighbor.yfilter = yfilter;
    }
    if(value_path == "paths")
    {
        paths.yfilter = yfilter;
    }
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::RpkiRefreshAfs::RpkiRefreshAf::RefreshEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "drop" || name == "neighbor" || name == "paths" || name == "policy")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoutes()
{

    yang_name = "rpki-routes"; yang_parent_name = "instance-standby"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::~RpkiRoutes()
{
}

bool Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::has_data() const
{
    for (std::size_t index=0; index<rpki_route.size(); index++)
    {
        if(rpki_route[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::has_operation() const
{
    for (std::size_t index=0; index<rpki_route.size(); index++)
    {
        if(rpki_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpki-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpki-route")
    {
        for(auto const & c : rpki_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute>();
        c->parent = this;
        rpki_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rpki_route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpki-route")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute::RpkiRoute()
    :
    address{YType::str, "address"},
    af_name{YType::enumeration, "af-name"},
    maximum{YType::int32, "maximum"},
    minimum{YType::int32, "minimum"}
{

    yang_name = "rpki-route"; yang_parent_name = "rpki-routes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute::~RpkiRoute()
{
}

bool Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute::has_data() const
{
    for (std::size_t index=0; index<rpki_route.size(); index++)
    {
        if(rpki_route[index]->has_data())
            return true;
    }
    return address.is_set
	|| af_name.is_set
	|| maximum.is_set
	|| minimum.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute::has_operation() const
{
    for (std::size_t index=0; index<rpki_route.size(); index++)
    {
        if(rpki_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpki-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpki-route")
    {
        for(auto const & c : rpki_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute::RpkiRoute_>();
        c->parent = this;
        rpki_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rpki_route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::RpkiRoutes::RpkiRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpki-route" || name == "address" || name == "af-name" || name == "maximum" || name == "minimum")
        return true;
    return false;
}


}
}

