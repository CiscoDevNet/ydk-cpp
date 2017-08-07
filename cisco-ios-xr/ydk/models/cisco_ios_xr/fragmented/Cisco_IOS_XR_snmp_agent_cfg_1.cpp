
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_snmp_agent_cfg_1.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_snmp_agent_cfg {

Mib::MplsTeMib::MplsTeMib()
    :
    cache_garbage_collect_timer{YType::uint32, "cache-garbage-collect-timer"},
    cache_timer{YType::uint32, "cache-timer"}
{
    yang_name = "mpls-te-mib"; yang_parent_name = "mib";
}

Mib::MplsTeMib::~MplsTeMib()
{
}

bool Mib::MplsTeMib::has_data() const
{
    return cache_garbage_collect_timer.is_set
	|| cache_timer.is_set;
}

bool Mib::MplsTeMib::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cache_garbage_collect_timer.yfilter)
	|| ydk::is_set(cache_timer.yfilter);
}

std::string Mib::MplsTeMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te-mib";

    return path_buffer.str();

}

const EntityPath Mib::MplsTeMib::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_garbage_collect_timer.is_set || is_set(cache_garbage_collect_timer.yfilter)) leaf_name_data.push_back(cache_garbage_collect_timer.get_name_leafdata());
    if (cache_timer.is_set || is_set(cache_timer.yfilter)) leaf_name_data.push_back(cache_timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mib::MplsTeMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::MplsTeMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mib::MplsTeMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cache-garbage-collect-timer")
    {
        cache_garbage_collect_timer = value;
        cache_garbage_collect_timer.value_namespace = name_space;
        cache_garbage_collect_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache-timer")
    {
        cache_timer = value;
        cache_timer.value_namespace = name_space;
        cache_timer.value_namespace_prefix = name_space_prefix;
    }
}

void Mib::MplsTeMib::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cache-garbage-collect-timer")
    {
        cache_garbage_collect_timer.yfilter = yfilter;
    }
    if(value_path == "cache-timer")
    {
        cache_timer.yfilter = yfilter;
    }
}

bool Mib::MplsTeMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache-garbage-collect-timer" || name == "cache-timer")
        return true;
    return false;
}

Mib::MplsP2MpMib::MplsP2MpMib()
    :
    cache_timer{YType::uint32, "cache-timer"}
{
    yang_name = "mpls-p2mp-mib"; yang_parent_name = "mib";
}

Mib::MplsP2MpMib::~MplsP2MpMib()
{
}

bool Mib::MplsP2MpMib::has_data() const
{
    return cache_timer.is_set;
}

bool Mib::MplsP2MpMib::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cache_timer.yfilter);
}

std::string Mib::MplsP2MpMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-p2mp-mib";

    return path_buffer.str();

}

const EntityPath Mib::MplsP2MpMib::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_timer.is_set || is_set(cache_timer.yfilter)) leaf_name_data.push_back(cache_timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mib::MplsP2MpMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::MplsP2MpMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mib::MplsP2MpMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cache-timer")
    {
        cache_timer = value;
        cache_timer.value_namespace = name_space;
        cache_timer.value_namespace_prefix = name_space_prefix;
    }
}

void Mib::MplsP2MpMib::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cache-timer")
    {
        cache_timer.yfilter = yfilter;
    }
}

bool Mib::MplsP2MpMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache-timer")
        return true;
    return false;
}

Mib::MplsTeExtStdMib::MplsTeExtStdMib()
    :
    cache_timer{YType::uint32, "cache-timer"}
{
    yang_name = "mpls-te-ext-std-mib"; yang_parent_name = "mib";
}

Mib::MplsTeExtStdMib::~MplsTeExtStdMib()
{
}

bool Mib::MplsTeExtStdMib::has_data() const
{
    return cache_timer.is_set;
}

bool Mib::MplsTeExtStdMib::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cache_timer.yfilter);
}

std::string Mib::MplsTeExtStdMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te-ext-std-mib";

    return path_buffer.str();

}

