
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_msdp_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_msdp_cfg {

Msdp::Msdp()
    :
    global_max_sa{YType::uint32, "global-max-sa"},
    nsr_delay{YType::uint32, "nsr-delay"}
    	,
    default_context(nullptr) // presence node
	,vrfs(std::make_shared<Msdp::Vrfs>())
{
    vrfs->parent = this;

    yang_name = "msdp"; yang_parent_name = "Cisco-IOS-XR-ipv4-msdp-cfg";
}

Msdp::~Msdp()
{
}

bool Msdp::has_data() const
{
    return global_max_sa.is_set
	|| nsr_delay.is_set
	|| (default_context !=  nullptr && default_context->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool Msdp::has_operation() const
{
    return is_set(operation)
	|| is_set(global_max_sa.operation)
	|| is_set(nsr_delay.operation)
	|| (default_context !=  nullptr && default_context->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string Msdp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-msdp-cfg:msdp";

    return path_buffer.str();

}

const EntityPath Msdp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_max_sa.is_set || is_set(global_max_sa.operation)) leaf_name_data.push_back(global_max_sa.get_name_leafdata());
    if (nsr_delay.is_set || is_set(nsr_delay.operation)) leaf_name_data.push_back(nsr_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Msdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-context")
    {
        if(default_context == nullptr)
        {
            default_context = std::make_shared<Msdp::DefaultContext>();
        }
        return default_context;
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<Msdp::Vrfs>();
        }
        return vrfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Msdp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_context != nullptr)
    {
        children["default-context"] = default_context;
    }

    if(vrfs != nullptr)
    {
        children["vrfs"] = vrfs;
    }

    return children;
}

void Msdp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "global-max-sa")
    {
        global_max_sa = value;
    }
    if(value_path == "nsr-delay")
    {
        nsr_delay = value;
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

Msdp::Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "msdp";
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
    return is_set(operation);
}

std::string Msdp::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";

    return path_buffer.str();

}

const EntityPath Msdp::Vrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-msdp-cfg:msdp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Msdp::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Msdp::Vrfs::set_value(const std::string & value_path, std::string value)
{
}

Msdp::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"},
    connect_source{YType::str, "connect-source"},
    default_peer{YType::str, "default-peer"},
    max_peer_sa{YType::uint32, "max-peer-sa"},
    max_sa{YType::uint32, "max-sa"},
    originator_id{YType::str, "originator-id"},
    ttl_threshold{YType::uint32, "ttl-threshold"}
    	,
    cache_state(std::make_shared<Msdp::Vrfs::Vrf::CacheState>())
	,keep_alive(nullptr) // presence node
	,peers(std::make_shared<Msdp::Vrfs::Vrf::Peers>())
	,sa_filters(std::make_shared<Msdp::Vrfs::Vrf::SaFilters>())
{
    cache_state->parent = this;

    peers->parent = this;

    sa_filters->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrfs";
}

Msdp::Vrfs::Vrf::~Vrf()
{
}

bool Msdp::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| connect_source.is_set
	|| default_peer.is_set
	|| max_peer_sa.is_set
	|| max_sa.is_set
	|| originator_id.is_set
	|| ttl_threshold.is_set
	|| (cache_state !=  nullptr && cache_state->has_data())
	|| (keep_alive !=  nullptr && keep_alive->has_data())
	|| (peers !=  nullptr && peers->has_data())
	|| (sa_filters !=  nullptr && sa_filters->has_data());
}

bool Msdp::Vrfs::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| is_set(connect_source.operation)
	|| is_set(default_peer.operation)
	|| is_set(max_peer_sa.operation)
	|| is_set(max_sa.operation)
	|| is_set(originator_id.operation)
	|| is_set(ttl_threshold.operation)
	|| (cache_state !=  nullptr && cache_state->has_operation())
	|| (keep_alive !=  nullptr && keep_alive->has_operation())
	|| (peers !=  nullptr && peers->has_operation())
	|| (sa_filters !=  nullptr && sa_filters->has_operation());
}

std::string Msdp::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

const EntityPath Msdp::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-msdp-cfg:msdp/vrfs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (connect_source.is_set || is_set(connect_source.operation)) leaf_name_data.push_back(connect_source.get_name_leafdata());
    if (default_peer.is_set || is_set(default_peer.operation)) leaf_name_data.push_back(default_peer.get_name_leafdata());
    if (max_peer_sa.is_set || is_set(max_peer_sa.operation)) leaf_name_data.push_back(max_peer_sa.get_name_leafdata());
    if (max_sa.is_set || is_set(max_sa.operation)) leaf_name_data.push_back(max_sa.get_name_leafdata());
    if (originator_id.is_set || is_set(originator_id.operation)) leaf_name_data.push_back(originator_id.get_name_leafdata());
    if (ttl_threshold.is_set || is_set(ttl_threshold.operation)) leaf_name_data.push_back(ttl_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Msdp::Vrfs::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
    if(value_path == "connect-source")
    {
        connect_source = value;
    }
    if(value_path == "default-peer")
    {
        default_peer = value;
    }
    if(value_path == "max-peer-sa")
    {
        max_peer_sa = value;
    }
    if(value_path == "max-sa")
    {
        max_sa = value;
    }
    if(value_path == "originator-id")
    {
        originator_id = value;
    }
    if(value_path == "ttl-threshold")
    {
        ttl_threshold = value;
    }
}

