
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_snmp_agent_cfg_0.hpp"
#include "Cisco_IOS_XR_snmp_agent_cfg_1.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_snmp_agent_cfg {

Mib::Mib()
    :
    sensor_mib_cache{YType::empty, "Cisco-IOS-XR-snmp-ciscosensormib-cfg:sensor-mib-cache"}
    	,
    cb_qosmib(std::make_shared<Mib::CbQosmib>())
	,entity_mib(std::make_shared<Mib::EntityMib>())
	,interface_mib(std::make_shared<Mib::InterfaceMib>())
	,mpls_frr_mib(std::make_shared<Mib::MplsFrrMib>())
	,mpls_p2mp_mib(std::make_shared<Mib::MplsP2MpMib>())
	,mpls_te_ext_mib(std::make_shared<Mib::MplsTeExtMib>())
	,mpls_te_ext_std_mib(std::make_shared<Mib::MplsTeExtStdMib>())
	,mpls_te_mib(std::make_shared<Mib::MplsTeMib>())
	,subscriber(std::make_shared<Mib::Subscriber>())
{
    cb_qosmib->parent = this;
    entity_mib->parent = this;
    interface_mib->parent = this;
    mpls_frr_mib->parent = this;
    mpls_p2mp_mib->parent = this;
    mpls_te_ext_mib->parent = this;
    mpls_te_ext_std_mib->parent = this;
    mpls_te_mib->parent = this;
    subscriber->parent = this;

    yang_name = "mib"; yang_parent_name = "Cisco-IOS-XR-snmp-agent-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

Mib::~Mib()
{
}

bool Mib::has_data() const
{
    return sensor_mib_cache.is_set
	|| (cb_qosmib !=  nullptr && cb_qosmib->has_data())
	|| (entity_mib !=  nullptr && entity_mib->has_data())
	|| (interface_mib !=  nullptr && interface_mib->has_data())
	|| (mpls_frr_mib !=  nullptr && mpls_frr_mib->has_data())
	|| (mpls_p2mp_mib !=  nullptr && mpls_p2mp_mib->has_data())
	|| (mpls_te_ext_mib !=  nullptr && mpls_te_ext_mib->has_data())
	|| (mpls_te_ext_std_mib !=  nullptr && mpls_te_ext_std_mib->has_data())
	|| (mpls_te_mib !=  nullptr && mpls_te_mib->has_data())
	|| (subscriber !=  nullptr && subscriber->has_data());
}

bool Mib::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sensor_mib_cache.yfilter)
	|| (cb_qosmib !=  nullptr && cb_qosmib->has_operation())
	|| (entity_mib !=  nullptr && entity_mib->has_operation())
	|| (interface_mib !=  nullptr && interface_mib->has_operation())
	|| (mpls_frr_mib !=  nullptr && mpls_frr_mib->has_operation())
	|| (mpls_p2mp_mib !=  nullptr && mpls_p2mp_mib->has_operation())
	|| (mpls_te_ext_mib !=  nullptr && mpls_te_ext_mib->has_operation())
	|| (mpls_te_ext_std_mib !=  nullptr && mpls_te_ext_std_mib->has_operation())
	|| (mpls_te_mib !=  nullptr && mpls_te_mib->has_operation())
	|| (subscriber !=  nullptr && subscriber->has_operation());
}

std::string Mib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sensor_mib_cache.is_set || is_set(sensor_mib_cache.yfilter)) leaf_name_data.push_back(sensor_mib_cache.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cb-qosmib")
    {
        if(cb_qosmib == nullptr)
        {
            cb_qosmib = std::make_shared<Mib::CbQosmib>();
        }
        return cb_qosmib;
    }

    if(child_yang_name == "entity-mib")
    {
        if(entity_mib == nullptr)
        {
            entity_mib = std::make_shared<Mib::EntityMib>();
        }
        return entity_mib;
    }

    if(child_yang_name == "interface-mib")
    {
        if(interface_mib == nullptr)
        {
            interface_mib = std::make_shared<Mib::InterfaceMib>();
        }
        return interface_mib;
    }

    if(child_yang_name == "mpls-frr-mib")
    {
        if(mpls_frr_mib == nullptr)
        {
            mpls_frr_mib = std::make_shared<Mib::MplsFrrMib>();
        }
        return mpls_frr_mib;
    }

    if(child_yang_name == "mpls-p2mp-mib")
    {
        if(mpls_p2mp_mib == nullptr)
        {
            mpls_p2mp_mib = std::make_shared<Mib::MplsP2MpMib>();
        }
        return mpls_p2mp_mib;
    }

    if(child_yang_name == "mpls-te-ext-mib")
    {
        if(mpls_te_ext_mib == nullptr)
        {
            mpls_te_ext_mib = std::make_shared<Mib::MplsTeExtMib>();
        }
        return mpls_te_ext_mib;
    }

    if(child_yang_name == "mpls-te-ext-std-mib")
    {
        if(mpls_te_ext_std_mib == nullptr)
        {
            mpls_te_ext_std_mib = std::make_shared<Mib::MplsTeExtStdMib>();
        }
        return mpls_te_ext_std_mib;
    }

    if(child_yang_name == "mpls-te-mib")
    {
        if(mpls_te_mib == nullptr)
        {
            mpls_te_mib = std::make_shared<Mib::MplsTeMib>();
        }
        return mpls_te_mib;
    }

    if(child_yang_name == "subscriber")
    {
        if(subscriber == nullptr)
        {
            subscriber = std::make_shared<Mib::Subscriber>();
        }
        return subscriber;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cb_qosmib != nullptr)
    {
        children["cb-qosmib"] = cb_qosmib;
    }

    if(entity_mib != nullptr)
    {
        children["entity-mib"] = entity_mib;
    }

    if(interface_mib != nullptr)
    {
        children["interface-mib"] = interface_mib;
    }

    if(mpls_frr_mib != nullptr)
    {
        children["mpls-frr-mib"] = mpls_frr_mib;
    }

    if(mpls_p2mp_mib != nullptr)
    {
        children["mpls-p2mp-mib"] = mpls_p2mp_mib;
    }

    if(mpls_te_ext_mib != nullptr)
    {
        children["mpls-te-ext-mib"] = mpls_te_ext_mib;
    }

    if(mpls_te_ext_std_mib != nullptr)
    {
        children["mpls-te-ext-std-mib"] = mpls_te_ext_std_mib;
    }

    if(mpls_te_mib != nullptr)
    {
        children["mpls-te-mib"] = mpls_te_mib;
    }

    if(subscriber != nullptr)
    {
        children["subscriber"] = subscriber;
    }

    return children;
}

void Mib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sensor-mib-cache")
    {
        sensor_mib_cache = value;
        sensor_mib_cache.value_namespace = name_space;
        sensor_mib_cache.value_namespace_prefix = name_space_prefix;
    }
}

void Mib::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sensor-mib-cache")
    {
        sensor_mib_cache.yfilter = yfilter;
    }
}

std::shared_ptr<Entity> Mib::clone_ptr() const
{
    return std::make_shared<Mib>();
}

std::string Mib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Mib::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Mib::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Mib::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Mib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cb-qosmib" || name == "entity-mib" || name == "interface-mib" || name == "mpls-frr-mib" || name == "mpls-p2mp-mib" || name == "mpls-te-ext-mib" || name == "mpls-te-ext-std-mib" || name == "mpls-te-mib" || name == "subscriber" || name == "sensor-mib-cache")
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

    yang_name = "cb-qosmib"; yang_parent_name = "mib"; is_top_level_class = false; has_list_ancestor = false;
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

std::string Mib::CbQosmib::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::CbQosmib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-qos-mibs-cfg:cb-qosmib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::CbQosmib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_interface_stats.is_set || is_set(member_interface_stats.yfilter)) leaf_name_data.push_back(member_interface_stats.get_name_leafdata());
    if (persist.is_set || is_set(persist.yfilter)) leaf_name_data.push_back(persist.get_name_leafdata());

    return leaf_name_data;

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

    yang_name = "cache"; yang_parent_name = "cb-qosmib"; is_top_level_class = false; has_list_ancestor = false;
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

std::string Mib::CbQosmib::Cache::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-qos-mibs-cfg:cb-qosmib/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::CbQosmib::Cache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cache";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::CbQosmib::Cache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (refresh_time.is_set || is_set(refresh_time.yfilter)) leaf_name_data.push_back(refresh_time.get_name_leafdata());
    if (service_policy_count.is_set || is_set(service_policy_count.yfilter)) leaf_name_data.push_back(service_policy_count.get_name_leafdata());

    return leaf_name_data;

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

    yang_name = "entity-mib"; yang_parent_name = "mib"; is_top_level_class = false; has_list_ancestor = false;
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

std::string Mib::EntityMib::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::EntityMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-entitymib-cfg:entity-mib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::EntityMib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entity_index_persistence.is_set || is_set(entity_index_persistence.yfilter)) leaf_name_data.push_back(entity_index_persistence.get_name_leafdata());

    return leaf_name_data;

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

    yang_name = "interface-mib"; yang_parent_name = "mib"; is_top_level_class = false; has_list_ancestor = false;
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

std::string Mib::InterfaceMib::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::InterfaceMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-ifmib-cfg:interface-mib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::InterfaceMib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_alias_long.is_set || is_set(interface_alias_long.yfilter)) leaf_name_data.push_back(interface_alias_long.get_name_leafdata());
    if (interface_index_persistence.is_set || is_set(interface_index_persistence.yfilter)) leaf_name_data.push_back(interface_index_persistence.get_name_leafdata());
    if (internal_cache.is_set || is_set(internal_cache.yfilter)) leaf_name_data.push_back(internal_cache.get_name_leafdata());
    if (ip_subscriber.is_set || is_set(ip_subscriber.yfilter)) leaf_name_data.push_back(ip_subscriber.get_name_leafdata());
    if (statistics_cache.is_set || is_set(statistics_cache.yfilter)) leaf_name_data.push_back(statistics_cache.get_name_leafdata());

    return leaf_name_data;

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

    yang_name = "interfaces"; yang_parent_name = "interface-mib"; is_top_level_class = false; has_list_ancestor = false;
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

std::string Mib::InterfaceMib::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-snmp-ifmib-cfg:interface-mib/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::InterfaceMib::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::InterfaceMib::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false;
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

std::string Mib::InterfaceMib::Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-snmp-ifmib-cfg:interface-mib/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::InterfaceMib::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::InterfaceMib::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (index_persistence.is_set || is_set(index_persistence.yfilter)) leaf_name_data.push_back(index_persistence.get_name_leafdata());
    if (link_up_down.is_set || is_set(link_up_down.yfilter)) leaf_name_data.push_back(link_up_down.get_name_leafdata());

    return leaf_name_data;

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

    yang_name = "notification"; yang_parent_name = "interface-mib"; is_top_level_class = false; has_list_ancestor = false;
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

std::string Mib::InterfaceMib::Notification::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-snmp-ifmib-cfg:interface-mib/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::InterfaceMib::Notification::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notification";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::InterfaceMib::Notification::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_ietf.is_set || is_set(link_ietf.yfilter)) leaf_name_data.push_back(link_ietf.get_name_leafdata());

    return leaf_name_data;

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

    yang_name = "subsets"; yang_parent_name = "interface-mib"; is_top_level_class = false; has_list_ancestor = false;
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

std::string Mib::InterfaceMib::Subsets::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-snmp-ifmib-cfg:interface-mib/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::InterfaceMib::Subsets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subsets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::InterfaceMib::Subsets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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

    yang_name = "subset"; yang_parent_name = "subsets"; is_top_level_class = false; has_list_ancestor = false;
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

std::string Mib::InterfaceMib::Subsets::Subset::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-snmp-ifmib-cfg:interface-mib/subsets/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::InterfaceMib::Subsets::Subset::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subset" <<"[subset-id='" <<subset_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::InterfaceMib::Subsets::Subset::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subset_id.is_set || is_set(subset_id.yfilter)) leaf_name_data.push_back(subset_id.get_name_leafdata());

    return leaf_name_data;

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

    yang_name = "link-up-down"; yang_parent_name = "subset"; is_top_level_class = false; has_list_ancestor = true;
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

std::vector<std::pair<std::string, LeafData> > Mib::InterfaceMib::Subsets::Subset::LinkUpDown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (regular_expression.is_set || is_set(regular_expression.yfilter)) leaf_name_data.push_back(regular_expression.get_name_leafdata());

    return leaf_name_data;

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

Mib::MplsFrrMib::MplsFrrMib()
    :
    cache_timer{YType::uint32, "cache-timer"}
{

    yang_name = "mpls-frr-mib"; yang_parent_name = "mib"; is_top_level_class = false; has_list_ancestor = false;
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

std::string Mib::MplsFrrMib::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::MplsFrrMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-frr-mib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::MplsFrrMib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_timer.is_set || is_set(cache_timer.yfilter)) leaf_name_data.push_back(cache_timer.get_name_leafdata());

    return leaf_name_data;

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

Mib::MplsP2MpMib::MplsP2MpMib()
    :
    cache_timer{YType::uint32, "cache-timer"}
{

    yang_name = "mpls-p2mp-mib"; yang_parent_name = "mib"; is_top_level_class = false; has_list_ancestor = false;
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

std::string Mib::MplsP2MpMib::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::MplsP2MpMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-p2mp-mib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::MplsP2MpMib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_timer.is_set || is_set(cache_timer.yfilter)) leaf_name_data.push_back(cache_timer.get_name_leafdata());

    return leaf_name_data;

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

Mib::MplsTeExtMib::MplsTeExtMib()
    :
    cache_timer{YType::uint32, "cache-timer"}
{

    yang_name = "mpls-te-ext-mib"; yang_parent_name = "mib"; is_top_level_class = false; has_list_ancestor = false;
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

std::string Mib::MplsTeExtMib::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::MplsTeExtMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te-ext-mib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::MplsTeExtMib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_timer.is_set || is_set(cache_timer.yfilter)) leaf_name_data.push_back(cache_timer.get_name_leafdata());

    return leaf_name_data;

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

Mib::MplsTeExtStdMib::MplsTeExtStdMib()
    :
    cache_timer{YType::uint32, "cache-timer"}
{

    yang_name = "mpls-te-ext-std-mib"; yang_parent_name = "mib"; is_top_level_class = false; has_list_ancestor = false;
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

std::string Mib::MplsTeExtStdMib::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::MplsTeExtStdMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te-ext-std-mib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::MplsTeExtStdMib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_timer.is_set || is_set(cache_timer.yfilter)) leaf_name_data.push_back(cache_timer.get_name_leafdata());

    return leaf_name_data;

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

Mib::MplsTeMib::MplsTeMib()
    :
    cache_garbage_collect_timer{YType::uint32, "cache-garbage-collect-timer"},
    cache_timer{YType::uint32, "cache-timer"}
{

    yang_name = "mpls-te-mib"; yang_parent_name = "mib"; is_top_level_class = false; has_list_ancestor = false;
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

std::string Mib::MplsTeMib::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::MplsTeMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te-mib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::MplsTeMib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_garbage_collect_timer.is_set || is_set(cache_garbage_collect_timer.yfilter)) leaf_name_data.push_back(cache_garbage_collect_timer.get_name_leafdata());
    if (cache_timer.is_set || is_set(cache_timer.yfilter)) leaf_name_data.push_back(cache_timer.get_name_leafdata());

    return leaf_name_data;

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

Mib::Subscriber::Subscriber()
    :
    threshold(std::make_shared<Mib::Subscriber::Threshold>())
{
    threshold->parent = this;

    yang_name = "subscriber"; yang_parent_name = "mib"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::Subscriber::~Subscriber()
{
}

bool Mib::Subscriber::has_data() const
{
    return (threshold !=  nullptr && threshold->has_data());
}

bool Mib::Subscriber::has_operation() const
{
    return is_set(yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Mib::Subscriber::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::Subscriber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-subscriber-session-mon-mibs-cfg:subscriber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::Subscriber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::Subscriber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Mib::Subscriber::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::Subscriber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Mib::Subscriber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mib::Subscriber::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mib::Subscriber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Mib::Subscriber::Threshold::Threshold()
    :
    access_interface_sub(std::make_shared<Mib::Subscriber::Threshold::AccessInterfaceSub>())
	,delta(std::make_shared<Mib::Subscriber::Threshold::Delta>())
	,falling(std::make_shared<Mib::Subscriber::Threshold::Falling>())
	,rising(std::make_shared<Mib::Subscriber::Threshold::Rising>())
{
    access_interface_sub->parent = this;
    delta->parent = this;
    falling->parent = this;
    rising->parent = this;

    yang_name = "threshold"; yang_parent_name = "subscriber"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::Subscriber::Threshold::~Threshold()
{
}

bool Mib::Subscriber::Threshold::has_data() const
{
    return (access_interface_sub !=  nullptr && access_interface_sub->has_data())
	|| (delta !=  nullptr && delta->has_data())
	|| (falling !=  nullptr && falling->has_data())
	|| (rising !=  nullptr && rising->has_data());
}

bool Mib::Subscriber::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| (access_interface_sub !=  nullptr && access_interface_sub->has_operation())
	|| (delta !=  nullptr && delta->has_operation())
	|| (falling !=  nullptr && falling->has_operation())
	|| (rising !=  nullptr && rising->has_operation());
}

std::string Mib::Subscriber::Threshold::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-subscriber-session-mon-mibs-cfg:subscriber/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::Subscriber::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::Subscriber::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::Subscriber::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-interface-sub")
    {
        if(access_interface_sub == nullptr)
        {
            access_interface_sub = std::make_shared<Mib::Subscriber::Threshold::AccessInterfaceSub>();
        }
        return access_interface_sub;
    }

    if(child_yang_name == "delta")
    {
        if(delta == nullptr)
        {
            delta = std::make_shared<Mib::Subscriber::Threshold::Delta>();
        }
        return delta;
    }

    if(child_yang_name == "falling")
    {
        if(falling == nullptr)
        {
            falling = std::make_shared<Mib::Subscriber::Threshold::Falling>();
        }
        return falling;
    }

    if(child_yang_name == "rising")
    {
        if(rising == nullptr)
        {
            rising = std::make_shared<Mib::Subscriber::Threshold::Rising>();
        }
        return rising;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::Subscriber::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_interface_sub != nullptr)
    {
        children["access-interface-sub"] = access_interface_sub;
    }

    if(delta != nullptr)
    {
        children["delta"] = delta;
    }

    if(falling != nullptr)
    {
        children["falling"] = falling;
    }

    if(rising != nullptr)
    {
        children["rising"] = rising;
    }

    return children;
}

void Mib::Subscriber::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mib::Subscriber::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mib::Subscriber::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-interface-sub" || name == "delta" || name == "falling" || name == "rising")
        return true;
    return false;
}

Mib::Subscriber::Threshold::AccessInterfaceSub::AccessInterfaceSub()
    :
    subsets(std::make_shared<Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets>())
{
    subsets->parent = this;

    yang_name = "access-interface-sub"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::Subscriber::Threshold::AccessInterfaceSub::~AccessInterfaceSub()
{
}

bool Mib::Subscriber::Threshold::AccessInterfaceSub::has_data() const
{
    return (subsets !=  nullptr && subsets->has_data());
}

bool Mib::Subscriber::Threshold::AccessInterfaceSub::has_operation() const
{
    return is_set(yfilter)
	|| (subsets !=  nullptr && subsets->has_operation());
}

std::string Mib::Subscriber::Threshold::AccessInterfaceSub::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-subscriber-session-mon-mibs-cfg:subscriber/threshold/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::Subscriber::Threshold::AccessInterfaceSub::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-interface-sub";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::Subscriber::Threshold::AccessInterfaceSub::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::Subscriber::Threshold::AccessInterfaceSub::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subsets")
    {
        if(subsets == nullptr)
        {
            subsets = std::make_shared<Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets>();
        }
        return subsets;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::Subscriber::Threshold::AccessInterfaceSub::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(subsets != nullptr)
    {
        children["subsets"] = subsets;
    }

    return children;
}

void Mib::Subscriber::Threshold::AccessInterfaceSub::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mib::Subscriber::Threshold::AccessInterfaceSub::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mib::Subscriber::Threshold::AccessInterfaceSub::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subsets")
        return true;
    return false;
}

Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subsets()
{

    yang_name = "subsets"; yang_parent_name = "access-interface-sub"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::~Subsets()
{
}

bool Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::has_data() const
{
    for (std::size_t index=0; index<subset.size(); index++)
    {
        if(subset[index]->has_data())
            return true;
    }
    return false;
}

bool Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::has_operation() const
{
    for (std::size_t index=0; index<subset.size(); index++)
    {
        if(subset[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-subscriber-session-mon-mibs-cfg:subscriber/threshold/access-interface-sub/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subsets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset>();
        c->parent = this;
        subset.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : subset)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subset")
        return true;
    return false;
}

Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::Subset()
    :
    subset_id{YType::uint32, "subset-id"}
    	,
    regular_expression(std::make_shared<Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression>())
{
    regular_expression->parent = this;

    yang_name = "subset"; yang_parent_name = "subsets"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::~Subset()
{
}

bool Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::has_data() const
{
    return subset_id.is_set
	|| (regular_expression !=  nullptr && regular_expression->has_data());
}

bool Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subset_id.yfilter)
	|| (regular_expression !=  nullptr && regular_expression->has_operation());
}

std::string Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-subscriber-session-mon-mibs-cfg:subscriber/threshold/access-interface-sub/subsets/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subset" <<"[subset-id='" <<subset_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subset_id.is_set || is_set(subset_id.yfilter)) leaf_name_data.push_back(subset_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "regular-expression")
    {
        if(regular_expression == nullptr)
        {
            regular_expression = std::make_shared<Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression>();
        }
        return regular_expression;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(regular_expression != nullptr)
    {
        children["regular-expression"] = regular_expression;
    }

    return children;
}

void Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subset-id")
    {
        subset_id = value;
        subset_id.value_namespace = name_space;
        subset_id.value_namespace_prefix = name_space_prefix;
    }
}

void Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subset-id")
    {
        subset_id.yfilter = yfilter;
    }
}

bool Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "regular-expression" || name == "subset-id")
        return true;
    return false;
}

Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::RegularExpression()
    :
    notification(std::make_shared<Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification>())
{
    notification->parent = this;

    yang_name = "regular-expression"; yang_parent_name = "subset"; is_top_level_class = false; has_list_ancestor = true;
}

Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::~RegularExpression()
{
}

bool Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::has_data() const
{
    return (notification !=  nullptr && notification->has_data());
}

bool Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::has_operation() const
{
    return is_set(yfilter)
	|| (notification !=  nullptr && notification->has_operation());
}

std::string Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "regular-expression";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "notification")
    {
        if(notification == nullptr)
        {
            notification = std::make_shared<Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification>();
        }
        return notification;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(notification != nullptr)
    {
        children["notification"] = notification;
    }

    return children;
}

void Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "notification")
        return true;
    return false;
}

Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification::Notification()
    :
    rising_falling(std::make_shared<Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification::RisingFalling>())
{
    rising_falling->parent = this;

    yang_name = "notification"; yang_parent_name = "regular-expression"; is_top_level_class = false; has_list_ancestor = true;
}

Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification::~Notification()
{
}

bool Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification::has_data() const
{
    return (rising_falling !=  nullptr && rising_falling->has_data());
}

bool Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification::has_operation() const
{
    return is_set(yfilter)
	|| (rising_falling !=  nullptr && rising_falling->has_operation());
}

std::string Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notification";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rising-falling")
    {
        if(rising_falling == nullptr)
        {
            rising_falling = std::make_shared<Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification::RisingFalling>();
        }
        return rising_falling;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rising_falling != nullptr)
    {
        children["rising-falling"] = rising_falling;
    }

    return children;
}

void Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rising-falling")
        return true;
    return false;
}

Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification::RisingFalling::RisingFalling()
    :
    disable{YType::str, "disable"}
{

    yang_name = "rising-falling"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = true;
}

Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification::RisingFalling::~RisingFalling()
{
}

bool Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification::RisingFalling::has_data() const
{
    return disable.is_set;
}

bool Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification::RisingFalling::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification::RisingFalling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rising-falling";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification::RisingFalling::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification::RisingFalling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification::RisingFalling::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification::RisingFalling::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification::RisingFalling::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification::RisingFalling::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Mib::Subscriber::Threshold::Delta::Delta()
    :
    evaluation(std::make_shared<Mib::Subscriber::Threshold::Delta::Evaluation>())
	,percent(std::make_shared<Mib::Subscriber::Threshold::Delta::Percent>())
{
    evaluation->parent = this;
    percent->parent = this;

    yang_name = "delta"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::Subscriber::Threshold::Delta::~Delta()
{
}

bool Mib::Subscriber::Threshold::Delta::has_data() const
{
    return (evaluation !=  nullptr && evaluation->has_data())
	|| (percent !=  nullptr && percent->has_data());
}

bool Mib::Subscriber::Threshold::Delta::has_operation() const
{
    return is_set(yfilter)
	|| (evaluation !=  nullptr && evaluation->has_operation())
	|| (percent !=  nullptr && percent->has_operation());
}

std::string Mib::Subscriber::Threshold::Delta::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-subscriber-session-mon-mibs-cfg:subscriber/threshold/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::Subscriber::Threshold::Delta::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delta";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::Subscriber::Threshold::Delta::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::Subscriber::Threshold::Delta::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evaluation")
    {
        if(evaluation == nullptr)
        {
            evaluation = std::make_shared<Mib::Subscriber::Threshold::Delta::Evaluation>();
        }
        return evaluation;
    }

    if(child_yang_name == "percent")
    {
        if(percent == nullptr)
        {
            percent = std::make_shared<Mib::Subscriber::Threshold::Delta::Percent>();
        }
        return percent;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::Subscriber::Threshold::Delta::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(evaluation != nullptr)
    {
        children["evaluation"] = evaluation;
    }

    if(percent != nullptr)
    {
        children["percent"] = percent;
    }

    return children;
}

void Mib::Subscriber::Threshold::Delta::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mib::Subscriber::Threshold::Delta::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mib::Subscriber::Threshold::Delta::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evaluation" || name == "percent")
        return true;
    return false;
}

Mib::Subscriber::Threshold::Delta::Evaluation::Evaluation()
    :
    access_interfaces(std::make_shared<Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces>())
	,nodes(std::make_shared<Mib::Subscriber::Threshold::Delta::Evaluation::Nodes>())
{
    access_interfaces->parent = this;
    nodes->parent = this;

    yang_name = "evaluation"; yang_parent_name = "delta"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::Subscriber::Threshold::Delta::Evaluation::~Evaluation()
{
}

bool Mib::Subscriber::Threshold::Delta::Evaluation::has_data() const
{
    return (access_interfaces !=  nullptr && access_interfaces->has_data())
	|| (nodes !=  nullptr && nodes->has_data());
}

bool Mib::Subscriber::Threshold::Delta::Evaluation::has_operation() const
{
    return is_set(yfilter)
	|| (access_interfaces !=  nullptr && access_interfaces->has_operation())
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Mib::Subscriber::Threshold::Delta::Evaluation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-subscriber-session-mon-mibs-cfg:subscriber/threshold/delta/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::Subscriber::Threshold::Delta::Evaluation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evaluation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::Subscriber::Threshold::Delta::Evaluation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::Subscriber::Threshold::Delta::Evaluation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-interfaces")
    {
        if(access_interfaces == nullptr)
        {
            access_interfaces = std::make_shared<Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces>();
        }
        return access_interfaces;
    }

    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<Mib::Subscriber::Threshold::Delta::Evaluation::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::Subscriber::Threshold::Delta::Evaluation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_interfaces != nullptr)
    {
        children["access-interfaces"] = access_interfaces;
    }

    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void Mib::Subscriber::Threshold::Delta::Evaluation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mib::Subscriber::Threshold::Delta::Evaluation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mib::Subscriber::Threshold::Delta::Evaluation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-interfaces" || name == "nodes")
        return true;
    return false;
}

Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces::AccessInterfaces()
{

    yang_name = "access-interfaces"; yang_parent_name = "evaluation"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces::~AccessInterfaces()
{
}

bool Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces::has_data() const
{
    for (std::size_t index=0; index<access_interface.size(); index++)
    {
        if(access_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces::has_operation() const
{
    for (std::size_t index=0; index<access_interface.size(); index++)
    {
        if(access_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-subscriber-session-mon-mibs-cfg:subscriber/threshold/delta/evaluation/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-interface")
    {
        for(auto const & c : access_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces::AccessInterface>();
        c->parent = this;
        access_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : access_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-interface")
        return true;
    return false;
}

Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces::AccessInterface::AccessInterface()
    :
    interface_name{YType::str, "interface-name"},
    interval{YType::uint32, "interval"},
    session_count{YType::uint32, "session-count"}
{

    yang_name = "access-interface"; yang_parent_name = "access-interfaces"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces::AccessInterface::~AccessInterface()
{
}

bool Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces::AccessInterface::has_data() const
{
    return interface_name.is_set
	|| interval.is_set
	|| session_count.is_set;
}

bool Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces::AccessInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(session_count.yfilter);
}

std::string Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces::AccessInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-subscriber-session-mon-mibs-cfg:subscriber/threshold/delta/evaluation/access-interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces::AccessInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces::AccessInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (session_count.is_set || is_set(session_count.yfilter)) leaf_name_data.push_back(session_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces::AccessInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces::AccessInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces::AccessInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-count")
    {
        session_count = value;
        session_count.value_namespace = name_space;
        session_count.value_namespace_prefix = name_space_prefix;
    }
}

void Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces::AccessInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "session-count")
    {
        session_count.yfilter = yfilter;
    }
}

bool Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces::AccessInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "interval" || name == "session-count")
        return true;
    return false;
}

Mib::Subscriber::Threshold::Delta::Evaluation::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "evaluation"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::Subscriber::Threshold::Delta::Evaluation::Nodes::~Nodes()
{
}

bool Mib::Subscriber::Threshold::Delta::Evaluation::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Mib::Subscriber::Threshold::Delta::Evaluation::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mib::Subscriber::Threshold::Delta::Evaluation::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-subscriber-session-mon-mibs-cfg:subscriber/threshold/delta/evaluation/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::Subscriber::Threshold::Delta::Evaluation::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::Subscriber::Threshold::Delta::Evaluation::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::Subscriber::Threshold::Delta::Evaluation::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mib::Subscriber::Threshold::Delta::Evaluation::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::Subscriber::Threshold::Delta::Evaluation::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mib::Subscriber::Threshold::Delta::Evaluation::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mib::Subscriber::Threshold::Delta::Evaluation::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mib::Subscriber::Threshold::Delta::Evaluation::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

Mib::Subscriber::Threshold::Delta::Evaluation::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"},
    interval{YType::uint32, "interval"},
    session_count{YType::uint32, "session-count"}
{

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::Subscriber::Threshold::Delta::Evaluation::Nodes::Node::~Node()
{
}

bool Mib::Subscriber::Threshold::Delta::Evaluation::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| interval.is_set
	|| session_count.is_set;
}

bool Mib::Subscriber::Threshold::Delta::Evaluation::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(session_count.yfilter);
}

std::string Mib::Subscriber::Threshold::Delta::Evaluation::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-subscriber-session-mon-mibs-cfg:subscriber/threshold/delta/evaluation/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::Subscriber::Threshold::Delta::Evaluation::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::Subscriber::Threshold::Delta::Evaluation::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (session_count.is_set || is_set(session_count.yfilter)) leaf_name_data.push_back(session_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::Subscriber::Threshold::Delta::Evaluation::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::Subscriber::Threshold::Delta::Evaluation::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mib::Subscriber::Threshold::Delta::Evaluation::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-count")
    {
        session_count = value;
        session_count.value_namespace = name_space;
        session_count.value_namespace_prefix = name_space_prefix;
    }
}

void Mib::Subscriber::Threshold::Delta::Evaluation::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "session-count")
    {
        session_count.yfilter = yfilter;
    }
}

bool Mib::Subscriber::Threshold::Delta::Evaluation::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-name" || name == "interval" || name == "session-count")
        return true;
    return false;
}