const EntityPath Mib::MplsTeExtStdMib::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_timer.is_set || is_set(cache_timer.yfilter)) leaf_name_data.push_back(cache_timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mib::MplsTeExtStdMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::MplsTeExtStdMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mib::MplsTeExtStdMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cache-timer")
    {
        cache_timer = value;
        cache_timer.value_namespace = name_space;
        cache_timer.value_namespace_prefix = name_space_prefix;
    }
}

void Mib::MplsTeExtStdMib::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cache-timer")
    {
        cache_timer.yfilter = yfilter;
    }
}

bool Mib::MplsTeExtStdMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache-timer")
        return true;
    return false;
}

Mib::MplsTeExtMib::MplsTeExtMib()
    :
    cache_timer{YType::uint32, "cache-timer"}
{
    yang_name = "mpls-te-ext-mib"; yang_parent_name = "mib";
}

Mib::MplsTeExtMib::~MplsTeExtMib()
{
}

bool Mib::MplsTeExtMib::has_data() const
{
    return cache_timer.is_set;
}

bool Mib::MplsTeExtMib::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cache_timer.yfilter);
}

std::string Mib::MplsTeExtMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te-ext-mib";

    return path_buffer.str();

}

const EntityPath Mib::MplsTeExtMib::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_timer.is_set || is_set(cache_timer.yfilter)) leaf_name_data.push_back(cache_timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mib::MplsTeExtMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::MplsTeExtMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mib::MplsTeExtMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cache-timer")
    {
        cache_timer = value;
        cache_timer.value_namespace = name_space;
        cache_timer.value_namespace_prefix = name_space_prefix;
    }
}

void Mib::MplsTeExtMib::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cache-timer")
    {
        cache_timer.yfilter = yfilter;
    }
}

bool Mib::MplsTeExtMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache-timer")
        return true;
    return false;
}

Mib::MplsFrrMib::MplsFrrMib()
    :
    cache_timer{YType::uint32, "cache-timer"}
{
    yang_name = "mpls-frr-mib"; yang_parent_name = "mib";
}

Mib::MplsFrrMib::~MplsFrrMib()
{
}

bool Mib::MplsFrrMib::has_data() const
{
    return cache_timer.is_set;
}

bool Mib::MplsFrrMib::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cache_timer.yfilter);
}

std::string Mib::MplsFrrMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-frr-mib";

    return path_buffer.str();

}

const EntityPath Mib::MplsFrrMib::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_timer.is_set || is_set(cache_timer.yfilter)) leaf_name_data.push_back(cache_timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mib::MplsFrrMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::MplsFrrMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mib::MplsFrrMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cache-timer")
    {
        cache_timer = value;
        cache_timer.value_namespace = name_space;
        cache_timer.value_namespace_prefix = name_space_prefix;
    }
}

void Mib::MplsFrrMib::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cache-timer")
    {
        cache_timer.yfilter = yfilter;
    }
}

bool Mib::MplsFrrMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache-timer")
        return true;
    return false;
}

Mib::CbQosmib::CbQosmib()
    :
    member_interface_stats{YType::empty, "member-interface-stats"},
    persist{YType::empty, "persist"}
    	,
    cache(std::make_shared<Mib::CbQosmib::Cache>())
{
    cache->parent = this;

    yang_name = "cb-qosmib"; yang_parent_name = "mib";
}

Mib::CbQosmib::~CbQosmib()
{
}

bool Mib::CbQosmib::has_data() const
{
    return member_interface_stats.is_set
	|| persist.is_set
	|| (cache !=  nullptr && cache->has_data());
}

bool Mib::CbQosmib::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_interface_stats.yfilter)
	|| ydk::is_set(persist.yfilter)
	|| (cache !=  nullptr && cache->has_operation());
}

std::string Mib::CbQosmib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-qos-mibs-cfg:cb-qosmib";

    return path_buffer.str();

}

const EntityPath Mib::CbQosmib::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_interface_stats.is_set || is_set(member_interface_stats.yfilter)) leaf_name_data.push_back(member_interface_stats.get_name_leafdata());
    if (persist.is_set || is_set(persist.yfilter)) leaf_name_data.push_back(persist.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mib::CbQosmib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cache")
    {
        if(cache == nullptr)
        {
            cache = std::make_shared<Mib::CbQosmib::Cache>();
        }
        return cache;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::CbQosmib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cache != nullptr)
    {
        children["cache"] = cache;
    }

    return children;
}