Msdp::Vrfs::Vrf::CacheState::CacheState()
    :
    list{YType::str, "list"},
    rp_list{YType::str, "rp-list"},
    sa_holdtime{YType::uint32, "sa-holdtime"}
{
    yang_name = "cache-state"; yang_parent_name = "vrf";
}

Msdp::Vrfs::Vrf::CacheState::~CacheState()
{
}

bool Msdp::Vrfs::Vrf::CacheState::has_data() const
{
    return list.is_set
	|| rp_list.is_set
	|| sa_holdtime.is_set;
}

bool Msdp::Vrfs::Vrf::CacheState::has_operation() const
{
    return is_set(operation)
	|| is_set(list.operation)
	|| is_set(rp_list.operation)
	|| is_set(sa_holdtime.operation);
}

std::string Msdp::Vrfs::Vrf::CacheState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cache-state";

    return path_buffer.str();

}

const EntityPath Msdp::Vrfs::Vrf::CacheState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CacheState' in Cisco_IOS_XR_ipv4_msdp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.operation)) leaf_name_data.push_back(list.get_name_leafdata());
    if (rp_list.is_set || is_set(rp_list.operation)) leaf_name_data.push_back(rp_list.get_name_leafdata());
    if (sa_holdtime.is_set || is_set(sa_holdtime.operation)) leaf_name_data.push_back(sa_holdtime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Msdp::Vrfs::Vrf::CacheState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Msdp::Vrfs::Vrf::CacheState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Msdp::Vrfs::Vrf::CacheState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "list")
    {
        list = value;
    }
    if(value_path == "rp-list")
    {
        rp_list = value;
    }
    if(value_path == "sa-holdtime")
    {
        sa_holdtime = value;
    }
}

Msdp::Vrfs::Vrf::KeepAlive::KeepAlive()
    :
    keep_alive_period{YType::uint32, "keep-alive-period"},
    peer_timeout_period{YType::uint32, "peer-timeout-period"}
{
    yang_name = "keep-alive"; yang_parent_name = "vrf";
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
    return is_set(operation)
	|| is_set(keep_alive_period.operation)
	|| is_set(peer_timeout_period.operation);
}

std::string Msdp::Vrfs::Vrf::KeepAlive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keep-alive";

    return path_buffer.str();

}

const EntityPath Msdp::Vrfs::Vrf::KeepAlive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeepAlive' in Cisco_IOS_XR_ipv4_msdp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keep_alive_period.is_set || is_set(keep_alive_period.operation)) leaf_name_data.push_back(keep_alive_period.get_name_leafdata());
    if (peer_timeout_period.is_set || is_set(peer_timeout_period.operation)) leaf_name_data.push_back(peer_timeout_period.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Msdp::Vrfs::Vrf::KeepAlive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Msdp::Vrfs::Vrf::KeepAlive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Msdp::Vrfs::Vrf::KeepAlive::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "keep-alive-period")
    {
        keep_alive_period = value;
    }
    if(value_path == "peer-timeout-period")
    {
        peer_timeout_period = value;
    }
}

Msdp::Vrfs::Vrf::Peers::Peers()
{
    yang_name = "peers"; yang_parent_name = "vrf";
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
    return is_set(operation);
}

std::string Msdp::Vrfs::Vrf::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";

    return path_buffer.str();

}

const EntityPath Msdp::Vrfs::Vrf::Peers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peers' in Cisco_IOS_XR_ipv4_msdp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Msdp::Vrfs::Vrf::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
    for (auto const & c : peer)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Msdp::Vrfs::Vrf::Peers::set_value(const std::string & value_path, std::string value)
{
}

Msdp::Vrfs::Vrf::Peers::Peer::Peer()
    :
    peer_address{YType::str, "peer-address"},
    connect_source{YType::str, "connect-source"},
    description{YType::str, "description"},
    enable{YType::empty, "enable"},
    max_sa{YType::uint32, "max-sa"},
    mesh_group{YType::str, "mesh-group"},
    nsr_down{YType::empty, "nsr-down"},
    peer_password{YType::str, "peer-password"},
    shutdown{YType::empty, "shutdown"},
    ttl_threshold{YType::uint32, "ttl-threshold"}
    	,
    keep_alive(nullptr) // presence node
	,remote_as(nullptr) // presence node
	,sa_filters(std::make_shared<Msdp::Vrfs::Vrf::Peers::Peer::SaFilters>())
{
    sa_filters->parent = this;

    yang_name = "peer"; yang_parent_name = "peers";
}

