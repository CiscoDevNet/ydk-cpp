
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_sla_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_sla_cfg {

Sla::Sla()
    :
    protocols(std::make_shared<Sla::Protocols>())
{
    protocols->parent = this;

    yang_name = "sla"; yang_parent_name = "Cisco-IOS-XR-infra-sla-cfg";
}

Sla::~Sla()
{
}

bool Sla::has_data() const
{
    return (protocols !=  nullptr && protocols->has_data());
}

bool Sla::has_operation() const
{
    return is_set(yfilter)
	|| (protocols !=  nullptr && protocols->has_operation());
}

std::string Sla::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-sla-cfg:sla";

    return path_buffer.str();

}

const EntityPath Sla::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocols")
    {
        if(protocols == nullptr)
        {
            protocols = std::make_shared<Sla::Protocols>();
        }
        return protocols;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(protocols != nullptr)
    {
        children["protocols"] = protocols;
    }

    return children;
}

void Sla::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sla::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Sla::clone_ptr() const
{
    return std::make_shared<Sla>();
}

std::string Sla::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Sla::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Sla::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Sla::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Sla::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocols")
        return true;
    return false;
}

Sla::Protocols::Protocols()
    :
    ethernet(std::make_shared<Sla::Protocols::Ethernet>())
{
    ethernet->parent = this;

    yang_name = "protocols"; yang_parent_name = "sla";
}

Sla::Protocols::~Protocols()
{
}

bool Sla::Protocols::has_data() const
{
    return (ethernet !=  nullptr && ethernet->has_data());
}

bool Sla::Protocols::has_operation() const
{
    return is_set(yfilter)
	|| (ethernet !=  nullptr && ethernet->has_operation());
}

std::string Sla::Protocols::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocols";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-cfg:sla/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<Sla::Protocols::Ethernet>();
        }
        return ethernet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ethernet != nullptr)
    {
        children["ethernet"] = ethernet;
    }

    return children;
}

void Sla::Protocols::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sla::Protocols::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sla::Protocols::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet")
        return true;
    return false;
}

Sla::Protocols::Ethernet::Ethernet()
    :
    profiles(std::make_shared<Sla::Protocols::Ethernet::Profiles>())
{
    profiles->parent = this;

    yang_name = "ethernet"; yang_parent_name = "protocols";
}

Sla::Protocols::Ethernet::~Ethernet()
{
}

bool Sla::Protocols::Ethernet::has_data() const
{
    return (profiles !=  nullptr && profiles->has_data());
}

bool Sla::Protocols::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| (profiles !=  nullptr && profiles->has_operation());
}

std::string Sla::Protocols::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ethernet-cfm-cfg:ethernet";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-cfg:sla/protocols/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "profiles")
    {
        if(profiles == nullptr)
        {
            profiles = std::make_shared<Sla::Protocols::Ethernet::Profiles>();
        }
        return profiles;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(profiles != nullptr)
    {
        children["profiles"] = profiles;
    }

    return children;
}

void Sla::Protocols::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sla::Protocols::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sla::Protocols::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profiles")
        return true;
    return false;
}

Sla::Protocols::Ethernet::Profiles::Profiles()
{
    yang_name = "profiles"; yang_parent_name = "ethernet";
}

Sla::Protocols::Ethernet::Profiles::~Profiles()
{
}

bool Sla::Protocols::Ethernet::Profiles::has_data() const
{
    for (std::size_t index=0; index<profile.size(); index++)
    {
        if(profile[index]->has_data())
            return true;
    }
    return false;
}

