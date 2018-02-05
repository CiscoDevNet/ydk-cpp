
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_msdp_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_msdp_cfg {

Msdp::Msdp()
    :
    global_max_sa{YType::uint32, "global-max-sa"},
    nsr_delay{YType::uint32, "nsr-delay"}
    	,
    vrfs(std::make_shared<Msdp::Vrfs>())
	,default_context(nullptr) // presence node
{
    vrfs->parent = this;

    yang_name = "msdp"; yang_parent_name = "Cisco-IOS-XR-ipv4-msdp-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

Msdp::~Msdp()
{
}

bool Msdp::has_data() const
{
    return global_max_sa.is_set
	|| nsr_delay.is_set
	|| (vrfs !=  nullptr && vrfs->has_data())
	|| (default_context !=  nullptr && default_context->has_data());
}

bool Msdp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(global_max_sa.yfilter)
	|| ydk::is_set(nsr_delay.yfilter)
	|| (vrfs !=  nullptr && vrfs->has_operation())
	|| (default_context !=  nullptr && default_context->has_operation());
}

std::string Msdp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-msdp-cfg:msdp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Msdp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_max_sa.is_set || is_set(global_max_sa.yfilter)) leaf_name_data.push_back(global_max_sa.get_name_leafdata());
    if (nsr_delay.is_set || is_set(nsr_delay.yfilter)) leaf_name_data.push_back(nsr_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Msdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<Msdp::Vrfs>();
        }
        return vrfs;
    }

    if(child_yang_name == "default-context")
    {
        if(default_context == nullptr)
        {
            default_context = std::make_shared<Msdp::DefaultContext>();
        }
        return default_context;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Msdp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(vrfs != nullptr)
    {
        children["vrfs"] = vrfs;
    }

    if(default_context != nullptr)
    {
        children["default-context"] = default_context;
    }

    return children;
}

void Msdp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "global-max-sa")
    {
        global_max_sa = value;
        global_max_sa.value_namespace = name_space;
        global_max_sa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-delay")
    {
        nsr_delay = value;
        nsr_delay.value_namespace = name_space;
        nsr_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Msdp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "global-max-sa")
    {
        global_max_sa.yfilter = yfilter;
    }
    if(value_path == "nsr-delay")
    {
        nsr_delay.yfilter = yfilter;
    }
}

std::shared_ptr<Entity> Msdp::clone_ptr() const
{
    return std::make_shared<Msdp>();
}

std::string Msdp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Msdp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Msdp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Msdp::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Msdp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrfs" || name == "default-context" || name == "global-max-sa" || name == "nsr-delay")
        return true;
    return false;
}

Msdp::Vrfs::Vrfs()
{

    yang_name = "vrfs"; yang_parent_name = "msdp"; is_top_level_class = false; has_list_ancestor = false;
}

Msdp::Vrfs::~Vrfs()
{
}

bool Msdp::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Msdp::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Msdp::Vrfs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-msdp-cfg:msdp/" << get_segment_path();
    return path_buffer.str();
}

std::string Msdp::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Msdp::Vrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Msdp::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto c = std::make_shared<Msdp::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Msdp::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : vrf)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Msdp::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Msdp::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Msdp::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Msdp::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"},
    ttl_threshold{YType::uint32, "ttl-threshold"},
    max_peer_sa{YType::uint32, "max-peer-sa"},
    default_peer{YType::str, "default-peer"},
    originator_id{YType::str, "originator-id"},
    max_sa{YType::uint32, "max-sa"},
    connect_source{YType::str, "connect-source"}
    	,
    cache_state(std::make_shared<Msdp::Vrfs::Vrf::CacheState>())
	,keep_alive(nullptr) // presence node
	,peers(std::make_shared<Msdp::Vrfs::Vrf::Peers>())
	,sa_filters(std::make_shared<Msdp::Vrfs::Vrf::SaFilters>())
{
    cache_state->parent = this;
    peers->parent = this;
    sa_filters->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrfs"; is_top_level_class = false; has_list_ancestor = false;
}

Msdp::Vrfs::Vrf::~Vrf()
{
}

bool Msdp::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| ttl_threshold.is_set
	|| max_peer_sa.is_set
	|| default_peer.is_set
	|| originator_id.is_set
	|| max_sa.is_set
	|| connect_source.is_set
	|| (cache_state !=  nullptr && cache_state->has_data())
	|| (keep_alive !=  nullptr && keep_alive->has_data())
	|| (peers !=  nullptr && peers->has_data())
	|| (sa_filters !=  nullptr && sa_filters->has_data());
}

bool Msdp::Vrfs::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(ttl_threshold.yfilter)
	|| ydk::is_set(max_peer_sa.yfilter)
	|| ydk::is_set(default_peer.yfilter)
	|| ydk::is_set(originator_id.yfilter)
	|| ydk::is_set(max_sa.yfilter)
	|| ydk::is_set(connect_source.yfilter)
	|| (cache_state !=  nullptr && cache_state->has_operation())
	|| (keep_alive !=  nullptr && keep_alive->has_operation())
	|| (peers !=  nullptr && peers->has_operation())
	|| (sa_filters !=  nullptr && sa_filters->has_operation());
}

std::string Msdp::Vrfs::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-msdp-cfg:msdp/vrfs/" << get_segment_path();
    return path_buffer.str();
}

std::string Msdp::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Msdp::Vrfs::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (ttl_threshold.is_set || is_set(ttl_threshold.yfilter)) leaf_name_data.push_back(ttl_threshold.get_name_leafdata());
    if (max_peer_sa.is_set || is_set(max_peer_sa.yfilter)) leaf_name_data.push_back(max_peer_sa.get_name_leafdata());
    if (default_peer.is_set || is_set(default_peer.yfilter)) leaf_name_data.push_back(default_peer.get_name_leafdata());
    if (originator_id.is_set || is_set(originator_id.yfilter)) leaf_name_data.push_back(originator_id.get_name_leafdata());
    if (max_sa.is_set || is_set(max_sa.yfilter)) leaf_name_data.push_back(max_sa.get_name_leafdata());
    if (connect_source.is_set || is_set(connect_source.yfilter)) leaf_name_data.push_back(connect_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Msdp::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cache-state")
    {
        if(cache_state == nullptr)
        {
            cache_state = std::make_shared<Msdp::Vrfs::Vrf::CacheState>();
        }
        return cache_state;
    }

    if(child_yang_name == "keep-alive")
    {
        if(keep_alive == nullptr)
        {
            keep_alive = std::make_shared<Msdp::Vrfs::Vrf::KeepAlive>();
        }
        return keep_alive;
    }

    if(child_yang_name == "peers")
    {
        if(peers == nullptr)
        {
            peers = std::make_shared<Msdp::Vrfs::Vrf::Peers>();
        }
        return peers;
    }

    if(child_yang_name == "sa-filters")
    {
        if(sa_filters == nullptr)
        {
            sa_filters = std::make_shared<Msdp::Vrfs::Vrf::SaFilters>();
        }
        return sa_filters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Msdp::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cache_state != nullptr)
    {
        children["cache-state"] = cache_state;
    }

    if(keep_alive != nullptr)
    {
        children["keep-alive"] = keep_alive;
    }

    if(peers != nullptr)
    {
        children["peers"] = peers;
    }

    if(sa_filters != nullptr)
    {
        children["sa-filters"] = sa_filters;
    }

    return children;
}