Msdp::Vrfs::Vrf::Peers::Peer::~Peer()
{
}

bool Msdp::Vrfs::Vrf::Peers::Peer::has_data() const
{
    return peer_address.is_set
	|| connect_source.is_set
	|| description.is_set
	|| enable.is_set
	|| max_sa.is_set
	|| mesh_group.is_set
	|| nsr_down.is_set
	|| peer_password.is_set
	|| shutdown.is_set
	|| ttl_threshold.is_set
	|| (keep_alive !=  nullptr && keep_alive->has_data())
	|| (remote_as !=  nullptr && remote_as->has_data())
	|| (sa_filters !=  nullptr && sa_filters->has_data());
}

bool Msdp::Vrfs::Vrf::Peers::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(peer_address.operation)
	|| is_set(connect_source.operation)
	|| is_set(description.operation)
	|| is_set(enable.operation)
	|| is_set(max_sa.operation)
	|| is_set(mesh_group.operation)
	|| is_set(nsr_down.operation)
	|| is_set(peer_password.operation)
	|| is_set(shutdown.operation)
	|| is_set(ttl_threshold.operation)
	|| (keep_alive !=  nullptr && keep_alive->has_operation())
	|| (remote_as !=  nullptr && remote_as->has_operation())
	|| (sa_filters !=  nullptr && sa_filters->has_operation());
}

std::string Msdp::Vrfs::Vrf::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[peer-address='" <<peer_address <<"']";

    return path_buffer.str();

}

const EntityPath Msdp::Vrfs::Vrf::Peers::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peer' in Cisco_IOS_XR_ipv4_msdp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_address.is_set || is_set(peer_address.operation)) leaf_name_data.push_back(peer_address.get_name_leafdata());
    if (connect_source.is_set || is_set(connect_source.operation)) leaf_name_data.push_back(connect_source.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (max_sa.is_set || is_set(max_sa.operation)) leaf_name_data.push_back(max_sa.get_name_leafdata());
    if (mesh_group.is_set || is_set(mesh_group.operation)) leaf_name_data.push_back(mesh_group.get_name_leafdata());
    if (nsr_down.is_set || is_set(nsr_down.operation)) leaf_name_data.push_back(nsr_down.get_name_leafdata());
    if (peer_password.is_set || is_set(peer_password.operation)) leaf_name_data.push_back(peer_password.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (ttl_threshold.is_set || is_set(ttl_threshold.operation)) leaf_name_data.push_back(ttl_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Msdp::Vrfs::Vrf::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "keep-alive")
    {
        if(keep_alive == nullptr)
        {
            keep_alive = std::make_shared<Msdp::Vrfs::Vrf::Peers::Peer::KeepAlive>();
        }
        return keep_alive;
    }

    if(child_yang_name == "remote-as")
    {
        if(remote_as == nullptr)
        {
            remote_as = std::make_shared<Msdp::Vrfs::Vrf::Peers::Peer::RemoteAs>();
        }
        return remote_as;
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
    if(keep_alive != nullptr)
    {
        children["keep-alive"] = keep_alive;
    }

    if(remote_as != nullptr)
    {
        children["remote-as"] = remote_as;
    }

    if(sa_filters != nullptr)
    {
        children["sa-filters"] = sa_filters;
    }

    return children;
}

void Msdp::Vrfs::Vrf::Peers::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer-address")
    {
        peer_address = value;
    }
    if(value_path == "connect-source")
    {
        connect_source = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "max-sa")
    {
        max_sa = value;
    }
    if(value_path == "mesh-group")
    {
        mesh_group = value;
    }
    if(value_path == "nsr-down")
    {
        nsr_down = value;
    }
    if(value_path == "peer-password")
    {
        peer_password = value;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
    if(value_path == "ttl-threshold")
    {
        ttl_threshold = value;
    }
}

Msdp::Vrfs::Vrf::Peers::Peer::RemoteAs::RemoteAs()
    :
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"}
{
    yang_name = "remote-as"; yang_parent_name = "peer";
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
    return is_set(operation)
	|| is_set(as_xx.operation)
	|| is_set(as_yy.operation);
}

std::string Msdp::Vrfs::Vrf::Peers::Peer::RemoteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-as";

    return path_buffer.str();

}

const EntityPath Msdp::Vrfs::Vrf::Peers::Peer::RemoteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteAs' in Cisco_IOS_XR_ipv4_msdp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.operation)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.operation)) leaf_name_data.push_back(as_yy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Msdp::Vrfs::Vrf::Peers::Peer::RemoteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Msdp::Vrfs::Vrf::Peers::Peer::RemoteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Msdp::Vrfs::Vrf::Peers::Peer::RemoteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
    }
    if(value_path == "as-yy")
    {
        as_yy = value;
    }
}