bool Sla::Protocols::Ethernet::Profiles::has_operation() const
{
    for (std::size_t index=0; index<profile.size(); index++)
    {
        if(profile[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Sla::Protocols::Ethernet::Profiles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profiles";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::Profiles::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-cfg:sla/protocols/Cisco-IOS-XR-ethernet-cfm-cfg:ethernet/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::Profiles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "profile")
    {
        for(auto const & c : profile)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Sla::Protocols::Ethernet::Profiles::Profile>();
        c->parent = this;
        profile.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::Profiles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : profile)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Sla::Protocols::Ethernet::Profiles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sla::Protocols::Ethernet::Profiles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sla::Protocols::Ethernet::Profiles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Sla::Protocols::Ethernet::Profiles::Profile::Profile()
    :
    profile_name{YType::str, "profile-name"},
    packet_type{YType::str, "packet-type"}
    	,
    probe(std::make_shared<Sla::Protocols::Ethernet::Profiles::Profile::Probe>())
	,schedule(nullptr) // presence node
	,statistics(std::make_shared<Sla::Protocols::Ethernet::Profiles::Profile::Statistics>())
{
    probe->parent = this;

    statistics->parent = this;

    yang_name = "profile"; yang_parent_name = "profiles";
}

Sla::Protocols::Ethernet::Profiles::Profile::~Profile()
{
}

bool Sla::Protocols::Ethernet::Profiles::Profile::has_data() const
{
    return profile_name.is_set
	|| packet_type.is_set
	|| (probe !=  nullptr && probe->has_data())
	|| (schedule !=  nullptr && schedule->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Sla::Protocols::Ethernet::Profiles::Profile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_name.yfilter)
	|| ydk::is_set(packet_type.yfilter)
	|| (probe !=  nullptr && probe->has_operation())
	|| (schedule !=  nullptr && schedule->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Sla::Protocols::Ethernet::Profiles::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile" <<"[profile-name='" <<profile_name <<"']";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::Profiles::Profile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-sla-cfg:sla/protocols/Cisco-IOS-XR-ethernet-cfm-cfg:ethernet/profiles/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());
    if (packet_type.is_set || is_set(packet_type.yfilter)) leaf_name_data.push_back(packet_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::Profiles::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "probe")
    {
        if(probe == nullptr)
        {
            probe = std::make_shared<Sla::Protocols::Ethernet::Profiles::Profile::Probe>();
        }
        return probe;
    }

    if(child_yang_name == "schedule")
    {
        if(schedule == nullptr)
        {
            schedule = std::make_shared<Sla::Protocols::Ethernet::Profiles::Profile::Schedule>();
        }
        return schedule;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Sla::Protocols::Ethernet::Profiles::Profile::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::Profiles::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(probe != nullptr)
    {
        children["probe"] = probe;
    }

    if(schedule != nullptr)
    {
        children["schedule"] = schedule;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Sla::Protocols::Ethernet::Profiles::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-type")
    {
        packet_type = value;
        packet_type.value_namespace = name_space;
        packet_type.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::Profiles::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
    if(value_path == "packet-type")
    {
        packet_type.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::Profiles::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "probe" || name == "schedule" || name == "statistics" || name == "profile-name" || name == "packet-type")
        return true;
    return false;
}

Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistics()
{
    yang_name = "statistics"; yang_parent_name = "profile";
}

Sla::Protocols::Ethernet::Profiles::Profile::Statistics::~Statistics()
{
}

bool Sla::Protocols::Ethernet::Profiles::Profile::Statistics::has_data() const
{
    for (std::size_t index=0; index<statistic.size(); index++)
    {
        if(statistic[index]->has_data())
            return true;
    }
    return false;
}

bool Sla::Protocols::Ethernet::Profiles::Profile::Statistics::has_operation() const
{
    for (std::size_t index=0; index<statistic.size(); index++)
    {
        if(statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Sla::Protocols::Ethernet::Profiles::Profile::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::Profiles::Profile::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_infra_sla_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::Profiles::Profile::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistic")
    {
        for(auto const & c : statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic>();
        c->parent = this;
        statistic.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::Profiles::Profile::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : statistic)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Sla::Protocols::Ethernet::Profiles::Profile::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sla::Protocols::Ethernet::Profiles::Profile::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sla::Protocols::Ethernet::Profiles::Profile::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistic")
        return true;
    return false;
}

Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::Statistic()
    :
    statistic_name{YType::enumeration, "statistic-name"},
    buckets_archive{YType::uint32, "buckets-archive"},
    enable{YType::empty, "enable"}
    	,
    aggregation(nullptr) // presence node
	,buckets_size(nullptr) // presence node
{
    yang_name = "statistic"; yang_parent_name = "statistics";
}

Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::~Statistic()
{
}

bool Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::has_data() const
{
    return statistic_name.is_set
	|| buckets_archive.is_set
	|| enable.is_set
	|| (aggregation !=  nullptr && aggregation->has_data())
	|| (buckets_size !=  nullptr && buckets_size->has_data());
}

bool Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(statistic_name.yfilter)
	|| ydk::is_set(buckets_archive.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (aggregation !=  nullptr && aggregation->has_operation())
	|| (buckets_size !=  nullptr && buckets_size->has_operation());
}

std::string Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistic" <<"[statistic-name='" <<statistic_name <<"']";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistic' in Cisco_IOS_XR_infra_sla_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (statistic_name.is_set || is_set(statistic_name.yfilter)) leaf_name_data.push_back(statistic_name.get_name_leafdata());
    if (buckets_archive.is_set || is_set(buckets_archive.yfilter)) leaf_name_data.push_back(buckets_archive.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggregation")
    {
        if(aggregation == nullptr)
        {
            aggregation = std::make_shared<Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::Aggregation>();
        }
        return aggregation;
    }

    if(child_yang_name == "buckets-size")
    {
        if(buckets_size == nullptr)
        {
            buckets_size = std::make_shared<Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::BucketsSize>();
        }
        return buckets_size;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aggregation != nullptr)
    {
        children["aggregation"] = aggregation;
    }

    if(buckets_size != nullptr)
    {
        children["buckets-size"] = buckets_size;
    }

    return children;
}

void Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "statistic-name")
    {
        statistic_name = value;
        statistic_name.value_namespace = name_space;
        statistic_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "buckets-archive")
    {
        buckets_archive = value;
        buckets_archive.value_namespace = name_space;
        buckets_archive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "statistic-name")
    {
        statistic_name.yfilter = yfilter;
    }
    if(value_path == "buckets-archive")
    {
        buckets_archive.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggregation" || name == "buckets-size" || name == "statistic-name" || name == "buckets-archive" || name == "enable")
        return true;
    return false;
}

Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::BucketsSize::BucketsSize()
    :
    buckets_size{YType::uint32, "buckets-size"},
    buckets_size_unit{YType::enumeration, "buckets-size-unit"}
{
    yang_name = "buckets-size"; yang_parent_name = "statistic";
}

Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::BucketsSize::~BucketsSize()
{
}

bool Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::BucketsSize::has_data() const
{
    return buckets_size.is_set
	|| buckets_size_unit.is_set;
}

bool Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::BucketsSize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(buckets_size.yfilter)
	|| ydk::is_set(buckets_size_unit.yfilter);
}

std::string Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::BucketsSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "buckets-size";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::BucketsSize::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BucketsSize' in Cisco_IOS_XR_infra_sla_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buckets_size.is_set || is_set(buckets_size.yfilter)) leaf_name_data.push_back(buckets_size.get_name_leafdata());
    if (buckets_size_unit.is_set || is_set(buckets_size_unit.yfilter)) leaf_name_data.push_back(buckets_size_unit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::BucketsSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::BucketsSize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::BucketsSize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "buckets-size")
    {
        buckets_size = value;
        buckets_size.value_namespace = name_space;
        buckets_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "buckets-size-unit")
    {
        buckets_size_unit = value;
        buckets_size_unit.value_namespace = name_space;
        buckets_size_unit.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::BucketsSize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "buckets-size")
    {
        buckets_size.yfilter = yfilter;
    }
    if(value_path == "buckets-size-unit")
    {
        buckets_size_unit.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::BucketsSize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "buckets-size" || name == "buckets-size-unit")
        return true;
    return false;
}

Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::Aggregation::Aggregation()
    :
    bins_count{YType::uint32, "bins-count"},
    bins_width{YType::uint32, "bins-width"},
    bins_width_tenths{YType::uint32, "bins-width-tenths"}
{
    yang_name = "aggregation"; yang_parent_name = "statistic";
}

Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::Aggregation::~Aggregation()
{
}

bool Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::Aggregation::has_data() const
{
    return bins_count.is_set
	|| bins_width.is_set
	|| bins_width_tenths.is_set;
}

bool Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::Aggregation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bins_count.yfilter)
	|| ydk::is_set(bins_width.yfilter)
	|| ydk::is_set(bins_width_tenths.yfilter);
}

std::string Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::Aggregation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregation";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::Aggregation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Aggregation' in Cisco_IOS_XR_infra_sla_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bins_count.is_set || is_set(bins_count.yfilter)) leaf_name_data.push_back(bins_count.get_name_leafdata());
    if (bins_width.is_set || is_set(bins_width.yfilter)) leaf_name_data.push_back(bins_width.get_name_leafdata());
    if (bins_width_tenths.is_set || is_set(bins_width_tenths.yfilter)) leaf_name_data.push_back(bins_width_tenths.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::Aggregation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::Aggregation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::Aggregation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bins-count")
    {
        bins_count = value;
        bins_count.value_namespace = name_space;
        bins_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bins-width")
    {
        bins_width = value;
        bins_width.value_namespace = name_space;
        bins_width.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bins-width-tenths")
    {
        bins_width_tenths = value;
        bins_width_tenths.value_namespace = name_space;
        bins_width_tenths.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::Aggregation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bins-count")
    {
        bins_count.yfilter = yfilter;
    }
    if(value_path == "bins-width")
    {
        bins_width.yfilter = yfilter;
    }
    if(value_path == "bins-width-tenths")
    {
        bins_width_tenths.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::Aggregation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bins-count" || name == "bins-width" || name == "bins-width-tenths")
        return true;
    return false;
}

Sla::Protocols::Ethernet::Profiles::Profile::Schedule::Schedule()
    :
    probe_duration{YType::uint32, "probe-duration"},
    probe_duration_unit{YType::enumeration, "probe-duration-unit"},
    probe_interval{YType::uint32, "probe-interval"},
    probe_interval_day{YType::enumeration, "probe-interval-day"},
    probe_interval_unit{YType::enumeration, "probe-interval-unit"},
    start_time_hour{YType::uint32, "start-time-hour"},
    start_time_minute{YType::uint32, "start-time-minute"},
    start_time_second{YType::uint32, "start-time-second"}
{
    yang_name = "schedule"; yang_parent_name = "profile";
}

Sla::Protocols::Ethernet::Profiles::Profile::Schedule::~Schedule()
{
}

bool Sla::Protocols::Ethernet::Profiles::Profile::Schedule::has_data() const
{
    return probe_duration.is_set
	|| probe_duration_unit.is_set
	|| probe_interval.is_set
	|| probe_interval_day.is_set
	|| probe_interval_unit.is_set
	|| start_time_hour.is_set
	|| start_time_minute.is_set
	|| start_time_second.is_set;
}

bool Sla::Protocols::Ethernet::Profiles::Profile::Schedule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(probe_duration.yfilter)
	|| ydk::is_set(probe_duration_unit.yfilter)
	|| ydk::is_set(probe_interval.yfilter)
	|| ydk::is_set(probe_interval_day.yfilter)
	|| ydk::is_set(probe_interval_unit.yfilter)
	|| ydk::is_set(start_time_hour.yfilter)
	|| ydk::is_set(start_time_minute.yfilter)
	|| ydk::is_set(start_time_second.yfilter);
}

std::string Sla::Protocols::Ethernet::Profiles::Profile::Schedule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "schedule";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::Profiles::Profile::Schedule::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Schedule' in Cisco_IOS_XR_infra_sla_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (probe_duration.is_set || is_set(probe_duration.yfilter)) leaf_name_data.push_back(probe_duration.get_name_leafdata());
    if (probe_duration_unit.is_set || is_set(probe_duration_unit.yfilter)) leaf_name_data.push_back(probe_duration_unit.get_name_leafdata());
    if (probe_interval.is_set || is_set(probe_interval.yfilter)) leaf_name_data.push_back(probe_interval.get_name_leafdata());
    if (probe_interval_day.is_set || is_set(probe_interval_day.yfilter)) leaf_name_data.push_back(probe_interval_day.get_name_leafdata());
    if (probe_interval_unit.is_set || is_set(probe_interval_unit.yfilter)) leaf_name_data.push_back(probe_interval_unit.get_name_leafdata());
    if (start_time_hour.is_set || is_set(start_time_hour.yfilter)) leaf_name_data.push_back(start_time_hour.get_name_leafdata());
    if (start_time_minute.is_set || is_set(start_time_minute.yfilter)) leaf_name_data.push_back(start_time_minute.get_name_leafdata());
    if (start_time_second.is_set || is_set(start_time_second.yfilter)) leaf_name_data.push_back(start_time_second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::Profiles::Profile::Schedule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::Profiles::Profile::Schedule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Sla::Protocols::Ethernet::Profiles::Profile::Schedule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "probe-duration")
    {
        probe_duration = value;
        probe_duration.value_namespace = name_space;
        probe_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probe-duration-unit")
    {
        probe_duration_unit = value;
        probe_duration_unit.value_namespace = name_space;
        probe_duration_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probe-interval")
    {
        probe_interval = value;
        probe_interval.value_namespace = name_space;
        probe_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probe-interval-day")
    {
        probe_interval_day = value;
        probe_interval_day.value_namespace = name_space;
        probe_interval_day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probe-interval-unit")
    {
        probe_interval_unit = value;
        probe_interval_unit.value_namespace = name_space;
        probe_interval_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time-hour")
    {
        start_time_hour = value;
        start_time_hour.value_namespace = name_space;
        start_time_hour.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time-minute")
    {
        start_time_minute = value;
        start_time_minute.value_namespace = name_space;
        start_time_minute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time-second")
    {
        start_time_second = value;
        start_time_second.value_namespace = name_space;
        start_time_second.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::Profiles::Profile::Schedule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "probe-duration")
    {
        probe_duration.yfilter = yfilter;
    }
    if(value_path == "probe-duration-unit")
    {
        probe_duration_unit.yfilter = yfilter;
    }
    if(value_path == "probe-interval")
    {
        probe_interval.yfilter = yfilter;
    }
    if(value_path == "probe-interval-day")
    {
        probe_interval_day.yfilter = yfilter;
    }
    if(value_path == "probe-interval-unit")
    {
        probe_interval_unit.yfilter = yfilter;
    }
    if(value_path == "start-time-hour")
    {
        start_time_hour.yfilter = yfilter;
    }
    if(value_path == "start-time-minute")
    {
        start_time_minute.yfilter = yfilter;
    }
    if(value_path == "start-time-second")
    {
        start_time_second.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::Profiles::Profile::Schedule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "probe-duration" || name == "probe-duration-unit" || name == "probe-interval" || name == "probe-interval-day" || name == "probe-interval-unit" || name == "start-time-hour" || name == "start-time-minute" || name == "start-time-second")
        return true;
    return false;
}

Sla::Protocols::Ethernet::Profiles::Profile::Probe::Probe()
    :
    priority{YType::uint32, "priority"},
    synthetic_loss_calculation_packets{YType::uint32, "synthetic-loss-calculation-packets"}
    	,
    packet_size_and_padding(nullptr) // presence node
	,send(nullptr) // presence node
{
    yang_name = "probe"; yang_parent_name = "profile";
}

Sla::Protocols::Ethernet::Profiles::Profile::Probe::~Probe()
{
}

bool Sla::Protocols::Ethernet::Profiles::Profile::Probe::has_data() const
{
    return priority.is_set
	|| synthetic_loss_calculation_packets.is_set
	|| (packet_size_and_padding !=  nullptr && packet_size_and_padding->has_data())
	|| (send !=  nullptr && send->has_data());
}

bool Sla::Protocols::Ethernet::Profiles::Profile::Probe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(synthetic_loss_calculation_packets.yfilter)
	|| (packet_size_and_padding !=  nullptr && packet_size_and_padding->has_operation())
	|| (send !=  nullptr && send->has_operation());
}

std::string Sla::Protocols::Ethernet::Profiles::Profile::Probe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "probe";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::Profiles::Profile::Probe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Probe' in Cisco_IOS_XR_infra_sla_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (synthetic_loss_calculation_packets.is_set || is_set(synthetic_loss_calculation_packets.yfilter)) leaf_name_data.push_back(synthetic_loss_calculation_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::Profiles::Profile::Probe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "packet-size-and-padding")
    {
        if(packet_size_and_padding == nullptr)
        {
            packet_size_and_padding = std::make_shared<Sla::Protocols::Ethernet::Profiles::Profile::Probe::PacketSizeAndPadding>();
        }
        return packet_size_and_padding;
    }

    if(child_yang_name == "send")
    {
        if(send == nullptr)
        {
            send = std::make_shared<Sla::Protocols::Ethernet::Profiles::Profile::Probe::Send>();
        }
        return send;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::Profiles::Profile::Probe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(packet_size_and_padding != nullptr)
    {
        children["packet-size-and-padding"] = packet_size_and_padding;
    }

    if(send != nullptr)
    {
        children["send"] = send;
    }

    return children;
}

void Sla::Protocols::Ethernet::Profiles::Profile::Probe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synthetic-loss-calculation-packets")
    {
        synthetic_loss_calculation_packets = value;
        synthetic_loss_calculation_packets.value_namespace = name_space;
        synthetic_loss_calculation_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::Profiles::Profile::Probe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "synthetic-loss-calculation-packets")
    {
        synthetic_loss_calculation_packets.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::Profiles::Profile::Probe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-size-and-padding" || name == "send" || name == "priority" || name == "synthetic-loss-calculation-packets")
        return true;
    return false;
}

Sla::Protocols::Ethernet::Profiles::Profile::Probe::Send::Send()
    :
    burst_interval{YType::uint32, "burst-interval"},
    burst_interval_unit{YType::enumeration, "burst-interval-unit"},
    packet_count{YType::uint32, "packet-count"},
    packet_interval{YType::uint32, "packet-interval"},
    packet_interval_unit{YType::enumeration, "packet-interval-unit"},
    send_type{YType::enumeration, "send-type"}
{
    yang_name = "send"; yang_parent_name = "probe";
}

Sla::Protocols::Ethernet::Profiles::Profile::Probe::Send::~Send()
{
}

bool Sla::Protocols::Ethernet::Profiles::Profile::Probe::Send::has_data() const
{
    return burst_interval.is_set
	|| burst_interval_unit.is_set
	|| packet_count.is_set
	|| packet_interval.is_set
	|| packet_interval_unit.is_set
	|| send_type.is_set;
}

bool Sla::Protocols::Ethernet::Profiles::Profile::Probe::Send::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(burst_interval.yfilter)
	|| ydk::is_set(burst_interval_unit.yfilter)
	|| ydk::is_set(packet_count.yfilter)
	|| ydk::is_set(packet_interval.yfilter)
	|| ydk::is_set(packet_interval_unit.yfilter)
	|| ydk::is_set(send_type.yfilter);
}

std::string Sla::Protocols::Ethernet::Profiles::Profile::Probe::Send::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::Profiles::Profile::Probe::Send::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Send' in Cisco_IOS_XR_infra_sla_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (burst_interval.is_set || is_set(burst_interval.yfilter)) leaf_name_data.push_back(burst_interval.get_name_leafdata());
    if (burst_interval_unit.is_set || is_set(burst_interval_unit.yfilter)) leaf_name_data.push_back(burst_interval_unit.get_name_leafdata());
    if (packet_count.is_set || is_set(packet_count.yfilter)) leaf_name_data.push_back(packet_count.get_name_leafdata());
    if (packet_interval.is_set || is_set(packet_interval.yfilter)) leaf_name_data.push_back(packet_interval.get_name_leafdata());
    if (packet_interval_unit.is_set || is_set(packet_interval_unit.yfilter)) leaf_name_data.push_back(packet_interval_unit.get_name_leafdata());
    if (send_type.is_set || is_set(send_type.yfilter)) leaf_name_data.push_back(send_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::Profiles::Profile::Probe::Send::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::Profiles::Profile::Probe::Send::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Sla::Protocols::Ethernet::Profiles::Profile::Probe::Send::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "burst-interval")
    {
        burst_interval = value;
        burst_interval.value_namespace = name_space;
        burst_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst-interval-unit")
    {
        burst_interval_unit = value;
        burst_interval_unit.value_namespace = name_space;
        burst_interval_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-count")
    {
        packet_count = value;
        packet_count.value_namespace = name_space;
        packet_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-interval")
    {
        packet_interval = value;
        packet_interval.value_namespace = name_space;
        packet_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-interval-unit")
    {
        packet_interval_unit = value;
        packet_interval_unit.value_namespace = name_space;
        packet_interval_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-type")
    {
        send_type = value;
        send_type.value_namespace = name_space;
        send_type.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::Profiles::Profile::Probe::Send::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "burst-interval")
    {
        burst_interval.yfilter = yfilter;
    }
    if(value_path == "burst-interval-unit")
    {
        burst_interval_unit.yfilter = yfilter;
    }
    if(value_path == "packet-count")
    {
        packet_count.yfilter = yfilter;
    }
    if(value_path == "packet-interval")
    {
        packet_interval.yfilter = yfilter;
    }
    if(value_path == "packet-interval-unit")
    {
        packet_interval_unit.yfilter = yfilter;
    }
    if(value_path == "send-type")
    {
        send_type.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::Profiles::Profile::Probe::Send::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "burst-interval" || name == "burst-interval-unit" || name == "packet-count" || name == "packet-interval" || name == "packet-interval-unit" || name == "send-type")
        return true;
    return false;
}

Sla::Protocols::Ethernet::Profiles::Profile::Probe::PacketSizeAndPadding::PacketSizeAndPadding()
    :
    padding_type{YType::enumeration, "padding-type"},
    padding_value{YType::str, "padding-value"},
    size{YType::uint32, "size"}
{
    yang_name = "packet-size-and-padding"; yang_parent_name = "probe";
}

Sla::Protocols::Ethernet::Profiles::Profile::Probe::PacketSizeAndPadding::~PacketSizeAndPadding()
{
}

bool Sla::Protocols::Ethernet::Profiles::Profile::Probe::PacketSizeAndPadding::has_data() const
{
    return padding_type.is_set
	|| padding_value.is_set
	|| size.is_set;
}

bool Sla::Protocols::Ethernet::Profiles::Profile::Probe::PacketSizeAndPadding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(padding_type.yfilter)
	|| ydk::is_set(padding_value.yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string Sla::Protocols::Ethernet::Profiles::Profile::Probe::PacketSizeAndPadding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-size-and-padding";

    return path_buffer.str();

}

const EntityPath Sla::Protocols::Ethernet::Profiles::Profile::Probe::PacketSizeAndPadding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PacketSizeAndPadding' in Cisco_IOS_XR_infra_sla_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (padding_type.is_set || is_set(padding_type.yfilter)) leaf_name_data.push_back(padding_type.get_name_leafdata());
    if (padding_value.is_set || is_set(padding_value.yfilter)) leaf_name_data.push_back(padding_value.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Sla::Protocols::Ethernet::Profiles::Profile::Probe::PacketSizeAndPadding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sla::Protocols::Ethernet::Profiles::Profile::Probe::PacketSizeAndPadding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Sla::Protocols::Ethernet::Profiles::Profile::Probe::PacketSizeAndPadding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "padding-type")
    {
        padding_type = value;
        padding_type.value_namespace = name_space;
        padding_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "padding-value")
    {
        padding_value = value;
        padding_value.value_namespace = name_space;
        padding_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void Sla::Protocols::Ethernet::Profiles::Profile::Probe::PacketSizeAndPadding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "padding-type")
    {
        padding_type.yfilter = yfilter;
    }
    if(value_path == "padding-value")
    {
        padding_value.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool Sla::Protocols::Ethernet::Profiles::Profile::Probe::PacketSizeAndPadding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "padding-type" || name == "padding-value" || name == "size")
        return true;
    return false;
}


}
}