Mib::Subscriber::Threshold::Delta::Percent::Percent()
    :
    access_interfaces(std::make_shared<Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces>())
	,nodes(std::make_shared<Mib::Subscriber::Threshold::Delta::Percent::Nodes>())
{
    access_interfaces->parent = this;
    nodes->parent = this;

    yang_name = "percent"; yang_parent_name = "delta"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::Subscriber::Threshold::Delta::Percent::~Percent()
{
}

bool Mib::Subscriber::Threshold::Delta::Percent::has_data() const
{
    return (access_interfaces !=  nullptr && access_interfaces->has_data())
	|| (nodes !=  nullptr && nodes->has_data());
}

bool Mib::Subscriber::Threshold::Delta::Percent::has_operation() const
{
    return is_set(yfilter)
	|| (access_interfaces !=  nullptr && access_interfaces->has_operation())
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Mib::Subscriber::Threshold::Delta::Percent::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-subscriber-session-mon-mibs-cfg:subscriber/threshold/delta/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::Subscriber::Threshold::Delta::Percent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "percent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::Subscriber::Threshold::Delta::Percent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::Subscriber::Threshold::Delta::Percent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-interfaces")
    {
        if(access_interfaces == nullptr)
        {
            access_interfaces = std::make_shared<Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces>();
        }
        return access_interfaces;
    }

    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<Mib::Subscriber::Threshold::Delta::Percent::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::Subscriber::Threshold::Delta::Percent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_interfaces != nullptr)
    {
        children["access-interfaces"] = access_interfaces;
    }

    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void Mib::Subscriber::Threshold::Delta::Percent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mib::Subscriber::Threshold::Delta::Percent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mib::Subscriber::Threshold::Delta::Percent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-interfaces" || name == "nodes")
        return true;
    return false;
}

Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces::AccessInterfaces()
{

    yang_name = "access-interfaces"; yang_parent_name = "percent"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces::~AccessInterfaces()
{
}

bool Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces::has_data() const
{
    for (std::size_t index=0; index<access_interface.size(); index++)
    {
        if(access_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces::has_operation() const
{
    for (std::size_t index=0; index<access_interface.size(); index++)
    {
        if(access_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-subscriber-session-mon-mibs-cfg:subscriber/threshold/delta/percent/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-interface")
    {
        for(auto const & c : access_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces::AccessInterface>();
        c->parent = this;
        access_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : access_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-interface")
        return true;
    return false;
}

Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces::AccessInterface::AccessInterface()
    :
    interface_name{YType::str, "interface-name"},
    interval{YType::uint32, "interval"},
    session_count{YType::uint32, "session-count"}
{

    yang_name = "access-interface"; yang_parent_name = "access-interfaces"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces::AccessInterface::~AccessInterface()
{
}

bool Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces::AccessInterface::has_data() const
{
    return interface_name.is_set
	|| interval.is_set
	|| session_count.is_set;
}

bool Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces::AccessInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(session_count.yfilter);
}

std::string Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces::AccessInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-subscriber-session-mon-mibs-cfg:subscriber/threshold/delta/percent/access-interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces::AccessInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces::AccessInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (session_count.is_set || is_set(session_count.yfilter)) leaf_name_data.push_back(session_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces::AccessInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces::AccessInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces::AccessInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-count")
    {
        session_count = value;
        session_count.value_namespace = name_space;
        session_count.value_namespace_prefix = name_space_prefix;
    }
}

void Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces::AccessInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "session-count")
    {
        session_count.yfilter = yfilter;
    }
}

bool Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces::AccessInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "interval" || name == "session-count")
        return true;
    return false;
}

Mib::Subscriber::Threshold::Delta::Percent::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "percent"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::Subscriber::Threshold::Delta::Percent::Nodes::~Nodes()
{
}

bool Mib::Subscriber::Threshold::Delta::Percent::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Mib::Subscriber::Threshold::Delta::Percent::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mib::Subscriber::Threshold::Delta::Percent::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-subscriber-session-mon-mibs-cfg:subscriber/threshold/delta/percent/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::Subscriber::Threshold::Delta::Percent::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::Subscriber::Threshold::Delta::Percent::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::Subscriber::Threshold::Delta::Percent::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mib::Subscriber::Threshold::Delta::Percent::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::Subscriber::Threshold::Delta::Percent::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mib::Subscriber::Threshold::Delta::Percent::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mib::Subscriber::Threshold::Delta::Percent::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mib::Subscriber::Threshold::Delta::Percent::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

Mib::Subscriber::Threshold::Delta::Percent::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"},
    interval{YType::uint32, "interval"},
    session_count{YType::uint32, "session-count"}
{

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::Subscriber::Threshold::Delta::Percent::Nodes::Node::~Node()
{
}

bool Mib::Subscriber::Threshold::Delta::Percent::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| interval.is_set
	|| session_count.is_set;
}

bool Mib::Subscriber::Threshold::Delta::Percent::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(session_count.yfilter);
}

std::string Mib::Subscriber::Threshold::Delta::Percent::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-subscriber-session-mon-mibs-cfg:subscriber/threshold/delta/percent/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::Subscriber::Threshold::Delta::Percent::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::Subscriber::Threshold::Delta::Percent::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (session_count.is_set || is_set(session_count.yfilter)) leaf_name_data.push_back(session_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::Subscriber::Threshold::Delta::Percent::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::Subscriber::Threshold::Delta::Percent::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mib::Subscriber::Threshold::Delta::Percent::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-count")
    {
        session_count = value;
        session_count.value_namespace = name_space;
        session_count.value_namespace_prefix = name_space_prefix;
    }
}

void Mib::Subscriber::Threshold::Delta::Percent::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "session-count")
    {
        session_count.yfilter = yfilter;
    }
}

bool Mib::Subscriber::Threshold::Delta::Percent::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-name" || name == "interval" || name == "session-count")
        return true;
    return false;
}

Mib::Subscriber::Threshold::Falling::Falling()
    :
    access_interfaces(std::make_shared<Mib::Subscriber::Threshold::Falling::AccessInterfaces>())
	,nodes(std::make_shared<Mib::Subscriber::Threshold::Falling::Nodes>())
{
    access_interfaces->parent = this;
    nodes->parent = this;

    yang_name = "falling"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::Subscriber::Threshold::Falling::~Falling()
{
}

bool Mib::Subscriber::Threshold::Falling::has_data() const
{
    return (access_interfaces !=  nullptr && access_interfaces->has_data())
	|| (nodes !=  nullptr && nodes->has_data());
}

bool Mib::Subscriber::Threshold::Falling::has_operation() const
{
    return is_set(yfilter)
	|| (access_interfaces !=  nullptr && access_interfaces->has_operation())
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Mib::Subscriber::Threshold::Falling::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-subscriber-session-mon-mibs-cfg:subscriber/threshold/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::Subscriber::Threshold::Falling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "falling";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::Subscriber::Threshold::Falling::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::Subscriber::Threshold::Falling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-interfaces")
    {
        if(access_interfaces == nullptr)
        {
            access_interfaces = std::make_shared<Mib::Subscriber::Threshold::Falling::AccessInterfaces>();
        }
        return access_interfaces;
    }

    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<Mib::Subscriber::Threshold::Falling::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::Subscriber::Threshold::Falling::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_interfaces != nullptr)
    {
        children["access-interfaces"] = access_interfaces;
    }

    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void Mib::Subscriber::Threshold::Falling::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mib::Subscriber::Threshold::Falling::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mib::Subscriber::Threshold::Falling::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-interfaces" || name == "nodes")
        return true;
    return false;
}

Mib::Subscriber::Threshold::Falling::AccessInterfaces::AccessInterfaces()
{

    yang_name = "access-interfaces"; yang_parent_name = "falling"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::Subscriber::Threshold::Falling::AccessInterfaces::~AccessInterfaces()
{
}

bool Mib::Subscriber::Threshold::Falling::AccessInterfaces::has_data() const
{
    for (std::size_t index=0; index<access_interface.size(); index++)
    {
        if(access_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Mib::Subscriber::Threshold::Falling::AccessInterfaces::has_operation() const
{
    for (std::size_t index=0; index<access_interface.size(); index++)
    {
        if(access_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mib::Subscriber::Threshold::Falling::AccessInterfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-subscriber-session-mon-mibs-cfg:subscriber/threshold/falling/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::Subscriber::Threshold::Falling::AccessInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::Subscriber::Threshold::Falling::AccessInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::Subscriber::Threshold::Falling::AccessInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-interface")
    {
        for(auto const & c : access_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mib::Subscriber::Threshold::Falling::AccessInterfaces::AccessInterface>();
        c->parent = this;
        access_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::Subscriber::Threshold::Falling::AccessInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : access_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mib::Subscriber::Threshold::Falling::AccessInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mib::Subscriber::Threshold::Falling::AccessInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mib::Subscriber::Threshold::Falling::AccessInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-interface")
        return true;
    return false;
}

Mib::Subscriber::Threshold::Falling::AccessInterfaces::AccessInterface::AccessInterface()
    :
    interface_name{YType::str, "interface-name"},
    interval{YType::uint32, "interval"},
    session_count{YType::uint32, "session-count"}
{

    yang_name = "access-interface"; yang_parent_name = "access-interfaces"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::Subscriber::Threshold::Falling::AccessInterfaces::AccessInterface::~AccessInterface()
{
}

bool Mib::Subscriber::Threshold::Falling::AccessInterfaces::AccessInterface::has_data() const
{
    return interface_name.is_set
	|| interval.is_set
	|| session_count.is_set;
}

bool Mib::Subscriber::Threshold::Falling::AccessInterfaces::AccessInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(session_count.yfilter);
}

std::string Mib::Subscriber::Threshold::Falling::AccessInterfaces::AccessInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-subscriber-session-mon-mibs-cfg:subscriber/threshold/falling/access-interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::Subscriber::Threshold::Falling::AccessInterfaces::AccessInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::Subscriber::Threshold::Falling::AccessInterfaces::AccessInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (session_count.is_set || is_set(session_count.yfilter)) leaf_name_data.push_back(session_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::Subscriber::Threshold::Falling::AccessInterfaces::AccessInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::Subscriber::Threshold::Falling::AccessInterfaces::AccessInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mib::Subscriber::Threshold::Falling::AccessInterfaces::AccessInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-count")
    {
        session_count = value;
        session_count.value_namespace = name_space;
        session_count.value_namespace_prefix = name_space_prefix;
    }
}

void Mib::Subscriber::Threshold::Falling::AccessInterfaces::AccessInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "session-count")
    {
        session_count.yfilter = yfilter;
    }
}

bool Mib::Subscriber::Threshold::Falling::AccessInterfaces::AccessInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "interval" || name == "session-count")
        return true;
    return false;
}

Mib::Subscriber::Threshold::Falling::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "falling"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::Subscriber::Threshold::Falling::Nodes::~Nodes()
{
}

bool Mib::Subscriber::Threshold::Falling::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Mib::Subscriber::Threshold::Falling::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mib::Subscriber::Threshold::Falling::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-subscriber-session-mon-mibs-cfg:subscriber/threshold/falling/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::Subscriber::Threshold::Falling::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::Subscriber::Threshold::Falling::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::Subscriber::Threshold::Falling::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mib::Subscriber::Threshold::Falling::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::Subscriber::Threshold::Falling::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mib::Subscriber::Threshold::Falling::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mib::Subscriber::Threshold::Falling::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mib::Subscriber::Threshold::Falling::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

Mib::Subscriber::Threshold::Falling::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"},
    interval{YType::uint32, "interval"},
    session_count{YType::uint32, "session-count"}
{

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::Subscriber::Threshold::Falling::Nodes::Node::~Node()
{
}

bool Mib::Subscriber::Threshold::Falling::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| interval.is_set
	|| session_count.is_set;
}

bool Mib::Subscriber::Threshold::Falling::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(session_count.yfilter);
}

std::string Mib::Subscriber::Threshold::Falling::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-subscriber-session-mon-mibs-cfg:subscriber/threshold/falling/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::Subscriber::Threshold::Falling::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::Subscriber::Threshold::Falling::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (session_count.is_set || is_set(session_count.yfilter)) leaf_name_data.push_back(session_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::Subscriber::Threshold::Falling::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::Subscriber::Threshold::Falling::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mib::Subscriber::Threshold::Falling::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-count")
    {
        session_count = value;
        session_count.value_namespace = name_space;
        session_count.value_namespace_prefix = name_space_prefix;
    }
}

void Mib::Subscriber::Threshold::Falling::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "session-count")
    {
        session_count.yfilter = yfilter;
    }
}

bool Mib::Subscriber::Threshold::Falling::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-name" || name == "interval" || name == "session-count")
        return true;
    return false;
}

Mib::Subscriber::Threshold::Rising::Rising()
    :
    access_interfaces(std::make_shared<Mib::Subscriber::Threshold::Rising::AccessInterfaces>())
	,nodes(std::make_shared<Mib::Subscriber::Threshold::Rising::Nodes>())
{
    access_interfaces->parent = this;
    nodes->parent = this;

    yang_name = "rising"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::Subscriber::Threshold::Rising::~Rising()
{
}

bool Mib::Subscriber::Threshold::Rising::has_data() const
{
    return (access_interfaces !=  nullptr && access_interfaces->has_data())
	|| (nodes !=  nullptr && nodes->has_data());
}

bool Mib::Subscriber::Threshold::Rising::has_operation() const
{
    return is_set(yfilter)
	|| (access_interfaces !=  nullptr && access_interfaces->has_operation())
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Mib::Subscriber::Threshold::Rising::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-subscriber-session-mon-mibs-cfg:subscriber/threshold/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::Subscriber::Threshold::Rising::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rising";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::Subscriber::Threshold::Rising::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::Subscriber::Threshold::Rising::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-interfaces")
    {
        if(access_interfaces == nullptr)
        {
            access_interfaces = std::make_shared<Mib::Subscriber::Threshold::Rising::AccessInterfaces>();
        }
        return access_interfaces;
    }

    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<Mib::Subscriber::Threshold::Rising::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::Subscriber::Threshold::Rising::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_interfaces != nullptr)
    {
        children["access-interfaces"] = access_interfaces;
    }

    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void Mib::Subscriber::Threshold::Rising::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mib::Subscriber::Threshold::Rising::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mib::Subscriber::Threshold::Rising::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-interfaces" || name == "nodes")
        return true;
    return false;
}

Mib::Subscriber::Threshold::Rising::AccessInterfaces::AccessInterfaces()
{

    yang_name = "access-interfaces"; yang_parent_name = "rising"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::Subscriber::Threshold::Rising::AccessInterfaces::~AccessInterfaces()
{
}

bool Mib::Subscriber::Threshold::Rising::AccessInterfaces::has_data() const
{
    for (std::size_t index=0; index<access_interface.size(); index++)
    {
        if(access_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Mib::Subscriber::Threshold::Rising::AccessInterfaces::has_operation() const
{
    for (std::size_t index=0; index<access_interface.size(); index++)
    {
        if(access_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mib::Subscriber::Threshold::Rising::AccessInterfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-subscriber-session-mon-mibs-cfg:subscriber/threshold/rising/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::Subscriber::Threshold::Rising::AccessInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::Subscriber::Threshold::Rising::AccessInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::Subscriber::Threshold::Rising::AccessInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-interface")
    {
        for(auto const & c : access_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mib::Subscriber::Threshold::Rising::AccessInterfaces::AccessInterface>();
        c->parent = this;
        access_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::Subscriber::Threshold::Rising::AccessInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : access_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mib::Subscriber::Threshold::Rising::AccessInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mib::Subscriber::Threshold::Rising::AccessInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mib::Subscriber::Threshold::Rising::AccessInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-interface")
        return true;
    return false;
}

Mib::Subscriber::Threshold::Rising::AccessInterfaces::AccessInterface::AccessInterface()
    :
    interface_name{YType::str, "interface-name"},
    interval{YType::uint32, "interval"},
    session_count{YType::uint32, "session-count"}
{

    yang_name = "access-interface"; yang_parent_name = "access-interfaces"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::Subscriber::Threshold::Rising::AccessInterfaces::AccessInterface::~AccessInterface()
{
}

bool Mib::Subscriber::Threshold::Rising::AccessInterfaces::AccessInterface::has_data() const
{
    return interface_name.is_set
	|| interval.is_set
	|| session_count.is_set;
}

bool Mib::Subscriber::Threshold::Rising::AccessInterfaces::AccessInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(session_count.yfilter);
}

std::string Mib::Subscriber::Threshold::Rising::AccessInterfaces::AccessInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-subscriber-session-mon-mibs-cfg:subscriber/threshold/rising/access-interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::Subscriber::Threshold::Rising::AccessInterfaces::AccessInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::Subscriber::Threshold::Rising::AccessInterfaces::AccessInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (session_count.is_set || is_set(session_count.yfilter)) leaf_name_data.push_back(session_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::Subscriber::Threshold::Rising::AccessInterfaces::AccessInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::Subscriber::Threshold::Rising::AccessInterfaces::AccessInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mib::Subscriber::Threshold::Rising::AccessInterfaces::AccessInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-count")
    {
        session_count = value;
        session_count.value_namespace = name_space;
        session_count.value_namespace_prefix = name_space_prefix;
    }
}

void Mib::Subscriber::Threshold::Rising::AccessInterfaces::AccessInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "session-count")
    {
        session_count.yfilter = yfilter;
    }
}

bool Mib::Subscriber::Threshold::Rising::AccessInterfaces::AccessInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "interval" || name == "session-count")
        return true;
    return false;
}

Mib::Subscriber::Threshold::Rising::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "rising"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::Subscriber::Threshold::Rising::Nodes::~Nodes()
{
}

bool Mib::Subscriber::Threshold::Rising::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Mib::Subscriber::Threshold::Rising::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mib::Subscriber::Threshold::Rising::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-subscriber-session-mon-mibs-cfg:subscriber/threshold/rising/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::Subscriber::Threshold::Rising::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::Subscriber::Threshold::Rising::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::Subscriber::Threshold::Rising::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mib::Subscriber::Threshold::Rising::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::Subscriber::Threshold::Rising::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mib::Subscriber::Threshold::Rising::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mib::Subscriber::Threshold::Rising::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mib::Subscriber::Threshold::Rising::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

Mib::Subscriber::Threshold::Rising::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"},
    interval{YType::uint32, "interval"},
    session_count{YType::uint32, "session-count"}
{

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
}

Mib::Subscriber::Threshold::Rising::Nodes::Node::~Node()
{
}

bool Mib::Subscriber::Threshold::Rising::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| interval.is_set
	|| session_count.is_set;
}

bool Mib::Subscriber::Threshold::Rising::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(session_count.yfilter);
}

std::string Mib::Subscriber::Threshold::Rising::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:mib/Cisco-IOS-XR-subscriber-session-mon-mibs-cfg:subscriber/threshold/rising/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string Mib::Subscriber::Threshold::Rising::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mib::Subscriber::Threshold::Rising::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (session_count.is_set || is_set(session_count.yfilter)) leaf_name_data.push_back(session_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mib::Subscriber::Threshold::Rising::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mib::Subscriber::Threshold::Rising::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mib::Subscriber::Threshold::Rising::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-count")
    {
        session_count = value;
        session_count.value_namespace = name_space;
        session_count.value_namespace_prefix = name_space_prefix;
    }
}

void Mib::Subscriber::Threshold::Rising::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "session-count")
    {
        session_count.yfilter = yfilter;
    }
}

bool Mib::Subscriber::Threshold::Rising::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-name" || name == "interval" || name == "session-count")
        return true;
    return false;
}