void Msdp::Vrfs::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl-threshold")
    {
        ttl_threshold = value;
        ttl_threshold.value_namespace = name_space;
        ttl_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-peer-sa")
    {
        max_peer_sa = value;
        max_peer_sa.value_namespace = name_space;
        max_peer_sa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-peer")
    {
        default_peer = value;
        default_peer.value_namespace = name_space;
        default_peer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "originator-id")
    {
        originator_id = value;
        originator_id.value_namespace = name_space;
        originator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-sa")
    {
        max_sa = value;
        max_sa.value_namespace = name_space;
        max_sa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connect-source")
    {
        connect_source = value;
        connect_source.value_namespace = name_space;
        connect_source.value_namespace_prefix = name_space_prefix;
    }
}

void Msdp::Vrfs::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "ttl-threshold")
    {
        ttl_threshold.yfilter = yfilter;
    }
    if(value_path == "max-peer-sa")
    {
        max_peer_sa.yfilter = yfilter;
    }
    if(value_path == "default-peer")
    {
        default_peer.yfilter = yfilter;
    }
    if(value_path == "originator-id")
    {
        originator_id.yfilter = yfilter;
    }
    if(value_path == "max-sa")
    {
        max_sa.yfilter = yfilter;
    }
    if(value_path == "connect-source")
    {
        connect_source.yfilter = yfilter;
    }
}

bool Msdp::Vrfs::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache-state" || name == "keep-alive" || name == "peers" || name == "sa-filters" || name == "vrf-name" || name == "ttl-threshold" || name == "max-peer-sa" || name == "default-peer" || name == "originator-id" || name == "max-sa" || name == "connect-source")
        return true;
    return false;
}

Msdp::Vrfs::Vrf::CacheState::CacheState()
    :
    sa_holdtime{YType::uint32, "sa-holdtime"},
    list{YType::str, "list"},
    rp_list{YType::str, "rp-list"}
{

    yang_name = "cache-state"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Msdp::Vrfs::Vrf::CacheState::~CacheState()
{
}

bool Msdp::Vrfs::Vrf::CacheState::has_data() const
{
    return sa_holdtime.is_set
	|| list.is_set
	|| rp_list.is_set;
}

bool Msdp::Vrfs::Vrf::CacheState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sa_holdtime.yfilter)
	|| ydk::is_set(list.yfilter)
	|| ydk::is_set(rp_list.yfilter);
}

std::string Msdp::Vrfs::Vrf::CacheState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cache-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Msdp::Vrfs::Vrf::CacheState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sa_holdtime.is_set || is_set(sa_holdtime.yfilter)) leaf_name_data.push_back(sa_holdtime.get_name_leafdata());
    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());
    if (rp_list.is_set || is_set(rp_list.yfilter)) leaf_name_data.push_back(rp_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Msdp::Vrfs::Vrf::CacheState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Msdp::Vrfs::Vrf::CacheState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Msdp::Vrfs::Vrf::CacheState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sa-holdtime")
    {
        sa_holdtime = value;
        sa_holdtime.value_namespace = name_space;
        sa_holdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-list")
    {
        rp_list = value;
        rp_list.value_namespace = name_space;
        rp_list.value_namespace_prefix = name_space_prefix;
    }
}

void Msdp::Vrfs::Vrf::CacheState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sa-holdtime")
    {
        sa_holdtime.yfilter = yfilter;
    }
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
    if(value_path == "rp-list")
    {
        rp_list.yfilter = yfilter;
    }
}

bool Msdp::Vrfs::Vrf::CacheState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sa-holdtime" || name == "list" || name == "rp-list")
        return true;
    return false;
}

Msdp::Vrfs::Vrf::KeepAlive::KeepAlive()
    :
    keep_alive_period{YType::uint32, "keep-alive-period"},
    peer_timeout_period{YType::uint32, "peer-timeout-period"}
{

    yang_name = "keep-alive"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Msdp::Vrfs::Vrf::KeepAlive::~KeepAlive()
{
}

bool Msdp::Vrfs::Vrf::KeepAlive::has_data() const
{
    return keep_alive_period.is_set
	|| peer_timeout_period.is_set;
}

bool Msdp::Vrfs::Vrf::KeepAlive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(keep_alive_period.yfilter)
	|| ydk::is_set(peer_timeout_period.yfilter);
}

std::string Msdp::Vrfs::Vrf::KeepAlive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keep-alive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Msdp::Vrfs::Vrf::KeepAlive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keep_alive_period.is_set || is_set(keep_alive_period.yfilter)) leaf_name_data.push_back(keep_alive_period.get_name_leafdata());
    if (peer_timeout_period.is_set || is_set(peer_timeout_period.yfilter)) leaf_name_data.push_back(peer_timeout_period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Msdp::Vrfs::Vrf::KeepAlive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Msdp::Vrfs::Vrf::KeepAlive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Msdp::Vrfs::Vrf::KeepAlive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "keep-alive-period")
    {
        keep_alive_period = value;
        keep_alive_period.value_namespace = name_space;
        keep_alive_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-timeout-period")
    {
        peer_timeout_period = value;
        peer_timeout_period.value_namespace = name_space;
        peer_timeout_period.value_namespace_prefix = name_space_prefix;
    }
}

void Msdp::Vrfs::Vrf::KeepAlive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "keep-alive-period")
    {
        keep_alive_period.yfilter = yfilter;
    }
    if(value_path == "peer-timeout-period")
    {
        peer_timeout_period.yfilter = yfilter;
    }
}

bool Msdp::Vrfs::Vrf::KeepAlive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keep-alive-period" || name == "peer-timeout-period")
        return true;
    return false;
}

Msdp::Vrfs::Vrf::Peers::Peers()
{

    yang_name = "peers"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Msdp::Vrfs::Vrf::Peers::~Peers()
{
}

bool Msdp::Vrfs::Vrf::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool Msdp::Vrfs::Vrf::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Msdp::Vrfs::Vrf::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Msdp::Vrfs::Vrf::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Msdp::Vrfs::Vrf::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        auto c = std::make_shared<Msdp::Vrfs::Vrf::Peers::Peer>();
        c->parent = this;
        peer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Msdp::Vrfs::Vrf::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : peer)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Msdp::Vrfs::Vrf::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Msdp::Vrfs::Vrf::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Msdp::Vrfs::Vrf::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

Msdp::Vrfs::Vrf::Peers::Peer::Peer()
    :
    peer_address{YType::str, "peer-address"},
    shutdown{YType::empty, "shutdown"},
    description{YType::str, "description"},
    enable{YType::empty, "enable"},
    max_sa{YType::uint32, "max-sa"},
    nsr_down{YType::empty, "nsr-down"},
    peer_password{YType::str, "peer-password"},
    mesh_group{YType::str, "mesh-group"},
    ttl_threshold{YType::uint32, "ttl-threshold"},
    connect_source{YType::str, "connect-source"}
    	,
    remote_as(nullptr) // presence node
	,keep_alive(nullptr) // presence node
	,sa_filters(std::make_shared<Msdp::Vrfs::Vrf::Peers::Peer::SaFilters>())
{
    sa_filters->parent = this;

    yang_name = "peer"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = true;
}