Msdp::Vrfs::Vrf::Peers::Peer::KeepAlive::KeepAlive()
    :
    keep_alive_period{YType::uint32, "keep-alive-period"},
    peer_timeout_period{YType::uint32, "peer-timeout-period"}
{
    yang_name = "keep-alive"; yang_parent_name = "peer";
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
    return is_set(operation)
	|| is_set(keep_alive_period.operation)
	|| is_set(peer_timeout_period.operation);
}

std::string Msdp::Vrfs::Vrf::Peers::Peer::KeepAlive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keep-alive";

    return path_buffer.str();

}

const EntityPath Msdp::Vrfs::Vrf::Peers::Peer::KeepAlive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeepAlive' in Cisco_IOS_XR_ipv4_msdp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keep_alive_period.is_set || is_set(keep_alive_period.operation)) leaf_name_data.push_back(keep_alive_period.get_name_leafdata());
    if (peer_timeout_period.is_set || is_set(peer_timeout_period.operation)) leaf_name_data.push_back(peer_timeout_period.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Msdp::Vrfs::Vrf::Peers::Peer::KeepAlive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Msdp::Vrfs::Vrf::Peers::Peer::KeepAlive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Msdp::Vrfs::Vrf::Peers::Peer::KeepAlive::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "keep-alive-period")
    {
        keep_alive_period = value;
    }
    if(value_path == "peer-timeout-period")
    {
        peer_timeout_period = value;
    }
}

Msdp::Vrfs::Vrf::Peers::Peer::SaFilters::SaFilters()
{
    yang_name = "sa-filters"; yang_parent_name = "peer";
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
    return is_set(operation);
}

std::string Msdp::Vrfs::Vrf::Peers::Peer::SaFilters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sa-filters";

    return path_buffer.str();

}

const EntityPath Msdp::Vrfs::Vrf::Peers::Peer::SaFilters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SaFilters' in Cisco_IOS_XR_ipv4_msdp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Msdp::Vrfs::Vrf::Peers::Peer::SaFilters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sa-filter")
    {
        for(auto const & c : sa_filter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
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
    for (auto const & c : sa_filter)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Msdp::Vrfs::Vrf::Peers::Peer::SaFilters::set_value(const std::string & value_path, std::string value)
{
}

Msdp::Vrfs::Vrf::Peers::Peer::SaFilters::SaFilter::SaFilter()
    :
    list{YType::enumeration, "list"},
    filter_type{YType::enumeration, "filter-type"},
    access_list_name{YType::str, "access-list-name"}
{
    yang_name = "sa-filter"; yang_parent_name = "sa-filters";
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
    return is_set(operation)
	|| is_set(list.operation)
	|| is_set(filter_type.operation)
	|| is_set(access_list_name.operation);
}

std::string Msdp::Vrfs::Vrf::Peers::Peer::SaFilters::SaFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sa-filter" <<"[list='" <<list <<"']" <<"[filter-type='" <<filter_type <<"']";

    return path_buffer.str();

}

const EntityPath Msdp::Vrfs::Vrf::Peers::Peer::SaFilters::SaFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SaFilter' in Cisco_IOS_XR_ipv4_msdp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.operation)) leaf_name_data.push_back(list.get_name_leafdata());
    if (filter_type.is_set || is_set(filter_type.operation)) leaf_name_data.push_back(filter_type.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Msdp::Vrfs::Vrf::Peers::Peer::SaFilters::SaFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Msdp::Vrfs::Vrf::Peers::Peer::SaFilters::SaFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Msdp::Vrfs::Vrf::Peers::Peer::SaFilters::SaFilter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "list")
    {
        list = value;
    }
    if(value_path == "filter-type")
    {
        filter_type = value;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
}

Msdp::Vrfs::Vrf::SaFilters::SaFilters()
{
    yang_name = "sa-filters"; yang_parent_name = "vrf";
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
    return is_set(operation);
}

std::string Msdp::Vrfs::Vrf::SaFilters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sa-filters";

    return path_buffer.str();

}