void Mib::CbQosmib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-interface-stats")
    {
        member_interface_stats = value;
        member_interface_stats.value_namespace = name_space;
        member_interface_stats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "persist")
    {
        persist = value;
        persist.value_namespace = name_space;
        persist.value_namespace_prefix = name_space_prefix;
    }
}

void Mib::CbQosmib::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-interface-stats")
    {
        member_interface_stats.yfilter = yfilter;
    }
    if(value_path == "persist")
    {
        persist.yfilter = yfilter;
    }
}

bool Mib::CbQosmib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache" || name == "member-interface-stats" || name == "persist")
        return true;
    return false;
}

Mib::CbQosmib::Cache::Cache()
    :
    enable{YType::empty, "enable"},
    refresh_time{YType::uint32, "refresh-time"},
    service_policy_count{YType::uint32, "service-policy-count"}
{
    yang_name = "cache"; yang_parent_name = "cb-qosmib";
}

Mib::CbQosmib::Cache::~Cache()
{
}

bool Mib::CbQosmib::Cache::has_data() const
{
    return enable.is_set
	|| refresh_time.is_set
	|| service_policy_count.is_set;
}

bool Mib::CbQosmib::Cache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(refresh_time.yfilter)
	|| ydk::is_set(service_policy_count.yfilter);
}

std::string Mib::CbQosmib::Cache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cache";

    return path_buffer.str();

}

const EntityPath Mib::CbQosmib::Cache::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-qos-mibs-cfg:cb-qosmib/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (refresh_time.is_set || is_set(refresh_time.yfilter)) leaf_name_data.push_back(refresh_time.get_name_leafdata());
    if (service_policy_count.is_set || is_set(service_policy_count.yfilter)) leaf_name_data.push_back(service_policy_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mib::CbQosmib::Cache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::CbQosmib::Cache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mib::CbQosmib::Cache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refresh-time")
    {
        refresh_time = value;
        refresh_time.value_namespace = name_space;
        refresh_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-policy-count")
    {
        service_policy_count = value;
        service_policy_count.value_namespace = name_space;
        service_policy_count.value_namespace_prefix = name_space_prefix;
    }
}

void Mib::CbQosmib::Cache::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "refresh-time")
    {
        refresh_time.yfilter = yfilter;
    }
    if(value_path == "service-policy-count")
    {
        service_policy_count.yfilter = yfilter;
    }
}

bool Mib::CbQosmib::Cache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "refresh-time" || name == "service-policy-count")
        return true;
    return false;
}

Mib::EntityMib::EntityMib()
    :
    entity_index_persistence{YType::empty, "entity-index-persistence"}
{
    yang_name = "entity-mib"; yang_parent_name = "mib";
}

Mib::EntityMib::~EntityMib()
{
}

bool Mib::EntityMib::has_data() const
{
    return entity_index_persistence.is_set;
}

bool Mib::EntityMib::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entity_index_persistence.yfilter);
}

std::string Mib::EntityMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-entitymib-cfg:entity-mib";

    return path_buffer.str();

}

const EntityPath Mib::EntityMib::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entity_index_persistence.is_set || is_set(entity_index_persistence.yfilter)) leaf_name_data.push_back(entity_index_persistence.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mib::EntityMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::EntityMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mib::EntityMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entity-index-persistence")
    {
        entity_index_persistence = value;
        entity_index_persistence.value_namespace = name_space;
        entity_index_persistence.value_namespace_prefix = name_space_prefix;
    }
}

void Mib::EntityMib::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entity-index-persistence")
    {
        entity_index_persistence.yfilter = yfilter;
    }
}

bool Mib::EntityMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entity-index-persistence")
        return true;
    return false;
}

Mib::InterfaceMib::InterfaceMib()
    :
    interface_alias_long{YType::empty, "interface-alias-long"},
    interface_index_persistence{YType::empty, "interface-index-persistence"},
    internal_cache{YType::uint32, "internal-cache"},
    ip_subscriber{YType::empty, "ip-subscriber"},
    statistics_cache{YType::empty, "statistics-cache"}
    	,
    interfaces(std::make_shared<Mib::InterfaceMib::Interfaces>())
	,notification(std::make_shared<Mib::InterfaceMib::Notification>())
	,subsets(std::make_shared<Mib::InterfaceMib::Subsets>())
{
    interfaces->parent = this;

    notification->parent = this;

    subsets->parent = this;

    yang_name = "interface-mib"; yang_parent_name = "mib";
}