Msdp::Vrfs::Vrf::Peers::Peer::~Peer()
{
}

bool Msdp::Vrfs::Vrf::Peers::Peer::has_data() const
{
    return peer_address.is_set
	|| shutdown.is_set
	|| description.is_set
	|| enable.is_set
	|| max_sa.is_set
	|| nsr_down.is_set
	|| peer_password.is_set
	|| mesh_group.is_set
	|| ttl_threshold.is_set
	|| connect_source.is_set
	|| (remote_as !=  nullptr && remote_as->has_data())
	|| (keep_alive !=  nullptr && keep_alive->has_data())
	|| (sa_filters !=  nullptr && sa_filters->has_data());
}

bool Msdp::Vrfs::Vrf::Peers::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_address.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(max_sa.yfilter)
	|| ydk::is_set(nsr_down.yfilter)
	|| ydk::is_set(peer_password.yfilter)
	|| ydk::is_set(mesh_group.yfilter)
	|| ydk::is_set(ttl_threshold.yfilter)
	|| ydk::is_set(connect_source.yfilter)
	|| (remote_as !=  nullptr && remote_as->has_operation())
	|| (keep_alive !=  nullptr && keep_alive->has_operation())
	|| (sa_filters !=  nullptr && sa_filters->has_operation());
}

std::string Msdp::Vrfs::Vrf::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[peer-address='" <<peer_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Msdp::Vrfs::Vrf::Peers::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_address.is_set || is_set(peer_address.yfilter)) leaf_name_data.push_back(peer_address.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (max_sa.is_set || is_set(max_sa.yfilter)) leaf_name_data.push_back(max_sa.get_name_leafdata());
    if (nsr_down.is_set || is_set(nsr_down.yfilter)) leaf_name_data.push_back(nsr_down.get_name_leafdata());
    if (peer_password.is_set || is_set(peer_password.yfilter)) leaf_name_data.push_back(peer_password.get_name_leafdata());
    if (mesh_group.is_set || is_set(mesh_group.yfilter)) leaf_name_data.push_back(mesh_group.get_name_leafdata());
    if (ttl_threshold.is_set || is_set(ttl_threshold.yfilter)) leaf_name_data.push_back(ttl_threshold.get_name_leafdata());
    if (connect_source.is_set || is_set(connect_source.yfilter)) leaf_name_data.push_back(connect_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Msdp::Vrfs::Vrf::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-as")
    {
        if(remote_as == nullptr)
        {
            remote_as = std::make_shared<Msdp::Vrfs::Vrf::Peers::Peer::RemoteAs>();
        }
        return remote_as;
    }

    if(child_yang_name == "keep-alive")
    {
        if(keep_alive == nullptr)
        {
            keep_alive = std::make_shared<Msdp::Vrfs::Vrf::Peers::Peer::KeepAlive>();
        }
        return keep_alive;
    }

    if(child_yang_name == "sa-filters")
    {
        if(sa_filters == nullptr)
        {
            sa_filters = std::make_shared<Msdp::Vrfs::Vrf::Peers::Peer::SaFilters>();
        }
        return sa_filters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Msdp::Vrfs::Vrf::Peers::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(remote_as != nullptr)
    {
        children["remote-as"] = remote_as;
    }

    if(keep_alive != nullptr)
    {
        children["keep-alive"] = keep_alive;
    }

    if(sa_filters != nullptr)
    {
        children["sa-filters"] = sa_filters;
    }

    return children;
}

void Msdp::Vrfs::Vrf::Peers::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-address")
    {
        peer_address = value;
        peer_address.value_namespace = name_space;
        peer_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-sa")
    {
        max_sa = value;
        max_sa.value_namespace = name_space;
        max_sa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-down")
    {
        nsr_down = value;
        nsr_down.value_namespace = name_space;
        nsr_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-password")
    {
        peer_password = value;
        peer_password.value_namespace = name_space;
        peer_password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mesh-group")
    {
        mesh_group = value;
        mesh_group.value_namespace = name_space;
        mesh_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl-threshold")
    {
        ttl_threshold = value;
        ttl_threshold.value_namespace = name_space;
        ttl_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connect-source")
    {
        connect_source = value;
        connect_source.value_namespace = name_space;
        connect_source.value_namespace_prefix = name_space_prefix;
    }
}

void Msdp::Vrfs::Vrf::Peers::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-address")
    {
        peer_address.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "max-sa")
    {
        max_sa.yfilter = yfilter;
    }
    if(value_path == "nsr-down")
    {
        nsr_down.yfilter = yfilter;
    }
    if(value_path == "peer-password")
    {
        peer_password.yfilter = yfilter;
    }
    if(value_path == "mesh-group")
    {
        mesh_group.yfilter = yfilter;
    }
    if(value_path == "ttl-threshold")
    {
        ttl_threshold.yfilter = yfilter;
    }
    if(value_path == "connect-source")
    {
        connect_source.yfilter = yfilter;
    }
}

bool Msdp::Vrfs::Vrf::Peers::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-as" || name == "keep-alive" || name == "sa-filters" || name == "peer-address" || name == "shutdown" || name == "description" || name == "enable" || name == "max-sa" || name == "nsr-down" || name == "peer-password" || name == "mesh-group" || name == "ttl-threshold" || name == "connect-source")
        return true;
    return false;
}

Msdp::Vrfs::Vrf::Peers::Peer::RemoteAs::RemoteAs()
    :
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"}
{

    yang_name = "remote-as"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true;
}

Msdp::Vrfs::Vrf::Peers::Peer::RemoteAs::~RemoteAs()
{
}

bool Msdp::Vrfs::Vrf::Peers::Peer::RemoteAs::has_data() const
{
    return as_xx.is_set
	|| as_yy.is_set;
}

bool Msdp::Vrfs::Vrf::Peers::Peer::RemoteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(as_yy.yfilter);
}

std::string Msdp::Vrfs::Vrf::Peers::Peer::RemoteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Msdp::Vrfs::Vrf::Peers::Peer::RemoteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.yfilter)) leaf_name_data.push_back(as_yy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Msdp::Vrfs::Vrf::Peers::Peer::RemoteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Msdp::Vrfs::Vrf::Peers::Peer::RemoteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Msdp::Vrfs::Vrf::Peers::Peer::RemoteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Msdp::Vrfs::Vrf::Peers::Peer::RemoteAs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Msdp::Vrfs::Vrf::Peers::Peer::RemoteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-xx" || name == "as-yy")
        return true;
    return false;
}

Msdp::Vrfs::Vrf::Peers::Peer::KeepAlive::KeepAlive()
    :
    keep_alive_period{YType::uint32, "keep-alive-period"},
    peer_timeout_period{YType::uint32, "peer-timeout-period"}
{

    yang_name = "keep-alive"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true;
}

Msdp::Vrfs::Vrf::Peers::Peer::KeepAlive::~KeepAlive()
{
}

bool Msdp::Vrfs::Vrf::Peers::Peer::KeepAlive::has_data() const
{
    return keep_alive_period.is_set
	|| peer_timeout_period.is_set;
}

bool Msdp::Vrfs::Vrf::Peers::Peer::KeepAlive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(keep_alive_period.yfilter)
	|| ydk::is_set(peer_timeout_period.yfilter);
}

std::string Msdp::Vrfs::Vrf::Peers::Peer::KeepAlive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keep-alive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Msdp::Vrfs::Vrf::Peers::Peer::KeepAlive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keep_alive_period.is_set || is_set(keep_alive_period.yfilter)) leaf_name_data.push_back(keep_alive_period.get_name_leafdata());
    if (peer_timeout_period.is_set || is_set(peer_timeout_period.yfilter)) leaf_name_data.push_back(peer_timeout_period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Msdp::Vrfs::Vrf::Peers::Peer::KeepAlive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Msdp::Vrfs::Vrf::Peers::Peer::KeepAlive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Msdp::Vrfs::Vrf::Peers::Peer::KeepAlive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "keep-alive-period")
    {
        keep_alive_period = value;
        keep_alive_period.value_namespace = name_space;
        keep_alive_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-timeout-period")
    {
        peer_timeout_period = value;
        peer_timeout_period.value_namespace = name_space;
        peer_timeout_period.value_namespace_prefix = name_space_prefix;
    }
}

