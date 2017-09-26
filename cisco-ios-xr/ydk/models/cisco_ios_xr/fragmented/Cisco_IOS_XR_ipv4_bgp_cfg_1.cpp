
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_cfg_1.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_cfg_2.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_bgp_cfg {

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::MaximumPrefixes::MaximumPrefixes()
    :
    discard_extra_paths{YType::boolean, "discard-extra-paths"},
    prefix_limit{YType::uint32, "prefix-limit"},
    restart_time{YType::uint32, "restart-time"},
    warning_only{YType::boolean, "warning-only"},
    warning_percentage{YType::uint32, "warning-percentage"}
{

    yang_name = "maximum-prefixes"; yang_parent_name = "neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::MaximumPrefixes::~MaximumPrefixes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::MaximumPrefixes::has_data() const
{
    return discard_extra_paths.is_set
	|| prefix_limit.is_set
	|| restart_time.is_set
	|| warning_only.is_set
	|| warning_percentage.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::MaximumPrefixes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(discard_extra_paths.yfilter)
	|| ydk::is_set(prefix_limit.yfilter)
	|| ydk::is_set(restart_time.yfilter)
	|| ydk::is_set(warning_only.yfilter)
	|| ydk::is_set(warning_percentage.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::MaximumPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::MaximumPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discard_extra_paths.is_set || is_set(discard_extra_paths.yfilter)) leaf_name_data.push_back(discard_extra_paths.get_name_leafdata());
    if (prefix_limit.is_set || is_set(prefix_limit.yfilter)) leaf_name_data.push_back(prefix_limit.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.yfilter)) leaf_name_data.push_back(restart_time.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.yfilter)) leaf_name_data.push_back(warning_only.get_name_leafdata());
    if (warning_percentage.is_set || is_set(warning_percentage.yfilter)) leaf_name_data.push_back(warning_percentage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::MaximumPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::MaximumPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::MaximumPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "discard-extra-paths")
    {
        discard_extra_paths = value;
        discard_extra_paths.value_namespace = name_space;
        discard_extra_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-limit")
    {
        prefix_limit = value;
        prefix_limit.value_namespace = name_space;
        prefix_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-time")
    {
        restart_time = value;
        restart_time.value_namespace = name_space;
        restart_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
        warning_only.value_namespace = name_space;
        warning_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-percentage")
    {
        warning_percentage = value;
        warning_percentage.value_namespace = name_space;
        warning_percentage.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::MaximumPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "discard-extra-paths")
    {
        discard_extra_paths.yfilter = yfilter;
    }
    if(value_path == "prefix-limit")
    {
        prefix_limit.yfilter = yfilter;
    }
    if(value_path == "restart-time")
    {
        restart_time.yfilter = yfilter;
    }
    if(value_path == "warning-only")
    {
        warning_only.yfilter = yfilter;
    }
    if(value_path == "warning-percentage")
    {
        warning_percentage.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::MaximumPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discard-extra-paths" || name == "prefix-limit" || name == "restart-time" || name == "warning-only" || name == "warning-percentage")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::NeighborAfLongLivedGracefulRestartStaleTime()
    :
    stale_time_accept{YType::uint32, "stale-time-accept"},
    stale_time_send{YType::uint32, "stale-time-send"}
{

    yang_name = "neighbor-af-long-lived-graceful-restart-stale-time"; yang_parent_name = "neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::~NeighborAfLongLivedGracefulRestartStaleTime()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::has_data() const
{
    return stale_time_accept.is_set
	|| stale_time_send.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stale_time_accept.yfilter)
	|| ydk::is_set(stale_time_send.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-af-long-lived-graceful-restart-stale-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stale_time_accept.is_set || is_set(stale_time_accept.yfilter)) leaf_name_data.push_back(stale_time_accept.get_name_leafdata());
    if (stale_time_send.is_set || is_set(stale_time_send.yfilter)) leaf_name_data.push_back(stale_time_send.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stale-time-accept")
    {
        stale_time_accept = value;
        stale_time_accept.value_namespace = name_space;
        stale_time_accept.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stale-time-send")
    {
        stale_time_send = value;
        stale_time_send.value_namespace = name_space;
        stale_time_send.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stale-time-accept")
    {
        stale_time_accept.yfilter = yfilter;
    }
    if(value_path == "stale-time-send")
    {
        stale_time_send.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stale-time-accept" || name == "stale-time-send")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPath::RemovePrivateAsEntireAsPath()
    :
    enable{YType::boolean, "enable"},
    entire{YType::boolean, "entire"}
{

    yang_name = "remove-private-as-entire-as-path"; yang_parent_name = "neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPath::~RemovePrivateAsEntireAsPath()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPath::has_data() const
{
    return enable.is_set
	|| entire.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(entire.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remove-private-as-entire-as-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (entire.is_set || is_set(entire.yfilter)) leaf_name_data.push_back(entire.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entire")
    {
        entire = value;
        entire.value_namespace = name_space;
        entire.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "entire")
    {
        entire.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "entire")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound::RemovePrivateAsEntireAsPathInbound()
    :
    enable{YType::boolean, "enable"},
    entire{YType::boolean, "entire"}
{

    yang_name = "remove-private-as-entire-as-path-inbound"; yang_parent_name = "neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound::~RemovePrivateAsEntireAsPathInbound()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound::has_data() const
{
    return enable.is_set
	|| entire.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(entire.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remove-private-as-entire-as-path-inbound";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (entire.is_set || is_set(entire.yfilter)) leaf_name_data.push_back(entire.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entire")
    {
        entire = value;
        entire.value_namespace = name_space;
        entire.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "entire")
    {
        entire.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "entire")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::SoftReconfiguration::SoftReconfiguration()
    :
    inbound_soft{YType::boolean, "inbound-soft"},
    soft_always{YType::boolean, "soft-always"}
{

    yang_name = "soft-reconfiguration"; yang_parent_name = "neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::SoftReconfiguration::~SoftReconfiguration()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::SoftReconfiguration::has_data() const
{
    return inbound_soft.is_set
	|| soft_always.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::SoftReconfiguration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inbound_soft.yfilter)
	|| ydk::is_set(soft_always.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::SoftReconfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soft-reconfiguration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::SoftReconfiguration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inbound_soft.is_set || is_set(inbound_soft.yfilter)) leaf_name_data.push_back(inbound_soft.get_name_leafdata());
    if (soft_always.is_set || is_set(soft_always.yfilter)) leaf_name_data.push_back(soft_always.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::SoftReconfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::SoftReconfiguration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::SoftReconfiguration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inbound-soft")
    {
        inbound_soft = value;
        inbound_soft.value_namespace = name_space;
        inbound_soft.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-always")
    {
        soft_always = value;
        soft_always.value_namespace = name_space;
        soft_always.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::SoftReconfiguration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inbound-soft")
    {
        inbound_soft.yfilter = yfilter;
    }
    if(value_path == "soft-always")
    {
        soft_always.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::SoftReconfiguration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inbound-soft" || name == "soft-always")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborClusterId::NeighborClusterId()
    :
    cluster_id_address{YType::str, "cluster-id-address"},
    cluster_id_number{YType::uint32, "cluster-id-number"}
{

    yang_name = "neighbor-cluster-id"; yang_parent_name = "neighbor-prefix-length"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborClusterId::~NeighborClusterId()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborClusterId::has_data() const
{
    return cluster_id_address.is_set
	|| cluster_id_number.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborClusterId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cluster_id_address.yfilter)
	|| ydk::is_set(cluster_id_number.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborClusterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-cluster-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborClusterId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cluster_id_address.is_set || is_set(cluster_id_address.yfilter)) leaf_name_data.push_back(cluster_id_address.get_name_leafdata());
    if (cluster_id_number.is_set || is_set(cluster_id_number.yfilter)) leaf_name_data.push_back(cluster_id_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborClusterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborClusterId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborClusterId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cluster-id-address")
    {
        cluster_id_address = value;
        cluster_id_address.value_namespace = name_space;
        cluster_id_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster-id-number")
    {
        cluster_id_number = value;
        cluster_id_number.value_namespace = name_space;
        cluster_id_number.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborClusterId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cluster-id-address")
    {
        cluster_id_address.yfilter = yfilter;
    }
    if(value_path == "cluster-id-number")
    {
        cluster_id_number.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborClusterId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cluster-id-address" || name == "cluster-id-number")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Password::Password()
    :
    password{YType::str, "password"},
    password_disable{YType::boolean, "password-disable"}
{

    yang_name = "password"; yang_parent_name = "neighbor-prefix-length"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Password::~Password()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Password::has_data() const
{
    return password.is_set
	|| password_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(password_disable.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (password_disable.is_set || is_set(password_disable.yfilter)) leaf_name_data.push_back(password_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password-disable")
    {
        password_disable = value;
        password_disable.value_namespace = name_space;
        password_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "password-disable")
    {
        password_disable.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "password-disable")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::ReceiveBufferSize::ReceiveBufferSize()
    :
    bgp_receive_size{YType::uint32, "bgp-receive-size"},
    socket_receive_size{YType::uint32, "socket-receive-size"}
{

    yang_name = "receive-buffer-size"; yang_parent_name = "neighbor-prefix-length"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::ReceiveBufferSize::~ReceiveBufferSize()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::ReceiveBufferSize::has_data() const
{
    return bgp_receive_size.is_set
	|| socket_receive_size.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::ReceiveBufferSize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bgp_receive_size.yfilter)
	|| ydk::is_set(socket_receive_size.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::ReceiveBufferSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-buffer-size";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::ReceiveBufferSize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp_receive_size.is_set || is_set(bgp_receive_size.yfilter)) leaf_name_data.push_back(bgp_receive_size.get_name_leafdata());
    if (socket_receive_size.is_set || is_set(socket_receive_size.yfilter)) leaf_name_data.push_back(socket_receive_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::ReceiveBufferSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::ReceiveBufferSize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::ReceiveBufferSize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bgp-receive-size")
    {
        bgp_receive_size = value;
        bgp_receive_size.value_namespace = name_space;
        bgp_receive_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "socket-receive-size")
    {
        socket_receive_size = value;
        socket_receive_size.value_namespace = name_space;
        socket_receive_size.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::ReceiveBufferSize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bgp-receive-size")
    {
        bgp_receive_size.yfilter = yfilter;
    }
    if(value_path == "socket-receive-size")
    {
        socket_receive_size.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::ReceiveBufferSize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-receive-size" || name == "socket-receive-size")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::RemoteAs::RemoteAs()
    :
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"}
{

    yang_name = "remote-as"; yang_parent_name = "neighbor-prefix-length"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::RemoteAs::~RemoteAs()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::RemoteAs::has_data() const
{
    return as_xx.is_set
	|| as_yy.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::RemoteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(as_yy.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::RemoteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::RemoteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.yfilter)) leaf_name_data.push_back(as_yy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::RemoteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::RemoteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::RemoteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
        as_xx.value_namespace = name_space;
        as_xx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-yy")
    {
        as_yy = value;
        as_yy.value_namespace = name_space;
        as_yy.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::RemoteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-xx")
    {
        as_xx.yfilter = yfilter;
    }
    if(value_path == "as-yy")
    {
        as_yy.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::RemoteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-xx" || name == "as-yy")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::SendBufferSize::SendBufferSize()
    :
    bgp_send_size{YType::uint32, "bgp-send-size"},
    socket_send_size{YType::uint32, "socket-send-size"}
{

    yang_name = "send-buffer-size"; yang_parent_name = "neighbor-prefix-length"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::SendBufferSize::~SendBufferSize()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::SendBufferSize::has_data() const
{
    return bgp_send_size.is_set
	|| socket_send_size.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::SendBufferSize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bgp_send_size.yfilter)
	|| ydk::is_set(socket_send_size.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::SendBufferSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-buffer-size";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::SendBufferSize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp_send_size.is_set || is_set(bgp_send_size.yfilter)) leaf_name_data.push_back(bgp_send_size.get_name_leafdata());
    if (socket_send_size.is_set || is_set(socket_send_size.yfilter)) leaf_name_data.push_back(socket_send_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::SendBufferSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::SendBufferSize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::SendBufferSize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bgp-send-size")
    {
        bgp_send_size = value;
        bgp_send_size.value_namespace = name_space;
        bgp_send_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "socket-send-size")
    {
        socket_send_size = value;
        socket_send_size.value_namespace = name_space;
        socket_send_size.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::SendBufferSize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bgp-send-size")
    {
        bgp_send_size.yfilter = yfilter;
    }
    if(value_path == "socket-send-size")
    {
        socket_send_size.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::SendBufferSize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-send-size" || name == "socket-send-size")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Tcpmss::Tcpmss()
    :
    mss{YType::uint32, "mss"},
    tcpmss_disable{YType::boolean, "tcpmss-disable"}
{

    yang_name = "tcpmss"; yang_parent_name = "neighbor-prefix-length"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Tcpmss::~Tcpmss()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Tcpmss::has_data() const
{
    return mss.is_set
	|| tcpmss_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Tcpmss::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mss.yfilter)
	|| ydk::is_set(tcpmss_disable.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Tcpmss::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcpmss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Tcpmss::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mss.is_set || is_set(mss.yfilter)) leaf_name_data.push_back(mss.get_name_leafdata());
    if (tcpmss_disable.is_set || is_set(tcpmss_disable.yfilter)) leaf_name_data.push_back(tcpmss_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Tcpmss::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Tcpmss::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Tcpmss::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mss")
    {
        mss = value;
        mss.value_namespace = name_space;
        mss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpmss-disable")
    {
        tcpmss_disable = value;
        tcpmss_disable.value_namespace = name_space;
        tcpmss_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Tcpmss::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mss")
    {
        mss.yfilter = yfilter;
    }
    if(value_path == "tcpmss-disable")
    {
        tcpmss_disable.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Tcpmss::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mss" || name == "tcpmss-disable")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Timers::Timers()
    :
    hold_time{YType::uint32, "hold-time"},
    keepalive_interval{YType::uint32, "keepalive-interval"},
    min_accept_hold_time{YType::uint32, "min-accept-hold-time"}
{

    yang_name = "timers"; yang_parent_name = "neighbor-prefix-length"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Timers::~Timers()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Timers::has_data() const
{
    return hold_time.is_set
	|| keepalive_interval.is_set
	|| min_accept_hold_time.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| ydk::is_set(keepalive_interval.yfilter)
	|| ydk::is_set(min_accept_hold_time.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (keepalive_interval.is_set || is_set(keepalive_interval.yfilter)) leaf_name_data.push_back(keepalive_interval.get_name_leafdata());
    if (min_accept_hold_time.is_set || is_set(min_accept_hold_time.yfilter)) leaf_name_data.push_back(min_accept_hold_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalive-interval")
    {
        keepalive_interval = value;
        keepalive_interval.value_namespace = name_space;
        keepalive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-accept-hold-time")
    {
        min_accept_hold_time = value;
        min_accept_hold_time.value_namespace = name_space;
        min_accept_hold_time.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
    if(value_path == "keepalive-interval")
    {
        keepalive_interval.yfilter = yfilter;
    }
    if(value_path == "min-accept-hold-time")
    {
        min_accept_hold_time.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hold-time" || name == "keepalive-interval" || name == "min-accept-hold-time")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Tos::Tos()
    :
    type{YType::enumeration, "type"},
    value_{YType::str, "value"}
{

    yang_name = "tos"; yang_parent_name = "neighbor-prefix-length"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Tos::~Tos()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Tos::has_data() const
{
    return type.is_set
	|| value_.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Tos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Tos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Tos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Tos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Tos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Tos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Tos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Tos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "value")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::UpdateInFiltering::UpdateInFiltering()
    :
    enable{YType::empty, "enable"},
    update_in_filtering_attribute_filter_group{YType::str, "update-in-filtering-attribute-filter-group"},
    update_in_filtering_syslog_disable{YType::empty, "update-in-filtering-syslog-disable"}
    	,
    update_in_filtering_message_buffers(nullptr) // presence node
{

    yang_name = "update-in-filtering"; yang_parent_name = "neighbor-prefix-length"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::UpdateInFiltering::~UpdateInFiltering()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::UpdateInFiltering::has_data() const
{
    return enable.is_set
	|| update_in_filtering_attribute_filter_group.is_set
	|| update_in_filtering_syslog_disable.is_set
	|| (update_in_filtering_message_buffers !=  nullptr && update_in_filtering_message_buffers->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::UpdateInFiltering::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(update_in_filtering_attribute_filter_group.yfilter)
	|| ydk::is_set(update_in_filtering_syslog_disable.yfilter)
	|| (update_in_filtering_message_buffers !=  nullptr && update_in_filtering_message_buffers->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::UpdateInFiltering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-in-filtering";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::UpdateInFiltering::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (update_in_filtering_attribute_filter_group.is_set || is_set(update_in_filtering_attribute_filter_group.yfilter)) leaf_name_data.push_back(update_in_filtering_attribute_filter_group.get_name_leafdata());
    if (update_in_filtering_syslog_disable.is_set || is_set(update_in_filtering_syslog_disable.yfilter)) leaf_name_data.push_back(update_in_filtering_syslog_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::UpdateInFiltering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "update-in-filtering-message-buffers")
    {
        if(update_in_filtering_message_buffers == nullptr)
        {
            update_in_filtering_message_buffers = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers>();
        }
        return update_in_filtering_message_buffers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::UpdateInFiltering::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(update_in_filtering_message_buffers != nullptr)
    {
        children["update-in-filtering-message-buffers"] = update_in_filtering_message_buffers;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::UpdateInFiltering::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-in-filtering-attribute-filter-group")
    {
        update_in_filtering_attribute_filter_group = value;
        update_in_filtering_attribute_filter_group.value_namespace = name_space;
        update_in_filtering_attribute_filter_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-in-filtering-syslog-disable")
    {
        update_in_filtering_syslog_disable = value;
        update_in_filtering_syslog_disable.value_namespace = name_space;
        update_in_filtering_syslog_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::UpdateInFiltering::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "update-in-filtering-attribute-filter-group")
    {
        update_in_filtering_attribute_filter_group.yfilter = yfilter;
    }
    if(value_path == "update-in-filtering-syslog-disable")
    {
        update_in_filtering_syslog_disable.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::UpdateInFiltering::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update-in-filtering-message-buffers" || name == "enable" || name == "update-in-filtering-attribute-filter-group" || name == "update-in-filtering-syslog-disable")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers::UpdateInFilteringMessageBuffers()
    :
    non_circular_buffer{YType::boolean, "non-circular-buffer"},
    number_of_buffers{YType::uint32, "number-of-buffers"}
{

    yang_name = "update-in-filtering-message-buffers"; yang_parent_name = "update-in-filtering"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers::~UpdateInFilteringMessageBuffers()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers::has_data() const
{
    return non_circular_buffer.is_set
	|| number_of_buffers.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(non_circular_buffer.yfilter)
	|| ydk::is_set(number_of_buffers.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-in-filtering-message-buffers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_circular_buffer.is_set || is_set(non_circular_buffer.yfilter)) leaf_name_data.push_back(non_circular_buffer.get_name_leafdata());
    if (number_of_buffers.is_set || is_set(number_of_buffers.yfilter)) leaf_name_data.push_back(number_of_buffers.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "non-circular-buffer")
    {
        non_circular_buffer = value;
        non_circular_buffer.value_namespace = name_space;
        non_circular_buffer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-buffers")
    {
        number_of_buffers = value;
        number_of_buffers.value_namespace = name_space;
        number_of_buffers.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "non-circular-buffer")
    {
        non_circular_buffer.yfilter = yfilter;
    }
    if(value_path == "number-of-buffers")
    {
        number_of_buffers.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "non-circular-buffer" || name == "number-of-buffers")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroups()
{

    yang_name = "session-groups"; yang_parent_name = "bgp-entity"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::~SessionGroups()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::has_data() const
{
    for (std::size_t index=0; index<session_group.size(); index++)
    {
        if(session_group[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::has_operation() const
{
    for (std::size_t index=0; index<session_group.size(); index++)
    {
        if(session_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-group")
    {
        for(auto const & c : session_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup>();
        c->parent = this;
        session_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : session_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-group")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::SessionGroup()
    :
    session_group_name{YType::str, "session-group-name"},
    additional_paths_receive_capability{YType::enumeration, "additional-paths-receive-capability"},
    additional_paths_send_capability{YType::enumeration, "additional-paths-send-capability"},
    bfd_enable_modes{YType::enumeration, "bfd-enable-modes"},
    bfd_minimum_interval{YType::uint32, "bfd-minimum-interval"},
    bfd_multiplier{YType::uint32, "bfd-multiplier"},
    create{YType::empty, "create"},
    description{YType::str, "description"},
    ebgp_recv_dmz{YType::boolean, "ebgp-recv-dmz"},
    ebgp_send_dmz_enable_modes{YType::enumeration, "ebgp-send-dmz-enable-modes"},
    egress_peer_engineering{YType::boolean, "egress-peer-engineering"},
    enforce_first_as{YType::boolean, "enforce-first-as"},
    idle_watch_time{YType::uint32, "idle-watch-time"},
    ignore_connected_check_ebgp{YType::boolean, "ignore-connected-check-ebgp"},
    internal_vpn_client_ibgp_ce{YType::boolean, "internal-vpn-client-ibgp-ce"},
    max_peers{YType::uint32, "max-peers"},
    neighbor_graceful_restart{YType::boolean, "neighbor-graceful-restart"},
    neighbor_graceful_restart_stalepath_time{YType::uint32, "neighbor-graceful-restart-stalepath-time"},
    neighbor_graceful_restart_time{YType::uint32, "neighbor-graceful-restart-time"},
    propagate_dmz_link_bandwidth{YType::boolean, "propagate-dmz-link-bandwidth"},
    remote_as_list{YType::str, "remote-as-list"},
    rpki_bestpath_origin_as_allow_invalid{YType::empty, "rpki-bestpath-origin-as-allow-invalid"},
    rpki_origin_as_validation_disable{YType::empty, "rpki-origin-as-validation-disable"},
    session_group_add_member{YType::str, "session-group-add-member"},
    session_open_mode{YType::enumeration, "session-open-mode"},
    shutdown{YType::boolean, "shutdown"},
    suppress_all_capabilities{YType::boolean, "suppress-all-capabilities"},
    suppress_four_byte_as_capability{YType::boolean, "suppress-four-byte-as-capability"},
    ttl_security{YType::boolean, "ttl-security"},
    update_source_interface{YType::str, "update-source-interface"}
    	,
    advertisement_interval(nullptr) // presence node
	,bmp_activates(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates>())
	,ebgp_multihop(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::EbgpMultihop>())
	,graceful_maintenance(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance>())
	,keychain(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Keychain>())
	,local_address(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAddress>())
	,local_as(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAs>())
	,msg_log_in(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogIn>())
	,msg_log_out(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogOut>())
	,neighbor_cluster_id(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::NeighborClusterId>())
	,password(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Password>())
	,receive_buffer_size(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::ReceiveBufferSize>())
	,remote_as(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::RemoteAs>())
	,send_buffer_size(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::SendBufferSize>())
	,tcpmss(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tcpmss>())
	,timers(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Timers>())
	,tos(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tos>())
	,update_in_filtering(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering>())
{
    bmp_activates->parent = this;
    ebgp_multihop->parent = this;
    graceful_maintenance->parent = this;
    keychain->parent = this;
    local_address->parent = this;
    local_as->parent = this;
    msg_log_in->parent = this;
    msg_log_out->parent = this;
    neighbor_cluster_id->parent = this;
    password->parent = this;
    receive_buffer_size->parent = this;
    remote_as->parent = this;
    send_buffer_size->parent = this;
    tcpmss->parent = this;
    timers->parent = this;
    tos->parent = this;
    update_in_filtering->parent = this;

    yang_name = "session-group"; yang_parent_name = "session-groups"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::~SessionGroup()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::has_data() const
{
    return session_group_name.is_set
	|| additional_paths_receive_capability.is_set
	|| additional_paths_send_capability.is_set
	|| bfd_enable_modes.is_set
	|| bfd_minimum_interval.is_set
	|| bfd_multiplier.is_set
	|| create.is_set
	|| description.is_set
	|| ebgp_recv_dmz.is_set
	|| ebgp_send_dmz_enable_modes.is_set
	|| egress_peer_engineering.is_set
	|| enforce_first_as.is_set
	|| idle_watch_time.is_set
	|| ignore_connected_check_ebgp.is_set
	|| internal_vpn_client_ibgp_ce.is_set
	|| max_peers.is_set
	|| neighbor_graceful_restart.is_set
	|| neighbor_graceful_restart_stalepath_time.is_set
	|| neighbor_graceful_restart_time.is_set
	|| propagate_dmz_link_bandwidth.is_set
	|| remote_as_list.is_set
	|| rpki_bestpath_origin_as_allow_invalid.is_set
	|| rpki_origin_as_validation_disable.is_set
	|| session_group_add_member.is_set
	|| session_open_mode.is_set
	|| shutdown.is_set
	|| suppress_all_capabilities.is_set
	|| suppress_four_byte_as_capability.is_set
	|| ttl_security.is_set
	|| update_source_interface.is_set
	|| (advertisement_interval !=  nullptr && advertisement_interval->has_data())
	|| (bmp_activates !=  nullptr && bmp_activates->has_data())
	|| (ebgp_multihop !=  nullptr && ebgp_multihop->has_data())
	|| (graceful_maintenance !=  nullptr && graceful_maintenance->has_data())
	|| (keychain !=  nullptr && keychain->has_data())
	|| (local_address !=  nullptr && local_address->has_data())
	|| (local_as !=  nullptr && local_as->has_data())
	|| (msg_log_in !=  nullptr && msg_log_in->has_data())
	|| (msg_log_out !=  nullptr && msg_log_out->has_data())
	|| (neighbor_cluster_id !=  nullptr && neighbor_cluster_id->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (receive_buffer_size !=  nullptr && receive_buffer_size->has_data())
	|| (remote_as !=  nullptr && remote_as->has_data())
	|| (send_buffer_size !=  nullptr && send_buffer_size->has_data())
	|| (tcpmss !=  nullptr && tcpmss->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (tos !=  nullptr && tos->has_data())
	|| (update_in_filtering !=  nullptr && update_in_filtering->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_group_name.yfilter)
	|| ydk::is_set(additional_paths_receive_capability.yfilter)
	|| ydk::is_set(additional_paths_send_capability.yfilter)
	|| ydk::is_set(bfd_enable_modes.yfilter)
	|| ydk::is_set(bfd_minimum_interval.yfilter)
	|| ydk::is_set(bfd_multiplier.yfilter)
	|| ydk::is_set(create.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(ebgp_recv_dmz.yfilter)
	|| ydk::is_set(ebgp_send_dmz_enable_modes.yfilter)
	|| ydk::is_set(egress_peer_engineering.yfilter)
	|| ydk::is_set(enforce_first_as.yfilter)
	|| ydk::is_set(idle_watch_time.yfilter)
	|| ydk::is_set(ignore_connected_check_ebgp.yfilter)
	|| ydk::is_set(internal_vpn_client_ibgp_ce.yfilter)
	|| ydk::is_set(max_peers.yfilter)
	|| ydk::is_set(neighbor_graceful_restart.yfilter)
	|| ydk::is_set(neighbor_graceful_restart_stalepath_time.yfilter)
	|| ydk::is_set(neighbor_graceful_restart_time.yfilter)
	|| ydk::is_set(propagate_dmz_link_bandwidth.yfilter)
	|| ydk::is_set(remote_as_list.yfilter)
	|| ydk::is_set(rpki_bestpath_origin_as_allow_invalid.yfilter)
	|| ydk::is_set(rpki_origin_as_validation_disable.yfilter)
	|| ydk::is_set(session_group_add_member.yfilter)
	|| ydk::is_set(session_open_mode.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(suppress_all_capabilities.yfilter)
	|| ydk::is_set(suppress_four_byte_as_capability.yfilter)
	|| ydk::is_set(ttl_security.yfilter)
	|| ydk::is_set(update_source_interface.yfilter)
	|| (advertisement_interval !=  nullptr && advertisement_interval->has_operation())
	|| (bmp_activates !=  nullptr && bmp_activates->has_operation())
	|| (ebgp_multihop !=  nullptr && ebgp_multihop->has_operation())
	|| (graceful_maintenance !=  nullptr && graceful_maintenance->has_operation())
	|| (keychain !=  nullptr && keychain->has_operation())
	|| (local_address !=  nullptr && local_address->has_operation())
	|| (local_as !=  nullptr && local_as->has_operation())
	|| (msg_log_in !=  nullptr && msg_log_in->has_operation())
	|| (msg_log_out !=  nullptr && msg_log_out->has_operation())
	|| (neighbor_cluster_id !=  nullptr && neighbor_cluster_id->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (receive_buffer_size !=  nullptr && receive_buffer_size->has_operation())
	|| (remote_as !=  nullptr && remote_as->has_operation())
	|| (send_buffer_size !=  nullptr && send_buffer_size->has_operation())
	|| (tcpmss !=  nullptr && tcpmss->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (tos !=  nullptr && tos->has_operation())
	|| (update_in_filtering !=  nullptr && update_in_filtering->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-group" <<"[session-group-name='" <<session_group_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_group_name.is_set || is_set(session_group_name.yfilter)) leaf_name_data.push_back(session_group_name.get_name_leafdata());
    if (additional_paths_receive_capability.is_set || is_set(additional_paths_receive_capability.yfilter)) leaf_name_data.push_back(additional_paths_receive_capability.get_name_leafdata());
    if (additional_paths_send_capability.is_set || is_set(additional_paths_send_capability.yfilter)) leaf_name_data.push_back(additional_paths_send_capability.get_name_leafdata());
    if (bfd_enable_modes.is_set || is_set(bfd_enable_modes.yfilter)) leaf_name_data.push_back(bfd_enable_modes.get_name_leafdata());
    if (bfd_minimum_interval.is_set || is_set(bfd_minimum_interval.yfilter)) leaf_name_data.push_back(bfd_minimum_interval.get_name_leafdata());
    if (bfd_multiplier.is_set || is_set(bfd_multiplier.yfilter)) leaf_name_data.push_back(bfd_multiplier.get_name_leafdata());
    if (create.is_set || is_set(create.yfilter)) leaf_name_data.push_back(create.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (ebgp_recv_dmz.is_set || is_set(ebgp_recv_dmz.yfilter)) leaf_name_data.push_back(ebgp_recv_dmz.get_name_leafdata());
    if (ebgp_send_dmz_enable_modes.is_set || is_set(ebgp_send_dmz_enable_modes.yfilter)) leaf_name_data.push_back(ebgp_send_dmz_enable_modes.get_name_leafdata());
    if (egress_peer_engineering.is_set || is_set(egress_peer_engineering.yfilter)) leaf_name_data.push_back(egress_peer_engineering.get_name_leafdata());
    if (enforce_first_as.is_set || is_set(enforce_first_as.yfilter)) leaf_name_data.push_back(enforce_first_as.get_name_leafdata());
    if (idle_watch_time.is_set || is_set(idle_watch_time.yfilter)) leaf_name_data.push_back(idle_watch_time.get_name_leafdata());
    if (ignore_connected_check_ebgp.is_set || is_set(ignore_connected_check_ebgp.yfilter)) leaf_name_data.push_back(ignore_connected_check_ebgp.get_name_leafdata());
    if (internal_vpn_client_ibgp_ce.is_set || is_set(internal_vpn_client_ibgp_ce.yfilter)) leaf_name_data.push_back(internal_vpn_client_ibgp_ce.get_name_leafdata());
    if (max_peers.is_set || is_set(max_peers.yfilter)) leaf_name_data.push_back(max_peers.get_name_leafdata());
    if (neighbor_graceful_restart.is_set || is_set(neighbor_graceful_restart.yfilter)) leaf_name_data.push_back(neighbor_graceful_restart.get_name_leafdata());
    if (neighbor_graceful_restart_stalepath_time.is_set || is_set(neighbor_graceful_restart_stalepath_time.yfilter)) leaf_name_data.push_back(neighbor_graceful_restart_stalepath_time.get_name_leafdata());
    if (neighbor_graceful_restart_time.is_set || is_set(neighbor_graceful_restart_time.yfilter)) leaf_name_data.push_back(neighbor_graceful_restart_time.get_name_leafdata());
    if (propagate_dmz_link_bandwidth.is_set || is_set(propagate_dmz_link_bandwidth.yfilter)) leaf_name_data.push_back(propagate_dmz_link_bandwidth.get_name_leafdata());
    if (remote_as_list.is_set || is_set(remote_as_list.yfilter)) leaf_name_data.push_back(remote_as_list.get_name_leafdata());
    if (rpki_bestpath_origin_as_allow_invalid.is_set || is_set(rpki_bestpath_origin_as_allow_invalid.yfilter)) leaf_name_data.push_back(rpki_bestpath_origin_as_allow_invalid.get_name_leafdata());
    if (rpki_origin_as_validation_disable.is_set || is_set(rpki_origin_as_validation_disable.yfilter)) leaf_name_data.push_back(rpki_origin_as_validation_disable.get_name_leafdata());
    if (session_group_add_member.is_set || is_set(session_group_add_member.yfilter)) leaf_name_data.push_back(session_group_add_member.get_name_leafdata());
    if (session_open_mode.is_set || is_set(session_open_mode.yfilter)) leaf_name_data.push_back(session_open_mode.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (suppress_all_capabilities.is_set || is_set(suppress_all_capabilities.yfilter)) leaf_name_data.push_back(suppress_all_capabilities.get_name_leafdata());
    if (suppress_four_byte_as_capability.is_set || is_set(suppress_four_byte_as_capability.yfilter)) leaf_name_data.push_back(suppress_four_byte_as_capability.get_name_leafdata());
    if (ttl_security.is_set || is_set(ttl_security.yfilter)) leaf_name_data.push_back(ttl_security.get_name_leafdata());
    if (update_source_interface.is_set || is_set(update_source_interface.yfilter)) leaf_name_data.push_back(update_source_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertisement-interval")
    {
        if(advertisement_interval == nullptr)
        {
            advertisement_interval = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::AdvertisementInterval>();
        }
        return advertisement_interval;
    }

    if(child_yang_name == "bmp-activates")
    {
        if(bmp_activates == nullptr)
        {
            bmp_activates = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates>();
        }
        return bmp_activates;
    }

    if(child_yang_name == "ebgp-multihop")
    {
        if(ebgp_multihop == nullptr)
        {
            ebgp_multihop = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::EbgpMultihop>();
        }
        return ebgp_multihop;
    }

    if(child_yang_name == "graceful-maintenance")
    {
        if(graceful_maintenance == nullptr)
        {
            graceful_maintenance = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance>();
        }
        return graceful_maintenance;
    }

    if(child_yang_name == "keychain")
    {
        if(keychain == nullptr)
        {
            keychain = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Keychain>();
        }
        return keychain;
    }

    if(child_yang_name == "local-address")
    {
        if(local_address == nullptr)
        {
            local_address = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAddress>();
        }
        return local_address;
    }

    if(child_yang_name == "local-as")
    {
        if(local_as == nullptr)
        {
            local_as = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAs>();
        }
        return local_as;
    }

    if(child_yang_name == "msg-log-in")
    {
        if(msg_log_in == nullptr)
        {
            msg_log_in = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogIn>();
        }
        return msg_log_in;
    }

    if(child_yang_name == "msg-log-out")
    {
        if(msg_log_out == nullptr)
        {
            msg_log_out = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogOut>();
        }
        return msg_log_out;
    }

    if(child_yang_name == "neighbor-cluster-id")
    {
        if(neighbor_cluster_id == nullptr)
        {
            neighbor_cluster_id = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::NeighborClusterId>();
        }
        return neighbor_cluster_id;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Password>();
        }
        return password;
    }

    if(child_yang_name == "receive-buffer-size")
    {
        if(receive_buffer_size == nullptr)
        {
            receive_buffer_size = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::ReceiveBufferSize>();
        }
        return receive_buffer_size;
    }

    if(child_yang_name == "remote-as")
    {
        if(remote_as == nullptr)
        {
            remote_as = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::RemoteAs>();
        }
        return remote_as;
    }

    if(child_yang_name == "send-buffer-size")
    {
        if(send_buffer_size == nullptr)
        {
            send_buffer_size = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::SendBufferSize>();
        }
        return send_buffer_size;
    }

    if(child_yang_name == "tcpmss")
    {
        if(tcpmss == nullptr)
        {
            tcpmss = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tcpmss>();
        }
        return tcpmss;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "tos")
    {
        if(tos == nullptr)
        {
            tos = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tos>();
        }
        return tos;
    }

    if(child_yang_name == "update-in-filtering")
    {
        if(update_in_filtering == nullptr)
        {
            update_in_filtering = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering>();
        }
        return update_in_filtering;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(advertisement_interval != nullptr)
    {
        children["advertisement-interval"] = advertisement_interval;
    }

    if(bmp_activates != nullptr)
    {
        children["bmp-activates"] = bmp_activates;
    }

    if(ebgp_multihop != nullptr)
    {
        children["ebgp-multihop"] = ebgp_multihop;
    }

    if(graceful_maintenance != nullptr)
    {
        children["graceful-maintenance"] = graceful_maintenance;
    }

    if(keychain != nullptr)
    {
        children["keychain"] = keychain;
    }

    if(local_address != nullptr)
    {
        children["local-address"] = local_address;
    }

    if(local_as != nullptr)
    {
        children["local-as"] = local_as;
    }

    if(msg_log_in != nullptr)
    {
        children["msg-log-in"] = msg_log_in;
    }

    if(msg_log_out != nullptr)
    {
        children["msg-log-out"] = msg_log_out;
    }

    if(neighbor_cluster_id != nullptr)
    {
        children["neighbor-cluster-id"] = neighbor_cluster_id;
    }

    if(password != nullptr)
    {
        children["password"] = password;
    }

    if(receive_buffer_size != nullptr)
    {
        children["receive-buffer-size"] = receive_buffer_size;
    }

    if(remote_as != nullptr)
    {
        children["remote-as"] = remote_as;
    }

    if(send_buffer_size != nullptr)
    {
        children["send-buffer-size"] = send_buffer_size;
    }

    if(tcpmss != nullptr)
    {
        children["tcpmss"] = tcpmss;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    if(tos != nullptr)
    {
        children["tos"] = tos;
    }

    if(update_in_filtering != nullptr)
    {
        children["update-in-filtering"] = update_in_filtering;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-group-name")
    {
        session_group_name = value;
        session_group_name.value_namespace = name_space;
        session_group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-paths-receive-capability")
    {
        additional_paths_receive_capability = value;
        additional_paths_receive_capability.value_namespace = name_space;
        additional_paths_receive_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-paths-send-capability")
    {
        additional_paths_send_capability = value;
        additional_paths_send_capability.value_namespace = name_space;
        additional_paths_send_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-enable-modes")
    {
        bfd_enable_modes = value;
        bfd_enable_modes.value_namespace = name_space;
        bfd_enable_modes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-minimum-interval")
    {
        bfd_minimum_interval = value;
        bfd_minimum_interval.value_namespace = name_space;
        bfd_minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier = value;
        bfd_multiplier.value_namespace = name_space;
        bfd_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "create")
    {
        create = value;
        create.value_namespace = name_space;
        create.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ebgp-recv-dmz")
    {
        ebgp_recv_dmz = value;
        ebgp_recv_dmz.value_namespace = name_space;
        ebgp_recv_dmz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ebgp-send-dmz-enable-modes")
    {
        ebgp_send_dmz_enable_modes = value;
        ebgp_send_dmz_enable_modes.value_namespace = name_space;
        ebgp_send_dmz_enable_modes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-peer-engineering")
    {
        egress_peer_engineering = value;
        egress_peer_engineering.value_namespace = name_space;
        egress_peer_engineering.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enforce-first-as")
    {
        enforce_first_as = value;
        enforce_first_as.value_namespace = name_space;
        enforce_first_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-watch-time")
    {
        idle_watch_time = value;
        idle_watch_time.value_namespace = name_space;
        idle_watch_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-connected-check-ebgp")
    {
        ignore_connected_check_ebgp = value;
        ignore_connected_check_ebgp.value_namespace = name_space;
        ignore_connected_check_ebgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-vpn-client-ibgp-ce")
    {
        internal_vpn_client_ibgp_ce = value;
        internal_vpn_client_ibgp_ce.value_namespace = name_space;
        internal_vpn_client_ibgp_ce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-peers")
    {
        max_peers = value;
        max_peers.value_namespace = name_space;
        max_peers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-graceful-restart")
    {
        neighbor_graceful_restart = value;
        neighbor_graceful_restart.value_namespace = name_space;
        neighbor_graceful_restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-graceful-restart-stalepath-time")
    {
        neighbor_graceful_restart_stalepath_time = value;
        neighbor_graceful_restart_stalepath_time.value_namespace = name_space;
        neighbor_graceful_restart_stalepath_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-graceful-restart-time")
    {
        neighbor_graceful_restart_time = value;
        neighbor_graceful_restart_time.value_namespace = name_space;
        neighbor_graceful_restart_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propagate-dmz-link-bandwidth")
    {
        propagate_dmz_link_bandwidth = value;
        propagate_dmz_link_bandwidth.value_namespace = name_space;
        propagate_dmz_link_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-as-list")
    {
        remote_as_list = value;
        remote_as_list.value_namespace = name_space;
        remote_as_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-bestpath-origin-as-allow-invalid")
    {
        rpki_bestpath_origin_as_allow_invalid = value;
        rpki_bestpath_origin_as_allow_invalid.value_namespace = name_space;
        rpki_bestpath_origin_as_allow_invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-origin-as-validation-disable")
    {
        rpki_origin_as_validation_disable = value;
        rpki_origin_as_validation_disable.value_namespace = name_space;
        rpki_origin_as_validation_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-group-add-member")
    {
        session_group_add_member = value;
        session_group_add_member.value_namespace = name_space;
        session_group_add_member.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-open-mode")
    {
        session_open_mode = value;
        session_open_mode.value_namespace = name_space;
        session_open_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-all-capabilities")
    {
        suppress_all_capabilities = value;
        suppress_all_capabilities.value_namespace = name_space;
        suppress_all_capabilities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-four-byte-as-capability")
    {
        suppress_four_byte_as_capability = value;
        suppress_four_byte_as_capability.value_namespace = name_space;
        suppress_four_byte_as_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl-security")
    {
        ttl_security = value;
        ttl_security.value_namespace = name_space;
        ttl_security.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-source-interface")
    {
        update_source_interface = value;
        update_source_interface.value_namespace = name_space;
        update_source_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-group-name")
    {
        session_group_name.yfilter = yfilter;
    }
    if(value_path == "additional-paths-receive-capability")
    {
        additional_paths_receive_capability.yfilter = yfilter;
    }
    if(value_path == "additional-paths-send-capability")
    {
        additional_paths_send_capability.yfilter = yfilter;
    }
    if(value_path == "bfd-enable-modes")
    {
        bfd_enable_modes.yfilter = yfilter;
    }
    if(value_path == "bfd-minimum-interval")
    {
        bfd_minimum_interval.yfilter = yfilter;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier.yfilter = yfilter;
    }
    if(value_path == "create")
    {
        create.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "ebgp-recv-dmz")
    {
        ebgp_recv_dmz.yfilter = yfilter;
    }
    if(value_path == "ebgp-send-dmz-enable-modes")
    {
        ebgp_send_dmz_enable_modes.yfilter = yfilter;
    }
    if(value_path == "egress-peer-engineering")
    {
        egress_peer_engineering.yfilter = yfilter;
    }
    if(value_path == "enforce-first-as")
    {
        enforce_first_as.yfilter = yfilter;
    }
    if(value_path == "idle-watch-time")
    {
        idle_watch_time.yfilter = yfilter;
    }
    if(value_path == "ignore-connected-check-ebgp")
    {
        ignore_connected_check_ebgp.yfilter = yfilter;
    }
    if(value_path == "internal-vpn-client-ibgp-ce")
    {
        internal_vpn_client_ibgp_ce.yfilter = yfilter;
    }
    if(value_path == "max-peers")
    {
        max_peers.yfilter = yfilter;
    }
    if(value_path == "neighbor-graceful-restart")
    {
        neighbor_graceful_restart.yfilter = yfilter;
    }
    if(value_path == "neighbor-graceful-restart-stalepath-time")
    {
        neighbor_graceful_restart_stalepath_time.yfilter = yfilter;
    }
    if(value_path == "neighbor-graceful-restart-time")
    {
        neighbor_graceful_restart_time.yfilter = yfilter;
    }
    if(value_path == "propagate-dmz-link-bandwidth")
    {
        propagate_dmz_link_bandwidth.yfilter = yfilter;
    }
    if(value_path == "remote-as-list")
    {
        remote_as_list.yfilter = yfilter;
    }
    if(value_path == "rpki-bestpath-origin-as-allow-invalid")
    {
        rpki_bestpath_origin_as_allow_invalid.yfilter = yfilter;
    }
    if(value_path == "rpki-origin-as-validation-disable")
    {
        rpki_origin_as_validation_disable.yfilter = yfilter;
    }
    if(value_path == "session-group-add-member")
    {
        session_group_add_member.yfilter = yfilter;
    }
    if(value_path == "session-open-mode")
    {
        session_open_mode.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "suppress-all-capabilities")
    {
        suppress_all_capabilities.yfilter = yfilter;
    }
    if(value_path == "suppress-four-byte-as-capability")
    {
        suppress_four_byte_as_capability.yfilter = yfilter;
    }
    if(value_path == "ttl-security")
    {
        ttl_security.yfilter = yfilter;
    }
    if(value_path == "update-source-interface")
    {
        update_source_interface.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertisement-interval" || name == "bmp-activates" || name == "ebgp-multihop" || name == "graceful-maintenance" || name == "keychain" || name == "local-address" || name == "local-as" || name == "msg-log-in" || name == "msg-log-out" || name == "neighbor-cluster-id" || name == "password" || name == "receive-buffer-size" || name == "remote-as" || name == "send-buffer-size" || name == "tcpmss" || name == "timers" || name == "tos" || name == "update-in-filtering" || name == "session-group-name" || name == "additional-paths-receive-capability" || name == "additional-paths-send-capability" || name == "bfd-enable-modes" || name == "bfd-minimum-interval" || name == "bfd-multiplier" || name == "create" || name == "description" || name == "ebgp-recv-dmz" || name == "ebgp-send-dmz-enable-modes" || name == "egress-peer-engineering" || name == "enforce-first-as" || name == "idle-watch-time" || name == "ignore-connected-check-ebgp" || name == "internal-vpn-client-ibgp-ce" || name == "max-peers" || name == "neighbor-graceful-restart" || name == "neighbor-graceful-restart-stalepath-time" || name == "neighbor-graceful-restart-time" || name == "propagate-dmz-link-bandwidth" || name == "remote-as-list" || name == "rpki-bestpath-origin-as-allow-invalid" || name == "rpki-origin-as-validation-disable" || name == "session-group-add-member" || name == "session-open-mode" || name == "shutdown" || name == "suppress-all-capabilities" || name == "suppress-four-byte-as-capability" || name == "ttl-security" || name == "update-source-interface")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::AdvertisementInterval::AdvertisementInterval()
    :
    minimum_interval{YType::uint32, "minimum-interval"},
    minimum_interval_msecs{YType::uint32, "minimum-interval-msecs"}
{

    yang_name = "advertisement-interval"; yang_parent_name = "session-group"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::AdvertisementInterval::~AdvertisementInterval()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::AdvertisementInterval::has_data() const
{
    return minimum_interval.is_set
	|| minimum_interval_msecs.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::AdvertisementInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(minimum_interval_msecs.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::AdvertisementInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertisement-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::AdvertisementInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (minimum_interval_msecs.is_set || is_set(minimum_interval_msecs.yfilter)) leaf_name_data.push_back(minimum_interval_msecs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::AdvertisementInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::AdvertisementInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::AdvertisementInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-interval-msecs")
    {
        minimum_interval_msecs = value;
        minimum_interval_msecs.value_namespace = name_space;
        minimum_interval_msecs.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::AdvertisementInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "minimum-interval-msecs")
    {
        minimum_interval_msecs.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::AdvertisementInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-interval" || name == "minimum-interval-msecs")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::BmpActivates()
{

    yang_name = "bmp-activates"; yang_parent_name = "session-group"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::~BmpActivates()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::has_data() const
{
    for (std::size_t index=0; index<bmp_activate.size(); index++)
    {
        if(bmp_activate[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::has_operation() const
{
    for (std::size_t index=0; index<bmp_activate.size(); index++)
    {
        if(bmp_activate[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-activates";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bmp-activate")
    {
        for(auto const & c : bmp_activate)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::BmpActivate>();
        c->parent = this;
        bmp_activate.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bmp_activate)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bmp-activate")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::BmpActivate::BmpActivate()
    :
    server_id{YType::uint32, "server-id"}
{

    yang_name = "bmp-activate"; yang_parent_name = "bmp-activates"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::BmpActivate::~BmpActivate()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::BmpActivate::has_data() const
{
    return server_id.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::BmpActivate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(server_id.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::BmpActivate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-activate" <<"[server-id='" <<server_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::BmpActivate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server_id.is_set || is_set(server_id.yfilter)) leaf_name_data.push_back(server_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::BmpActivate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::BmpActivate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::BmpActivate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "server-id")
    {
        server_id = value;
        server_id.value_namespace = name_space;
        server_id.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::BmpActivate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "server-id")
    {
        server_id.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::BmpActivate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server-id")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::EbgpMultihop::EbgpMultihop()
    :
    max_hop_count{YType::uint32, "max-hop-count"},
    mpls_deactivation{YType::boolean, "mpls-deactivation"}
{

    yang_name = "ebgp-multihop"; yang_parent_name = "session-group"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::EbgpMultihop::~EbgpMultihop()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::EbgpMultihop::has_data() const
{
    return max_hop_count.is_set
	|| mpls_deactivation.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::EbgpMultihop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_hop_count.yfilter)
	|| ydk::is_set(mpls_deactivation.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::EbgpMultihop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ebgp-multihop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::EbgpMultihop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_hop_count.is_set || is_set(max_hop_count.yfilter)) leaf_name_data.push_back(max_hop_count.get_name_leafdata());
    if (mpls_deactivation.is_set || is_set(mpls_deactivation.yfilter)) leaf_name_data.push_back(mpls_deactivation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::EbgpMultihop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::EbgpMultihop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::EbgpMultihop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-hop-count")
    {
        max_hop_count = value;
        max_hop_count.value_namespace = name_space;
        max_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-deactivation")
    {
        mpls_deactivation = value;
        mpls_deactivation.value_namespace = name_space;
        mpls_deactivation.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::EbgpMultihop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-hop-count")
    {
        max_hop_count.yfilter = yfilter;
    }
    if(value_path == "mpls-deactivation")
    {
        mpls_deactivation.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::EbgpMultihop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-hop-count" || name == "mpls-deactivation")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenance()
    :
    enable{YType::empty, "enable"},
    graceful_maintenance_activate{YType::boolean, "graceful-maintenance-activate"}
    	,
    graceful_maintenance_as_prepends(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends>())
	,graceful_maintenance_local_preference(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference>())
{
    graceful_maintenance_as_prepends->parent = this;
    graceful_maintenance_local_preference->parent = this;

    yang_name = "graceful-maintenance"; yang_parent_name = "session-group"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::~GracefulMaintenance()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::has_data() const
{
    return enable.is_set
	|| graceful_maintenance_activate.is_set
	|| (graceful_maintenance_as_prepends !=  nullptr && graceful_maintenance_as_prepends->has_data())
	|| (graceful_maintenance_local_preference !=  nullptr && graceful_maintenance_local_preference->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(graceful_maintenance_activate.yfilter)
	|| (graceful_maintenance_as_prepends !=  nullptr && graceful_maintenance_as_prepends->has_operation())
	|| (graceful_maintenance_local_preference !=  nullptr && graceful_maintenance_local_preference->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-maintenance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (graceful_maintenance_activate.is_set || is_set(graceful_maintenance_activate.yfilter)) leaf_name_data.push_back(graceful_maintenance_activate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "graceful-maintenance-as-prepends")
    {
        if(graceful_maintenance_as_prepends == nullptr)
        {
            graceful_maintenance_as_prepends = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends>();
        }
        return graceful_maintenance_as_prepends;
    }

    if(child_yang_name == "graceful-maintenance-local-preference")
    {
        if(graceful_maintenance_local_preference == nullptr)
        {
            graceful_maintenance_local_preference = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference>();
        }
        return graceful_maintenance_local_preference;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(graceful_maintenance_as_prepends != nullptr)
    {
        children["graceful-maintenance-as-prepends"] = graceful_maintenance_as_prepends;
    }

    if(graceful_maintenance_local_preference != nullptr)
    {
        children["graceful-maintenance-local-preference"] = graceful_maintenance_local_preference;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "graceful-maintenance-activate")
    {
        graceful_maintenance_activate = value;
        graceful_maintenance_activate.value_namespace = name_space;
        graceful_maintenance_activate.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "graceful-maintenance-activate")
    {
        graceful_maintenance_activate.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "graceful-maintenance-as-prepends" || name == "graceful-maintenance-local-preference" || name == "enable" || name == "graceful-maintenance-activate")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends::GracefulMaintenanceAsPrepends()
    :
    as_prepends{YType::uint32, "as-prepends"},
    gshut_prepends_disable{YType::boolean, "gshut-prepends-disable"}
{

    yang_name = "graceful-maintenance-as-prepends"; yang_parent_name = "graceful-maintenance"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends::~GracefulMaintenanceAsPrepends()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends::has_data() const
{
    return as_prepends.is_set
	|| gshut_prepends_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_prepends.yfilter)
	|| ydk::is_set(gshut_prepends_disable.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-maintenance-as-prepends";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_prepends.is_set || is_set(as_prepends.yfilter)) leaf_name_data.push_back(as_prepends.get_name_leafdata());
    if (gshut_prepends_disable.is_set || is_set(gshut_prepends_disable.yfilter)) leaf_name_data.push_back(gshut_prepends_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-prepends")
    {
        as_prepends = value;
        as_prepends.value_namespace = name_space;
        as_prepends.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gshut-prepends-disable")
    {
        gshut_prepends_disable = value;
        gshut_prepends_disable.value_namespace = name_space;
        gshut_prepends_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-prepends")
    {
        as_prepends.yfilter = yfilter;
    }
    if(value_path == "gshut-prepends-disable")
    {
        gshut_prepends_disable.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-prepends" || name == "gshut-prepends-disable")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference::GracefulMaintenanceLocalPreference()
    :
    gshut_loc_pref_disable{YType::boolean, "gshut-loc-pref-disable"},
    local_preference{YType::uint32, "local-preference"}
{

    yang_name = "graceful-maintenance-local-preference"; yang_parent_name = "graceful-maintenance"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference::~GracefulMaintenanceLocalPreference()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference::has_data() const
{
    return gshut_loc_pref_disable.is_set
	|| local_preference.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gshut_loc_pref_disable.yfilter)
	|| ydk::is_set(local_preference.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-maintenance-local-preference";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gshut_loc_pref_disable.is_set || is_set(gshut_loc_pref_disable.yfilter)) leaf_name_data.push_back(gshut_loc_pref_disable.get_name_leafdata());
    if (local_preference.is_set || is_set(local_preference.yfilter)) leaf_name_data.push_back(local_preference.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gshut-loc-pref-disable")
    {
        gshut_loc_pref_disable = value;
        gshut_loc_pref_disable.value_namespace = name_space;
        gshut_loc_pref_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-preference")
    {
        local_preference = value;
        local_preference.value_namespace = name_space;
        local_preference.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gshut-loc-pref-disable")
    {
        gshut_loc_pref_disable.yfilter = yfilter;
    }
    if(value_path == "local-preference")
    {
        local_preference.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gshut-loc-pref-disable" || name == "local-preference")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Keychain::Keychain()
    :
    keychain_disable{YType::boolean, "keychain-disable"},
    keychain_name{YType::str, "keychain-name"}
{

    yang_name = "keychain"; yang_parent_name = "session-group"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Keychain::~Keychain()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Keychain::has_data() const
{
    return keychain_disable.is_set
	|| keychain_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Keychain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(keychain_disable.yfilter)
	|| ydk::is_set(keychain_name.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Keychain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keychain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Keychain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keychain_disable.is_set || is_set(keychain_disable.yfilter)) leaf_name_data.push_back(keychain_disable.get_name_leafdata());
    if (keychain_name.is_set || is_set(keychain_name.yfilter)) leaf_name_data.push_back(keychain_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Keychain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Keychain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Keychain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "keychain-disable")
    {
        keychain_disable = value;
        keychain_disable.value_namespace = name_space;
        keychain_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keychain-name")
    {
        keychain_name = value;
        keychain_name.value_namespace = name_space;
        keychain_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Keychain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "keychain-disable")
    {
        keychain_disable.yfilter = yfilter;
    }
    if(value_path == "keychain-name")
    {
        keychain_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Keychain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keychain-disable" || name == "keychain-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAddress::LocalAddress()
    :
    local_address_disable{YType::boolean, "local-address-disable"},
    local_ip_address{YType::str, "local-ip-address"}
{

    yang_name = "local-address"; yang_parent_name = "session-group"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAddress::~LocalAddress()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAddress::has_data() const
{
    return local_address_disable.is_set
	|| local_ip_address.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_address_disable.yfilter)
	|| ydk::is_set(local_ip_address.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_address_disable.is_set || is_set(local_address_disable.yfilter)) leaf_name_data.push_back(local_address_disable.get_name_leafdata());
    if (local_ip_address.is_set || is_set(local_ip_address.yfilter)) leaf_name_data.push_back(local_ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-address-disable")
    {
        local_address_disable = value;
        local_address_disable.value_namespace = name_space;
        local_address_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-ip-address")
    {
        local_ip_address = value;
        local_ip_address.value_namespace = name_space;
        local_ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-address-disable")
    {
        local_address_disable.yfilter = yfilter;
    }
    if(value_path == "local-ip-address")
    {
        local_ip_address.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-address-disable" || name == "local-ip-address")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAs::LocalAs()
    :
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"},
    disable{YType::empty, "disable"},
    dual_as{YType::empty, "dual-as"},
    no_prepend{YType::empty, "no-prepend"},
    replace_as{YType::empty, "replace-as"}
{

    yang_name = "local-as"; yang_parent_name = "session-group"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAs::~LocalAs()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAs::has_data() const
{
    return as_xx.is_set
	|| as_yy.is_set
	|| disable.is_set
	|| dual_as.is_set
	|| no_prepend.is_set
	|| replace_as.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(as_yy.yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(dual_as.yfilter)
	|| ydk::is_set(no_prepend.yfilter)
	|| ydk::is_set(replace_as.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.yfilter)) leaf_name_data.push_back(as_yy.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (dual_as.is_set || is_set(dual_as.yfilter)) leaf_name_data.push_back(dual_as.get_name_leafdata());
    if (no_prepend.is_set || is_set(no_prepend.yfilter)) leaf_name_data.push_back(no_prepend.get_name_leafdata());
    if (replace_as.is_set || is_set(replace_as.yfilter)) leaf_name_data.push_back(replace_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
        as_xx.value_namespace = name_space;
        as_xx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-yy")
    {
        as_yy = value;
        as_yy.value_namespace = name_space;
        as_yy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-as")
    {
        dual_as = value;
        dual_as.value_namespace = name_space;
        dual_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-prepend")
    {
        no_prepend = value;
        no_prepend.value_namespace = name_space;
        no_prepend.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replace-as")
    {
        replace_as = value;
        replace_as.value_namespace = name_space;
        replace_as.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-xx")
    {
        as_xx.yfilter = yfilter;
    }
    if(value_path == "as-yy")
    {
        as_yy.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "dual-as")
    {
        dual_as.yfilter = yfilter;
    }
    if(value_path == "no-prepend")
    {
        no_prepend.yfilter = yfilter;
    }
    if(value_path == "replace-as")
    {
        replace_as.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-xx" || name == "as-yy" || name == "disable" || name == "dual-as" || name == "no-prepend" || name == "replace-as")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogIn::MsgLogIn()
    :
    msg_buf_count{YType::uint32, "msg-buf-count"},
    msg_log_disable{YType::boolean, "msg-log-disable"},
    msg_log_inherit_disable{YType::boolean, "msg-log-inherit-disable"}
{

    yang_name = "msg-log-in"; yang_parent_name = "session-group"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogIn::~MsgLogIn()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogIn::has_data() const
{
    return msg_buf_count.is_set
	|| msg_log_disable.is_set
	|| msg_log_inherit_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogIn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msg_buf_count.yfilter)
	|| ydk::is_set(msg_log_disable.yfilter)
	|| ydk::is_set(msg_log_inherit_disable.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msg-log-in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msg_buf_count.is_set || is_set(msg_buf_count.yfilter)) leaf_name_data.push_back(msg_buf_count.get_name_leafdata());
    if (msg_log_disable.is_set || is_set(msg_log_disable.yfilter)) leaf_name_data.push_back(msg_log_disable.get_name_leafdata());
    if (msg_log_inherit_disable.is_set || is_set(msg_log_inherit_disable.yfilter)) leaf_name_data.push_back(msg_log_inherit_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogIn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msg-buf-count")
    {
        msg_buf_count = value;
        msg_buf_count.value_namespace = name_space;
        msg_buf_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-log-disable")
    {
        msg_log_disable = value;
        msg_log_disable.value_namespace = name_space;
        msg_log_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-log-inherit-disable")
    {
        msg_log_inherit_disable = value;
        msg_log_inherit_disable.value_namespace = name_space;
        msg_log_inherit_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogIn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msg-buf-count")
    {
        msg_buf_count.yfilter = yfilter;
    }
    if(value_path == "msg-log-disable")
    {
        msg_log_disable.yfilter = yfilter;
    }
    if(value_path == "msg-log-inherit-disable")
    {
        msg_log_inherit_disable.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogIn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msg-buf-count" || name == "msg-log-disable" || name == "msg-log-inherit-disable")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogOut::MsgLogOut()
    :
    msg_buf_count{YType::uint32, "msg-buf-count"},
    msg_log_disable{YType::boolean, "msg-log-disable"},
    msg_log_inherit_disable{YType::boolean, "msg-log-inherit-disable"}
{

    yang_name = "msg-log-out"; yang_parent_name = "session-group"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogOut::~MsgLogOut()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogOut::has_data() const
{
    return msg_buf_count.is_set
	|| msg_log_disable.is_set
	|| msg_log_inherit_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogOut::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msg_buf_count.yfilter)
	|| ydk::is_set(msg_log_disable.yfilter)
	|| ydk::is_set(msg_log_inherit_disable.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogOut::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msg-log-out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogOut::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msg_buf_count.is_set || is_set(msg_buf_count.yfilter)) leaf_name_data.push_back(msg_buf_count.get_name_leafdata());
    if (msg_log_disable.is_set || is_set(msg_log_disable.yfilter)) leaf_name_data.push_back(msg_log_disable.get_name_leafdata());
    if (msg_log_inherit_disable.is_set || is_set(msg_log_inherit_disable.yfilter)) leaf_name_data.push_back(msg_log_inherit_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogOut::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogOut::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogOut::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msg-buf-count")
    {
        msg_buf_count = value;
        msg_buf_count.value_namespace = name_space;
        msg_buf_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-log-disable")
    {
        msg_log_disable = value;
        msg_log_disable.value_namespace = name_space;
        msg_log_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-log-inherit-disable")
    {
        msg_log_inherit_disable = value;
        msg_log_inherit_disable.value_namespace = name_space;
        msg_log_inherit_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogOut::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msg-buf-count")
    {
        msg_buf_count.yfilter = yfilter;
    }
    if(value_path == "msg-log-disable")
    {
        msg_log_disable.yfilter = yfilter;
    }
    if(value_path == "msg-log-inherit-disable")
    {
        msg_log_inherit_disable.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogOut::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msg-buf-count" || name == "msg-log-disable" || name == "msg-log-inherit-disable")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::NeighborClusterId::NeighborClusterId()
    :
    cluster_id_address{YType::str, "cluster-id-address"},
    cluster_id_number{YType::uint32, "cluster-id-number"}
{

    yang_name = "neighbor-cluster-id"; yang_parent_name = "session-group"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::NeighborClusterId::~NeighborClusterId()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::NeighborClusterId::has_data() const
{
    return cluster_id_address.is_set
	|| cluster_id_number.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::NeighborClusterId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cluster_id_address.yfilter)
	|| ydk::is_set(cluster_id_number.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::NeighborClusterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-cluster-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::NeighborClusterId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cluster_id_address.is_set || is_set(cluster_id_address.yfilter)) leaf_name_data.push_back(cluster_id_address.get_name_leafdata());
    if (cluster_id_number.is_set || is_set(cluster_id_number.yfilter)) leaf_name_data.push_back(cluster_id_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::NeighborClusterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::NeighborClusterId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::NeighborClusterId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cluster-id-address")
    {
        cluster_id_address = value;
        cluster_id_address.value_namespace = name_space;
        cluster_id_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster-id-number")
    {
        cluster_id_number = value;
        cluster_id_number.value_namespace = name_space;
        cluster_id_number.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::NeighborClusterId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cluster-id-address")
    {
        cluster_id_address.yfilter = yfilter;
    }
    if(value_path == "cluster-id-number")
    {
        cluster_id_number.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::NeighborClusterId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cluster-id-address" || name == "cluster-id-number")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Password::Password()
    :
    password{YType::str, "password"},
    password_disable{YType::boolean, "password-disable"}
{

    yang_name = "password"; yang_parent_name = "session-group"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Password::~Password()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Password::has_data() const
{
    return password.is_set
	|| password_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(password_disable.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (password_disable.is_set || is_set(password_disable.yfilter)) leaf_name_data.push_back(password_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password-disable")
    {
        password_disable = value;
        password_disable.value_namespace = name_space;
        password_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "password-disable")
    {
        password_disable.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "password-disable")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::ReceiveBufferSize::ReceiveBufferSize()
    :
    bgp_receive_size{YType::uint32, "bgp-receive-size"},
    socket_receive_size{YType::uint32, "socket-receive-size"}
{

    yang_name = "receive-buffer-size"; yang_parent_name = "session-group"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::ReceiveBufferSize::~ReceiveBufferSize()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::ReceiveBufferSize::has_data() const
{
    return bgp_receive_size.is_set
	|| socket_receive_size.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::ReceiveBufferSize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bgp_receive_size.yfilter)
	|| ydk::is_set(socket_receive_size.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::ReceiveBufferSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-buffer-size";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::ReceiveBufferSize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp_receive_size.is_set || is_set(bgp_receive_size.yfilter)) leaf_name_data.push_back(bgp_receive_size.get_name_leafdata());
    if (socket_receive_size.is_set || is_set(socket_receive_size.yfilter)) leaf_name_data.push_back(socket_receive_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::ReceiveBufferSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::ReceiveBufferSize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::ReceiveBufferSize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bgp-receive-size")
    {
        bgp_receive_size = value;
        bgp_receive_size.value_namespace = name_space;
        bgp_receive_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "socket-receive-size")
    {
        socket_receive_size = value;
        socket_receive_size.value_namespace = name_space;
        socket_receive_size.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::ReceiveBufferSize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bgp-receive-size")
    {
        bgp_receive_size.yfilter = yfilter;
    }
    if(value_path == "socket-receive-size")
    {
        socket_receive_size.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::ReceiveBufferSize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-receive-size" || name == "socket-receive-size")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::RemoteAs::RemoteAs()
    :
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"}
{

    yang_name = "remote-as"; yang_parent_name = "session-group"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::RemoteAs::~RemoteAs()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::RemoteAs::has_data() const
{
    return as_xx.is_set
	|| as_yy.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::RemoteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(as_yy.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::RemoteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::RemoteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.yfilter)) leaf_name_data.push_back(as_yy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::RemoteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::RemoteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::RemoteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
        as_xx.value_namespace = name_space;
        as_xx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-yy")
    {
        as_yy = value;
        as_yy.value_namespace = name_space;
        as_yy.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::RemoteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-xx")
    {
        as_xx.yfilter = yfilter;
    }
    if(value_path == "as-yy")
    {
        as_yy.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::RemoteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-xx" || name == "as-yy")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::SendBufferSize::SendBufferSize()
    :
    bgp_send_size{YType::uint32, "bgp-send-size"},
    socket_send_size{YType::uint32, "socket-send-size"}
{

    yang_name = "send-buffer-size"; yang_parent_name = "session-group"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::SendBufferSize::~SendBufferSize()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::SendBufferSize::has_data() const
{
    return bgp_send_size.is_set
	|| socket_send_size.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::SendBufferSize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bgp_send_size.yfilter)
	|| ydk::is_set(socket_send_size.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::SendBufferSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-buffer-size";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::SendBufferSize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp_send_size.is_set || is_set(bgp_send_size.yfilter)) leaf_name_data.push_back(bgp_send_size.get_name_leafdata());
    if (socket_send_size.is_set || is_set(socket_send_size.yfilter)) leaf_name_data.push_back(socket_send_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::SendBufferSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::SendBufferSize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::SendBufferSize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bgp-send-size")
    {
        bgp_send_size = value;
        bgp_send_size.value_namespace = name_space;
        bgp_send_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "socket-send-size")
    {
        socket_send_size = value;
        socket_send_size.value_namespace = name_space;
        socket_send_size.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::SendBufferSize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bgp-send-size")
    {
        bgp_send_size.yfilter = yfilter;
    }
    if(value_path == "socket-send-size")
    {
        socket_send_size.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::SendBufferSize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-send-size" || name == "socket-send-size")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tcpmss::Tcpmss()
    :
    mss{YType::uint32, "mss"},
    tcpmss_disable{YType::boolean, "tcpmss-disable"}
{

    yang_name = "tcpmss"; yang_parent_name = "session-group"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tcpmss::~Tcpmss()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tcpmss::has_data() const
{
    return mss.is_set
	|| tcpmss_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tcpmss::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mss.yfilter)
	|| ydk::is_set(tcpmss_disable.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tcpmss::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcpmss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tcpmss::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mss.is_set || is_set(mss.yfilter)) leaf_name_data.push_back(mss.get_name_leafdata());
    if (tcpmss_disable.is_set || is_set(tcpmss_disable.yfilter)) leaf_name_data.push_back(tcpmss_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tcpmss::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tcpmss::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tcpmss::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mss")
    {
        mss = value;
        mss.value_namespace = name_space;
        mss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpmss-disable")
    {
        tcpmss_disable = value;
        tcpmss_disable.value_namespace = name_space;
        tcpmss_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tcpmss::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mss")
    {
        mss.yfilter = yfilter;
    }
    if(value_path == "tcpmss-disable")
    {
        tcpmss_disable.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tcpmss::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mss" || name == "tcpmss-disable")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Timers::Timers()
    :
    hold_time{YType::uint32, "hold-time"},
    keepalive_interval{YType::uint32, "keepalive-interval"},
    min_accept_hold_time{YType::uint32, "min-accept-hold-time"}
{

    yang_name = "timers"; yang_parent_name = "session-group"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Timers::~Timers()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Timers::has_data() const
{
    return hold_time.is_set
	|| keepalive_interval.is_set
	|| min_accept_hold_time.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| ydk::is_set(keepalive_interval.yfilter)
	|| ydk::is_set(min_accept_hold_time.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (keepalive_interval.is_set || is_set(keepalive_interval.yfilter)) leaf_name_data.push_back(keepalive_interval.get_name_leafdata());
    if (min_accept_hold_time.is_set || is_set(min_accept_hold_time.yfilter)) leaf_name_data.push_back(min_accept_hold_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalive-interval")
    {
        keepalive_interval = value;
        keepalive_interval.value_namespace = name_space;
        keepalive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-accept-hold-time")
    {
        min_accept_hold_time = value;
        min_accept_hold_time.value_namespace = name_space;
        min_accept_hold_time.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
    if(value_path == "keepalive-interval")
    {
        keepalive_interval.yfilter = yfilter;
    }
    if(value_path == "min-accept-hold-time")
    {
        min_accept_hold_time.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hold-time" || name == "keepalive-interval" || name == "min-accept-hold-time")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tos::Tos()
    :
    type{YType::enumeration, "type"},
    value_{YType::str, "value"}
{

    yang_name = "tos"; yang_parent_name = "session-group"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tos::~Tos()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tos::has_data() const
{
    return type.is_set
	|| value_.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "value")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::UpdateInFiltering()
    :
    enable{YType::empty, "enable"},
    update_in_filtering_attribute_filter_group{YType::str, "update-in-filtering-attribute-filter-group"},
    update_in_filtering_syslog_disable{YType::empty, "update-in-filtering-syslog-disable"}
    	,
    update_in_filtering_message_buffers(nullptr) // presence node
{

    yang_name = "update-in-filtering"; yang_parent_name = "session-group"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::~UpdateInFiltering()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::has_data() const
{
    return enable.is_set
	|| update_in_filtering_attribute_filter_group.is_set
	|| update_in_filtering_syslog_disable.is_set
	|| (update_in_filtering_message_buffers !=  nullptr && update_in_filtering_message_buffers->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(update_in_filtering_attribute_filter_group.yfilter)
	|| ydk::is_set(update_in_filtering_syslog_disable.yfilter)
	|| (update_in_filtering_message_buffers !=  nullptr && update_in_filtering_message_buffers->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-in-filtering";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (update_in_filtering_attribute_filter_group.is_set || is_set(update_in_filtering_attribute_filter_group.yfilter)) leaf_name_data.push_back(update_in_filtering_attribute_filter_group.get_name_leafdata());
    if (update_in_filtering_syslog_disable.is_set || is_set(update_in_filtering_syslog_disable.yfilter)) leaf_name_data.push_back(update_in_filtering_syslog_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "update-in-filtering-message-buffers")
    {
        if(update_in_filtering_message_buffers == nullptr)
        {
            update_in_filtering_message_buffers = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers>();
        }
        return update_in_filtering_message_buffers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(update_in_filtering_message_buffers != nullptr)
    {
        children["update-in-filtering-message-buffers"] = update_in_filtering_message_buffers;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-in-filtering-attribute-filter-group")
    {
        update_in_filtering_attribute_filter_group = value;
        update_in_filtering_attribute_filter_group.value_namespace = name_space;
        update_in_filtering_attribute_filter_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-in-filtering-syslog-disable")
    {
        update_in_filtering_syslog_disable = value;
        update_in_filtering_syslog_disable.value_namespace = name_space;
        update_in_filtering_syslog_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "update-in-filtering-attribute-filter-group")
    {
        update_in_filtering_attribute_filter_group.yfilter = yfilter;
    }
    if(value_path == "update-in-filtering-syslog-disable")
    {
        update_in_filtering_syslog_disable.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update-in-filtering-message-buffers" || name == "enable" || name == "update-in-filtering-attribute-filter-group" || name == "update-in-filtering-syslog-disable")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers::UpdateInFilteringMessageBuffers()
    :
    non_circular_buffer{YType::boolean, "non-circular-buffer"},
    number_of_buffers{YType::uint32, "number-of-buffers"}
{

    yang_name = "update-in-filtering-message-buffers"; yang_parent_name = "update-in-filtering"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers::~UpdateInFilteringMessageBuffers()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers::has_data() const
{
    return non_circular_buffer.is_set
	|| number_of_buffers.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(non_circular_buffer.yfilter)
	|| ydk::is_set(number_of_buffers.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-in-filtering-message-buffers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_circular_buffer.is_set || is_set(non_circular_buffer.yfilter)) leaf_name_data.push_back(non_circular_buffer.get_name_leafdata());
    if (number_of_buffers.is_set || is_set(number_of_buffers.yfilter)) leaf_name_data.push_back(number_of_buffers.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "non-circular-buffer")
    {
        non_circular_buffer = value;
        non_circular_buffer.value_namespace = name_space;
        non_circular_buffer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-buffers")
    {
        number_of_buffers = value;
        number_of_buffers.value_namespace = name_space;
        number_of_buffers.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "non-circular-buffer")
    {
        non_circular_buffer.yfilter = yfilter;
    }
    if(value_path == "number-of-buffers")
    {
        number_of_buffers.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "non-circular-buffer" || name == "number-of-buffers")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Global()
    :
    best_path_aigp_ignore{YType::empty, "best-path-aigp-ignore"},
    best_path_as_multipath_relax{YType::empty, "best-path-as-multipath-relax"},
    best_path_as_path_length{YType::empty, "best-path-as-path-length"},
    best_path_confederation_paths{YType::empty, "best-path-confederation-paths"},
    best_path_cost_community{YType::empty, "best-path-cost-community"},
    best_path_med_always{YType::empty, "best-path-med-always"},
    best_path_med_missing{YType::empty, "best-path-med-missing"},
    best_path_router_id{YType::empty, "best-path-router-id"},
    default_info_originate{YType::empty, "default-info-originate"},
    default_metric{YType::uint32, "default-metric"},
    disable_auto_soft_reset{YType::empty, "disable-auto-soft-reset"},
    disable_enforce_first_as{YType::empty, "disable-enforce-first-as"},
    disable_fast_external_fallover{YType::empty, "disable-fast-external-fallover"},
    disable_msg_log{YType::empty, "disable-msg-log"},
    disable_neighbor_logging{YType::empty, "disable-neighbor-logging"},
    enforce_ibgp_out_policy{YType::empty, "enforce-ibgp-out-policy"},
    global_scan_time{YType::uint32, "global-scan-time"},
    graceful_reset{YType::empty, "graceful-reset"},
    graceful_restart{YType::empty, "graceful-restart"},
    graceful_restart_purge_time{YType::uint32, "graceful-restart-purge-time"},
    graceful_restart_stalepath_time{YType::uint32, "graceful-restart-stalepath-time"},
    graceful_restart_time{YType::uint32, "graceful-restart-time"},
    igp_loop_check{YType::empty, "igp-loop-check"},
    igp_redist_internal{YType::empty, "igp-redist-internal"},
    install_diversion{YType::empty, "install-diversion"},
    local_preference{YType::uint32, "local-preference"},
    multi_path_as_path_ignore_onwards{YType::empty, "multi-path-as-path-ignore-onwards"},
    mvpn{YType::empty, "mvpn"},
    neighbor_logging_detail{YType::empty, "neighbor-logging-detail"},
    next_hop_trigger_delay{YType::uint32, "next-hop-trigger-delay"},
    nsr{YType::boolean, "nsr"},
    read_only{YType::empty, "read-only"},
    router_id{YType::str, "router-id"},
    rpki_bestpath_origin_as_allow_invalid{YType::empty, "rpki-bestpath-origin-as-allow-invalid"},
    rpki_bestpath_use_origin_as_validity{YType::empty, "rpki-bestpath-use-origin-as-validity"},
    rpki_origin_as_validation_disable{YType::empty, "rpki-origin-as-validation-disable"},
    rpki_origin_as_validation_time{YType::uint32, "rpki-origin-as-validation-time"},
    rpki_origin_as_validity_signal_ibgp{YType::empty, "rpki-origin-as-validity-signal-ibgp"},
    update_error_handling_basic_ebgp_disable{YType::empty, "update-error-handling-basic-ebgp-disable"},
    update_error_handling_basic_ibgp_disable{YType::empty, "update-error-handling-basic-ibgp-disable"},
    update_error_handling_extended_ebgp{YType::empty, "update-error-handling-extended-ebgp"},
    update_error_handling_extended_ibgp{YType::empty, "update-error-handling-extended-ibgp"},
    update_limit_process{YType::uint32, "update-limit-process"},
    update_out_logging{YType::empty, "update-out-logging"}
    	,
    as_league(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague>())
	,as_list_groups(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups>())
	,attribute_filter_groups(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups>())
	,bfd(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Bfd>())
	,cluster_id(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ClusterId>())
	,confederation_domain(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationDomain>())
	,confederation_peer_ases(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses>())
	,global_afs(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs>())
	,global_graceful_maintenance_activate(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalGracefulMaintenanceActivate>())
	,global_timers(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalTimers>())
	,limits(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Limits>())
	,mpls_activated_interfaces(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces>())
	,receive_socket_buffer_sizes(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ReceiveSocketBufferSizes>())
	,rpki_servers(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers>())
	,rpki_static_routes(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes>())
	,send_socket_buffer_sizes(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::SendSocketBufferSizes>())
	,update_delay(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::UpdateDelay>())
	,write_limit(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::WriteLimit>())
{
    as_league->parent = this;
    as_list_groups->parent = this;
    attribute_filter_groups->parent = this;
    bfd->parent = this;
    cluster_id->parent = this;
    confederation_domain->parent = this;
    confederation_peer_ases->parent = this;
    global_afs->parent = this;
    global_graceful_maintenance_activate->parent = this;
    global_timers->parent = this;
    limits->parent = this;
    mpls_activated_interfaces->parent = this;
    receive_socket_buffer_sizes->parent = this;
    rpki_servers->parent = this;
    rpki_static_routes->parent = this;
    send_socket_buffer_sizes->parent = this;
    update_delay->parent = this;
    write_limit->parent = this;

    yang_name = "global"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::~Global()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::has_data() const
{
    return best_path_aigp_ignore.is_set
	|| best_path_as_multipath_relax.is_set
	|| best_path_as_path_length.is_set
	|| best_path_confederation_paths.is_set
	|| best_path_cost_community.is_set
	|| best_path_med_always.is_set
	|| best_path_med_missing.is_set
	|| best_path_router_id.is_set
	|| default_info_originate.is_set
	|| default_metric.is_set
	|| disable_auto_soft_reset.is_set
	|| disable_enforce_first_as.is_set
	|| disable_fast_external_fallover.is_set
	|| disable_msg_log.is_set
	|| disable_neighbor_logging.is_set
	|| enforce_ibgp_out_policy.is_set
	|| global_scan_time.is_set
	|| graceful_reset.is_set
	|| graceful_restart.is_set
	|| graceful_restart_purge_time.is_set
	|| graceful_restart_stalepath_time.is_set
	|| graceful_restart_time.is_set
	|| igp_loop_check.is_set
	|| igp_redist_internal.is_set
	|| install_diversion.is_set
	|| local_preference.is_set
	|| multi_path_as_path_ignore_onwards.is_set
	|| mvpn.is_set
	|| neighbor_logging_detail.is_set
	|| next_hop_trigger_delay.is_set
	|| nsr.is_set
	|| read_only.is_set
	|| router_id.is_set
	|| rpki_bestpath_origin_as_allow_invalid.is_set
	|| rpki_bestpath_use_origin_as_validity.is_set
	|| rpki_origin_as_validation_disable.is_set
	|| rpki_origin_as_validation_time.is_set
	|| rpki_origin_as_validity_signal_ibgp.is_set
	|| update_error_handling_basic_ebgp_disable.is_set
	|| update_error_handling_basic_ibgp_disable.is_set
	|| update_error_handling_extended_ebgp.is_set
	|| update_error_handling_extended_ibgp.is_set
	|| update_limit_process.is_set
	|| update_out_logging.is_set
	|| (as_league !=  nullptr && as_league->has_data())
	|| (as_list_groups !=  nullptr && as_list_groups->has_data())
	|| (attribute_filter_groups !=  nullptr && attribute_filter_groups->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (cluster_id !=  nullptr && cluster_id->has_data())
	|| (confederation_domain !=  nullptr && confederation_domain->has_data())
	|| (confederation_peer_ases !=  nullptr && confederation_peer_ases->has_data())
	|| (global_afs !=  nullptr && global_afs->has_data())
	|| (global_graceful_maintenance_activate !=  nullptr && global_graceful_maintenance_activate->has_data())
	|| (global_timers !=  nullptr && global_timers->has_data())
	|| (limits !=  nullptr && limits->has_data())
	|| (mpls_activated_interfaces !=  nullptr && mpls_activated_interfaces->has_data())
	|| (receive_socket_buffer_sizes !=  nullptr && receive_socket_buffer_sizes->has_data())
	|| (rpki_servers !=  nullptr && rpki_servers->has_data())
	|| (rpki_static_routes !=  nullptr && rpki_static_routes->has_data())
	|| (send_socket_buffer_sizes !=  nullptr && send_socket_buffer_sizes->has_data())
	|| (update_delay !=  nullptr && update_delay->has_data())
	|| (write_limit !=  nullptr && write_limit->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(best_path_aigp_ignore.yfilter)
	|| ydk::is_set(best_path_as_multipath_relax.yfilter)
	|| ydk::is_set(best_path_as_path_length.yfilter)
	|| ydk::is_set(best_path_confederation_paths.yfilter)
	|| ydk::is_set(best_path_cost_community.yfilter)
	|| ydk::is_set(best_path_med_always.yfilter)
	|| ydk::is_set(best_path_med_missing.yfilter)
	|| ydk::is_set(best_path_router_id.yfilter)
	|| ydk::is_set(default_info_originate.yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(disable_auto_soft_reset.yfilter)
	|| ydk::is_set(disable_enforce_first_as.yfilter)
	|| ydk::is_set(disable_fast_external_fallover.yfilter)
	|| ydk::is_set(disable_msg_log.yfilter)
	|| ydk::is_set(disable_neighbor_logging.yfilter)
	|| ydk::is_set(enforce_ibgp_out_policy.yfilter)
	|| ydk::is_set(global_scan_time.yfilter)
	|| ydk::is_set(graceful_reset.yfilter)
	|| ydk::is_set(graceful_restart.yfilter)
	|| ydk::is_set(graceful_restart_purge_time.yfilter)
	|| ydk::is_set(graceful_restart_stalepath_time.yfilter)
	|| ydk::is_set(graceful_restart_time.yfilter)
	|| ydk::is_set(igp_loop_check.yfilter)
	|| ydk::is_set(igp_redist_internal.yfilter)
	|| ydk::is_set(install_diversion.yfilter)
	|| ydk::is_set(local_preference.yfilter)
	|| ydk::is_set(multi_path_as_path_ignore_onwards.yfilter)
	|| ydk::is_set(mvpn.yfilter)
	|| ydk::is_set(neighbor_logging_detail.yfilter)
	|| ydk::is_set(next_hop_trigger_delay.yfilter)
	|| ydk::is_set(nsr.yfilter)
	|| ydk::is_set(read_only.yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(rpki_bestpath_origin_as_allow_invalid.yfilter)
	|| ydk::is_set(rpki_bestpath_use_origin_as_validity.yfilter)
	|| ydk::is_set(rpki_origin_as_validation_disable.yfilter)
	|| ydk::is_set(rpki_origin_as_validation_time.yfilter)
	|| ydk::is_set(rpki_origin_as_validity_signal_ibgp.yfilter)
	|| ydk::is_set(update_error_handling_basic_ebgp_disable.yfilter)
	|| ydk::is_set(update_error_handling_basic_ibgp_disable.yfilter)
	|| ydk::is_set(update_error_handling_extended_ebgp.yfilter)
	|| ydk::is_set(update_error_handling_extended_ibgp.yfilter)
	|| ydk::is_set(update_limit_process.yfilter)
	|| ydk::is_set(update_out_logging.yfilter)
	|| (as_league !=  nullptr && as_league->has_operation())
	|| (as_list_groups !=  nullptr && as_list_groups->has_operation())
	|| (attribute_filter_groups !=  nullptr && attribute_filter_groups->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (cluster_id !=  nullptr && cluster_id->has_operation())
	|| (confederation_domain !=  nullptr && confederation_domain->has_operation())
	|| (confederation_peer_ases !=  nullptr && confederation_peer_ases->has_operation())
	|| (global_afs !=  nullptr && global_afs->has_operation())
	|| (global_graceful_maintenance_activate !=  nullptr && global_graceful_maintenance_activate->has_operation())
	|| (global_timers !=  nullptr && global_timers->has_operation())
	|| (limits !=  nullptr && limits->has_operation())
	|| (mpls_activated_interfaces !=  nullptr && mpls_activated_interfaces->has_operation())
	|| (receive_socket_buffer_sizes !=  nullptr && receive_socket_buffer_sizes->has_operation())
	|| (rpki_servers !=  nullptr && rpki_servers->has_operation())
	|| (rpki_static_routes !=  nullptr && rpki_static_routes->has_operation())
	|| (send_socket_buffer_sizes !=  nullptr && send_socket_buffer_sizes->has_operation())
	|| (update_delay !=  nullptr && update_delay->has_operation())
	|| (write_limit !=  nullptr && write_limit->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (best_path_aigp_ignore.is_set || is_set(best_path_aigp_ignore.yfilter)) leaf_name_data.push_back(best_path_aigp_ignore.get_name_leafdata());
    if (best_path_as_multipath_relax.is_set || is_set(best_path_as_multipath_relax.yfilter)) leaf_name_data.push_back(best_path_as_multipath_relax.get_name_leafdata());
    if (best_path_as_path_length.is_set || is_set(best_path_as_path_length.yfilter)) leaf_name_data.push_back(best_path_as_path_length.get_name_leafdata());
    if (best_path_confederation_paths.is_set || is_set(best_path_confederation_paths.yfilter)) leaf_name_data.push_back(best_path_confederation_paths.get_name_leafdata());
    if (best_path_cost_community.is_set || is_set(best_path_cost_community.yfilter)) leaf_name_data.push_back(best_path_cost_community.get_name_leafdata());
    if (best_path_med_always.is_set || is_set(best_path_med_always.yfilter)) leaf_name_data.push_back(best_path_med_always.get_name_leafdata());
    if (best_path_med_missing.is_set || is_set(best_path_med_missing.yfilter)) leaf_name_data.push_back(best_path_med_missing.get_name_leafdata());
    if (best_path_router_id.is_set || is_set(best_path_router_id.yfilter)) leaf_name_data.push_back(best_path_router_id.get_name_leafdata());
    if (default_info_originate.is_set || is_set(default_info_originate.yfilter)) leaf_name_data.push_back(default_info_originate.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (disable_auto_soft_reset.is_set || is_set(disable_auto_soft_reset.yfilter)) leaf_name_data.push_back(disable_auto_soft_reset.get_name_leafdata());
    if (disable_enforce_first_as.is_set || is_set(disable_enforce_first_as.yfilter)) leaf_name_data.push_back(disable_enforce_first_as.get_name_leafdata());
    if (disable_fast_external_fallover.is_set || is_set(disable_fast_external_fallover.yfilter)) leaf_name_data.push_back(disable_fast_external_fallover.get_name_leafdata());
    if (disable_msg_log.is_set || is_set(disable_msg_log.yfilter)) leaf_name_data.push_back(disable_msg_log.get_name_leafdata());
    if (disable_neighbor_logging.is_set || is_set(disable_neighbor_logging.yfilter)) leaf_name_data.push_back(disable_neighbor_logging.get_name_leafdata());
    if (enforce_ibgp_out_policy.is_set || is_set(enforce_ibgp_out_policy.yfilter)) leaf_name_data.push_back(enforce_ibgp_out_policy.get_name_leafdata());
    if (global_scan_time.is_set || is_set(global_scan_time.yfilter)) leaf_name_data.push_back(global_scan_time.get_name_leafdata());
    if (graceful_reset.is_set || is_set(graceful_reset.yfilter)) leaf_name_data.push_back(graceful_reset.get_name_leafdata());
    if (graceful_restart.is_set || is_set(graceful_restart.yfilter)) leaf_name_data.push_back(graceful_restart.get_name_leafdata());
    if (graceful_restart_purge_time.is_set || is_set(graceful_restart_purge_time.yfilter)) leaf_name_data.push_back(graceful_restart_purge_time.get_name_leafdata());
    if (graceful_restart_stalepath_time.is_set || is_set(graceful_restart_stalepath_time.yfilter)) leaf_name_data.push_back(graceful_restart_stalepath_time.get_name_leafdata());
    if (graceful_restart_time.is_set || is_set(graceful_restart_time.yfilter)) leaf_name_data.push_back(graceful_restart_time.get_name_leafdata());
    if (igp_loop_check.is_set || is_set(igp_loop_check.yfilter)) leaf_name_data.push_back(igp_loop_check.get_name_leafdata());
    if (igp_redist_internal.is_set || is_set(igp_redist_internal.yfilter)) leaf_name_data.push_back(igp_redist_internal.get_name_leafdata());
    if (install_diversion.is_set || is_set(install_diversion.yfilter)) leaf_name_data.push_back(install_diversion.get_name_leafdata());
    if (local_preference.is_set || is_set(local_preference.yfilter)) leaf_name_data.push_back(local_preference.get_name_leafdata());
    if (multi_path_as_path_ignore_onwards.is_set || is_set(multi_path_as_path_ignore_onwards.yfilter)) leaf_name_data.push_back(multi_path_as_path_ignore_onwards.get_name_leafdata());
    if (mvpn.is_set || is_set(mvpn.yfilter)) leaf_name_data.push_back(mvpn.get_name_leafdata());
    if (neighbor_logging_detail.is_set || is_set(neighbor_logging_detail.yfilter)) leaf_name_data.push_back(neighbor_logging_detail.get_name_leafdata());
    if (next_hop_trigger_delay.is_set || is_set(next_hop_trigger_delay.yfilter)) leaf_name_data.push_back(next_hop_trigger_delay.get_name_leafdata());
    if (nsr.is_set || is_set(nsr.yfilter)) leaf_name_data.push_back(nsr.get_name_leafdata());
    if (read_only.is_set || is_set(read_only.yfilter)) leaf_name_data.push_back(read_only.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (rpki_bestpath_origin_as_allow_invalid.is_set || is_set(rpki_bestpath_origin_as_allow_invalid.yfilter)) leaf_name_data.push_back(rpki_bestpath_origin_as_allow_invalid.get_name_leafdata());
    if (rpki_bestpath_use_origin_as_validity.is_set || is_set(rpki_bestpath_use_origin_as_validity.yfilter)) leaf_name_data.push_back(rpki_bestpath_use_origin_as_validity.get_name_leafdata());
    if (rpki_origin_as_validation_disable.is_set || is_set(rpki_origin_as_validation_disable.yfilter)) leaf_name_data.push_back(rpki_origin_as_validation_disable.get_name_leafdata());
    if (rpki_origin_as_validation_time.is_set || is_set(rpki_origin_as_validation_time.yfilter)) leaf_name_data.push_back(rpki_origin_as_validation_time.get_name_leafdata());
    if (rpki_origin_as_validity_signal_ibgp.is_set || is_set(rpki_origin_as_validity_signal_ibgp.yfilter)) leaf_name_data.push_back(rpki_origin_as_validity_signal_ibgp.get_name_leafdata());
    if (update_error_handling_basic_ebgp_disable.is_set || is_set(update_error_handling_basic_ebgp_disable.yfilter)) leaf_name_data.push_back(update_error_handling_basic_ebgp_disable.get_name_leafdata());
    if (update_error_handling_basic_ibgp_disable.is_set || is_set(update_error_handling_basic_ibgp_disable.yfilter)) leaf_name_data.push_back(update_error_handling_basic_ibgp_disable.get_name_leafdata());
    if (update_error_handling_extended_ebgp.is_set || is_set(update_error_handling_extended_ebgp.yfilter)) leaf_name_data.push_back(update_error_handling_extended_ebgp.get_name_leafdata());
    if (update_error_handling_extended_ibgp.is_set || is_set(update_error_handling_extended_ibgp.yfilter)) leaf_name_data.push_back(update_error_handling_extended_ibgp.get_name_leafdata());
    if (update_limit_process.is_set || is_set(update_limit_process.yfilter)) leaf_name_data.push_back(update_limit_process.get_name_leafdata());
    if (update_out_logging.is_set || is_set(update_out_logging.yfilter)) leaf_name_data.push_back(update_out_logging.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as-league")
    {
        if(as_league == nullptr)
        {
            as_league = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague>();
        }
        return as_league;
    }

    if(child_yang_name == "as-list-groups")
    {
        if(as_list_groups == nullptr)
        {
            as_list_groups = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups>();
        }
        return as_list_groups;
    }

    if(child_yang_name == "attribute-filter-groups")
    {
        if(attribute_filter_groups == nullptr)
        {
            attribute_filter_groups = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups>();
        }
        return attribute_filter_groups;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "cluster-id")
    {
        if(cluster_id == nullptr)
        {
            cluster_id = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ClusterId>();
        }
        return cluster_id;
    }

    if(child_yang_name == "confederation-domain")
    {
        if(confederation_domain == nullptr)
        {
            confederation_domain = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationDomain>();
        }
        return confederation_domain;
    }

    if(child_yang_name == "confederation-peer-ases")
    {
        if(confederation_peer_ases == nullptr)
        {
            confederation_peer_ases = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses>();
        }
        return confederation_peer_ases;
    }

    if(child_yang_name == "global-afs")
    {
        if(global_afs == nullptr)
        {
            global_afs = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs>();
        }
        return global_afs;
    }

    if(child_yang_name == "global-graceful-maintenance-activate")
    {
        if(global_graceful_maintenance_activate == nullptr)
        {
            global_graceful_maintenance_activate = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalGracefulMaintenanceActivate>();
        }
        return global_graceful_maintenance_activate;
    }

    if(child_yang_name == "global-timers")
    {
        if(global_timers == nullptr)
        {
            global_timers = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalTimers>();
        }
        return global_timers;
    }

    if(child_yang_name == "limits")
    {
        if(limits == nullptr)
        {
            limits = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Limits>();
        }
        return limits;
    }

    if(child_yang_name == "mpls-activated-interfaces")
    {
        if(mpls_activated_interfaces == nullptr)
        {
            mpls_activated_interfaces = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces>();
        }
        return mpls_activated_interfaces;
    }

    if(child_yang_name == "receive-socket-buffer-sizes")
    {
        if(receive_socket_buffer_sizes == nullptr)
        {
            receive_socket_buffer_sizes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ReceiveSocketBufferSizes>();
        }
        return receive_socket_buffer_sizes;
    }

    if(child_yang_name == "rpki-servers")
    {
        if(rpki_servers == nullptr)
        {
            rpki_servers = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers>();
        }
        return rpki_servers;
    }

    if(child_yang_name == "rpki-static-routes")
    {
        if(rpki_static_routes == nullptr)
        {
            rpki_static_routes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes>();
        }
        return rpki_static_routes;
    }

    if(child_yang_name == "send-socket-buffer-sizes")
    {
        if(send_socket_buffer_sizes == nullptr)
        {
            send_socket_buffer_sizes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::SendSocketBufferSizes>();
        }
        return send_socket_buffer_sizes;
    }

    if(child_yang_name == "update-delay")
    {
        if(update_delay == nullptr)
        {
            update_delay = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::UpdateDelay>();
        }
        return update_delay;
    }

    if(child_yang_name == "write-limit")
    {
        if(write_limit == nullptr)
        {
            write_limit = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::WriteLimit>();
        }
        return write_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(as_league != nullptr)
    {
        children["as-league"] = as_league;
    }

    if(as_list_groups != nullptr)
    {
        children["as-list-groups"] = as_list_groups;
    }

    if(attribute_filter_groups != nullptr)
    {
        children["attribute-filter-groups"] = attribute_filter_groups;
    }

    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(cluster_id != nullptr)
    {
        children["cluster-id"] = cluster_id;
    }

    if(confederation_domain != nullptr)
    {
        children["confederation-domain"] = confederation_domain;
    }

    if(confederation_peer_ases != nullptr)
    {
        children["confederation-peer-ases"] = confederation_peer_ases;
    }

    if(global_afs != nullptr)
    {
        children["global-afs"] = global_afs;
    }

    if(global_graceful_maintenance_activate != nullptr)
    {
        children["global-graceful-maintenance-activate"] = global_graceful_maintenance_activate;
    }

    if(global_timers != nullptr)
    {
        children["global-timers"] = global_timers;
    }

    if(limits != nullptr)
    {
        children["limits"] = limits;
    }

    if(mpls_activated_interfaces != nullptr)
    {
        children["mpls-activated-interfaces"] = mpls_activated_interfaces;
    }

    if(receive_socket_buffer_sizes != nullptr)
    {
        children["receive-socket-buffer-sizes"] = receive_socket_buffer_sizes;
    }

    if(rpki_servers != nullptr)
    {
        children["rpki-servers"] = rpki_servers;
    }

    if(rpki_static_routes != nullptr)
    {
        children["rpki-static-routes"] = rpki_static_routes;
    }

    if(send_socket_buffer_sizes != nullptr)
    {
        children["send-socket-buffer-sizes"] = send_socket_buffer_sizes;
    }

    if(update_delay != nullptr)
    {
        children["update-delay"] = update_delay;
    }

    if(write_limit != nullptr)
    {
        children["write-limit"] = write_limit;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "best-path-aigp-ignore")
    {
        best_path_aigp_ignore = value;
        best_path_aigp_ignore.value_namespace = name_space;
        best_path_aigp_ignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-path-as-multipath-relax")
    {
        best_path_as_multipath_relax = value;
        best_path_as_multipath_relax.value_namespace = name_space;
        best_path_as_multipath_relax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-path-as-path-length")
    {
        best_path_as_path_length = value;
        best_path_as_path_length.value_namespace = name_space;
        best_path_as_path_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-path-confederation-paths")
    {
        best_path_confederation_paths = value;
        best_path_confederation_paths.value_namespace = name_space;
        best_path_confederation_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-path-cost-community")
    {
        best_path_cost_community = value;
        best_path_cost_community.value_namespace = name_space;
        best_path_cost_community.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-path-med-always")
    {
        best_path_med_always = value;
        best_path_med_always.value_namespace = name_space;
        best_path_med_always.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-path-med-missing")
    {
        best_path_med_missing = value;
        best_path_med_missing.value_namespace = name_space;
        best_path_med_missing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-path-router-id")
    {
        best_path_router_id = value;
        best_path_router_id.value_namespace = name_space;
        best_path_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-info-originate")
    {
        default_info_originate = value;
        default_info_originate.value_namespace = name_space;
        default_info_originate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-auto-soft-reset")
    {
        disable_auto_soft_reset = value;
        disable_auto_soft_reset.value_namespace = name_space;
        disable_auto_soft_reset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-enforce-first-as")
    {
        disable_enforce_first_as = value;
        disable_enforce_first_as.value_namespace = name_space;
        disable_enforce_first_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-fast-external-fallover")
    {
        disable_fast_external_fallover = value;
        disable_fast_external_fallover.value_namespace = name_space;
        disable_fast_external_fallover.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-msg-log")
    {
        disable_msg_log = value;
        disable_msg_log.value_namespace = name_space;
        disable_msg_log.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-neighbor-logging")
    {
        disable_neighbor_logging = value;
        disable_neighbor_logging.value_namespace = name_space;
        disable_neighbor_logging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enforce-ibgp-out-policy")
    {
        enforce_ibgp_out_policy = value;
        enforce_ibgp_out_policy.value_namespace = name_space;
        enforce_ibgp_out_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-scan-time")
    {
        global_scan_time = value;
        global_scan_time.value_namespace = name_space;
        global_scan_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "graceful-reset")
    {
        graceful_reset = value;
        graceful_reset.value_namespace = name_space;
        graceful_reset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "graceful-restart")
    {
        graceful_restart = value;
        graceful_restart.value_namespace = name_space;
        graceful_restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "graceful-restart-purge-time")
    {
        graceful_restart_purge_time = value;
        graceful_restart_purge_time.value_namespace = name_space;
        graceful_restart_purge_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "graceful-restart-stalepath-time")
    {
        graceful_restart_stalepath_time = value;
        graceful_restart_stalepath_time.value_namespace = name_space;
        graceful_restart_stalepath_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "graceful-restart-time")
    {
        graceful_restart_time = value;
        graceful_restart_time.value_namespace = name_space;
        graceful_restart_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-loop-check")
    {
        igp_loop_check = value;
        igp_loop_check.value_namespace = name_space;
        igp_loop_check.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-redist-internal")
    {
        igp_redist_internal = value;
        igp_redist_internal.value_namespace = name_space;
        igp_redist_internal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "install-diversion")
    {
        install_diversion = value;
        install_diversion.value_namespace = name_space;
        install_diversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-preference")
    {
        local_preference = value;
        local_preference.value_namespace = name_space;
        local_preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multi-path-as-path-ignore-onwards")
    {
        multi_path_as_path_ignore_onwards = value;
        multi_path_as_path_ignore_onwards.value_namespace = name_space;
        multi_path_as_path_ignore_onwards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mvpn")
    {
        mvpn = value;
        mvpn.value_namespace = name_space;
        mvpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-logging-detail")
    {
        neighbor_logging_detail = value;
        neighbor_logging_detail.value_namespace = name_space;
        neighbor_logging_detail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-trigger-delay")
    {
        next_hop_trigger_delay = value;
        next_hop_trigger_delay.value_namespace = name_space;
        next_hop_trigger_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr")
    {
        nsr = value;
        nsr.value_namespace = name_space;
        nsr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "read-only")
    {
        read_only = value;
        read_only.value_namespace = name_space;
        read_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-bestpath-origin-as-allow-invalid")
    {
        rpki_bestpath_origin_as_allow_invalid = value;
        rpki_bestpath_origin_as_allow_invalid.value_namespace = name_space;
        rpki_bestpath_origin_as_allow_invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-bestpath-use-origin-as-validity")
    {
        rpki_bestpath_use_origin_as_validity = value;
        rpki_bestpath_use_origin_as_validity.value_namespace = name_space;
        rpki_bestpath_use_origin_as_validity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-origin-as-validation-disable")
    {
        rpki_origin_as_validation_disable = value;
        rpki_origin_as_validation_disable.value_namespace = name_space;
        rpki_origin_as_validation_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-origin-as-validation-time")
    {
        rpki_origin_as_validation_time = value;
        rpki_origin_as_validation_time.value_namespace = name_space;
        rpki_origin_as_validation_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-origin-as-validity-signal-ibgp")
    {
        rpki_origin_as_validity_signal_ibgp = value;
        rpki_origin_as_validity_signal_ibgp.value_namespace = name_space;
        rpki_origin_as_validity_signal_ibgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-error-handling-basic-ebgp-disable")
    {
        update_error_handling_basic_ebgp_disable = value;
        update_error_handling_basic_ebgp_disable.value_namespace = name_space;
        update_error_handling_basic_ebgp_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-error-handling-basic-ibgp-disable")
    {
        update_error_handling_basic_ibgp_disable = value;
        update_error_handling_basic_ibgp_disable.value_namespace = name_space;
        update_error_handling_basic_ibgp_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-error-handling-extended-ebgp")
    {
        update_error_handling_extended_ebgp = value;
        update_error_handling_extended_ebgp.value_namespace = name_space;
        update_error_handling_extended_ebgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-error-handling-extended-ibgp")
    {
        update_error_handling_extended_ibgp = value;
        update_error_handling_extended_ibgp.value_namespace = name_space;
        update_error_handling_extended_ibgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-limit-process")
    {
        update_limit_process = value;
        update_limit_process.value_namespace = name_space;
        update_limit_process.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-out-logging")
    {
        update_out_logging = value;
        update_out_logging.value_namespace = name_space;
        update_out_logging.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "best-path-aigp-ignore")
    {
        best_path_aigp_ignore.yfilter = yfilter;
    }
    if(value_path == "best-path-as-multipath-relax")
    {
        best_path_as_multipath_relax.yfilter = yfilter;
    }
    if(value_path == "best-path-as-path-length")
    {
        best_path_as_path_length.yfilter = yfilter;
    }
    if(value_path == "best-path-confederation-paths")
    {
        best_path_confederation_paths.yfilter = yfilter;
    }
    if(value_path == "best-path-cost-community")
    {
        best_path_cost_community.yfilter = yfilter;
    }
    if(value_path == "best-path-med-always")
    {
        best_path_med_always.yfilter = yfilter;
    }
    if(value_path == "best-path-med-missing")
    {
        best_path_med_missing.yfilter = yfilter;
    }
    if(value_path == "best-path-router-id")
    {
        best_path_router_id.yfilter = yfilter;
    }
    if(value_path == "default-info-originate")
    {
        default_info_originate.yfilter = yfilter;
    }
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "disable-auto-soft-reset")
    {
        disable_auto_soft_reset.yfilter = yfilter;
    }
    if(value_path == "disable-enforce-first-as")
    {
        disable_enforce_first_as.yfilter = yfilter;
    }
    if(value_path == "disable-fast-external-fallover")
    {
        disable_fast_external_fallover.yfilter = yfilter;
    }
    if(value_path == "disable-msg-log")
    {
        disable_msg_log.yfilter = yfilter;
    }
    if(value_path == "disable-neighbor-logging")
    {
        disable_neighbor_logging.yfilter = yfilter;
    }
    if(value_path == "enforce-ibgp-out-policy")
    {
        enforce_ibgp_out_policy.yfilter = yfilter;
    }
    if(value_path == "global-scan-time")
    {
        global_scan_time.yfilter = yfilter;
    }
    if(value_path == "graceful-reset")
    {
        graceful_reset.yfilter = yfilter;
    }
    if(value_path == "graceful-restart")
    {
        graceful_restart.yfilter = yfilter;
    }
    if(value_path == "graceful-restart-purge-time")
    {
        graceful_restart_purge_time.yfilter = yfilter;
    }
    if(value_path == "graceful-restart-stalepath-time")
    {
        graceful_restart_stalepath_time.yfilter = yfilter;
    }
    if(value_path == "graceful-restart-time")
    {
        graceful_restart_time.yfilter = yfilter;
    }
    if(value_path == "igp-loop-check")
    {
        igp_loop_check.yfilter = yfilter;
    }
    if(value_path == "igp-redist-internal")
    {
        igp_redist_internal.yfilter = yfilter;
    }
    if(value_path == "install-diversion")
    {
        install_diversion.yfilter = yfilter;
    }
    if(value_path == "local-preference")
    {
        local_preference.yfilter = yfilter;
    }
    if(value_path == "multi-path-as-path-ignore-onwards")
    {
        multi_path_as_path_ignore_onwards.yfilter = yfilter;
    }
    if(value_path == "mvpn")
    {
        mvpn.yfilter = yfilter;
    }
    if(value_path == "neighbor-logging-detail")
    {
        neighbor_logging_detail.yfilter = yfilter;
    }
    if(value_path == "next-hop-trigger-delay")
    {
        next_hop_trigger_delay.yfilter = yfilter;
    }
    if(value_path == "nsr")
    {
        nsr.yfilter = yfilter;
    }
    if(value_path == "read-only")
    {
        read_only.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "rpki-bestpath-origin-as-allow-invalid")
    {
        rpki_bestpath_origin_as_allow_invalid.yfilter = yfilter;
    }
    if(value_path == "rpki-bestpath-use-origin-as-validity")
    {
        rpki_bestpath_use_origin_as_validity.yfilter = yfilter;
    }
    if(value_path == "rpki-origin-as-validation-disable")
    {
        rpki_origin_as_validation_disable.yfilter = yfilter;
    }
    if(value_path == "rpki-origin-as-validation-time")
    {
        rpki_origin_as_validation_time.yfilter = yfilter;
    }
    if(value_path == "rpki-origin-as-validity-signal-ibgp")
    {
        rpki_origin_as_validity_signal_ibgp.yfilter = yfilter;
    }
    if(value_path == "update-error-handling-basic-ebgp-disable")
    {
        update_error_handling_basic_ebgp_disable.yfilter = yfilter;
    }
    if(value_path == "update-error-handling-basic-ibgp-disable")
    {
        update_error_handling_basic_ibgp_disable.yfilter = yfilter;
    }
    if(value_path == "update-error-handling-extended-ebgp")
    {
        update_error_handling_extended_ebgp.yfilter = yfilter;
    }
    if(value_path == "update-error-handling-extended-ibgp")
    {
        update_error_handling_extended_ibgp.yfilter = yfilter;
    }
    if(value_path == "update-limit-process")
    {
        update_limit_process.yfilter = yfilter;
    }
    if(value_path == "update-out-logging")
    {
        update_out_logging.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-league" || name == "as-list-groups" || name == "attribute-filter-groups" || name == "bfd" || name == "cluster-id" || name == "confederation-domain" || name == "confederation-peer-ases" || name == "global-afs" || name == "global-graceful-maintenance-activate" || name == "global-timers" || name == "limits" || name == "mpls-activated-interfaces" || name == "receive-socket-buffer-sizes" || name == "rpki-servers" || name == "rpki-static-routes" || name == "send-socket-buffer-sizes" || name == "update-delay" || name == "write-limit" || name == "best-path-aigp-ignore" || name == "best-path-as-multipath-relax" || name == "best-path-as-path-length" || name == "best-path-confederation-paths" || name == "best-path-cost-community" || name == "best-path-med-always" || name == "best-path-med-missing" || name == "best-path-router-id" || name == "default-info-originate" || name == "default-metric" || name == "disable-auto-soft-reset" || name == "disable-enforce-first-as" || name == "disable-fast-external-fallover" || name == "disable-msg-log" || name == "disable-neighbor-logging" || name == "enforce-ibgp-out-policy" || name == "global-scan-time" || name == "graceful-reset" || name == "graceful-restart" || name == "graceful-restart-purge-time" || name == "graceful-restart-stalepath-time" || name == "graceful-restart-time" || name == "igp-loop-check" || name == "igp-redist-internal" || name == "install-diversion" || name == "local-preference" || name == "multi-path-as-path-ignore-onwards" || name == "mvpn" || name == "neighbor-logging-detail" || name == "next-hop-trigger-delay" || name == "nsr" || name == "read-only" || name == "router-id" || name == "rpki-bestpath-origin-as-allow-invalid" || name == "rpki-bestpath-use-origin-as-validity" || name == "rpki-origin-as-validation-disable" || name == "rpki-origin-as-validation-time" || name == "rpki-origin-as-validity-signal-ibgp" || name == "update-error-handling-basic-ebgp-disable" || name == "update-error-handling-basic-ibgp-disable" || name == "update-error-handling-extended-ebgp" || name == "update-error-handling-extended-ibgp" || name == "update-limit-process" || name == "update-out-logging")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::AsLeague()
    :
    enable{YType::empty, "enable"}
    	,
    peers(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers>())
{
    peers->parent = this;

    yang_name = "as-league"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::~AsLeague()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::has_data() const
{
    return enable.is_set
	|| (peers !=  nullptr && peers->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (peers !=  nullptr && peers->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-league";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peers")
    {
        if(peers == nullptr)
        {
            peers = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers>();
        }
        return peers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peers != nullptr)
    {
        children["peers"] = peers;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peers" || name == "enable")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::Peers()
{

    yang_name = "peers"; yang_parent_name = "as-league"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::~Peers()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        for(auto const & c : peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::Peer>();
        c->parent = this;
        peer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::Peer::Peer()
    :
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"}
{

    yang_name = "peer"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::Peer::~Peer()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::Peer::has_data() const
{
    return as_xx.is_set
	|| as_yy.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(as_yy.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[as-xx='" <<as_xx <<"']" <<"[as-yy='" <<as_yy <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.yfilter)) leaf_name_data.push_back(as_yy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
        as_xx.value_namespace = name_space;
        as_xx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-yy")
    {
        as_yy = value;
        as_yy.value_namespace = name_space;
        as_yy.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-xx")
    {
        as_xx.yfilter = yfilter;
    }
    if(value_path == "as-yy")
    {
        as_yy.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-xx" || name == "as-yy")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroups()
{

    yang_name = "as-list-groups"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::~AsListGroups()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::has_data() const
{
    for (std::size_t index=0; index<as_list_group.size(); index++)
    {
        if(as_list_group[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::has_operation() const
{
    for (std::size_t index=0; index<as_list_group.size(); index++)
    {
        if(as_list_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-list-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as-list-group")
    {
        for(auto const & c : as_list_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup>();
        c->parent = this;
        as_list_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : as_list_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-list-group")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::AsListGroup()
    :
    as_list_group_name{YType::str, "as-list-group-name"},
    enable{YType::empty, "enable"}
    	,
    ases(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases>())
{
    ases->parent = this;

    yang_name = "as-list-group"; yang_parent_name = "as-list-groups"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::~AsListGroup()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::has_data() const
{
    return as_list_group_name.is_set
	|| enable.is_set
	|| (ases !=  nullptr && ases->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_list_group_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (ases !=  nullptr && ases->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-list-group" <<"[as-list-group-name='" <<as_list_group_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_list_group_name.is_set || is_set(as_list_group_name.yfilter)) leaf_name_data.push_back(as_list_group_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ases")
    {
        if(ases == nullptr)
        {
            ases = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases>();
        }
        return ases;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ases != nullptr)
    {
        children["ases"] = ases;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-list-group-name")
    {
        as_list_group_name = value;
        as_list_group_name.value_namespace = name_space;
        as_list_group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-list-group-name")
    {
        as_list_group_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ases" || name == "as-list-group-name" || name == "enable")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::Ases()
{

    yang_name = "ases"; yang_parent_name = "as-list-group"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::~Ases()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::has_data() const
{
    for (std::size_t index=0; index<as.size(); index++)
    {
        if(as[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::has_operation() const
{
    for (std::size_t index=0; index<as.size(); index++)
    {
        if(as[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ases";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as")
    {
        for(auto const & c : as)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::As>();
        c->parent = this;
        as.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : as)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::As::As()
    :
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"}
{

    yang_name = "as"; yang_parent_name = "ases"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::As::~As()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::As::has_data() const
{
    return as_xx.is_set
	|| as_yy.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::As::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(as_yy.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::As::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as" <<"[as-xx='" <<as_xx <<"']" <<"[as-yy='" <<as_yy <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::As::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.yfilter)) leaf_name_data.push_back(as_yy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::As::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::As::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::As::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
        as_xx.value_namespace = name_space;
        as_xx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-yy")
    {
        as_yy = value;
        as_yy.value_namespace = name_space;
        as_yy.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::As::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-xx")
    {
        as_xx.yfilter = yfilter;
    }
    if(value_path == "as-yy")
    {
        as_yy.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::As::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-xx" || name == "as-yy")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroups()
{

    yang_name = "attribute-filter-groups"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::~AttributeFilterGroups()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::has_data() const
{
    for (std::size_t index=0; index<attribute_filter_group.size(); index++)
    {
        if(attribute_filter_group[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::has_operation() const
{
    for (std::size_t index=0; index<attribute_filter_group.size(); index++)
    {
        if(attribute_filter_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-filter-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup>();
        c->parent = this;
        attribute_filter_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : attribute_filter_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-filter-group")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilterGroup()
    :
    attribute_filter_group_name{YType::str, "attribute-filter-group-name"},
    enable{YType::empty, "enable"}
    	,
    attribute_filters(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters>())
{
    attribute_filters->parent = this;

    yang_name = "attribute-filter-group"; yang_parent_name = "attribute-filter-groups"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::~AttributeFilterGroup()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::has_data() const
{
    return attribute_filter_group_name.is_set
	|| enable.is_set
	|| (attribute_filters !=  nullptr && attribute_filters->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute_filter_group_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (attribute_filters !=  nullptr && attribute_filters->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-filter-group" <<"[attribute-filter-group-name='" <<attribute_filter_group_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_filter_group_name.is_set || is_set(attribute_filter_group_name.yfilter)) leaf_name_data.push_back(attribute_filter_group_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-filters")
    {
        if(attribute_filters == nullptr)
        {
            attribute_filters = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters>();
        }
        return attribute_filters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attribute_filters != nullptr)
    {
        children["attribute-filters"] = attribute_filters;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute-filter-group-name")
    {
        attribute_filter_group_name = value;
        attribute_filter_group_name.value_namespace = name_space;
        attribute_filter_group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute-filter-group-name")
    {
        attribute_filter_group_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-filters" || name == "attribute-filter-group-name" || name == "enable")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::AttributeFilters()
{

    yang_name = "attribute-filters"; yang_parent_name = "attribute-filter-group"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::~AttributeFilters()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::has_data() const
{
    for (std::size_t index=0; index<attribute_filter.size(); index++)
    {
        if(attribute_filter[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::has_operation() const
{
    for (std::size_t index=0; index<attribute_filter.size(); index++)
    {
        if(attribute_filter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-filters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-filter")
    {
        for(auto const & c : attribute_filter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::AttributeFilter>();
        c->parent = this;
        attribute_filter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : attribute_filter)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-filter")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::AttributeFilter::AttributeFilter()
    :
    attribute_start{YType::uint32, "attribute-start"},
    attribute_end{YType::uint32, "attribute-end"},
    filter_action{YType::enumeration, "filter-action"}
{

    yang_name = "attribute-filter"; yang_parent_name = "attribute-filters"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::AttributeFilter::~AttributeFilter()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::AttributeFilter::has_data() const
{
    return attribute_start.is_set
	|| attribute_end.is_set
	|| filter_action.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::AttributeFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute_start.yfilter)
	|| ydk::is_set(attribute_end.yfilter)
	|| ydk::is_set(filter_action.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::AttributeFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-filter" <<"[attribute-start='" <<attribute_start <<"']" <<"[attribute-end='" <<attribute_end <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::AttributeFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_start.is_set || is_set(attribute_start.yfilter)) leaf_name_data.push_back(attribute_start.get_name_leafdata());
    if (attribute_end.is_set || is_set(attribute_end.yfilter)) leaf_name_data.push_back(attribute_end.get_name_leafdata());
    if (filter_action.is_set || is_set(filter_action.yfilter)) leaf_name_data.push_back(filter_action.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::AttributeFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::AttributeFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::AttributeFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute-start")
    {
        attribute_start = value;
        attribute_start.value_namespace = name_space;
        attribute_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-end")
    {
        attribute_end = value;
        attribute_end.value_namespace = name_space;
        attribute_end.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filter-action")
    {
        filter_action = value;
        filter_action.value_namespace = name_space;
        filter_action.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::AttributeFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute-start")
    {
        attribute_start.yfilter = yfilter;
    }
    if(value_path == "attribute-end")
    {
        attribute_end.yfilter = yfilter;
    }
    if(value_path == "filter-action")
    {
        filter_action.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::AttributeFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-start" || name == "attribute-end" || name == "filter-action")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Bfd::Bfd()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    interval{YType::uint32, "interval"}
{

    yang_name = "bfd"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Bfd::~Bfd()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Bfd::has_data() const
{
    return detection_multiplier.is_set
	|| interval.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection-multiplier" || name == "interval")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ClusterId::ClusterId()
    :
    cluster_id_address{YType::str, "cluster-id-address"},
    cluster_id_number{YType::uint32, "cluster-id-number"}
{

    yang_name = "cluster-id"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ClusterId::~ClusterId()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ClusterId::has_data() const
{
    return cluster_id_address.is_set
	|| cluster_id_number.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ClusterId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cluster_id_address.yfilter)
	|| ydk::is_set(cluster_id_number.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ClusterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cluster-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ClusterId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cluster_id_address.is_set || is_set(cluster_id_address.yfilter)) leaf_name_data.push_back(cluster_id_address.get_name_leafdata());
    if (cluster_id_number.is_set || is_set(cluster_id_number.yfilter)) leaf_name_data.push_back(cluster_id_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ClusterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ClusterId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ClusterId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cluster-id-address")
    {
        cluster_id_address = value;
        cluster_id_address.value_namespace = name_space;
        cluster_id_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster-id-number")
    {
        cluster_id_number = value;
        cluster_id_number.value_namespace = name_space;
        cluster_id_number.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ClusterId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cluster-id-address")
    {
        cluster_id_address.yfilter = yfilter;
    }
    if(value_path == "cluster-id-number")
    {
        cluster_id_number.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ClusterId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cluster-id-address" || name == "cluster-id-number")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationDomain::ConfederationDomain()
    :
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"}
{

    yang_name = "confederation-domain"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationDomain::~ConfederationDomain()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationDomain::has_data() const
{
    return as_xx.is_set
	|| as_yy.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationDomain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(as_yy.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationDomain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "confederation-domain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationDomain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.yfilter)) leaf_name_data.push_back(as_yy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationDomain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationDomain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationDomain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
        as_xx.value_namespace = name_space;
        as_xx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-yy")
    {
        as_yy = value;
        as_yy.value_namespace = name_space;
        as_yy.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationDomain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-xx")
    {
        as_xx.yfilter = yfilter;
    }
    if(value_path == "as-yy")
    {
        as_yy.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationDomain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-xx" || name == "as-yy")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::ConfederationPeerAses()
{

    yang_name = "confederation-peer-ases"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::~ConfederationPeerAses()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::has_data() const
{
    for (std::size_t index=0; index<confederation_peer_as.size(); index++)
    {
        if(confederation_peer_as[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::has_operation() const
{
    for (std::size_t index=0; index<confederation_peer_as.size(); index++)
    {
        if(confederation_peer_as[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "confederation-peer-ases";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "confederation-peer-as")
    {
        for(auto const & c : confederation_peer_as)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::ConfederationPeerAs>();
        c->parent = this;
        confederation_peer_as.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : confederation_peer_as)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "confederation-peer-as")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::ConfederationPeerAs::ConfederationPeerAs()
    :
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"}
{

    yang_name = "confederation-peer-as"; yang_parent_name = "confederation-peer-ases"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::ConfederationPeerAs::~ConfederationPeerAs()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::ConfederationPeerAs::has_data() const
{
    return as_xx.is_set
	|| as_yy.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::ConfederationPeerAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(as_yy.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::ConfederationPeerAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "confederation-peer-as" <<"[as-xx='" <<as_xx <<"']" <<"[as-yy='" <<as_yy <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::ConfederationPeerAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.yfilter)) leaf_name_data.push_back(as_yy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::ConfederationPeerAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::ConfederationPeerAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::ConfederationPeerAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
        as_xx.value_namespace = name_space;
        as_xx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-yy")
    {
        as_yy = value;
        as_yy.value_namespace = name_space;
        as_yy.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::ConfederationPeerAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-xx")
    {
        as_xx.yfilter = yfilter;
    }
    if(value_path == "as-yy")
    {
        as_yy.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::ConfederationPeerAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-xx" || name == "as-yy")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAfs()
{

    yang_name = "global-afs"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::~GlobalAfs()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::has_data() const
{
    for (std::size_t index=0; index<global_af.size(); index++)
    {
        if(global_af[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::has_operation() const
{
    for (std::size_t index=0; index<global_af.size(); index++)
    {
        if(global_af[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-afs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global-af")
    {
        for(auto const & c : global_af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf>();
        c->parent = this;
        global_af.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : global_af)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-af")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::GlobalAf()
    :
    af_name{YType::enumeration, "af-name"},
    additional_paths_receive{YType::enumeration, "additional-paths-receive"},
    additional_paths_send{YType::enumeration, "additional-paths-send"},
    advertise_local_labeled_route_safi_unicast{YType::enumeration, "advertise-local-labeled-route-safi-unicast"},
    attribute_download{YType::empty, "attribute-download"},
    best_external{YType::boolean, "best-external"},
    disable_as_path_loop_check{YType::empty, "disable-as-path-loop-check"},
    disable_client_to_client_rr{YType::empty, "disable-client-to-client-rr"},
    disable_default_martian_check{YType::empty, "disable-default-martian-check"},
    dynamic_med_interval{YType::uint32, "dynamic-med-interval"},
    enable{YType::empty, "enable"},
    global_table_mcast{YType::empty, "global-table-mcast"},
    inter_as_install{YType::empty, "inter-as-install"},
    label_retain{YType::uint32, "label-retain"},
    label_security_rpf{YType::empty, "label-security-rpf"},
    next_hop_critical_trigger_delay{YType::uint32, "next-hop-critical-trigger-delay"},
    next_hop_non_critical_trigger_delay{YType::uint32, "next-hop-non-critical-trigger-delay"},
    next_hop_resolution_prefix_length_minimum{YType::uint32, "next-hop-resolution-prefix-length-minimum"},
    next_hop_route_policy{YType::str, "next-hop-route-policy"},
    permanent_network{YType::str, "permanent-network"},
    reset_weight_on_import{YType::boolean, "reset-weight-on-import"},
    rnh_install_format{YType::enumeration, "rnh-install-format"},
    rpki_bestpath_origin_as_allow_invalid{YType::empty, "rpki-bestpath-origin-as-allow-invalid"},
    rpki_bestpath_use_origin_as_validity{YType::empty, "rpki-bestpath-use-origin-as-validity"},
    rpki_origin_as_validation_disable{YType::empty, "rpki-origin-as-validation-disable"},
    rpki_origin_as_validity_signal_ibgp{YType::empty, "rpki-origin-as-validity-signal-ibgp"},
    scan_time{YType::uint32, "scan-time"},
    segmented_mcast{YType::empty, "segmented-mcast"},
    table_policy{YType::str, "table-policy"},
    update_limit_address_family{YType::uint32, "update-limit-address-family"},
    update_limit_sub_group_ebgp{YType::uint32, "update-limit-sub-group-ebgp"},
    update_limit_sub_group_ibgp{YType::uint32, "update-limit-sub-group-ibgp"},
    use_igpsr_label{YType::empty, "use-igpsr-label"},
    wait_rib_install{YType::empty, "wait-rib-install"}
    	,
    additional_paths_selection(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AdditionalPathsSelection>())
	,aggregate_addresses(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses>())
	,allocate_label(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AllocateLabel>())
	,application_routes(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes>())
	,connected_routes(nullptr) // presence node
	,dampening(nullptr) // presence node
	,disable_cluster_client_to_client_rrs(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs>())
	,distance(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Distance>())
	,domain_distinguisher(nullptr) // presence node
	,ebgp(nullptr) // presence node
	,eibgp(nullptr) // presence node
	,eigrp_routes(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes>())
	,ibgp(nullptr) // presence node
	,import_delay(nullptr) // presence node
	,isis_routes(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes>())
	,label_delay(nullptr) // presence node
	,label_mode(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelMode>())
	,lisp_routes(nullptr) // presence node
	,mobile_routes(nullptr) // presence node
	,ospf_routes(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes>())
	,retain_rt(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RetainRt>())
	,rip_routes(nullptr) // presence node
	,sourced_networks(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks>())
	,static_routes(nullptr) // presence node
	,subscriber_routes(nullptr) // presence node
	,vrf_all(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll>())
{
    additional_paths_selection->parent = this;
    aggregate_addresses->parent = this;
    allocate_label->parent = this;
    application_routes->parent = this;
    disable_cluster_client_to_client_rrs->parent = this;
    distance->parent = this;
    eigrp_routes->parent = this;
    isis_routes->parent = this;
    label_mode->parent = this;
    ospf_routes->parent = this;
    retain_rt->parent = this;
    sourced_networks->parent = this;
    vrf_all->parent = this;

    yang_name = "global-af"; yang_parent_name = "global-afs"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::~GlobalAf()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::has_data() const
{
    return af_name.is_set
	|| additional_paths_receive.is_set
	|| additional_paths_send.is_set
	|| advertise_local_labeled_route_safi_unicast.is_set
	|| attribute_download.is_set
	|| best_external.is_set
	|| disable_as_path_loop_check.is_set
	|| disable_client_to_client_rr.is_set
	|| disable_default_martian_check.is_set
	|| dynamic_med_interval.is_set
	|| enable.is_set
	|| global_table_mcast.is_set
	|| inter_as_install.is_set
	|| label_retain.is_set
	|| label_security_rpf.is_set
	|| next_hop_critical_trigger_delay.is_set
	|| next_hop_non_critical_trigger_delay.is_set
	|| next_hop_resolution_prefix_length_minimum.is_set
	|| next_hop_route_policy.is_set
	|| permanent_network.is_set
	|| reset_weight_on_import.is_set
	|| rnh_install_format.is_set
	|| rpki_bestpath_origin_as_allow_invalid.is_set
	|| rpki_bestpath_use_origin_as_validity.is_set
	|| rpki_origin_as_validation_disable.is_set
	|| rpki_origin_as_validity_signal_ibgp.is_set
	|| scan_time.is_set
	|| segmented_mcast.is_set
	|| table_policy.is_set
	|| update_limit_address_family.is_set
	|| update_limit_sub_group_ebgp.is_set
	|| update_limit_sub_group_ibgp.is_set
	|| use_igpsr_label.is_set
	|| wait_rib_install.is_set
	|| (additional_paths_selection !=  nullptr && additional_paths_selection->has_data())
	|| (aggregate_addresses !=  nullptr && aggregate_addresses->has_data())
	|| (allocate_label !=  nullptr && allocate_label->has_data())
	|| (application_routes !=  nullptr && application_routes->has_data())
	|| (connected_routes !=  nullptr && connected_routes->has_data())
	|| (dampening !=  nullptr && dampening->has_data())
	|| (disable_cluster_client_to_client_rrs !=  nullptr && disable_cluster_client_to_client_rrs->has_data())
	|| (distance !=  nullptr && distance->has_data())
	|| (domain_distinguisher !=  nullptr && domain_distinguisher->has_data())
	|| (ebgp !=  nullptr && ebgp->has_data())
	|| (eibgp !=  nullptr && eibgp->has_data())
	|| (eigrp_routes !=  nullptr && eigrp_routes->has_data())
	|| (ibgp !=  nullptr && ibgp->has_data())
	|| (import_delay !=  nullptr && import_delay->has_data())
	|| (isis_routes !=  nullptr && isis_routes->has_data())
	|| (label_delay !=  nullptr && label_delay->has_data())
	|| (label_mode !=  nullptr && label_mode->has_data())
	|| (lisp_routes !=  nullptr && lisp_routes->has_data())
	|| (mobile_routes !=  nullptr && mobile_routes->has_data())
	|| (ospf_routes !=  nullptr && ospf_routes->has_data())
	|| (retain_rt !=  nullptr && retain_rt->has_data())
	|| (rip_routes !=  nullptr && rip_routes->has_data())
	|| (sourced_networks !=  nullptr && sourced_networks->has_data())
	|| (static_routes !=  nullptr && static_routes->has_data())
	|| (subscriber_routes !=  nullptr && subscriber_routes->has_data())
	|| (vrf_all !=  nullptr && vrf_all->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(additional_paths_receive.yfilter)
	|| ydk::is_set(additional_paths_send.yfilter)
	|| ydk::is_set(advertise_local_labeled_route_safi_unicast.yfilter)
	|| ydk::is_set(attribute_download.yfilter)
	|| ydk::is_set(best_external.yfilter)
	|| ydk::is_set(disable_as_path_loop_check.yfilter)
	|| ydk::is_set(disable_client_to_client_rr.yfilter)
	|| ydk::is_set(disable_default_martian_check.yfilter)
	|| ydk::is_set(dynamic_med_interval.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(global_table_mcast.yfilter)
	|| ydk::is_set(inter_as_install.yfilter)
	|| ydk::is_set(label_retain.yfilter)
	|| ydk::is_set(label_security_rpf.yfilter)
	|| ydk::is_set(next_hop_critical_trigger_delay.yfilter)
	|| ydk::is_set(next_hop_non_critical_trigger_delay.yfilter)
	|| ydk::is_set(next_hop_resolution_prefix_length_minimum.yfilter)
	|| ydk::is_set(next_hop_route_policy.yfilter)
	|| ydk::is_set(permanent_network.yfilter)
	|| ydk::is_set(reset_weight_on_import.yfilter)
	|| ydk::is_set(rnh_install_format.yfilter)
	|| ydk::is_set(rpki_bestpath_origin_as_allow_invalid.yfilter)
	|| ydk::is_set(rpki_bestpath_use_origin_as_validity.yfilter)
	|| ydk::is_set(rpki_origin_as_validation_disable.yfilter)
	|| ydk::is_set(rpki_origin_as_validity_signal_ibgp.yfilter)
	|| ydk::is_set(scan_time.yfilter)
	|| ydk::is_set(segmented_mcast.yfilter)
	|| ydk::is_set(table_policy.yfilter)
	|| ydk::is_set(update_limit_address_family.yfilter)
	|| ydk::is_set(update_limit_sub_group_ebgp.yfilter)
	|| ydk::is_set(update_limit_sub_group_ibgp.yfilter)
	|| ydk::is_set(use_igpsr_label.yfilter)
	|| ydk::is_set(wait_rib_install.yfilter)
	|| (additional_paths_selection !=  nullptr && additional_paths_selection->has_operation())
	|| (aggregate_addresses !=  nullptr && aggregate_addresses->has_operation())
	|| (allocate_label !=  nullptr && allocate_label->has_operation())
	|| (application_routes !=  nullptr && application_routes->has_operation())
	|| (connected_routes !=  nullptr && connected_routes->has_operation())
	|| (dampening !=  nullptr && dampening->has_operation())
	|| (disable_cluster_client_to_client_rrs !=  nullptr && disable_cluster_client_to_client_rrs->has_operation())
	|| (distance !=  nullptr && distance->has_operation())
	|| (domain_distinguisher !=  nullptr && domain_distinguisher->has_operation())
	|| (ebgp !=  nullptr && ebgp->has_operation())
	|| (eibgp !=  nullptr && eibgp->has_operation())
	|| (eigrp_routes !=  nullptr && eigrp_routes->has_operation())
	|| (ibgp !=  nullptr && ibgp->has_operation())
	|| (import_delay !=  nullptr && import_delay->has_operation())
	|| (isis_routes !=  nullptr && isis_routes->has_operation())
	|| (label_delay !=  nullptr && label_delay->has_operation())
	|| (label_mode !=  nullptr && label_mode->has_operation())
	|| (lisp_routes !=  nullptr && lisp_routes->has_operation())
	|| (mobile_routes !=  nullptr && mobile_routes->has_operation())
	|| (ospf_routes !=  nullptr && ospf_routes->has_operation())
	|| (retain_rt !=  nullptr && retain_rt->has_operation())
	|| (rip_routes !=  nullptr && rip_routes->has_operation())
	|| (sourced_networks !=  nullptr && sourced_networks->has_operation())
	|| (static_routes !=  nullptr && static_routes->has_operation())
	|| (subscriber_routes !=  nullptr && subscriber_routes->has_operation())
	|| (vrf_all !=  nullptr && vrf_all->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-af" <<"[af-name='" <<af_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (additional_paths_receive.is_set || is_set(additional_paths_receive.yfilter)) leaf_name_data.push_back(additional_paths_receive.get_name_leafdata());
    if (additional_paths_send.is_set || is_set(additional_paths_send.yfilter)) leaf_name_data.push_back(additional_paths_send.get_name_leafdata());
    if (advertise_local_labeled_route_safi_unicast.is_set || is_set(advertise_local_labeled_route_safi_unicast.yfilter)) leaf_name_data.push_back(advertise_local_labeled_route_safi_unicast.get_name_leafdata());
    if (attribute_download.is_set || is_set(attribute_download.yfilter)) leaf_name_data.push_back(attribute_download.get_name_leafdata());
    if (best_external.is_set || is_set(best_external.yfilter)) leaf_name_data.push_back(best_external.get_name_leafdata());
    if (disable_as_path_loop_check.is_set || is_set(disable_as_path_loop_check.yfilter)) leaf_name_data.push_back(disable_as_path_loop_check.get_name_leafdata());
    if (disable_client_to_client_rr.is_set || is_set(disable_client_to_client_rr.yfilter)) leaf_name_data.push_back(disable_client_to_client_rr.get_name_leafdata());
    if (disable_default_martian_check.is_set || is_set(disable_default_martian_check.yfilter)) leaf_name_data.push_back(disable_default_martian_check.get_name_leafdata());
    if (dynamic_med_interval.is_set || is_set(dynamic_med_interval.yfilter)) leaf_name_data.push_back(dynamic_med_interval.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (global_table_mcast.is_set || is_set(global_table_mcast.yfilter)) leaf_name_data.push_back(global_table_mcast.get_name_leafdata());
    if (inter_as_install.is_set || is_set(inter_as_install.yfilter)) leaf_name_data.push_back(inter_as_install.get_name_leafdata());
    if (label_retain.is_set || is_set(label_retain.yfilter)) leaf_name_data.push_back(label_retain.get_name_leafdata());
    if (label_security_rpf.is_set || is_set(label_security_rpf.yfilter)) leaf_name_data.push_back(label_security_rpf.get_name_leafdata());
    if (next_hop_critical_trigger_delay.is_set || is_set(next_hop_critical_trigger_delay.yfilter)) leaf_name_data.push_back(next_hop_critical_trigger_delay.get_name_leafdata());
    if (next_hop_non_critical_trigger_delay.is_set || is_set(next_hop_non_critical_trigger_delay.yfilter)) leaf_name_data.push_back(next_hop_non_critical_trigger_delay.get_name_leafdata());
    if (next_hop_resolution_prefix_length_minimum.is_set || is_set(next_hop_resolution_prefix_length_minimum.yfilter)) leaf_name_data.push_back(next_hop_resolution_prefix_length_minimum.get_name_leafdata());
    if (next_hop_route_policy.is_set || is_set(next_hop_route_policy.yfilter)) leaf_name_data.push_back(next_hop_route_policy.get_name_leafdata());
    if (permanent_network.is_set || is_set(permanent_network.yfilter)) leaf_name_data.push_back(permanent_network.get_name_leafdata());
    if (reset_weight_on_import.is_set || is_set(reset_weight_on_import.yfilter)) leaf_name_data.push_back(reset_weight_on_import.get_name_leafdata());
    if (rnh_install_format.is_set || is_set(rnh_install_format.yfilter)) leaf_name_data.push_back(rnh_install_format.get_name_leafdata());
    if (rpki_bestpath_origin_as_allow_invalid.is_set || is_set(rpki_bestpath_origin_as_allow_invalid.yfilter)) leaf_name_data.push_back(rpki_bestpath_origin_as_allow_invalid.get_name_leafdata());
    if (rpki_bestpath_use_origin_as_validity.is_set || is_set(rpki_bestpath_use_origin_as_validity.yfilter)) leaf_name_data.push_back(rpki_bestpath_use_origin_as_validity.get_name_leafdata());
    if (rpki_origin_as_validation_disable.is_set || is_set(rpki_origin_as_validation_disable.yfilter)) leaf_name_data.push_back(rpki_origin_as_validation_disable.get_name_leafdata());
    if (rpki_origin_as_validity_signal_ibgp.is_set || is_set(rpki_origin_as_validity_signal_ibgp.yfilter)) leaf_name_data.push_back(rpki_origin_as_validity_signal_ibgp.get_name_leafdata());
    if (scan_time.is_set || is_set(scan_time.yfilter)) leaf_name_data.push_back(scan_time.get_name_leafdata());
    if (segmented_mcast.is_set || is_set(segmented_mcast.yfilter)) leaf_name_data.push_back(segmented_mcast.get_name_leafdata());
    if (table_policy.is_set || is_set(table_policy.yfilter)) leaf_name_data.push_back(table_policy.get_name_leafdata());
    if (update_limit_address_family.is_set || is_set(update_limit_address_family.yfilter)) leaf_name_data.push_back(update_limit_address_family.get_name_leafdata());
    if (update_limit_sub_group_ebgp.is_set || is_set(update_limit_sub_group_ebgp.yfilter)) leaf_name_data.push_back(update_limit_sub_group_ebgp.get_name_leafdata());
    if (update_limit_sub_group_ibgp.is_set || is_set(update_limit_sub_group_ibgp.yfilter)) leaf_name_data.push_back(update_limit_sub_group_ibgp.get_name_leafdata());
    if (use_igpsr_label.is_set || is_set(use_igpsr_label.yfilter)) leaf_name_data.push_back(use_igpsr_label.get_name_leafdata());
    if (wait_rib_install.is_set || is_set(wait_rib_install.yfilter)) leaf_name_data.push_back(wait_rib_install.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "additional-paths-selection")
    {
        if(additional_paths_selection == nullptr)
        {
            additional_paths_selection = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AdditionalPathsSelection>();
        }
        return additional_paths_selection;
    }

    if(child_yang_name == "aggregate-addresses")
    {
        if(aggregate_addresses == nullptr)
        {
            aggregate_addresses = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses>();
        }
        return aggregate_addresses;
    }

    if(child_yang_name == "allocate-label")
    {
        if(allocate_label == nullptr)
        {
            allocate_label = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AllocateLabel>();
        }
        return allocate_label;
    }

    if(child_yang_name == "application-routes")
    {
        if(application_routes == nullptr)
        {
            application_routes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes>();
        }
        return application_routes;
    }

    if(child_yang_name == "connected-routes")
    {
        if(connected_routes == nullptr)
        {
            connected_routes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ConnectedRoutes>();
        }
        return connected_routes;
    }

    if(child_yang_name == "dampening")
    {
        if(dampening == nullptr)
        {
            dampening = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Dampening>();
        }
        return dampening;
    }

    if(child_yang_name == "disable-cluster-client-to-client-rrs")
    {
        if(disable_cluster_client_to_client_rrs == nullptr)
        {
            disable_cluster_client_to_client_rrs = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs>();
        }
        return disable_cluster_client_to_client_rrs;
    }

    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Distance>();
        }
        return distance;
    }

    if(child_yang_name == "domain-distinguisher")
    {
        if(domain_distinguisher == nullptr)
        {
            domain_distinguisher = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DomainDistinguisher>();
        }
        return domain_distinguisher;
    }

    if(child_yang_name == "ebgp")
    {
        if(ebgp == nullptr)
        {
            ebgp = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ebgp>();
        }
        return ebgp;
    }

    if(child_yang_name == "eibgp")
    {
        if(eibgp == nullptr)
        {
            eibgp = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Eibgp>();
        }
        return eibgp;
    }

    if(child_yang_name == "eigrp-routes")
    {
        if(eigrp_routes == nullptr)
        {
            eigrp_routes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes>();
        }
        return eigrp_routes;
    }

    if(child_yang_name == "ibgp")
    {
        if(ibgp == nullptr)
        {
            ibgp = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ibgp>();
        }
        return ibgp;
    }

    if(child_yang_name == "import-delay")
    {
        if(import_delay == nullptr)
        {
            import_delay = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ImportDelay>();
        }
        return import_delay;
    }

    if(child_yang_name == "isis-routes")
    {
        if(isis_routes == nullptr)
        {
            isis_routes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes>();
        }
        return isis_routes;
    }

    if(child_yang_name == "label-delay")
    {
        if(label_delay == nullptr)
        {
            label_delay = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelDelay>();
        }
        return label_delay;
    }

    if(child_yang_name == "label-mode")
    {
        if(label_mode == nullptr)
        {
            label_mode = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelMode>();
        }
        return label_mode;
    }

    if(child_yang_name == "lisp-routes")
    {
        if(lisp_routes == nullptr)
        {
            lisp_routes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LispRoutes>();
        }
        return lisp_routes;
    }

    if(child_yang_name == "mobile-routes")
    {
        if(mobile_routes == nullptr)
        {
            mobile_routes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::MobileRoutes>();
        }
        return mobile_routes;
    }

    if(child_yang_name == "ospf-routes")
    {
        if(ospf_routes == nullptr)
        {
            ospf_routes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes>();
        }
        return ospf_routes;
    }

    if(child_yang_name == "retain-rt")
    {
        if(retain_rt == nullptr)
        {
            retain_rt = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RetainRt>();
        }
        return retain_rt;
    }

    if(child_yang_name == "rip-routes")
    {
        if(rip_routes == nullptr)
        {
            rip_routes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RipRoutes>();
        }
        return rip_routes;
    }

    if(child_yang_name == "sourced-networks")
    {
        if(sourced_networks == nullptr)
        {
            sourced_networks = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks>();
        }
        return sourced_networks;
    }

    if(child_yang_name == "static-routes")
    {
        if(static_routes == nullptr)
        {
            static_routes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::StaticRoutes>();
        }
        return static_routes;
    }

    if(child_yang_name == "subscriber-routes")
    {
        if(subscriber_routes == nullptr)
        {
            subscriber_routes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SubscriberRoutes>();
        }
        return subscriber_routes;
    }

    if(child_yang_name == "vrf-all")
    {
        if(vrf_all == nullptr)
        {
            vrf_all = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll>();
        }
        return vrf_all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(additional_paths_selection != nullptr)
    {
        children["additional-paths-selection"] = additional_paths_selection;
    }

    if(aggregate_addresses != nullptr)
    {
        children["aggregate-addresses"] = aggregate_addresses;
    }

    if(allocate_label != nullptr)
    {
        children["allocate-label"] = allocate_label;
    }

    if(application_routes != nullptr)
    {
        children["application-routes"] = application_routes;
    }

    if(connected_routes != nullptr)
    {
        children["connected-routes"] = connected_routes;
    }

    if(dampening != nullptr)
    {
        children["dampening"] = dampening;
    }

    if(disable_cluster_client_to_client_rrs != nullptr)
    {
        children["disable-cluster-client-to-client-rrs"] = disable_cluster_client_to_client_rrs;
    }

    if(distance != nullptr)
    {
        children["distance"] = distance;
    }

    if(domain_distinguisher != nullptr)
    {
        children["domain-distinguisher"] = domain_distinguisher;
    }

    if(ebgp != nullptr)
    {
        children["ebgp"] = ebgp;
    }

    if(eibgp != nullptr)
    {
        children["eibgp"] = eibgp;
    }

    if(eigrp_routes != nullptr)
    {
        children["eigrp-routes"] = eigrp_routes;
    }

    if(ibgp != nullptr)
    {
        children["ibgp"] = ibgp;
    }

    if(import_delay != nullptr)
    {
        children["import-delay"] = import_delay;
    }

    if(isis_routes != nullptr)
    {
        children["isis-routes"] = isis_routes;
    }

    if(label_delay != nullptr)
    {
        children["label-delay"] = label_delay;
    }

    if(label_mode != nullptr)
    {
        children["label-mode"] = label_mode;
    }

    if(lisp_routes != nullptr)
    {
        children["lisp-routes"] = lisp_routes;
    }

    if(mobile_routes != nullptr)
    {
        children["mobile-routes"] = mobile_routes;
    }

    if(ospf_routes != nullptr)
    {
        children["ospf-routes"] = ospf_routes;
    }

    if(retain_rt != nullptr)
    {
        children["retain-rt"] = retain_rt;
    }

    if(rip_routes != nullptr)
    {
        children["rip-routes"] = rip_routes;
    }

    if(sourced_networks != nullptr)
    {
        children["sourced-networks"] = sourced_networks;
    }

    if(static_routes != nullptr)
    {
        children["static-routes"] = static_routes;
    }

    if(subscriber_routes != nullptr)
    {
        children["subscriber-routes"] = subscriber_routes;
    }

    if(vrf_all != nullptr)
    {
        children["vrf-all"] = vrf_all;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-paths-receive")
    {
        additional_paths_receive = value;
        additional_paths_receive.value_namespace = name_space;
        additional_paths_receive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-paths-send")
    {
        additional_paths_send = value;
        additional_paths_send.value_namespace = name_space;
        additional_paths_send.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-local-labeled-route-safi-unicast")
    {
        advertise_local_labeled_route_safi_unicast = value;
        advertise_local_labeled_route_safi_unicast.value_namespace = name_space;
        advertise_local_labeled_route_safi_unicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-download")
    {
        attribute_download = value;
        attribute_download.value_namespace = name_space;
        attribute_download.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-external")
    {
        best_external = value;
        best_external.value_namespace = name_space;
        best_external.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-as-path-loop-check")
    {
        disable_as_path_loop_check = value;
        disable_as_path_loop_check.value_namespace = name_space;
        disable_as_path_loop_check.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-client-to-client-rr")
    {
        disable_client_to_client_rr = value;
        disable_client_to_client_rr.value_namespace = name_space;
        disable_client_to_client_rr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-default-martian-check")
    {
        disable_default_martian_check = value;
        disable_default_martian_check.value_namespace = name_space;
        disable_default_martian_check.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dynamic-med-interval")
    {
        dynamic_med_interval = value;
        dynamic_med_interval.value_namespace = name_space;
        dynamic_med_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-table-mcast")
    {
        global_table_mcast = value;
        global_table_mcast.value_namespace = name_space;
        global_table_mcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-as-install")
    {
        inter_as_install = value;
        inter_as_install.value_namespace = name_space;
        inter_as_install.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-retain")
    {
        label_retain = value;
        label_retain.value_namespace = name_space;
        label_retain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-security-rpf")
    {
        label_security_rpf = value;
        label_security_rpf.value_namespace = name_space;
        label_security_rpf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-critical-trigger-delay")
    {
        next_hop_critical_trigger_delay = value;
        next_hop_critical_trigger_delay.value_namespace = name_space;
        next_hop_critical_trigger_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-non-critical-trigger-delay")
    {
        next_hop_non_critical_trigger_delay = value;
        next_hop_non_critical_trigger_delay.value_namespace = name_space;
        next_hop_non_critical_trigger_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-resolution-prefix-length-minimum")
    {
        next_hop_resolution_prefix_length_minimum = value;
        next_hop_resolution_prefix_length_minimum.value_namespace = name_space;
        next_hop_resolution_prefix_length_minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-route-policy")
    {
        next_hop_route_policy = value;
        next_hop_route_policy.value_namespace = name_space;
        next_hop_route_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent-network")
    {
        permanent_network = value;
        permanent_network.value_namespace = name_space;
        permanent_network.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reset-weight-on-import")
    {
        reset_weight_on_import = value;
        reset_weight_on_import.value_namespace = name_space;
        reset_weight_on_import.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rnh-install-format")
    {
        rnh_install_format = value;
        rnh_install_format.value_namespace = name_space;
        rnh_install_format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-bestpath-origin-as-allow-invalid")
    {
        rpki_bestpath_origin_as_allow_invalid = value;
        rpki_bestpath_origin_as_allow_invalid.value_namespace = name_space;
        rpki_bestpath_origin_as_allow_invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-bestpath-use-origin-as-validity")
    {
        rpki_bestpath_use_origin_as_validity = value;
        rpki_bestpath_use_origin_as_validity.value_namespace = name_space;
        rpki_bestpath_use_origin_as_validity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-origin-as-validation-disable")
    {
        rpki_origin_as_validation_disable = value;
        rpki_origin_as_validation_disable.value_namespace = name_space;
        rpki_origin_as_validation_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-origin-as-validity-signal-ibgp")
    {
        rpki_origin_as_validity_signal_ibgp = value;
        rpki_origin_as_validity_signal_ibgp.value_namespace = name_space;
        rpki_origin_as_validity_signal_ibgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scan-time")
    {
        scan_time = value;
        scan_time.value_namespace = name_space;
        scan_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segmented-mcast")
    {
        segmented_mcast = value;
        segmented_mcast.value_namespace = name_space;
        segmented_mcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-policy")
    {
        table_policy = value;
        table_policy.value_namespace = name_space;
        table_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-limit-address-family")
    {
        update_limit_address_family = value;
        update_limit_address_family.value_namespace = name_space;
        update_limit_address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-limit-sub-group-ebgp")
    {
        update_limit_sub_group_ebgp = value;
        update_limit_sub_group_ebgp.value_namespace = name_space;
        update_limit_sub_group_ebgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-limit-sub-group-ibgp")
    {
        update_limit_sub_group_ibgp = value;
        update_limit_sub_group_ibgp.value_namespace = name_space;
        update_limit_sub_group_ibgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "use-igpsr-label")
    {
        use_igpsr_label = value;
        use_igpsr_label.value_namespace = name_space;
        use_igpsr_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-rib-install")
    {
        wait_rib_install = value;
        wait_rib_install.value_namespace = name_space;
        wait_rib_install.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "additional-paths-receive")
    {
        additional_paths_receive.yfilter = yfilter;
    }
    if(value_path == "additional-paths-send")
    {
        additional_paths_send.yfilter = yfilter;
    }
    if(value_path == "advertise-local-labeled-route-safi-unicast")
    {
        advertise_local_labeled_route_safi_unicast.yfilter = yfilter;
    }
    if(value_path == "attribute-download")
    {
        attribute_download.yfilter = yfilter;
    }
    if(value_path == "best-external")
    {
        best_external.yfilter = yfilter;
    }
    if(value_path == "disable-as-path-loop-check")
    {
        disable_as_path_loop_check.yfilter = yfilter;
    }
    if(value_path == "disable-client-to-client-rr")
    {
        disable_client_to_client_rr.yfilter = yfilter;
    }
    if(value_path == "disable-default-martian-check")
    {
        disable_default_martian_check.yfilter = yfilter;
    }
    if(value_path == "dynamic-med-interval")
    {
        dynamic_med_interval.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "global-table-mcast")
    {
        global_table_mcast.yfilter = yfilter;
    }
    if(value_path == "inter-as-install")
    {
        inter_as_install.yfilter = yfilter;
    }
    if(value_path == "label-retain")
    {
        label_retain.yfilter = yfilter;
    }
    if(value_path == "label-security-rpf")
    {
        label_security_rpf.yfilter = yfilter;
    }
    if(value_path == "next-hop-critical-trigger-delay")
    {
        next_hop_critical_trigger_delay.yfilter = yfilter;
    }
    if(value_path == "next-hop-non-critical-trigger-delay")
    {
        next_hop_non_critical_trigger_delay.yfilter = yfilter;
    }
    if(value_path == "next-hop-resolution-prefix-length-minimum")
    {
        next_hop_resolution_prefix_length_minimum.yfilter = yfilter;
    }
    if(value_path == "next-hop-route-policy")
    {
        next_hop_route_policy.yfilter = yfilter;
    }
    if(value_path == "permanent-network")
    {
        permanent_network.yfilter = yfilter;
    }
    if(value_path == "reset-weight-on-import")
    {
        reset_weight_on_import.yfilter = yfilter;
    }
    if(value_path == "rnh-install-format")
    {
        rnh_install_format.yfilter = yfilter;
    }
    if(value_path == "rpki-bestpath-origin-as-allow-invalid")
    {
        rpki_bestpath_origin_as_allow_invalid.yfilter = yfilter;
    }
    if(value_path == "rpki-bestpath-use-origin-as-validity")
    {
        rpki_bestpath_use_origin_as_validity.yfilter = yfilter;
    }
    if(value_path == "rpki-origin-as-validation-disable")
    {
        rpki_origin_as_validation_disable.yfilter = yfilter;
    }
    if(value_path == "rpki-origin-as-validity-signal-ibgp")
    {
        rpki_origin_as_validity_signal_ibgp.yfilter = yfilter;
    }
    if(value_path == "scan-time")
    {
        scan_time.yfilter = yfilter;
    }
    if(value_path == "segmented-mcast")
    {
        segmented_mcast.yfilter = yfilter;
    }
    if(value_path == "table-policy")
    {
        table_policy.yfilter = yfilter;
    }
    if(value_path == "update-limit-address-family")
    {
        update_limit_address_family.yfilter = yfilter;
    }
    if(value_path == "update-limit-sub-group-ebgp")
    {
        update_limit_sub_group_ebgp.yfilter = yfilter;
    }
    if(value_path == "update-limit-sub-group-ibgp")
    {
        update_limit_sub_group_ibgp.yfilter = yfilter;
    }
    if(value_path == "use-igpsr-label")
    {
        use_igpsr_label.yfilter = yfilter;
    }
    if(value_path == "wait-rib-install")
    {
        wait_rib_install.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "additional-paths-selection" || name == "aggregate-addresses" || name == "allocate-label" || name == "application-routes" || name == "connected-routes" || name == "dampening" || name == "disable-cluster-client-to-client-rrs" || name == "distance" || name == "domain-distinguisher" || name == "ebgp" || name == "eibgp" || name == "eigrp-routes" || name == "ibgp" || name == "import-delay" || name == "isis-routes" || name == "label-delay" || name == "label-mode" || name == "lisp-routes" || name == "mobile-routes" || name == "ospf-routes" || name == "retain-rt" || name == "rip-routes" || name == "sourced-networks" || name == "static-routes" || name == "subscriber-routes" || name == "vrf-all" || name == "af-name" || name == "additional-paths-receive" || name == "additional-paths-send" || name == "advertise-local-labeled-route-safi-unicast" || name == "attribute-download" || name == "best-external" || name == "disable-as-path-loop-check" || name == "disable-client-to-client-rr" || name == "disable-default-martian-check" || name == "dynamic-med-interval" || name == "enable" || name == "global-table-mcast" || name == "inter-as-install" || name == "label-retain" || name == "label-security-rpf" || name == "next-hop-critical-trigger-delay" || name == "next-hop-non-critical-trigger-delay" || name == "next-hop-resolution-prefix-length-minimum" || name == "next-hop-route-policy" || name == "permanent-network" || name == "reset-weight-on-import" || name == "rnh-install-format" || name == "rpki-bestpath-origin-as-allow-invalid" || name == "rpki-bestpath-use-origin-as-validity" || name == "rpki-origin-as-validation-disable" || name == "rpki-origin-as-validity-signal-ibgp" || name == "scan-time" || name == "segmented-mcast" || name == "table-policy" || name == "update-limit-address-family" || name == "update-limit-sub-group-ebgp" || name == "update-limit-sub-group-ibgp" || name == "use-igpsr-label" || name == "wait-rib-install")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AdditionalPathsSelection::AdditionalPathsSelection()
    :
    route_policy_name{YType::str, "route-policy-name"},
    selection{YType::enumeration, "selection"}
{

    yang_name = "additional-paths-selection"; yang_parent_name = "global-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AdditionalPathsSelection::~AdditionalPathsSelection()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AdditionalPathsSelection::has_data() const
{
    return route_policy_name.is_set
	|| selection.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AdditionalPathsSelection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(selection.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AdditionalPathsSelection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "additional-paths-selection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AdditionalPathsSelection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (selection.is_set || is_set(selection.yfilter)) leaf_name_data.push_back(selection.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AdditionalPathsSelection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AdditionalPathsSelection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AdditionalPathsSelection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selection")
    {
        selection = value;
        selection.value_namespace = name_space;
        selection.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AdditionalPathsSelection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "selection")
    {
        selection.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AdditionalPathsSelection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-policy-name" || name == "selection")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::AggregateAddresses()
{

    yang_name = "aggregate-addresses"; yang_parent_name = "global-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::~AggregateAddresses()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::has_data() const
{
    for (std::size_t index=0; index<aggregate_address.size(); index++)
    {
        if(aggregate_address[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::has_operation() const
{
    for (std::size_t index=0; index<aggregate_address.size(); index++)
    {
        if(aggregate_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregate-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggregate-address")
    {
        for(auto const & c : aggregate_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::AggregateAddress>();
        c->parent = this;
        aggregate_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : aggregate_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggregate-address")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::AggregateAddress::AggregateAddress()
    :
    aggregate_addr{YType::str, "aggregate-addr"},
    aggregate_prefix{YType::uint16, "aggregate-prefix"},
    generate_confederation_set_info{YType::boolean, "generate-confederation-set-info"},
    generate_set_info{YType::boolean, "generate-set-info"},
    route_policy_name{YType::str, "route-policy-name"},
    summary_only{YType::boolean, "summary-only"}
{

    yang_name = "aggregate-address"; yang_parent_name = "aggregate-addresses"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::AggregateAddress::~AggregateAddress()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::AggregateAddress::has_data() const
{
    return aggregate_addr.is_set
	|| aggregate_prefix.is_set
	|| generate_confederation_set_info.is_set
	|| generate_set_info.is_set
	|| route_policy_name.is_set
	|| summary_only.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::AggregateAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aggregate_addr.yfilter)
	|| ydk::is_set(aggregate_prefix.yfilter)
	|| ydk::is_set(generate_confederation_set_info.yfilter)
	|| ydk::is_set(generate_set_info.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(summary_only.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::AggregateAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregate-address" <<"[aggregate-addr='" <<aggregate_addr <<"']" <<"[aggregate-prefix='" <<aggregate_prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::AggregateAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aggregate_addr.is_set || is_set(aggregate_addr.yfilter)) leaf_name_data.push_back(aggregate_addr.get_name_leafdata());
    if (aggregate_prefix.is_set || is_set(aggregate_prefix.yfilter)) leaf_name_data.push_back(aggregate_prefix.get_name_leafdata());
    if (generate_confederation_set_info.is_set || is_set(generate_confederation_set_info.yfilter)) leaf_name_data.push_back(generate_confederation_set_info.get_name_leafdata());
    if (generate_set_info.is_set || is_set(generate_set_info.yfilter)) leaf_name_data.push_back(generate_set_info.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (summary_only.is_set || is_set(summary_only.yfilter)) leaf_name_data.push_back(summary_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::AggregateAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::AggregateAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::AggregateAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aggregate-addr")
    {
        aggregate_addr = value;
        aggregate_addr.value_namespace = name_space;
        aggregate_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggregate-prefix")
    {
        aggregate_prefix = value;
        aggregate_prefix.value_namespace = name_space;
        aggregate_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generate-confederation-set-info")
    {
        generate_confederation_set_info = value;
        generate_confederation_set_info.value_namespace = name_space;
        generate_confederation_set_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generate-set-info")
    {
        generate_set_info = value;
        generate_set_info.value_namespace = name_space;
        generate_set_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-only")
    {
        summary_only = value;
        summary_only.value_namespace = name_space;
        summary_only.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::AggregateAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aggregate-addr")
    {
        aggregate_addr.yfilter = yfilter;
    }
    if(value_path == "aggregate-prefix")
    {
        aggregate_prefix.yfilter = yfilter;
    }
    if(value_path == "generate-confederation-set-info")
    {
        generate_confederation_set_info.yfilter = yfilter;
    }
    if(value_path == "generate-set-info")
    {
        generate_set_info.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "summary-only")
    {
        summary_only.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::AggregateAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggregate-addr" || name == "aggregate-prefix" || name == "generate-confederation-set-info" || name == "generate-set-info" || name == "route-policy-name" || name == "summary-only")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AllocateLabel::AllocateLabel()
    :
    all{YType::boolean, "all"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "allocate-label"; yang_parent_name = "global-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AllocateLabel::~AllocateLabel()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AllocateLabel::has_data() const
{
    return all.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AllocateLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AllocateLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allocate-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AllocateLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AllocateLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AllocateLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AllocateLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AllocateLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AllocateLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "route-policy-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::ApplicationRoutes()
{

    yang_name = "application-routes"; yang_parent_name = "global-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::~ApplicationRoutes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::has_data() const
{
    for (std::size_t index=0; index<application_route.size(); index++)
    {
        if(application_route[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::has_operation() const
{
    for (std::size_t index=0; index<application_route.size(); index++)
    {
        if(application_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application-route")
    {
        for(auto const & c : application_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::ApplicationRoute>();
        c->parent = this;
        application_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : application_route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-route")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::ApplicationRoute::ApplicationRoute()
    :
    instance_name{YType::str, "instance-name"},
    default_metric{YType::uint32, "default-metric"},
    not_used{YType::uint32, "not-used"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "application-route"; yang_parent_name = "application-routes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::ApplicationRoute::~ApplicationRoute()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::ApplicationRoute::has_data() const
{
    return instance_name.is_set
	|| default_metric.is_set
	|| not_used.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::ApplicationRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(not_used.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::ApplicationRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-route" <<"[instance-name='" <<instance_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::ApplicationRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (not_used.is_set || is_set(not_used.yfilter)) leaf_name_data.push_back(not_used.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::ApplicationRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::ApplicationRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::ApplicationRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-used")
    {
        not_used = value;
        not_used.value_namespace = name_space;
        not_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::ApplicationRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "not-used")
    {
        not_used.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::ApplicationRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "default-metric" || name == "not-used" || name == "route-policy-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ConnectedRoutes::ConnectedRoutes()
    :
    default_metric{YType::uint32, "default-metric"},
    not_used{YType::uint32, "not-used"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "connected-routes"; yang_parent_name = "global-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ConnectedRoutes::~ConnectedRoutes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ConnectedRoutes::has_data() const
{
    return default_metric.is_set
	|| not_used.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ConnectedRoutes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(not_used.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ConnectedRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ConnectedRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (not_used.is_set || is_set(not_used.yfilter)) leaf_name_data.push_back(not_used.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ConnectedRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ConnectedRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ConnectedRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-used")
    {
        not_used = value;
        not_used.value_namespace = name_space;
        not_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ConnectedRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "not-used")
    {
        not_used.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ConnectedRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-metric" || name == "not-used" || name == "route-policy-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Dampening::Dampening()
    :
    half_life{YType::uint32, "half-life"},
    reuse_threshold{YType::uint32, "reuse-threshold"},
    route_policy_name{YType::str, "route-policy-name"},
    suppress_threshold{YType::uint32, "suppress-threshold"},
    suppress_time{YType::uint32, "suppress-time"}
{

    yang_name = "dampening"; yang_parent_name = "global-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Dampening::~Dampening()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Dampening::has_data() const
{
    return half_life.is_set
	|| reuse_threshold.is_set
	|| route_policy_name.is_set
	|| suppress_threshold.is_set
	|| suppress_time.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Dampening::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(half_life.yfilter)
	|| ydk::is_set(reuse_threshold.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(suppress_threshold.yfilter)
	|| ydk::is_set(suppress_time.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Dampening::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dampening";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Dampening::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (half_life.is_set || is_set(half_life.yfilter)) leaf_name_data.push_back(half_life.get_name_leafdata());
    if (reuse_threshold.is_set || is_set(reuse_threshold.yfilter)) leaf_name_data.push_back(reuse_threshold.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (suppress_threshold.is_set || is_set(suppress_threshold.yfilter)) leaf_name_data.push_back(suppress_threshold.get_name_leafdata());
    if (suppress_time.is_set || is_set(suppress_time.yfilter)) leaf_name_data.push_back(suppress_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Dampening::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Dampening::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Dampening::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "half-life")
    {
        half_life = value;
        half_life.value_namespace = name_space;
        half_life.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reuse-threshold")
    {
        reuse_threshold = value;
        reuse_threshold.value_namespace = name_space;
        reuse_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-threshold")
    {
        suppress_threshold = value;
        suppress_threshold.value_namespace = name_space;
        suppress_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-time")
    {
        suppress_time = value;
        suppress_time.value_namespace = name_space;
        suppress_time.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Dampening::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "half-life")
    {
        half_life.yfilter = yfilter;
    }
    if(value_path == "reuse-threshold")
    {
        reuse_threshold.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "suppress-threshold")
    {
        suppress_threshold.yfilter = yfilter;
    }
    if(value_path == "suppress-time")
    {
        suppress_time.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Dampening::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "half-life" || name == "reuse-threshold" || name == "route-policy-name" || name == "suppress-threshold" || name == "suppress-time")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRrs()
{

    yang_name = "disable-cluster-client-to-client-rrs"; yang_parent_name = "global-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::~DisableClusterClientToClientRrs()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::has_data() const
{
    for (std::size_t index=0; index<disable_cluster_client_to_client_rr.size(); index++)
    {
        if(disable_cluster_client_to_client_rr[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::has_operation() const
{
    for (std::size_t index=0; index<disable_cluster_client_to_client_rr.size(); index++)
    {
        if(disable_cluster_client_to_client_rr[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disable-cluster-client-to-client-rrs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disable-cluster-client-to-client-rr")
    {
        for(auto const & c : disable_cluster_client_to_client_rr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr>();
        c->parent = this;
        disable_cluster_client_to_client_rr.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : disable_cluster_client_to_client_rr)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable-cluster-client-to-client-rr")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::DisableClusterClientToClientRr()
    :
    cluster_type{YType::enumeration, "cluster-type"}
{

    yang_name = "disable-cluster-client-to-client-rr"; yang_parent_name = "disable-cluster-client-to-client-rrs"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::~DisableClusterClientToClientRr()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::has_data() const
{
    for (std::size_t index=0; index<ipv4_address.size(); index++)
    {
        if(ipv4_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<number.size(); index++)
    {
        if(number[index]->has_data())
            return true;
    }
    return cluster_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::has_operation() const
{
    for (std::size_t index=0; index<ipv4_address.size(); index++)
    {
        if(ipv4_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<number.size(); index++)
    {
        if(number[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(cluster_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disable-cluster-client-to-client-rr" <<"[cluster-type='" <<cluster_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cluster_type.is_set || is_set(cluster_type.yfilter)) leaf_name_data.push_back(cluster_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-address")
    {
        for(auto const & c : ipv4_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Ipv4Address>();
        c->parent = this;
        ipv4_address.push_back(c);
        return c;
    }

    if(child_yang_name == "number")
    {
        for(auto const & c : number)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Number>();
        c->parent = this;
        number.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_address)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : number)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cluster-type")
    {
        cluster_type = value;
        cluster_type.value_namespace = name_space;
        cluster_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cluster-type")
    {
        cluster_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "number" || name == "cluster-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Ipv4Address::Ipv4Address()
    :
    cluster_id_address{YType::str, "cluster-id-address"}
{

    yang_name = "ipv4-address"; yang_parent_name = "disable-cluster-client-to-client-rr"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Ipv4Address::~Ipv4Address()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Ipv4Address::has_data() const
{
    return cluster_id_address.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Ipv4Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cluster_id_address.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Ipv4Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-address" <<"[cluster-id-address='" <<cluster_id_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Ipv4Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cluster_id_address.is_set || is_set(cluster_id_address.yfilter)) leaf_name_data.push_back(cluster_id_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Ipv4Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Ipv4Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Ipv4Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cluster-id-address")
    {
        cluster_id_address = value;
        cluster_id_address.value_namespace = name_space;
        cluster_id_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Ipv4Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cluster-id-address")
    {
        cluster_id_address.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Ipv4Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cluster-id-address")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Number::Number()
    :
    cluster_id_number{YType::uint32, "cluster-id-number"}
{

    yang_name = "number"; yang_parent_name = "disable-cluster-client-to-client-rr"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Number::~Number()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Number::has_data() const
{
    return cluster_id_number.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Number::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cluster_id_number.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Number::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "number" <<"[cluster-id-number='" <<cluster_id_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Number::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cluster_id_number.is_set || is_set(cluster_id_number.yfilter)) leaf_name_data.push_back(cluster_id_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Number::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Number::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Number::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cluster-id-number")
    {
        cluster_id_number = value;
        cluster_id_number.value_namespace = name_space;
        cluster_id_number.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Number::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cluster-id-number")
    {
        cluster_id_number.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Number::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cluster-id-number")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Distance::Distance()
    :
    external_routes{YType::uint32, "external-routes"},
    internal_routes{YType::uint32, "internal-routes"},
    local_routes{YType::uint32, "local-routes"}
{

    yang_name = "distance"; yang_parent_name = "global-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Distance::~Distance()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Distance::has_data() const
{
    return external_routes.is_set
	|| internal_routes.is_set
	|| local_routes.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Distance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_routes.yfilter)
	|| ydk::is_set(internal_routes.yfilter)
	|| ydk::is_set(local_routes.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Distance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_routes.is_set || is_set(external_routes.yfilter)) leaf_name_data.push_back(external_routes.get_name_leafdata());
    if (internal_routes.is_set || is_set(internal_routes.yfilter)) leaf_name_data.push_back(internal_routes.get_name_leafdata());
    if (local_routes.is_set || is_set(local_routes.yfilter)) leaf_name_data.push_back(local_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Distance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-routes")
    {
        external_routes = value;
        external_routes.value_namespace = name_space;
        external_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-routes")
    {
        internal_routes = value;
        internal_routes.value_namespace = name_space;
        internal_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-routes")
    {
        local_routes = value;
        local_routes.value_namespace = name_space;
        local_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Distance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-routes")
    {
        external_routes.yfilter = yfilter;
    }
    if(value_path == "internal-routes")
    {
        internal_routes.yfilter = yfilter;
    }
    if(value_path == "local-routes")
    {
        local_routes.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Distance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-routes" || name == "internal-routes" || name == "local-routes")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DomainDistinguisher::DomainDistinguisher()
    :
    as{YType::uint32, "as"},
    router_id{YType::str, "router-id"}
{

    yang_name = "domain-distinguisher"; yang_parent_name = "global-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DomainDistinguisher::~DomainDistinguisher()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DomainDistinguisher::has_data() const
{
    return as.is_set
	|| router_id.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DomainDistinguisher::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(router_id.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DomainDistinguisher::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-distinguisher";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DomainDistinguisher::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DomainDistinguisher::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DomainDistinguisher::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DomainDistinguisher::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as")
    {
        as = value;
        as.value_namespace = name_space;
        as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DomainDistinguisher::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DomainDistinguisher::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as" || name == "router-id")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ebgp::Ebgp()
    :
    order_by_igp_metric{YType::boolean, "order-by-igp-metric"},
    paths_value{YType::uint32, "paths-value"},
    selective{YType::boolean, "selective"},
    unequal_cost{YType::boolean, "unequal-cost"}
{

    yang_name = "ebgp"; yang_parent_name = "global-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ebgp::~Ebgp()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ebgp::has_data() const
{
    return order_by_igp_metric.is_set
	|| paths_value.is_set
	|| selective.is_set
	|| unequal_cost.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ebgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order_by_igp_metric.yfilter)
	|| ydk::is_set(paths_value.yfilter)
	|| ydk::is_set(selective.yfilter)
	|| ydk::is_set(unequal_cost.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ebgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ebgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ebgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order_by_igp_metric.is_set || is_set(order_by_igp_metric.yfilter)) leaf_name_data.push_back(order_by_igp_metric.get_name_leafdata());
    if (paths_value.is_set || is_set(paths_value.yfilter)) leaf_name_data.push_back(paths_value.get_name_leafdata());
    if (selective.is_set || is_set(selective.yfilter)) leaf_name_data.push_back(selective.get_name_leafdata());
    if (unequal_cost.is_set || is_set(unequal_cost.yfilter)) leaf_name_data.push_back(unequal_cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ebgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ebgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ebgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order-by-igp-metric")
    {
        order_by_igp_metric = value;
        order_by_igp_metric.value_namespace = name_space;
        order_by_igp_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-value")
    {
        paths_value = value;
        paths_value.value_namespace = name_space;
        paths_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selective")
    {
        selective = value;
        selective.value_namespace = name_space;
        selective.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unequal-cost")
    {
        unequal_cost = value;
        unequal_cost.value_namespace = name_space;
        unequal_cost.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ebgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order-by-igp-metric")
    {
        order_by_igp_metric.yfilter = yfilter;
    }
    if(value_path == "paths-value")
    {
        paths_value.yfilter = yfilter;
    }
    if(value_path == "selective")
    {
        selective.yfilter = yfilter;
    }
    if(value_path == "unequal-cost")
    {
        unequal_cost.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ebgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "order-by-igp-metric" || name == "paths-value" || name == "selective" || name == "unequal-cost")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Eibgp::Eibgp()
    :
    order_by_igp_metric{YType::boolean, "order-by-igp-metric"},
    paths_value{YType::uint32, "paths-value"},
    selective{YType::boolean, "selective"},
    unequal_cost{YType::boolean, "unequal-cost"}
{

    yang_name = "eibgp"; yang_parent_name = "global-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Eibgp::~Eibgp()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Eibgp::has_data() const
{
    return order_by_igp_metric.is_set
	|| paths_value.is_set
	|| selective.is_set
	|| unequal_cost.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Eibgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order_by_igp_metric.yfilter)
	|| ydk::is_set(paths_value.yfilter)
	|| ydk::is_set(selective.yfilter)
	|| ydk::is_set(unequal_cost.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Eibgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eibgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Eibgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order_by_igp_metric.is_set || is_set(order_by_igp_metric.yfilter)) leaf_name_data.push_back(order_by_igp_metric.get_name_leafdata());
    if (paths_value.is_set || is_set(paths_value.yfilter)) leaf_name_data.push_back(paths_value.get_name_leafdata());
    if (selective.is_set || is_set(selective.yfilter)) leaf_name_data.push_back(selective.get_name_leafdata());
    if (unequal_cost.is_set || is_set(unequal_cost.yfilter)) leaf_name_data.push_back(unequal_cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Eibgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Eibgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Eibgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order-by-igp-metric")
    {
        order_by_igp_metric = value;
        order_by_igp_metric.value_namespace = name_space;
        order_by_igp_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-value")
    {
        paths_value = value;
        paths_value.value_namespace = name_space;
        paths_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selective")
    {
        selective = value;
        selective.value_namespace = name_space;
        selective.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unequal-cost")
    {
        unequal_cost = value;
        unequal_cost.value_namespace = name_space;
        unequal_cost.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Eibgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order-by-igp-metric")
    {
        order_by_igp_metric.yfilter = yfilter;
    }
    if(value_path == "paths-value")
    {
        paths_value.yfilter = yfilter;
    }
    if(value_path == "selective")
    {
        selective.yfilter = yfilter;
    }
    if(value_path == "unequal-cost")
    {
        unequal_cost.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Eibgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "order-by-igp-metric" || name == "paths-value" || name == "selective" || name == "unequal-cost")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::EigrpRoutes()
{

    yang_name = "eigrp-routes"; yang_parent_name = "global-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::~EigrpRoutes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::has_data() const
{
    for (std::size_t index=0; index<eigrp_route.size(); index++)
    {
        if(eigrp_route[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::has_operation() const
{
    for (std::size_t index=0; index<eigrp_route.size(); index++)
    {
        if(eigrp_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eigrp-route")
    {
        for(auto const & c : eigrp_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::EigrpRoute>();
        c->parent = this;
        eigrp_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : eigrp_route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp-route")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::EigrpRoute::EigrpRoute()
    :
    instance_name{YType::str, "instance-name"},
    default_metric{YType::uint32, "default-metric"},
    redist_type{YType::str, "redist-type"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "eigrp-route"; yang_parent_name = "eigrp-routes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::EigrpRoute::~EigrpRoute()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::EigrpRoute::has_data() const
{
    return instance_name.is_set
	|| default_metric.is_set
	|| redist_type.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::EigrpRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(redist_type.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::EigrpRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp-route" <<"[instance-name='" <<instance_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::EigrpRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (redist_type.is_set || is_set(redist_type.yfilter)) leaf_name_data.push_back(redist_type.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::EigrpRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::EigrpRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::EigrpRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redist-type")
    {
        redist_type = value;
        redist_type.value_namespace = name_space;
        redist_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::EigrpRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "redist-type")
    {
        redist_type.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::EigrpRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "default-metric" || name == "redist-type" || name == "route-policy-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ibgp::Ibgp()
    :
    order_by_igp_metric{YType::boolean, "order-by-igp-metric"},
    paths_value{YType::uint32, "paths-value"},
    selective{YType::boolean, "selective"},
    unequal_cost{YType::boolean, "unequal-cost"}
{

    yang_name = "ibgp"; yang_parent_name = "global-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ibgp::~Ibgp()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ibgp::has_data() const
{
    return order_by_igp_metric.is_set
	|| paths_value.is_set
	|| selective.is_set
	|| unequal_cost.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ibgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order_by_igp_metric.yfilter)
	|| ydk::is_set(paths_value.yfilter)
	|| ydk::is_set(selective.yfilter)
	|| ydk::is_set(unequal_cost.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ibgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ibgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ibgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order_by_igp_metric.is_set || is_set(order_by_igp_metric.yfilter)) leaf_name_data.push_back(order_by_igp_metric.get_name_leafdata());
    if (paths_value.is_set || is_set(paths_value.yfilter)) leaf_name_data.push_back(paths_value.get_name_leafdata());
    if (selective.is_set || is_set(selective.yfilter)) leaf_name_data.push_back(selective.get_name_leafdata());
    if (unequal_cost.is_set || is_set(unequal_cost.yfilter)) leaf_name_data.push_back(unequal_cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ibgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ibgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ibgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order-by-igp-metric")
    {
        order_by_igp_metric = value;
        order_by_igp_metric.value_namespace = name_space;
        order_by_igp_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-value")
    {
        paths_value = value;
        paths_value.value_namespace = name_space;
        paths_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selective")
    {
        selective = value;
        selective.value_namespace = name_space;
        selective.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unequal-cost")
    {
        unequal_cost = value;
        unequal_cost.value_namespace = name_space;
        unequal_cost.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ibgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order-by-igp-metric")
    {
        order_by_igp_metric.yfilter = yfilter;
    }
    if(value_path == "paths-value")
    {
        paths_value.yfilter = yfilter;
    }
    if(value_path == "selective")
    {
        selective.yfilter = yfilter;
    }
    if(value_path == "unequal-cost")
    {
        unequal_cost.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ibgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "order-by-igp-metric" || name == "paths-value" || name == "selective" || name == "unequal-cost")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ImportDelay::ImportDelay()
    :
    milliseconds{YType::uint32, "milliseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "import-delay"; yang_parent_name = "global-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ImportDelay::~ImportDelay()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ImportDelay::has_data() const
{
    return milliseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ImportDelay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(milliseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ImportDelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import-delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ImportDelay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (milliseconds.is_set || is_set(milliseconds.yfilter)) leaf_name_data.push_back(milliseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ImportDelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ImportDelay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ImportDelay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "milliseconds")
    {
        milliseconds = value;
        milliseconds.value_namespace = name_space;
        milliseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ImportDelay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "milliseconds")
    {
        milliseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ImportDelay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "milliseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::IsisRoutes()
{

    yang_name = "isis-routes"; yang_parent_name = "global-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::~IsisRoutes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::has_data() const
{
    for (std::size_t index=0; index<isis_route.size(); index++)
    {
        if(isis_route[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::has_operation() const
{
    for (std::size_t index=0; index<isis_route.size(); index++)
    {
        if(isis_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis-route")
    {
        for(auto const & c : isis_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::IsisRoute>();
        c->parent = this;
        isis_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : isis_route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis-route")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::IsisRoute::IsisRoute()
    :
    instance_name{YType::str, "instance-name"},
    default_metric{YType::uint32, "default-metric"},
    redist_type{YType::str, "redist-type"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "isis-route"; yang_parent_name = "isis-routes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::IsisRoute::~IsisRoute()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::IsisRoute::has_data() const
{
    return instance_name.is_set
	|| default_metric.is_set
	|| redist_type.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::IsisRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(redist_type.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::IsisRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-route" <<"[instance-name='" <<instance_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::IsisRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (redist_type.is_set || is_set(redist_type.yfilter)) leaf_name_data.push_back(redist_type.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::IsisRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::IsisRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::IsisRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redist-type")
    {
        redist_type = value;
        redist_type.value_namespace = name_space;
        redist_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::IsisRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "redist-type")
    {
        redist_type.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::IsisRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "default-metric" || name == "redist-type" || name == "route-policy-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelDelay::LabelDelay()
    :
    milliseconds{YType::uint32, "milliseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "label-delay"; yang_parent_name = "global-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelDelay::~LabelDelay()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelDelay::has_data() const
{
    return milliseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelDelay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(milliseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelDelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelDelay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (milliseconds.is_set || is_set(milliseconds.yfilter)) leaf_name_data.push_back(milliseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelDelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelDelay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelDelay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "milliseconds")
    {
        milliseconds = value;
        milliseconds.value_namespace = name_space;
        milliseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelDelay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "milliseconds")
    {
        milliseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelDelay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "milliseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelMode::LabelMode()
    :
    label_allocation_mode{YType::str, "label-allocation-mode"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "label-mode"; yang_parent_name = "global-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelMode::~LabelMode()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelMode::has_data() const
{
    return label_allocation_mode.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelMode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label_allocation_mode.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelMode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_allocation_mode.is_set || is_set(label_allocation_mode.yfilter)) leaf_name_data.push_back(label_allocation_mode.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelMode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-allocation-mode")
    {
        label_allocation_mode = value;
        label_allocation_mode.value_namespace = name_space;
        label_allocation_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelMode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-allocation-mode")
    {
        label_allocation_mode.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-allocation-mode" || name == "route-policy-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LispRoutes::LispRoutes()
    :
    default_metric{YType::uint32, "default-metric"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "lisp-routes"; yang_parent_name = "global-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LispRoutes::~LispRoutes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LispRoutes::has_data() const
{
    return default_metric.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LispRoutes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LispRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LispRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LispRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LispRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LispRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LispRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LispRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-metric" || name == "route-policy-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::MobileRoutes::MobileRoutes()
    :
    default_metric{YType::uint32, "default-metric"},
    not_used{YType::uint32, "not-used"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "mobile-routes"; yang_parent_name = "global-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::MobileRoutes::~MobileRoutes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::MobileRoutes::has_data() const
{
    return default_metric.is_set
	|| not_used.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::MobileRoutes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(not_used.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::MobileRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::MobileRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (not_used.is_set || is_set(not_used.yfilter)) leaf_name_data.push_back(not_used.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::MobileRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::MobileRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::MobileRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-used")
    {
        not_used = value;
        not_used.value_namespace = name_space;
        not_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::MobileRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "not-used")
    {
        not_used.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::MobileRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-metric" || name == "not-used" || name == "route-policy-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::OspfRoutes()
{

    yang_name = "ospf-routes"; yang_parent_name = "global-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::~OspfRoutes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::has_data() const
{
    for (std::size_t index=0; index<ospf_route.size(); index++)
    {
        if(ospf_route[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::has_operation() const
{
    for (std::size_t index=0; index<ospf_route.size(); index++)
    {
        if(ospf_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospf-route")
    {
        for(auto const & c : ospf_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::OspfRoute>();
        c->parent = this;
        ospf_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ospf_route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospf-route")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::OspfRoute::OspfRoute()
    :
    instance_name{YType::str, "instance-name"},
    default_metric{YType::uint32, "default-metric"},
    redist_type{YType::str, "redist-type"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "ospf-route"; yang_parent_name = "ospf-routes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::OspfRoute::~OspfRoute()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::OspfRoute::has_data() const
{
    return instance_name.is_set
	|| default_metric.is_set
	|| redist_type.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::OspfRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(redist_type.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::OspfRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf-route" <<"[instance-name='" <<instance_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::OspfRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (redist_type.is_set || is_set(redist_type.yfilter)) leaf_name_data.push_back(redist_type.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::OspfRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::OspfRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::OspfRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redist-type")
    {
        redist_type = value;
        redist_type.value_namespace = name_space;
        redist_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::OspfRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "redist-type")
    {
        redist_type.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::OspfRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "default-metric" || name == "redist-type" || name == "route-policy-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RetainRt::RetainRt()
    :
    all{YType::boolean, "all"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "retain-rt"; yang_parent_name = "global-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RetainRt::~RetainRt()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RetainRt::has_data() const
{
    return all.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RetainRt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RetainRt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retain-rt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RetainRt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RetainRt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RetainRt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RetainRt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RetainRt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RetainRt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "route-policy-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RipRoutes::RipRoutes()
    :
    default_metric{YType::uint32, "default-metric"},
    not_used{YType::uint32, "not-used"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "rip-routes"; yang_parent_name = "global-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RipRoutes::~RipRoutes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RipRoutes::has_data() const
{
    return default_metric.is_set
	|| not_used.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RipRoutes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(not_used.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RipRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RipRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (not_used.is_set || is_set(not_used.yfilter)) leaf_name_data.push_back(not_used.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RipRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RipRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RipRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-used")
    {
        not_used = value;
        not_used.value_namespace = name_space;
        not_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RipRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "not-used")
    {
        not_used.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RipRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-metric" || name == "not-used" || name == "route-policy-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::SourcedNetworks()
{

    yang_name = "sourced-networks"; yang_parent_name = "global-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::~SourcedNetworks()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::has_data() const
{
    for (std::size_t index=0; index<sourced_network.size(); index++)
    {
        if(sourced_network[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::has_operation() const
{
    for (std::size_t index=0; index<sourced_network.size(); index++)
    {
        if(sourced_network[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sourced-networks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sourced-network")
    {
        for(auto const & c : sourced_network)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::SourcedNetwork>();
        c->parent = this;
        sourced_network.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sourced_network)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sourced-network")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::SourcedNetwork::SourcedNetwork()
    :
    network_addr{YType::str, "network-addr"},
    network_prefix{YType::uint16, "network-prefix"},
    backdoor{YType::boolean, "backdoor"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "sourced-network"; yang_parent_name = "sourced-networks"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::SourcedNetwork::~SourcedNetwork()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::SourcedNetwork::has_data() const
{
    return network_addr.is_set
	|| network_prefix.is_set
	|| backdoor.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::SourcedNetwork::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(network_addr.yfilter)
	|| ydk::is_set(network_prefix.yfilter)
	|| ydk::is_set(backdoor.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::SourcedNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sourced-network" <<"[network-addr='" <<network_addr <<"']" <<"[network-prefix='" <<network_prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::SourcedNetwork::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (network_addr.is_set || is_set(network_addr.yfilter)) leaf_name_data.push_back(network_addr.get_name_leafdata());
    if (network_prefix.is_set || is_set(network_prefix.yfilter)) leaf_name_data.push_back(network_prefix.get_name_leafdata());
    if (backdoor.is_set || is_set(backdoor.yfilter)) leaf_name_data.push_back(backdoor.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::SourcedNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::SourcedNetwork::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::SourcedNetwork::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "network-addr")
    {
        network_addr = value;
        network_addr.value_namespace = name_space;
        network_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-prefix")
    {
        network_prefix = value;
        network_prefix.value_namespace = name_space;
        network_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backdoor")
    {
        backdoor = value;
        backdoor.value_namespace = name_space;
        backdoor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::SourcedNetwork::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "network-addr")
    {
        network_addr.yfilter = yfilter;
    }
    if(value_path == "network-prefix")
    {
        network_prefix.yfilter = yfilter;
    }
    if(value_path == "backdoor")
    {
        backdoor.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::SourcedNetwork::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network-addr" || name == "network-prefix" || name == "backdoor" || name == "route-policy-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::StaticRoutes::StaticRoutes()
    :
    default_metric{YType::uint32, "default-metric"},
    not_used{YType::uint32, "not-used"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "static-routes"; yang_parent_name = "global-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::StaticRoutes::~StaticRoutes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::StaticRoutes::has_data() const
{
    return default_metric.is_set
	|| not_used.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::StaticRoutes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(not_used.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::StaticRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::StaticRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (not_used.is_set || is_set(not_used.yfilter)) leaf_name_data.push_back(not_used.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::StaticRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::StaticRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::StaticRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-used")
    {
        not_used = value;
        not_used.value_namespace = name_space;
        not_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::StaticRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "not-used")
    {
        not_used.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::StaticRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-metric" || name == "not-used" || name == "route-policy-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SubscriberRoutes::SubscriberRoutes()
    :
    default_metric{YType::uint32, "default-metric"},
    not_used{YType::uint32, "not-used"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "subscriber-routes"; yang_parent_name = "global-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SubscriberRoutes::~SubscriberRoutes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SubscriberRoutes::has_data() const
{
    return default_metric.is_set
	|| not_used.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SubscriberRoutes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(not_used.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SubscriberRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SubscriberRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (not_used.is_set || is_set(not_used.yfilter)) leaf_name_data.push_back(not_used.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SubscriberRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SubscriberRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SubscriberRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-used")
    {
        not_used = value;
        not_used.value_namespace = name_space;
        not_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SubscriberRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "not-used")
    {
        not_used.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SubscriberRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-metric" || name == "not-used" || name == "route-policy-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::VrfAll()
    :
    enable{YType::empty, "enable"},
    rnh_install_format{YType::enumeration, "rnh-install-format"},
    source_rt_import_policy{YType::empty, "source-rt-import-policy"},
    table_policy{YType::str, "table-policy"}
    	,
    label_mode(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::LabelMode>())
{
    label_mode->parent = this;

    yang_name = "vrf-all"; yang_parent_name = "global-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::~VrfAll()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::has_data() const
{
    return enable.is_set
	|| rnh_install_format.is_set
	|| source_rt_import_policy.is_set
	|| table_policy.is_set
	|| (label_mode !=  nullptr && label_mode->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(rnh_install_format.yfilter)
	|| ydk::is_set(source_rt_import_policy.yfilter)
	|| ydk::is_set(table_policy.yfilter)
	|| (label_mode !=  nullptr && label_mode->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (rnh_install_format.is_set || is_set(rnh_install_format.yfilter)) leaf_name_data.push_back(rnh_install_format.get_name_leafdata());
    if (source_rt_import_policy.is_set || is_set(source_rt_import_policy.yfilter)) leaf_name_data.push_back(source_rt_import_policy.get_name_leafdata());
    if (table_policy.is_set || is_set(table_policy.yfilter)) leaf_name_data.push_back(table_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-mode")
    {
        if(label_mode == nullptr)
        {
            label_mode = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::LabelMode>();
        }
        return label_mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(label_mode != nullptr)
    {
        children["label-mode"] = label_mode;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rnh-install-format")
    {
        rnh_install_format = value;
        rnh_install_format.value_namespace = name_space;
        rnh_install_format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-rt-import-policy")
    {
        source_rt_import_policy = value;
        source_rt_import_policy.value_namespace = name_space;
        source_rt_import_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-policy")
    {
        table_policy = value;
        table_policy.value_namespace = name_space;
        table_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "rnh-install-format")
    {
        rnh_install_format.yfilter = yfilter;
    }
    if(value_path == "source-rt-import-policy")
    {
        source_rt_import_policy.yfilter = yfilter;
    }
    if(value_path == "table-policy")
    {
        table_policy.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-mode" || name == "enable" || name == "rnh-install-format" || name == "source-rt-import-policy" || name == "table-policy")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::LabelMode::LabelMode()
    :
    label_allocation_mode{YType::str, "label-allocation-mode"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "label-mode"; yang_parent_name = "vrf-all"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::LabelMode::~LabelMode()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::LabelMode::has_data() const
{
    return label_allocation_mode.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::LabelMode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label_allocation_mode.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::LabelMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::LabelMode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_allocation_mode.is_set || is_set(label_allocation_mode.yfilter)) leaf_name_data.push_back(label_allocation_mode.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::LabelMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::LabelMode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::LabelMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-allocation-mode")
    {
        label_allocation_mode = value;
        label_allocation_mode.value_namespace = name_space;
        label_allocation_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::LabelMode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-allocation-mode")
    {
        label_allocation_mode.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::LabelMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-allocation-mode" || name == "route-policy-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalGracefulMaintenanceActivate::GlobalGracefulMaintenanceActivate()
    :
    all_neighbors{YType::boolean, "all-neighbors"},
    retain_routes{YType::boolean, "retain-routes"}
{

    yang_name = "global-graceful-maintenance-activate"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalGracefulMaintenanceActivate::~GlobalGracefulMaintenanceActivate()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalGracefulMaintenanceActivate::has_data() const
{
    return all_neighbors.is_set
	|| retain_routes.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalGracefulMaintenanceActivate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_neighbors.yfilter)
	|| ydk::is_set(retain_routes.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalGracefulMaintenanceActivate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-graceful-maintenance-activate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalGracefulMaintenanceActivate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_neighbors.is_set || is_set(all_neighbors.yfilter)) leaf_name_data.push_back(all_neighbors.get_name_leafdata());
    if (retain_routes.is_set || is_set(retain_routes.yfilter)) leaf_name_data.push_back(retain_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalGracefulMaintenanceActivate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalGracefulMaintenanceActivate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalGracefulMaintenanceActivate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-neighbors")
    {
        all_neighbors = value;
        all_neighbors.value_namespace = name_space;
        all_neighbors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retain-routes")
    {
        retain_routes = value;
        retain_routes.value_namespace = name_space;
        retain_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalGracefulMaintenanceActivate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-neighbors")
    {
        all_neighbors.yfilter = yfilter;
    }
    if(value_path == "retain-routes")
    {
        retain_routes.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalGracefulMaintenanceActivate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-neighbors" || name == "retain-routes")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalTimers::GlobalTimers()
    :
    hold_time{YType::uint32, "hold-time"},
    keepalive{YType::uint32, "keepalive"},
    min_accept_hold_time{YType::uint32, "min-accept-hold-time"}
{

    yang_name = "global-timers"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalTimers::~GlobalTimers()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalTimers::has_data() const
{
    return hold_time.is_set
	|| keepalive.is_set
	|| min_accept_hold_time.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalTimers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| ydk::is_set(keepalive.yfilter)
	|| ydk::is_set(min_accept_hold_time.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalTimers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalTimers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (keepalive.is_set || is_set(keepalive.yfilter)) leaf_name_data.push_back(keepalive.get_name_leafdata());
    if (min_accept_hold_time.is_set || is_set(min_accept_hold_time.yfilter)) leaf_name_data.push_back(min_accept_hold_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalTimers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalTimers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalTimers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalive")
    {
        keepalive = value;
        keepalive.value_namespace = name_space;
        keepalive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-accept-hold-time")
    {
        min_accept_hold_time = value;
        min_accept_hold_time.value_namespace = name_space;
        min_accept_hold_time.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalTimers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
    if(value_path == "keepalive")
    {
        keepalive.yfilter = yfilter;
    }
    if(value_path == "min-accept-hold-time")
    {
        min_accept_hold_time.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalTimers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hold-time" || name == "keepalive" || name == "min-accept-hold-time")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Limits::Limits()
    :
    maximum_neighbors{YType::uint32, "maximum-neighbors"}
{

    yang_name = "limits"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Limits::~Limits()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Limits::has_data() const
{
    return maximum_neighbors.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Limits::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_neighbors.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Limits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Limits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_neighbors.is_set || is_set(maximum_neighbors.yfilter)) leaf_name_data.push_back(maximum_neighbors.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Limits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Limits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Limits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-neighbors")
    {
        maximum_neighbors = value;
        maximum_neighbors.value_namespace = name_space;
        maximum_neighbors.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Limits::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-neighbors")
    {
        maximum_neighbors.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Limits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-neighbors")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::MplsActivatedInterfaces()
{

    yang_name = "mpls-activated-interfaces"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::~MplsActivatedInterfaces()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::has_data() const
{
    for (std::size_t index=0; index<mpls_activated_interface.size(); index++)
    {
        if(mpls_activated_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::has_operation() const
{
    for (std::size_t index=0; index<mpls_activated_interface.size(); index++)
    {
        if(mpls_activated_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-activated-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls-activated-interface")
    {
        for(auto const & c : mpls_activated_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::MplsActivatedInterface>();
        c->parent = this;
        mpls_activated_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mpls_activated_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls-activated-interface")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::MplsActivatedInterface::MplsActivatedInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "mpls-activated-interface"; yang_parent_name = "mpls-activated-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::MplsActivatedInterface::~MplsActivatedInterface()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::MplsActivatedInterface::has_data() const
{
    return interface_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::MplsActivatedInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::MplsActivatedInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-activated-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::MplsActivatedInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::MplsActivatedInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::MplsActivatedInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::MplsActivatedInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::MplsActivatedInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::MplsActivatedInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ReceiveSocketBufferSizes::ReceiveSocketBufferSizes()
    :
    bgp_receive_size{YType::uint32, "bgp-receive-size"},
    socket_receive_size{YType::uint32, "socket-receive-size"}
{

    yang_name = "receive-socket-buffer-sizes"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ReceiveSocketBufferSizes::~ReceiveSocketBufferSizes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ReceiveSocketBufferSizes::has_data() const
{
    return bgp_receive_size.is_set
	|| socket_receive_size.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ReceiveSocketBufferSizes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bgp_receive_size.yfilter)
	|| ydk::is_set(socket_receive_size.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ReceiveSocketBufferSizes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-socket-buffer-sizes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ReceiveSocketBufferSizes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp_receive_size.is_set || is_set(bgp_receive_size.yfilter)) leaf_name_data.push_back(bgp_receive_size.get_name_leafdata());
    if (socket_receive_size.is_set || is_set(socket_receive_size.yfilter)) leaf_name_data.push_back(socket_receive_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ReceiveSocketBufferSizes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ReceiveSocketBufferSizes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ReceiveSocketBufferSizes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bgp-receive-size")
    {
        bgp_receive_size = value;
        bgp_receive_size.value_namespace = name_space;
        bgp_receive_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "socket-receive-size")
    {
        socket_receive_size = value;
        socket_receive_size.value_namespace = name_space;
        socket_receive_size.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ReceiveSocketBufferSizes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bgp-receive-size")
    {
        bgp_receive_size.yfilter = yfilter;
    }
    if(value_path == "socket-receive-size")
    {
        socket_receive_size.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ReceiveSocketBufferSizes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-receive-size" || name == "socket-receive-size")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServers()
{

    yang_name = "rpki-servers"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::~RpkiServers()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::has_data() const
{
    for (std::size_t index=0; index<rpki_server.size(); index++)
    {
        if(rpki_server[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::has_operation() const
{
    for (std::size_t index=0; index<rpki_server.size(); index++)
    {
        if(rpki_server[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpki-servers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpki-server")
    {
        for(auto const & c : rpki_server)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer>();
        c->parent = this;
        rpki_server.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rpki_server)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpki-server")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::RpkiServer()
    :
    server{YType::str, "server"},
    enable{YType::empty, "enable"},
    password{YType::str, "password"},
    purge_time{YType::int32, "purge-time"},
    refresh_time{YType::int32, "refresh-time"},
    response_time{YType::int32, "response-time"},
    shutdown{YType::empty, "shutdown"},
    username{YType::str, "username"}
    	,
    transport(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::Transport>())
{
    transport->parent = this;

    yang_name = "rpki-server"; yang_parent_name = "rpki-servers"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::~RpkiServer()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::has_data() const
{
    return server.is_set
	|| enable.is_set
	|| password.is_set
	|| purge_time.is_set
	|| refresh_time.is_set
	|| response_time.is_set
	|| shutdown.is_set
	|| username.is_set
	|| (transport !=  nullptr && transport->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(server.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(purge_time.yfilter)
	|| ydk::is_set(refresh_time.yfilter)
	|| ydk::is_set(response_time.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(username.yfilter)
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpki-server" <<"[server='" <<server <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server.is_set || is_set(server.yfilter)) leaf_name_data.push_back(server.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (purge_time.is_set || is_set(purge_time.yfilter)) leaf_name_data.push_back(purge_time.get_name_leafdata());
    if (refresh_time.is_set || is_set(refresh_time.yfilter)) leaf_name_data.push_back(refresh_time.get_name_leafdata());
    if (response_time.is_set || is_set(response_time.yfilter)) leaf_name_data.push_back(response_time.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "server")
    {
        server = value;
        server.value_namespace = name_space;
        server.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "purge-time")
    {
        purge_time = value;
        purge_time.value_namespace = name_space;
        purge_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refresh-time")
    {
        refresh_time = value;
        refresh_time.value_namespace = name_space;
        refresh_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response-time")
    {
        response_time = value;
        response_time.value_namespace = name_space;
        response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "server")
    {
        server.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "purge-time")
    {
        purge_time.yfilter = yfilter;
    }
    if(value_path == "refresh-time")
    {
        refresh_time.yfilter = yfilter;
    }
    if(value_path == "response-time")
    {
        response_time.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transport" || name == "server" || name == "enable" || name == "password" || name == "purge-time" || name == "refresh-time" || name == "response-time" || name == "shutdown" || name == "username")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::Transport::Transport()
    :
    port{YType::uint16, "port"},
    transport{YType::enumeration, "transport"}
{

    yang_name = "transport"; yang_parent_name = "rpki-server"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::Transport::~Transport()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::Transport::has_data() const
{
    return port.is_set
	|| transport.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::Transport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(transport.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (transport.is_set || is_set(transport.yfilter)) leaf_name_data.push_back(transport.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport")
    {
        transport = value;
        transport.value_namespace = name_space;
        transport.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "transport")
    {
        transport.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port" || name == "transport")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::RpkiStaticRoutes()
{

    yang_name = "rpki-static-routes"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::~RpkiStaticRoutes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::has_data() const
{
    for (std::size_t index=0; index<rpki_static_route.size(); index++)
    {
        if(rpki_static_route[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::has_operation() const
{
    for (std::size_t index=0; index<rpki_static_route.size(); index++)
    {
        if(rpki_static_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpki-static-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpki-static-route")
    {
        for(auto const & c : rpki_static_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::RpkiStaticRoute>();
        c->parent = this;
        rpki_static_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rpki_static_route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpki-static-route")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::RpkiStaticRoute::RpkiStaticRoute()
    :
    addrress{YType::str, "addrress"},
    minimum{YType::int32, "minimum"},
    maximum{YType::int32, "maximum"},
    as{YType::int32, "as"}
{

    yang_name = "rpki-static-route"; yang_parent_name = "rpki-static-routes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::RpkiStaticRoute::~RpkiStaticRoute()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::RpkiStaticRoute::has_data() const
{
    return addrress.is_set
	|| minimum.is_set
	|| maximum.is_set
	|| as.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::RpkiStaticRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addrress.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(as.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::RpkiStaticRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpki-static-route" <<"[addrress='" <<addrress <<"']" <<"[minimum='" <<minimum <<"']" <<"[maximum='" <<maximum <<"']" <<"[as='" <<as <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::RpkiStaticRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addrress.is_set || is_set(addrress.yfilter)) leaf_name_data.push_back(addrress.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::RpkiStaticRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::RpkiStaticRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::RpkiStaticRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addrress")
    {
        addrress = value;
        addrress.value_namespace = name_space;
        addrress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as")
    {
        as = value;
        as.value_namespace = name_space;
        as.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::RpkiStaticRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addrress")
    {
        addrress.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::RpkiStaticRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addrress" || name == "minimum" || name == "maximum" || name == "as")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::SendSocketBufferSizes::SendSocketBufferSizes()
    :
    bgp_send_size{YType::uint32, "bgp-send-size"},
    socket_send_size{YType::uint32, "socket-send-size"}
{

    yang_name = "send-socket-buffer-sizes"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::SendSocketBufferSizes::~SendSocketBufferSizes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::SendSocketBufferSizes::has_data() const
{
    return bgp_send_size.is_set
	|| socket_send_size.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::SendSocketBufferSizes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bgp_send_size.yfilter)
	|| ydk::is_set(socket_send_size.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::SendSocketBufferSizes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-socket-buffer-sizes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::SendSocketBufferSizes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp_send_size.is_set || is_set(bgp_send_size.yfilter)) leaf_name_data.push_back(bgp_send_size.get_name_leafdata());
    if (socket_send_size.is_set || is_set(socket_send_size.yfilter)) leaf_name_data.push_back(socket_send_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::SendSocketBufferSizes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::SendSocketBufferSizes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::SendSocketBufferSizes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bgp-send-size")
    {
        bgp_send_size = value;
        bgp_send_size.value_namespace = name_space;
        bgp_send_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "socket-send-size")
    {
        socket_send_size = value;
        socket_send_size.value_namespace = name_space;
        socket_send_size.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::SendSocketBufferSizes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bgp-send-size")
    {
        bgp_send_size.yfilter = yfilter;
    }
    if(value_path == "socket-send-size")
    {
        socket_send_size.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::SendSocketBufferSizes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-send-size" || name == "socket-send-size")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::UpdateDelay::UpdateDelay()
    :
    always{YType::boolean, "always"},
    delay{YType::uint32, "delay"}
{

    yang_name = "update-delay"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::UpdateDelay::~UpdateDelay()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::UpdateDelay::has_data() const
{
    return always.is_set
	|| delay.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::UpdateDelay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(always.yfilter)
	|| ydk::is_set(delay.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::UpdateDelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::UpdateDelay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (always.is_set || is_set(always.yfilter)) leaf_name_data.push_back(always.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::UpdateDelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::UpdateDelay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::UpdateDelay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "always")
    {
        always = value;
        always.value_namespace = name_space;
        always.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::UpdateDelay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "always")
    {
        always.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::UpdateDelay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "always" || name == "delay")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::WriteLimit::WriteLimit()
    :
    desynchronize{YType::boolean, "desynchronize"},
    enqueued_messages{YType::uint32, "enqueued-messages"},
    formatted_messages{YType::uint32, "formatted-messages"}
{

    yang_name = "write-limit"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::WriteLimit::~WriteLimit()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::WriteLimit::has_data() const
{
    return desynchronize.is_set
	|| enqueued_messages.is_set
	|| formatted_messages.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::WriteLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(desynchronize.yfilter)
	|| ydk::is_set(enqueued_messages.yfilter)
	|| ydk::is_set(formatted_messages.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::WriteLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "write-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::WriteLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (desynchronize.is_set || is_set(desynchronize.yfilter)) leaf_name_data.push_back(desynchronize.get_name_leafdata());
    if (enqueued_messages.is_set || is_set(enqueued_messages.yfilter)) leaf_name_data.push_back(enqueued_messages.get_name_leafdata());
    if (formatted_messages.is_set || is_set(formatted_messages.yfilter)) leaf_name_data.push_back(formatted_messages.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::WriteLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::WriteLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::WriteLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "desynchronize")
    {
        desynchronize = value;
        desynchronize.value_namespace = name_space;
        desynchronize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enqueued-messages")
    {
        enqueued_messages = value;
        enqueued_messages.value_namespace = name_space;
        enqueued_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "formatted-messages")
    {
        formatted_messages = value;
        formatted_messages.value_namespace = name_space;
        formatted_messages.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::WriteLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "desynchronize")
    {
        desynchronize.yfilter = yfilter;
    }
    if(value_path == "enqueued-messages")
    {
        enqueued_messages.yfilter = yfilter;
    }
    if(value_path == "formatted-messages")
    {
        formatted_messages.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::WriteLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "desynchronize" || name == "enqueued-messages" || name == "formatted-messages")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrfs()
{

    yang_name = "vrfs"; yang_parent_name = "four-byte-as"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::~Vrfs()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    vrf_global(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal>())
	,vrf_neighbors(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors>())
{
    vrf_global->parent = this;
    vrf_neighbors->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrfs"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::~Vrf()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (vrf_global !=  nullptr && vrf_global->has_data())
	|| (vrf_neighbors !=  nullptr && vrf_neighbors->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (vrf_global !=  nullptr && vrf_global->has_operation())
	|| (vrf_neighbors !=  nullptr && vrf_neighbors->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-global")
    {
        if(vrf_global == nullptr)
        {
            vrf_global = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal>();
        }
        return vrf_global;
    }

    if(child_yang_name == "vrf-neighbors")
    {
        if(vrf_neighbors == nullptr)
        {
            vrf_neighbors = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors>();
        }
        return vrf_neighbors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vrf_global != nullptr)
    {
        children["vrf-global"] = vrf_global;
    }

    if(vrf_neighbors != nullptr)
    {
        children["vrf-neighbors"] = vrf_neighbors;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-global" || name == "vrf-neighbors" || name == "vrf-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobal()
    :
    best_path_aigp_ignore{YType::empty, "best-path-aigp-ignore"},
    best_path_as_multipath_relax{YType::empty, "best-path-as-multipath-relax"},
    best_path_as_path_length{YType::empty, "best-path-as-path-length"},
    best_path_confederation_paths{YType::empty, "best-path-confederation-paths"},
    best_path_cost_community{YType::empty, "best-path-cost-community"},
    best_path_med_always{YType::empty, "best-path-med-always"},
    best_path_med_missing{YType::empty, "best-path-med-missing"},
    best_path_router_id{YType::empty, "best-path-router-id"},
    default_info_originate{YType::empty, "default-info-originate"},
    default_metric{YType::uint32, "default-metric"},
    disable_auto_soft_reset{YType::empty, "disable-auto-soft-reset"},
    disable_enforce_first_as{YType::empty, "disable-enforce-first-as"},
    disable_fast_external_fallover{YType::empty, "disable-fast-external-fallover"},
    disable_msg_log{YType::empty, "disable-msg-log"},
    disable_neighbor_logging{YType::empty, "disable-neighbor-logging"},
    exists{YType::empty, "exists"},
    igp_redist_internal{YType::empty, "igp-redist-internal"},
    local_preference{YType::uint32, "local-preference"},
    multi_path_as_path_ignore_onwards{YType::empty, "multi-path-as-path-ignore-onwards"},
    router_id{YType::str, "router-id"}
    	,
    bfd(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::Bfd>())
	,global_timers(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::GlobalTimers>())
	,mpls_activated_interfaces(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces>())
	,receive_socket_buffer_sizes(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::ReceiveSocketBufferSizes>())
	,route_distinguisher(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::RouteDistinguisher>())
	,send_socket_buffer_sizes(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::SendSocketBufferSizes>())
	,vrf_global_afs(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs>())
{
    bfd->parent = this;
    global_timers->parent = this;
    mpls_activated_interfaces->parent = this;
    receive_socket_buffer_sizes->parent = this;
    route_distinguisher->parent = this;
    send_socket_buffer_sizes->parent = this;
    vrf_global_afs->parent = this;

    yang_name = "vrf-global"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::~VrfGlobal()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::has_data() const
{
    return best_path_aigp_ignore.is_set
	|| best_path_as_multipath_relax.is_set
	|| best_path_as_path_length.is_set
	|| best_path_confederation_paths.is_set
	|| best_path_cost_community.is_set
	|| best_path_med_always.is_set
	|| best_path_med_missing.is_set
	|| best_path_router_id.is_set
	|| default_info_originate.is_set
	|| default_metric.is_set
	|| disable_auto_soft_reset.is_set
	|| disable_enforce_first_as.is_set
	|| disable_fast_external_fallover.is_set
	|| disable_msg_log.is_set
	|| disable_neighbor_logging.is_set
	|| exists.is_set
	|| igp_redist_internal.is_set
	|| local_preference.is_set
	|| multi_path_as_path_ignore_onwards.is_set
	|| router_id.is_set
	|| (bfd !=  nullptr && bfd->has_data())
	|| (global_timers !=  nullptr && global_timers->has_data())
	|| (mpls_activated_interfaces !=  nullptr && mpls_activated_interfaces->has_data())
	|| (receive_socket_buffer_sizes !=  nullptr && receive_socket_buffer_sizes->has_data())
	|| (route_distinguisher !=  nullptr && route_distinguisher->has_data())
	|| (send_socket_buffer_sizes !=  nullptr && send_socket_buffer_sizes->has_data())
	|| (vrf_global_afs !=  nullptr && vrf_global_afs->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(best_path_aigp_ignore.yfilter)
	|| ydk::is_set(best_path_as_multipath_relax.yfilter)
	|| ydk::is_set(best_path_as_path_length.yfilter)
	|| ydk::is_set(best_path_confederation_paths.yfilter)
	|| ydk::is_set(best_path_cost_community.yfilter)
	|| ydk::is_set(best_path_med_always.yfilter)
	|| ydk::is_set(best_path_med_missing.yfilter)
	|| ydk::is_set(best_path_router_id.yfilter)
	|| ydk::is_set(default_info_originate.yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(disable_auto_soft_reset.yfilter)
	|| ydk::is_set(disable_enforce_first_as.yfilter)
	|| ydk::is_set(disable_fast_external_fallover.yfilter)
	|| ydk::is_set(disable_msg_log.yfilter)
	|| ydk::is_set(disable_neighbor_logging.yfilter)
	|| ydk::is_set(exists.yfilter)
	|| ydk::is_set(igp_redist_internal.yfilter)
	|| ydk::is_set(local_preference.yfilter)
	|| ydk::is_set(multi_path_as_path_ignore_onwards.yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (global_timers !=  nullptr && global_timers->has_operation())
	|| (mpls_activated_interfaces !=  nullptr && mpls_activated_interfaces->has_operation())
	|| (receive_socket_buffer_sizes !=  nullptr && receive_socket_buffer_sizes->has_operation())
	|| (route_distinguisher !=  nullptr && route_distinguisher->has_operation())
	|| (send_socket_buffer_sizes !=  nullptr && send_socket_buffer_sizes->has_operation())
	|| (vrf_global_afs !=  nullptr && vrf_global_afs->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (best_path_aigp_ignore.is_set || is_set(best_path_aigp_ignore.yfilter)) leaf_name_data.push_back(best_path_aigp_ignore.get_name_leafdata());
    if (best_path_as_multipath_relax.is_set || is_set(best_path_as_multipath_relax.yfilter)) leaf_name_data.push_back(best_path_as_multipath_relax.get_name_leafdata());
    if (best_path_as_path_length.is_set || is_set(best_path_as_path_length.yfilter)) leaf_name_data.push_back(best_path_as_path_length.get_name_leafdata());
    if (best_path_confederation_paths.is_set || is_set(best_path_confederation_paths.yfilter)) leaf_name_data.push_back(best_path_confederation_paths.get_name_leafdata());
    if (best_path_cost_community.is_set || is_set(best_path_cost_community.yfilter)) leaf_name_data.push_back(best_path_cost_community.get_name_leafdata());
    if (best_path_med_always.is_set || is_set(best_path_med_always.yfilter)) leaf_name_data.push_back(best_path_med_always.get_name_leafdata());
    if (best_path_med_missing.is_set || is_set(best_path_med_missing.yfilter)) leaf_name_data.push_back(best_path_med_missing.get_name_leafdata());
    if (best_path_router_id.is_set || is_set(best_path_router_id.yfilter)) leaf_name_data.push_back(best_path_router_id.get_name_leafdata());
    if (default_info_originate.is_set || is_set(default_info_originate.yfilter)) leaf_name_data.push_back(default_info_originate.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (disable_auto_soft_reset.is_set || is_set(disable_auto_soft_reset.yfilter)) leaf_name_data.push_back(disable_auto_soft_reset.get_name_leafdata());
    if (disable_enforce_first_as.is_set || is_set(disable_enforce_first_as.yfilter)) leaf_name_data.push_back(disable_enforce_first_as.get_name_leafdata());
    if (disable_fast_external_fallover.is_set || is_set(disable_fast_external_fallover.yfilter)) leaf_name_data.push_back(disable_fast_external_fallover.get_name_leafdata());
    if (disable_msg_log.is_set || is_set(disable_msg_log.yfilter)) leaf_name_data.push_back(disable_msg_log.get_name_leafdata());
    if (disable_neighbor_logging.is_set || is_set(disable_neighbor_logging.yfilter)) leaf_name_data.push_back(disable_neighbor_logging.get_name_leafdata());
    if (exists.is_set || is_set(exists.yfilter)) leaf_name_data.push_back(exists.get_name_leafdata());
    if (igp_redist_internal.is_set || is_set(igp_redist_internal.yfilter)) leaf_name_data.push_back(igp_redist_internal.get_name_leafdata());
    if (local_preference.is_set || is_set(local_preference.yfilter)) leaf_name_data.push_back(local_preference.get_name_leafdata());
    if (multi_path_as_path_ignore_onwards.is_set || is_set(multi_path_as_path_ignore_onwards.yfilter)) leaf_name_data.push_back(multi_path_as_path_ignore_onwards.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "global-timers")
    {
        if(global_timers == nullptr)
        {
            global_timers = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::GlobalTimers>();
        }
        return global_timers;
    }

    if(child_yang_name == "mpls-activated-interfaces")
    {
        if(mpls_activated_interfaces == nullptr)
        {
            mpls_activated_interfaces = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces>();
        }
        return mpls_activated_interfaces;
    }

    if(child_yang_name == "receive-socket-buffer-sizes")
    {
        if(receive_socket_buffer_sizes == nullptr)
        {
            receive_socket_buffer_sizes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::ReceiveSocketBufferSizes>();
        }
        return receive_socket_buffer_sizes;
    }

    if(child_yang_name == "route-distinguisher")
    {
        if(route_distinguisher == nullptr)
        {
            route_distinguisher = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::RouteDistinguisher>();
        }
        return route_distinguisher;
    }

    if(child_yang_name == "send-socket-buffer-sizes")
    {
        if(send_socket_buffer_sizes == nullptr)
        {
            send_socket_buffer_sizes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::SendSocketBufferSizes>();
        }
        return send_socket_buffer_sizes;
    }

    if(child_yang_name == "vrf-global-afs")
    {
        if(vrf_global_afs == nullptr)
        {
            vrf_global_afs = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs>();
        }
        return vrf_global_afs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(global_timers != nullptr)
    {
        children["global-timers"] = global_timers;
    }

    if(mpls_activated_interfaces != nullptr)
    {
        children["mpls-activated-interfaces"] = mpls_activated_interfaces;
    }

    if(receive_socket_buffer_sizes != nullptr)
    {
        children["receive-socket-buffer-sizes"] = receive_socket_buffer_sizes;
    }

    if(route_distinguisher != nullptr)
    {
        children["route-distinguisher"] = route_distinguisher;
    }

    if(send_socket_buffer_sizes != nullptr)
    {
        children["send-socket-buffer-sizes"] = send_socket_buffer_sizes;
    }

    if(vrf_global_afs != nullptr)
    {
        children["vrf-global-afs"] = vrf_global_afs;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "best-path-aigp-ignore")
    {
        best_path_aigp_ignore = value;
        best_path_aigp_ignore.value_namespace = name_space;
        best_path_aigp_ignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-path-as-multipath-relax")
    {
        best_path_as_multipath_relax = value;
        best_path_as_multipath_relax.value_namespace = name_space;
        best_path_as_multipath_relax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-path-as-path-length")
    {
        best_path_as_path_length = value;
        best_path_as_path_length.value_namespace = name_space;
        best_path_as_path_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-path-confederation-paths")
    {
        best_path_confederation_paths = value;
        best_path_confederation_paths.value_namespace = name_space;
        best_path_confederation_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-path-cost-community")
    {
        best_path_cost_community = value;
        best_path_cost_community.value_namespace = name_space;
        best_path_cost_community.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-path-med-always")
    {
        best_path_med_always = value;
        best_path_med_always.value_namespace = name_space;
        best_path_med_always.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-path-med-missing")
    {
        best_path_med_missing = value;
        best_path_med_missing.value_namespace = name_space;
        best_path_med_missing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-path-router-id")
    {
        best_path_router_id = value;
        best_path_router_id.value_namespace = name_space;
        best_path_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-info-originate")
    {
        default_info_originate = value;
        default_info_originate.value_namespace = name_space;
        default_info_originate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-auto-soft-reset")
    {
        disable_auto_soft_reset = value;
        disable_auto_soft_reset.value_namespace = name_space;
        disable_auto_soft_reset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-enforce-first-as")
    {
        disable_enforce_first_as = value;
        disable_enforce_first_as.value_namespace = name_space;
        disable_enforce_first_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-fast-external-fallover")
    {
        disable_fast_external_fallover = value;
        disable_fast_external_fallover.value_namespace = name_space;
        disable_fast_external_fallover.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-msg-log")
    {
        disable_msg_log = value;
        disable_msg_log.value_namespace = name_space;
        disable_msg_log.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-neighbor-logging")
    {
        disable_neighbor_logging = value;
        disable_neighbor_logging.value_namespace = name_space;
        disable_neighbor_logging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exists")
    {
        exists = value;
        exists.value_namespace = name_space;
        exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-redist-internal")
    {
        igp_redist_internal = value;
        igp_redist_internal.value_namespace = name_space;
        igp_redist_internal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-preference")
    {
        local_preference = value;
        local_preference.value_namespace = name_space;
        local_preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multi-path-as-path-ignore-onwards")
    {
        multi_path_as_path_ignore_onwards = value;
        multi_path_as_path_ignore_onwards.value_namespace = name_space;
        multi_path_as_path_ignore_onwards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "best-path-aigp-ignore")
    {
        best_path_aigp_ignore.yfilter = yfilter;
    }
    if(value_path == "best-path-as-multipath-relax")
    {
        best_path_as_multipath_relax.yfilter = yfilter;
    }
    if(value_path == "best-path-as-path-length")
    {
        best_path_as_path_length.yfilter = yfilter;
    }
    if(value_path == "best-path-confederation-paths")
    {
        best_path_confederation_paths.yfilter = yfilter;
    }
    if(value_path == "best-path-cost-community")
    {
        best_path_cost_community.yfilter = yfilter;
    }
    if(value_path == "best-path-med-always")
    {
        best_path_med_always.yfilter = yfilter;
    }
    if(value_path == "best-path-med-missing")
    {
        best_path_med_missing.yfilter = yfilter;
    }
    if(value_path == "best-path-router-id")
    {
        best_path_router_id.yfilter = yfilter;
    }
    if(value_path == "default-info-originate")
    {
        default_info_originate.yfilter = yfilter;
    }
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "disable-auto-soft-reset")
    {
        disable_auto_soft_reset.yfilter = yfilter;
    }
    if(value_path == "disable-enforce-first-as")
    {
        disable_enforce_first_as.yfilter = yfilter;
    }
    if(value_path == "disable-fast-external-fallover")
    {
        disable_fast_external_fallover.yfilter = yfilter;
    }
    if(value_path == "disable-msg-log")
    {
        disable_msg_log.yfilter = yfilter;
    }
    if(value_path == "disable-neighbor-logging")
    {
        disable_neighbor_logging.yfilter = yfilter;
    }
    if(value_path == "exists")
    {
        exists.yfilter = yfilter;
    }
    if(value_path == "igp-redist-internal")
    {
        igp_redist_internal.yfilter = yfilter;
    }
    if(value_path == "local-preference")
    {
        local_preference.yfilter = yfilter;
    }
    if(value_path == "multi-path-as-path-ignore-onwards")
    {
        multi_path_as_path_ignore_onwards.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd" || name == "global-timers" || name == "mpls-activated-interfaces" || name == "receive-socket-buffer-sizes" || name == "route-distinguisher" || name == "send-socket-buffer-sizes" || name == "vrf-global-afs" || name == "best-path-aigp-ignore" || name == "best-path-as-multipath-relax" || name == "best-path-as-path-length" || name == "best-path-confederation-paths" || name == "best-path-cost-community" || name == "best-path-med-always" || name == "best-path-med-missing" || name == "best-path-router-id" || name == "default-info-originate" || name == "default-metric" || name == "disable-auto-soft-reset" || name == "disable-enforce-first-as" || name == "disable-fast-external-fallover" || name == "disable-msg-log" || name == "disable-neighbor-logging" || name == "exists" || name == "igp-redist-internal" || name == "local-preference" || name == "multi-path-as-path-ignore-onwards" || name == "router-id")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::Bfd::Bfd()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    interval{YType::uint32, "interval"}
{

    yang_name = "bfd"; yang_parent_name = "vrf-global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::Bfd::~Bfd()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::Bfd::has_data() const
{
    return detection_multiplier.is_set
	|| interval.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection-multiplier" || name == "interval")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::GlobalTimers::GlobalTimers()
    :
    hold_time{YType::uint32, "hold-time"},
    keepalive{YType::uint32, "keepalive"},
    min_accept_hold_time{YType::uint32, "min-accept-hold-time"}
{

    yang_name = "global-timers"; yang_parent_name = "vrf-global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::GlobalTimers::~GlobalTimers()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::GlobalTimers::has_data() const
{
    return hold_time.is_set
	|| keepalive.is_set
	|| min_accept_hold_time.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::GlobalTimers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| ydk::is_set(keepalive.yfilter)
	|| ydk::is_set(min_accept_hold_time.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::GlobalTimers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::GlobalTimers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (keepalive.is_set || is_set(keepalive.yfilter)) leaf_name_data.push_back(keepalive.get_name_leafdata());
    if (min_accept_hold_time.is_set || is_set(min_accept_hold_time.yfilter)) leaf_name_data.push_back(min_accept_hold_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::GlobalTimers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::GlobalTimers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::GlobalTimers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalive")
    {
        keepalive = value;
        keepalive.value_namespace = name_space;
        keepalive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-accept-hold-time")
    {
        min_accept_hold_time = value;
        min_accept_hold_time.value_namespace = name_space;
        min_accept_hold_time.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::GlobalTimers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
    if(value_path == "keepalive")
    {
        keepalive.yfilter = yfilter;
    }
    if(value_path == "min-accept-hold-time")
    {
        min_accept_hold_time.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::GlobalTimers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hold-time" || name == "keepalive" || name == "min-accept-hold-time")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::MplsActivatedInterfaces()
{

    yang_name = "mpls-activated-interfaces"; yang_parent_name = "vrf-global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::~MplsActivatedInterfaces()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::has_data() const
{
    for (std::size_t index=0; index<mpls_activated_interface.size(); index++)
    {
        if(mpls_activated_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::has_operation() const
{
    for (std::size_t index=0; index<mpls_activated_interface.size(); index++)
    {
        if(mpls_activated_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-activated-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls-activated-interface")
    {
        for(auto const & c : mpls_activated_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::MplsActivatedInterface>();
        c->parent = this;
        mpls_activated_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mpls_activated_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls-activated-interface")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::MplsActivatedInterface::MplsActivatedInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "mpls-activated-interface"; yang_parent_name = "mpls-activated-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::MplsActivatedInterface::~MplsActivatedInterface()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::MplsActivatedInterface::has_data() const
{
    return interface_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::MplsActivatedInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::MplsActivatedInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-activated-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::MplsActivatedInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::MplsActivatedInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::MplsActivatedInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::MplsActivatedInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::MplsActivatedInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::MplsActivatedInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::ReceiveSocketBufferSizes::ReceiveSocketBufferSizes()
    :
    bgp_receive_size{YType::uint32, "bgp-receive-size"},
    socket_receive_size{YType::uint32, "socket-receive-size"}
{

    yang_name = "receive-socket-buffer-sizes"; yang_parent_name = "vrf-global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::ReceiveSocketBufferSizes::~ReceiveSocketBufferSizes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::ReceiveSocketBufferSizes::has_data() const
{
    return bgp_receive_size.is_set
	|| socket_receive_size.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::ReceiveSocketBufferSizes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bgp_receive_size.yfilter)
	|| ydk::is_set(socket_receive_size.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::ReceiveSocketBufferSizes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-socket-buffer-sizes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::ReceiveSocketBufferSizes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp_receive_size.is_set || is_set(bgp_receive_size.yfilter)) leaf_name_data.push_back(bgp_receive_size.get_name_leafdata());
    if (socket_receive_size.is_set || is_set(socket_receive_size.yfilter)) leaf_name_data.push_back(socket_receive_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::ReceiveSocketBufferSizes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::ReceiveSocketBufferSizes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::ReceiveSocketBufferSizes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bgp-receive-size")
    {
        bgp_receive_size = value;
        bgp_receive_size.value_namespace = name_space;
        bgp_receive_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "socket-receive-size")
    {
        socket_receive_size = value;
        socket_receive_size.value_namespace = name_space;
        socket_receive_size.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::ReceiveSocketBufferSizes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bgp-receive-size")
    {
        bgp_receive_size.yfilter = yfilter;
    }
    if(value_path == "socket-receive-size")
    {
        socket_receive_size.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::ReceiveSocketBufferSizes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-receive-size" || name == "socket-receive-size")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::RouteDistinguisher::RouteDistinguisher()
    :
    address{YType::str, "address"},
    address_index{YType::uint32, "address-index"},
    as{YType::uint32, "as"},
    as_index{YType::uint32, "as-index"},
    as_xx{YType::uint32, "as-xx"},
    type{YType::enumeration, "type"}
{

    yang_name = "route-distinguisher"; yang_parent_name = "vrf-global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::RouteDistinguisher::~RouteDistinguisher()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::RouteDistinguisher::has_data() const
{
    return address.is_set
	|| address_index.is_set
	|| as.is_set
	|| as_index.is_set
	|| as_xx.is_set
	|| type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::RouteDistinguisher::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(address_index.yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as_index.yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::RouteDistinguisher::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-distinguisher";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::RouteDistinguisher::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (address_index.is_set || is_set(address_index.yfilter)) leaf_name_data.push_back(address_index.get_name_leafdata());
    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as_index.is_set || is_set(as_index.yfilter)) leaf_name_data.push_back(as_index.get_name_leafdata());
    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::RouteDistinguisher::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::RouteDistinguisher::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::RouteDistinguisher::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-index")
    {
        address_index = value;
        address_index.value_namespace = name_space;
        address_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as")
    {
        as = value;
        as.value_namespace = name_space;
        as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-index")
    {
        as_index = value;
        as_index.value_namespace = name_space;
        as_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-xx")
    {
        as_xx = value;
        as_xx.value_namespace = name_space;
        as_xx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::RouteDistinguisher::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "address-index")
    {
        address_index.yfilter = yfilter;
    }
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
    if(value_path == "as-index")
    {
        as_index.yfilter = yfilter;
    }
    if(value_path == "as-xx")
    {
        as_xx.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::RouteDistinguisher::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "address-index" || name == "as" || name == "as-index" || name == "as-xx" || name == "type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::SendSocketBufferSizes::SendSocketBufferSizes()
    :
    bgp_send_size{YType::uint32, "bgp-send-size"},
    socket_send_size{YType::uint32, "socket-send-size"}
{

    yang_name = "send-socket-buffer-sizes"; yang_parent_name = "vrf-global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::SendSocketBufferSizes::~SendSocketBufferSizes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::SendSocketBufferSizes::has_data() const
{
    return bgp_send_size.is_set
	|| socket_send_size.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::SendSocketBufferSizes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bgp_send_size.yfilter)
	|| ydk::is_set(socket_send_size.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::SendSocketBufferSizes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-socket-buffer-sizes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::SendSocketBufferSizes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp_send_size.is_set || is_set(bgp_send_size.yfilter)) leaf_name_data.push_back(bgp_send_size.get_name_leafdata());
    if (socket_send_size.is_set || is_set(socket_send_size.yfilter)) leaf_name_data.push_back(socket_send_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::SendSocketBufferSizes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::SendSocketBufferSizes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::SendSocketBufferSizes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bgp-send-size")
    {
        bgp_send_size = value;
        bgp_send_size.value_namespace = name_space;
        bgp_send_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "socket-send-size")
    {
        socket_send_size = value;
        socket_send_size.value_namespace = name_space;
        socket_send_size.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::SendSocketBufferSizes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bgp-send-size")
    {
        bgp_send_size.yfilter = yfilter;
    }
    if(value_path == "socket-send-size")
    {
        socket_send_size.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::SendSocketBufferSizes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-send-size" || name == "socket-send-size")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAfs()
{

    yang_name = "vrf-global-afs"; yang_parent_name = "vrf-global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::~VrfGlobalAfs()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::has_data() const
{
    for (std::size_t index=0; index<vrf_global_af.size(); index++)
    {
        if(vrf_global_af[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::has_operation() const
{
    for (std::size_t index=0; index<vrf_global_af.size(); index++)
    {
        if(vrf_global_af[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-global-afs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-global-af")
    {
        for(auto const & c : vrf_global_af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf>();
        c->parent = this;
        vrf_global_af.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf_global_af)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-global-af")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::VrfGlobalAf()
    :
    af_name{YType::enumeration, "af-name"},
    additional_paths_receive{YType::enumeration, "additional-paths-receive"},
    additional_paths_send{YType::enumeration, "additional-paths-send"},
    advertise_local_labeled_route_safi_unicast{YType::enumeration, "advertise-local-labeled-route-safi-unicast"},
    allow_vpn_default_originate{YType::boolean, "allow-vpn-default-originate"},
    attribute_download{YType::empty, "attribute-download"},
    best_external{YType::boolean, "best-external"},
    disable_as_path_loop_check{YType::empty, "disable-as-path-loop-check"},
    dynamic_med_interval{YType::uint32, "dynamic-med-interval"},
    enable{YType::empty, "enable"},
    next_hop_resolution_prefix_length_minimum{YType::uint32, "next-hop-resolution-prefix-length-minimum"},
    permanent_network{YType::str, "permanent-network"},
    reset_weight_on_import{YType::boolean, "reset-weight-on-import"},
    rt_download{YType::empty, "rt-download"},
    table_policy{YType::str, "table-policy"}
    	,
    additional_paths_selection(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AdditionalPathsSelection>())
	,aggregate_addresses(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses>())
	,allocate_label(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AllocateLabel>())
	,application_routes(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ApplicationRoutes>())
	,connected_routes(nullptr) // presence node
	,dampening(nullptr) // presence node
	,distance(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Distance>())
	,ebgp(nullptr) // presence node
	,eibgp(nullptr) // presence node
	,eigrp_routes(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes>())
	,ibgp(nullptr) // presence node
	,label_mode(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LabelMode>())
	,lisp_routes(nullptr) // presence node
	,mobile_routes(nullptr) // presence node
	,mvpn(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Mvpn>())
	,ospf_routes(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes>())
	,rip_routes(nullptr) // presence node
	,sourced_networks(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks>())
	,static_routes(nullptr) // presence node
	,subscriber_routes(nullptr) // presence node
{
    additional_paths_selection->parent = this;
    aggregate_addresses->parent = this;
    allocate_label->parent = this;
    application_routes->parent = this;
    distance->parent = this;
    eigrp_routes->parent = this;
    label_mode->parent = this;
    mvpn->parent = this;
    ospf_routes->parent = this;
    sourced_networks->parent = this;

    yang_name = "vrf-global-af"; yang_parent_name = "vrf-global-afs"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::~VrfGlobalAf()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::has_data() const
{
    return af_name.is_set
	|| additional_paths_receive.is_set
	|| additional_paths_send.is_set
	|| advertise_local_labeled_route_safi_unicast.is_set
	|| allow_vpn_default_originate.is_set
	|| attribute_download.is_set
	|| best_external.is_set
	|| disable_as_path_loop_check.is_set
	|| dynamic_med_interval.is_set
	|| enable.is_set
	|| next_hop_resolution_prefix_length_minimum.is_set
	|| permanent_network.is_set
	|| reset_weight_on_import.is_set
	|| rt_download.is_set
	|| table_policy.is_set
	|| (additional_paths_selection !=  nullptr && additional_paths_selection->has_data())
	|| (aggregate_addresses !=  nullptr && aggregate_addresses->has_data())
	|| (allocate_label !=  nullptr && allocate_label->has_data())
	|| (application_routes !=  nullptr && application_routes->has_data())
	|| (connected_routes !=  nullptr && connected_routes->has_data())
	|| (dampening !=  nullptr && dampening->has_data())
	|| (distance !=  nullptr && distance->has_data())
	|| (ebgp !=  nullptr && ebgp->has_data())
	|| (eibgp !=  nullptr && eibgp->has_data())
	|| (eigrp_routes !=  nullptr && eigrp_routes->has_data())
	|| (ibgp !=  nullptr && ibgp->has_data())
	|| (label_mode !=  nullptr && label_mode->has_data())
	|| (lisp_routes !=  nullptr && lisp_routes->has_data())
	|| (mobile_routes !=  nullptr && mobile_routes->has_data())
	|| (mvpn !=  nullptr && mvpn->has_data())
	|| (ospf_routes !=  nullptr && ospf_routes->has_data())
	|| (rip_routes !=  nullptr && rip_routes->has_data())
	|| (sourced_networks !=  nullptr && sourced_networks->has_data())
	|| (static_routes !=  nullptr && static_routes->has_data())
	|| (subscriber_routes !=  nullptr && subscriber_routes->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(additional_paths_receive.yfilter)
	|| ydk::is_set(additional_paths_send.yfilter)
	|| ydk::is_set(advertise_local_labeled_route_safi_unicast.yfilter)
	|| ydk::is_set(allow_vpn_default_originate.yfilter)
	|| ydk::is_set(attribute_download.yfilter)
	|| ydk::is_set(best_external.yfilter)
	|| ydk::is_set(disable_as_path_loop_check.yfilter)
	|| ydk::is_set(dynamic_med_interval.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(next_hop_resolution_prefix_length_minimum.yfilter)
	|| ydk::is_set(permanent_network.yfilter)
	|| ydk::is_set(reset_weight_on_import.yfilter)
	|| ydk::is_set(rt_download.yfilter)
	|| ydk::is_set(table_policy.yfilter)
	|| (additional_paths_selection !=  nullptr && additional_paths_selection->has_operation())
	|| (aggregate_addresses !=  nullptr && aggregate_addresses->has_operation())
	|| (allocate_label !=  nullptr && allocate_label->has_operation())
	|| (application_routes !=  nullptr && application_routes->has_operation())
	|| (connected_routes !=  nullptr && connected_routes->has_operation())
	|| (dampening !=  nullptr && dampening->has_operation())
	|| (distance !=  nullptr && distance->has_operation())
	|| (ebgp !=  nullptr && ebgp->has_operation())
	|| (eibgp !=  nullptr && eibgp->has_operation())
	|| (eigrp_routes !=  nullptr && eigrp_routes->has_operation())
	|| (ibgp !=  nullptr && ibgp->has_operation())
	|| (label_mode !=  nullptr && label_mode->has_operation())
	|| (lisp_routes !=  nullptr && lisp_routes->has_operation())
	|| (mobile_routes !=  nullptr && mobile_routes->has_operation())
	|| (mvpn !=  nullptr && mvpn->has_operation())
	|| (ospf_routes !=  nullptr && ospf_routes->has_operation())
	|| (rip_routes !=  nullptr && rip_routes->has_operation())
	|| (sourced_networks !=  nullptr && sourced_networks->has_operation())
	|| (static_routes !=  nullptr && static_routes->has_operation())
	|| (subscriber_routes !=  nullptr && subscriber_routes->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-global-af" <<"[af-name='" <<af_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (additional_paths_receive.is_set || is_set(additional_paths_receive.yfilter)) leaf_name_data.push_back(additional_paths_receive.get_name_leafdata());
    if (additional_paths_send.is_set || is_set(additional_paths_send.yfilter)) leaf_name_data.push_back(additional_paths_send.get_name_leafdata());
    if (advertise_local_labeled_route_safi_unicast.is_set || is_set(advertise_local_labeled_route_safi_unicast.yfilter)) leaf_name_data.push_back(advertise_local_labeled_route_safi_unicast.get_name_leafdata());
    if (allow_vpn_default_originate.is_set || is_set(allow_vpn_default_originate.yfilter)) leaf_name_data.push_back(allow_vpn_default_originate.get_name_leafdata());
    if (attribute_download.is_set || is_set(attribute_download.yfilter)) leaf_name_data.push_back(attribute_download.get_name_leafdata());
    if (best_external.is_set || is_set(best_external.yfilter)) leaf_name_data.push_back(best_external.get_name_leafdata());
    if (disable_as_path_loop_check.is_set || is_set(disable_as_path_loop_check.yfilter)) leaf_name_data.push_back(disable_as_path_loop_check.get_name_leafdata());
    if (dynamic_med_interval.is_set || is_set(dynamic_med_interval.yfilter)) leaf_name_data.push_back(dynamic_med_interval.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (next_hop_resolution_prefix_length_minimum.is_set || is_set(next_hop_resolution_prefix_length_minimum.yfilter)) leaf_name_data.push_back(next_hop_resolution_prefix_length_minimum.get_name_leafdata());
    if (permanent_network.is_set || is_set(permanent_network.yfilter)) leaf_name_data.push_back(permanent_network.get_name_leafdata());
    if (reset_weight_on_import.is_set || is_set(reset_weight_on_import.yfilter)) leaf_name_data.push_back(reset_weight_on_import.get_name_leafdata());
    if (rt_download.is_set || is_set(rt_download.yfilter)) leaf_name_data.push_back(rt_download.get_name_leafdata());
    if (table_policy.is_set || is_set(table_policy.yfilter)) leaf_name_data.push_back(table_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "additional-paths-selection")
    {
        if(additional_paths_selection == nullptr)
        {
            additional_paths_selection = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AdditionalPathsSelection>();
        }
        return additional_paths_selection;
    }

    if(child_yang_name == "aggregate-addresses")
    {
        if(aggregate_addresses == nullptr)
        {
            aggregate_addresses = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses>();
        }
        return aggregate_addresses;
    }

    if(child_yang_name == "allocate-label")
    {
        if(allocate_label == nullptr)
        {
            allocate_label = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AllocateLabel>();
        }
        return allocate_label;
    }

    if(child_yang_name == "application-routes")
    {
        if(application_routes == nullptr)
        {
            application_routes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ApplicationRoutes>();
        }
        return application_routes;
    }

    if(child_yang_name == "connected-routes")
    {
        if(connected_routes == nullptr)
        {
            connected_routes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ConnectedRoutes>();
        }
        return connected_routes;
    }

    if(child_yang_name == "dampening")
    {
        if(dampening == nullptr)
        {
            dampening = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Dampening>();
        }
        return dampening;
    }

    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Distance>();
        }
        return distance;
    }

    if(child_yang_name == "ebgp")
    {
        if(ebgp == nullptr)
        {
            ebgp = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ebgp>();
        }
        return ebgp;
    }

    if(child_yang_name == "eibgp")
    {
        if(eibgp == nullptr)
        {
            eibgp = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Eibgp>();
        }
        return eibgp;
    }

    if(child_yang_name == "eigrp-routes")
    {
        if(eigrp_routes == nullptr)
        {
            eigrp_routes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes>();
        }
        return eigrp_routes;
    }

    if(child_yang_name == "ibgp")
    {
        if(ibgp == nullptr)
        {
            ibgp = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ibgp>();
        }
        return ibgp;
    }

    if(child_yang_name == "label-mode")
    {
        if(label_mode == nullptr)
        {
            label_mode = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LabelMode>();
        }
        return label_mode;
    }

    if(child_yang_name == "lisp-routes")
    {
        if(lisp_routes == nullptr)
        {
            lisp_routes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LispRoutes>();
        }
        return lisp_routes;
    }

    if(child_yang_name == "mobile-routes")
    {
        if(mobile_routes == nullptr)
        {
            mobile_routes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::MobileRoutes>();
        }
        return mobile_routes;
    }

    if(child_yang_name == "mvpn")
    {
        if(mvpn == nullptr)
        {
            mvpn = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Mvpn>();
        }
        return mvpn;
    }

    if(child_yang_name == "ospf-routes")
    {
        if(ospf_routes == nullptr)
        {
            ospf_routes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes>();
        }
        return ospf_routes;
    }

    if(child_yang_name == "rip-routes")
    {
        if(rip_routes == nullptr)
        {
            rip_routes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::RipRoutes>();
        }
        return rip_routes;
    }

    if(child_yang_name == "sourced-networks")
    {
        if(sourced_networks == nullptr)
        {
            sourced_networks = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks>();
        }
        return sourced_networks;
    }

    if(child_yang_name == "static-routes")
    {
        if(static_routes == nullptr)
        {
            static_routes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::StaticRoutes>();
        }
        return static_routes;
    }

    if(child_yang_name == "subscriber-routes")
    {
        if(subscriber_routes == nullptr)
        {
            subscriber_routes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SubscriberRoutes>();
        }
        return subscriber_routes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(additional_paths_selection != nullptr)
    {
        children["additional-paths-selection"] = additional_paths_selection;
    }

    if(aggregate_addresses != nullptr)
    {
        children["aggregate-addresses"] = aggregate_addresses;
    }

    if(allocate_label != nullptr)
    {
        children["allocate-label"] = allocate_label;
    }

    if(application_routes != nullptr)
    {
        children["application-routes"] = application_routes;
    }

    if(connected_routes != nullptr)
    {
        children["connected-routes"] = connected_routes;
    }

    if(dampening != nullptr)
    {
        children["dampening"] = dampening;
    }

    if(distance != nullptr)
    {
        children["distance"] = distance;
    }

    if(ebgp != nullptr)
    {
        children["ebgp"] = ebgp;
    }

    if(eibgp != nullptr)
    {
        children["eibgp"] = eibgp;
    }

    if(eigrp_routes != nullptr)
    {
        children["eigrp-routes"] = eigrp_routes;
    }

    if(ibgp != nullptr)
    {
        children["ibgp"] = ibgp;
    }

    if(label_mode != nullptr)
    {
        children["label-mode"] = label_mode;
    }

    if(lisp_routes != nullptr)
    {
        children["lisp-routes"] = lisp_routes;
    }

    if(mobile_routes != nullptr)
    {
        children["mobile-routes"] = mobile_routes;
    }

    if(mvpn != nullptr)
    {
        children["mvpn"] = mvpn;
    }

    if(ospf_routes != nullptr)
    {
        children["ospf-routes"] = ospf_routes;
    }

    if(rip_routes != nullptr)
    {
        children["rip-routes"] = rip_routes;
    }

    if(sourced_networks != nullptr)
    {
        children["sourced-networks"] = sourced_networks;
    }

    if(static_routes != nullptr)
    {
        children["static-routes"] = static_routes;
    }

    if(subscriber_routes != nullptr)
    {
        children["subscriber-routes"] = subscriber_routes;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-paths-receive")
    {
        additional_paths_receive = value;
        additional_paths_receive.value_namespace = name_space;
        additional_paths_receive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-paths-send")
    {
        additional_paths_send = value;
        additional_paths_send.value_namespace = name_space;
        additional_paths_send.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-local-labeled-route-safi-unicast")
    {
        advertise_local_labeled_route_safi_unicast = value;
        advertise_local_labeled_route_safi_unicast.value_namespace = name_space;
        advertise_local_labeled_route_safi_unicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allow-vpn-default-originate")
    {
        allow_vpn_default_originate = value;
        allow_vpn_default_originate.value_namespace = name_space;
        allow_vpn_default_originate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-download")
    {
        attribute_download = value;
        attribute_download.value_namespace = name_space;
        attribute_download.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-external")
    {
        best_external = value;
        best_external.value_namespace = name_space;
        best_external.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-as-path-loop-check")
    {
        disable_as_path_loop_check = value;
        disable_as_path_loop_check.value_namespace = name_space;
        disable_as_path_loop_check.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dynamic-med-interval")
    {
        dynamic_med_interval = value;
        dynamic_med_interval.value_namespace = name_space;
        dynamic_med_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-resolution-prefix-length-minimum")
    {
        next_hop_resolution_prefix_length_minimum = value;
        next_hop_resolution_prefix_length_minimum.value_namespace = name_space;
        next_hop_resolution_prefix_length_minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent-network")
    {
        permanent_network = value;
        permanent_network.value_namespace = name_space;
        permanent_network.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reset-weight-on-import")
    {
        reset_weight_on_import = value;
        reset_weight_on_import.value_namespace = name_space;
        reset_weight_on_import.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-download")
    {
        rt_download = value;
        rt_download.value_namespace = name_space;
        rt_download.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-policy")
    {
        table_policy = value;
        table_policy.value_namespace = name_space;
        table_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "additional-paths-receive")
    {
        additional_paths_receive.yfilter = yfilter;
    }
    if(value_path == "additional-paths-send")
    {
        additional_paths_send.yfilter = yfilter;
    }
    if(value_path == "advertise-local-labeled-route-safi-unicast")
    {
        advertise_local_labeled_route_safi_unicast.yfilter = yfilter;
    }
    if(value_path == "allow-vpn-default-originate")
    {
        allow_vpn_default_originate.yfilter = yfilter;
    }
    if(value_path == "attribute-download")
    {
        attribute_download.yfilter = yfilter;
    }
    if(value_path == "best-external")
    {
        best_external.yfilter = yfilter;
    }
    if(value_path == "disable-as-path-loop-check")
    {
        disable_as_path_loop_check.yfilter = yfilter;
    }
    if(value_path == "dynamic-med-interval")
    {
        dynamic_med_interval.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "next-hop-resolution-prefix-length-minimum")
    {
        next_hop_resolution_prefix_length_minimum.yfilter = yfilter;
    }
    if(value_path == "permanent-network")
    {
        permanent_network.yfilter = yfilter;
    }
    if(value_path == "reset-weight-on-import")
    {
        reset_weight_on_import.yfilter = yfilter;
    }
    if(value_path == "rt-download")
    {
        rt_download.yfilter = yfilter;
    }
    if(value_path == "table-policy")
    {
        table_policy.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "additional-paths-selection" || name == "aggregate-addresses" || name == "allocate-label" || name == "application-routes" || name == "connected-routes" || name == "dampening" || name == "distance" || name == "ebgp" || name == "eibgp" || name == "eigrp-routes" || name == "ibgp" || name == "label-mode" || name == "lisp-routes" || name == "mobile-routes" || name == "mvpn" || name == "ospf-routes" || name == "rip-routes" || name == "sourced-networks" || name == "static-routes" || name == "subscriber-routes" || name == "af-name" || name == "additional-paths-receive" || name == "additional-paths-send" || name == "advertise-local-labeled-route-safi-unicast" || name == "allow-vpn-default-originate" || name == "attribute-download" || name == "best-external" || name == "disable-as-path-loop-check" || name == "dynamic-med-interval" || name == "enable" || name == "next-hop-resolution-prefix-length-minimum" || name == "permanent-network" || name == "reset-weight-on-import" || name == "rt-download" || name == "table-policy")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AdditionalPathsSelection::AdditionalPathsSelection()
    :
    route_policy_name{YType::str, "route-policy-name"},
    selection{YType::enumeration, "selection"}
{

    yang_name = "additional-paths-selection"; yang_parent_name = "vrf-global-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AdditionalPathsSelection::~AdditionalPathsSelection()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AdditionalPathsSelection::has_data() const
{
    return route_policy_name.is_set
	|| selection.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AdditionalPathsSelection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(selection.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AdditionalPathsSelection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "additional-paths-selection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AdditionalPathsSelection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (selection.is_set || is_set(selection.yfilter)) leaf_name_data.push_back(selection.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AdditionalPathsSelection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AdditionalPathsSelection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AdditionalPathsSelection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selection")
    {
        selection = value;
        selection.value_namespace = name_space;
        selection.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AdditionalPathsSelection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "selection")
    {
        selection.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AdditionalPathsSelection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-policy-name" || name == "selection")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::AggregateAddresses()
{

    yang_name = "aggregate-addresses"; yang_parent_name = "vrf-global-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::~AggregateAddresses()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::has_data() const
{
    for (std::size_t index=0; index<aggregate_address.size(); index++)
    {
        if(aggregate_address[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::has_operation() const
{
    for (std::size_t index=0; index<aggregate_address.size(); index++)
    {
        if(aggregate_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregate-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggregate-address")
    {
        for(auto const & c : aggregate_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::AggregateAddress>();
        c->parent = this;
        aggregate_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : aggregate_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggregate-address")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::AggregateAddress::AggregateAddress()
    :
    aggregate_addr{YType::str, "aggregate-addr"},
    aggregate_prefix{YType::uint16, "aggregate-prefix"},
    generate_confederation_set_info{YType::boolean, "generate-confederation-set-info"},
    generate_set_info{YType::boolean, "generate-set-info"},
    route_policy_name{YType::str, "route-policy-name"},
    summary_only{YType::boolean, "summary-only"}
{

    yang_name = "aggregate-address"; yang_parent_name = "aggregate-addresses"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::AggregateAddress::~AggregateAddress()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::AggregateAddress::has_data() const
{
    return aggregate_addr.is_set
	|| aggregate_prefix.is_set
	|| generate_confederation_set_info.is_set
	|| generate_set_info.is_set
	|| route_policy_name.is_set
	|| summary_only.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::AggregateAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aggregate_addr.yfilter)
	|| ydk::is_set(aggregate_prefix.yfilter)
	|| ydk::is_set(generate_confederation_set_info.yfilter)
	|| ydk::is_set(generate_set_info.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(summary_only.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::AggregateAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregate-address" <<"[aggregate-addr='" <<aggregate_addr <<"']" <<"[aggregate-prefix='" <<aggregate_prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::AggregateAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aggregate_addr.is_set || is_set(aggregate_addr.yfilter)) leaf_name_data.push_back(aggregate_addr.get_name_leafdata());
    if (aggregate_prefix.is_set || is_set(aggregate_prefix.yfilter)) leaf_name_data.push_back(aggregate_prefix.get_name_leafdata());
    if (generate_confederation_set_info.is_set || is_set(generate_confederation_set_info.yfilter)) leaf_name_data.push_back(generate_confederation_set_info.get_name_leafdata());
    if (generate_set_info.is_set || is_set(generate_set_info.yfilter)) leaf_name_data.push_back(generate_set_info.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (summary_only.is_set || is_set(summary_only.yfilter)) leaf_name_data.push_back(summary_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::AggregateAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::AggregateAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::AggregateAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aggregate-addr")
    {
        aggregate_addr = value;
        aggregate_addr.value_namespace = name_space;
        aggregate_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggregate-prefix")
    {
        aggregate_prefix = value;
        aggregate_prefix.value_namespace = name_space;
        aggregate_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generate-confederation-set-info")
    {
        generate_confederation_set_info = value;
        generate_confederation_set_info.value_namespace = name_space;
        generate_confederation_set_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generate-set-info")
    {
        generate_set_info = value;
        generate_set_info.value_namespace = name_space;
        generate_set_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-only")
    {
        summary_only = value;
        summary_only.value_namespace = name_space;
        summary_only.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::AggregateAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aggregate-addr")
    {
        aggregate_addr.yfilter = yfilter;
    }
    if(value_path == "aggregate-prefix")
    {
        aggregate_prefix.yfilter = yfilter;
    }
    if(value_path == "generate-confederation-set-info")
    {
        generate_confederation_set_info.yfilter = yfilter;
    }
    if(value_path == "generate-set-info")
    {
        generate_set_info.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "summary-only")
    {
        summary_only.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::AggregateAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggregate-addr" || name == "aggregate-prefix" || name == "generate-confederation-set-info" || name == "generate-set-info" || name == "route-policy-name" || name == "summary-only")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AllocateLabel::AllocateLabel()
    :
    all{YType::boolean, "all"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "allocate-label"; yang_parent_name = "vrf-global-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AllocateLabel::~AllocateLabel()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AllocateLabel::has_data() const
{
    return all.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AllocateLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AllocateLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allocate-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AllocateLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AllocateLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AllocateLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AllocateLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AllocateLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AllocateLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "route-policy-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ApplicationRoutes::ApplicationRoutes()
{

    yang_name = "application-routes"; yang_parent_name = "vrf-global-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ApplicationRoutes::~ApplicationRoutes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ApplicationRoutes::has_data() const
{
    for (std::size_t index=0; index<application_route.size(); index++)
    {
        if(application_route[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ApplicationRoutes::has_operation() const
{
    for (std::size_t index=0; index<application_route.size(); index++)
    {
        if(application_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ApplicationRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ApplicationRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ApplicationRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application-route")
    {
        for(auto const & c : application_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ApplicationRoutes::ApplicationRoute>();
        c->parent = this;
        application_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ApplicationRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : application_route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ApplicationRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ApplicationRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ApplicationRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-route")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ApplicationRoutes::ApplicationRoute::ApplicationRoute()
    :
    instance_name{YType::str, "instance-name"},
    default_metric{YType::uint32, "default-metric"},
    not_used{YType::uint32, "not-used"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "application-route"; yang_parent_name = "application-routes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ApplicationRoutes::ApplicationRoute::~ApplicationRoute()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ApplicationRoutes::ApplicationRoute::has_data() const
{
    return instance_name.is_set
	|| default_metric.is_set
	|| not_used.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ApplicationRoutes::ApplicationRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(not_used.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ApplicationRoutes::ApplicationRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-route" <<"[instance-name='" <<instance_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ApplicationRoutes::ApplicationRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (not_used.is_set || is_set(not_used.yfilter)) leaf_name_data.push_back(not_used.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ApplicationRoutes::ApplicationRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ApplicationRoutes::ApplicationRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ApplicationRoutes::ApplicationRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-used")
    {
        not_used = value;
        not_used.value_namespace = name_space;
        not_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ApplicationRoutes::ApplicationRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "not-used")
    {
        not_used.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ApplicationRoutes::ApplicationRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "default-metric" || name == "not-used" || name == "route-policy-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ConnectedRoutes::ConnectedRoutes()
    :
    default_metric{YType::uint32, "default-metric"},
    not_used{YType::uint32, "not-used"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "connected-routes"; yang_parent_name = "vrf-global-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ConnectedRoutes::~ConnectedRoutes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ConnectedRoutes::has_data() const
{
    return default_metric.is_set
	|| not_used.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ConnectedRoutes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(not_used.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ConnectedRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ConnectedRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (not_used.is_set || is_set(not_used.yfilter)) leaf_name_data.push_back(not_used.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ConnectedRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ConnectedRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ConnectedRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-used")
    {
        not_used = value;
        not_used.value_namespace = name_space;
        not_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ConnectedRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "not-used")
    {
        not_used.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ConnectedRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-metric" || name == "not-used" || name == "route-policy-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Dampening::Dampening()
    :
    half_life{YType::uint32, "half-life"},
    reuse_threshold{YType::uint32, "reuse-threshold"},
    route_policy_name{YType::str, "route-policy-name"},
    suppress_threshold{YType::uint32, "suppress-threshold"},
    suppress_time{YType::uint32, "suppress-time"}
{

    yang_name = "dampening"; yang_parent_name = "vrf-global-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Dampening::~Dampening()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Dampening::has_data() const
{
    return half_life.is_set
	|| reuse_threshold.is_set
	|| route_policy_name.is_set
	|| suppress_threshold.is_set
	|| suppress_time.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Dampening::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(half_life.yfilter)
	|| ydk::is_set(reuse_threshold.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(suppress_threshold.yfilter)
	|| ydk::is_set(suppress_time.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Dampening::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dampening";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Dampening::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (half_life.is_set || is_set(half_life.yfilter)) leaf_name_data.push_back(half_life.get_name_leafdata());
    if (reuse_threshold.is_set || is_set(reuse_threshold.yfilter)) leaf_name_data.push_back(reuse_threshold.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (suppress_threshold.is_set || is_set(suppress_threshold.yfilter)) leaf_name_data.push_back(suppress_threshold.get_name_leafdata());
    if (suppress_time.is_set || is_set(suppress_time.yfilter)) leaf_name_data.push_back(suppress_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Dampening::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Dampening::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Dampening::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "half-life")
    {
        half_life = value;
        half_life.value_namespace = name_space;
        half_life.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reuse-threshold")
    {
        reuse_threshold = value;
        reuse_threshold.value_namespace = name_space;
        reuse_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-threshold")
    {
        suppress_threshold = value;
        suppress_threshold.value_namespace = name_space;
        suppress_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-time")
    {
        suppress_time = value;
        suppress_time.value_namespace = name_space;
        suppress_time.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Dampening::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "half-life")
    {
        half_life.yfilter = yfilter;
    }
    if(value_path == "reuse-threshold")
    {
        reuse_threshold.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "suppress-threshold")
    {
        suppress_threshold.yfilter = yfilter;
    }
    if(value_path == "suppress-time")
    {
        suppress_time.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Dampening::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "half-life" || name == "reuse-threshold" || name == "route-policy-name" || name == "suppress-threshold" || name == "suppress-time")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Distance::Distance()
    :
    external_routes{YType::uint32, "external-routes"},
    internal_routes{YType::uint32, "internal-routes"},
    local_routes{YType::uint32, "local-routes"}
{

    yang_name = "distance"; yang_parent_name = "vrf-global-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Distance::~Distance()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Distance::has_data() const
{
    return external_routes.is_set
	|| internal_routes.is_set
	|| local_routes.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Distance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_routes.yfilter)
	|| ydk::is_set(internal_routes.yfilter)
	|| ydk::is_set(local_routes.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Distance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_routes.is_set || is_set(external_routes.yfilter)) leaf_name_data.push_back(external_routes.get_name_leafdata());
    if (internal_routes.is_set || is_set(internal_routes.yfilter)) leaf_name_data.push_back(internal_routes.get_name_leafdata());
    if (local_routes.is_set || is_set(local_routes.yfilter)) leaf_name_data.push_back(local_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Distance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-routes")
    {
        external_routes = value;
        external_routes.value_namespace = name_space;
        external_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-routes")
    {
        internal_routes = value;
        internal_routes.value_namespace = name_space;
        internal_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-routes")
    {
        local_routes = value;
        local_routes.value_namespace = name_space;
        local_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Distance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-routes")
    {
        external_routes.yfilter = yfilter;
    }
    if(value_path == "internal-routes")
    {
        internal_routes.yfilter = yfilter;
    }
    if(value_path == "local-routes")
    {
        local_routes.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Distance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-routes" || name == "internal-routes" || name == "local-routes")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ebgp::Ebgp()
    :
    order_by_igp_metric{YType::boolean, "order-by-igp-metric"},
    paths_value{YType::uint32, "paths-value"},
    selective{YType::boolean, "selective"},
    unequal_cost{YType::boolean, "unequal-cost"}
{

    yang_name = "ebgp"; yang_parent_name = "vrf-global-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ebgp::~Ebgp()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ebgp::has_data() const
{
    return order_by_igp_metric.is_set
	|| paths_value.is_set
	|| selective.is_set
	|| unequal_cost.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ebgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order_by_igp_metric.yfilter)
	|| ydk::is_set(paths_value.yfilter)
	|| ydk::is_set(selective.yfilter)
	|| ydk::is_set(unequal_cost.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ebgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ebgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ebgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order_by_igp_metric.is_set || is_set(order_by_igp_metric.yfilter)) leaf_name_data.push_back(order_by_igp_metric.get_name_leafdata());
    if (paths_value.is_set || is_set(paths_value.yfilter)) leaf_name_data.push_back(paths_value.get_name_leafdata());
    if (selective.is_set || is_set(selective.yfilter)) leaf_name_data.push_back(selective.get_name_leafdata());
    if (unequal_cost.is_set || is_set(unequal_cost.yfilter)) leaf_name_data.push_back(unequal_cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ebgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ebgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ebgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order-by-igp-metric")
    {
        order_by_igp_metric = value;
        order_by_igp_metric.value_namespace = name_space;
        order_by_igp_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-value")
    {
        paths_value = value;
        paths_value.value_namespace = name_space;
        paths_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selective")
    {
        selective = value;
        selective.value_namespace = name_space;
        selective.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unequal-cost")
    {
        unequal_cost = value;
        unequal_cost.value_namespace = name_space;
        unequal_cost.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ebgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order-by-igp-metric")
    {
        order_by_igp_metric.yfilter = yfilter;
    }
    if(value_path == "paths-value")
    {
        paths_value.yfilter = yfilter;
    }
    if(value_path == "selective")
    {
        selective.yfilter = yfilter;
    }
    if(value_path == "unequal-cost")
    {
        unequal_cost.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ebgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "order-by-igp-metric" || name == "paths-value" || name == "selective" || name == "unequal-cost")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Eibgp::Eibgp()
    :
    order_by_igp_metric{YType::boolean, "order-by-igp-metric"},
    paths_value{YType::uint32, "paths-value"},
    selective{YType::boolean, "selective"},
    unequal_cost{YType::boolean, "unequal-cost"}
{

    yang_name = "eibgp"; yang_parent_name = "vrf-global-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Eibgp::~Eibgp()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Eibgp::has_data() const
{
    return order_by_igp_metric.is_set
	|| paths_value.is_set
	|| selective.is_set
	|| unequal_cost.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Eibgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order_by_igp_metric.yfilter)
	|| ydk::is_set(paths_value.yfilter)
	|| ydk::is_set(selective.yfilter)
	|| ydk::is_set(unequal_cost.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Eibgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eibgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Eibgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order_by_igp_metric.is_set || is_set(order_by_igp_metric.yfilter)) leaf_name_data.push_back(order_by_igp_metric.get_name_leafdata());
    if (paths_value.is_set || is_set(paths_value.yfilter)) leaf_name_data.push_back(paths_value.get_name_leafdata());
    if (selective.is_set || is_set(selective.yfilter)) leaf_name_data.push_back(selective.get_name_leafdata());
    if (unequal_cost.is_set || is_set(unequal_cost.yfilter)) leaf_name_data.push_back(unequal_cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Eibgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Eibgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Eibgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order-by-igp-metric")
    {
        order_by_igp_metric = value;
        order_by_igp_metric.value_namespace = name_space;
        order_by_igp_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-value")
    {
        paths_value = value;
        paths_value.value_namespace = name_space;
        paths_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selective")
    {
        selective = value;
        selective.value_namespace = name_space;
        selective.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unequal-cost")
    {
        unequal_cost = value;
        unequal_cost.value_namespace = name_space;
        unequal_cost.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Eibgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order-by-igp-metric")
    {
        order_by_igp_metric.yfilter = yfilter;
    }
    if(value_path == "paths-value")
    {
        paths_value.yfilter = yfilter;
    }
    if(value_path == "selective")
    {
        selective.yfilter = yfilter;
    }
    if(value_path == "unequal-cost")
    {
        unequal_cost.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Eibgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "order-by-igp-metric" || name == "paths-value" || name == "selective" || name == "unequal-cost")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::EigrpRoutes()
{

    yang_name = "eigrp-routes"; yang_parent_name = "vrf-global-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::~EigrpRoutes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::has_data() const
{
    for (std::size_t index=0; index<eigrp_route.size(); index++)
    {
        if(eigrp_route[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::has_operation() const
{
    for (std::size_t index=0; index<eigrp_route.size(); index++)
    {
        if(eigrp_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eigrp-route")
    {
        for(auto const & c : eigrp_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::EigrpRoute>();
        c->parent = this;
        eigrp_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : eigrp_route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp-route")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::EigrpRoute::EigrpRoute()
    :
    instance_name{YType::str, "instance-name"},
    default_metric{YType::uint32, "default-metric"},
    redist_type{YType::str, "redist-type"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "eigrp-route"; yang_parent_name = "eigrp-routes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::EigrpRoute::~EigrpRoute()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::EigrpRoute::has_data() const
{
    return instance_name.is_set
	|| default_metric.is_set
	|| redist_type.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::EigrpRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(redist_type.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::EigrpRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp-route" <<"[instance-name='" <<instance_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::EigrpRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (redist_type.is_set || is_set(redist_type.yfilter)) leaf_name_data.push_back(redist_type.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::EigrpRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::EigrpRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::EigrpRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redist-type")
    {
        redist_type = value;
        redist_type.value_namespace = name_space;
        redist_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::EigrpRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "redist-type")
    {
        redist_type.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::EigrpRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "default-metric" || name == "redist-type" || name == "route-policy-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ibgp::Ibgp()
    :
    order_by_igp_metric{YType::boolean, "order-by-igp-metric"},
    paths_value{YType::uint32, "paths-value"},
    selective{YType::boolean, "selective"},
    unequal_cost{YType::boolean, "unequal-cost"}
{

    yang_name = "ibgp"; yang_parent_name = "vrf-global-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ibgp::~Ibgp()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ibgp::has_data() const
{
    return order_by_igp_metric.is_set
	|| paths_value.is_set
	|| selective.is_set
	|| unequal_cost.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ibgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order_by_igp_metric.yfilter)
	|| ydk::is_set(paths_value.yfilter)
	|| ydk::is_set(selective.yfilter)
	|| ydk::is_set(unequal_cost.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ibgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ibgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ibgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order_by_igp_metric.is_set || is_set(order_by_igp_metric.yfilter)) leaf_name_data.push_back(order_by_igp_metric.get_name_leafdata());
    if (paths_value.is_set || is_set(paths_value.yfilter)) leaf_name_data.push_back(paths_value.get_name_leafdata());
    if (selective.is_set || is_set(selective.yfilter)) leaf_name_data.push_back(selective.get_name_leafdata());
    if (unequal_cost.is_set || is_set(unequal_cost.yfilter)) leaf_name_data.push_back(unequal_cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ibgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ibgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ibgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order-by-igp-metric")
    {
        order_by_igp_metric = value;
        order_by_igp_metric.value_namespace = name_space;
        order_by_igp_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-value")
    {
        paths_value = value;
        paths_value.value_namespace = name_space;
        paths_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selective")
    {
        selective = value;
        selective.value_namespace = name_space;
        selective.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unequal-cost")
    {
        unequal_cost = value;
        unequal_cost.value_namespace = name_space;
        unequal_cost.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ibgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order-by-igp-metric")
    {
        order_by_igp_metric.yfilter = yfilter;
    }
    if(value_path == "paths-value")
    {
        paths_value.yfilter = yfilter;
    }
    if(value_path == "selective")
    {
        selective.yfilter = yfilter;
    }
    if(value_path == "unequal-cost")
    {
        unequal_cost.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ibgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "order-by-igp-metric" || name == "paths-value" || name == "selective" || name == "unequal-cost")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LabelMode::LabelMode()
    :
    label_allocation_mode{YType::str, "label-allocation-mode"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "label-mode"; yang_parent_name = "vrf-global-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LabelMode::~LabelMode()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LabelMode::has_data() const
{
    return label_allocation_mode.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LabelMode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label_allocation_mode.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LabelMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LabelMode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_allocation_mode.is_set || is_set(label_allocation_mode.yfilter)) leaf_name_data.push_back(label_allocation_mode.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LabelMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LabelMode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LabelMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-allocation-mode")
    {
        label_allocation_mode = value;
        label_allocation_mode.value_namespace = name_space;
        label_allocation_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LabelMode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-allocation-mode")
    {
        label_allocation_mode.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LabelMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-allocation-mode" || name == "route-policy-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LispRoutes::LispRoutes()
    :
    default_metric{YType::uint32, "default-metric"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "lisp-routes"; yang_parent_name = "vrf-global-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LispRoutes::~LispRoutes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LispRoutes::has_data() const
{
    return default_metric.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LispRoutes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LispRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LispRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LispRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LispRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LispRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LispRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LispRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-metric" || name == "route-policy-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::MobileRoutes::MobileRoutes()
    :
    default_metric{YType::uint32, "default-metric"},
    not_used{YType::uint32, "not-used"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "mobile-routes"; yang_parent_name = "vrf-global-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::MobileRoutes::~MobileRoutes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::MobileRoutes::has_data() const
{
    return default_metric.is_set
	|| not_used.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::MobileRoutes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(not_used.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::MobileRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::MobileRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (not_used.is_set || is_set(not_used.yfilter)) leaf_name_data.push_back(not_used.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::MobileRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::MobileRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::MobileRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-used")
    {
        not_used = value;
        not_used.value_namespace = name_space;
        not_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::MobileRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "not-used")
    {
        not_used.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::MobileRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-metric" || name == "not-used" || name == "route-policy-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Mvpn::Mvpn()
    :
    single_forwarder_selection{YType::enumeration, "single-forwarder-selection"}
{

    yang_name = "mvpn"; yang_parent_name = "vrf-global-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Mvpn::~Mvpn()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Mvpn::has_data() const
{
    return single_forwarder_selection.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Mvpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(single_forwarder_selection.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Mvpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mvpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Mvpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (single_forwarder_selection.is_set || is_set(single_forwarder_selection.yfilter)) leaf_name_data.push_back(single_forwarder_selection.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Mvpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Mvpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Mvpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "single-forwarder-selection")
    {
        single_forwarder_selection = value;
        single_forwarder_selection.value_namespace = name_space;
        single_forwarder_selection.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Mvpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "single-forwarder-selection")
    {
        single_forwarder_selection.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Mvpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "single-forwarder-selection")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::OspfRoutes()
{

    yang_name = "ospf-routes"; yang_parent_name = "vrf-global-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::~OspfRoutes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::has_data() const
{
    for (std::size_t index=0; index<ospf_route.size(); index++)
    {
        if(ospf_route[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::has_operation() const
{
    for (std::size_t index=0; index<ospf_route.size(); index++)
    {
        if(ospf_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospf-route")
    {
        for(auto const & c : ospf_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::OspfRoute>();
        c->parent = this;
        ospf_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ospf_route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospf-route")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::OspfRoute::OspfRoute()
    :
    instance_name{YType::str, "instance-name"},
    default_metric{YType::uint32, "default-metric"},
    redist_type{YType::str, "redist-type"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "ospf-route"; yang_parent_name = "ospf-routes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::OspfRoute::~OspfRoute()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::OspfRoute::has_data() const
{
    return instance_name.is_set
	|| default_metric.is_set
	|| redist_type.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::OspfRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(redist_type.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::OspfRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf-route" <<"[instance-name='" <<instance_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::OspfRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (redist_type.is_set || is_set(redist_type.yfilter)) leaf_name_data.push_back(redist_type.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::OspfRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::OspfRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::OspfRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redist-type")
    {
        redist_type = value;
        redist_type.value_namespace = name_space;
        redist_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::OspfRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "redist-type")
    {
        redist_type.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::OspfRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "default-metric" || name == "redist-type" || name == "route-policy-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::RipRoutes::RipRoutes()
    :
    default_metric{YType::uint32, "default-metric"},
    not_used{YType::uint32, "not-used"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "rip-routes"; yang_parent_name = "vrf-global-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::RipRoutes::~RipRoutes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::RipRoutes::has_data() const
{
    return default_metric.is_set
	|| not_used.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::RipRoutes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(not_used.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::RipRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::RipRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (not_used.is_set || is_set(not_used.yfilter)) leaf_name_data.push_back(not_used.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::RipRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::RipRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::RipRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-used")
    {
        not_used = value;
        not_used.value_namespace = name_space;
        not_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::RipRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "not-used")
    {
        not_used.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::RipRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-metric" || name == "not-used" || name == "route-policy-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::SourcedNetworks()
{

    yang_name = "sourced-networks"; yang_parent_name = "vrf-global-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::~SourcedNetworks()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::has_data() const
{
    for (std::size_t index=0; index<sourced_network.size(); index++)
    {
        if(sourced_network[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::has_operation() const
{
    for (std::size_t index=0; index<sourced_network.size(); index++)
    {
        if(sourced_network[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sourced-networks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sourced-network")
    {
        for(auto const & c : sourced_network)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::SourcedNetwork>();
        c->parent = this;
        sourced_network.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sourced_network)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sourced-network")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::SourcedNetwork::SourcedNetwork()
    :
    network_addr{YType::str, "network-addr"},
    network_prefix{YType::uint16, "network-prefix"},
    backdoor{YType::boolean, "backdoor"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "sourced-network"; yang_parent_name = "sourced-networks"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::SourcedNetwork::~SourcedNetwork()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::SourcedNetwork::has_data() const
{
    return network_addr.is_set
	|| network_prefix.is_set
	|| backdoor.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::SourcedNetwork::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(network_addr.yfilter)
	|| ydk::is_set(network_prefix.yfilter)
	|| ydk::is_set(backdoor.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::SourcedNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sourced-network" <<"[network-addr='" <<network_addr <<"']" <<"[network-prefix='" <<network_prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::SourcedNetwork::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (network_addr.is_set || is_set(network_addr.yfilter)) leaf_name_data.push_back(network_addr.get_name_leafdata());
    if (network_prefix.is_set || is_set(network_prefix.yfilter)) leaf_name_data.push_back(network_prefix.get_name_leafdata());
    if (backdoor.is_set || is_set(backdoor.yfilter)) leaf_name_data.push_back(backdoor.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::SourcedNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::SourcedNetwork::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::SourcedNetwork::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "network-addr")
    {
        network_addr = value;
        network_addr.value_namespace = name_space;
        network_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-prefix")
    {
        network_prefix = value;
        network_prefix.value_namespace = name_space;
        network_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backdoor")
    {
        backdoor = value;
        backdoor.value_namespace = name_space;
        backdoor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::SourcedNetwork::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "network-addr")
    {
        network_addr.yfilter = yfilter;
    }
    if(value_path == "network-prefix")
    {
        network_prefix.yfilter = yfilter;
    }
    if(value_path == "backdoor")
    {
        backdoor.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::SourcedNetwork::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network-addr" || name == "network-prefix" || name == "backdoor" || name == "route-policy-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::StaticRoutes::StaticRoutes()
    :
    default_metric{YType::uint32, "default-metric"},
    not_used{YType::uint32, "not-used"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "static-routes"; yang_parent_name = "vrf-global-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::StaticRoutes::~StaticRoutes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::StaticRoutes::has_data() const
{
    return default_metric.is_set
	|| not_used.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::StaticRoutes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(not_used.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::StaticRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::StaticRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (not_used.is_set || is_set(not_used.yfilter)) leaf_name_data.push_back(not_used.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::StaticRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::StaticRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::StaticRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-used")
    {
        not_used = value;
        not_used.value_namespace = name_space;
        not_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::StaticRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "not-used")
    {
        not_used.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::StaticRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-metric" || name == "not-used" || name == "route-policy-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SubscriberRoutes::SubscriberRoutes()
    :
    default_metric{YType::uint32, "default-metric"},
    not_used{YType::uint32, "not-used"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "subscriber-routes"; yang_parent_name = "vrf-global-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SubscriberRoutes::~SubscriberRoutes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SubscriberRoutes::has_data() const
{
    return default_metric.is_set
	|| not_used.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SubscriberRoutes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(not_used.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SubscriberRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SubscriberRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (not_used.is_set || is_set(not_used.yfilter)) leaf_name_data.push_back(not_used.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SubscriberRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SubscriberRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SubscriberRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-used")
    {
        not_used = value;
        not_used.value_namespace = name_space;
        not_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SubscriberRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "not-used")
    {
        not_used.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SubscriberRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-metric" || name == "not-used" || name == "route-policy-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbors()
{

    yang_name = "vrf-neighbors"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::~VrfNeighbors()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::has_data() const
{
    for (std::size_t index=0; index<vrf_neighbor.size(); index++)
    {
        if(vrf_neighbor[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_neighbor_prefix_length.size(); index++)
    {
        if(vrf_neighbor_prefix_length[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::has_operation() const
{
    for (std::size_t index=0; index<vrf_neighbor.size(); index++)
    {
        if(vrf_neighbor[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_neighbor_prefix_length.size(); index++)
    {
        if(vrf_neighbor_prefix_length[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-neighbor")
    {
        for(auto const & c : vrf_neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor>();
        c->parent = this;
        vrf_neighbor.push_back(c);
        return c;
    }

    if(child_yang_name == "vrf-neighbor-prefix-length")
    {
        for(auto const & c : vrf_neighbor_prefix_length)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighborPrefixLength>();
        c->parent = this;
        vrf_neighbor_prefix_length.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf_neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : vrf_neighbor_prefix_length)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-neighbor" || name == "vrf-neighbor-prefix-length")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighbor()
    :
    neighbor_address{YType::str, "neighbor-address"},
    additional_paths_receive_capability{YType::enumeration, "additional-paths-receive-capability"},
    additional_paths_send_capability{YType::enumeration, "additional-paths-send-capability"},
    bfd_enable_modes{YType::enumeration, "bfd-enable-modes"},
    bfd_minimum_interval{YType::uint32, "bfd-minimum-interval"},
    bfd_multiplier{YType::uint32, "bfd-multiplier"},
    description{YType::str, "description"},
    ebgp_recv_dmz{YType::boolean, "ebgp-recv-dmz"},
    ebgp_send_dmz_enable_modes{YType::enumeration, "ebgp-send-dmz-enable-modes"},
    egress_peer_engineering{YType::boolean, "egress-peer-engineering"},
    enforce_first_as{YType::boolean, "enforce-first-as"},
    idle_watch_time{YType::uint32, "idle-watch-time"},
    ignore_connected_check_ebgp{YType::boolean, "ignore-connected-check-ebgp"},
    internal_vpn_client_ibgp_ce{YType::boolean, "internal-vpn-client-ibgp-ce"},
    max_peers{YType::uint32, "max-peers"},
    neighbor_graceful_restart{YType::boolean, "neighbor-graceful-restart"},
    neighbor_graceful_restart_stalepath_time{YType::uint32, "neighbor-graceful-restart-stalepath-time"},
    neighbor_graceful_restart_time{YType::uint32, "neighbor-graceful-restart-time"},
    neighbor_group_add_member{YType::str, "neighbor-group-add-member"},
    propagate_dmz_link_bandwidth{YType::boolean, "propagate-dmz-link-bandwidth"},
    remote_as_list{YType::str, "remote-as-list"},
    session_group_add_member{YType::str, "session-group-add-member"},
    session_open_mode{YType::enumeration, "session-open-mode"},
    shutdown{YType::boolean, "shutdown"},
    suppress_all_capabilities{YType::boolean, "suppress-all-capabilities"},
    suppress_four_byte_as_capability{YType::boolean, "suppress-four-byte-as-capability"},
    ttl_security{YType::boolean, "ttl-security"},
    update_source_interface{YType::str, "update-source-interface"}
    	,
    advertisement_interval(nullptr) // presence node
	,bmp_activates(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates>())
	,ebgp_multihop(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::EbgpMultihop>())
	,graceful_maintenance(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance>())
	,keychain(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Keychain>())
	,local_address(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAddress>())
	,local_as(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAs>())
	,msg_log_in(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogIn>())
	,msg_log_out(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogOut>())
	,neighbor_cluster_id(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::NeighborClusterId>())
	,password(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Password>())
	,receive_buffer_size(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::ReceiveBufferSize>())
	,remote_as(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::RemoteAs>())
	,send_buffer_size(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::SendBufferSize>())
	,tcpmss(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tcpmss>())
	,timers(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Timers>())
	,tos(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tos>())
	,update_in_filtering(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering>())
	,vrf_neighbor_afs(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs>())
{
    bmp_activates->parent = this;
    ebgp_multihop->parent = this;
    graceful_maintenance->parent = this;
    keychain->parent = this;
    local_address->parent = this;
    local_as->parent = this;
    msg_log_in->parent = this;
    msg_log_out->parent = this;
    neighbor_cluster_id->parent = this;
    password->parent = this;
    receive_buffer_size->parent = this;
    remote_as->parent = this;
    send_buffer_size->parent = this;
    tcpmss->parent = this;
    timers->parent = this;
    tos->parent = this;
    update_in_filtering->parent = this;
    vrf_neighbor_afs->parent = this;

    yang_name = "vrf-neighbor"; yang_parent_name = "vrf-neighbors"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::~VrfNeighbor()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::has_data() const
{
    return neighbor_address.is_set
	|| additional_paths_receive_capability.is_set
	|| additional_paths_send_capability.is_set
	|| bfd_enable_modes.is_set
	|| bfd_minimum_interval.is_set
	|| bfd_multiplier.is_set
	|| description.is_set
	|| ebgp_recv_dmz.is_set
	|| ebgp_send_dmz_enable_modes.is_set
	|| egress_peer_engineering.is_set
	|| enforce_first_as.is_set
	|| idle_watch_time.is_set
	|| ignore_connected_check_ebgp.is_set
	|| internal_vpn_client_ibgp_ce.is_set
	|| max_peers.is_set
	|| neighbor_graceful_restart.is_set
	|| neighbor_graceful_restart_stalepath_time.is_set
	|| neighbor_graceful_restart_time.is_set
	|| neighbor_group_add_member.is_set
	|| propagate_dmz_link_bandwidth.is_set
	|| remote_as_list.is_set
	|| session_group_add_member.is_set
	|| session_open_mode.is_set
	|| shutdown.is_set
	|| suppress_all_capabilities.is_set
	|| suppress_four_byte_as_capability.is_set
	|| ttl_security.is_set
	|| update_source_interface.is_set
	|| (advertisement_interval !=  nullptr && advertisement_interval->has_data())
	|| (bmp_activates !=  nullptr && bmp_activates->has_data())
	|| (ebgp_multihop !=  nullptr && ebgp_multihop->has_data())
	|| (graceful_maintenance !=  nullptr && graceful_maintenance->has_data())
	|| (keychain !=  nullptr && keychain->has_data())
	|| (local_address !=  nullptr && local_address->has_data())
	|| (local_as !=  nullptr && local_as->has_data())
	|| (msg_log_in !=  nullptr && msg_log_in->has_data())
	|| (msg_log_out !=  nullptr && msg_log_out->has_data())
	|| (neighbor_cluster_id !=  nullptr && neighbor_cluster_id->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (receive_buffer_size !=  nullptr && receive_buffer_size->has_data())
	|| (remote_as !=  nullptr && remote_as->has_data())
	|| (send_buffer_size !=  nullptr && send_buffer_size->has_data())
	|| (tcpmss !=  nullptr && tcpmss->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (tos !=  nullptr && tos->has_data())
	|| (update_in_filtering !=  nullptr && update_in_filtering->has_data())
	|| (vrf_neighbor_afs !=  nullptr && vrf_neighbor_afs->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(additional_paths_receive_capability.yfilter)
	|| ydk::is_set(additional_paths_send_capability.yfilter)
	|| ydk::is_set(bfd_enable_modes.yfilter)
	|| ydk::is_set(bfd_minimum_interval.yfilter)
	|| ydk::is_set(bfd_multiplier.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(ebgp_recv_dmz.yfilter)
	|| ydk::is_set(ebgp_send_dmz_enable_modes.yfilter)
	|| ydk::is_set(egress_peer_engineering.yfilter)
	|| ydk::is_set(enforce_first_as.yfilter)
	|| ydk::is_set(idle_watch_time.yfilter)
	|| ydk::is_set(ignore_connected_check_ebgp.yfilter)
	|| ydk::is_set(internal_vpn_client_ibgp_ce.yfilter)
	|| ydk::is_set(max_peers.yfilter)
	|| ydk::is_set(neighbor_graceful_restart.yfilter)
	|| ydk::is_set(neighbor_graceful_restart_stalepath_time.yfilter)
	|| ydk::is_set(neighbor_graceful_restart_time.yfilter)
	|| ydk::is_set(neighbor_group_add_member.yfilter)
	|| ydk::is_set(propagate_dmz_link_bandwidth.yfilter)
	|| ydk::is_set(remote_as_list.yfilter)
	|| ydk::is_set(session_group_add_member.yfilter)
	|| ydk::is_set(session_open_mode.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(suppress_all_capabilities.yfilter)
	|| ydk::is_set(suppress_four_byte_as_capability.yfilter)
	|| ydk::is_set(ttl_security.yfilter)
	|| ydk::is_set(update_source_interface.yfilter)
	|| (advertisement_interval !=  nullptr && advertisement_interval->has_operation())
	|| (bmp_activates !=  nullptr && bmp_activates->has_operation())
	|| (ebgp_multihop !=  nullptr && ebgp_multihop->has_operation())
	|| (graceful_maintenance !=  nullptr && graceful_maintenance->has_operation())
	|| (keychain !=  nullptr && keychain->has_operation())
	|| (local_address !=  nullptr && local_address->has_operation())
	|| (local_as !=  nullptr && local_as->has_operation())
	|| (msg_log_in !=  nullptr && msg_log_in->has_operation())
	|| (msg_log_out !=  nullptr && msg_log_out->has_operation())
	|| (neighbor_cluster_id !=  nullptr && neighbor_cluster_id->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (receive_buffer_size !=  nullptr && receive_buffer_size->has_operation())
	|| (remote_as !=  nullptr && remote_as->has_operation())
	|| (send_buffer_size !=  nullptr && send_buffer_size->has_operation())
	|| (tcpmss !=  nullptr && tcpmss->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (tos !=  nullptr && tos->has_operation())
	|| (update_in_filtering !=  nullptr && update_in_filtering->has_operation())
	|| (vrf_neighbor_afs !=  nullptr && vrf_neighbor_afs->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-neighbor" <<"[neighbor-address='" <<neighbor_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (additional_paths_receive_capability.is_set || is_set(additional_paths_receive_capability.yfilter)) leaf_name_data.push_back(additional_paths_receive_capability.get_name_leafdata());
    if (additional_paths_send_capability.is_set || is_set(additional_paths_send_capability.yfilter)) leaf_name_data.push_back(additional_paths_send_capability.get_name_leafdata());
    if (bfd_enable_modes.is_set || is_set(bfd_enable_modes.yfilter)) leaf_name_data.push_back(bfd_enable_modes.get_name_leafdata());
    if (bfd_minimum_interval.is_set || is_set(bfd_minimum_interval.yfilter)) leaf_name_data.push_back(bfd_minimum_interval.get_name_leafdata());
    if (bfd_multiplier.is_set || is_set(bfd_multiplier.yfilter)) leaf_name_data.push_back(bfd_multiplier.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (ebgp_recv_dmz.is_set || is_set(ebgp_recv_dmz.yfilter)) leaf_name_data.push_back(ebgp_recv_dmz.get_name_leafdata());
    if (ebgp_send_dmz_enable_modes.is_set || is_set(ebgp_send_dmz_enable_modes.yfilter)) leaf_name_data.push_back(ebgp_send_dmz_enable_modes.get_name_leafdata());
    if (egress_peer_engineering.is_set || is_set(egress_peer_engineering.yfilter)) leaf_name_data.push_back(egress_peer_engineering.get_name_leafdata());
    if (enforce_first_as.is_set || is_set(enforce_first_as.yfilter)) leaf_name_data.push_back(enforce_first_as.get_name_leafdata());
    if (idle_watch_time.is_set || is_set(idle_watch_time.yfilter)) leaf_name_data.push_back(idle_watch_time.get_name_leafdata());
    if (ignore_connected_check_ebgp.is_set || is_set(ignore_connected_check_ebgp.yfilter)) leaf_name_data.push_back(ignore_connected_check_ebgp.get_name_leafdata());
    if (internal_vpn_client_ibgp_ce.is_set || is_set(internal_vpn_client_ibgp_ce.yfilter)) leaf_name_data.push_back(internal_vpn_client_ibgp_ce.get_name_leafdata());
    if (max_peers.is_set || is_set(max_peers.yfilter)) leaf_name_data.push_back(max_peers.get_name_leafdata());
    if (neighbor_graceful_restart.is_set || is_set(neighbor_graceful_restart.yfilter)) leaf_name_data.push_back(neighbor_graceful_restart.get_name_leafdata());
    if (neighbor_graceful_restart_stalepath_time.is_set || is_set(neighbor_graceful_restart_stalepath_time.yfilter)) leaf_name_data.push_back(neighbor_graceful_restart_stalepath_time.get_name_leafdata());
    if (neighbor_graceful_restart_time.is_set || is_set(neighbor_graceful_restart_time.yfilter)) leaf_name_data.push_back(neighbor_graceful_restart_time.get_name_leafdata());
    if (neighbor_group_add_member.is_set || is_set(neighbor_group_add_member.yfilter)) leaf_name_data.push_back(neighbor_group_add_member.get_name_leafdata());
    if (propagate_dmz_link_bandwidth.is_set || is_set(propagate_dmz_link_bandwidth.yfilter)) leaf_name_data.push_back(propagate_dmz_link_bandwidth.get_name_leafdata());
    if (remote_as_list.is_set || is_set(remote_as_list.yfilter)) leaf_name_data.push_back(remote_as_list.get_name_leafdata());
    if (session_group_add_member.is_set || is_set(session_group_add_member.yfilter)) leaf_name_data.push_back(session_group_add_member.get_name_leafdata());
    if (session_open_mode.is_set || is_set(session_open_mode.yfilter)) leaf_name_data.push_back(session_open_mode.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (suppress_all_capabilities.is_set || is_set(suppress_all_capabilities.yfilter)) leaf_name_data.push_back(suppress_all_capabilities.get_name_leafdata());
    if (suppress_four_byte_as_capability.is_set || is_set(suppress_four_byte_as_capability.yfilter)) leaf_name_data.push_back(suppress_four_byte_as_capability.get_name_leafdata());
    if (ttl_security.is_set || is_set(ttl_security.yfilter)) leaf_name_data.push_back(ttl_security.get_name_leafdata());
    if (update_source_interface.is_set || is_set(update_source_interface.yfilter)) leaf_name_data.push_back(update_source_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertisement-interval")
    {
        if(advertisement_interval == nullptr)
        {
            advertisement_interval = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::AdvertisementInterval>();
        }
        return advertisement_interval;
    }

    if(child_yang_name == "bmp-activates")
    {
        if(bmp_activates == nullptr)
        {
            bmp_activates = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates>();
        }
        return bmp_activates;
    }

    if(child_yang_name == "ebgp-multihop")
    {
        if(ebgp_multihop == nullptr)
        {
            ebgp_multihop = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::EbgpMultihop>();
        }
        return ebgp_multihop;
    }

    if(child_yang_name == "graceful-maintenance")
    {
        if(graceful_maintenance == nullptr)
        {
            graceful_maintenance = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance>();
        }
        return graceful_maintenance;
    }

    if(child_yang_name == "keychain")
    {
        if(keychain == nullptr)
        {
            keychain = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Keychain>();
        }
        return keychain;
    }

    if(child_yang_name == "local-address")
    {
        if(local_address == nullptr)
        {
            local_address = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAddress>();
        }
        return local_address;
    }

    if(child_yang_name == "local-as")
    {
        if(local_as == nullptr)
        {
            local_as = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAs>();
        }
        return local_as;
    }

    if(child_yang_name == "msg-log-in")
    {
        if(msg_log_in == nullptr)
        {
            msg_log_in = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogIn>();
        }
        return msg_log_in;
    }

    if(child_yang_name == "msg-log-out")
    {
        if(msg_log_out == nullptr)
        {
            msg_log_out = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogOut>();
        }
        return msg_log_out;
    }

    if(child_yang_name == "neighbor-cluster-id")
    {
        if(neighbor_cluster_id == nullptr)
        {
            neighbor_cluster_id = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::NeighborClusterId>();
        }
        return neighbor_cluster_id;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Password>();
        }
        return password;
    }

    if(child_yang_name == "receive-buffer-size")
    {
        if(receive_buffer_size == nullptr)
        {
            receive_buffer_size = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::ReceiveBufferSize>();
        }
        return receive_buffer_size;
    }

    if(child_yang_name == "remote-as")
    {
        if(remote_as == nullptr)
        {
            remote_as = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::RemoteAs>();
        }
        return remote_as;
    }

    if(child_yang_name == "send-buffer-size")
    {
        if(send_buffer_size == nullptr)
        {
            send_buffer_size = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::SendBufferSize>();
        }
        return send_buffer_size;
    }

    if(child_yang_name == "tcpmss")
    {
        if(tcpmss == nullptr)
        {
            tcpmss = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tcpmss>();
        }
        return tcpmss;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "tos")
    {
        if(tos == nullptr)
        {
            tos = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tos>();
        }
        return tos;
    }

    if(child_yang_name == "update-in-filtering")
    {
        if(update_in_filtering == nullptr)
        {
            update_in_filtering = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering>();
        }
        return update_in_filtering;
    }

    if(child_yang_name == "vrf-neighbor-afs")
    {
        if(vrf_neighbor_afs == nullptr)
        {
            vrf_neighbor_afs = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs>();
        }
        return vrf_neighbor_afs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(advertisement_interval != nullptr)
    {
        children["advertisement-interval"] = advertisement_interval;
    }

    if(bmp_activates != nullptr)
    {
        children["bmp-activates"] = bmp_activates;
    }

    if(ebgp_multihop != nullptr)
    {
        children["ebgp-multihop"] = ebgp_multihop;
    }

    if(graceful_maintenance != nullptr)
    {
        children["graceful-maintenance"] = graceful_maintenance;
    }

    if(keychain != nullptr)
    {
        children["keychain"] = keychain;
    }

    if(local_address != nullptr)
    {
        children["local-address"] = local_address;
    }

    if(local_as != nullptr)
    {
        children["local-as"] = local_as;
    }

    if(msg_log_in != nullptr)
    {
        children["msg-log-in"] = msg_log_in;
    }

    if(msg_log_out != nullptr)
    {
        children["msg-log-out"] = msg_log_out;
    }

    if(neighbor_cluster_id != nullptr)
    {
        children["neighbor-cluster-id"] = neighbor_cluster_id;
    }

    if(password != nullptr)
    {
        children["password"] = password;
    }

    if(receive_buffer_size != nullptr)
    {
        children["receive-buffer-size"] = receive_buffer_size;
    }

    if(remote_as != nullptr)
    {
        children["remote-as"] = remote_as;
    }

    if(send_buffer_size != nullptr)
    {
        children["send-buffer-size"] = send_buffer_size;
    }

    if(tcpmss != nullptr)
    {
        children["tcpmss"] = tcpmss;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    if(tos != nullptr)
    {
        children["tos"] = tos;
    }

    if(update_in_filtering != nullptr)
    {
        children["update-in-filtering"] = update_in_filtering;
    }

    if(vrf_neighbor_afs != nullptr)
    {
        children["vrf-neighbor-afs"] = vrf_neighbor_afs;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-paths-receive-capability")
    {
        additional_paths_receive_capability = value;
        additional_paths_receive_capability.value_namespace = name_space;
        additional_paths_receive_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-paths-send-capability")
    {
        additional_paths_send_capability = value;
        additional_paths_send_capability.value_namespace = name_space;
        additional_paths_send_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-enable-modes")
    {
        bfd_enable_modes = value;
        bfd_enable_modes.value_namespace = name_space;
        bfd_enable_modes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-minimum-interval")
    {
        bfd_minimum_interval = value;
        bfd_minimum_interval.value_namespace = name_space;
        bfd_minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier = value;
        bfd_multiplier.value_namespace = name_space;
        bfd_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ebgp-recv-dmz")
    {
        ebgp_recv_dmz = value;
        ebgp_recv_dmz.value_namespace = name_space;
        ebgp_recv_dmz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ebgp-send-dmz-enable-modes")
    {
        ebgp_send_dmz_enable_modes = value;
        ebgp_send_dmz_enable_modes.value_namespace = name_space;
        ebgp_send_dmz_enable_modes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-peer-engineering")
    {
        egress_peer_engineering = value;
        egress_peer_engineering.value_namespace = name_space;
        egress_peer_engineering.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enforce-first-as")
    {
        enforce_first_as = value;
        enforce_first_as.value_namespace = name_space;
        enforce_first_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-watch-time")
    {
        idle_watch_time = value;
        idle_watch_time.value_namespace = name_space;
        idle_watch_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-connected-check-ebgp")
    {
        ignore_connected_check_ebgp = value;
        ignore_connected_check_ebgp.value_namespace = name_space;
        ignore_connected_check_ebgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-vpn-client-ibgp-ce")
    {
        internal_vpn_client_ibgp_ce = value;
        internal_vpn_client_ibgp_ce.value_namespace = name_space;
        internal_vpn_client_ibgp_ce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-peers")
    {
        max_peers = value;
        max_peers.value_namespace = name_space;
        max_peers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-graceful-restart")
    {
        neighbor_graceful_restart = value;
        neighbor_graceful_restart.value_namespace = name_space;
        neighbor_graceful_restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-graceful-restart-stalepath-time")
    {
        neighbor_graceful_restart_stalepath_time = value;
        neighbor_graceful_restart_stalepath_time.value_namespace = name_space;
        neighbor_graceful_restart_stalepath_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-graceful-restart-time")
    {
        neighbor_graceful_restart_time = value;
        neighbor_graceful_restart_time.value_namespace = name_space;
        neighbor_graceful_restart_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-group-add-member")
    {
        neighbor_group_add_member = value;
        neighbor_group_add_member.value_namespace = name_space;
        neighbor_group_add_member.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propagate-dmz-link-bandwidth")
    {
        propagate_dmz_link_bandwidth = value;
        propagate_dmz_link_bandwidth.value_namespace = name_space;
        propagate_dmz_link_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-as-list")
    {
        remote_as_list = value;
        remote_as_list.value_namespace = name_space;
        remote_as_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-group-add-member")
    {
        session_group_add_member = value;
        session_group_add_member.value_namespace = name_space;
        session_group_add_member.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-open-mode")
    {
        session_open_mode = value;
        session_open_mode.value_namespace = name_space;
        session_open_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-all-capabilities")
    {
        suppress_all_capabilities = value;
        suppress_all_capabilities.value_namespace = name_space;
        suppress_all_capabilities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-four-byte-as-capability")
    {
        suppress_four_byte_as_capability = value;
        suppress_four_byte_as_capability.value_namespace = name_space;
        suppress_four_byte_as_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl-security")
    {
        ttl_security = value;
        ttl_security.value_namespace = name_space;
        ttl_security.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-source-interface")
    {
        update_source_interface = value;
        update_source_interface.value_namespace = name_space;
        update_source_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "additional-paths-receive-capability")
    {
        additional_paths_receive_capability.yfilter = yfilter;
    }
    if(value_path == "additional-paths-send-capability")
    {
        additional_paths_send_capability.yfilter = yfilter;
    }
    if(value_path == "bfd-enable-modes")
    {
        bfd_enable_modes.yfilter = yfilter;
    }
    if(value_path == "bfd-minimum-interval")
    {
        bfd_minimum_interval.yfilter = yfilter;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "ebgp-recv-dmz")
    {
        ebgp_recv_dmz.yfilter = yfilter;
    }
    if(value_path == "ebgp-send-dmz-enable-modes")
    {
        ebgp_send_dmz_enable_modes.yfilter = yfilter;
    }
    if(value_path == "egress-peer-engineering")
    {
        egress_peer_engineering.yfilter = yfilter;
    }
    if(value_path == "enforce-first-as")
    {
        enforce_first_as.yfilter = yfilter;
    }
    if(value_path == "idle-watch-time")
    {
        idle_watch_time.yfilter = yfilter;
    }
    if(value_path == "ignore-connected-check-ebgp")
    {
        ignore_connected_check_ebgp.yfilter = yfilter;
    }
    if(value_path == "internal-vpn-client-ibgp-ce")
    {
        internal_vpn_client_ibgp_ce.yfilter = yfilter;
    }
    if(value_path == "max-peers")
    {
        max_peers.yfilter = yfilter;
    }
    if(value_path == "neighbor-graceful-restart")
    {
        neighbor_graceful_restart.yfilter = yfilter;
    }
    if(value_path == "neighbor-graceful-restart-stalepath-time")
    {
        neighbor_graceful_restart_stalepath_time.yfilter = yfilter;
    }
    if(value_path == "neighbor-graceful-restart-time")
    {
        neighbor_graceful_restart_time.yfilter = yfilter;
    }
    if(value_path == "neighbor-group-add-member")
    {
        neighbor_group_add_member.yfilter = yfilter;
    }
    if(value_path == "propagate-dmz-link-bandwidth")
    {
        propagate_dmz_link_bandwidth.yfilter = yfilter;
    }
    if(value_path == "remote-as-list")
    {
        remote_as_list.yfilter = yfilter;
    }
    if(value_path == "session-group-add-member")
    {
        session_group_add_member.yfilter = yfilter;
    }
    if(value_path == "session-open-mode")
    {
        session_open_mode.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "suppress-all-capabilities")
    {
        suppress_all_capabilities.yfilter = yfilter;
    }
    if(value_path == "suppress-four-byte-as-capability")
    {
        suppress_four_byte_as_capability.yfilter = yfilter;
    }
    if(value_path == "ttl-security")
    {
        ttl_security.yfilter = yfilter;
    }
    if(value_path == "update-source-interface")
    {
        update_source_interface.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertisement-interval" || name == "bmp-activates" || name == "ebgp-multihop" || name == "graceful-maintenance" || name == "keychain" || name == "local-address" || name == "local-as" || name == "msg-log-in" || name == "msg-log-out" || name == "neighbor-cluster-id" || name == "password" || name == "receive-buffer-size" || name == "remote-as" || name == "send-buffer-size" || name == "tcpmss" || name == "timers" || name == "tos" || name == "update-in-filtering" || name == "vrf-neighbor-afs" || name == "neighbor-address" || name == "additional-paths-receive-capability" || name == "additional-paths-send-capability" || name == "bfd-enable-modes" || name == "bfd-minimum-interval" || name == "bfd-multiplier" || name == "description" || name == "ebgp-recv-dmz" || name == "ebgp-send-dmz-enable-modes" || name == "egress-peer-engineering" || name == "enforce-first-as" || name == "idle-watch-time" || name == "ignore-connected-check-ebgp" || name == "internal-vpn-client-ibgp-ce" || name == "max-peers" || name == "neighbor-graceful-restart" || name == "neighbor-graceful-restart-stalepath-time" || name == "neighbor-graceful-restart-time" || name == "neighbor-group-add-member" || name == "propagate-dmz-link-bandwidth" || name == "remote-as-list" || name == "session-group-add-member" || name == "session-open-mode" || name == "shutdown" || name == "suppress-all-capabilities" || name == "suppress-four-byte-as-capability" || name == "ttl-security" || name == "update-source-interface")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::AdvertisementInterval::AdvertisementInterval()
    :
    minimum_interval{YType::uint32, "minimum-interval"},
    minimum_interval_msecs{YType::uint32, "minimum-interval-msecs"}
{

    yang_name = "advertisement-interval"; yang_parent_name = "vrf-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::AdvertisementInterval::~AdvertisementInterval()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::AdvertisementInterval::has_data() const
{
    return minimum_interval.is_set
	|| minimum_interval_msecs.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::AdvertisementInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(minimum_interval_msecs.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::AdvertisementInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertisement-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::AdvertisementInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (minimum_interval_msecs.is_set || is_set(minimum_interval_msecs.yfilter)) leaf_name_data.push_back(minimum_interval_msecs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::AdvertisementInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::AdvertisementInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::AdvertisementInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-interval-msecs")
    {
        minimum_interval_msecs = value;
        minimum_interval_msecs.value_namespace = name_space;
        minimum_interval_msecs.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::AdvertisementInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "minimum-interval-msecs")
    {
        minimum_interval_msecs.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::AdvertisementInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-interval" || name == "minimum-interval-msecs")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::BmpActivates()
{

    yang_name = "bmp-activates"; yang_parent_name = "vrf-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::~BmpActivates()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::has_data() const
{
    for (std::size_t index=0; index<bmp_activate.size(); index++)
    {
        if(bmp_activate[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::has_operation() const
{
    for (std::size_t index=0; index<bmp_activate.size(); index++)
    {
        if(bmp_activate[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-activates";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bmp-activate")
    {
        for(auto const & c : bmp_activate)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::BmpActivate>();
        c->parent = this;
        bmp_activate.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bmp_activate)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bmp-activate")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::BmpActivate::BmpActivate()
    :
    server_id{YType::uint32, "server-id"}
{

    yang_name = "bmp-activate"; yang_parent_name = "bmp-activates"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::BmpActivate::~BmpActivate()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::BmpActivate::has_data() const
{
    return server_id.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::BmpActivate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(server_id.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::BmpActivate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-activate" <<"[server-id='" <<server_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::BmpActivate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server_id.is_set || is_set(server_id.yfilter)) leaf_name_data.push_back(server_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::BmpActivate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::BmpActivate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::BmpActivate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "server-id")
    {
        server_id = value;
        server_id.value_namespace = name_space;
        server_id.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::BmpActivate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "server-id")
    {
        server_id.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::BmpActivate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server-id")
        return true;
    return false;
}


}
}