Mib::InterfaceMib::~InterfaceMib()
{
}

bool Mib::InterfaceMib::has_data() const
{
    return interface_alias_long.is_set
	|| interface_index_persistence.is_set
	|| internal_cache.is_set
	|| ip_subscriber.is_set
	|| statistics_cache.is_set
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (notification !=  nullptr && notification->has_data())
	|| (subsets !=  nullptr && subsets->has_data());
}

bool Mib::InterfaceMib::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_alias_long.yfilter)
	|| ydk::is_set(interface_index_persistence.yfilter)
	|| ydk::is_set(internal_cache.yfilter)
	|| ydk::is_set(ip_subscriber.yfilter)
	|| ydk::is_set(statistics_cache.yfilter)
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (notification !=  nullptr && notification->has_operation())
	|| (subsets !=  nullptr && subsets->has_operation());
}

std::string Mib::InterfaceMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-ifmib-cfg:interface-mib";

    return path_buffer.str();

}

const EntityPath Mib::InterfaceMib::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_alias_long.is_set || is_set(interface_alias_long.yfilter)) leaf_name_data.push_back(interface_alias_long.get_name_leafdata());
    if (interface_index_persistence.is_set || is_set(interface_index_persistence.yfilter)) leaf_name_data.push_back(interface_index_persistence.get_name_leafdata());
    if (internal_cache.is_set || is_set(internal_cache.yfilter)) leaf_name_data.push_back(internal_cache.get_name_leafdata());
    if (ip_subscriber.is_set || is_set(ip_subscriber.yfilter)) leaf_name_data.push_back(ip_subscriber.get_name_leafdata());
    if (statistics_cache.is_set || is_set(statistics_cache.yfilter)) leaf_name_data.push_back(statistics_cache.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mib::InterfaceMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Mib::InterfaceMib::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "notification")
    {
        if(notification == nullptr)
        {
            notification = std::make_shared<Mib::InterfaceMib::Notification>();
        }
        return notification;
    }

    if(child_yang_name == "subsets")
    {
        if(subsets == nullptr)
        {
            subsets = std::make_shared<Mib::InterfaceMib::Subsets>();
        }
        return subsets;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::InterfaceMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(notification != nullptr)
    {
        children["notification"] = notification;
    }

    if(subsets != nullptr)
    {
        children["subsets"] = subsets;
    }

    return children;
}

void Mib::InterfaceMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-alias-long")
    {
        interface_alias_long = value;
        interface_alias_long.value_namespace = name_space;
        interface_alias_long.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-index-persistence")
    {
        interface_index_persistence = value;
        interface_index_persistence.value_namespace = name_space;
        interface_index_persistence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-cache")
    {
        internal_cache = value;
        internal_cache.value_namespace = name_space;
        internal_cache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-subscriber")
    {
        ip_subscriber = value;
        ip_subscriber.value_namespace = name_space;
        ip_subscriber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statistics-cache")
    {
        statistics_cache = value;
        statistics_cache.value_namespace = name_space;
        statistics_cache.value_namespace_prefix = name_space_prefix;
    }
}

void Mib::InterfaceMib::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-alias-long")
    {
        interface_alias_long.yfilter = yfilter;
    }
    if(value_path == "interface-index-persistence")
    {
        interface_index_persistence.yfilter = yfilter;
    }
    if(value_path == "internal-cache")
    {
        internal_cache.yfilter = yfilter;
    }
    if(value_path == "ip-subscriber")
    {
        ip_subscriber.yfilter = yfilter;
    }
    if(value_path == "statistics-cache")
    {
        statistics_cache.yfilter = yfilter;
    }
}

bool Mib::InterfaceMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces" || name == "notification" || name == "subsets" || name == "interface-alias-long" || name == "interface-index-persistence" || name == "internal-cache" || name == "ip-subscriber" || name == "statistics-cache")
        return true;
    return false;
}

Mib::InterfaceMib::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "interface-mib";
}