void Msdp::Vrfs::Vrf::Peers::Peer::KeepAlive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "keep-alive-period")
    {
        keep_alive_period.yfilter = yfilter;
    }
    if(value_path == "peer-timeout-period")
    {
        peer_timeout_period.yfilter = yfilter;
    }
}

bool Msdp::Vrfs::Vrf::Peers::Peer::KeepAlive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keep-alive-period" || name == "peer-timeout-period")
        return true;
    return false;
}

Msdp::Vrfs::Vrf::Peers::Peer::SaFilters::SaFilters()
{

    yang_name = "sa-filters"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true;
}

Msdp::Vrfs::Vrf::Peers::Peer::SaFilters::~SaFilters()
{
}

bool Msdp::Vrfs::Vrf::Peers::Peer::SaFilters::has_data() const
{
    for (std::size_t index=0; index<sa_filter.size(); index++)
    {
        if(sa_filter[index]->has_data())
            return true;
    }
    return false;
}

bool Msdp::Vrfs::Vrf::Peers::Peer::SaFilters::has_operation() const
{
    for (std::size_t index=0; index<sa_filter.size(); index++)
    {
        if(sa_filter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Msdp::Vrfs::Vrf::Peers::Peer::SaFilters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sa-filters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Msdp::Vrfs::Vrf::Peers::Peer::SaFilters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Msdp::Vrfs::Vrf::Peers::Peer::SaFilters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sa-filter")
    {
        auto c = std::make_shared<Msdp::Vrfs::Vrf::Peers::Peer::SaFilters::SaFilter>();
        c->parent = this;
        sa_filter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Msdp::Vrfs::Vrf::Peers::Peer::SaFilters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : sa_filter)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Msdp::Vrfs::Vrf::Peers::Peer::SaFilters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Msdp::Vrfs::Vrf::Peers::Peer::SaFilters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Msdp::Vrfs::Vrf::Peers::Peer::SaFilters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sa-filter")
        return true;
    return false;
}

Msdp::Vrfs::Vrf::Peers::Peer::SaFilters::SaFilter::SaFilter()
    :
    list{YType::enumeration, "list"},
    filter_type{YType::enumeration, "filter-type"},
    access_list_name{YType::str, "access-list-name"}
{

    yang_name = "sa-filter"; yang_parent_name = "sa-filters"; is_top_level_class = false; has_list_ancestor = true;
}

Msdp::Vrfs::Vrf::Peers::Peer::SaFilters::SaFilter::~SaFilter()
{
}

bool Msdp::Vrfs::Vrf::Peers::Peer::SaFilters::SaFilter::has_data() const
{
    return list.is_set
	|| filter_type.is_set
	|| access_list_name.is_set;
}

bool Msdp::Vrfs::Vrf::Peers::Peer::SaFilters::SaFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(list.yfilter)
	|| ydk::is_set(filter_type.yfilter)
	|| ydk::is_set(access_list_name.yfilter);
}

std::string Msdp::Vrfs::Vrf::Peers::Peer::SaFilters::SaFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sa-filter" <<"[list='" <<list <<"']" <<"[filter-type='" <<filter_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Msdp::Vrfs::Vrf::Peers::Peer::SaFilters::SaFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());
    if (filter_type.is_set || is_set(filter_type.yfilter)) leaf_name_data.push_back(filter_type.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Msdp::Vrfs::Vrf::Peers::Peer::SaFilters::SaFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Msdp::Vrfs::Vrf::Peers::Peer::SaFilters::SaFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Msdp::Vrfs::Vrf::Peers::Peer::SaFilters::SaFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filter-type")
    {
        filter_type = value;
        filter_type.value_namespace = name_space;
        filter_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Msdp::Vrfs::Vrf::Peers::Peer::SaFilters::SaFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
    if(value_path == "filter-type")
    {
        filter_type.yfilter = yfilter;
    }
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
}

bool Msdp::Vrfs::Vrf::Peers::Peer::SaFilters::SaFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list" || name == "filter-type" || name == "access-list-name")
        return true;
    return false;
}

Msdp::Vrfs::Vrf::SaFilters::SaFilters()
{

    yang_name = "sa-filters"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Msdp::Vrfs::Vrf::SaFilters::~SaFilters()
{
}

bool Msdp::Vrfs::Vrf::SaFilters::has_data() const
{
    for (std::size_t index=0; index<sa_filter.size(); index++)
    {
        if(sa_filter[index]->has_data())
            return true;
    }
    return false;
}

bool Msdp::Vrfs::Vrf::SaFilters::has_operation() const
{
    for (std::size_t index=0; index<sa_filter.size(); index++)
    {
        if(sa_filter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Msdp::Vrfs::Vrf::SaFilters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sa-filters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Msdp::Vrfs::Vrf::SaFilters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Msdp::Vrfs::Vrf::SaFilters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sa-filter")
    {
        auto c = std::make_shared<Msdp::Vrfs::Vrf::SaFilters::SaFilter>();
        c->parent = this;
        sa_filter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Msdp::Vrfs::Vrf::SaFilters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : sa_filter)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Msdp::Vrfs::Vrf::SaFilters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Msdp::Vrfs::Vrf::SaFilters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Msdp::Vrfs::Vrf::SaFilters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sa-filter")
        return true;
    return false;
}

Msdp::Vrfs::Vrf::SaFilters::SaFilter::SaFilter()
    :
    list{YType::enumeration, "list"},
    filter_type{YType::enumeration, "filter-type"},
    access_list_name{YType::str, "access-list-name"}
{

    yang_name = "sa-filter"; yang_parent_name = "sa-filters"; is_top_level_class = false; has_list_ancestor = true;
}

Msdp::Vrfs::Vrf::SaFilters::SaFilter::~SaFilter()
{
}

bool Msdp::Vrfs::Vrf::SaFilters::SaFilter::has_data() const
{
    return list.is_set
	|| filter_type.is_set
	|| access_list_name.is_set;
}

bool Msdp::Vrfs::Vrf::SaFilters::SaFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(list.yfilter)
	|| ydk::is_set(filter_type.yfilter)
	|| ydk::is_set(access_list_name.yfilter);
}

std::string Msdp::Vrfs::Vrf::SaFilters::SaFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sa-filter" <<"[list='" <<list <<"']" <<"[filter-type='" <<filter_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Msdp::Vrfs::Vrf::SaFilters::SaFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());
    if (filter_type.is_set || is_set(filter_type.yfilter)) leaf_name_data.push_back(filter_type.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Msdp::Vrfs::Vrf::SaFilters::SaFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Msdp::Vrfs::Vrf::SaFilters::SaFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Msdp::Vrfs::Vrf::SaFilters::SaFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filter-type")
    {
        filter_type = value;
        filter_type.value_namespace = name_space;
        filter_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Msdp::Vrfs::Vrf::SaFilters::SaFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
    if(value_path == "filter-type")
    {
        filter_type.yfilter = yfilter;
    }
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
}

bool Msdp::Vrfs::Vrf::SaFilters::SaFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list" || name == "filter-type" || name == "access-list-name")
        return true;
    return false;
}

Msdp::DefaultContext::DefaultContext()
    :
    ttl_threshold{YType::uint32, "ttl-threshold"},
    max_peer_sa{YType::uint32, "max-peer-sa"},
    default_peer{YType::str, "default-peer"},
    originator_id{YType::str, "originator-id"},
    max_sa{YType::uint32, "max-sa"},
    connect_source{YType::str, "connect-source"}
    	,
    cache_state(std::make_shared<Msdp::DefaultContext::CacheState>())
	,keep_alive(nullptr) // presence node
	,peers(std::make_shared<Msdp::DefaultContext::Peers>())
	,sa_filters(std::make_shared<Msdp::DefaultContext::SaFilters>())
{
    cache_state->parent = this;
    peers->parent = this;
    sa_filters->parent = this;

    yang_name = "default-context"; yang_parent_name = "msdp"; is_top_level_class = false; has_list_ancestor = false;
}

Msdp::DefaultContext::~DefaultContext()
{
}

bool Msdp::DefaultContext::has_data() const
{
    return ttl_threshold.is_set
	|| max_peer_sa.is_set
	|| default_peer.is_set
	|| originator_id.is_set
	|| max_sa.is_set
	|| connect_source.is_set
	|| (cache_state !=  nullptr && cache_state->has_data())
	|| (keep_alive !=  nullptr && keep_alive->has_data())
	|| (peers !=  nullptr && peers->has_data())
	|| (sa_filters !=  nullptr && sa_filters->has_data());
}

bool Msdp::DefaultContext::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ttl_threshold.yfilter)
	|| ydk::is_set(max_peer_sa.yfilter)
	|| ydk::is_set(default_peer.yfilter)
	|| ydk::is_set(originator_id.yfilter)
	|| ydk::is_set(max_sa.yfilter)
	|| ydk::is_set(connect_source.yfilter)
	|| (cache_state !=  nullptr && cache_state->has_operation())
	|| (keep_alive !=  nullptr && keep_alive->has_operation())
	|| (peers !=  nullptr && peers->has_operation())
	|| (sa_filters !=  nullptr && sa_filters->has_operation());
}

std::string Msdp::DefaultContext::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-msdp-cfg:msdp/" << get_segment_path();
    return path_buffer.str();
}

std::string Msdp::DefaultContext::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-context";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Msdp::DefaultContext::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ttl_threshold.is_set || is_set(ttl_threshold.yfilter)) leaf_name_data.push_back(ttl_threshold.get_name_leafdata());
    if (max_peer_sa.is_set || is_set(max_peer_sa.yfilter)) leaf_name_data.push_back(max_peer_sa.get_name_leafdata());
    if (default_peer.is_set || is_set(default_peer.yfilter)) leaf_name_data.push_back(default_peer.get_name_leafdata());
    if (originator_id.is_set || is_set(originator_id.yfilter)) leaf_name_data.push_back(originator_id.get_name_leafdata());
    if (max_sa.is_set || is_set(max_sa.yfilter)) leaf_name_data.push_back(max_sa.get_name_leafdata());
    if (connect_source.is_set || is_set(connect_source.yfilter)) leaf_name_data.push_back(connect_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Msdp::DefaultContext::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cache-state")
    {
        if(cache_state == nullptr)
        {
            cache_state = std::make_shared<Msdp::DefaultContext::CacheState>();
        }
        return cache_state;
    }

    if(child_yang_name == "keep-alive")
    {
        if(keep_alive == nullptr)
        {
            keep_alive = std::make_shared<Msdp::DefaultContext::KeepAlive>();
        }
        return keep_alive;
    }

    if(child_yang_name == "peers")
    {
        if(peers == nullptr)
        {
            peers = std::make_shared<Msdp::DefaultContext::Peers>();
        }
        return peers;
    }

    if(child_yang_name == "sa-filters")
    {
        if(sa_filters == nullptr)
        {
            sa_filters = std::make_shared<Msdp::DefaultContext::SaFilters>();
        }
        return sa_filters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Msdp::DefaultContext::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cache_state != nullptr)
    {
        children["cache-state"] = cache_state;
    }

    if(keep_alive != nullptr)
    {
        children["keep-alive"] = keep_alive;
    }

    if(peers != nullptr)
    {
        children["peers"] = peers;
    }

    if(sa_filters != nullptr)
    {
        children["sa-filters"] = sa_filters;
    }

    return children;
}

void Msdp::DefaultContext::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ttl-threshold")
    {
        ttl_threshold = value;
        ttl_threshold.value_namespace = name_space;
        ttl_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-peer-sa")
    {
        max_peer_sa = value;
        max_peer_sa.value_namespace = name_space;
        max_peer_sa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-peer")
    {
        default_peer = value;
        default_peer.value_namespace = name_space;
        default_peer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "originator-id")
    {
        originator_id = value;
        originator_id.value_namespace = name_space;
        originator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-sa")
    {
        max_sa = value;
        max_sa.value_namespace = name_space;
        max_sa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connect-source")
    {
        connect_source = value;
        connect_source.value_namespace = name_space;
        connect_source.value_namespace_prefix = name_space_prefix;
    }
}

void Msdp::DefaultContext::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ttl-threshold")
    {
        ttl_threshold.yfilter = yfilter;
    }
    if(value_path == "max-peer-sa")
    {
        max_peer_sa.yfilter = yfilter;
    }
    if(value_path == "default-peer")
    {
        default_peer.yfilter = yfilter;
    }
    if(value_path == "originator-id")
    {
        originator_id.yfilter = yfilter;
    }
    if(value_path == "max-sa")
    {
        max_sa.yfilter = yfilter;
    }
    if(value_path == "connect-source")
    {
        connect_source.yfilter = yfilter;
    }
}

bool Msdp::DefaultContext::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache-state" || name == "keep-alive" || name == "peers" || name == "sa-filters" || name == "ttl-threshold" || name == "max-peer-sa" || name == "default-peer" || name == "originator-id" || name == "max-sa" || name == "connect-source")
        return true;
    return false;
}

Msdp::DefaultContext::CacheState::CacheState()
    :
    sa_holdtime{YType::uint32, "sa-holdtime"},
    list{YType::str, "list"},
    rp_list{YType::str, "rp-list"}
{

    yang_name = "cache-state"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false;
}

Msdp::DefaultContext::CacheState::~CacheState()
{
}

bool Msdp::DefaultContext::CacheState::has_data() const
{
    return sa_holdtime.is_set
	|| list.is_set
	|| rp_list.is_set;
}

bool Msdp::DefaultContext::CacheState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sa_holdtime.yfilter)
	|| ydk::is_set(list.yfilter)
	|| ydk::is_set(rp_list.yfilter);
}

std::string Msdp::DefaultContext::CacheState::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-msdp-cfg:msdp/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Msdp::DefaultContext::CacheState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cache-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Msdp::DefaultContext::CacheState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sa_holdtime.is_set || is_set(sa_holdtime.yfilter)) leaf_name_data.push_back(sa_holdtime.get_name_leafdata());
    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());
    if (rp_list.is_set || is_set(rp_list.yfilter)) leaf_name_data.push_back(rp_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Msdp::DefaultContext::CacheState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Msdp::DefaultContext::CacheState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Msdp::DefaultContext::CacheState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sa-holdtime")
    {
        sa_holdtime = value;
        sa_holdtime.value_namespace = name_space;
        sa_holdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-list")
    {
        rp_list = value;
        rp_list.value_namespace = name_space;
        rp_list.value_namespace_prefix = name_space_prefix;
    }
}

void Msdp::DefaultContext::CacheState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sa-holdtime")
    {
        sa_holdtime.yfilter = yfilter;
    }
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
    if(value_path == "rp-list")
    {
        rp_list.yfilter = yfilter;
    }
}