const EntityPath Msdp::Vrfs::Vrf::SaFilters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SaFilters' in Cisco_IOS_XR_ipv4_msdp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Msdp::Vrfs::Vrf::SaFilters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sa-filter")
    {
        for(auto const & c : sa_filter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
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
    for (auto const & c : sa_filter)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Msdp::Vrfs::Vrf::SaFilters::set_value(const std::string & value_path, std::string value)
{
}

Msdp::Vrfs::Vrf::SaFilters::SaFilter::SaFilter()
    :
    list{YType::enumeration, "list"},
    filter_type{YType::enumeration, "filter-type"},
    access_list_name{YType::str, "access-list-name"}
{
    yang_name = "sa-filter"; yang_parent_name = "sa-filters";
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
    return is_set(operation)
	|| is_set(list.operation)
	|| is_set(filter_type.operation)
	|| is_set(access_list_name.operation);
}

std::string Msdp::Vrfs::Vrf::SaFilters::SaFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sa-filter" <<"[list='" <<list <<"']" <<"[filter-type='" <<filter_type <<"']";

    return path_buffer.str();

}

const EntityPath Msdp::Vrfs::Vrf::SaFilters::SaFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SaFilter' in Cisco_IOS_XR_ipv4_msdp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.operation)) leaf_name_data.push_back(list.get_name_leafdata());
    if (filter_type.is_set || is_set(filter_type.operation)) leaf_name_data.push_back(filter_type.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Msdp::Vrfs::Vrf::SaFilters::SaFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Msdp::Vrfs::Vrf::SaFilters::SaFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Msdp::Vrfs::Vrf::SaFilters::SaFilter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "list")
    {
        list = value;
    }
    if(value_path == "filter-type")
    {
        filter_type = value;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
}

Msdp::DefaultContext::DefaultContext()
    :
    connect_source{YType::str, "connect-source"},
    default_peer{YType::str, "default-peer"},
    max_peer_sa{YType::uint32, "max-peer-sa"},
    max_sa{YType::uint32, "max-sa"},
    originator_id{YType::str, "originator-id"},
    ttl_threshold{YType::uint32, "ttl-threshold"}
    	,
    cache_state(std::make_shared<Msdp::DefaultContext::CacheState>())
	,keep_alive(nullptr) // presence node
	,peers(std::make_shared<Msdp::DefaultContext::Peers>())
	,sa_filters(std::make_shared<Msdp::DefaultContext::SaFilters>())
{
    cache_state->parent = this;

    peers->parent = this;

    sa_filters->parent = this;

    yang_name = "default-context"; yang_parent_name = "msdp";
}

Msdp::DefaultContext::~DefaultContext()
{
}

bool Msdp::DefaultContext::has_data() const
{
    return connect_source.is_set
	|| default_peer.is_set
	|| max_peer_sa.is_set
	|| max_sa.is_set
	|| originator_id.is_set
	|| ttl_threshold.is_set
	|| (cache_state !=  nullptr && cache_state->has_data())
	|| (keep_alive !=  nullptr && keep_alive->has_data())
	|| (peers !=  nullptr && peers->has_data())
	|| (sa_filters !=  nullptr && sa_filters->has_data());
}

bool Msdp::DefaultContext::has_operation() const
{
    return is_set(operation)
	|| is_set(connect_source.operation)
	|| is_set(default_peer.operation)
	|| is_set(max_peer_sa.operation)
	|| is_set(max_sa.operation)
	|| is_set(originator_id.operation)
	|| is_set(ttl_threshold.operation)
	|| (cache_state !=  nullptr && cache_state->has_operation())
	|| (keep_alive !=  nullptr && keep_alive->has_operation())
	|| (peers !=  nullptr && peers->has_operation())
	|| (sa_filters !=  nullptr && sa_filters->has_operation());
}

std::string Msdp::DefaultContext::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-context";

    return path_buffer.str();

}

const EntityPath Msdp::DefaultContext::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-msdp-cfg:msdp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connect_source.is_set || is_set(connect_source.operation)) leaf_name_data.push_back(connect_source.get_name_leafdata());
    if (default_peer.is_set || is_set(default_peer.operation)) leaf_name_data.push_back(default_peer.get_name_leafdata());
    if (max_peer_sa.is_set || is_set(max_peer_sa.operation)) leaf_name_data.push_back(max_peer_sa.get_name_leafdata());
    if (max_sa.is_set || is_set(max_sa.operation)) leaf_name_data.push_back(max_sa.get_name_leafdata());
    if (originator_id.is_set || is_set(originator_id.operation)) leaf_name_data.push_back(originator_id.get_name_leafdata());
    if (ttl_threshold.is_set || is_set(ttl_threshold.operation)) leaf_name_data.push_back(ttl_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Msdp::DefaultContext::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "connect-source")
    {
        connect_source = value;
    }
    if(value_path == "default-peer")
    {
        default_peer = value;
    }
    if(value_path == "max-peer-sa")
    {
        max_peer_sa = value;
    }
    if(value_path == "max-sa")
    {
        max_sa = value;
    }
    if(value_path == "originator-id")
    {
        originator_id = value;
    }
    if(value_path == "ttl-threshold")
    {
        ttl_threshold = value;
    }
}

Msdp::DefaultContext::CacheState::CacheState()
    :
    list{YType::str, "list"},
    rp_list{YType::str, "rp-list"},
    sa_holdtime{YType::uint32, "sa-holdtime"}
{
    yang_name = "cache-state"; yang_parent_name = "default-context";
}