Mib::InterfaceMib::Interfaces::~Interfaces()
{
}

bool Mib::InterfaceMib::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Mib::InterfaceMib::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mib::InterfaceMib::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

const EntityPath Mib::InterfaceMib::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-snmp-ifmib-cfg:interface-mib/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mib::InterfaceMib::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mib::InterfaceMib::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::InterfaceMib::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mib::InterfaceMib::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mib::InterfaceMib::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mib::InterfaceMib::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Mib::InterfaceMib::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    index_persistence{YType::boolean, "index-persistence"},
    link_up_down{YType::boolean, "link-up-down"}
{
    yang_name = "interface"; yang_parent_name = "interfaces";
}

Mib::InterfaceMib::Interfaces::Interface::~Interface()
{
}

bool Mib::InterfaceMib::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| index_persistence.is_set
	|| link_up_down.is_set;
}

bool Mib::InterfaceMib::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(index_persistence.yfilter)
	|| ydk::is_set(link_up_down.yfilter);
}

std::string Mib::InterfaceMib::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Mib::InterfaceMib::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-snmp-ifmib-cfg:interface-mib/interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (index_persistence.is_set || is_set(index_persistence.yfilter)) leaf_name_data.push_back(index_persistence.get_name_leafdata());
    if (link_up_down.is_set || is_set(link_up_down.yfilter)) leaf_name_data.push_back(link_up_down.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mib::InterfaceMib::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::InterfaceMib::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mib::InterfaceMib::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index-persistence")
    {
        index_persistence = value;
        index_persistence.value_namespace = name_space;
        index_persistence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-up-down")
    {
        link_up_down = value;
        link_up_down.value_namespace = name_space;
        link_up_down.value_namespace_prefix = name_space_prefix;
    }
}

void Mib::InterfaceMib::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "index-persistence")
    {
        index_persistence.yfilter = yfilter;
    }
    if(value_path == "link-up-down")
    {
        link_up_down.yfilter = yfilter;
    }
}

bool Mib::InterfaceMib::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "index-persistence" || name == "link-up-down")
        return true;
    return false;
}

Mib::InterfaceMib::Notification::Notification()
    :
    link_ietf{YType::empty, "link-ietf"}
{
    yang_name = "notification"; yang_parent_name = "interface-mib";
}

Mib::InterfaceMib::Notification::~Notification()
{
}

bool Mib::InterfaceMib::Notification::has_data() const
{
    return link_ietf.is_set;
}

bool Mib::InterfaceMib::Notification::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_ietf.yfilter);
}

std::string Mib::InterfaceMib::Notification::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notification";

    return path_buffer.str();

}

const EntityPath Mib::InterfaceMib::Notification::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-snmp-ifmib-cfg:interface-mib/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_ietf.is_set || is_set(link_ietf.yfilter)) leaf_name_data.push_back(link_ietf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mib::InterfaceMib::Notification::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::InterfaceMib::Notification::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mib::InterfaceMib::Notification::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-ietf")
    {
        link_ietf = value;
        link_ietf.value_namespace = name_space;
        link_ietf.value_namespace_prefix = name_space_prefix;
    }
}

void Mib::InterfaceMib::Notification::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-ietf")
    {
        link_ietf.yfilter = yfilter;
    }
}

bool Mib::InterfaceMib::Notification::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-ietf")
        return true;
    return false;
}

Mib::InterfaceMib::Subsets::Subsets()
{
    yang_name = "subsets"; yang_parent_name = "interface-mib";
}

Mib::InterfaceMib::Subsets::~Subsets()
{
}

bool Mib::InterfaceMib::Subsets::has_data() const
{
    for (std::size_t index=0; index<subset.size(); index++)
    {
        if(subset[index]->has_data())
            return true;
    }
    return false;
}