bool Msdp::DefaultContext::CacheState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sa-holdtime" || name == "list" || name == "rp-list")
        return true;
    return false;
}

Msdp::DefaultContext::KeepAlive::KeepAlive()
    :
    keep_alive_period{YType::uint32, "keep-alive-period"},
    peer_timeout_period{YType::uint32, "peer-timeout-period"}
{

    yang_name = "keep-alive"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false;
}

Msdp::DefaultContext::KeepAlive::~KeepAlive()
{
}

bool Msdp::DefaultContext::KeepAlive::has_data() const
{
    return keep_alive_period.is_set
	|| peer_timeout_period.is_set;
}

bool Msdp::DefaultContext::KeepAlive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(keep_alive_period.yfilter)
	|| ydk::is_set(peer_timeout_period.yfilter);
}

std::string Msdp::DefaultContext::KeepAlive::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-msdp-cfg:msdp/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Msdp::DefaultContext::KeepAlive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keep-alive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Msdp::DefaultContext::KeepAlive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keep_alive_period.is_set || is_set(keep_alive_period.yfilter)) leaf_name_data.push_back(keep_alive_period.get_name_leafdata());
    if (peer_timeout_period.is_set || is_set(peer_timeout_period.yfilter)) leaf_name_data.push_back(peer_timeout_period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Msdp::DefaultContext::KeepAlive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Msdp::DefaultContext::KeepAlive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Msdp::DefaultContext::KeepAlive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "keep-alive-period")
    {
        keep_alive_period = value;
        keep_alive_period.value_namespace = name_space;
        keep_alive_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-timeout-period")
    {
        peer_timeout_period = value;
        peer_timeout_period.value_namespace = name_space;
        peer_timeout_period.value_namespace_prefix = name_space_prefix;
    }
}