Snmp::Snmp()
    :
    inform_pending{YType::uint32, "inform-pending"},
    inform_retries{YType::uint32, "inform-retries"},
    inform_timeout{YType::uint32, "inform-timeout"},
    oid_poll_stats{YType::empty, "oid-poll-stats"},
    packet_size{YType::uint32, "packet-size"},
    throttle_time{YType::uint32, "throttle-time"},
    trap_port{YType::uint32, "trap-port"},
    trap_source{YType::str, "trap-source"},
    trap_source_ipv4{YType::str, "trap-source-ipv4"},
    trap_source_ipv6{YType::str, "trap-source-ipv6"},
    vrf_authentication_trap_disable{YType::empty, "vrf-authentication-trap-disable"}
    	,
    administration(std::make_shared<Snmp::Administration>())
	,agent(std::make_shared<Snmp::Agent>())
	,bulk_stats(std::make_shared<Snmp::BulkStats>())
	,context_mappings(std::make_shared<Snmp::ContextMappings>())
	,contexts(std::make_shared<Snmp::Contexts>())
	,correlator(std::make_shared<Snmp::Correlator>())
	,default_community_maps(std::make_shared<Snmp::DefaultCommunityMaps>())
	,encrypted_community_maps(std::make_shared<Snmp::EncryptedCommunityMaps>())
	,groups(std::make_shared<Snmp::Groups>())
	,ipv4(std::make_shared<Snmp::Ipv4>())
	,ipv6(std::make_shared<Snmp::Ipv6>())
	,logging(std::make_shared<Snmp::Logging>())
	,notification(std::make_shared<Snmp::Notification>())
	,overload_control(nullptr) // presence node
	,system(std::make_shared<Snmp::System>())
	,target(std::make_shared<Snmp::Target>())
	,timeouts(std::make_shared<Snmp::Timeouts>())
	,trap(std::make_shared<Snmp::Trap>())
	,trap_hosts(std::make_shared<Snmp::TrapHosts>())
	,users(std::make_shared<Snmp::Users>())
	,views(std::make_shared<Snmp::Views>())
	,vrfs(std::make_shared<Snmp::Vrfs>())
{
    administration->parent = this;
    agent->parent = this;
    bulk_stats->parent = this;
    context_mappings->parent = this;
    contexts->parent = this;
    correlator->parent = this;
    default_community_maps->parent = this;
    encrypted_community_maps->parent = this;
    groups->parent = this;
    ipv4->parent = this;
    ipv6->parent = this;
    logging->parent = this;
    notification->parent = this;
    system->parent = this;
    target->parent = this;
    timeouts->parent = this;
    trap->parent = this;
    trap_hosts->parent = this;
    users->parent = this;
    views->parent = this;
    vrfs->parent = this;

    yang_name = "snmp"; yang_parent_name = "Cisco-IOS-XR-snmp-agent-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

Snmp::~Snmp()
{
}

bool Snmp::has_data() const
{
    return inform_pending.is_set
	|| inform_retries.is_set
	|| inform_timeout.is_set
	|| oid_poll_stats.is_set
	|| packet_size.is_set
	|| throttle_time.is_set
	|| trap_port.is_set
	|| trap_source.is_set
	|| trap_source_ipv4.is_set
	|| trap_source_ipv6.is_set
	|| vrf_authentication_trap_disable.is_set
	|| (administration !=  nullptr && administration->has_data())
	|| (agent !=  nullptr && agent->has_data())
	|| (bulk_stats !=  nullptr && bulk_stats->has_data())
	|| (context_mappings !=  nullptr && context_mappings->has_data())
	|| (contexts !=  nullptr && contexts->has_data())
	|| (correlator !=  nullptr && correlator->has_data())
	|| (default_community_maps !=  nullptr && default_community_maps->has_data())
	|| (encrypted_community_maps !=  nullptr && encrypted_community_maps->has_data())
	|| (groups !=  nullptr && groups->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (notification !=  nullptr && notification->has_data())
	|| (overload_control !=  nullptr && overload_control->has_data())
	|| (system !=  nullptr && system->has_data())
	|| (target !=  nullptr && target->has_data())
	|| (timeouts !=  nullptr && timeouts->has_data())
	|| (trap !=  nullptr && trap->has_data())
	|| (trap_hosts !=  nullptr && trap_hosts->has_data())
	|| (users !=  nullptr && users->has_data())
	|| (views !=  nullptr && views->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool Snmp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inform_pending.yfilter)
	|| ydk::is_set(inform_retries.yfilter)
	|| ydk::is_set(inform_timeout.yfilter)
	|| ydk::is_set(oid_poll_stats.yfilter)
	|| ydk::is_set(packet_size.yfilter)
	|| ydk::is_set(throttle_time.yfilter)
	|| ydk::is_set(trap_port.yfilter)
	|| ydk::is_set(trap_source.yfilter)
	|| ydk::is_set(trap_source_ipv4.yfilter)
	|| ydk::is_set(trap_source_ipv6.yfilter)
	|| ydk::is_set(vrf_authentication_trap_disable.yfilter)
	|| (administration !=  nullptr && administration->has_operation())
	|| (agent !=  nullptr && agent->has_operation())
	|| (bulk_stats !=  nullptr && bulk_stats->has_operation())
	|| (context_mappings !=  nullptr && context_mappings->has_operation())
	|| (contexts !=  nullptr && contexts->has_operation())
	|| (correlator !=  nullptr && correlator->has_operation())
	|| (default_community_maps !=  nullptr && default_community_maps->has_operation())
	|| (encrypted_community_maps !=  nullptr && encrypted_community_maps->has_operation())
	|| (groups !=  nullptr && groups->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (notification !=  nullptr && notification->has_operation())
	|| (overload_control !=  nullptr && overload_control->has_operation())
	|| (system !=  nullptr && system->has_operation())
	|| (target !=  nullptr && target->has_operation())
	|| (timeouts !=  nullptr && timeouts->has_operation())
	|| (trap !=  nullptr && trap->has_operation())
	|| (trap_hosts !=  nullptr && trap_hosts->has_operation())
	|| (users !=  nullptr && users->has_operation())
	|| (views !=  nullptr && views->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inform_pending.is_set || is_set(inform_pending.yfilter)) leaf_name_data.push_back(inform_pending.get_name_leafdata());
    if (inform_retries.is_set || is_set(inform_retries.yfilter)) leaf_name_data.push_back(inform_retries.get_name_leafdata());
    if (inform_timeout.is_set || is_set(inform_timeout.yfilter)) leaf_name_data.push_back(inform_timeout.get_name_leafdata());
    if (oid_poll_stats.is_set || is_set(oid_poll_stats.yfilter)) leaf_name_data.push_back(oid_poll_stats.get_name_leafdata());
    if (packet_size.is_set || is_set(packet_size.yfilter)) leaf_name_data.push_back(packet_size.get_name_leafdata());
    if (throttle_time.is_set || is_set(throttle_time.yfilter)) leaf_name_data.push_back(throttle_time.get_name_leafdata());
    if (trap_port.is_set || is_set(trap_port.yfilter)) leaf_name_data.push_back(trap_port.get_name_leafdata());
    if (trap_source.is_set || is_set(trap_source.yfilter)) leaf_name_data.push_back(trap_source.get_name_leafdata());
    if (trap_source_ipv4.is_set || is_set(trap_source_ipv4.yfilter)) leaf_name_data.push_back(trap_source_ipv4.get_name_leafdata());
    if (trap_source_ipv6.is_set || is_set(trap_source_ipv6.yfilter)) leaf_name_data.push_back(trap_source_ipv6.get_name_leafdata());
    if (vrf_authentication_trap_disable.is_set || is_set(vrf_authentication_trap_disable.yfilter)) leaf_name_data.push_back(vrf_authentication_trap_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "administration")
    {
        if(administration == nullptr)
        {
            administration = std::make_shared<Snmp::Administration>();
        }
        return administration;
    }

    if(child_yang_name == "agent")
    {
        if(agent == nullptr)
        {
            agent = std::make_shared<Snmp::Agent>();
        }
        return agent;
    }

    if(child_yang_name == "bulk-stats")
    {
        if(bulk_stats == nullptr)
        {
            bulk_stats = std::make_shared<Snmp::BulkStats>();
        }
        return bulk_stats;
    }

    if(child_yang_name == "context-mappings")
    {
        if(context_mappings == nullptr)
        {
            context_mappings = std::make_shared<Snmp::ContextMappings>();
        }
        return context_mappings;
    }

    if(child_yang_name == "contexts")
    {
        if(contexts == nullptr)
        {
            contexts = std::make_shared<Snmp::Contexts>();
        }
        return contexts;
    }

    if(child_yang_name == "correlator")
    {
        if(correlator == nullptr)
        {
            correlator = std::make_shared<Snmp::Correlator>();
        }
        return correlator;
    }

    if(child_yang_name == "default-community-maps")
    {
        if(default_community_maps == nullptr)
        {
            default_community_maps = std::make_shared<Snmp::DefaultCommunityMaps>();
        }
        return default_community_maps;
    }

    if(child_yang_name == "encrypted-community-maps")
    {
        if(encrypted_community_maps == nullptr)
        {
            encrypted_community_maps = std::make_shared<Snmp::EncryptedCommunityMaps>();
        }
        return encrypted_community_maps;
    }

    if(child_yang_name == "groups")
    {
        if(groups == nullptr)
        {
            groups = std::make_shared<Snmp::Groups>();
        }
        return groups;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Snmp::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Snmp::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Snmp::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "notification")
    {
        if(notification == nullptr)
        {
            notification = std::make_shared<Snmp::Notification>();
        }
        return notification;
    }

    if(child_yang_name == "overload-control")
    {
        if(overload_control == nullptr)
        {
            overload_control = std::make_shared<Snmp::OverloadControl>();
        }
        return overload_control;
    }

    if(child_yang_name == "system")
    {
        if(system == nullptr)
        {
            system = std::make_shared<Snmp::System>();
        }
        return system;
    }

    if(child_yang_name == "target")
    {
        if(target == nullptr)
        {
            target = std::make_shared<Snmp::Target>();
        }
        return target;
    }

    if(child_yang_name == "timeouts")
    {
        if(timeouts == nullptr)
        {
            timeouts = std::make_shared<Snmp::Timeouts>();
        }
        return timeouts;
    }

    if(child_yang_name == "trap")
    {
        if(trap == nullptr)
        {
            trap = std::make_shared<Snmp::Trap>();
        }
        return trap;
    }

    if(child_yang_name == "trap-hosts")
    {
        if(trap_hosts == nullptr)
        {
            trap_hosts = std::make_shared<Snmp::TrapHosts>();
        }
        return trap_hosts;
    }

    if(child_yang_name == "users")
    {
        if(users == nullptr)
        {
            users = std::make_shared<Snmp::Users>();
        }
        return users;
    }

    if(child_yang_name == "views")
    {
        if(views == nullptr)
        {
            views = std::make_shared<Snmp::Views>();
        }
        return views;
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<Snmp::Vrfs>();
        }
        return vrfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(administration != nullptr)
    {
        children["administration"] = administration;
    }

    if(agent != nullptr)
    {
        children["agent"] = agent;
    }

    if(bulk_stats != nullptr)
    {
        children["bulk-stats"] = bulk_stats;
    }

    if(context_mappings != nullptr)
    {
        children["context-mappings"] = context_mappings;
    }

    if(contexts != nullptr)
    {
        children["contexts"] = contexts;
    }

    if(correlator != nullptr)
    {
        children["correlator"] = correlator;
    }

    if(default_community_maps != nullptr)
    {
        children["default-community-maps"] = default_community_maps;
    }

    if(encrypted_community_maps != nullptr)
    {
        children["encrypted-community-maps"] = encrypted_community_maps;
    }

    if(groups != nullptr)
    {
        children["groups"] = groups;
    }

    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(notification != nullptr)
    {
        children["notification"] = notification;
    }

    if(overload_control != nullptr)
    {
        children["overload-control"] = overload_control;
    }

    if(system != nullptr)
    {
        children["system"] = system;
    }

    if(target != nullptr)
    {
        children["target"] = target;
    }

    if(timeouts != nullptr)
    {
        children["timeouts"] = timeouts;
    }

    if(trap != nullptr)
    {
        children["trap"] = trap;
    }

    if(trap_hosts != nullptr)
    {
        children["trap-hosts"] = trap_hosts;
    }

    if(users != nullptr)
    {
        children["users"] = users;
    }

    if(views != nullptr)
    {
        children["views"] = views;
    }

    if(vrfs != nullptr)
    {
        children["vrfs"] = vrfs;
    }

    return children;
}

void Snmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inform-pending")
    {
        inform_pending = value;
        inform_pending.value_namespace = name_space;
        inform_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inform-retries")
    {
        inform_retries = value;
        inform_retries.value_namespace = name_space;
        inform_retries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inform-timeout")
    {
        inform_timeout = value;
        inform_timeout.value_namespace = name_space;
        inform_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oid-poll-stats")
    {
        oid_poll_stats = value;
        oid_poll_stats.value_namespace = name_space;
        oid_poll_stats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-size")
    {
        packet_size = value;
        packet_size.value_namespace = name_space;
        packet_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "throttle-time")
    {
        throttle_time = value;
        throttle_time.value_namespace = name_space;
        throttle_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trap-port")
    {
        trap_port = value;
        trap_port.value_namespace = name_space;
        trap_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trap-source")
    {
        trap_source = value;
        trap_source.value_namespace = name_space;
        trap_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trap-source-ipv4")
    {
        trap_source_ipv4 = value;
        trap_source_ipv4.value_namespace = name_space;
        trap_source_ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trap-source-ipv6")
    {
        trap_source_ipv6 = value;
        trap_source_ipv6.value_namespace = name_space;
        trap_source_ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-authentication-trap-disable")
    {
        vrf_authentication_trap_disable = value;
        vrf_authentication_trap_disable.value_namespace = name_space;
        vrf_authentication_trap_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inform-pending")
    {
        inform_pending.yfilter = yfilter;
    }
    if(value_path == "inform-retries")
    {
        inform_retries.yfilter = yfilter;
    }
    if(value_path == "inform-timeout")
    {
        inform_timeout.yfilter = yfilter;
    }
    if(value_path == "oid-poll-stats")
    {
        oid_poll_stats.yfilter = yfilter;
    }
    if(value_path == "packet-size")
    {
        packet_size.yfilter = yfilter;
    }
    if(value_path == "throttle-time")
    {
        throttle_time.yfilter = yfilter;
    }
    if(value_path == "trap-port")
    {
        trap_port.yfilter = yfilter;
    }
    if(value_path == "trap-source")
    {
        trap_source.yfilter = yfilter;
    }
    if(value_path == "trap-source-ipv4")
    {
        trap_source_ipv4.yfilter = yfilter;
    }
    if(value_path == "trap-source-ipv6")
    {
        trap_source_ipv6.yfilter = yfilter;
    }
    if(value_path == "vrf-authentication-trap-disable")
    {
        vrf_authentication_trap_disable.yfilter = yfilter;
    }
}

std::shared_ptr<Entity> Snmp::clone_ptr() const
{
    return std::make_shared<Snmp>();
}

std::string Snmp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Snmp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Snmp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Snmp::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Snmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "administration" || name == "agent" || name == "bulk-stats" || name == "context-mappings" || name == "contexts" || name == "correlator" || name == "default-community-maps" || name == "encrypted-community-maps" || name == "groups" || name == "ipv4" || name == "ipv6" || name == "logging" || name == "notification" || name == "overload-control" || name == "system" || name == "target" || name == "timeouts" || name == "trap" || name == "trap-hosts" || name == "users" || name == "views" || name == "vrfs" || name == "inform-pending" || name == "inform-retries" || name == "inform-timeout" || name == "oid-poll-stats" || name == "packet-size" || name == "throttle-time" || name == "trap-port" || name == "trap-source" || name == "trap-source-ipv4" || name == "trap-source-ipv6" || name == "vrf-authentication-trap-disable")
        return true;
    return false;
}

Snmp::Administration::Administration()
    :
    default_communities(std::make_shared<Snmp::Administration::DefaultCommunities>())
	,encrypted_communities(std::make_shared<Snmp::Administration::EncryptedCommunities>())
{
    default_communities->parent = this;
    encrypted_communities->parent = this;

    yang_name = "administration"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Administration::~Administration()
{
}

bool Snmp::Administration::has_data() const
{
    return (default_communities !=  nullptr && default_communities->has_data())
	|| (encrypted_communities !=  nullptr && encrypted_communities->has_data());
}

bool Snmp::Administration::has_operation() const
{
    return is_set(yfilter)
	|| (default_communities !=  nullptr && default_communities->has_operation())
	|| (encrypted_communities !=  nullptr && encrypted_communities->has_operation());
}

std::string Snmp::Administration::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Administration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "administration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Administration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Administration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-communities")
    {
        if(default_communities == nullptr)
        {
            default_communities = std::make_shared<Snmp::Administration::DefaultCommunities>();
        }
        return default_communities;
    }

    if(child_yang_name == "encrypted-communities")
    {
        if(encrypted_communities == nullptr)
        {
            encrypted_communities = std::make_shared<Snmp::Administration::EncryptedCommunities>();
        }
        return encrypted_communities;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Administration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_communities != nullptr)
    {
        children["default-communities"] = default_communities;
    }

    if(encrypted_communities != nullptr)
    {
        children["encrypted-communities"] = encrypted_communities;
    }

    return children;
}

void Snmp::Administration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Administration::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Administration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-communities" || name == "encrypted-communities")
        return true;
    return false;
}

Snmp::Administration::DefaultCommunities::DefaultCommunities()
{

    yang_name = "default-communities"; yang_parent_name = "administration"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Administration::DefaultCommunities::~DefaultCommunities()
{
}

bool Snmp::Administration::DefaultCommunities::has_data() const
{
    for (std::size_t index=0; index<default_community.size(); index++)
    {
        if(default_community[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Administration::DefaultCommunities::has_operation() const
{
    for (std::size_t index=0; index<default_community.size(); index++)
    {
        if(default_community[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Administration::DefaultCommunities::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/administration/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Administration::DefaultCommunities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-communities";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Administration::DefaultCommunities::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Administration::DefaultCommunities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-community")
    {
        for(auto const & c : default_community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Administration::DefaultCommunities::DefaultCommunity>();
        c->parent = this;
        default_community.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Administration::DefaultCommunities::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : default_community)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Administration::DefaultCommunities::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Administration::DefaultCommunities::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Administration::DefaultCommunities::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-community")
        return true;
    return false;
}

Snmp::Administration::DefaultCommunities::DefaultCommunity::DefaultCommunity()
    :
    community_name{YType::str, "community-name"},
    owner{YType::enumeration, "owner"},
    priviledge{YType::enumeration, "priviledge"},
    v4_access_list{YType::str, "v4-access-list"},
    v4acl_type{YType::enumeration, "v4acl-type"},
    v6_access_list{YType::str, "v6-access-list"},
    v6acl_type{YType::enumeration, "v6acl-type"},
    view_name{YType::str, "view-name"}
{

    yang_name = "default-community"; yang_parent_name = "default-communities"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Administration::DefaultCommunities::DefaultCommunity::~DefaultCommunity()
{
}

bool Snmp::Administration::DefaultCommunities::DefaultCommunity::has_data() const
{
    return community_name.is_set
	|| owner.is_set
	|| priviledge.is_set
	|| v4_access_list.is_set
	|| v4acl_type.is_set
	|| v6_access_list.is_set
	|| v6acl_type.is_set
	|| view_name.is_set;
}

bool Snmp::Administration::DefaultCommunities::DefaultCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community_name.yfilter)
	|| ydk::is_set(owner.yfilter)
	|| ydk::is_set(priviledge.yfilter)
	|| ydk::is_set(v4_access_list.yfilter)
	|| ydk::is_set(v4acl_type.yfilter)
	|| ydk::is_set(v6_access_list.yfilter)
	|| ydk::is_set(v6acl_type.yfilter)
	|| ydk::is_set(view_name.yfilter);
}

std::string Snmp::Administration::DefaultCommunities::DefaultCommunity::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/administration/default-communities/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Administration::DefaultCommunities::DefaultCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-community" <<"[community-name='" <<community_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Administration::DefaultCommunities::DefaultCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_name.is_set || is_set(community_name.yfilter)) leaf_name_data.push_back(community_name.get_name_leafdata());
    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (priviledge.is_set || is_set(priviledge.yfilter)) leaf_name_data.push_back(priviledge.get_name_leafdata());
    if (v4_access_list.is_set || is_set(v4_access_list.yfilter)) leaf_name_data.push_back(v4_access_list.get_name_leafdata());
    if (v4acl_type.is_set || is_set(v4acl_type.yfilter)) leaf_name_data.push_back(v4acl_type.get_name_leafdata());
    if (v6_access_list.is_set || is_set(v6_access_list.yfilter)) leaf_name_data.push_back(v6_access_list.get_name_leafdata());
    if (v6acl_type.is_set || is_set(v6acl_type.yfilter)) leaf_name_data.push_back(v6acl_type.get_name_leafdata());
    if (view_name.is_set || is_set(view_name.yfilter)) leaf_name_data.push_back(view_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Administration::DefaultCommunities::DefaultCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Administration::DefaultCommunities::DefaultCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Administration::DefaultCommunities::DefaultCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community-name")
    {
        community_name = value;
        community_name.value_namespace = name_space;
        community_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priviledge")
    {
        priviledge = value;
        priviledge.value_namespace = name_space;
        priviledge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v4-access-list")
    {
        v4_access_list = value;
        v4_access_list.value_namespace = name_space;
        v4_access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v4acl-type")
    {
        v4acl_type = value;
        v4acl_type.value_namespace = name_space;
        v4acl_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6-access-list")
    {
        v6_access_list = value;
        v6_access_list.value_namespace = name_space;
        v6_access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6acl-type")
    {
        v6acl_type = value;
        v6acl_type.value_namespace = name_space;
        v6acl_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "view-name")
    {
        view_name = value;
        view_name.value_namespace = name_space;
        view_name.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Administration::DefaultCommunities::DefaultCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community-name")
    {
        community_name.yfilter = yfilter;
    }
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
    if(value_path == "priviledge")
    {
        priviledge.yfilter = yfilter;
    }
    if(value_path == "v4-access-list")
    {
        v4_access_list.yfilter = yfilter;
    }
    if(value_path == "v4acl-type")
    {
        v4acl_type.yfilter = yfilter;
    }
    if(value_path == "v6-access-list")
    {
        v6_access_list.yfilter = yfilter;
    }
    if(value_path == "v6acl-type")
    {
        v6acl_type.yfilter = yfilter;
    }
    if(value_path == "view-name")
    {
        view_name.yfilter = yfilter;
    }
}

bool Snmp::Administration::DefaultCommunities::DefaultCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community-name" || name == "owner" || name == "priviledge" || name == "v4-access-list" || name == "v4acl-type" || name == "v6-access-list" || name == "v6acl-type" || name == "view-name")
        return true;
    return false;
}

Snmp::Administration::EncryptedCommunities::EncryptedCommunities()
{

    yang_name = "encrypted-communities"; yang_parent_name = "administration"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Administration::EncryptedCommunities::~EncryptedCommunities()
{
}

bool Snmp::Administration::EncryptedCommunities::has_data() const
{
    for (std::size_t index=0; index<encrypted_community.size(); index++)
    {
        if(encrypted_community[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Administration::EncryptedCommunities::has_operation() const
{
    for (std::size_t index=0; index<encrypted_community.size(); index++)
    {
        if(encrypted_community[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Administration::EncryptedCommunities::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/administration/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Administration::EncryptedCommunities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encrypted-communities";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Administration::EncryptedCommunities::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Administration::EncryptedCommunities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encrypted-community")
    {
        for(auto const & c : encrypted_community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Administration::EncryptedCommunities::EncryptedCommunity>();
        c->parent = this;
        encrypted_community.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Administration::EncryptedCommunities::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : encrypted_community)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Administration::EncryptedCommunities::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Administration::EncryptedCommunities::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Administration::EncryptedCommunities::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypted-community")
        return true;
    return false;
}

Snmp::Administration::EncryptedCommunities::EncryptedCommunity::EncryptedCommunity()
    :
    community_name{YType::str, "community-name"},
    owner{YType::enumeration, "owner"},
    priviledge{YType::enumeration, "priviledge"},
    v4_access_list{YType::str, "v4-access-list"},
    v4acl_type{YType::enumeration, "v4acl-type"},
    v6_access_list{YType::str, "v6-access-list"},
    v6acl_type{YType::enumeration, "v6acl-type"},
    view_name{YType::str, "view-name"}
{

    yang_name = "encrypted-community"; yang_parent_name = "encrypted-communities"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Administration::EncryptedCommunities::EncryptedCommunity::~EncryptedCommunity()
{
}

bool Snmp::Administration::EncryptedCommunities::EncryptedCommunity::has_data() const
{
    return community_name.is_set
	|| owner.is_set
	|| priviledge.is_set
	|| v4_access_list.is_set
	|| v4acl_type.is_set
	|| v6_access_list.is_set
	|| v6acl_type.is_set
	|| view_name.is_set;
}

bool Snmp::Administration::EncryptedCommunities::EncryptedCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community_name.yfilter)
	|| ydk::is_set(owner.yfilter)
	|| ydk::is_set(priviledge.yfilter)
	|| ydk::is_set(v4_access_list.yfilter)
	|| ydk::is_set(v4acl_type.yfilter)
	|| ydk::is_set(v6_access_list.yfilter)
	|| ydk::is_set(v6acl_type.yfilter)
	|| ydk::is_set(view_name.yfilter);
}

std::string Snmp::Administration::EncryptedCommunities::EncryptedCommunity::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/administration/encrypted-communities/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Administration::EncryptedCommunities::EncryptedCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encrypted-community" <<"[community-name='" <<community_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Administration::EncryptedCommunities::EncryptedCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_name.is_set || is_set(community_name.yfilter)) leaf_name_data.push_back(community_name.get_name_leafdata());
    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (priviledge.is_set || is_set(priviledge.yfilter)) leaf_name_data.push_back(priviledge.get_name_leafdata());
    if (v4_access_list.is_set || is_set(v4_access_list.yfilter)) leaf_name_data.push_back(v4_access_list.get_name_leafdata());
    if (v4acl_type.is_set || is_set(v4acl_type.yfilter)) leaf_name_data.push_back(v4acl_type.get_name_leafdata());
    if (v6_access_list.is_set || is_set(v6_access_list.yfilter)) leaf_name_data.push_back(v6_access_list.get_name_leafdata());
    if (v6acl_type.is_set || is_set(v6acl_type.yfilter)) leaf_name_data.push_back(v6acl_type.get_name_leafdata());
    if (view_name.is_set || is_set(view_name.yfilter)) leaf_name_data.push_back(view_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Administration::EncryptedCommunities::EncryptedCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Administration::EncryptedCommunities::EncryptedCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Administration::EncryptedCommunities::EncryptedCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community-name")
    {
        community_name = value;
        community_name.value_namespace = name_space;
        community_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priviledge")
    {
        priviledge = value;
        priviledge.value_namespace = name_space;
        priviledge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v4-access-list")
    {
        v4_access_list = value;
        v4_access_list.value_namespace = name_space;
        v4_access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v4acl-type")
    {
        v4acl_type = value;
        v4acl_type.value_namespace = name_space;
        v4acl_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6-access-list")
    {
        v6_access_list = value;
        v6_access_list.value_namespace = name_space;
        v6_access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6acl-type")
    {
        v6acl_type = value;
        v6acl_type.value_namespace = name_space;
        v6acl_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "view-name")
    {
        view_name = value;
        view_name.value_namespace = name_space;
        view_name.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Administration::EncryptedCommunities::EncryptedCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community-name")
    {
        community_name.yfilter = yfilter;
    }
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
    if(value_path == "priviledge")
    {
        priviledge.yfilter = yfilter;
    }
    if(value_path == "v4-access-list")
    {
        v4_access_list.yfilter = yfilter;
    }
    if(value_path == "v4acl-type")
    {
        v4acl_type.yfilter = yfilter;
    }
    if(value_path == "v6-access-list")
    {
        v6_access_list.yfilter = yfilter;
    }
    if(value_path == "v6acl-type")
    {
        v6acl_type.yfilter = yfilter;
    }
    if(value_path == "view-name")
    {
        view_name.yfilter = yfilter;
    }
}

bool Snmp::Administration::EncryptedCommunities::EncryptedCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community-name" || name == "owner" || name == "priviledge" || name == "v4-access-list" || name == "v4acl-type" || name == "v6-access-list" || name == "v6acl-type" || name == "view-name")
        return true;
    return false;
}

Snmp::Agent::Agent()
    :
    engine_id(std::make_shared<Snmp::Agent::EngineId>())
{
    engine_id->parent = this;

    yang_name = "agent"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Agent::~Agent()
{
}

bool Snmp::Agent::has_data() const
{
    return (engine_id !=  nullptr && engine_id->has_data());
}

bool Snmp::Agent::has_operation() const
{
    return is_set(yfilter)
	|| (engine_id !=  nullptr && engine_id->has_operation());
}

std::string Snmp::Agent::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Agent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "agent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Agent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Agent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "engine-id")
    {
        if(engine_id == nullptr)
        {
            engine_id = std::make_shared<Snmp::Agent::EngineId>();
        }
        return engine_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Agent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(engine_id != nullptr)
    {
        children["engine-id"] = engine_id;
    }

    return children;
}

void Snmp::Agent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Agent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Agent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "engine-id")
        return true;
    return false;
}

Snmp::Agent::EngineId::EngineId()
    :
    local{YType::str, "local"}
    	,
    remotes(std::make_shared<Snmp::Agent::EngineId::Remotes>())
{
    remotes->parent = this;

    yang_name = "engine-id"; yang_parent_name = "agent"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Agent::EngineId::~EngineId()
{
}

bool Snmp::Agent::EngineId::has_data() const
{
    return local.is_set
	|| (remotes !=  nullptr && remotes->has_data());
}

bool Snmp::Agent::EngineId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local.yfilter)
	|| (remotes !=  nullptr && remotes->has_operation());
}

std::string Snmp::Agent::EngineId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/agent/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Agent::EngineId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "engine-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Agent::EngineId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Agent::EngineId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remotes")
    {
        if(remotes == nullptr)
        {
            remotes = std::make_shared<Snmp::Agent::EngineId::Remotes>();
        }
        return remotes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Agent::EngineId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(remotes != nullptr)
    {
        children["remotes"] = remotes;
    }

    return children;
}

void Snmp::Agent::EngineId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Agent::EngineId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
}

bool Snmp::Agent::EngineId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remotes" || name == "local")
        return true;
    return false;
}

Snmp::Agent::EngineId::Remotes::Remotes()
{

    yang_name = "remotes"; yang_parent_name = "engine-id"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Agent::EngineId::Remotes::~Remotes()
{
}

bool Snmp::Agent::EngineId::Remotes::has_data() const
{
    for (std::size_t index=0; index<remote.size(); index++)
    {
        if(remote[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Agent::EngineId::Remotes::has_operation() const
{
    for (std::size_t index=0; index<remote.size(); index++)
    {
        if(remote[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Agent::EngineId::Remotes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/agent/engine-id/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Agent::EngineId::Remotes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remotes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Agent::EngineId::Remotes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Agent::EngineId::Remotes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote")
    {
        for(auto const & c : remote)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Agent::EngineId::Remotes::Remote>();
        c->parent = this;
        remote.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Agent::EngineId::Remotes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : remote)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Agent::EngineId::Remotes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Agent::EngineId::Remotes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Agent::EngineId::Remotes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote")
        return true;
    return false;
}

Snmp::Agent::EngineId::Remotes::Remote::Remote()
    :
    remote_address{YType::str, "remote-address"},
    port{YType::uint16, "port"},
    remote_engine_id{YType::str, "remote-engine-id"}
{

    yang_name = "remote"; yang_parent_name = "remotes"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Agent::EngineId::Remotes::Remote::~Remote()
{
}

bool Snmp::Agent::EngineId::Remotes::Remote::has_data() const
{
    return remote_address.is_set
	|| port.is_set
	|| remote_engine_id.is_set;
}

bool Snmp::Agent::EngineId::Remotes::Remote::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(remote_address.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(remote_engine_id.yfilter);
}

std::string Snmp::Agent::EngineId::Remotes::Remote::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/agent/engine-id/remotes/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Agent::EngineId::Remotes::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote" <<"[remote-address='" <<remote_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Agent::EngineId::Remotes::Remote::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (remote_engine_id.is_set || is_set(remote_engine_id.yfilter)) leaf_name_data.push_back(remote_engine_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Agent::EngineId::Remotes::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Agent::EngineId::Remotes::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Agent::EngineId::Remotes::Remote::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-engine-id")
    {
        remote_engine_id = value;
        remote_engine_id.value_namespace = name_space;
        remote_engine_id.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Agent::EngineId::Remotes::Remote::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "remote-engine-id")
    {
        remote_engine_id.yfilter = yfilter;
    }
}

bool Snmp::Agent::EngineId::Remotes::Remote::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-address" || name == "port" || name == "remote-engine-id")
        return true;
    return false;
}

Snmp::BulkStats::BulkStats()
    :
    memory{YType::uint32, "memory"}
    	,
    objects(std::make_shared<Snmp::BulkStats::Objects>())
	,schemas(std::make_shared<Snmp::BulkStats::Schemas>())
	,transfers(std::make_shared<Snmp::BulkStats::Transfers>())
{
    objects->parent = this;
    schemas->parent = this;
    transfers->parent = this;

    yang_name = "bulk-stats"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::BulkStats::~BulkStats()
{
}

bool Snmp::BulkStats::has_data() const
{
    return memory.is_set
	|| (objects !=  nullptr && objects->has_data())
	|| (schemas !=  nullptr && schemas->has_data())
	|| (transfers !=  nullptr && transfers->has_data());
}

bool Snmp::BulkStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(memory.yfilter)
	|| (objects !=  nullptr && objects->has_operation())
	|| (schemas !=  nullptr && schemas->has_operation())
	|| (transfers !=  nullptr && transfers->has_operation());
}

std::string Snmp::BulkStats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::BulkStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bulk-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::BulkStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (memory.is_set || is_set(memory.yfilter)) leaf_name_data.push_back(memory.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::BulkStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "objects")
    {
        if(objects == nullptr)
        {
            objects = std::make_shared<Snmp::BulkStats::Objects>();
        }
        return objects;
    }

    if(child_yang_name == "schemas")
    {
        if(schemas == nullptr)
        {
            schemas = std::make_shared<Snmp::BulkStats::Schemas>();
        }
        return schemas;
    }

    if(child_yang_name == "transfers")
    {
        if(transfers == nullptr)
        {
            transfers = std::make_shared<Snmp::BulkStats::Transfers>();
        }
        return transfers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::BulkStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(objects != nullptr)
    {
        children["objects"] = objects;
    }

    if(schemas != nullptr)
    {
        children["schemas"] = schemas;
    }

    if(transfers != nullptr)
    {
        children["transfers"] = transfers;
    }

    return children;
}

void Snmp::BulkStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "memory")
    {
        memory = value;
        memory.value_namespace = name_space;
        memory.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::BulkStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "memory")
    {
        memory.yfilter = yfilter;
    }
}

bool Snmp::BulkStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "objects" || name == "schemas" || name == "transfers" || name == "memory")
        return true;
    return false;
}

Snmp::BulkStats::Objects::Objects()
{

    yang_name = "objects"; yang_parent_name = "bulk-stats"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::BulkStats::Objects::~Objects()
{
}

bool Snmp::BulkStats::Objects::has_data() const
{
    for (std::size_t index=0; index<object.size(); index++)
    {
        if(object[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::BulkStats::Objects::has_operation() const
{
    for (std::size_t index=0; index<object.size(); index++)
    {
        if(object[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::BulkStats::Objects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/bulk-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::BulkStats::Objects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "objects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::BulkStats::Objects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::BulkStats::Objects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "object")
    {
        for(auto const & c : object)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::BulkStats::Objects::Object>();
        c->parent = this;
        object.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::BulkStats::Objects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : object)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::BulkStats::Objects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::BulkStats::Objects::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::BulkStats::Objects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

Snmp::BulkStats::Objects::Object::Object()
    :
    object_list_name{YType::str, "object-list-name"},
    type{YType::empty, "type"}
    	,
    objects(std::make_shared<Snmp::BulkStats::Objects::Object::Objects_>())
{
    objects->parent = this;

    yang_name = "object"; yang_parent_name = "objects"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::BulkStats::Objects::Object::~Object()
{
}

bool Snmp::BulkStats::Objects::Object::has_data() const
{
    return object_list_name.is_set
	|| type.is_set
	|| (objects !=  nullptr && objects->has_data());
}

bool Snmp::BulkStats::Objects::Object::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(object_list_name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (objects !=  nullptr && objects->has_operation());
}

std::string Snmp::BulkStats::Objects::Object::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/bulk-stats/objects/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::BulkStats::Objects::Object::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "object" <<"[object-list-name='" <<object_list_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::BulkStats::Objects::Object::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_list_name.is_set || is_set(object_list_name.yfilter)) leaf_name_data.push_back(object_list_name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::BulkStats::Objects::Object::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "objects")
    {
        if(objects == nullptr)
        {
            objects = std::make_shared<Snmp::BulkStats::Objects::Object::Objects_>();
        }
        return objects;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::BulkStats::Objects::Object::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(objects != nullptr)
    {
        children["objects"] = objects;
    }

    return children;
}

void Snmp::BulkStats::Objects::Object::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object-list-name")
    {
        object_list_name = value;
        object_list_name.value_namespace = name_space;
        object_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::BulkStats::Objects::Object::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object-list-name")
    {
        object_list_name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Snmp::BulkStats::Objects::Object::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "objects" || name == "object-list-name" || name == "type")
        return true;
    return false;
}

Snmp::BulkStats::Objects::Object::Objects_::Objects_()
{

    yang_name = "objects"; yang_parent_name = "object"; is_top_level_class = false; has_list_ancestor = true;
}

Snmp::BulkStats::Objects::Object::Objects_::~Objects_()
{
}

bool Snmp::BulkStats::Objects::Object::Objects_::has_data() const
{
    for (std::size_t index=0; index<object.size(); index++)
    {
        if(object[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::BulkStats::Objects::Object::Objects_::has_operation() const
{
    for (std::size_t index=0; index<object.size(); index++)
    {
        if(object[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::BulkStats::Objects::Object::Objects_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "objects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::BulkStats::Objects::Object::Objects_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::BulkStats::Objects::Object::Objects_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "object")
    {
        for(auto const & c : object)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::BulkStats::Objects::Object::Objects_::Object_>();
        c->parent = this;
        object.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::BulkStats::Objects::Object::Objects_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : object)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::BulkStats::Objects::Object::Objects_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::BulkStats::Objects::Object::Objects_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::BulkStats::Objects::Object::Objects_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

Snmp::BulkStats::Objects::Object::Objects_::Object_::Object_()
    :
    oid{YType::str, "oid"}
{

    yang_name = "object"; yang_parent_name = "objects"; is_top_level_class = false; has_list_ancestor = true;
}

Snmp::BulkStats::Objects::Object::Objects_::Object_::~Object_()
{
}

bool Snmp::BulkStats::Objects::Object::Objects_::Object_::has_data() const
{
    return oid.is_set;
}

bool Snmp::BulkStats::Objects::Object::Objects_::Object_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oid.yfilter);
}

std::string Snmp::BulkStats::Objects::Object::Objects_::Object_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "object" <<"[oid='" <<oid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::BulkStats::Objects::Object::Objects_::Object_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oid.is_set || is_set(oid.yfilter)) leaf_name_data.push_back(oid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::BulkStats::Objects::Object::Objects_::Object_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::BulkStats::Objects::Object::Objects_::Object_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::BulkStats::Objects::Object::Objects_::Object_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oid")
    {
        oid = value;
        oid.value_namespace = name_space;
        oid.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::BulkStats::Objects::Object::Objects_::Object_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oid")
    {
        oid.yfilter = yfilter;
    }
}

bool Snmp::BulkStats::Objects::Object::Objects_::Object_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oid")
        return true;
    return false;
}

Snmp::BulkStats::Schemas::Schemas()
{

    yang_name = "schemas"; yang_parent_name = "bulk-stats"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::BulkStats::Schemas::~Schemas()
{
}

bool Snmp::BulkStats::Schemas::has_data() const
{
    for (std::size_t index=0; index<schema.size(); index++)
    {
        if(schema[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::BulkStats::Schemas::has_operation() const
{
    for (std::size_t index=0; index<schema.size(); index++)
    {
        if(schema[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::BulkStats::Schemas::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/bulk-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::BulkStats::Schemas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "schemas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::BulkStats::Schemas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::BulkStats::Schemas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "schema")
    {
        for(auto const & c : schema)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::BulkStats::Schemas::Schema>();
        c->parent = this;
        schema.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::BulkStats::Schemas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : schema)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::BulkStats::Schemas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::BulkStats::Schemas::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::BulkStats::Schemas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "schema")
        return true;
    return false;
}

Snmp::BulkStats::Schemas::Schema::Schema()
    :
    schema_name{YType::str, "schema-name"},
    poll_interval{YType::uint32, "poll-interval"},
    schema_object_list{YType::str, "schema-object-list"},
    type{YType::empty, "type"}
    	,
    instance(nullptr) // presence node
{

    yang_name = "schema"; yang_parent_name = "schemas"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::BulkStats::Schemas::Schema::~Schema()
{
}

bool Snmp::BulkStats::Schemas::Schema::has_data() const
{
    return schema_name.is_set
	|| poll_interval.is_set
	|| schema_object_list.is_set
	|| type.is_set
	|| (instance !=  nullptr && instance->has_data());
}

bool Snmp::BulkStats::Schemas::Schema::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(schema_name.yfilter)
	|| ydk::is_set(poll_interval.yfilter)
	|| ydk::is_set(schema_object_list.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (instance !=  nullptr && instance->has_operation());
}

std::string Snmp::BulkStats::Schemas::Schema::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/bulk-stats/schemas/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::BulkStats::Schemas::Schema::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "schema" <<"[schema-name='" <<schema_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::BulkStats::Schemas::Schema::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (schema_name.is_set || is_set(schema_name.yfilter)) leaf_name_data.push_back(schema_name.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.yfilter)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (schema_object_list.is_set || is_set(schema_object_list.yfilter)) leaf_name_data.push_back(schema_object_list.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::BulkStats::Schemas::Schema::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        if(instance == nullptr)
        {
            instance = std::make_shared<Snmp::BulkStats::Schemas::Schema::Instance>();
        }
        return instance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::BulkStats::Schemas::Schema::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(instance != nullptr)
    {
        children["instance"] = instance;
    }

    return children;
}

void Snmp::BulkStats::Schemas::Schema::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "schema-name")
    {
        schema_name = value;
        schema_name.value_namespace = name_space;
        schema_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll-interval")
    {
        poll_interval = value;
        poll_interval.value_namespace = name_space;
        poll_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "schema-object-list")
    {
        schema_object_list = value;
        schema_object_list.value_namespace = name_space;
        schema_object_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::BulkStats::Schemas::Schema::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "schema-name")
    {
        schema_name.yfilter = yfilter;
    }
    if(value_path == "poll-interval")
    {
        poll_interval.yfilter = yfilter;
    }
    if(value_path == "schema-object-list")
    {
        schema_object_list.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Snmp::BulkStats::Schemas::Schema::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance" || name == "schema-name" || name == "poll-interval" || name == "schema-object-list" || name == "type")
        return true;
    return false;
}

Snmp::BulkStats::Schemas::Schema::Instance::Instance()
    :
    end{YType::str, "end"},
    instance{YType::str, "instance"},
    max{YType::int32, "max"},
    start{YType::str, "start"},
    sub_interface{YType::boolean, "sub-interface"},
    type{YType::enumeration, "type"}
{

    yang_name = "instance"; yang_parent_name = "schema"; is_top_level_class = false; has_list_ancestor = true;
}

Snmp::BulkStats::Schemas::Schema::Instance::~Instance()
{
}

bool Snmp::BulkStats::Schemas::Schema::Instance::has_data() const
{
    return end.is_set
	|| instance.is_set
	|| max.is_set
	|| start.is_set
	|| sub_interface.is_set
	|| type.is_set;
}

bool Snmp::BulkStats::Schemas::Schema::Instance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(start.yfilter)
	|| ydk::is_set(sub_interface.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Snmp::BulkStats::Schemas::Schema::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::BulkStats::Schemas::Schema::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end.is_set || is_set(end.yfilter)) leaf_name_data.push_back(end.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());
    if (sub_interface.is_set || is_set(sub_interface.yfilter)) leaf_name_data.push_back(sub_interface.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::BulkStats::Schemas::Schema::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::BulkStats::Schemas::Schema::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::BulkStats::Schemas::Schema::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end")
    {
        end = value;
        end.value_namespace = name_space;
        end.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start")
    {
        start = value;
        start.value_namespace = name_space;
        start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-interface")
    {
        sub_interface = value;
        sub_interface.value_namespace = name_space;
        sub_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::BulkStats::Schemas::Schema::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end")
    {
        end.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
    if(value_path == "sub-interface")
    {
        sub_interface.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Snmp::BulkStats::Schemas::Schema::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end" || name == "instance" || name == "max" || name == "start" || name == "sub-interface" || name == "type")
        return true;
    return false;
}

Snmp::BulkStats::Transfers::Transfers()
{

    yang_name = "transfers"; yang_parent_name = "bulk-stats"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::BulkStats::Transfers::~Transfers()
{
}

bool Snmp::BulkStats::Transfers::has_data() const
{
    for (std::size_t index=0; index<transfer.size(); index++)
    {
        if(transfer[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::BulkStats::Transfers::has_operation() const
{
    for (std::size_t index=0; index<transfer.size(); index++)
    {
        if(transfer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::BulkStats::Transfers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/bulk-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::BulkStats::Transfers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transfers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::BulkStats::Transfers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::BulkStats::Transfers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transfer")
    {
        for(auto const & c : transfer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::BulkStats::Transfers::Transfer>();
        c->parent = this;
        transfer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::BulkStats::Transfers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : transfer)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::BulkStats::Transfers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::BulkStats::Transfers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::BulkStats::Transfers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transfer")
        return true;
    return false;
}

Snmp::BulkStats::Transfers::Transfer::Transfer()
    :
    transfer_name{YType::str, "transfer-name"},
    buffer_size{YType::uint32, "buffer-size"},
    enable{YType::empty, "enable"},
    format{YType::enumeration, "format"},
    interval{YType::int32, "interval"},
    primary{YType::str, "primary"},
    retain{YType::uint32, "retain"},
    retry{YType::uint32, "retry"},
    secondary{YType::str, "secondary"},
    type{YType::empty, "type"}
    	,
    transfer_schemas(std::make_shared<Snmp::BulkStats::Transfers::Transfer::TransferSchemas>())
{
    transfer_schemas->parent = this;

    yang_name = "transfer"; yang_parent_name = "transfers"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::BulkStats::Transfers::Transfer::~Transfer()
{
}

bool Snmp::BulkStats::Transfers::Transfer::has_data() const
{
    return transfer_name.is_set
	|| buffer_size.is_set
	|| enable.is_set
	|| format.is_set
	|| interval.is_set
	|| primary.is_set
	|| retain.is_set
	|| retry.is_set
	|| secondary.is_set
	|| type.is_set
	|| (transfer_schemas !=  nullptr && transfer_schemas->has_data());
}

bool Snmp::BulkStats::Transfers::Transfer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transfer_name.yfilter)
	|| ydk::is_set(buffer_size.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(format.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(primary.yfilter)
	|| ydk::is_set(retain.yfilter)
	|| ydk::is_set(retry.yfilter)
	|| ydk::is_set(secondary.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (transfer_schemas !=  nullptr && transfer_schemas->has_operation());
}

std::string Snmp::BulkStats::Transfers::Transfer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/bulk-stats/transfers/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::BulkStats::Transfers::Transfer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transfer" <<"[transfer-name='" <<transfer_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::BulkStats::Transfers::Transfer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transfer_name.is_set || is_set(transfer_name.yfilter)) leaf_name_data.push_back(transfer_name.get_name_leafdata());
    if (buffer_size.is_set || is_set(buffer_size.yfilter)) leaf_name_data.push_back(buffer_size.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (format.is_set || is_set(format.yfilter)) leaf_name_data.push_back(format.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (primary.is_set || is_set(primary.yfilter)) leaf_name_data.push_back(primary.get_name_leafdata());
    if (retain.is_set || is_set(retain.yfilter)) leaf_name_data.push_back(retain.get_name_leafdata());
    if (retry.is_set || is_set(retry.yfilter)) leaf_name_data.push_back(retry.get_name_leafdata());
    if (secondary.is_set || is_set(secondary.yfilter)) leaf_name_data.push_back(secondary.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::BulkStats::Transfers::Transfer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transfer-schemas")
    {
        if(transfer_schemas == nullptr)
        {
            transfer_schemas = std::make_shared<Snmp::BulkStats::Transfers::Transfer::TransferSchemas>();
        }
        return transfer_schemas;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::BulkStats::Transfers::Transfer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(transfer_schemas != nullptr)
    {
        children["transfer-schemas"] = transfer_schemas;
    }

    return children;
}

void Snmp::BulkStats::Transfers::Transfer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transfer-name")
    {
        transfer_name = value;
        transfer_name.value_namespace = name_space;
        transfer_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "buffer-size")
    {
        buffer_size = value;
        buffer_size.value_namespace = name_space;
        buffer_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "format")
    {
        format = value;
        format.value_namespace = name_space;
        format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary")
    {
        primary = value;
        primary.value_namespace = name_space;
        primary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retain")
    {
        retain = value;
        retain.value_namespace = name_space;
        retain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry")
    {
        retry = value;
        retry.value_namespace = name_space;
        retry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary")
    {
        secondary = value;
        secondary.value_namespace = name_space;
        secondary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::BulkStats::Transfers::Transfer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transfer-name")
    {
        transfer_name.yfilter = yfilter;
    }
    if(value_path == "buffer-size")
    {
        buffer_size.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "format")
    {
        format.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "primary")
    {
        primary.yfilter = yfilter;
    }
    if(value_path == "retain")
    {
        retain.yfilter = yfilter;
    }
    if(value_path == "retry")
    {
        retry.yfilter = yfilter;
    }
    if(value_path == "secondary")
    {
        secondary.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Snmp::BulkStats::Transfers::Transfer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transfer-schemas" || name == "transfer-name" || name == "buffer-size" || name == "enable" || name == "format" || name == "interval" || name == "primary" || name == "retain" || name == "retry" || name == "secondary" || name == "type")
        return true;
    return false;
}

Snmp::BulkStats::Transfers::Transfer::TransferSchemas::TransferSchemas()
{

    yang_name = "transfer-schemas"; yang_parent_name = "transfer"; is_top_level_class = false; has_list_ancestor = true;
}

Snmp::BulkStats::Transfers::Transfer::TransferSchemas::~TransferSchemas()
{
}

bool Snmp::BulkStats::Transfers::Transfer::TransferSchemas::has_data() const
{
    for (std::size_t index=0; index<transfer_schema.size(); index++)
    {
        if(transfer_schema[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::BulkStats::Transfers::Transfer::TransferSchemas::has_operation() const
{
    for (std::size_t index=0; index<transfer_schema.size(); index++)
    {
        if(transfer_schema[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::BulkStats::Transfers::Transfer::TransferSchemas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transfer-schemas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::BulkStats::Transfers::Transfer::TransferSchemas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::BulkStats::Transfers::Transfer::TransferSchemas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transfer-schema")
    {
        for(auto const & c : transfer_schema)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::BulkStats::Transfers::Transfer::TransferSchemas::TransferSchema>();
        c->parent = this;
        transfer_schema.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::BulkStats::Transfers::Transfer::TransferSchemas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : transfer_schema)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::BulkStats::Transfers::Transfer::TransferSchemas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::BulkStats::Transfers::Transfer::TransferSchemas::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::BulkStats::Transfers::Transfer::TransferSchemas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transfer-schema")
        return true;
    return false;
}

Snmp::BulkStats::Transfers::Transfer::TransferSchemas::TransferSchema::TransferSchema()
    :
    schema_name{YType::str, "schema-name"}
{

    yang_name = "transfer-schema"; yang_parent_name = "transfer-schemas"; is_top_level_class = false; has_list_ancestor = true;
}

Snmp::BulkStats::Transfers::Transfer::TransferSchemas::TransferSchema::~TransferSchema()
{
}

bool Snmp::BulkStats::Transfers::Transfer::TransferSchemas::TransferSchema::has_data() const
{
    return schema_name.is_set;
}

bool Snmp::BulkStats::Transfers::Transfer::TransferSchemas::TransferSchema::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(schema_name.yfilter);
}

std::string Snmp::BulkStats::Transfers::Transfer::TransferSchemas::TransferSchema::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transfer-schema" <<"[schema-name='" <<schema_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::BulkStats::Transfers::Transfer::TransferSchemas::TransferSchema::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (schema_name.is_set || is_set(schema_name.yfilter)) leaf_name_data.push_back(schema_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::BulkStats::Transfers::Transfer::TransferSchemas::TransferSchema::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::BulkStats::Transfers::Transfer::TransferSchemas::TransferSchema::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::BulkStats::Transfers::Transfer::TransferSchemas::TransferSchema::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "schema-name")
    {
        schema_name = value;
        schema_name.value_namespace = name_space;
        schema_name.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::BulkStats::Transfers::Transfer::TransferSchemas::TransferSchema::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "schema-name")
    {
        schema_name.yfilter = yfilter;
    }
}

bool Snmp::BulkStats::Transfers::Transfer::TransferSchemas::TransferSchema::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "schema-name")
        return true;
    return false;
}

Snmp::ContextMappings::ContextMappings()
{

    yang_name = "context-mappings"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::ContextMappings::~ContextMappings()
{
}

bool Snmp::ContextMappings::has_data() const
{
    for (std::size_t index=0; index<context_mapping.size(); index++)
    {
        if(context_mapping[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::ContextMappings::has_operation() const
{
    for (std::size_t index=0; index<context_mapping.size(); index++)
    {
        if(context_mapping[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::ContextMappings::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::ContextMappings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context-mappings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::ContextMappings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::ContextMappings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context-mapping")
    {
        for(auto const & c : context_mapping)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::ContextMappings::ContextMapping>();
        c->parent = this;
        context_mapping.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::ContextMappings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : context_mapping)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::ContextMappings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::ContextMappings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::ContextMappings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context-mapping")
        return true;
    return false;
}

Snmp::ContextMappings::ContextMapping::ContextMapping()
    :
    context_mapping_name{YType::str, "context-mapping-name"},
    context{YType::enumeration, "context"},
    instance_name{YType::str, "instance-name"},
    topology_name{YType::str, "topology-name"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "context-mapping"; yang_parent_name = "context-mappings"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::ContextMappings::ContextMapping::~ContextMapping()
{
}

bool Snmp::ContextMappings::ContextMapping::has_data() const
{
    return context_mapping_name.is_set
	|| context.is_set
	|| instance_name.is_set
	|| topology_name.is_set
	|| vrf_name.is_set;
}

bool Snmp::ContextMappings::ContextMapping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(context_mapping_name.yfilter)
	|| ydk::is_set(context.yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(topology_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string Snmp::ContextMappings::ContextMapping::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/context-mappings/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::ContextMappings::ContextMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context-mapping" <<"[context-mapping-name='" <<context_mapping_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::ContextMappings::ContextMapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (context_mapping_name.is_set || is_set(context_mapping_name.yfilter)) leaf_name_data.push_back(context_mapping_name.get_name_leafdata());
    if (context.is_set || is_set(context.yfilter)) leaf_name_data.push_back(context.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (topology_name.is_set || is_set(topology_name.yfilter)) leaf_name_data.push_back(topology_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::ContextMappings::ContextMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::ContextMappings::ContextMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::ContextMappings::ContextMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "context-mapping-name")
    {
        context_mapping_name = value;
        context_mapping_name.value_namespace = name_space;
        context_mapping_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "context")
    {
        context = value;
        context.value_namespace = name_space;
        context.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-name")
    {
        topology_name = value;
        topology_name.value_namespace = name_space;
        topology_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::ContextMappings::ContextMapping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "context-mapping-name")
    {
        context_mapping_name.yfilter = yfilter;
    }
    if(value_path == "context")
    {
        context.yfilter = yfilter;
    }
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "topology-name")
    {
        topology_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Snmp::ContextMappings::ContextMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context-mapping-name" || name == "context" || name == "instance-name" || name == "topology-name" || name == "vrf-name")
        return true;
    return false;
}

Snmp::Contexts::Contexts()
{

    yang_name = "contexts"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Contexts::~Contexts()
{
}

bool Snmp::Contexts::has_data() const
{
    for (std::size_t index=0; index<context.size(); index++)
    {
        if(context[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Contexts::has_operation() const
{
    for (std::size_t index=0; index<context.size(); index++)
    {
        if(context[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Contexts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Contexts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "contexts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Contexts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Contexts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context")
    {
        for(auto const & c : context)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Contexts::Context>();
        c->parent = this;
        context.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Contexts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : context)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Contexts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Contexts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Contexts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context")
        return true;
    return false;
}

Snmp::Contexts::Context::Context()
    :
    context_name{YType::str, "context-name"}
{

    yang_name = "context"; yang_parent_name = "contexts"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Contexts::Context::~Context()
{
}

bool Snmp::Contexts::Context::has_data() const
{
    return context_name.is_set;
}

bool Snmp::Contexts::Context::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(context_name.yfilter);
}

std::string Snmp::Contexts::Context::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/contexts/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Contexts::Context::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context" <<"[context-name='" <<context_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Contexts::Context::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (context_name.is_set || is_set(context_name.yfilter)) leaf_name_data.push_back(context_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Contexts::Context::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Contexts::Context::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Contexts::Context::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "context-name")
    {
        context_name = value;
        context_name.value_namespace = name_space;
        context_name.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Contexts::Context::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "context-name")
    {
        context_name.yfilter = yfilter;
    }
}

bool Snmp::Contexts::Context::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context-name")
        return true;
    return false;
}

Snmp::Correlator::Correlator()
    :
    buffer_size{YType::uint32, "buffer-size"}
    	,
    rule_sets(std::make_shared<Snmp::Correlator::RuleSets>())
	,rules(std::make_shared<Snmp::Correlator::Rules>())
{
    rule_sets->parent = this;
    rules->parent = this;

    yang_name = "correlator"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Correlator::~Correlator()
{
}

bool Snmp::Correlator::has_data() const
{
    return buffer_size.is_set
	|| (rule_sets !=  nullptr && rule_sets->has_data())
	|| (rules !=  nullptr && rules->has_data());
}

bool Snmp::Correlator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(buffer_size.yfilter)
	|| (rule_sets !=  nullptr && rule_sets->has_operation())
	|| (rules !=  nullptr && rules->has_operation());
}

std::string Snmp::Correlator::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Correlator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "correlator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buffer_size.is_set || is_set(buffer_size.yfilter)) leaf_name_data.push_back(buffer_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Correlator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rule-sets")
    {
        if(rule_sets == nullptr)
        {
            rule_sets = std::make_shared<Snmp::Correlator::RuleSets>();
        }
        return rule_sets;
    }

    if(child_yang_name == "rules")
    {
        if(rules == nullptr)
        {
            rules = std::make_shared<Snmp::Correlator::Rules>();
        }
        return rules;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rule_sets != nullptr)
    {
        children["rule-sets"] = rule_sets;
    }

    if(rules != nullptr)
    {
        children["rules"] = rules;
    }

    return children;
}

void Snmp::Correlator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "buffer-size")
    {
        buffer_size = value;
        buffer_size.value_namespace = name_space;
        buffer_size.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Correlator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "buffer-size")
    {
        buffer_size.yfilter = yfilter;
    }
}

bool Snmp::Correlator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rule-sets" || name == "rules" || name == "buffer-size")
        return true;
    return false;
}

Snmp::Correlator::RuleSets::RuleSets()
{

    yang_name = "rule-sets"; yang_parent_name = "correlator"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Correlator::RuleSets::~RuleSets()
{
}

bool Snmp::Correlator::RuleSets::has_data() const
{
    for (std::size_t index=0; index<rule_set.size(); index++)
    {
        if(rule_set[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Correlator::RuleSets::has_operation() const
{
    for (std::size_t index=0; index<rule_set.size(); index++)
    {
        if(rule_set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Correlator::RuleSets::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/correlator/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Correlator::RuleSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule-sets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::RuleSets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Correlator::RuleSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rule-set")
    {
        for(auto const & c : rule_set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Correlator::RuleSets::RuleSet>();
        c->parent = this;
        rule_set.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::RuleSets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rule_set)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Correlator::RuleSets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Correlator::RuleSets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Correlator::RuleSets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rule-set")
        return true;
    return false;
}

Snmp::Correlator::RuleSets::RuleSet::RuleSet()
    :
    name{YType::str, "name"}
    	,
    applied_to(std::make_shared<Snmp::Correlator::RuleSets::RuleSet::AppliedTo>())
	,rulenames(std::make_shared<Snmp::Correlator::RuleSets::RuleSet::Rulenames>())
{
    applied_to->parent = this;
    rulenames->parent = this;

    yang_name = "rule-set"; yang_parent_name = "rule-sets"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Correlator::RuleSets::RuleSet::~RuleSet()
{
}

bool Snmp::Correlator::RuleSets::RuleSet::has_data() const
{
    return name.is_set
	|| (applied_to !=  nullptr && applied_to->has_data())
	|| (rulenames !=  nullptr && rulenames->has_data());
}

bool Snmp::Correlator::RuleSets::RuleSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (applied_to !=  nullptr && applied_to->has_operation())
	|| (rulenames !=  nullptr && rulenames->has_operation());
}

std::string Snmp::Correlator::RuleSets::RuleSet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/correlator/rule-sets/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Correlator::RuleSets::RuleSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule-set" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::RuleSets::RuleSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Correlator::RuleSets::RuleSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "applied-to")
    {
        if(applied_to == nullptr)
        {
            applied_to = std::make_shared<Snmp::Correlator::RuleSets::RuleSet::AppliedTo>();
        }
        return applied_to;
    }

    if(child_yang_name == "rulenames")
    {
        if(rulenames == nullptr)
        {
            rulenames = std::make_shared<Snmp::Correlator::RuleSets::RuleSet::Rulenames>();
        }
        return rulenames;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::RuleSets::RuleSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(applied_to != nullptr)
    {
        children["applied-to"] = applied_to;
    }

    if(rulenames != nullptr)
    {
        children["rulenames"] = rulenames;
    }

    return children;
}

void Snmp::Correlator::RuleSets::RuleSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Correlator::RuleSets::RuleSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Snmp::Correlator::RuleSets::RuleSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "applied-to" || name == "rulenames" || name == "name")
        return true;
    return false;
}

Snmp::Correlator::RuleSets::RuleSet::AppliedTo::AppliedTo()
    :
    all{YType::empty, "all"}
    	,
    hosts(std::make_shared<Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts>())
{
    hosts->parent = this;

    yang_name = "applied-to"; yang_parent_name = "rule-set"; is_top_level_class = false; has_list_ancestor = true;
}

Snmp::Correlator::RuleSets::RuleSet::AppliedTo::~AppliedTo()
{
}

bool Snmp::Correlator::RuleSets::RuleSet::AppliedTo::has_data() const
{
    return all.is_set
	|| (hosts !=  nullptr && hosts->has_data());
}

bool Snmp::Correlator::RuleSets::RuleSet::AppliedTo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| (hosts !=  nullptr && hosts->has_operation());
}

std::string Snmp::Correlator::RuleSets::RuleSet::AppliedTo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "applied-to";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::RuleSets::RuleSet::AppliedTo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Correlator::RuleSets::RuleSet::AppliedTo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hosts")
    {
        if(hosts == nullptr)
        {
            hosts = std::make_shared<Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts>();
        }
        return hosts;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::RuleSets::RuleSet::AppliedTo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hosts != nullptr)
    {
        children["hosts"] = hosts;
    }

    return children;
}

void Snmp::Correlator::RuleSets::RuleSet::AppliedTo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Correlator::RuleSets::RuleSet::AppliedTo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Snmp::Correlator::RuleSets::RuleSet::AppliedTo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hosts" || name == "all")
        return true;
    return false;
}

Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::Hosts()
{

    yang_name = "hosts"; yang_parent_name = "applied-to"; is_top_level_class = false; has_list_ancestor = true;
}

Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::~Hosts()
{
}

bool Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::has_data() const
{
    for (std::size_t index=0; index<host.size(); index++)
    {
        if(host[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::has_operation() const
{
    for (std::size_t index=0; index<host.size(); index++)
    {
        if(host[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hosts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host")
    {
        for(auto const & c : host)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::Host>();
        c->parent = this;
        host.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : host)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host")
        return true;
    return false;
}

Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::Host::Host()
    :
    ip_address{YType::str, "ip-address"},
    port{YType::uint16, "port"}
{

    yang_name = "host"; yang_parent_name = "hosts"; is_top_level_class = false; has_list_ancestor = true;
}

Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::Host::~Host()
{
}

bool Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::Host::has_data() const
{
    return ip_address.is_set
	|| port.is_set;
}

bool Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::Host::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host" <<"[ip-address='" <<ip_address <<"']" <<"[port='" <<port <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address" || name == "port")
        return true;
    return false;
}

Snmp::Correlator::RuleSets::RuleSet::Rulenames::Rulenames()
{

    yang_name = "rulenames"; yang_parent_name = "rule-set"; is_top_level_class = false; has_list_ancestor = true;
}

Snmp::Correlator::RuleSets::RuleSet::Rulenames::~Rulenames()
{
}

bool Snmp::Correlator::RuleSets::RuleSet::Rulenames::has_data() const
{
    for (std::size_t index=0; index<rulename.size(); index++)
    {
        if(rulename[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Correlator::RuleSets::RuleSet::Rulenames::has_operation() const
{
    for (std::size_t index=0; index<rulename.size(); index++)
    {
        if(rulename[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Correlator::RuleSets::RuleSet::Rulenames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rulenames";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::RuleSets::RuleSet::Rulenames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Correlator::RuleSets::RuleSet::Rulenames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rulename")
    {
        for(auto const & c : rulename)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Correlator::RuleSets::RuleSet::Rulenames::Rulename>();
        c->parent = this;
        rulename.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::RuleSets::RuleSet::Rulenames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rulename)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Correlator::RuleSets::RuleSet::Rulenames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Correlator::RuleSets::RuleSet::Rulenames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Correlator::RuleSets::RuleSet::Rulenames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rulename")
        return true;
    return false;
}

Snmp::Correlator::RuleSets::RuleSet::Rulenames::Rulename::Rulename()
    :
    rulename{YType::str, "rulename"}
{

    yang_name = "rulename"; yang_parent_name = "rulenames"; is_top_level_class = false; has_list_ancestor = true;
}

Snmp::Correlator::RuleSets::RuleSet::Rulenames::Rulename::~Rulename()
{
}

bool Snmp::Correlator::RuleSets::RuleSet::Rulenames::Rulename::has_data() const
{
    return rulename.is_set;
}

bool Snmp::Correlator::RuleSets::RuleSet::Rulenames::Rulename::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rulename.yfilter);
}

std::string Snmp::Correlator::RuleSets::RuleSet::Rulenames::Rulename::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rulename" <<"[rulename='" <<rulename <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::RuleSets::RuleSet::Rulenames::Rulename::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rulename.is_set || is_set(rulename.yfilter)) leaf_name_data.push_back(rulename.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Correlator::RuleSets::RuleSet::Rulenames::Rulename::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::RuleSets::RuleSet::Rulenames::Rulename::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Correlator::RuleSets::RuleSet::Rulenames::Rulename::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rulename")
    {
        rulename = value;
        rulename.value_namespace = name_space;
        rulename.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Correlator::RuleSets::RuleSet::Rulenames::Rulename::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rulename")
    {
        rulename.yfilter = yfilter;
    }
}

bool Snmp::Correlator::RuleSets::RuleSet::Rulenames::Rulename::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rulename")
        return true;
    return false;
}

Snmp::Correlator::Rules::Rules()
{

    yang_name = "rules"; yang_parent_name = "correlator"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Correlator::Rules::~Rules()
{
}

bool Snmp::Correlator::Rules::has_data() const
{
    for (std::size_t index=0; index<rule.size(); index++)
    {
        if(rule[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Correlator::Rules::has_operation() const
{
    for (std::size_t index=0; index<rule.size(); index++)
    {
        if(rule[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Correlator::Rules::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/correlator/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Correlator::Rules::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rules";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::Rules::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Correlator::Rules::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rule")
    {
        for(auto const & c : rule)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Correlator::Rules::Rule>();
        c->parent = this;
        rule.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::Rules::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rule)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Correlator::Rules::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Correlator::Rules::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Correlator::Rules::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rule")
        return true;
    return false;
}

Snmp::Correlator::Rules::Rule::Rule()
    :
    name{YType::str, "name"}
    	,
    applied_to(std::make_shared<Snmp::Correlator::Rules::Rule::AppliedTo>())
	,non_stateful(nullptr) // presence node
{
    applied_to->parent = this;

    yang_name = "rule"; yang_parent_name = "rules"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Correlator::Rules::Rule::~Rule()
{
}

bool Snmp::Correlator::Rules::Rule::has_data() const
{
    return name.is_set
	|| (applied_to !=  nullptr && applied_to->has_data())
	|| (non_stateful !=  nullptr && non_stateful->has_data());
}

bool Snmp::Correlator::Rules::Rule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (applied_to !=  nullptr && applied_to->has_operation())
	|| (non_stateful !=  nullptr && non_stateful->has_operation());
}

std::string Snmp::Correlator::Rules::Rule::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/correlator/rules/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Correlator::Rules::Rule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::Rules::Rule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Correlator::Rules::Rule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "applied-to")
    {
        if(applied_to == nullptr)
        {
            applied_to = std::make_shared<Snmp::Correlator::Rules::Rule::AppliedTo>();
        }
        return applied_to;
    }

    if(child_yang_name == "non-stateful")
    {
        if(non_stateful == nullptr)
        {
            non_stateful = std::make_shared<Snmp::Correlator::Rules::Rule::NonStateful>();
        }
        return non_stateful;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::Rules::Rule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(applied_to != nullptr)
    {
        children["applied-to"] = applied_to;
    }

    if(non_stateful != nullptr)
    {
        children["non-stateful"] = non_stateful;
    }

    return children;
}

void Snmp::Correlator::Rules::Rule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Correlator::Rules::Rule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Snmp::Correlator::Rules::Rule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "applied-to" || name == "non-stateful" || name == "name")
        return true;
    return false;
}

Snmp::Correlator::Rules::Rule::AppliedTo::AppliedTo()
    :
    all{YType::empty, "all"}
    	,
    hosts(std::make_shared<Snmp::Correlator::Rules::Rule::AppliedTo::Hosts>())
{
    hosts->parent = this;

    yang_name = "applied-to"; yang_parent_name = "rule"; is_top_level_class = false; has_list_ancestor = true;
}

Snmp::Correlator::Rules::Rule::AppliedTo::~AppliedTo()
{
}

bool Snmp::Correlator::Rules::Rule::AppliedTo::has_data() const
{
    return all.is_set
	|| (hosts !=  nullptr && hosts->has_data());
}

bool Snmp::Correlator::Rules::Rule::AppliedTo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| (hosts !=  nullptr && hosts->has_operation());
}

std::string Snmp::Correlator::Rules::Rule::AppliedTo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "applied-to";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::Rules::Rule::AppliedTo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Correlator::Rules::Rule::AppliedTo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hosts")
    {
        if(hosts == nullptr)
        {
            hosts = std::make_shared<Snmp::Correlator::Rules::Rule::AppliedTo::Hosts>();
        }
        return hosts;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::Rules::Rule::AppliedTo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hosts != nullptr)
    {
        children["hosts"] = hosts;
    }

    return children;
}

void Snmp::Correlator::Rules::Rule::AppliedTo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Correlator::Rules::Rule::AppliedTo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Snmp::Correlator::Rules::Rule::AppliedTo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hosts" || name == "all")
        return true;
    return false;
}

Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::Hosts()
{

    yang_name = "hosts"; yang_parent_name = "applied-to"; is_top_level_class = false; has_list_ancestor = true;
}

Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::~Hosts()
{
}

bool Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::has_data() const
{
    for (std::size_t index=0; index<host.size(); index++)
    {
        if(host[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::has_operation() const
{
    for (std::size_t index=0; index<host.size(); index++)
    {
        if(host[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hosts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host")
    {
        for(auto const & c : host)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::Host>();
        c->parent = this;
        host.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : host)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host")
        return true;
    return false;
}

Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::Host::Host()
    :
    ip_address{YType::str, "ip-address"},
    port{YType::uint16, "port"}
{

    yang_name = "host"; yang_parent_name = "hosts"; is_top_level_class = false; has_list_ancestor = true;
}

Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::Host::~Host()
{
}

bool Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::Host::has_data() const
{
    return ip_address.is_set
	|| port.is_set;
}

bool Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::Host::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host" <<"[ip-address='" <<ip_address <<"']" <<"[port='" <<port <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address" || name == "port")
        return true;
    return false;
}

Snmp::Correlator::Rules::Rule::NonStateful::NonStateful()
    :
    timeout{YType::uint32, "timeout"}
    	,
    non_root_causes(std::make_shared<Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses>())
	,root_causes(std::make_shared<Snmp::Correlator::Rules::Rule::NonStateful::RootCauses>())
{
    non_root_causes->parent = this;
    root_causes->parent = this;

    yang_name = "non-stateful"; yang_parent_name = "rule"; is_top_level_class = false; has_list_ancestor = true;
}

Snmp::Correlator::Rules::Rule::NonStateful::~NonStateful()
{
}

bool Snmp::Correlator::Rules::Rule::NonStateful::has_data() const
{
    return timeout.is_set
	|| (non_root_causes !=  nullptr && non_root_causes->has_data())
	|| (root_causes !=  nullptr && root_causes->has_data());
}

bool Snmp::Correlator::Rules::Rule::NonStateful::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| (non_root_causes !=  nullptr && non_root_causes->has_operation())
	|| (root_causes !=  nullptr && root_causes->has_operation());
}

std::string Snmp::Correlator::Rules::Rule::NonStateful::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-stateful";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::Rules::Rule::NonStateful::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Correlator::Rules::Rule::NonStateful::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "non-root-causes")
    {
        if(non_root_causes == nullptr)
        {
            non_root_causes = std::make_shared<Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses>();
        }
        return non_root_causes;
    }

    if(child_yang_name == "root-causes")
    {
        if(root_causes == nullptr)
        {
            root_causes = std::make_shared<Snmp::Correlator::Rules::Rule::NonStateful::RootCauses>();
        }
        return root_causes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::Rules::Rule::NonStateful::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(non_root_causes != nullptr)
    {
        children["non-root-causes"] = non_root_causes;
    }

    if(root_causes != nullptr)
    {
        children["root-causes"] = root_causes;
    }

    return children;
}

void Snmp::Correlator::Rules::Rule::NonStateful::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Correlator::Rules::Rule::NonStateful::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Snmp::Correlator::Rules::Rule::NonStateful::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "non-root-causes" || name == "root-causes" || name == "timeout")
        return true;
    return false;
}

Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCauses()
{

    yang_name = "non-root-causes"; yang_parent_name = "non-stateful"; is_top_level_class = false; has_list_ancestor = true;
}

Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::~NonRootCauses()
{
}

bool Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::has_data() const
{
    for (std::size_t index=0; index<non_root_cause.size(); index++)
    {
        if(non_root_cause[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::has_operation() const
{
    for (std::size_t index=0; index<non_root_cause.size(); index++)
    {
        if(non_root_cause[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-root-causes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "non-root-cause")
    {
        for(auto const & c : non_root_cause)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause>();
        c->parent = this;
        non_root_cause.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : non_root_cause)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "non-root-cause")
        return true;
    return false;
}

Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::NonRootCause()
    :
    oid{YType::str, "oid"},
    created{YType::empty, "created"}
    	,
    var_binds(std::make_shared<Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds>())
{
    var_binds->parent = this;

    yang_name = "non-root-cause"; yang_parent_name = "non-root-causes"; is_top_level_class = false; has_list_ancestor = true;
}

Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::~NonRootCause()
{
}

bool Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::has_data() const
{
    return oid.is_set
	|| created.is_set
	|| (var_binds !=  nullptr && var_binds->has_data());
}

bool Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oid.yfilter)
	|| ydk::is_set(created.yfilter)
	|| (var_binds !=  nullptr && var_binds->has_operation());
}

std::string Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-root-cause" <<"[oid='" <<oid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oid.is_set || is_set(oid.yfilter)) leaf_name_data.push_back(oid.get_name_leafdata());
    if (created.is_set || is_set(created.yfilter)) leaf_name_data.push_back(created.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "var-binds")
    {
        if(var_binds == nullptr)
        {
            var_binds = std::make_shared<Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds>();
        }
        return var_binds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(var_binds != nullptr)
    {
        children["var-binds"] = var_binds;
    }

    return children;
}

void Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oid")
    {
        oid = value;
        oid.value_namespace = name_space;
        oid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "created")
    {
        created = value;
        created.value_namespace = name_space;
        created.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oid")
    {
        oid.yfilter = yfilter;
    }
    if(value_path == "created")
    {
        created.yfilter = yfilter;
    }
}

bool Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "var-binds" || name == "oid" || name == "created")
        return true;
    return false;
}

Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBinds()
{

    yang_name = "var-binds"; yang_parent_name = "non-root-cause"; is_top_level_class = false; has_list_ancestor = true;
}

Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::~VarBinds()
{
}

bool Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::has_data() const
{
    for (std::size_t index=0; index<var_bind.size(); index++)
    {
        if(var_bind[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::has_operation() const
{
    for (std::size_t index=0; index<var_bind.size(); index++)
    {
        if(var_bind[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "var-binds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "var-bind")
    {
        for(auto const & c : var_bind)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind>();
        c->parent = this;
        var_bind.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : var_bind)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "var-bind")
        return true;
    return false;
}

Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind::VarBind()
    :
    oid{YType::str, "oid"}
    	,
    match(std::make_shared<Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind::Match>())
{
    match->parent = this;

    yang_name = "var-bind"; yang_parent_name = "var-binds"; is_top_level_class = false; has_list_ancestor = true;
}

Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind::~VarBind()
{
}

bool Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind::has_data() const
{
    return oid.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oid.yfilter)
	|| (match !=  nullptr && match->has_operation());
}

std::string Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "var-bind" <<"[oid='" <<oid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oid.is_set || is_set(oid.yfilter)) leaf_name_data.push_back(oid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oid")
    {
        oid = value;
        oid.value_namespace = name_space;
        oid.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oid")
    {
        oid.yfilter = yfilter;
    }
}

bool Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "oid")
        return true;
    return false;
}

Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind::Match::Match()
    :
    index_{YType::str, "index"},
    value_{YType::str, "value"}
{

    yang_name = "match"; yang_parent_name = "var-bind"; is_top_level_class = false; has_list_ancestor = true;
}

Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind::Match::~Match()
{
}

bool Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind::Match::has_data() const
{
    return index_.is_set
	|| value_.is_set;
}

bool Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind::Match::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "value")
        return true;
    return false;
}

Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCauses()
{

    yang_name = "root-causes"; yang_parent_name = "non-stateful"; is_top_level_class = false; has_list_ancestor = true;
}

Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::~RootCauses()
{
}

bool Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::has_data() const
{
    for (std::size_t index=0; index<root_cause.size(); index++)
    {
        if(root_cause[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::has_operation() const
{
    for (std::size_t index=0; index<root_cause.size(); index++)
    {
        if(root_cause[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "root-causes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "root-cause")
    {
        for(auto const & c : root_cause)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause>();
        c->parent = this;
        root_cause.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : root_cause)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "root-cause")
        return true;
    return false;
}

Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::RootCause()
    :
    oid{YType::str, "oid"},
    created{YType::empty, "created"}
    	,
    var_binds(std::make_shared<Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds>())
{
    var_binds->parent = this;

    yang_name = "root-cause"; yang_parent_name = "root-causes"; is_top_level_class = false; has_list_ancestor = true;
}

Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::~RootCause()
{
}

bool Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::has_data() const
{
    return oid.is_set
	|| created.is_set
	|| (var_binds !=  nullptr && var_binds->has_data());
}

bool Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oid.yfilter)
	|| ydk::is_set(created.yfilter)
	|| (var_binds !=  nullptr && var_binds->has_operation());
}

std::string Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "root-cause" <<"[oid='" <<oid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oid.is_set || is_set(oid.yfilter)) leaf_name_data.push_back(oid.get_name_leafdata());
    if (created.is_set || is_set(created.yfilter)) leaf_name_data.push_back(created.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "var-binds")
    {
        if(var_binds == nullptr)
        {
            var_binds = std::make_shared<Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds>();
        }
        return var_binds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(var_binds != nullptr)
    {
        children["var-binds"] = var_binds;
    }

    return children;
}

void Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oid")
    {
        oid = value;
        oid.value_namespace = name_space;
        oid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "created")
    {
        created = value;
        created.value_namespace = name_space;
        created.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oid")
    {
        oid.yfilter = yfilter;
    }
    if(value_path == "created")
    {
        created.yfilter = yfilter;
    }
}

bool Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "var-binds" || name == "oid" || name == "created")
        return true;
    return false;
}

Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBinds()
{

    yang_name = "var-binds"; yang_parent_name = "root-cause"; is_top_level_class = false; has_list_ancestor = true;
}

Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::~VarBinds()
{
}

bool Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::has_data() const
{
    for (std::size_t index=0; index<var_bind.size(); index++)
    {
        if(var_bind[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::has_operation() const
{
    for (std::size_t index=0; index<var_bind.size(); index++)
    {
        if(var_bind[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "var-binds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "var-bind")
    {
        for(auto const & c : var_bind)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind>();
        c->parent = this;
        var_bind.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : var_bind)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "var-bind")
        return true;
    return false;
}

Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind::VarBind()
    :
    oid{YType::str, "oid"}
    	,
    match(std::make_shared<Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind::Match>())
{
    match->parent = this;

    yang_name = "var-bind"; yang_parent_name = "var-binds"; is_top_level_class = false; has_list_ancestor = true;
}

Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind::~VarBind()
{
}

bool Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind::has_data() const
{
    return oid.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oid.yfilter)
	|| (match !=  nullptr && match->has_operation());
}

std::string Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "var-bind" <<"[oid='" <<oid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oid.is_set || is_set(oid.yfilter)) leaf_name_data.push_back(oid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oid")
    {
        oid = value;
        oid.value_namespace = name_space;
        oid.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oid")
    {
        oid.yfilter = yfilter;
    }
}

bool Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "oid")
        return true;
    return false;
}

Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind::Match::Match()
    :
    index_{YType::str, "index"},
    value_{YType::str, "value"}
{

    yang_name = "match"; yang_parent_name = "var-bind"; is_top_level_class = false; has_list_ancestor = true;
}

Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind::Match::~Match()
{
}

bool Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind::Match::has_data() const
{
    return index_.is_set
	|| value_.is_set;
}

bool Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind::Match::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "value")
        return true;
    return false;
}

Snmp::DefaultCommunityMaps::DefaultCommunityMaps()
{

    yang_name = "default-community-maps"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::DefaultCommunityMaps::~DefaultCommunityMaps()
{
}

bool Snmp::DefaultCommunityMaps::has_data() const
{
    for (std::size_t index=0; index<default_community_map.size(); index++)
    {
        if(default_community_map[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::DefaultCommunityMaps::has_operation() const
{
    for (std::size_t index=0; index<default_community_map.size(); index++)
    {
        if(default_community_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::DefaultCommunityMaps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::DefaultCommunityMaps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-community-maps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::DefaultCommunityMaps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::DefaultCommunityMaps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-community-map")
    {
        for(auto const & c : default_community_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::DefaultCommunityMaps::DefaultCommunityMap>();
        c->parent = this;
        default_community_map.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::DefaultCommunityMaps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : default_community_map)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::DefaultCommunityMaps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::DefaultCommunityMaps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::DefaultCommunityMaps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-community-map")
        return true;
    return false;
}

Snmp::DefaultCommunityMaps::DefaultCommunityMap::DefaultCommunityMap()
    :
    community_name{YType::str, "community-name"},
    context{YType::str, "context"},
    security{YType::str, "security"},
    target_list{YType::str, "target-list"}
{

    yang_name = "default-community-map"; yang_parent_name = "default-community-maps"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::DefaultCommunityMaps::DefaultCommunityMap::~DefaultCommunityMap()
{
}

bool Snmp::DefaultCommunityMaps::DefaultCommunityMap::has_data() const
{
    return community_name.is_set
	|| context.is_set
	|| security.is_set
	|| target_list.is_set;
}

bool Snmp::DefaultCommunityMaps::DefaultCommunityMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community_name.yfilter)
	|| ydk::is_set(context.yfilter)
	|| ydk::is_set(security.yfilter)
	|| ydk::is_set(target_list.yfilter);
}

std::string Snmp::DefaultCommunityMaps::DefaultCommunityMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/default-community-maps/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::DefaultCommunityMaps::DefaultCommunityMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-community-map" <<"[community-name='" <<community_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::DefaultCommunityMaps::DefaultCommunityMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_name.is_set || is_set(community_name.yfilter)) leaf_name_data.push_back(community_name.get_name_leafdata());
    if (context.is_set || is_set(context.yfilter)) leaf_name_data.push_back(context.get_name_leafdata());
    if (security.is_set || is_set(security.yfilter)) leaf_name_data.push_back(security.get_name_leafdata());
    if (target_list.is_set || is_set(target_list.yfilter)) leaf_name_data.push_back(target_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::DefaultCommunityMaps::DefaultCommunityMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::DefaultCommunityMaps::DefaultCommunityMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::DefaultCommunityMaps::DefaultCommunityMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community-name")
    {
        community_name = value;
        community_name.value_namespace = name_space;
        community_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "context")
    {
        context = value;
        context.value_namespace = name_space;
        context.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "security")
    {
        security = value;
        security.value_namespace = name_space;
        security.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-list")
    {
        target_list = value;
        target_list.value_namespace = name_space;
        target_list.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::DefaultCommunityMaps::DefaultCommunityMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community-name")
    {
        community_name.yfilter = yfilter;
    }
    if(value_path == "context")
    {
        context.yfilter = yfilter;
    }
    if(value_path == "security")
    {
        security.yfilter = yfilter;
    }
    if(value_path == "target-list")
    {
        target_list.yfilter = yfilter;
    }
}

bool Snmp::DefaultCommunityMaps::DefaultCommunityMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community-name" || name == "context" || name == "security" || name == "target-list")
        return true;
    return false;
}

Snmp::EncryptedCommunityMaps::EncryptedCommunityMaps()
{

    yang_name = "encrypted-community-maps"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::EncryptedCommunityMaps::~EncryptedCommunityMaps()
{
}

bool Snmp::EncryptedCommunityMaps::has_data() const
{
    for (std::size_t index=0; index<encrypted_community_map.size(); index++)
    {
        if(encrypted_community_map[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::EncryptedCommunityMaps::has_operation() const
{
    for (std::size_t index=0; index<encrypted_community_map.size(); index++)
    {
        if(encrypted_community_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::EncryptedCommunityMaps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::EncryptedCommunityMaps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encrypted-community-maps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::EncryptedCommunityMaps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::EncryptedCommunityMaps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encrypted-community-map")
    {
        for(auto const & c : encrypted_community_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::EncryptedCommunityMaps::EncryptedCommunityMap>();
        c->parent = this;
        encrypted_community_map.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::EncryptedCommunityMaps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : encrypted_community_map)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::EncryptedCommunityMaps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::EncryptedCommunityMaps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::EncryptedCommunityMaps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypted-community-map")
        return true;
    return false;
}

Snmp::EncryptedCommunityMaps::EncryptedCommunityMap::EncryptedCommunityMap()
    :
    community_name{YType::str, "community-name"},
    context{YType::str, "context"},
    security{YType::str, "security"},
    target_list{YType::str, "target-list"}
{

    yang_name = "encrypted-community-map"; yang_parent_name = "encrypted-community-maps"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::EncryptedCommunityMaps::EncryptedCommunityMap::~EncryptedCommunityMap()
{
}

bool Snmp::EncryptedCommunityMaps::EncryptedCommunityMap::has_data() const
{
    return community_name.is_set
	|| context.is_set
	|| security.is_set
	|| target_list.is_set;
}

bool Snmp::EncryptedCommunityMaps::EncryptedCommunityMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community_name.yfilter)
	|| ydk::is_set(context.yfilter)
	|| ydk::is_set(security.yfilter)
	|| ydk::is_set(target_list.yfilter);
}

std::string Snmp::EncryptedCommunityMaps::EncryptedCommunityMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/encrypted-community-maps/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::EncryptedCommunityMaps::EncryptedCommunityMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encrypted-community-map" <<"[community-name='" <<community_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::EncryptedCommunityMaps::EncryptedCommunityMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_name.is_set || is_set(community_name.yfilter)) leaf_name_data.push_back(community_name.get_name_leafdata());
    if (context.is_set || is_set(context.yfilter)) leaf_name_data.push_back(context.get_name_leafdata());
    if (security.is_set || is_set(security.yfilter)) leaf_name_data.push_back(security.get_name_leafdata());
    if (target_list.is_set || is_set(target_list.yfilter)) leaf_name_data.push_back(target_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::EncryptedCommunityMaps::EncryptedCommunityMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::EncryptedCommunityMaps::EncryptedCommunityMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::EncryptedCommunityMaps::EncryptedCommunityMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community-name")
    {
        community_name = value;
        community_name.value_namespace = name_space;
        community_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "context")
    {
        context = value;
        context.value_namespace = name_space;
        context.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "security")
    {
        security = value;
        security.value_namespace = name_space;
        security.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-list")
    {
        target_list = value;
        target_list.value_namespace = name_space;
        target_list.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::EncryptedCommunityMaps::EncryptedCommunityMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community-name")
    {
        community_name.yfilter = yfilter;
    }
    if(value_path == "context")
    {
        context.yfilter = yfilter;
    }
    if(value_path == "security")
    {
        security.yfilter = yfilter;
    }
    if(value_path == "target-list")
    {
        target_list.yfilter = yfilter;
    }
}

bool Snmp::EncryptedCommunityMaps::EncryptedCommunityMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community-name" || name == "context" || name == "security" || name == "target-list")
        return true;
    return false;
}

Snmp::Groups::Groups()
{

    yang_name = "groups"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Groups::~Groups()
{
}

bool Snmp::Groups::has_data() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return false;
}

bool Snmp::Groups::has_operation() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Snmp::Groups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Groups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Groups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Groups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        for(auto const & c : group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Snmp::Groups::Group>();
        c->parent = this;
        group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Groups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmp::Groups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Groups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Groups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Snmp::Groups::Group::Group()
    :
    name{YType::str, "name"},
    context_name{YType::str, "context-name"},
    notify_view{YType::str, "notify-view"},
    read_view{YType::str, "read-view"},
    security_model{YType::enumeration, "security-model"},
    snmp_version{YType::enumeration, "snmp-version"},
    v4_access_list{YType::str, "v4-access-list"},
    v4acl_type{YType::enumeration, "v4acl-type"},
    v6_access_list{YType::str, "v6-access-list"},
    v6acl_type{YType::enumeration, "v6acl-type"},
    write_view{YType::str, "write-view"}
{

    yang_name = "group"; yang_parent_name = "groups"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Groups::Group::~Group()
{
}

bool Snmp::Groups::Group::has_data() const
{
    return name.is_set
	|| context_name.is_set
	|| notify_view.is_set
	|| read_view.is_set
	|| security_model.is_set
	|| snmp_version.is_set
	|| v4_access_list.is_set
	|| v4acl_type.is_set
	|| v6_access_list.is_set
	|| v6acl_type.is_set
	|| write_view.is_set;
}

bool Snmp::Groups::Group::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(context_name.yfilter)
	|| ydk::is_set(notify_view.yfilter)
	|| ydk::is_set(read_view.yfilter)
	|| ydk::is_set(security_model.yfilter)
	|| ydk::is_set(snmp_version.yfilter)
	|| ydk::is_set(v4_access_list.yfilter)
	|| ydk::is_set(v4acl_type.yfilter)
	|| ydk::is_set(v6_access_list.yfilter)
	|| ydk::is_set(v6acl_type.yfilter)
	|| ydk::is_set(write_view.yfilter);
}

std::string Snmp::Groups::Group::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/groups/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Groups::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Groups::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (context_name.is_set || is_set(context_name.yfilter)) leaf_name_data.push_back(context_name.get_name_leafdata());
    if (notify_view.is_set || is_set(notify_view.yfilter)) leaf_name_data.push_back(notify_view.get_name_leafdata());
    if (read_view.is_set || is_set(read_view.yfilter)) leaf_name_data.push_back(read_view.get_name_leafdata());
    if (security_model.is_set || is_set(security_model.yfilter)) leaf_name_data.push_back(security_model.get_name_leafdata());
    if (snmp_version.is_set || is_set(snmp_version.yfilter)) leaf_name_data.push_back(snmp_version.get_name_leafdata());
    if (v4_access_list.is_set || is_set(v4_access_list.yfilter)) leaf_name_data.push_back(v4_access_list.get_name_leafdata());
    if (v4acl_type.is_set || is_set(v4acl_type.yfilter)) leaf_name_data.push_back(v4acl_type.get_name_leafdata());
    if (v6_access_list.is_set || is_set(v6_access_list.yfilter)) leaf_name_data.push_back(v6_access_list.get_name_leafdata());
    if (v6acl_type.is_set || is_set(v6acl_type.yfilter)) leaf_name_data.push_back(v6acl_type.get_name_leafdata());
    if (write_view.is_set || is_set(write_view.yfilter)) leaf_name_data.push_back(write_view.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Groups::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Groups::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Groups::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "context-name")
    {
        context_name = value;
        context_name.value_namespace = name_space;
        context_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notify-view")
    {
        notify_view = value;
        notify_view.value_namespace = name_space;
        notify_view.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "read-view")
    {
        read_view = value;
        read_view.value_namespace = name_space;
        read_view.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "security-model")
    {
        security_model = value;
        security_model.value_namespace = name_space;
        security_model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmp-version")
    {
        snmp_version = value;
        snmp_version.value_namespace = name_space;
        snmp_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v4-access-list")
    {
        v4_access_list = value;
        v4_access_list.value_namespace = name_space;
        v4_access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v4acl-type")
    {
        v4acl_type = value;
        v4acl_type.value_namespace = name_space;
        v4acl_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6-access-list")
    {
        v6_access_list = value;
        v6_access_list.value_namespace = name_space;
        v6_access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6acl-type")
    {
        v6acl_type = value;
        v6acl_type.value_namespace = name_space;
        v6acl_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "write-view")
    {
        write_view = value;
        write_view.value_namespace = name_space;
        write_view.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Groups::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "context-name")
    {
        context_name.yfilter = yfilter;
    }
    if(value_path == "notify-view")
    {
        notify_view.yfilter = yfilter;
    }
    if(value_path == "read-view")
    {
        read_view.yfilter = yfilter;
    }
    if(value_path == "security-model")
    {
        security_model.yfilter = yfilter;
    }
    if(value_path == "snmp-version")
    {
        snmp_version.yfilter = yfilter;
    }
    if(value_path == "v4-access-list")
    {
        v4_access_list.yfilter = yfilter;
    }
    if(value_path == "v4acl-type")
    {
        v4acl_type.yfilter = yfilter;
    }
    if(value_path == "v6-access-list")
    {
        v6_access_list.yfilter = yfilter;
    }
    if(value_path == "v6acl-type")
    {
        v6acl_type.yfilter = yfilter;
    }
    if(value_path == "write-view")
    {
        write_view.yfilter = yfilter;
    }
}

bool Snmp::Groups::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "context-name" || name == "notify-view" || name == "read-view" || name == "security-model" || name == "snmp-version" || name == "v4-access-list" || name == "v4acl-type" || name == "v6-access-list" || name == "v6acl-type" || name == "write-view")
        return true;
    return false;
}

Snmp::Ipv4::Ipv4()
    :
    tos(std::make_shared<Snmp::Ipv4::Tos>())
{
    tos->parent = this;

    yang_name = "ipv4"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Ipv4::~Ipv4()
{
}

bool Snmp::Ipv4::has_data() const
{
    return (tos !=  nullptr && tos->has_data());
}

bool Snmp::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| (tos !=  nullptr && tos->has_operation());
}

std::string Snmp::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tos")
    {
        if(tos == nullptr)
        {
            tos = std::make_shared<Snmp::Ipv4::Tos>();
        }
        return tos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tos != nullptr)
    {
        children["tos"] = tos;
    }

    return children;
}

void Snmp::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tos")
        return true;
    return false;
}

Snmp::Ipv4::Tos::Tos()
    :
    dscp{YType::str, "dscp"},
    precedence{YType::str, "precedence"},
    type{YType::enumeration, "type"}
{

    yang_name = "tos"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Ipv4::Tos::~Tos()
{
}

bool Snmp::Ipv4::Tos::has_data() const
{
    return dscp.is_set
	|| precedence.is_set
	|| type.is_set;
}

bool Snmp::Ipv4::Tos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Snmp::Ipv4::Tos::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Ipv4::Tos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Ipv4::Tos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.yfilter)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Ipv4::Tos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Ipv4::Tos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Ipv4::Tos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence = value;
        precedence.value_namespace = name_space;
        precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Ipv4::Tos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Snmp::Ipv4::Tos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp" || name == "precedence" || name == "type")
        return true;
    return false;
}

Snmp::Ipv6::Ipv6()
    :
    tos(std::make_shared<Snmp::Ipv6::Tos>())
{
    tos->parent = this;

    yang_name = "ipv6"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Ipv6::~Ipv6()
{
}

bool Snmp::Ipv6::has_data() const
{
    return (tos !=  nullptr && tos->has_data());
}

bool Snmp::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| (tos !=  nullptr && tos->has_operation());
}

std::string Snmp::Ipv6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tos")
    {
        if(tos == nullptr)
        {
            tos = std::make_shared<Snmp::Ipv6::Tos>();
        }
        return tos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tos != nullptr)
    {
        children["tos"] = tos;
    }

    return children;
}

void Snmp::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tos")
        return true;
    return false;
}

Snmp::Ipv6::Tos::Tos()
    :
    dscp{YType::str, "dscp"},
    precedence{YType::str, "precedence"},
    type{YType::enumeration, "type"}
{

    yang_name = "tos"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Ipv6::Tos::~Tos()
{
}

bool Snmp::Ipv6::Tos::has_data() const
{
    return dscp.is_set
	|| precedence.is_set
	|| type.is_set;
}

bool Snmp::Ipv6::Tos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Snmp::Ipv6::Tos::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Ipv6::Tos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Ipv6::Tos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.yfilter)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Ipv6::Tos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Ipv6::Tos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Ipv6::Tos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence = value;
        precedence.value_namespace = name_space;
        precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Ipv6::Tos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Snmp::Ipv6::Tos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp" || name == "precedence" || name == "type")
        return true;
    return false;
}

Snmp::Logging::Logging()
    :
    threshold(std::make_shared<Snmp::Logging::Threshold>())
{
    threshold->parent = this;

    yang_name = "logging"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Logging::~Logging()
{
}

bool Snmp::Logging::has_data() const
{
    return (threshold !=  nullptr && threshold->has_data());
}

bool Snmp::Logging::has_operation() const
{
    return is_set(yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Snmp::Logging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Snmp::Logging::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Snmp::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Snmp::Logging::Threshold::Threshold()
    :
    oid_processing{YType::uint32, "oid-processing"},
    pdu_processing{YType::uint32, "pdu-processing"}
{

    yang_name = "threshold"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Logging::Threshold::~Threshold()
{
}

bool Snmp::Logging::Threshold::has_data() const
{
    return oid_processing.is_set
	|| pdu_processing.is_set;
}

bool Snmp::Logging::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oid_processing.yfilter)
	|| ydk::is_set(pdu_processing.yfilter);
}

std::string Snmp::Logging::Threshold::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Logging::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Logging::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oid_processing.is_set || is_set(oid_processing.yfilter)) leaf_name_data.push_back(oid_processing.get_name_leafdata());
    if (pdu_processing.is_set || is_set(pdu_processing.yfilter)) leaf_name_data.push_back(pdu_processing.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Logging::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Logging::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Logging::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oid-processing")
    {
        oid_processing = value;
        oid_processing.value_namespace = name_space;
        oid_processing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pdu-processing")
    {
        pdu_processing = value;
        pdu_processing.value_namespace = name_space;
        pdu_processing.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Logging::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oid-processing")
    {
        oid_processing.yfilter = yfilter;
    }
    if(value_path == "pdu-processing")
    {
        pdu_processing.yfilter = yfilter;
    }
}

bool Snmp::Logging::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oid-processing" || name == "pdu-processing")
        return true;
    return false;
}

Snmp::Notification::Notification()
    :
    addresspool_mib(std::make_shared<Snmp::Notification::AddresspoolMib>())
	,bfd(std::make_shared<Snmp::Notification::Bfd>())
	,bgp(std::make_shared<Snmp::Notification::Bgp>())
	,bridge(std::make_shared<Snmp::Notification::Bridge>())
	,cfm(std::make_shared<Snmp::Notification::Cfm>())
	,cisco_ios_xr_freqsync_cfg_frequency_synchronization(std::make_shared<Snmp::Notification::CiscoIOSXRFreqsyncCfgFrequencySynchronization>())
	,cisco_ios_xr_ncs4k_freqsync_cfg_frequency_synchronization(std::make_shared<Snmp::Notification::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization>())
	,config_copy(std::make_shared<Snmp::Notification::ConfigCopy>())
	,config_man(std::make_shared<Snmp::Notification::ConfigMan>())
	,diametermib(std::make_shared<Snmp::Notification::Diametermib>())
	,entity_(std::make_shared<Snmp::Notification::Entity_>())
	,entity_redundancy(std::make_shared<Snmp::Notification::EntityRedundancy>())
	,entity_state(std::make_shared<Snmp::Notification::EntityState>())
	,fabric_crs(std::make_shared<Snmp::Notification::FabricCrs>())
	,flash(std::make_shared<Snmp::Notification::Flash>())
	,fru_control(std::make_shared<Snmp::Notification::FruControl>())
	,hsrp(std::make_shared<Snmp::Notification::Hsrp>())
	,isis(std::make_shared<Snmp::Notification::Isis>())
	,l2tun(std::make_shared<Snmp::Notification::L2Tun>())
	,l2vpn(std::make_shared<Snmp::Notification::L2Vpn>())
	,mpls_frr(std::make_shared<Snmp::Notification::MplsFrr>())
	,mpls_l3vpn(std::make_shared<Snmp::Notification::MplsL3Vpn>())
	,mpls_ldp(std::make_shared<Snmp::Notification::MplsLdp>())
	,mpls_te(std::make_shared<Snmp::Notification::MplsTe>())
	,mpls_te_p2mp(std::make_shared<Snmp::Notification::MplsTeP2Mp>())
	,ntp(std::make_shared<Snmp::Notification::Ntp>())
	,oam(std::make_shared<Snmp::Notification::Oam>())
	,optical(std::make_shared<Snmp::Notification::Optical>())
	,optical_ots(std::make_shared<Snmp::Notification::OpticalOts>())
	,ospf(std::make_shared<Snmp::Notification::Ospf>())
	,ospfv3(std::make_shared<Snmp::Notification::Ospfv3>())
	,otn(std::make_shared<Snmp::Notification::Otn>())
	,rf(std::make_shared<Snmp::Notification::Rf>())
	,rsvp(std::make_shared<Snmp::Notification::Rsvp>())
	,selective_vrf_download(std::make_shared<Snmp::Notification::SelectiveVrfDownload>())
	,sensor(std::make_shared<Snmp::Notification::Sensor>())
	,snmp(std::make_shared<Snmp::Notification::Snmp_>())
	,subscriber_mib(std::make_shared<Snmp::Notification::SubscriberMib>())
	,syslog(std::make_shared<Snmp::Notification::Syslog>())
	,system(std::make_shared<Snmp::Notification::System>())
	,vpls(std::make_shared<Snmp::Notification::Vpls>())
	,vrrp(std::make_shared<Snmp::Notification::Vrrp>())
{
    addresspool_mib->parent = this;
    bfd->parent = this;
    bgp->parent = this;
    bridge->parent = this;
    cfm->parent = this;
    cisco_ios_xr_freqsync_cfg_frequency_synchronization->parent = this;
    cisco_ios_xr_ncs4k_freqsync_cfg_frequency_synchronization->parent = this;
    config_copy->parent = this;
    config_man->parent = this;
    diametermib->parent = this;
    entity_->parent = this;
    entity_redundancy->parent = this;
    entity_state->parent = this;
    fabric_crs->parent = this;
    flash->parent = this;
    fru_control->parent = this;
    hsrp->parent = this;
    isis->parent = this;
    l2tun->parent = this;
    l2vpn->parent = this;
    mpls_frr->parent = this;
    mpls_l3vpn->parent = this;
    mpls_ldp->parent = this;
    mpls_te->parent = this;
    mpls_te_p2mp->parent = this;
    ntp->parent = this;
    oam->parent = this;
    optical->parent = this;
    optical_ots->parent = this;
    ospf->parent = this;
    ospfv3->parent = this;
    otn->parent = this;
    rf->parent = this;
    rsvp->parent = this;
    selective_vrf_download->parent = this;
    sensor->parent = this;
    snmp->parent = this;
    subscriber_mib->parent = this;
    syslog->parent = this;
    system->parent = this;
    vpls->parent = this;
    vrrp->parent = this;

    yang_name = "notification"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Notification::~Notification()
{
}

bool Snmp::Notification::has_data() const
{
    return (addresspool_mib !=  nullptr && addresspool_mib->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (bgp !=  nullptr && bgp->has_data())
	|| (bridge !=  nullptr && bridge->has_data())
	|| (cfm !=  nullptr && cfm->has_data())
	|| (cisco_ios_xr_freqsync_cfg_frequency_synchronization !=  nullptr && cisco_ios_xr_freqsync_cfg_frequency_synchronization->has_data())
	|| (cisco_ios_xr_ncs4k_freqsync_cfg_frequency_synchronization !=  nullptr && cisco_ios_xr_ncs4k_freqsync_cfg_frequency_synchronization->has_data())
	|| (config_copy !=  nullptr && config_copy->has_data())
	|| (config_man !=  nullptr && config_man->has_data())
	|| (diametermib !=  nullptr && diametermib->has_data())
	|| (entity_ !=  nullptr && entity_->has_data())
	|| (entity_redundancy !=  nullptr && entity_redundancy->has_data())
	|| (entity_state !=  nullptr && entity_state->has_data())
	|| (fabric_crs !=  nullptr && fabric_crs->has_data())
	|| (flash !=  nullptr && flash->has_data())
	|| (fru_control !=  nullptr && fru_control->has_data())
	|| (hsrp !=  nullptr && hsrp->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (l2tun !=  nullptr && l2tun->has_data())
	|| (l2vpn !=  nullptr && l2vpn->has_data())
	|| (mpls_frr !=  nullptr && mpls_frr->has_data())
	|| (mpls_l3vpn !=  nullptr && mpls_l3vpn->has_data())
	|| (mpls_ldp !=  nullptr && mpls_ldp->has_data())
	|| (mpls_te !=  nullptr && mpls_te->has_data())
	|| (mpls_te_p2mp !=  nullptr && mpls_te_p2mp->has_data())
	|| (ntp !=  nullptr && ntp->has_data())
	|| (oam !=  nullptr && oam->has_data())
	|| (optical !=  nullptr && optical->has_data())
	|| (optical_ots !=  nullptr && optical_ots->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (ospfv3 !=  nullptr && ospfv3->has_data())
	|| (otn !=  nullptr && otn->has_data())
	|| (rf !=  nullptr && rf->has_data())
	|| (rsvp !=  nullptr && rsvp->has_data())
	|| (selective_vrf_download !=  nullptr && selective_vrf_download->has_data())
	|| (sensor !=  nullptr && sensor->has_data())
	|| (snmp !=  nullptr && snmp->has_data())
	|| (subscriber_mib !=  nullptr && subscriber_mib->has_data())
	|| (syslog !=  nullptr && syslog->has_data())
	|| (system !=  nullptr && system->has_data())
	|| (vpls !=  nullptr && vpls->has_data())
	|| (vrrp !=  nullptr && vrrp->has_data());
}

bool Snmp::Notification::has_operation() const
{
    return is_set(yfilter)
	|| (addresspool_mib !=  nullptr && addresspool_mib->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (bridge !=  nullptr && bridge->has_operation())
	|| (cfm !=  nullptr && cfm->has_operation())
	|| (cisco_ios_xr_freqsync_cfg_frequency_synchronization !=  nullptr && cisco_ios_xr_freqsync_cfg_frequency_synchronization->has_operation())
	|| (cisco_ios_xr_ncs4k_freqsync_cfg_frequency_synchronization !=  nullptr && cisco_ios_xr_ncs4k_freqsync_cfg_frequency_synchronization->has_operation())
	|| (config_copy !=  nullptr && config_copy->has_operation())
	|| (config_man !=  nullptr && config_man->has_operation())
	|| (diametermib !=  nullptr && diametermib->has_operation())
	|| (entity_ !=  nullptr && entity_->has_operation())
	|| (entity_redundancy !=  nullptr && entity_redundancy->has_operation())
	|| (entity_state !=  nullptr && entity_state->has_operation())
	|| (fabric_crs !=  nullptr && fabric_crs->has_operation())
	|| (flash !=  nullptr && flash->has_operation())
	|| (fru_control !=  nullptr && fru_control->has_operation())
	|| (hsrp !=  nullptr && hsrp->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (l2tun !=  nullptr && l2tun->has_operation())
	|| (l2vpn !=  nullptr && l2vpn->has_operation())
	|| (mpls_frr !=  nullptr && mpls_frr->has_operation())
	|| (mpls_l3vpn !=  nullptr && mpls_l3vpn->has_operation())
	|| (mpls_ldp !=  nullptr && mpls_ldp->has_operation())
	|| (mpls_te !=  nullptr && mpls_te->has_operation())
	|| (mpls_te_p2mp !=  nullptr && mpls_te_p2mp->has_operation())
	|| (ntp !=  nullptr && ntp->has_operation())
	|| (oam !=  nullptr && oam->has_operation())
	|| (optical !=  nullptr && optical->has_operation())
	|| (optical_ots !=  nullptr && optical_ots->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (ospfv3 !=  nullptr && ospfv3->has_operation())
	|| (otn !=  nullptr && otn->has_operation())
	|| (rf !=  nullptr && rf->has_operation())
	|| (rsvp !=  nullptr && rsvp->has_operation())
	|| (selective_vrf_download !=  nullptr && selective_vrf_download->has_operation())
	|| (sensor !=  nullptr && sensor->has_operation())
	|| (snmp !=  nullptr && snmp->has_operation())
	|| (subscriber_mib !=  nullptr && subscriber_mib->has_operation())
	|| (syslog !=  nullptr && syslog->has_operation())
	|| (system !=  nullptr && system->has_operation())
	|| (vpls !=  nullptr && vpls->has_operation())
	|| (vrrp !=  nullptr && vrrp->has_operation());
}

std::string Snmp::Notification::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notification";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Notification::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addresspool-mib")
    {
        if(addresspool_mib == nullptr)
        {
            addresspool_mib = std::make_shared<Snmp::Notification::AddresspoolMib>();
        }
        return addresspool_mib;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Snmp::Notification::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Snmp::Notification::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "bridge")
    {
        if(bridge == nullptr)
        {
            bridge = std::make_shared<Snmp::Notification::Bridge>();
        }
        return bridge;
    }

    if(child_yang_name == "cfm")
    {
        if(cfm == nullptr)
        {
            cfm = std::make_shared<Snmp::Notification::Cfm>();
        }
        return cfm;
    }

    if(child_yang_name == "Cisco-IOS-XR-freqsync-cfg_frequency-synchronization")
    {
        if(cisco_ios_xr_freqsync_cfg_frequency_synchronization == nullptr)
        {
            cisco_ios_xr_freqsync_cfg_frequency_synchronization = std::make_shared<Snmp::Notification::CiscoIOSXRFreqsyncCfgFrequencySynchronization>();
        }
        return cisco_ios_xr_freqsync_cfg_frequency_synchronization;
    }

    if(child_yang_name == "Cisco-IOS-XR-ncs4k-freqsync-cfg_frequency-synchronization")
    {
        if(cisco_ios_xr_ncs4k_freqsync_cfg_frequency_synchronization == nullptr)
        {
            cisco_ios_xr_ncs4k_freqsync_cfg_frequency_synchronization = std::make_shared<Snmp::Notification::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization>();
        }
        return cisco_ios_xr_ncs4k_freqsync_cfg_frequency_synchronization;
    }

    if(child_yang_name == "config-copy")
    {
        if(config_copy == nullptr)
        {
            config_copy = std::make_shared<Snmp::Notification::ConfigCopy>();
        }
        return config_copy;
    }

    if(child_yang_name == "config-man")
    {
        if(config_man == nullptr)
        {
            config_man = std::make_shared<Snmp::Notification::ConfigMan>();
        }
        return config_man;
    }

    if(child_yang_name == "diametermib")
    {
        if(diametermib == nullptr)
        {
            diametermib = std::make_shared<Snmp::Notification::Diametermib>();
        }
        return diametermib;
    }

    if(child_yang_name == "entity")
    {
        if(entity_ == nullptr)
        {
            entity_ = std::make_shared<Snmp::Notification::Entity_>();
        }
        return entity_;
    }

    if(child_yang_name == "entity-redundancy")
    {
        if(entity_redundancy == nullptr)
        {
            entity_redundancy = std::make_shared<Snmp::Notification::EntityRedundancy>();
        }
        return entity_redundancy;
    }

    if(child_yang_name == "entity-state")
    {
        if(entity_state == nullptr)
        {
            entity_state = std::make_shared<Snmp::Notification::EntityState>();
        }
        return entity_state;
    }

    if(child_yang_name == "fabric-crs")
    {
        if(fabric_crs == nullptr)
        {
            fabric_crs = std::make_shared<Snmp::Notification::FabricCrs>();
        }
        return fabric_crs;
    }

    if(child_yang_name == "flash")
    {
        if(flash == nullptr)
        {
            flash = std::make_shared<Snmp::Notification::Flash>();
        }
        return flash;
    }

    if(child_yang_name == "fru-control")
    {
        if(fru_control == nullptr)
        {
            fru_control = std::make_shared<Snmp::Notification::FruControl>();
        }
        return fru_control;
    }

    if(child_yang_name == "hsrp")
    {
        if(hsrp == nullptr)
        {
            hsrp = std::make_shared<Snmp::Notification::Hsrp>();
        }
        return hsrp;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Snmp::Notification::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "l2tun")
    {
        if(l2tun == nullptr)
        {
            l2tun = std::make_shared<Snmp::Notification::L2Tun>();
        }
        return l2tun;
    }

    if(child_yang_name == "l2vpn")
    {
        if(l2vpn == nullptr)
        {
            l2vpn = std::make_shared<Snmp::Notification::L2Vpn>();
        }
        return l2vpn;
    }

    if(child_yang_name == "mpls-frr")
    {
        if(mpls_frr == nullptr)
        {
            mpls_frr = std::make_shared<Snmp::Notification::MplsFrr>();
        }
        return mpls_frr;
    }

    if(child_yang_name == "mpls-l3vpn")
    {
        if(mpls_l3vpn == nullptr)
        {
            mpls_l3vpn = std::make_shared<Snmp::Notification::MplsL3Vpn>();
        }
        return mpls_l3vpn;
    }

    if(child_yang_name == "mpls-ldp")
    {
        if(mpls_ldp == nullptr)
        {
            mpls_ldp = std::make_shared<Snmp::Notification::MplsLdp>();
        }
        return mpls_ldp;
    }

    if(child_yang_name == "mpls-te")
    {
        if(mpls_te == nullptr)
        {
            mpls_te = std::make_shared<Snmp::Notification::MplsTe>();
        }
        return mpls_te;
    }

    if(child_yang_name == "mpls-te-p2mp")
    {
        if(mpls_te_p2mp == nullptr)
        {
            mpls_te_p2mp = std::make_shared<Snmp::Notification::MplsTeP2Mp>();
        }
        return mpls_te_p2mp;
    }

    if(child_yang_name == "ntp")
    {
        if(ntp == nullptr)
        {
            ntp = std::make_shared<Snmp::Notification::Ntp>();
        }
        return ntp;
    }

    if(child_yang_name == "oam")
    {
        if(oam == nullptr)
        {
            oam = std::make_shared<Snmp::Notification::Oam>();
        }
        return oam;
    }

    if(child_yang_name == "optical")
    {
        if(optical == nullptr)
        {
            optical = std::make_shared<Snmp::Notification::Optical>();
        }
        return optical;
    }

    if(child_yang_name == "optical-ots")
    {
        if(optical_ots == nullptr)
        {
            optical_ots = std::make_shared<Snmp::Notification::OpticalOts>();
        }
        return optical_ots;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<Snmp::Notification::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "ospfv3")
    {
        if(ospfv3 == nullptr)
        {
            ospfv3 = std::make_shared<Snmp::Notification::Ospfv3>();
        }
        return ospfv3;
    }

    if(child_yang_name == "otn")
    {
        if(otn == nullptr)
        {
            otn = std::make_shared<Snmp::Notification::Otn>();
        }
        return otn;
    }

    if(child_yang_name == "rf")
    {
        if(rf == nullptr)
        {
            rf = std::make_shared<Snmp::Notification::Rf>();
        }
        return rf;
    }

    if(child_yang_name == "rsvp")
    {
        if(rsvp == nullptr)
        {
            rsvp = std::make_shared<Snmp::Notification::Rsvp>();
        }
        return rsvp;
    }

    if(child_yang_name == "selective-vrf-download")
    {
        if(selective_vrf_download == nullptr)
        {
            selective_vrf_download = std::make_shared<Snmp::Notification::SelectiveVrfDownload>();
        }
        return selective_vrf_download;
    }

    if(child_yang_name == "sensor")
    {
        if(sensor == nullptr)
        {
            sensor = std::make_shared<Snmp::Notification::Sensor>();
        }
        return sensor;
    }

    if(child_yang_name == "snmp")
    {
        if(snmp == nullptr)
        {
            snmp = std::make_shared<Snmp::Notification::Snmp_>();
        }
        return snmp;
    }

    if(child_yang_name == "subscriber-mib")
    {
        if(subscriber_mib == nullptr)
        {
            subscriber_mib = std::make_shared<Snmp::Notification::SubscriberMib>();
        }
        return subscriber_mib;
    }

    if(child_yang_name == "syslog")
    {
        if(syslog == nullptr)
        {
            syslog = std::make_shared<Snmp::Notification::Syslog>();
        }
        return syslog;
    }

    if(child_yang_name == "system")
    {
        if(system == nullptr)
        {
            system = std::make_shared<Snmp::Notification::System>();
        }
        return system;
    }

    if(child_yang_name == "vpls")
    {
        if(vpls == nullptr)
        {
            vpls = std::make_shared<Snmp::Notification::Vpls>();
        }
        return vpls;
    }

    if(child_yang_name == "vrrp")
    {
        if(vrrp == nullptr)
        {
            vrrp = std::make_shared<Snmp::Notification::Vrrp>();
        }
        return vrrp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(addresspool_mib != nullptr)
    {
        children["addresspool-mib"] = addresspool_mib;
    }

    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(bridge != nullptr)
    {
        children["bridge"] = bridge;
    }

    if(cfm != nullptr)
    {
        children["cfm"] = cfm;
    }

    if(cisco_ios_xr_freqsync_cfg_frequency_synchronization != nullptr)
    {
        children["Cisco-IOS-XR-freqsync-cfg_frequency-synchronization"] = cisco_ios_xr_freqsync_cfg_frequency_synchronization;
    }

    if(cisco_ios_xr_ncs4k_freqsync_cfg_frequency_synchronization != nullptr)
    {
        children["Cisco-IOS-XR-ncs4k-freqsync-cfg_frequency-synchronization"] = cisco_ios_xr_ncs4k_freqsync_cfg_frequency_synchronization;
    }

    if(config_copy != nullptr)
    {
        children["config-copy"] = config_copy;
    }

    if(config_man != nullptr)
    {
        children["config-man"] = config_man;
    }

    if(diametermib != nullptr)
    {
        children["diametermib"] = diametermib;
    }

    if(entity_ != nullptr)
    {
        children["entity"] = entity_;
    }

    if(entity_redundancy != nullptr)
    {
        children["entity-redundancy"] = entity_redundancy;
    }

    if(entity_state != nullptr)
    {
        children["entity-state"] = entity_state;
    }

    if(fabric_crs != nullptr)
    {
        children["fabric-crs"] = fabric_crs;
    }

    if(flash != nullptr)
    {
        children["flash"] = flash;
    }

    if(fru_control != nullptr)
    {
        children["fru-control"] = fru_control;
    }

    if(hsrp != nullptr)
    {
        children["hsrp"] = hsrp;
    }

    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(l2tun != nullptr)
    {
        children["l2tun"] = l2tun;
    }

    if(l2vpn != nullptr)
    {
        children["l2vpn"] = l2vpn;
    }

    if(mpls_frr != nullptr)
    {
        children["mpls-frr"] = mpls_frr;
    }

    if(mpls_l3vpn != nullptr)
    {
        children["mpls-l3vpn"] = mpls_l3vpn;
    }

    if(mpls_ldp != nullptr)
    {
        children["mpls-ldp"] = mpls_ldp;
    }

    if(mpls_te != nullptr)
    {
        children["mpls-te"] = mpls_te;
    }

    if(mpls_te_p2mp != nullptr)
    {
        children["mpls-te-p2mp"] = mpls_te_p2mp;
    }

    if(ntp != nullptr)
    {
        children["ntp"] = ntp;
    }

    if(oam != nullptr)
    {
        children["oam"] = oam;
    }

    if(optical != nullptr)
    {
        children["optical"] = optical;
    }

    if(optical_ots != nullptr)
    {
        children["optical-ots"] = optical_ots;
    }

    if(ospf != nullptr)
    {
        children["ospf"] = ospf;
    }

    if(ospfv3 != nullptr)
    {
        children["ospfv3"] = ospfv3;
    }

    if(otn != nullptr)
    {
        children["otn"] = otn;
    }

    if(rf != nullptr)
    {
        children["rf"] = rf;
    }

    if(rsvp != nullptr)
    {
        children["rsvp"] = rsvp;
    }

    if(selective_vrf_download != nullptr)
    {
        children["selective-vrf-download"] = selective_vrf_download;
    }

    if(sensor != nullptr)
    {
        children["sensor"] = sensor;
    }

    if(snmp != nullptr)
    {
        children["snmp"] = snmp;
    }

    if(subscriber_mib != nullptr)
    {
        children["subscriber-mib"] = subscriber_mib;
    }

    if(syslog != nullptr)
    {
        children["syslog"] = syslog;
    }

    if(system != nullptr)
    {
        children["system"] = system;
    }

    if(vpls != nullptr)
    {
        children["vpls"] = vpls;
    }

    if(vrrp != nullptr)
    {
        children["vrrp"] = vrrp;
    }

    return children;
}

void Snmp::Notification::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Notification::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Notification::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addresspool-mib" || name == "bfd" || name == "bgp" || name == "bridge" || name == "cfm" || name == "Cisco-IOS-XR-freqsync-cfg_frequency-synchronization" || name == "Cisco-IOS-XR-ncs4k-freqsync-cfg_frequency-synchronization" || name == "config-copy" || name == "config-man" || name == "diametermib" || name == "entity" || name == "entity-redundancy" || name == "entity-state" || name == "fabric-crs" || name == "flash" || name == "fru-control" || name == "hsrp" || name == "isis" || name == "l2tun" || name == "l2vpn" || name == "mpls-frr" || name == "mpls-l3vpn" || name == "mpls-ldp" || name == "mpls-te" || name == "mpls-te-p2mp" || name == "ntp" || name == "oam" || name == "optical" || name == "optical-ots" || name == "ospf" || name == "ospfv3" || name == "otn" || name == "rf" || name == "rsvp" || name == "selective-vrf-download" || name == "sensor" || name == "snmp" || name == "subscriber-mib" || name == "syslog" || name == "system" || name == "vpls" || name == "vrrp")
        return true;
    return false;
}

Snmp::Notification::AddresspoolMib::AddresspoolMib()
    :
    high{YType::boolean, "high"},
    low{YType::boolean, "low"}
{

    yang_name = "addresspool-mib"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Notification::AddresspoolMib::~AddresspoolMib()
{
}

bool Snmp::Notification::AddresspoolMib::has_data() const
{
    return high.is_set
	|| low.is_set;
}

bool Snmp::Notification::AddresspoolMib::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(low.yfilter);
}

std::string Snmp::Notification::AddresspoolMib::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::AddresspoolMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-daps-mib-cfg:addresspool-mib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::AddresspoolMib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Notification::AddresspoolMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::AddresspoolMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::AddresspoolMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "high")
    {
        high = value;
        high.value_namespace = name_space;
        high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::AddresspoolMib::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Snmp::Notification::AddresspoolMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high" || name == "low")
        return true;
    return false;
}

Snmp::Notification::Bfd::Bfd()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "bfd"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Notification::Bfd::~Bfd()
{
}

bool Snmp::Notification::Bfd::has_data() const
{
    return enable.is_set;
}

bool Snmp::Notification::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Snmp::Notification::Bfd::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-cfg:bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Notification::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Snmp::Notification::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Snmp::Notification::Bgp::Bgp()
    :
    bgp4mib(std::make_shared<Snmp::Notification::Bgp::Bgp4Mib>())
	,cisco_bgp4mib(std::make_shared<Snmp::Notification::Bgp::CiscoBgp4Mib>())
{
    bgp4mib->parent = this;
    cisco_bgp4mib->parent = this;

    yang_name = "bgp"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Notification::Bgp::~Bgp()
{
}

bool Snmp::Notification::Bgp::has_data() const
{
    return (bgp4mib !=  nullptr && bgp4mib->has_data())
	|| (cisco_bgp4mib !=  nullptr && cisco_bgp4mib->has_data());
}

bool Snmp::Notification::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| (bgp4mib !=  nullptr && bgp4mib->has_operation())
	|| (cisco_bgp4mib !=  nullptr && cisco_bgp4mib->has_operation());
}

std::string Snmp::Notification::Bgp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-cfg:bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Notification::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp4mib")
    {
        if(bgp4mib == nullptr)
        {
            bgp4mib = std::make_shared<Snmp::Notification::Bgp::Bgp4Mib>();
        }
        return bgp4mib;
    }

    if(child_yang_name == "cisco-bgp4mib")
    {
        if(cisco_bgp4mib == nullptr)
        {
            cisco_bgp4mib = std::make_shared<Snmp::Notification::Bgp::CiscoBgp4Mib>();
        }
        return cisco_bgp4mib;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bgp4mib != nullptr)
    {
        children["bgp4mib"] = bgp4mib;
    }

    if(cisco_bgp4mib != nullptr)
    {
        children["cisco-bgp4mib"] = cisco_bgp4mib;
    }

    return children;
}

void Snmp::Notification::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Notification::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Notification::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp4mib" || name == "cisco-bgp4mib")
        return true;
    return false;
}

Snmp::Notification::Bgp::Bgp4Mib::Bgp4Mib()
    :
    enable{YType::empty, "enable"},
    up_down{YType::empty, "up-down"}
{

    yang_name = "bgp4mib"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Notification::Bgp::Bgp4Mib::~Bgp4Mib()
{
}

bool Snmp::Notification::Bgp::Bgp4Mib::has_data() const
{
    return enable.is_set
	|| up_down.is_set;
}

bool Snmp::Notification::Bgp::Bgp4Mib::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(up_down.yfilter);
}

std::string Snmp::Notification::Bgp::Bgp4Mib::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/Cisco-IOS-XR-ipv4-bgp-cfg:bgp/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::Bgp::Bgp4Mib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp4mib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::Bgp::Bgp4Mib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (up_down.is_set || is_set(up_down.yfilter)) leaf_name_data.push_back(up_down.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Notification::Bgp::Bgp4Mib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::Bgp::Bgp4Mib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::Bgp::Bgp4Mib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-down")
    {
        up_down = value;
        up_down.value_namespace = name_space;
        up_down.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::Bgp::Bgp4Mib::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "up-down")
    {
        up_down.yfilter = yfilter;
    }
}

bool Snmp::Notification::Bgp::Bgp4Mib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "up-down")
        return true;
    return false;
}

Snmp::Notification::Bgp::CiscoBgp4Mib::CiscoBgp4Mib()
    :
    enable{YType::empty, "enable"},
    up_down{YType::empty, "up-down"}
{

    yang_name = "cisco-bgp4mib"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Notification::Bgp::CiscoBgp4Mib::~CiscoBgp4Mib()
{
}

bool Snmp::Notification::Bgp::CiscoBgp4Mib::has_data() const
{
    return enable.is_set
	|| up_down.is_set;
}

bool Snmp::Notification::Bgp::CiscoBgp4Mib::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(up_down.yfilter);
}

std::string Snmp::Notification::Bgp::CiscoBgp4Mib::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/Cisco-IOS-XR-ipv4-bgp-cfg:bgp/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::Bgp::CiscoBgp4Mib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-bgp4mib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::Bgp::CiscoBgp4Mib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (up_down.is_set || is_set(up_down.yfilter)) leaf_name_data.push_back(up_down.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Notification::Bgp::CiscoBgp4Mib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::Bgp::CiscoBgp4Mib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::Bgp::CiscoBgp4Mib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-down")
    {
        up_down = value;
        up_down.value_namespace = name_space;
        up_down.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::Bgp::CiscoBgp4Mib::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "up-down")
    {
        up_down.yfilter = yfilter;
    }
}

bool Snmp::Notification::Bgp::CiscoBgp4Mib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "up-down")
        return true;
    return false;
}

Snmp::Notification::Bridge::Bridge()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "bridge"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Notification::Bridge::~Bridge()
{
}

bool Snmp::Notification::Bridge::has_data() const
{
    return enable.is_set;
}

bool Snmp::Notification::Bridge::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Snmp::Notification::Bridge::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::Bridge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-bridgemib-cfg:bridge";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::Bridge::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Notification::Bridge::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::Bridge::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::Bridge::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::Bridge::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Snmp::Notification::Bridge::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Snmp::Notification::Cfm::Cfm()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "cfm"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Notification::Cfm::~Cfm()
{
}

bool Snmp::Notification::Cfm::has_data() const
{
    return enable.is_set;
}

bool Snmp::Notification::Cfm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Snmp::Notification::Cfm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::Cfm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ethernet-cfm-cfg:cfm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::Cfm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Notification::Cfm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::Cfm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::Cfm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::Cfm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Snmp::Notification::Cfm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Snmp::Notification::CiscoIOSXRFreqsyncCfgFrequencySynchronization::CiscoIOSXRFreqsyncCfgFrequencySynchronization()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "Cisco-IOS-XR-freqsync-cfg_frequency-synchronization"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Notification::CiscoIOSXRFreqsyncCfgFrequencySynchronization::~CiscoIOSXRFreqsyncCfgFrequencySynchronization()
{
}

bool Snmp::Notification::CiscoIOSXRFreqsyncCfgFrequencySynchronization::has_data() const
{
    return enable.is_set;
}

bool Snmp::Notification::CiscoIOSXRFreqsyncCfgFrequencySynchronization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Snmp::Notification::CiscoIOSXRFreqsyncCfgFrequencySynchronization::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::CiscoIOSXRFreqsyncCfgFrequencySynchronization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-freqsync-cfg:Cisco-IOS-XR-freqsync-cfg_frequency-synchronization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::CiscoIOSXRFreqsyncCfgFrequencySynchronization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Notification::CiscoIOSXRFreqsyncCfgFrequencySynchronization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::CiscoIOSXRFreqsyncCfgFrequencySynchronization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::CiscoIOSXRFreqsyncCfgFrequencySynchronization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::CiscoIOSXRFreqsyncCfgFrequencySynchronization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Snmp::Notification::CiscoIOSXRFreqsyncCfgFrequencySynchronization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Snmp::Notification::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "Cisco-IOS-XR-ncs4k-freqsync-cfg_frequency-synchronization"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Notification::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::~CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization()
{
}

bool Snmp::Notification::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::has_data() const
{
    return enable.is_set;
}

bool Snmp::Notification::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Snmp::Notification::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs4k-freqsync-cfg:Cisco-IOS-XR-ncs4k-freqsync-cfg_frequency-synchronization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Notification::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Snmp::Notification::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Snmp::Notification::ConfigCopy::ConfigCopy()
    :
    completion{YType::empty, "completion"}
{

    yang_name = "config-copy"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Notification::ConfigCopy::~ConfigCopy()
{
}

bool Snmp::Notification::ConfigCopy::has_data() const
{
    return completion.is_set;
}

bool Snmp::Notification::ConfigCopy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(completion.yfilter);
}

std::string Snmp::Notification::ConfigCopy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::ConfigCopy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-confcopymib-cfg:config-copy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::ConfigCopy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (completion.is_set || is_set(completion.yfilter)) leaf_name_data.push_back(completion.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Notification::ConfigCopy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::ConfigCopy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::ConfigCopy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "completion")
    {
        completion = value;
        completion.value_namespace = name_space;
        completion.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::ConfigCopy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "completion")
    {
        completion.yfilter = yfilter;
    }
}

bool Snmp::Notification::ConfigCopy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "completion")
        return true;
    return false;
}

Snmp::Notification::ConfigMan::ConfigMan()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "config-man"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Notification::ConfigMan::~ConfigMan()
{
}

bool Snmp::Notification::ConfigMan::has_data() const
{
    return enable.is_set;
}

bool Snmp::Notification::ConfigMan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Snmp::Notification::ConfigMan::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::ConfigMan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-config-mibs-cfg:config-man";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::ConfigMan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Notification::ConfigMan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::ConfigMan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::ConfigMan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::ConfigMan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Snmp::Notification::ConfigMan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Snmp::Notification::Diametermib::Diametermib()
    :
    peerdown{YType::boolean, "peerdown"},
    peerup{YType::boolean, "peerup"},
    permanentfail{YType::boolean, "permanentfail"},
    protocolerror{YType::boolean, "protocolerror"},
    transientfail{YType::boolean, "transientfail"}
{

    yang_name = "diametermib"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Notification::Diametermib::~Diametermib()
{
}

bool Snmp::Notification::Diametermib::has_data() const
{
    return peerdown.is_set
	|| peerup.is_set
	|| permanentfail.is_set
	|| protocolerror.is_set
	|| transientfail.is_set;
}

bool Snmp::Notification::Diametermib::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peerdown.yfilter)
	|| ydk::is_set(peerup.yfilter)
	|| ydk::is_set(permanentfail.yfilter)
	|| ydk::is_set(protocolerror.yfilter)
	|| ydk::is_set(transientfail.yfilter);
}

std::string Snmp::Notification::Diametermib::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::Diametermib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-diameter-base-mib-cfg:diametermib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::Diametermib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peerdown.is_set || is_set(peerdown.yfilter)) leaf_name_data.push_back(peerdown.get_name_leafdata());
    if (peerup.is_set || is_set(peerup.yfilter)) leaf_name_data.push_back(peerup.get_name_leafdata());
    if (permanentfail.is_set || is_set(permanentfail.yfilter)) leaf_name_data.push_back(permanentfail.get_name_leafdata());
    if (protocolerror.is_set || is_set(protocolerror.yfilter)) leaf_name_data.push_back(protocolerror.get_name_leafdata());
    if (transientfail.is_set || is_set(transientfail.yfilter)) leaf_name_data.push_back(transientfail.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Notification::Diametermib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::Diametermib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::Diametermib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peerdown")
    {
        peerdown = value;
        peerdown.value_namespace = name_space;
        peerdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerup")
    {
        peerup = value;
        peerup.value_namespace = name_space;
        peerup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanentfail")
    {
        permanentfail = value;
        permanentfail.value_namespace = name_space;
        permanentfail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocolerror")
    {
        protocolerror = value;
        protocolerror.value_namespace = name_space;
        protocolerror.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transientfail")
    {
        transientfail = value;
        transientfail.value_namespace = name_space;
        transientfail.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::Diametermib::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peerdown")
    {
        peerdown.yfilter = yfilter;
    }
    if(value_path == "peerup")
    {
        peerup.yfilter = yfilter;
    }
    if(value_path == "permanentfail")
    {
        permanentfail.yfilter = yfilter;
    }
    if(value_path == "protocolerror")
    {
        protocolerror.yfilter = yfilter;
    }
    if(value_path == "transientfail")
    {
        transientfail.yfilter = yfilter;
    }
}

bool Snmp::Notification::Diametermib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peerdown" || name == "peerup" || name == "permanentfail" || name == "protocolerror" || name == "transientfail")
        return true;
    return false;
}

Snmp::Notification::EntityRedundancy::EntityRedundancy()
    :
    enable{YType::empty, "enable"},
    status{YType::empty, "status"},
    switchover{YType::empty, "switchover"}
{

    yang_name = "entity-redundancy"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Notification::EntityRedundancy::~EntityRedundancy()
{
}

bool Snmp::Notification::EntityRedundancy::has_data() const
{
    return enable.is_set
	|| status.is_set
	|| switchover.is_set;
}

bool Snmp::Notification::EntityRedundancy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(switchover.yfilter);
}

std::string Snmp::Notification::EntityRedundancy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::EntityRedundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-ceredundancymib-cfg:entity-redundancy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::EntityRedundancy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (switchover.is_set || is_set(switchover.yfilter)) leaf_name_data.push_back(switchover.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Notification::EntityRedundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::EntityRedundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::EntityRedundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchover")
    {
        switchover = value;
        switchover.value_namespace = name_space;
        switchover.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::EntityRedundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "switchover")
    {
        switchover.yfilter = yfilter;
    }
}

bool Snmp::Notification::EntityRedundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "status" || name == "switchover")
        return true;
    return false;
}

Snmp::Notification::EntityState::EntityState()
    :
    oper_status{YType::empty, "oper-status"},
    switchover{YType::empty, "switchover"}
{

    yang_name = "entity-state"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Notification::EntityState::~EntityState()
{
}

bool Snmp::Notification::EntityState::has_data() const
{
    return oper_status.is_set
	|| switchover.is_set;
}

bool Snmp::Notification::EntityState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oper_status.yfilter)
	|| ydk::is_set(switchover.yfilter);
}

std::string Snmp::Notification::EntityState::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::EntityState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-entstatemib-cfg:entity-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::EntityState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oper_status.is_set || is_set(oper_status.yfilter)) leaf_name_data.push_back(oper_status.get_name_leafdata());
    if (switchover.is_set || is_set(switchover.yfilter)) leaf_name_data.push_back(switchover.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Notification::EntityState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::EntityState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::EntityState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oper-status")
    {
        oper_status = value;
        oper_status.value_namespace = name_space;
        oper_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchover")
    {
        switchover = value;
        switchover.value_namespace = name_space;
        switchover.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::EntityState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oper-status")
    {
        oper_status.yfilter = yfilter;
    }
    if(value_path == "switchover")
    {
        switchover.yfilter = yfilter;
    }
}

bool Snmp::Notification::EntityState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oper-status" || name == "switchover")
        return true;
    return false;
}

Snmp::Notification::Entity_::Entity_()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "entity"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Notification::Entity_::~Entity_()
{
}

bool Snmp::Notification::Entity_::has_data() const
{
    return enable.is_set;
}

bool Snmp::Notification::Entity_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Snmp::Notification::Entity_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::Entity_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-entitymib-cfg:entity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::Entity_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Notification::Entity_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::Entity_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::Entity_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::Entity_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Snmp::Notification::Entity_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Snmp::Notification::FabricCrs::FabricCrs()
    :
    bundle_downed_link{YType::empty, "bundle-downed-link"},
    bundle_state{YType::empty, "bundle-state"},
    plane_state{YType::empty, "plane-state"}
{

    yang_name = "fabric-crs"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Notification::FabricCrs::~FabricCrs()
{
}

bool Snmp::Notification::FabricCrs::has_data() const
{
    return bundle_downed_link.is_set
	|| bundle_state.is_set
	|| plane_state.is_set;
}

bool Snmp::Notification::FabricCrs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_downed_link.yfilter)
	|| ydk::is_set(bundle_state.yfilter)
	|| ydk::is_set(plane_state.yfilter);
}

std::string Snmp::Notification::FabricCrs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::FabricCrs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fabhfr-mib-cfg:fabric-crs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::FabricCrs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_downed_link.is_set || is_set(bundle_downed_link.yfilter)) leaf_name_data.push_back(bundle_downed_link.get_name_leafdata());
    if (bundle_state.is_set || is_set(bundle_state.yfilter)) leaf_name_data.push_back(bundle_state.get_name_leafdata());
    if (plane_state.is_set || is_set(plane_state.yfilter)) leaf_name_data.push_back(plane_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Notification::FabricCrs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::FabricCrs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::FabricCrs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-downed-link")
    {
        bundle_downed_link = value;
        bundle_downed_link.value_namespace = name_space;
        bundle_downed_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle-state")
    {
        bundle_state = value;
        bundle_state.value_namespace = name_space;
        bundle_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plane-state")
    {
        plane_state = value;
        plane_state.value_namespace = name_space;
        plane_state.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::FabricCrs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-downed-link")
    {
        bundle_downed_link.yfilter = yfilter;
    }
    if(value_path == "bundle-state")
    {
        bundle_state.yfilter = yfilter;
    }
    if(value_path == "plane-state")
    {
        plane_state.yfilter = yfilter;
    }
}

bool Snmp::Notification::FabricCrs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-downed-link" || name == "bundle-state" || name == "plane-state")
        return true;
    return false;
}

Snmp::Notification::Flash::Flash()
    :
    insertion{YType::empty, "insertion"},
    removal{YType::empty, "removal"}
{

    yang_name = "flash"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Notification::Flash::~Flash()
{
}

bool Snmp::Notification::Flash::has_data() const
{
    return insertion.is_set
	|| removal.is_set;
}

bool Snmp::Notification::Flash::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(insertion.yfilter)
	|| ydk::is_set(removal.yfilter);
}

std::string Snmp::Notification::Flash::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::Flash::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-flashmib-cfg:flash";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::Flash::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (insertion.is_set || is_set(insertion.yfilter)) leaf_name_data.push_back(insertion.get_name_leafdata());
    if (removal.is_set || is_set(removal.yfilter)) leaf_name_data.push_back(removal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Notification::Flash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::Flash::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::Flash::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "insertion")
    {
        insertion = value;
        insertion.value_namespace = name_space;
        insertion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "removal")
    {
        removal = value;
        removal.value_namespace = name_space;
        removal.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::Flash::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "insertion")
    {
        insertion.yfilter = yfilter;
    }
    if(value_path == "removal")
    {
        removal.yfilter = yfilter;
    }
}

bool Snmp::Notification::Flash::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "insertion" || name == "removal")
        return true;
    return false;
}

Snmp::Notification::FruControl::FruControl()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "fru-control"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Notification::FruControl::~FruControl()
{
}

bool Snmp::Notification::FruControl::has_data() const
{
    return enable.is_set;
}

bool Snmp::Notification::FruControl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Snmp::Notification::FruControl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::FruControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-frucontrolmib-cfg:fru-control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::FruControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Notification::FruControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::FruControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::FruControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::FruControl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Snmp::Notification::FruControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Snmp::Notification::Hsrp::Hsrp()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "hsrp"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Notification::Hsrp::~Hsrp()
{
}

bool Snmp::Notification::Hsrp::has_data() const
{
    return enable.is_set;
}

bool Snmp::Notification::Hsrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Snmp::Notification::Hsrp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::Hsrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-hsrp-cfg:hsrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::Hsrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Notification::Hsrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::Hsrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::Hsrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::Hsrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Snmp::Notification::Hsrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Snmp::Notification::Isis::Isis()
    :
    adjacency_change{YType::enumeration, "adjacency-change"},
    all{YType::enumeration, "all"},
    area_mismatch{YType::enumeration, "area-mismatch"},
    attempt_to_exceed_max_sequence{YType::enumeration, "attempt-to-exceed-max-sequence"},
    authentication_failure{YType::enumeration, "authentication-failure"},
    authentication_type_failure{YType::enumeration, "authentication-type-failure"},
    corrupted_lsp_detected{YType::enumeration, "corrupted-lsp-detected"},
    database_overflow{YType::enumeration, "database-overflow"},
    id_length_mismatch{YType::enumeration, "id-length-mismatch"},
    lsp_error_detected{YType::enumeration, "lsp-error-detected"},
    lsp_too_large_to_propagate{YType::enumeration, "lsp-too-large-to-propagate"},
    manual_address_drops{YType::enumeration, "manual-address-drops"},
    max_area_address_mismatch{YType::enumeration, "max-area-address-mismatch"},
    originated_lsp_buffer_size_mismatch{YType::enumeration, "originated-lsp-buffer-size-mismatch"},
    own_lsp_purge{YType::enumeration, "own-lsp-purge"},
    protocols_supported_mismatch{YType::enumeration, "protocols-supported-mismatch"},
    rejected_adjacency{YType::enumeration, "rejected-adjacency"},
    sequence_number_skip{YType::enumeration, "sequence-number-skip"},
    version_skew{YType::enumeration, "version-skew"}
{

    yang_name = "isis"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Notification::Isis::~Isis()
{
}

bool Snmp::Notification::Isis::has_data() const
{
    return adjacency_change.is_set
	|| all.is_set
	|| area_mismatch.is_set
	|| attempt_to_exceed_max_sequence.is_set
	|| authentication_failure.is_set
	|| authentication_type_failure.is_set
	|| corrupted_lsp_detected.is_set
	|| database_overflow.is_set
	|| id_length_mismatch.is_set
	|| lsp_error_detected.is_set
	|| lsp_too_large_to_propagate.is_set
	|| manual_address_drops.is_set
	|| max_area_address_mismatch.is_set
	|| originated_lsp_buffer_size_mismatch.is_set
	|| own_lsp_purge.is_set
	|| protocols_supported_mismatch.is_set
	|| rejected_adjacency.is_set
	|| sequence_number_skip.is_set
	|| version_skew.is_set;
}

bool Snmp::Notification::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjacency_change.yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(area_mismatch.yfilter)
	|| ydk::is_set(attempt_to_exceed_max_sequence.yfilter)
	|| ydk::is_set(authentication_failure.yfilter)
	|| ydk::is_set(authentication_type_failure.yfilter)
	|| ydk::is_set(corrupted_lsp_detected.yfilter)
	|| ydk::is_set(database_overflow.yfilter)
	|| ydk::is_set(id_length_mismatch.yfilter)
	|| ydk::is_set(lsp_error_detected.yfilter)
	|| ydk::is_set(lsp_too_large_to_propagate.yfilter)
	|| ydk::is_set(manual_address_drops.yfilter)
	|| ydk::is_set(max_area_address_mismatch.yfilter)
	|| ydk::is_set(originated_lsp_buffer_size_mismatch.yfilter)
	|| ydk::is_set(own_lsp_purge.yfilter)
	|| ydk::is_set(protocols_supported_mismatch.yfilter)
	|| ydk::is_set(rejected_adjacency.yfilter)
	|| ydk::is_set(sequence_number_skip.yfilter)
	|| ydk::is_set(version_skew.yfilter);
}

std::string Snmp::Notification::Isis::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-clns-isis-cfg:isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency_change.is_set || is_set(adjacency_change.yfilter)) leaf_name_data.push_back(adjacency_change.get_name_leafdata());
    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (area_mismatch.is_set || is_set(area_mismatch.yfilter)) leaf_name_data.push_back(area_mismatch.get_name_leafdata());
    if (attempt_to_exceed_max_sequence.is_set || is_set(attempt_to_exceed_max_sequence.yfilter)) leaf_name_data.push_back(attempt_to_exceed_max_sequence.get_name_leafdata());
    if (authentication_failure.is_set || is_set(authentication_failure.yfilter)) leaf_name_data.push_back(authentication_failure.get_name_leafdata());
    if (authentication_type_failure.is_set || is_set(authentication_type_failure.yfilter)) leaf_name_data.push_back(authentication_type_failure.get_name_leafdata());
    if (corrupted_lsp_detected.is_set || is_set(corrupted_lsp_detected.yfilter)) leaf_name_data.push_back(corrupted_lsp_detected.get_name_leafdata());
    if (database_overflow.is_set || is_set(database_overflow.yfilter)) leaf_name_data.push_back(database_overflow.get_name_leafdata());
    if (id_length_mismatch.is_set || is_set(id_length_mismatch.yfilter)) leaf_name_data.push_back(id_length_mismatch.get_name_leafdata());
    if (lsp_error_detected.is_set || is_set(lsp_error_detected.yfilter)) leaf_name_data.push_back(lsp_error_detected.get_name_leafdata());
    if (lsp_too_large_to_propagate.is_set || is_set(lsp_too_large_to_propagate.yfilter)) leaf_name_data.push_back(lsp_too_large_to_propagate.get_name_leafdata());
    if (manual_address_drops.is_set || is_set(manual_address_drops.yfilter)) leaf_name_data.push_back(manual_address_drops.get_name_leafdata());
    if (max_area_address_mismatch.is_set || is_set(max_area_address_mismatch.yfilter)) leaf_name_data.push_back(max_area_address_mismatch.get_name_leafdata());
    if (originated_lsp_buffer_size_mismatch.is_set || is_set(originated_lsp_buffer_size_mismatch.yfilter)) leaf_name_data.push_back(originated_lsp_buffer_size_mismatch.get_name_leafdata());
    if (own_lsp_purge.is_set || is_set(own_lsp_purge.yfilter)) leaf_name_data.push_back(own_lsp_purge.get_name_leafdata());
    if (protocols_supported_mismatch.is_set || is_set(protocols_supported_mismatch.yfilter)) leaf_name_data.push_back(protocols_supported_mismatch.get_name_leafdata());
    if (rejected_adjacency.is_set || is_set(rejected_adjacency.yfilter)) leaf_name_data.push_back(rejected_adjacency.get_name_leafdata());
    if (sequence_number_skip.is_set || is_set(sequence_number_skip.yfilter)) leaf_name_data.push_back(sequence_number_skip.get_name_leafdata());
    if (version_skew.is_set || is_set(version_skew.yfilter)) leaf_name_data.push_back(version_skew.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Notification::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjacency-change")
    {
        adjacency_change = value;
        adjacency_change.value_namespace = name_space;
        adjacency_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-mismatch")
    {
        area_mismatch = value;
        area_mismatch.value_namespace = name_space;
        area_mismatch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attempt-to-exceed-max-sequence")
    {
        attempt_to_exceed_max_sequence = value;
        attempt_to_exceed_max_sequence.value_namespace = name_space;
        attempt_to_exceed_max_sequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-failure")
    {
        authentication_failure = value;
        authentication_failure.value_namespace = name_space;
        authentication_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-type-failure")
    {
        authentication_type_failure = value;
        authentication_type_failure.value_namespace = name_space;
        authentication_type_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "corrupted-lsp-detected")
    {
        corrupted_lsp_detected = value;
        corrupted_lsp_detected.value_namespace = name_space;
        corrupted_lsp_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "database-overflow")
    {
        database_overflow = value;
        database_overflow.value_namespace = name_space;
        database_overflow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id-length-mismatch")
    {
        id_length_mismatch = value;
        id_length_mismatch.value_namespace = name_space;
        id_length_mismatch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-error-detected")
    {
        lsp_error_detected = value;
        lsp_error_detected.value_namespace = name_space;
        lsp_error_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-too-large-to-propagate")
    {
        lsp_too_large_to_propagate = value;
        lsp_too_large_to_propagate.value_namespace = name_space;
        lsp_too_large_to_propagate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manual-address-drops")
    {
        manual_address_drops = value;
        manual_address_drops.value_namespace = name_space;
        manual_address_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-area-address-mismatch")
    {
        max_area_address_mismatch = value;
        max_area_address_mismatch.value_namespace = name_space;
        max_area_address_mismatch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "originated-lsp-buffer-size-mismatch")
    {
        originated_lsp_buffer_size_mismatch = value;
        originated_lsp_buffer_size_mismatch.value_namespace = name_space;
        originated_lsp_buffer_size_mismatch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "own-lsp-purge")
    {
        own_lsp_purge = value;
        own_lsp_purge.value_namespace = name_space;
        own_lsp_purge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocols-supported-mismatch")
    {
        protocols_supported_mismatch = value;
        protocols_supported_mismatch.value_namespace = name_space;
        protocols_supported_mismatch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rejected-adjacency")
    {
        rejected_adjacency = value;
        rejected_adjacency.value_namespace = name_space;
        rejected_adjacency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number-skip")
    {
        sequence_number_skip = value;
        sequence_number_skip.value_namespace = name_space;
        sequence_number_skip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version-skew")
    {
        version_skew = value;
        version_skew.value_namespace = name_space;
        version_skew.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjacency-change")
    {
        adjacency_change.yfilter = yfilter;
    }
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "area-mismatch")
    {
        area_mismatch.yfilter = yfilter;
    }
    if(value_path == "attempt-to-exceed-max-sequence")
    {
        attempt_to_exceed_max_sequence.yfilter = yfilter;
    }
    if(value_path == "authentication-failure")
    {
        authentication_failure.yfilter = yfilter;
    }
    if(value_path == "authentication-type-failure")
    {
        authentication_type_failure.yfilter = yfilter;
    }
    if(value_path == "corrupted-lsp-detected")
    {
        corrupted_lsp_detected.yfilter = yfilter;
    }
    if(value_path == "database-overflow")
    {
        database_overflow.yfilter = yfilter;
    }
    if(value_path == "id-length-mismatch")
    {
        id_length_mismatch.yfilter = yfilter;
    }
    if(value_path == "lsp-error-detected")
    {
        lsp_error_detected.yfilter = yfilter;
    }
    if(value_path == "lsp-too-large-to-propagate")
    {
        lsp_too_large_to_propagate.yfilter = yfilter;
    }
    if(value_path == "manual-address-drops")
    {
        manual_address_drops.yfilter = yfilter;
    }
    if(value_path == "max-area-address-mismatch")
    {
        max_area_address_mismatch.yfilter = yfilter;
    }
    if(value_path == "originated-lsp-buffer-size-mismatch")
    {
        originated_lsp_buffer_size_mismatch.yfilter = yfilter;
    }
    if(value_path == "own-lsp-purge")
    {
        own_lsp_purge.yfilter = yfilter;
    }
    if(value_path == "protocols-supported-mismatch")
    {
        protocols_supported_mismatch.yfilter = yfilter;
    }
    if(value_path == "rejected-adjacency")
    {
        rejected_adjacency.yfilter = yfilter;
    }
    if(value_path == "sequence-number-skip")
    {
        sequence_number_skip.yfilter = yfilter;
    }
    if(value_path == "version-skew")
    {
        version_skew.yfilter = yfilter;
    }
}

bool Snmp::Notification::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-change" || name == "all" || name == "area-mismatch" || name == "attempt-to-exceed-max-sequence" || name == "authentication-failure" || name == "authentication-type-failure" || name == "corrupted-lsp-detected" || name == "database-overflow" || name == "id-length-mismatch" || name == "lsp-error-detected" || name == "lsp-too-large-to-propagate" || name == "manual-address-drops" || name == "max-area-address-mismatch" || name == "originated-lsp-buffer-size-mismatch" || name == "own-lsp-purge" || name == "protocols-supported-mismatch" || name == "rejected-adjacency" || name == "sequence-number-skip" || name == "version-skew")
        return true;
    return false;
}

Snmp::Notification::L2Tun::L2Tun()
    :
    pseudowire_status{YType::boolean, "pseudowire-status"},
    sessions{YType::boolean, "sessions"},
    tunnel_down{YType::boolean, "tunnel-down"},
    tunnel_up{YType::boolean, "tunnel-up"}
{

    yang_name = "l2tun"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Notification::L2Tun::~L2Tun()
{
}

bool Snmp::Notification::L2Tun::has_data() const
{
    return pseudowire_status.is_set
	|| sessions.is_set
	|| tunnel_down.is_set
	|| tunnel_up.is_set;
}

bool Snmp::Notification::L2Tun::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pseudowire_status.yfilter)
	|| ydk::is_set(sessions.yfilter)
	|| ydk::is_set(tunnel_down.yfilter)
	|| ydk::is_set(tunnel_up.yfilter);
}

std::string Snmp::Notification::L2Tun::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::L2Tun::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-proto-mibs-cfg:l2tun";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::L2Tun::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pseudowire_status.is_set || is_set(pseudowire_status.yfilter)) leaf_name_data.push_back(pseudowire_status.get_name_leafdata());
    if (sessions.is_set || is_set(sessions.yfilter)) leaf_name_data.push_back(sessions.get_name_leafdata());
    if (tunnel_down.is_set || is_set(tunnel_down.yfilter)) leaf_name_data.push_back(tunnel_down.get_name_leafdata());
    if (tunnel_up.is_set || is_set(tunnel_up.yfilter)) leaf_name_data.push_back(tunnel_up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Notification::L2Tun::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::L2Tun::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::L2Tun::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pseudowire-status")
    {
        pseudowire_status = value;
        pseudowire_status.value_namespace = name_space;
        pseudowire_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sessions")
    {
        sessions = value;
        sessions.value_namespace = name_space;
        sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-down")
    {
        tunnel_down = value;
        tunnel_down.value_namespace = name_space;
        tunnel_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-up")
    {
        tunnel_up = value;
        tunnel_up.value_namespace = name_space;
        tunnel_up.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::L2Tun::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pseudowire-status")
    {
        pseudowire_status.yfilter = yfilter;
    }
    if(value_path == "sessions")
    {
        sessions.yfilter = yfilter;
    }
    if(value_path == "tunnel-down")
    {
        tunnel_down.yfilter = yfilter;
    }
    if(value_path == "tunnel-up")
    {
        tunnel_up.yfilter = yfilter;
    }
}

bool Snmp::Notification::L2Tun::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pseudowire-status" || name == "sessions" || name == "tunnel-down" || name == "tunnel-up")
        return true;
    return false;
}

Snmp::Notification::L2Vpn::L2Vpn()
    :
    cisco{YType::empty, "cisco"},
    enable{YType::empty, "enable"},
    vc_down{YType::empty, "vc-down"},
    vc_up{YType::empty, "vc-up"}
{

    yang_name = "l2vpn"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Notification::L2Vpn::~L2Vpn()
{
}

bool Snmp::Notification::L2Vpn::has_data() const
{
    return cisco.is_set
	|| enable.is_set
	|| vc_down.is_set
	|| vc_up.is_set;
}

bool Snmp::Notification::L2Vpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cisco.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(vc_down.yfilter)
	|| ydk::is_set(vc_up.yfilter);
}

std::string Snmp::Notification::L2Vpn::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::L2Vpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::L2Vpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cisco.is_set || is_set(cisco.yfilter)) leaf_name_data.push_back(cisco.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (vc_down.is_set || is_set(vc_down.yfilter)) leaf_name_data.push_back(vc_down.get_name_leafdata());
    if (vc_up.is_set || is_set(vc_up.yfilter)) leaf_name_data.push_back(vc_up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Notification::L2Vpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::L2Vpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::L2Vpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cisco")
    {
        cisco = value;
        cisco.value_namespace = name_space;
        cisco.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vc-down")
    {
        vc_down = value;
        vc_down.value_namespace = name_space;
        vc_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vc-up")
    {
        vc_up = value;
        vc_up.value_namespace = name_space;
        vc_up.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::L2Vpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cisco")
    {
        cisco.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "vc-down")
    {
        vc_down.yfilter = yfilter;
    }
    if(value_path == "vc-up")
    {
        vc_up.yfilter = yfilter;
    }
}

bool Snmp::Notification::L2Vpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cisco" || name == "enable" || name == "vc-down" || name == "vc-up")
        return true;
    return false;
}

Snmp::Notification::MplsFrr::MplsFrr()
    :
    enable{YType::empty, "enable"},
    protected_{YType::empty, "protected"},
    unprotected{YType::empty, "unprotected"}
{

    yang_name = "mpls-frr"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Notification::MplsFrr::~MplsFrr()
{
}

bool Snmp::Notification::MplsFrr::has_data() const
{
    return enable.is_set
	|| protected_.is_set
	|| unprotected.is_set;
}

bool Snmp::Notification::MplsFrr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(protected_.yfilter)
	|| ydk::is_set(unprotected.yfilter);
}

std::string Snmp::Notification::MplsFrr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::MplsFrr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-frr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::MplsFrr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (protected_.is_set || is_set(protected_.yfilter)) leaf_name_data.push_back(protected_.get_name_leafdata());
    if (unprotected.is_set || is_set(unprotected.yfilter)) leaf_name_data.push_back(unprotected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Notification::MplsFrr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::MplsFrr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::MplsFrr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected")
    {
        protected_ = value;
        protected_.value_namespace = name_space;
        protected_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unprotected")
    {
        unprotected = value;
        unprotected.value_namespace = name_space;
        unprotected.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::MplsFrr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "protected")
    {
        protected_.yfilter = yfilter;
    }
    if(value_path == "unprotected")
    {
        unprotected.yfilter = yfilter;
    }
}

bool Snmp::Notification::MplsFrr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "protected" || name == "unprotected")
        return true;
    return false;
}

Snmp::Notification::MplsL3Vpn::MplsL3Vpn()
    :
    enable{YType::empty, "enable"},
    max_threshold_cleared{YType::empty, "max-threshold-cleared"},
    max_threshold_exceeded{YType::empty, "max-threshold-exceeded"},
    max_threshold_reissue_notification_time{YType::int32, "max-threshold-reissue-notification-time"},
    mid_threshold_exceeded{YType::empty, "mid-threshold-exceeded"},
    vrf_down{YType::empty, "vrf-down"},
    vrf_up{YType::empty, "vrf-up"}
{

    yang_name = "mpls-l3vpn"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Notification::MplsL3Vpn::~MplsL3Vpn()
{
}

bool Snmp::Notification::MplsL3Vpn::has_data() const
{
    return enable.is_set
	|| max_threshold_cleared.is_set
	|| max_threshold_exceeded.is_set
	|| max_threshold_reissue_notification_time.is_set
	|| mid_threshold_exceeded.is_set
	|| vrf_down.is_set
	|| vrf_up.is_set;
}

bool Snmp::Notification::MplsL3Vpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(max_threshold_cleared.yfilter)
	|| ydk::is_set(max_threshold_exceeded.yfilter)
	|| ydk::is_set(max_threshold_reissue_notification_time.yfilter)
	|| ydk::is_set(mid_threshold_exceeded.yfilter)
	|| ydk::is_set(vrf_down.yfilter)
	|| ydk::is_set(vrf_up.yfilter);
}

std::string Snmp::Notification::MplsL3Vpn::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::MplsL3Vpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-vpn-cfg:mpls-l3vpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::MplsL3Vpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (max_threshold_cleared.is_set || is_set(max_threshold_cleared.yfilter)) leaf_name_data.push_back(max_threshold_cleared.get_name_leafdata());
    if (max_threshold_exceeded.is_set || is_set(max_threshold_exceeded.yfilter)) leaf_name_data.push_back(max_threshold_exceeded.get_name_leafdata());
    if (max_threshold_reissue_notification_time.is_set || is_set(max_threshold_reissue_notification_time.yfilter)) leaf_name_data.push_back(max_threshold_reissue_notification_time.get_name_leafdata());
    if (mid_threshold_exceeded.is_set || is_set(mid_threshold_exceeded.yfilter)) leaf_name_data.push_back(mid_threshold_exceeded.get_name_leafdata());
    if (vrf_down.is_set || is_set(vrf_down.yfilter)) leaf_name_data.push_back(vrf_down.get_name_leafdata());
    if (vrf_up.is_set || is_set(vrf_up.yfilter)) leaf_name_data.push_back(vrf_up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Notification::MplsL3Vpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::MplsL3Vpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::MplsL3Vpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-threshold-cleared")
    {
        max_threshold_cleared = value;
        max_threshold_cleared.value_namespace = name_space;
        max_threshold_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-threshold-exceeded")
    {
        max_threshold_exceeded = value;
        max_threshold_exceeded.value_namespace = name_space;
        max_threshold_exceeded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-threshold-reissue-notification-time")
    {
        max_threshold_reissue_notification_time = value;
        max_threshold_reissue_notification_time.value_namespace = name_space;
        max_threshold_reissue_notification_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mid-threshold-exceeded")
    {
        mid_threshold_exceeded = value;
        mid_threshold_exceeded.value_namespace = name_space;
        mid_threshold_exceeded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-down")
    {
        vrf_down = value;
        vrf_down.value_namespace = name_space;
        vrf_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-up")
    {
        vrf_up = value;
        vrf_up.value_namespace = name_space;
        vrf_up.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::MplsL3Vpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "max-threshold-cleared")
    {
        max_threshold_cleared.yfilter = yfilter;
    }
    if(value_path == "max-threshold-exceeded")
    {
        max_threshold_exceeded.yfilter = yfilter;
    }
    if(value_path == "max-threshold-reissue-notification-time")
    {
        max_threshold_reissue_notification_time.yfilter = yfilter;
    }
    if(value_path == "mid-threshold-exceeded")
    {
        mid_threshold_exceeded.yfilter = yfilter;
    }
    if(value_path == "vrf-down")
    {
        vrf_down.yfilter = yfilter;
    }
    if(value_path == "vrf-up")
    {
        vrf_up.yfilter = yfilter;
    }
}

bool Snmp::Notification::MplsL3Vpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "max-threshold-cleared" || name == "max-threshold-exceeded" || name == "max-threshold-reissue-notification-time" || name == "mid-threshold-exceeded" || name == "vrf-down" || name == "vrf-up")
        return true;
    return false;
}

Snmp::Notification::MplsLdp::MplsLdp()
    :
    init_session_threshold_exceeded{YType::empty, "init-session-threshold-exceeded"},
    session_down{YType::empty, "session-down"},
    session_up{YType::empty, "session-up"}
{

    yang_name = "mpls-ldp"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Notification::MplsLdp::~MplsLdp()
{
}

bool Snmp::Notification::MplsLdp::has_data() const
{
    return init_session_threshold_exceeded.is_set
	|| session_down.is_set
	|| session_up.is_set;
}

bool Snmp::Notification::MplsLdp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(init_session_threshold_exceeded.yfilter)
	|| ydk::is_set(session_down.yfilter)
	|| ydk::is_set(session_up.yfilter);
}

std::string Snmp::Notification::MplsLdp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::MplsLdp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::MplsLdp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (init_session_threshold_exceeded.is_set || is_set(init_session_threshold_exceeded.yfilter)) leaf_name_data.push_back(init_session_threshold_exceeded.get_name_leafdata());
    if (session_down.is_set || is_set(session_down.yfilter)) leaf_name_data.push_back(session_down.get_name_leafdata());
    if (session_up.is_set || is_set(session_up.yfilter)) leaf_name_data.push_back(session_up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Notification::MplsLdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::MplsLdp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::MplsLdp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "init-session-threshold-exceeded")
    {
        init_session_threshold_exceeded = value;
        init_session_threshold_exceeded.value_namespace = name_space;
        init_session_threshold_exceeded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-down")
    {
        session_down = value;
        session_down.value_namespace = name_space;
        session_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-up")
    {
        session_up = value;
        session_up.value_namespace = name_space;
        session_up.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::MplsLdp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "init-session-threshold-exceeded")
    {
        init_session_threshold_exceeded.yfilter = yfilter;
    }
    if(value_path == "session-down")
    {
        session_down.yfilter = yfilter;
    }
    if(value_path == "session-up")
    {
        session_up.yfilter = yfilter;
    }
}

bool Snmp::Notification::MplsLdp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "init-session-threshold-exceeded" || name == "session-down" || name == "session-up")
        return true;
    return false;
}

Snmp::Notification::MplsTe::MplsTe()
    :
    cisco{YType::empty, "cisco"},
    down{YType::empty, "down"},
    reoptimize{YType::empty, "reoptimize"},
    reroute{YType::empty, "reroute"},
    up{YType::empty, "up"}
    	,
    cisco_extension(std::make_shared<Snmp::Notification::MplsTe::CiscoExtension>())
{
    cisco_extension->parent = this;

    yang_name = "mpls-te"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Notification::MplsTe::~MplsTe()
{
}

bool Snmp::Notification::MplsTe::has_data() const
{
    return cisco.is_set
	|| down.is_set
	|| reoptimize.is_set
	|| reroute.is_set
	|| up.is_set
	|| (cisco_extension !=  nullptr && cisco_extension->has_data());
}

bool Snmp::Notification::MplsTe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cisco.yfilter)
	|| ydk::is_set(down.yfilter)
	|| ydk::is_set(reoptimize.yfilter)
	|| ydk::is_set(reroute.yfilter)
	|| ydk::is_set(up.yfilter)
	|| (cisco_extension !=  nullptr && cisco_extension->has_operation());
}

std::string Snmp::Notification::MplsTe::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::MplsTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::MplsTe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cisco.is_set || is_set(cisco.yfilter)) leaf_name_data.push_back(cisco.get_name_leafdata());
    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());
    if (reoptimize.is_set || is_set(reoptimize.yfilter)) leaf_name_data.push_back(reoptimize.get_name_leafdata());
    if (reroute.is_set || is_set(reroute.yfilter)) leaf_name_data.push_back(reroute.get_name_leafdata());
    if (up.is_set || is_set(up.yfilter)) leaf_name_data.push_back(up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Notification::MplsTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cisco-extension")
    {
        if(cisco_extension == nullptr)
        {
            cisco_extension = std::make_shared<Snmp::Notification::MplsTe::CiscoExtension>();
        }
        return cisco_extension;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::MplsTe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cisco_extension != nullptr)
    {
        children["cisco-extension"] = cisco_extension;
    }

    return children;
}

void Snmp::Notification::MplsTe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cisco")
    {
        cisco = value;
        cisco.value_namespace = name_space;
        cisco.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimize")
    {
        reoptimize = value;
        reoptimize.value_namespace = name_space;
        reoptimize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reroute")
    {
        reroute = value;
        reroute.value_namespace = name_space;
        reroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up")
    {
        up = value;
        up.value_namespace = name_space;
        up.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::MplsTe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cisco")
    {
        cisco.yfilter = yfilter;
    }
    if(value_path == "down")
    {
        down.yfilter = yfilter;
    }
    if(value_path == "reoptimize")
    {
        reoptimize.yfilter = yfilter;
    }
    if(value_path == "reroute")
    {
        reroute.yfilter = yfilter;
    }
    if(value_path == "up")
    {
        up.yfilter = yfilter;
    }
}

bool Snmp::Notification::MplsTe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cisco-extension" || name == "cisco" || name == "down" || name == "reoptimize" || name == "reroute" || name == "up")
        return true;
    return false;
}

Snmp::Notification::MplsTe::CiscoExtension::CiscoExtension()
    :
    bringup_fail{YType::empty, "bringup-fail"},
    insufficient_bandwidth{YType::empty, "insufficient-bandwidth"},
    preempt{YType::empty, "preempt"},
    re_route_pending{YType::empty, "re-route-pending"},
    re_route_pending_clear{YType::empty, "re-route-pending-clear"}
{

    yang_name = "cisco-extension"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Notification::MplsTe::CiscoExtension::~CiscoExtension()
{
}

bool Snmp::Notification::MplsTe::CiscoExtension::has_data() const
{
    return bringup_fail.is_set
	|| insufficient_bandwidth.is_set
	|| preempt.is_set
	|| re_route_pending.is_set
	|| re_route_pending_clear.is_set;
}

bool Snmp::Notification::MplsTe::CiscoExtension::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bringup_fail.yfilter)
	|| ydk::is_set(insufficient_bandwidth.yfilter)
	|| ydk::is_set(preempt.yfilter)
	|| ydk::is_set(re_route_pending.yfilter)
	|| ydk::is_set(re_route_pending_clear.yfilter);
}

std::string Snmp::Notification::MplsTe::CiscoExtension::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/Cisco-IOS-XR-mpls-te-cfg:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::MplsTe::CiscoExtension::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-extension";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::MplsTe::CiscoExtension::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bringup_fail.is_set || is_set(bringup_fail.yfilter)) leaf_name_data.push_back(bringup_fail.get_name_leafdata());
    if (insufficient_bandwidth.is_set || is_set(insufficient_bandwidth.yfilter)) leaf_name_data.push_back(insufficient_bandwidth.get_name_leafdata());
    if (preempt.is_set || is_set(preempt.yfilter)) leaf_name_data.push_back(preempt.get_name_leafdata());
    if (re_route_pending.is_set || is_set(re_route_pending.yfilter)) leaf_name_data.push_back(re_route_pending.get_name_leafdata());
    if (re_route_pending_clear.is_set || is_set(re_route_pending_clear.yfilter)) leaf_name_data.push_back(re_route_pending_clear.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Notification::MplsTe::CiscoExtension::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::MplsTe::CiscoExtension::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::MplsTe::CiscoExtension::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bringup-fail")
    {
        bringup_fail = value;
        bringup_fail.value_namespace = name_space;
        bringup_fail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "insufficient-bandwidth")
    {
        insufficient_bandwidth = value;
        insufficient_bandwidth.value_namespace = name_space;
        insufficient_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preempt")
    {
        preempt = value;
        preempt.value_namespace = name_space;
        preempt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "re-route-pending")
    {
        re_route_pending = value;
        re_route_pending.value_namespace = name_space;
        re_route_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "re-route-pending-clear")
    {
        re_route_pending_clear = value;
        re_route_pending_clear.value_namespace = name_space;
        re_route_pending_clear.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::MplsTe::CiscoExtension::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bringup-fail")
    {
        bringup_fail.yfilter = yfilter;
    }
    if(value_path == "insufficient-bandwidth")
    {
        insufficient_bandwidth.yfilter = yfilter;
    }
    if(value_path == "preempt")
    {
        preempt.yfilter = yfilter;
    }
    if(value_path == "re-route-pending")
    {
        re_route_pending.yfilter = yfilter;
    }
    if(value_path == "re-route-pending-clear")
    {
        re_route_pending_clear.yfilter = yfilter;
    }
}

bool Snmp::Notification::MplsTe::CiscoExtension::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bringup-fail" || name == "insufficient-bandwidth" || name == "preempt" || name == "re-route-pending" || name == "re-route-pending-clear")
        return true;
    return false;
}

Snmp::Notification::MplsTeP2Mp::MplsTeP2Mp()
    :
    down{YType::empty, "down"},
    up{YType::empty, "up"}
{

    yang_name = "mpls-te-p2mp"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Notification::MplsTeP2Mp::~MplsTeP2Mp()
{
}

bool Snmp::Notification::MplsTeP2Mp::has_data() const
{
    return down.is_set
	|| up.is_set;
}

bool Snmp::Notification::MplsTeP2Mp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(down.yfilter)
	|| ydk::is_set(up.yfilter);
}

std::string Snmp::Notification::MplsTeP2Mp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::MplsTeP2Mp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te-p2mp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::MplsTeP2Mp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());
    if (up.is_set || is_set(up.yfilter)) leaf_name_data.push_back(up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Notification::MplsTeP2Mp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::MplsTeP2Mp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::MplsTeP2Mp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up")
    {
        up = value;
        up.value_namespace = name_space;
        up.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::MplsTeP2Mp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "down")
    {
        down.yfilter = yfilter;
    }
    if(value_path == "up")
    {
        up.yfilter = yfilter;
    }
}

bool Snmp::Notification::MplsTeP2Mp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "down" || name == "up")
        return true;
    return false;
}

Snmp::Notification::Ntp::Ntp()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "ntp"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Notification::Ntp::~Ntp()
{
}

bool Snmp::Notification::Ntp::has_data() const
{
    return enable.is_set;
}

bool Snmp::Notification::Ntp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Snmp::Notification::Ntp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::Ntp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-ntp-cfg:ntp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::Ntp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Notification::Ntp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::Ntp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::Ntp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::Ntp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Snmp::Notification::Ntp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Snmp::Notification::Oam::Oam()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "oam"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Notification::Oam::~Oam()
{
}

bool Snmp::Notification::Oam::has_data() const
{
    return enable.is_set;
}

bool Snmp::Notification::Oam::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Snmp::Notification::Oam::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::Oam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ethernet-link-oam-cfg:oam";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::Oam::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Notification::Oam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::Oam::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::Oam::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::Oam::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Snmp::Notification::Oam::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Snmp::Notification::Optical::Optical()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "optical"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Notification::Optical::~Optical()
{
}

bool Snmp::Notification::Optical::has_data() const
{
    return enable.is_set;
}

bool Snmp::Notification::Optical::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Snmp::Notification::Optical::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::Optical::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-opticalmib-cfg:optical";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::Optical::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Notification::Optical::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::Optical::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::Optical::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::Optical::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Snmp::Notification::Optical::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Snmp::Notification::OpticalOts::OpticalOts()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "optical-ots"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Notification::OpticalOts::~OpticalOts()
{
}

bool Snmp::Notification::OpticalOts::has_data() const
{
    return enable.is_set;
}

bool Snmp::Notification::OpticalOts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Snmp::Notification::OpticalOts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::OpticalOts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-opticalotsmib-cfg:optical-ots";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::OpticalOts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Notification::OpticalOts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::OpticalOts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::OpticalOts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::OpticalOts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Snmp::Notification::OpticalOts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Snmp::Notification::Ospf::Ospf()
    :
    error(std::make_shared<Snmp::Notification::Ospf::Error>())
	,lsa(std::make_shared<Snmp::Notification::Ospf::Lsa>())
	,retransmit(std::make_shared<Snmp::Notification::Ospf::Retransmit>())
	,state_change(std::make_shared<Snmp::Notification::Ospf::StateChange>())
{
    error->parent = this;
    lsa->parent = this;
    retransmit->parent = this;
    state_change->parent = this;

    yang_name = "ospf"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Notification::Ospf::~Ospf()
{
}

bool Snmp::Notification::Ospf::has_data() const
{
    return (error !=  nullptr && error->has_data())
	|| (lsa !=  nullptr && lsa->has_data())
	|| (retransmit !=  nullptr && retransmit->has_data())
	|| (state_change !=  nullptr && state_change->has_data());
}

bool Snmp::Notification::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| (error !=  nullptr && error->has_operation())
	|| (lsa !=  nullptr && lsa->has_operation())
	|| (retransmit !=  nullptr && retransmit->has_operation())
	|| (state_change !=  nullptr && state_change->has_operation());
}

std::string Snmp::Notification::Ospf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ospf-cfg:ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Notification::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        if(error == nullptr)
        {
            error = std::make_shared<Snmp::Notification::Ospf::Error>();
        }
        return error;
    }

    if(child_yang_name == "lsa")
    {
        if(lsa == nullptr)
        {
            lsa = std::make_shared<Snmp::Notification::Ospf::Lsa>();
        }
        return lsa;
    }

    if(child_yang_name == "retransmit")
    {
        if(retransmit == nullptr)
        {
            retransmit = std::make_shared<Snmp::Notification::Ospf::Retransmit>();
        }
        return retransmit;
    }

    if(child_yang_name == "state-change")
    {
        if(state_change == nullptr)
        {
            state_change = std::make_shared<Snmp::Notification::Ospf::StateChange>();
        }
        return state_change;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(error != nullptr)
    {
        children["error"] = error;
    }

    if(lsa != nullptr)
    {
        children["lsa"] = lsa;
    }

    if(retransmit != nullptr)
    {
        children["retransmit"] = retransmit;
    }

    if(state_change != nullptr)
    {
        children["state-change"] = state_change;
    }

    return children;
}

void Snmp::Notification::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Notification::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Notification::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error" || name == "lsa" || name == "retransmit" || name == "state-change")
        return true;
    return false;
}

Snmp::Notification::Ospf::Error::Error()
    :
    authentication_failure{YType::empty, "authentication-failure"},
    bad_packet{YType::empty, "bad-packet"},
    config_error{YType::empty, "config-error"},
    virtual_authentication_failure{YType::empty, "virtual-authentication-failure"},
    virtual_bad_packet{YType::empty, "virtual-bad-packet"},
    virtual_config_error{YType::empty, "virtual-config-error"}
{

    yang_name = "error"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Notification::Ospf::Error::~Error()
{
}

bool Snmp::Notification::Ospf::Error::has_data() const
{
    return authentication_failure.is_set
	|| bad_packet.is_set
	|| config_error.is_set
	|| virtual_authentication_failure.is_set
	|| virtual_bad_packet.is_set
	|| virtual_config_error.is_set;
}

bool Snmp::Notification::Ospf::Error::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authentication_failure.yfilter)
	|| ydk::is_set(bad_packet.yfilter)
	|| ydk::is_set(config_error.yfilter)
	|| ydk::is_set(virtual_authentication_failure.yfilter)
	|| ydk::is_set(virtual_bad_packet.yfilter)
	|| ydk::is_set(virtual_config_error.yfilter);
}

std::string Snmp::Notification::Ospf::Error::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/Cisco-IOS-XR-ipv4-ospf-cfg:ospf/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::Ospf::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::Ospf::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_failure.is_set || is_set(authentication_failure.yfilter)) leaf_name_data.push_back(authentication_failure.get_name_leafdata());
    if (bad_packet.is_set || is_set(bad_packet.yfilter)) leaf_name_data.push_back(bad_packet.get_name_leafdata());
    if (config_error.is_set || is_set(config_error.yfilter)) leaf_name_data.push_back(config_error.get_name_leafdata());
    if (virtual_authentication_failure.is_set || is_set(virtual_authentication_failure.yfilter)) leaf_name_data.push_back(virtual_authentication_failure.get_name_leafdata());
    if (virtual_bad_packet.is_set || is_set(virtual_bad_packet.yfilter)) leaf_name_data.push_back(virtual_bad_packet.get_name_leafdata());
    if (virtual_config_error.is_set || is_set(virtual_config_error.yfilter)) leaf_name_data.push_back(virtual_config_error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Notification::Ospf::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::Ospf::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::Ospf::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authentication-failure")
    {
        authentication_failure = value;
        authentication_failure.value_namespace = name_space;
        authentication_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-packet")
    {
        bad_packet = value;
        bad_packet.value_namespace = name_space;
        bad_packet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-error")
    {
        config_error = value;
        config_error.value_namespace = name_space;
        config_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-authentication-failure")
    {
        virtual_authentication_failure = value;
        virtual_authentication_failure.value_namespace = name_space;
        virtual_authentication_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-bad-packet")
    {
        virtual_bad_packet = value;
        virtual_bad_packet.value_namespace = name_space;
        virtual_bad_packet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-config-error")
    {
        virtual_config_error = value;
        virtual_config_error.value_namespace = name_space;
        virtual_config_error.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::Ospf::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authentication-failure")
    {
        authentication_failure.yfilter = yfilter;
    }
    if(value_path == "bad-packet")
    {
        bad_packet.yfilter = yfilter;
    }
    if(value_path == "config-error")
    {
        config_error.yfilter = yfilter;
    }
    if(value_path == "virtual-authentication-failure")
    {
        virtual_authentication_failure.yfilter = yfilter;
    }
    if(value_path == "virtual-bad-packet")
    {
        virtual_bad_packet.yfilter = yfilter;
    }
    if(value_path == "virtual-config-error")
    {
        virtual_config_error.yfilter = yfilter;
    }
}

bool Snmp::Notification::Ospf::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication-failure" || name == "bad-packet" || name == "config-error" || name == "virtual-authentication-failure" || name == "virtual-bad-packet" || name == "virtual-config-error")
        return true;
    return false;
}

Snmp::Notification::Ospf::Lsa::Lsa()
    :
    max_age_lsa{YType::empty, "max-age-lsa"},
    originate_lsa{YType::empty, "originate-lsa"}
{

    yang_name = "lsa"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Notification::Ospf::Lsa::~Lsa()
{
}

bool Snmp::Notification::Ospf::Lsa::has_data() const
{
    return max_age_lsa.is_set
	|| originate_lsa.is_set;
}

bool Snmp::Notification::Ospf::Lsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_age_lsa.yfilter)
	|| ydk::is_set(originate_lsa.yfilter);
}

std::string Snmp::Notification::Ospf::Lsa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/Cisco-IOS-XR-ipv4-ospf-cfg:ospf/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::Ospf::Lsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::Ospf::Lsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_age_lsa.is_set || is_set(max_age_lsa.yfilter)) leaf_name_data.push_back(max_age_lsa.get_name_leafdata());
    if (originate_lsa.is_set || is_set(originate_lsa.yfilter)) leaf_name_data.push_back(originate_lsa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Notification::Ospf::Lsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::Ospf::Lsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::Ospf::Lsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-age-lsa")
    {
        max_age_lsa = value;
        max_age_lsa.value_namespace = name_space;
        max_age_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "originate-lsa")
    {
        originate_lsa = value;
        originate_lsa.value_namespace = name_space;
        originate_lsa.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::Ospf::Lsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-age-lsa")
    {
        max_age_lsa.yfilter = yfilter;
    }
    if(value_path == "originate-lsa")
    {
        originate_lsa.yfilter = yfilter;
    }
}

bool Snmp::Notification::Ospf::Lsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-age-lsa" || name == "originate-lsa")
        return true;
    return false;
}

Snmp::Notification::Ospf::Retransmit::Retransmit()
    :
    packet{YType::empty, "packet"},
    virtual_packet{YType::empty, "virtual-packet"}
{

    yang_name = "retransmit"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Notification::Ospf::Retransmit::~Retransmit()
{
}

bool Snmp::Notification::Ospf::Retransmit::has_data() const
{
    return packet.is_set
	|| virtual_packet.is_set;
}

bool Snmp::Notification::Ospf::Retransmit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet.yfilter)
	|| ydk::is_set(virtual_packet.yfilter);
}

std::string Snmp::Notification::Ospf::Retransmit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/Cisco-IOS-XR-ipv4-ospf-cfg:ospf/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::Ospf::Retransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::Ospf::Retransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet.is_set || is_set(packet.yfilter)) leaf_name_data.push_back(packet.get_name_leafdata());
    if (virtual_packet.is_set || is_set(virtual_packet.yfilter)) leaf_name_data.push_back(virtual_packet.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Notification::Ospf::Retransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::Ospf::Retransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::Ospf::Retransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet")
    {
        packet = value;
        packet.value_namespace = name_space;
        packet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-packet")
    {
        virtual_packet = value;
        virtual_packet.value_namespace = name_space;
        virtual_packet.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::Ospf::Retransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet")
    {
        packet.yfilter = yfilter;
    }
    if(value_path == "virtual-packet")
    {
        virtual_packet.yfilter = yfilter;
    }
}

bool Snmp::Notification::Ospf::Retransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet" || name == "virtual-packet")
        return true;
    return false;
}

Snmp::Notification::Ospf::StateChange::StateChange()
    :
    interface{YType::empty, "interface"},
    neighbor{YType::empty, "neighbor"},
    virtual_interface{YType::empty, "virtual-interface"},
    virtual_neighbor{YType::empty, "virtual-neighbor"}
{

    yang_name = "state-change"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Notification::Ospf::StateChange::~StateChange()
{
}

bool Snmp::Notification::Ospf::StateChange::has_data() const
{
    return interface.is_set
	|| neighbor.is_set
	|| virtual_interface.is_set
	|| virtual_neighbor.is_set;
}

bool Snmp::Notification::Ospf::StateChange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(neighbor.yfilter)
	|| ydk::is_set(virtual_interface.yfilter)
	|| ydk::is_set(virtual_neighbor.yfilter);
}

std::string Snmp::Notification::Ospf::StateChange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/Cisco-IOS-XR-ipv4-ospf-cfg:ospf/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::Ospf::StateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-change";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::Ospf::StateChange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (neighbor.is_set || is_set(neighbor.yfilter)) leaf_name_data.push_back(neighbor.get_name_leafdata());
    if (virtual_interface.is_set || is_set(virtual_interface.yfilter)) leaf_name_data.push_back(virtual_interface.get_name_leafdata());
    if (virtual_neighbor.is_set || is_set(virtual_neighbor.yfilter)) leaf_name_data.push_back(virtual_neighbor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Notification::Ospf::StateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::Ospf::StateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::Ospf::StateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor")
    {
        neighbor = value;
        neighbor.value_namespace = name_space;
        neighbor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-interface")
    {
        virtual_interface = value;
        virtual_interface.value_namespace = name_space;
        virtual_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-neighbor")
    {
        virtual_neighbor = value;
        virtual_neighbor.value_namespace = name_space;
        virtual_neighbor.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::Ospf::StateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "neighbor")
    {
        neighbor.yfilter = yfilter;
    }
    if(value_path == "virtual-interface")
    {
        virtual_interface.yfilter = yfilter;
    }
    if(value_path == "virtual-neighbor")
    {
        virtual_neighbor.yfilter = yfilter;
    }
}

bool Snmp::Notification::Ospf::StateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "neighbor" || name == "virtual-interface" || name == "virtual-neighbor")
        return true;
    return false;
}

Snmp::Notification::Ospfv3::Ospfv3()
    :
    error(std::make_shared<Snmp::Notification::Ospfv3::Error>())
	,state_change(std::make_shared<Snmp::Notification::Ospfv3::StateChange>())
{
    error->parent = this;
    state_change->parent = this;

    yang_name = "ospfv3"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Notification::Ospfv3::~Ospfv3()
{
}

bool Snmp::Notification::Ospfv3::has_data() const
{
    return (error !=  nullptr && error->has_data())
	|| (state_change !=  nullptr && state_change->has_data());
}

bool Snmp::Notification::Ospfv3::has_operation() const
{
    return is_set(yfilter)
	|| (error !=  nullptr && error->has_operation())
	|| (state_change !=  nullptr && state_change->has_operation());
}

std::string Snmp::Notification::Ospfv3::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::Ospfv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-cfg:ospfv3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::Ospfv3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Notification::Ospfv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        if(error == nullptr)
        {
            error = std::make_shared<Snmp::Notification::Ospfv3::Error>();
        }
        return error;
    }

    if(child_yang_name == "state-change")
    {
        if(state_change == nullptr)
        {
            state_change = std::make_shared<Snmp::Notification::Ospfv3::StateChange>();
        }
        return state_change;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::Ospfv3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(error != nullptr)
    {
        children["error"] = error;
    }

    if(state_change != nullptr)
    {
        children["state-change"] = state_change;
    }

    return children;
}

void Snmp::Notification::Ospfv3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Snmp::Notification::Ospfv3::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Snmp::Notification::Ospfv3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error" || name == "state-change")
        return true;
    return false;
}

Snmp::Notification::Ospfv3::Error::Error()
    :
    bad_packet{YType::empty, "bad-packet"},
    config_error{YType::empty, "config-error"},
    virtual_bad_packet{YType::empty, "virtual-bad-packet"},
    virtual_config_error{YType::empty, "virtual-config-error"}
{

    yang_name = "error"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Notification::Ospfv3::Error::~Error()
{
}

bool Snmp::Notification::Ospfv3::Error::has_data() const
{
    return bad_packet.is_set
	|| config_error.is_set
	|| virtual_bad_packet.is_set
	|| virtual_config_error.is_set;
}

bool Snmp::Notification::Ospfv3::Error::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bad_packet.yfilter)
	|| ydk::is_set(config_error.yfilter)
	|| ydk::is_set(virtual_bad_packet.yfilter)
	|| ydk::is_set(virtual_config_error.yfilter);
}

std::string Snmp::Notification::Ospfv3::Error::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/Cisco-IOS-XR-ipv6-ospfv3-cfg:ospfv3/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::Ospfv3::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::Ospfv3::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bad_packet.is_set || is_set(bad_packet.yfilter)) leaf_name_data.push_back(bad_packet.get_name_leafdata());
    if (config_error.is_set || is_set(config_error.yfilter)) leaf_name_data.push_back(config_error.get_name_leafdata());
    if (virtual_bad_packet.is_set || is_set(virtual_bad_packet.yfilter)) leaf_name_data.push_back(virtual_bad_packet.get_name_leafdata());
    if (virtual_config_error.is_set || is_set(virtual_config_error.yfilter)) leaf_name_data.push_back(virtual_config_error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Notification::Ospfv3::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::Ospfv3::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::Ospfv3::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bad-packet")
    {
        bad_packet = value;
        bad_packet.value_namespace = name_space;
        bad_packet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-error")
    {
        config_error = value;
        config_error.value_namespace = name_space;
        config_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-bad-packet")
    {
        virtual_bad_packet = value;
        virtual_bad_packet.value_namespace = name_space;
        virtual_bad_packet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-config-error")
    {
        virtual_config_error = value;
        virtual_config_error.value_namespace = name_space;
        virtual_config_error.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::Ospfv3::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bad-packet")
    {
        bad_packet.yfilter = yfilter;
    }
    if(value_path == "config-error")
    {
        config_error.yfilter = yfilter;
    }
    if(value_path == "virtual-bad-packet")
    {
        virtual_bad_packet.yfilter = yfilter;
    }
    if(value_path == "virtual-config-error")
    {
        virtual_config_error.yfilter = yfilter;
    }
}

bool Snmp::Notification::Ospfv3::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bad-packet" || name == "config-error" || name == "virtual-bad-packet" || name == "virtual-config-error")
        return true;
    return false;
}

Snmp::Notification::Ospfv3::StateChange::StateChange()
    :
    interface{YType::empty, "interface"},
    neighbor{YType::empty, "neighbor"},
    nssa_translator{YType::empty, "nssa-translator"},
    restart{YType::empty, "restart"},
    restart_helper{YType::empty, "restart-helper"},
    restart_virtual_helper{YType::empty, "restart-virtual-helper"},
    virtual_interface{YType::empty, "virtual-interface"},
    virtual_neighbor{YType::empty, "virtual-neighbor"}
{

    yang_name = "state-change"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Notification::Ospfv3::StateChange::~StateChange()
{
}

bool Snmp::Notification::Ospfv3::StateChange::has_data() const
{
    return interface.is_set
	|| neighbor.is_set
	|| nssa_translator.is_set
	|| restart.is_set
	|| restart_helper.is_set
	|| restart_virtual_helper.is_set
	|| virtual_interface.is_set
	|| virtual_neighbor.is_set;
}

bool Snmp::Notification::Ospfv3::StateChange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(neighbor.yfilter)
	|| ydk::is_set(nssa_translator.yfilter)
	|| ydk::is_set(restart.yfilter)
	|| ydk::is_set(restart_helper.yfilter)
	|| ydk::is_set(restart_virtual_helper.yfilter)
	|| ydk::is_set(virtual_interface.yfilter)
	|| ydk::is_set(virtual_neighbor.yfilter);
}

std::string Snmp::Notification::Ospfv3::StateChange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/Cisco-IOS-XR-ipv6-ospfv3-cfg:ospfv3/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::Ospfv3::StateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-change";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::Ospfv3::StateChange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (neighbor.is_set || is_set(neighbor.yfilter)) leaf_name_data.push_back(neighbor.get_name_leafdata());
    if (nssa_translator.is_set || is_set(nssa_translator.yfilter)) leaf_name_data.push_back(nssa_translator.get_name_leafdata());
    if (restart.is_set || is_set(restart.yfilter)) leaf_name_data.push_back(restart.get_name_leafdata());
    if (restart_helper.is_set || is_set(restart_helper.yfilter)) leaf_name_data.push_back(restart_helper.get_name_leafdata());
    if (restart_virtual_helper.is_set || is_set(restart_virtual_helper.yfilter)) leaf_name_data.push_back(restart_virtual_helper.get_name_leafdata());
    if (virtual_interface.is_set || is_set(virtual_interface.yfilter)) leaf_name_data.push_back(virtual_interface.get_name_leafdata());
    if (virtual_neighbor.is_set || is_set(virtual_neighbor.yfilter)) leaf_name_data.push_back(virtual_neighbor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Notification::Ospfv3::StateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::Ospfv3::StateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::Ospfv3::StateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor")
    {
        neighbor = value;
        neighbor.value_namespace = name_space;
        neighbor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-translator")
    {
        nssa_translator = value;
        nssa_translator.value_namespace = name_space;
        nssa_translator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart")
    {
        restart = value;
        restart.value_namespace = name_space;
        restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-helper")
    {
        restart_helper = value;
        restart_helper.value_namespace = name_space;
        restart_helper.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-virtual-helper")
    {
        restart_virtual_helper = value;
        restart_virtual_helper.value_namespace = name_space;
        restart_virtual_helper.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-interface")
    {
        virtual_interface = value;
        virtual_interface.value_namespace = name_space;
        virtual_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-neighbor")
    {
        virtual_neighbor = value;
        virtual_neighbor.value_namespace = name_space;
        virtual_neighbor.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::Ospfv3::StateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "neighbor")
    {
        neighbor.yfilter = yfilter;
    }
    if(value_path == "nssa-translator")
    {
        nssa_translator.yfilter = yfilter;
    }
    if(value_path == "restart")
    {
        restart.yfilter = yfilter;
    }
    if(value_path == "restart-helper")
    {
        restart_helper.yfilter = yfilter;
    }
    if(value_path == "restart-virtual-helper")
    {
        restart_virtual_helper.yfilter = yfilter;
    }
    if(value_path == "virtual-interface")
    {
        virtual_interface.yfilter = yfilter;
    }
    if(value_path == "virtual-neighbor")
    {
        virtual_neighbor.yfilter = yfilter;
    }
}

bool Snmp::Notification::Ospfv3::StateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "neighbor" || name == "nssa-translator" || name == "restart" || name == "restart-helper" || name == "restart-virtual-helper" || name == "virtual-interface" || name == "virtual-neighbor")
        return true;
    return false;
}

Snmp::Notification::Otn::Otn()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "otn"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Notification::Otn::~Otn()
{
}

bool Snmp::Notification::Otn::has_data() const
{
    return enable.is_set;
}

bool Snmp::Notification::Otn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Snmp::Notification::Otn::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::Otn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-otnifmib-cfg:otn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::Otn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Notification::Otn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::Otn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::Otn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::Otn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Snmp::Notification::Otn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Snmp::Notification::Rf::Rf()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "rf"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false;
}

Snmp::Notification::Rf::~Rf()
{
}

bool Snmp::Notification::Rf::has_data() const
{
    return enable.is_set;
}

bool Snmp::Notification::Rf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Snmp::Notification::Rf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-agent-cfg:snmp/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Snmp::Notification::Rf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-snmp-mib-rfmib-cfg:rf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Snmp::Notification::Rf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Snmp::Notification::Rf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmp::Notification::Rf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmp::Notification::Rf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Snmp::Notification::Rf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Snmp::Notification::Rf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

const Enum::YLeaf SnmpMibViewInclusion::included {1, "included"};
const Enum::YLeaf SnmpMibViewInclusion::excluded {2, "excluded"};

const Enum::YLeaf SnmpHashAlgorithm::none {0, "none"};
const Enum::YLeaf SnmpHashAlgorithm::md5 {1, "md5"};
const Enum::YLeaf SnmpHashAlgorithm::sha {2, "sha"};

const Enum::YLeaf SnmpOwnerAccess::sdr_owner {0, "sdr-owner"};
const Enum::YLeaf SnmpOwnerAccess::system_owner {1, "system-owner"};

const Enum::YLeaf SnmpTos::precedence {0, "precedence"};
const Enum::YLeaf SnmpTos::dscp {1, "dscp"};

const Enum::YLeaf SnmpBulkstatFileFormat::schema_ascii {1, "schema-ascii"};
const Enum::YLeaf SnmpBulkstatFileFormat::bulk_ascii {2, "bulk-ascii"};
const Enum::YLeaf SnmpBulkstatFileFormat::bulk_binary {3, "bulk-binary"};

const Enum::YLeaf SnmpSecurityModel::no_authentication {0, "no-authentication"};
const Enum::YLeaf SnmpSecurityModel::authentication {1, "authentication"};
const Enum::YLeaf SnmpSecurityModel::privacy {2, "privacy"};

const Enum::YLeaf UserSnmpVersion::v1 {1, "v1"};
const Enum::YLeaf UserSnmpVersion::v2c {2, "v2c"};
const Enum::YLeaf UserSnmpVersion::v3 {3, "v3"};

const Enum::YLeaf SnmpDscpValue::default_ {0, "default"};
const Enum::YLeaf SnmpDscpValue::af11 {10, "af11"};
const Enum::YLeaf SnmpDscpValue::af12 {12, "af12"};
const Enum::YLeaf SnmpDscpValue::af13 {14, "af13"};
const Enum::YLeaf SnmpDscpValue::af21 {18, "af21"};
const Enum::YLeaf SnmpDscpValue::af22 {20, "af22"};
const Enum::YLeaf SnmpDscpValue::af23 {22, "af23"};
const Enum::YLeaf SnmpDscpValue::af31 {26, "af31"};
const Enum::YLeaf SnmpDscpValue::af32 {28, "af32"};
const Enum::YLeaf SnmpDscpValue::af33 {30, "af33"};
const Enum::YLeaf SnmpDscpValue::af41 {34, "af41"};
const Enum::YLeaf SnmpDscpValue::af42 {36, "af42"};
const Enum::YLeaf SnmpDscpValue::af43 {38, "af43"};
const Enum::YLeaf SnmpDscpValue::ef {46, "ef"};
const Enum::YLeaf SnmpDscpValue::cs1 {8, "cs1"};
const Enum::YLeaf SnmpDscpValue::cs2 {16, "cs2"};
const Enum::YLeaf SnmpDscpValue::cs3 {24, "cs3"};
const Enum::YLeaf SnmpDscpValue::cs4 {32, "cs4"};
const Enum::YLeaf SnmpDscpValue::cs5 {40, "cs5"};
const Enum::YLeaf SnmpDscpValue::cs6 {48, "cs6"};
const Enum::YLeaf SnmpDscpValue::cs7 {56, "cs7"};

const Enum::YLeaf SnmpPrivAlgorithm::none {0, "none"};
const Enum::YLeaf SnmpPrivAlgorithm::des {1, "des"};
const Enum::YLeaf SnmpPrivAlgorithm::Y_3des {2, "3des"};
const Enum::YLeaf SnmpPrivAlgorithm::aes128 {3, "aes128"};
const Enum::YLeaf SnmpPrivAlgorithm::aes192 {4, "aes192"};
const Enum::YLeaf SnmpPrivAlgorithm::aes256 {5, "aes256"};

const Enum::YLeaf Snmpacl::ipv4 {1, "ipv4"};
const Enum::YLeaf Snmpacl::ipv6 {2, "ipv6"};

const Enum::YLeaf SnmpContext::vrf {1, "vrf"};
const Enum::YLeaf SnmpContext::bridge {4, "bridge"};
const Enum::YLeaf SnmpContext::ospf {5, "ospf"};
const Enum::YLeaf SnmpContext::ospfv3 {6, "ospfv3"};

const Enum::YLeaf SnmpAccessLevel::read_only {0, "read-only"};
const Enum::YLeaf SnmpAccessLevel::read_write {1, "read-write"};

const Enum::YLeaf GroupSnmpVersion::v1 {0, "v1"};
const Enum::YLeaf GroupSnmpVersion::v2c {1, "v2c"};
const Enum::YLeaf GroupSnmpVersion::v3 {2, "v3"};

const Enum::YLeaf SnmpPrecedenceValue1::routine {0, "routine"};
const Enum::YLeaf SnmpPrecedenceValue1::priority {1, "priority"};
const Enum::YLeaf SnmpPrecedenceValue1::immediate {2, "immediate"};
const Enum::YLeaf SnmpPrecedenceValue1::flash {3, "flash"};
const Enum::YLeaf SnmpPrecedenceValue1::flash_override {4, "flash-override"};
const Enum::YLeaf SnmpPrecedenceValue1::critical {5, "critical"};
const Enum::YLeaf SnmpPrecedenceValue1::internet {6, "internet"};
const Enum::YLeaf SnmpPrecedenceValue1::network {7, "network"};

const Enum::YLeaf SnmpBulkstatSchema::exact_interface {1, "exact-interface"};
const Enum::YLeaf SnmpBulkstatSchema::exact_oid {2, "exact-oid"};
const Enum::YLeaf SnmpBulkstatSchema::wild_interface {3, "wild-interface"};
const Enum::YLeaf SnmpBulkstatSchema::wild_oid {4, "wild-oid"};
const Enum::YLeaf SnmpBulkstatSchema::range_oid {5, "range-oid"};
const Enum::YLeaf SnmpBulkstatSchema::repeat_oid {6, "repeat-oid"};


}
}