Msdp::DefaultContext::CacheState::~CacheState()
{
}

bool Msdp::DefaultContext::CacheState::has_data() const
{
    return list.is_set
	|| rp_list.is_set
	|| sa_holdtime.is_set;
}

bool Msdp::DefaultContext::CacheState::has_operation() const
{
    return is_set(operation)
	|| is_set(list.operation)
	|| is_set(rp_list.operation)
	|| is_set(sa_holdtime.operation);
}

std::string Msdp::DefaultContext::CacheState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cache-state";

    return path_buffer.str();

}

const EntityPath Msdp::DefaultContext::CacheState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-msdp-cfg:msdp/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.operation)) leaf_name_data.push_back(list.get_name_leafdata());
    if (rp_list.is_set || is_set(rp_list.operation)) leaf_name_data.push_back(rp_list.get_name_leafdata());
    if (sa_holdtime.is_set || is_set(sa_holdtime.operation)) leaf_name_data.push_back(sa_holdtime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Msdp::DefaultContext::CacheState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Msdp::DefaultContext::CacheState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Msdp::DefaultContext::CacheState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "list")
    {
        list = value;
    }
    if(value_path == "rp-list")
    {
        rp_list = value;
    }
    if(value_path == "sa-holdtime")
    {
        sa_holdtime = value;
    }
}

Msdp::DefaultContext::KeepAlive::KeepAlive()
    :
    keep_alive_period{YType::uint32, "keep-alive-period"},
    peer_timeout_period{YType::uint32, "peer-timeout-period"}
{
    yang_name = "keep-alive"; yang_parent_name = "default-context";
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
    return is_set(operation)
	|| is_set(keep_alive_period.operation)
	|| is_set(peer_timeout_period.operation);
}

std::string Msdp::DefaultContext::KeepAlive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keep-alive";

    return path_buffer.str();

}

const EntityPath Msdp::DefaultContext::KeepAlive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-msdp-cfg:msdp/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keep_alive_period.is_set || is_set(keep_alive_period.operation)) leaf_name_data.push_back(keep_alive_period.get_name_leafdata());
    if (peer_timeout_period.is_set || is_set(peer_timeout_period.operation)) leaf_name_data.push_back(peer_timeout_period.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Msdp::DefaultContext::KeepAlive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Msdp::DefaultContext::KeepAlive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Msdp::DefaultContext::KeepAlive::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "keep-alive-period")
    {
        keep_alive_period = value;
    }
    if(value_path == "peer-timeout-period")
    {
        peer_timeout_period = value;
    }
}

Msdp::DefaultContext::Peers::Peers()
{
    yang_name = "peers"; yang_parent_name = "default-context";
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
    return is_set(operation);
}

std::string Msdp::DefaultContext::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";

    return path_buffer.str();

}

const EntityPath Msdp::DefaultContext::Peers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-msdp-cfg:msdp/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Msdp::DefaultContext::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
    for (auto const & c : peer)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Msdp::DefaultContext::Peers::set_value(const std::string & value_path, std::string value)
{
}

Msdp::DefaultContext::Peers::Peer::Peer()
    :
    peer_address{YType::str, "peer-address"},
    connect_source{YType::str, "connect-source"},
    description{YType::str, "description"},
    enable{YType::empty, "enable"},
    max_sa{YType::uint32, "max-sa"},
    mesh_group{YType::str, "mesh-group"},
    nsr_down{YType::empty, "nsr-down"},
    peer_password{YType::str, "peer-password"},
    shutdown{YType::empty, "shutdown"},
    ttl_threshold{YType::uint32, "ttl-threshold"}
    	,
    keep_alive(nullptr) // presence node
	,remote_as(nullptr) // presence node
	,sa_filters(std::make_shared<Msdp::DefaultContext::Peers::Peer::SaFilters>())
{
    sa_filters->parent = this;

    yang_name = "peer"; yang_parent_name = "peers";
}

Msdp::DefaultContext::Peers::Peer::~Peer()
{
}

bool Msdp::DefaultContext::Peers::Peer::has_data() const
{
    return peer_address.is_set
	|| connect_source.is_set
	|| description.is_set
	|| enable.is_set
	|| max_sa.is_set
	|| mesh_group.is_set
	|| nsr_down.is_set
	|| peer_password.is_set
	|| shutdown.is_set
	|| ttl_threshold.is_set
	|| (keep_alive !=  nullptr && keep_alive->has_data())
	|| (remote_as !=  nullptr && remote_as->has_data())
	|| (sa_filters !=  nullptr && sa_filters->has_data());
}