void Msdp::DefaultContext::KeepAlive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "keep-alive-period")
    {
        keep_alive_period.yfilter = yfilter;
    }
    if(value_path == "peer-timeout-period")
    {
        peer_timeout_period.yfilter = yfilter;
    }
}

bool Msdp::DefaultContext::KeepAlive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keep-alive-period" || name == "peer-timeout-period")
        return true;
    return false;
}

Msdp::DefaultContext::Peers::Peers()
{

    yang_name = "peers"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false;
}

Msdp::DefaultContext::Peers::~Peers()
{
}

bool Msdp::DefaultContext::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool Msdp::DefaultContext::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Msdp::DefaultContext::Peers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-msdp-cfg:msdp/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Msdp::DefaultContext::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Msdp::DefaultContext::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Msdp::DefaultContext::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        auto c = std::make_shared<Msdp::DefaultContext::Peers::Peer>();
        c->parent = this;
        peer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Msdp::DefaultContext::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : peer)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Msdp::DefaultContext::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Msdp::DefaultContext::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Msdp::DefaultContext::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

Msdp::DefaultContext::Peers::Peer::Peer()
    :
    peer_address{YType::str, "peer-address"},
    shutdown{YType::empty, "shutdown"},
    description{YType::str, "description"},
    enable{YType::empty, "enable"},
    max_sa{YType::uint32, "max-sa"},
    nsr_down{YType::empty, "nsr-down"},
    peer_password{YType::str, "peer-password"},
    mesh_group{YType::str, "mesh-group"},
    ttl_threshold{YType::uint32, "ttl-threshold"},
    connect_source{YType::str, "connect-source"}
    	,
    remote_as(nullptr) // presence node
	,keep_alive(nullptr) // presence node
	,sa_filters(std::make_shared<Msdp::DefaultContext::Peers::Peer::SaFilters>())
{
    sa_filters->parent = this;

    yang_name = "peer"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = false;
}

Msdp::DefaultContext::Peers::Peer::~Peer()
{
}

bool Msdp::DefaultContext::Peers::Peer::has_data() const
{
    return peer_address.is_set
	|| shutdown.is_set
	|| description.is_set
	|| enable.is_set
	|| max_sa.is_set
	|| nsr_down.is_set
	|| peer_password.is_set
	|| mesh_group.is_set
	|| ttl_threshold.is_set
	|| connect_source.is_set
	|| (remote_as !=  nullptr && remote_as->has_data())
	|| (keep_alive !=  nullptr && keep_alive->has_data())
	|| (sa_filters !=  nullptr && sa_filters->has_data());
}

bool Msdp::DefaultContext::Peers::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_address.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(max_sa.yfilter)
	|| ydk::is_set(nsr_down.yfilter)
	|| ydk::is_set(peer_password.yfilter)
	|| ydk::is_set(mesh_group.yfilter)
	|| ydk::is_set(ttl_threshold.yfilter)
	|| ydk::is_set(connect_source.yfilter)
	|| (remote_as !=  nullptr && remote_as->has_operation())
	|| (keep_alive !=  nullptr && keep_alive->has_operation())
	|| (sa_filters !=  nullptr && sa_filters->has_operation());
}