bool Mib::InterfaceMib::Subsets::has_operation() const
{
    for (std::size_t index=0; index<subset.size(); index++)
    {
        if(subset[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mib::InterfaceMib::Subsets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subsets";

    return path_buffer.str();

}

const EntityPath Mib::InterfaceMib::Subsets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-snmp-ifmib-cfg:interface-mib/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mib::InterfaceMib::Subsets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subset")
    {
        for(auto const & c : subset)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mib::InterfaceMib::Subsets::Subset>();
        c->parent = this;
        subset.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::InterfaceMib::Subsets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : subset)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mib::InterfaceMib::Subsets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mib::InterfaceMib::Subsets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mib::InterfaceMib::Subsets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subset")
        return true;
    return false;
}

Mib::InterfaceMib::Subsets::Subset::Subset()
    :
    subset_id{YType::uint32, "subset-id"}
    	,
    link_up_down(std::make_shared<Mib::InterfaceMib::Subsets::Subset::LinkUpDown>())
{
    link_up_down->parent = this;

    yang_name = "subset"; yang_parent_name = "subsets";
}

Mib::InterfaceMib::Subsets::Subset::~Subset()
{
}

bool Mib::InterfaceMib::Subsets::Subset::has_data() const
{
    return subset_id.is_set
	|| (link_up_down !=  nullptr && link_up_down->has_data());
}

bool Mib::InterfaceMib::Subsets::Subset::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subset_id.yfilter)
	|| (link_up_down !=  nullptr && link_up_down->has_operation());
}

std::string Mib::InterfaceMib::Subsets::Subset::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subset" <<"[subset-id='" <<subset_id <<"']";

    return path_buffer.str();

}

const EntityPath Mib::InterfaceMib::Subsets::Subset::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-snmp-ifmib-cfg:interface-mib/subsets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subset_id.is_set || is_set(subset_id.yfilter)) leaf_name_data.push_back(subset_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mib::InterfaceMib::Subsets::Subset::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-up-down")
    {
        if(link_up_down == nullptr)
        {
            link_up_down = std::make_shared<Mib::InterfaceMib::Subsets::Subset::LinkUpDown>();
        }
        return link_up_down;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::InterfaceMib::Subsets::Subset::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(link_up_down != nullptr)
    {
        children["link-up-down"] = link_up_down;
    }

    return children;
}

void Mib::InterfaceMib::Subsets::Subset::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subset-id")
    {
        subset_id = value;
        subset_id.value_namespace = name_space;
        subset_id.value_namespace_prefix = name_space_prefix;
    }
}

void Mib::InterfaceMib::Subsets::Subset::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subset-id")
    {
        subset_id.yfilter = yfilter;
    }
}

bool Mib::InterfaceMib::Subsets::Subset::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-up-down" || name == "subset-id")
        return true;
    return false;
}

Mib::InterfaceMib::Subsets::Subset::LinkUpDown::LinkUpDown()
    :
    enable{YType::boolean, "enable"},
    regular_expression{YType::str, "regular-expression"}
{
    yang_name = "link-up-down"; yang_parent_name = "subset";
}

Mib::InterfaceMib::Subsets::Subset::LinkUpDown::~LinkUpDown()
{
}

bool Mib::InterfaceMib::Subsets::Subset::LinkUpDown::has_data() const
{
    return enable.is_set
	|| regular_expression.is_set;
}

bool Mib::InterfaceMib::Subsets::Subset::LinkUpDown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(regular_expression.yfilter);
}

std::string Mib::InterfaceMib::Subsets::Subset::LinkUpDown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-up-down";

    return path_buffer.str();

}

const EntityPath Mib::InterfaceMib::Subsets::Subset::LinkUpDown::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkUpDown' in Cisco_IOS_XR_snmp_agent_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (regular_expression.is_set || is_set(regular_expression.yfilter)) leaf_name_data.push_back(regular_expression.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mib::InterfaceMib::Subsets::Subset::LinkUpDown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::InterfaceMib::Subsets::Subset::LinkUpDown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mib::InterfaceMib::Subsets::Subset::LinkUpDown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regular-expression")
    {
        regular_expression = value;
        regular_expression.value_namespace = name_space;
        regular_expression.value_namespace_prefix = name_space_prefix;
    }
}

void Mib::InterfaceMib::Subsets::Subset::LinkUpDown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "regular-expression")
    {
        regular_expression.yfilter = yfilter;
    }
}

bool Mib::InterfaceMib::Subsets::Subset::LinkUpDown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "regular-expression")
        return true;
    return false;
}


}
}