bool Msdp::DefaultContext::Peers::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(peer_address.operation)
	|| is_set(connect_source.operation)
	|| is_set(description.operation)
	|| is_set(enable.operation)
	|| is_set(max_sa.operation)
	|| is_set(mesh_group.operation)
	|| is_set(nsr_down.operation)
	|| is_set(peer_password.operation)
	|| is_set(shutdown.operation)
	|| is_set(ttl_threshold.operation)
	|| (keep_alive !=  nullptr && keep_alive->has_operation())
	|| (remote_as !=  nullptr && remote_as->has_operation())
	|| (sa_filters !=  nullptr && sa_filters->has_operation());
}

std::string Msdp::DefaultContext::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[peer-address='" <<peer_address <<"']";

    return path_buffer.str();

}

const EntityPath Msdp::DefaultContext::Peers::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-msdp-cfg:msdp/default-context/peers/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_address.is_set || is_set(peer_address.operation)) leaf_name_data.push_back(peer_address.get_name_leafdata());
    if (connect_source.is_set || is_set(connect_source.operation)) leaf_name_data.push_back(connect_source.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (max_sa.is_set || is_set(max_sa.operation)) leaf_name_data.push_back(max_sa.get_name_leafdata());
    if (mesh_group.is_set || is_set(mesh_group.operation)) leaf_name_data.push_back(mesh_group.get_name_leafdata());
    if (nsr_down.is_set || is_set(nsr_down.operation)) leaf_name_data.push_back(nsr_down.get_name_leafdata());
    if (peer_password.is_set || is_set(peer_password.operation)) leaf_name_data.push_back(peer_password.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (ttl_threshold.is_set || is_set(ttl_threshold.operation)) leaf_name_data.push_back(ttl_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Msdp::DefaultContext::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "keep-alive")
    {
        if(keep_alive == nullptr)
        {
            keep_alive = std::make_shared<Msdp::DefaultContext::Peers::Peer::KeepAlive>();
        }
        return keep_alive;
    }

    if(child_yang_name == "remote-as")
    {
        if(remote_as == nullptr)
        {
            remote_as = std::make_shared<Msdp::DefaultContext::Peers::Peer::RemoteAs>();
        }
        return remote_as;
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
    if(keep_alive != nullptr)
    {
        children["keep-alive"] = keep_alive;
    }

    if(remote_as != nullptr)
    {
        children["remote-as"] = remote_as;
    }

    if(sa_filters != nullptr)
    {
        children["sa-filters"] = sa_filters;
    }

    return children;
}

void Msdp::DefaultContext::Peers::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer-address")
    {
        peer_address = value;
    }
    if(value_path == "connect-source")
    {
        connect_source = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "max-sa")
    {
        max_sa = value;
    }
    if(value_path == "mesh-group")
    {
        mesh_group = value;
    }
    if(value_path == "nsr-down")
    {
        nsr_down = value;
    }
    if(value_path == "peer-password")
    {
        peer_password = value;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
    if(value_path == "ttl-threshold")
    {
        ttl_threshold = value;
    }
}

Msdp::DefaultContext::Peers::Peer::RemoteAs::RemoteAs()
    :
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"}
{
    yang_name = "remote-as"; yang_parent_name = "peer";
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
    return is_set(operation)
	|| is_set(as_xx.operation)
	|| is_set(as_yy.operation);
}

std::string Msdp::DefaultContext::Peers::Peer::RemoteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-as";

    return path_buffer.str();

}

const EntityPath Msdp::DefaultContext::Peers::Peer::RemoteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteAs' in Cisco_IOS_XR_ipv4_msdp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.operation)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.operation)) leaf_name_data.push_back(as_yy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Msdp::DefaultContext::Peers::Peer::RemoteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Msdp::DefaultContext::Peers::Peer::RemoteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Msdp::DefaultContext::Peers::Peer::RemoteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
    }
    if(value_path == "as-yy")
    {
        as_yy = value;
    }
}

Msdp::DefaultContext::Peers::Peer::KeepAlive::KeepAlive()
    :
    keep_alive_period{YType::uint32, "keep-alive-period"},
    peer_timeout_period{YType::uint32, "peer-timeout-period"}
{
    yang_name = "keep-alive"; yang_parent_name = "peer";
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
    return is_set(operation)
	|| is_set(keep_alive_period.operation)
	|| is_set(peer_timeout_period.operation);
}

std::string Msdp::DefaultContext::Peers::Peer::KeepAlive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keep-alive";

    return path_buffer.str();

}

const EntityPath Msdp::DefaultContext::Peers::Peer::KeepAlive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeepAlive' in Cisco_IOS_XR_ipv4_msdp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keep_alive_period.is_set || is_set(keep_alive_period.operation)) leaf_name_data.push_back(keep_alive_period.get_name_leafdata());
    if (peer_timeout_period.is_set || is_set(peer_timeout_period.operation)) leaf_name_data.push_back(peer_timeout_period.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Msdp::DefaultContext::Peers::Peer::KeepAlive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Msdp::DefaultContext::Peers::Peer::KeepAlive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Msdp::DefaultContext::Peers::Peer::KeepAlive::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "keep-alive-period")
    {
        keep_alive_period = value;
    }
    if(value_path == "peer-timeout-period")
    {
        peer_timeout_period = value;
    }
}