std::string Msdp::DefaultContext::Peers::Peer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-msdp-cfg:msdp/default-context/peers/" << get_segment_path();
    return path_buffer.str();
}

std::string Msdp::DefaultContext::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[peer-address='" <<peer_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Msdp::DefaultContext::Peers::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_address.is_set || is_set(peer_address.yfilter)) leaf_name_data.push_back(peer_address.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (max_sa.is_set || is_set(max_sa.yfilter)) leaf_name_data.push_back(max_sa.get_name_leafdata());
    if (nsr_down.is_set || is_set(nsr_down.yfilter)) leaf_name_data.push_back(nsr_down.get_name_leafdata());
    if (peer_password.is_set || is_set(peer_password.yfilter)) leaf_name_data.push_back(peer_password.get_name_leafdata());
    if (mesh_group.is_set || is_set(mesh_group.yfilter)) leaf_name_data.push_back(mesh_group.get_name_leafdata());
    if (ttl_threshold.is_set || is_set(ttl_threshold.yfilter)) leaf_name_data.push_back(ttl_threshold.get_name_leafdata());
    if (connect_source.is_set || is_set(connect_source.yfilter)) leaf_name_data.push_back(connect_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Msdp::DefaultContext::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-as")
    {
        if(remote_as == nullptr)
        {
            remote_as = std::make_shared<Msdp::DefaultContext::Peers::Peer::RemoteAs>();
        }
        return remote_as;
    }

    if(child_yang_name == "keep-alive")
    {
        if(keep_alive == nullptr)
        {
            keep_alive = std::make_shared<Msdp::DefaultContext::Peers::Peer::KeepAlive>();
        }
        return keep_alive;
    }

    if(child_yang_name == "sa-filters")
    {
        if(sa_filters == nullptr)
        {
            sa_filters = std::make_shared<Msdp::DefaultContext::Peers::Peer::SaFilters>();
        }
        return sa_filters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Msdp::DefaultContext::Peers::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(remote_as != nullptr)
    {
        children["remote-as"] = remote_as;
    }

    if(keep_alive != nullptr)
    {
        children["keep-alive"] = keep_alive;
    }

    if(sa_filters != nullptr)
    {
        children["sa-filters"] = sa_filters;
    }

    return children;
}

void Msdp::DefaultContext::Peers::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-address")
    {
        peer_address = value;
        peer_address.value_namespace = name_space;
        peer_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-sa")
    {
        max_sa = value;
        max_sa.value_namespace = name_space;
        max_sa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-down")
    {
        nsr_down = value;
        nsr_down.value_namespace = name_space;
        nsr_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-password")
    {
        peer_password = value;
        peer_password.value_namespace = name_space;
        peer_password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mesh-group")
    {
        mesh_group = value;
        mesh_group.value_namespace = name_space;
        mesh_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl-threshold")
    {
        ttl_threshold = value;
        ttl_threshold.value_namespace = name_space;
        ttl_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connect-source")
    {
        connect_source = value;
        connect_source.value_namespace = name_space;
        connect_source.value_namespace_prefix = name_space_prefix;
    }
}

void Msdp::DefaultContext::Peers::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-address")
    {
        peer_address.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "max-sa")
    {
        max_sa.yfilter = yfilter;
    }
    if(value_path == "nsr-down")
    {
        nsr_down.yfilter = yfilter;
    }
    if(value_path == "peer-password")
    {
        peer_password.yfilter = yfilter;
    }
    if(value_path == "mesh-group")
    {
        mesh_group.yfilter = yfilter;
    }
    if(value_path == "ttl-threshold")
    {
        ttl_threshold.yfilter = yfilter;
    }
    if(value_path == "connect-source")
    {
        connect_source.yfilter = yfilter;
    }
}

bool Msdp::DefaultContext::Peers::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-as" || name == "keep-alive" || name == "sa-filters" || name == "peer-address" || name == "shutdown" || name == "description" || name == "enable" || name == "max-sa" || name == "nsr-down" || name == "peer-password" || name == "mesh-group" || name == "ttl-threshold" || name == "connect-source")
        return true;
    return false;
}

Msdp::DefaultContext::Peers::Peer::RemoteAs::RemoteAs()
    :
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"}
{

    yang_name = "remote-as"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true;
}

Msdp::DefaultContext::Peers::Peer::RemoteAs::~RemoteAs()
{
}

bool Msdp::DefaultContext::Peers::Peer::RemoteAs::has_data() const
{
    return as_xx.is_set
	|| as_yy.is_set;
}

bool Msdp::DefaultContext::Peers::Peer::RemoteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(as_yy.yfilter);
}

std::string Msdp::DefaultContext::Peers::Peer::RemoteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Msdp::DefaultContext::Peers::Peer::RemoteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.yfilter)) leaf_name_data.push_back(as_yy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Msdp::DefaultContext::Peers::Peer::RemoteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Msdp::DefaultContext::Peers::Peer::RemoteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Msdp::DefaultContext::Peers::Peer::RemoteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Msdp::DefaultContext::Peers::Peer::RemoteAs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Msdp::DefaultContext::Peers::Peer::RemoteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-xx" || name == "as-yy")
        return true;
    return false;
}

Msdp::DefaultContext::Peers::Peer::KeepAlive::KeepAlive()
    :
    keep_alive_period{YType::uint32, "keep-alive-period"},
    peer_timeout_period{YType::uint32, "peer-timeout-period"}
{

    yang_name = "keep-alive"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true;
}

Msdp::DefaultContext::Peers::Peer::KeepAlive::~KeepAlive()
{
}

bool Msdp::DefaultContext::Peers::Peer::KeepAlive::has_data() const
{
    return keep_alive_period.is_set
	|| peer_timeout_period.is_set;
}

bool Msdp::DefaultContext::Peers::Peer::KeepAlive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(keep_alive_period.yfilter)
	|| ydk::is_set(peer_timeout_period.yfilter);
}

std::string Msdp::DefaultContext::Peers::Peer::KeepAlive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keep-alive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Msdp::DefaultContext::Peers::Peer::KeepAlive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keep_alive_period.is_set || is_set(keep_alive_period.yfilter)) leaf_name_data.push_back(keep_alive_period.get_name_leafdata());
    if (peer_timeout_period.is_set || is_set(peer_timeout_period.yfilter)) leaf_name_data.push_back(peer_timeout_period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Msdp::DefaultContext::Peers::Peer::KeepAlive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Msdp::DefaultContext::Peers::Peer::KeepAlive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Msdp::DefaultContext::Peers::Peer::KeepAlive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "keep-alive-period")
    {
        keep_alive_period = value;
        keep_alive_period.value_namespace = name_space;
        keep_alive_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-timeout-period")
    {
        peer_timeout_period = value;
        peer_timeout_period.value_namespace = name_space;
        peer_timeout_period.value_namespace_prefix = name_space_prefix;
    }
}

void Msdp::DefaultContext::Peers::Peer::KeepAlive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "keep-alive-period")
    {
        keep_alive_period.yfilter = yfilter;
    }
    if(value_path == "peer-timeout-period")
    {
        peer_timeout_period.yfilter = yfilter;
    }
}

bool Msdp::DefaultContext::Peers::Peer::KeepAlive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keep-alive-period" || name == "peer-timeout-period")
        return true;
    return false;
}

Msdp::DefaultContext::Peers::Peer::SaFilters::SaFilters()
{

    yang_name = "sa-filters"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true;
}

Msdp::DefaultContext::Peers::Peer::SaFilters::~SaFilters()
{
}

bool Msdp::DefaultContext::Peers::Peer::SaFilters::has_data() const
{
    for (std::size_t index=0; index<sa_filter.size(); index++)
    {
        if(sa_filter[index]->has_data())
            return true;
    }
    return false;
}

bool Msdp::DefaultContext::Peers::Peer::SaFilters::has_operation() const
{
    for (std::size_t index=0; index<sa_filter.size(); index++)
    {
        if(sa_filter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Msdp::DefaultContext::Peers::Peer::SaFilters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sa-filters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Msdp::DefaultContext::Peers::Peer::SaFilters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Msdp::DefaultContext::Peers::Peer::SaFilters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sa-filter")
    {
        auto c = std::make_shared<Msdp::DefaultContext::Peers::Peer::SaFilters::SaFilter>();
        c->parent = this;
        sa_filter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Msdp::DefaultContext::Peers::Peer::SaFilters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : sa_filter)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Msdp::DefaultContext::Peers::Peer::SaFilters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Msdp::DefaultContext::Peers::Peer::SaFilters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Msdp::DefaultContext::Peers::Peer::SaFilters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sa-filter")
        return true;
    return false;
}

Msdp::DefaultContext::Peers::Peer::SaFilters::SaFilter::SaFilter()
    :
    list{YType::enumeration, "list"},
    filter_type{YType::enumeration, "filter-type"},
    access_list_name{YType::str, "access-list-name"}
{

    yang_name = "sa-filter"; yang_parent_name = "sa-filters"; is_top_level_class = false; has_list_ancestor = true;
}

Msdp::DefaultContext::Peers::Peer::SaFilters::SaFilter::~SaFilter()
{
}

bool Msdp::DefaultContext::Peers::Peer::SaFilters::SaFilter::has_data() const
{
    return list.is_set
	|| filter_type.is_set
	|| access_list_name.is_set;
}

bool Msdp::DefaultContext::Peers::Peer::SaFilters::SaFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(list.yfilter)
	|| ydk::is_set(filter_type.yfilter)
	|| ydk::is_set(access_list_name.yfilter);
}

std::string Msdp::DefaultContext::Peers::Peer::SaFilters::SaFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sa-filter" <<"[list='" <<list <<"']" <<"[filter-type='" <<filter_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Msdp::DefaultContext::Peers::Peer::SaFilters::SaFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());
    if (filter_type.is_set || is_set(filter_type.yfilter)) leaf_name_data.push_back(filter_type.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Msdp::DefaultContext::Peers::Peer::SaFilters::SaFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Msdp::DefaultContext::Peers::Peer::SaFilters::SaFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Msdp::DefaultContext::Peers::Peer::SaFilters::SaFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filter-type")
    {
        filter_type = value;
        filter_type.value_namespace = name_space;
        filter_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Msdp::DefaultContext::Peers::Peer::SaFilters::SaFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
    if(value_path == "filter-type")
    {
        filter_type.yfilter = yfilter;
    }
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
}

bool Msdp::DefaultContext::Peers::Peer::SaFilters::SaFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list" || name == "filter-type" || name == "access-list-name")
        return true;
    return false;
}

Msdp::DefaultContext::SaFilters::SaFilters()
{

    yang_name = "sa-filters"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false;
}

Msdp::DefaultContext::SaFilters::~SaFilters()
{
}

bool Msdp::DefaultContext::SaFilters::has_data() const
{
    for (std::size_t index=0; index<sa_filter.size(); index++)
    {
        if(sa_filter[index]->has_data())
            return true;
    }
    return false;
}

bool Msdp::DefaultContext::SaFilters::has_operation() const
{
    for (std::size_t index=0; index<sa_filter.size(); index++)
    {
        if(sa_filter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Msdp::DefaultContext::SaFilters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-msdp-cfg:msdp/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Msdp::DefaultContext::SaFilters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sa-filters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Msdp::DefaultContext::SaFilters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Msdp::DefaultContext::SaFilters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sa-filter")
    {
        auto c = std::make_shared<Msdp::DefaultContext::SaFilters::SaFilter>();
        c->parent = this;
        sa_filter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Msdp::DefaultContext::SaFilters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : sa_filter)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Msdp::DefaultContext::SaFilters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Msdp::DefaultContext::SaFilters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Msdp::DefaultContext::SaFilters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sa-filter")
        return true;
    return false;
}

Msdp::DefaultContext::SaFilters::SaFilter::SaFilter()
    :
    list{YType::enumeration, "list"},
    filter_type{YType::enumeration, "filter-type"},
    access_list_name{YType::str, "access-list-name"}
{

    yang_name = "sa-filter"; yang_parent_name = "sa-filters"; is_top_level_class = false; has_list_ancestor = false;
}

Msdp::DefaultContext::SaFilters::SaFilter::~SaFilter()
{
}

bool Msdp::DefaultContext::SaFilters::SaFilter::has_data() const
{
    return list.is_set
	|| filter_type.is_set
	|| access_list_name.is_set;
}

bool Msdp::DefaultContext::SaFilters::SaFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(list.yfilter)
	|| ydk::is_set(filter_type.yfilter)
	|| ydk::is_set(access_list_name.yfilter);
}

std::string Msdp::DefaultContext::SaFilters::SaFilter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-msdp-cfg:msdp/default-context/sa-filters/" << get_segment_path();
    return path_buffer.str();
}

std::string Msdp::DefaultContext::SaFilters::SaFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sa-filter" <<"[list='" <<list <<"']" <<"[filter-type='" <<filter_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Msdp::DefaultContext::SaFilters::SaFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());
    if (filter_type.is_set || is_set(filter_type.yfilter)) leaf_name_data.push_back(filter_type.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Msdp::DefaultContext::SaFilters::SaFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Msdp::DefaultContext::SaFilters::SaFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Msdp::DefaultContext::SaFilters::SaFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filter-type")
    {
        filter_type = value;
        filter_type.value_namespace = name_space;
        filter_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Msdp::DefaultContext::SaFilters::SaFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
    if(value_path == "filter-type")
    {
        filter_type.yfilter = yfilter;
    }
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
}

bool Msdp::DefaultContext::SaFilters::SaFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list" || name == "filter-type" || name == "access-list-name")
        return true;
    return false;
}

const Enum::YLeaf MsdpFilterTypeVrf::incoming {1, "incoming"};
const Enum::YLeaf MsdpFilterTypeVrf::outgoing {2, "outgoing"};

const Enum::YLeaf MsdpListTypeVrf::list {3, "list"};
const Enum::YLeaf MsdpListTypeVrf::rp_list {4, "rp-list"};


}
}