Msdp::DefaultContext::Peers::Peer::SaFilters::SaFilters()
{
    yang_name = "sa-filters"; yang_parent_name = "peer";
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
    return is_set(operation);
}

std::string Msdp::DefaultContext::Peers::Peer::SaFilters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sa-filters";

    return path_buffer.str();

}

const EntityPath Msdp::DefaultContext::Peers::Peer::SaFilters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SaFilters' in Cisco_IOS_XR_ipv4_msdp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Msdp::DefaultContext::Peers::Peer::SaFilters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sa-filter")
    {
        for(auto const & c : sa_filter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
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
    for (auto const & c : sa_filter)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Msdp::DefaultContext::Peers::Peer::SaFilters::set_value(const std::string & value_path, std::string value)
{
}

Msdp::DefaultContext::Peers::Peer::SaFilters::SaFilter::SaFilter()
    :
    list{YType::enumeration, "list"},
    filter_type{YType::enumeration, "filter-type"},
    access_list_name{YType::str, "access-list-name"}
{
    yang_name = "sa-filter"; yang_parent_name = "sa-filters";
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
    return is_set(operation)
	|| is_set(list.operation)
	|| is_set(filter_type.operation)
	|| is_set(access_list_name.operation);
}

std::string Msdp::DefaultContext::Peers::Peer::SaFilters::SaFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sa-filter" <<"[list='" <<list <<"']" <<"[filter-type='" <<filter_type <<"']";

    return path_buffer.str();

}

const EntityPath Msdp::DefaultContext::Peers::Peer::SaFilters::SaFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SaFilter' in Cisco_IOS_XR_ipv4_msdp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.operation)) leaf_name_data.push_back(list.get_name_leafdata());
    if (filter_type.is_set || is_set(filter_type.operation)) leaf_name_data.push_back(filter_type.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Msdp::DefaultContext::Peers::Peer::SaFilters::SaFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Msdp::DefaultContext::Peers::Peer::SaFilters::SaFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Msdp::DefaultContext::Peers::Peer::SaFilters::SaFilter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "list")
    {
        list = value;
    }
    if(value_path == "filter-type")
    {
        filter_type = value;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
}

Msdp::DefaultContext::SaFilters::SaFilters()
{
    yang_name = "sa-filters"; yang_parent_name = "default-context";
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
    return is_set(operation);
}

std::string Msdp::DefaultContext::SaFilters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sa-filters";

    return path_buffer.str();

}

const EntityPath Msdp::DefaultContext::SaFilters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-msdp-cfg:msdp/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Msdp::DefaultContext::SaFilters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sa-filter")
    {
        for(auto const & c : sa_filter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
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
    for (auto const & c : sa_filter)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Msdp::DefaultContext::SaFilters::set_value(const std::string & value_path, std::string value)
{
}

Msdp::DefaultContext::SaFilters::SaFilter::SaFilter()
    :
    list{YType::enumeration, "list"},
    filter_type{YType::enumeration, "filter-type"},
    access_list_name{YType::str, "access-list-name"}
{
    yang_name = "sa-filter"; yang_parent_name = "sa-filters";
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
    return is_set(operation)
	|| is_set(list.operation)
	|| is_set(filter_type.operation)
	|| is_set(access_list_name.operation);
}

std::string Msdp::DefaultContext::SaFilters::SaFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sa-filter" <<"[list='" <<list <<"']" <<"[filter-type='" <<filter_type <<"']";

    return path_buffer.str();

}

const EntityPath Msdp::DefaultContext::SaFilters::SaFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-msdp-cfg:msdp/default-context/sa-filters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.operation)) leaf_name_data.push_back(list.get_name_leafdata());
    if (filter_type.is_set || is_set(filter_type.operation)) leaf_name_data.push_back(filter_type.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Msdp::DefaultContext::SaFilters::SaFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Msdp::DefaultContext::SaFilters::SaFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Msdp::DefaultContext::SaFilters::SaFilter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "list")
    {
        list = value;
    }
    if(value_path == "filter-type")
    {
        filter_type = value;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
}

const Enum::YLeaf MsdpListTypeVrfEnum::list {3, "list"};
const Enum::YLeaf MsdpListTypeVrfEnum::rp_list {4, "rp-list"};

const Enum::YLeaf MsdpFilterTypeVrfEnum::incoming {1, "incoming"};
const Enum::YLeaf MsdpFilterTypeVrfEnum::outgoing {2, "outgoing"};


}
}

