
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_clns_isis_oper_4.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_clns_isis_oper {

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevels()
{

    yang_name = "topology-levels"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::~TopologyLevels()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::has_data() const
{
    for (std::size_t index=0; index<topology_level.size(); index++)
    {
        if(topology_level[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::has_operation() const
{
    for (std::size_t index=0; index<topology_level.size(); index++)
    {
        if(topology_level[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-levels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology-level")
    {
        for(auto const & c : topology_level)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel>();
        c->parent = this;
        topology_level.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : topology_level)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology-level")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologyLevel()
    :
    level{YType::enumeration, "level"}
    	,
    ipv4_link_topologies(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies>())
	,ipv6_link_topologies(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies>())
	,spf_log(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog>())
	,te_adjacency_log(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog>())
	,te_advertisements(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements>())
	,te_tunnels(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels>())
	,topology_summary(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary>())
{
    ipv4_link_topologies->parent = this;
    ipv6_link_topologies->parent = this;
    spf_log->parent = this;
    te_adjacency_log->parent = this;
    te_advertisements->parent = this;
    te_tunnels->parent = this;
    topology_summary->parent = this;

    yang_name = "topology-level"; yang_parent_name = "topology-levels"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::~TopologyLevel()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::has_data() const
{
    return level.is_set
	|| (ipv4_link_topologies !=  nullptr && ipv4_link_topologies->has_data())
	|| (ipv6_link_topologies !=  nullptr && ipv6_link_topologies->has_data())
	|| (spf_log !=  nullptr && spf_log->has_data())
	|| (te_adjacency_log !=  nullptr && te_adjacency_log->has_data())
	|| (te_advertisements !=  nullptr && te_advertisements->has_data())
	|| (te_tunnels !=  nullptr && te_tunnels->has_data())
	|| (topology_summary !=  nullptr && topology_summary->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| (ipv4_link_topologies !=  nullptr && ipv4_link_topologies->has_operation())
	|| (ipv6_link_topologies !=  nullptr && ipv6_link_topologies->has_operation())
	|| (spf_log !=  nullptr && spf_log->has_operation())
	|| (te_adjacency_log !=  nullptr && te_adjacency_log->has_operation())
	|| (te_advertisements !=  nullptr && te_advertisements->has_operation())
	|| (te_tunnels !=  nullptr && te_tunnels->has_operation())
	|| (topology_summary !=  nullptr && topology_summary->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-level" <<"[level='" <<level <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-link-topologies")
    {
        if(ipv4_link_topologies == nullptr)
        {
            ipv4_link_topologies = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies>();
        }
        return ipv4_link_topologies;
    }

    if(child_yang_name == "ipv6-link-topologies")
    {
        if(ipv6_link_topologies == nullptr)
        {
            ipv6_link_topologies = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies>();
        }
        return ipv6_link_topologies;
    }

    if(child_yang_name == "spf-log")
    {
        if(spf_log == nullptr)
        {
            spf_log = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog>();
        }
        return spf_log;
    }

    if(child_yang_name == "te-adjacency-log")
    {
        if(te_adjacency_log == nullptr)
        {
            te_adjacency_log = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog>();
        }
        return te_adjacency_log;
    }

    if(child_yang_name == "te-advertisements")
    {
        if(te_advertisements == nullptr)
        {
            te_advertisements = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements>();
        }
        return te_advertisements;
    }

    if(child_yang_name == "te-tunnels")
    {
        if(te_tunnels == nullptr)
        {
            te_tunnels = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels>();
        }
        return te_tunnels;
    }

    if(child_yang_name == "topology-summary")
    {
        if(topology_summary == nullptr)
        {
            topology_summary = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary>();
        }
        return topology_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4_link_topologies != nullptr)
    {
        children["ipv4-link-topologies"] = ipv4_link_topologies;
    }

    if(ipv6_link_topologies != nullptr)
    {
        children["ipv6-link-topologies"] = ipv6_link_topologies;
    }

    if(spf_log != nullptr)
    {
        children["spf-log"] = spf_log;
    }

    if(te_adjacency_log != nullptr)
    {
        children["te-adjacency-log"] = te_adjacency_log;
    }

    if(te_advertisements != nullptr)
    {
        children["te-advertisements"] = te_advertisements;
    }

    if(te_tunnels != nullptr)
    {
        children["te-tunnels"] = te_tunnels;
    }

    if(topology_summary != nullptr)
    {
        children["topology-summary"] = topology_summary;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-link-topologies" || name == "ipv6-link-topologies" || name == "spf-log" || name == "te-adjacency-log" || name == "te-advertisements" || name == "te-tunnels" || name == "topology-summary" || name == "level")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopologies()
{

    yang_name = "ipv4-link-topologies"; yang_parent_name = "topology-level"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::~Ipv4LinkTopologies()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::has_data() const
{
    for (std::size_t index=0; index<ipv4_link_topology.size(); index++)
    {
        if(ipv4_link_topology[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::has_operation() const
{
    for (std::size_t index=0; index<ipv4_link_topology.size(); index++)
    {
        if(ipv4_link_topology[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-link-topologies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-link-topology")
    {
        for(auto const & c : ipv4_link_topology)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology>();
        c->parent = this;
        ipv4_link_topology.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_link_topology)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-link-topology")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::Ipv4LinkTopology()
    :
    system_id{YType::str, "system-id"},
    is_attached{YType::boolean, "is-attached"},
    is_overloaded{YType::boolean, "is-overloaded"},
    is_participant{YType::boolean, "is-participant"},
    source_address{YType::str, "source-address"}
    	,
    advertised_prefix_item_counts(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::AdvertisedPrefixItemCounts>())
	,reachability_status(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus>())
{
    advertised_prefix_item_counts->parent = this;
    reachability_status->parent = this;

    yang_name = "ipv4-link-topology"; yang_parent_name = "ipv4-link-topologies"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::~Ipv4LinkTopology()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::has_data() const
{
    return system_id.is_set
	|| is_attached.is_set
	|| is_overloaded.is_set
	|| is_participant.is_set
	|| source_address.is_set
	|| (advertised_prefix_item_counts !=  nullptr && advertised_prefix_item_counts->has_data())
	|| (reachability_status !=  nullptr && reachability_status->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(is_attached.yfilter)
	|| ydk::is_set(is_overloaded.yfilter)
	|| ydk::is_set(is_participant.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| (advertised_prefix_item_counts !=  nullptr && advertised_prefix_item_counts->has_operation())
	|| (reachability_status !=  nullptr && reachability_status->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-link-topology" <<"[system-id='" <<system_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (is_attached.is_set || is_set(is_attached.yfilter)) leaf_name_data.push_back(is_attached.get_name_leafdata());
    if (is_overloaded.is_set || is_set(is_overloaded.yfilter)) leaf_name_data.push_back(is_overloaded.get_name_leafdata());
    if (is_participant.is_set || is_set(is_participant.yfilter)) leaf_name_data.push_back(is_participant.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertised-prefix-item-counts")
    {
        if(advertised_prefix_item_counts == nullptr)
        {
            advertised_prefix_item_counts = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::AdvertisedPrefixItemCounts>();
        }
        return advertised_prefix_item_counts;
    }

    if(child_yang_name == "reachability-status")
    {
        if(reachability_status == nullptr)
        {
            reachability_status = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus>();
        }
        return reachability_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(advertised_prefix_item_counts != nullptr)
    {
        children["advertised-prefix-item-counts"] = advertised_prefix_item_counts;
    }

    if(reachability_status != nullptr)
    {
        children["reachability-status"] = reachability_status;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-attached")
    {
        is_attached = value;
        is_attached.value_namespace = name_space;
        is_attached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-overloaded")
    {
        is_overloaded = value;
        is_overloaded.value_namespace = name_space;
        is_overloaded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-participant")
    {
        is_participant = value;
        is_participant.value_namespace = name_space;
        is_participant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "is-attached")
    {
        is_attached.yfilter = yfilter;
    }
    if(value_path == "is-overloaded")
    {
        is_overloaded.yfilter = yfilter;
    }
    if(value_path == "is-participant")
    {
        is_participant.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertised-prefix-item-counts" || name == "reachability-status" || name == "system-id" || name == "is-attached" || name == "is-overloaded" || name == "is-participant" || name == "source-address")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::AdvertisedPrefixItemCounts::AdvertisedPrefixItemCounts()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    low{YType::uint32, "low"},
    medium{YType::uint32, "medium"}
{

    yang_name = "advertised-prefix-item-counts"; yang_parent_name = "ipv4-link-topology"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::AdvertisedPrefixItemCounts::~AdvertisedPrefixItemCounts()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::AdvertisedPrefixItemCounts::has_data() const
{
    return critical.is_set
	|| high.is_set
	|| low.is_set
	|| medium.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::AdvertisedPrefixItemCounts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(critical.yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(low.yfilter)
	|| ydk::is_set(medium.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::AdvertisedPrefixItemCounts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertised-prefix-item-counts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::AdvertisedPrefixItemCounts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.yfilter)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());
    if (medium.is_set || is_set(medium.yfilter)) leaf_name_data.push_back(medium.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::AdvertisedPrefixItemCounts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::AdvertisedPrefixItemCounts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::AdvertisedPrefixItemCounts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "critical")
    {
        critical = value;
        critical.value_namespace = name_space;
        critical.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "medium")
    {
        medium = value;
        medium.value_namespace = name_space;
        medium.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::AdvertisedPrefixItemCounts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "critical")
    {
        critical.yfilter = yfilter;
    }
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
    if(value_path == "medium")
    {
        medium.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::AdvertisedPrefixItemCounts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical" || name == "high" || name == "low" || name == "medium")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachabilityStatus()
    :
    reachable_status{YType::enumeration, "reachable-status"}
    	,
    reachable_details(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails>())
{
    reachable_details->parent = this;

    yang_name = "reachability-status"; yang_parent_name = "ipv4-link-topology"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::~ReachabilityStatus()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::has_data() const
{
    return reachable_status.is_set
	|| (reachable_details !=  nullptr && reachable_details->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reachable_status.yfilter)
	|| (reachable_details !=  nullptr && reachable_details->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reachability-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reachable_status.is_set || is_set(reachable_status.yfilter)) leaf_name_data.push_back(reachable_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reachable-details")
    {
        if(reachable_details == nullptr)
        {
            reachable_details = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails>();
        }
        return reachable_details;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(reachable_details != nullptr)
    {
        children["reachable-details"] = reachable_details;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reachable-status")
    {
        reachable_status = value;
        reachable_status.value_namespace = name_space;
        reachable_status.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reachable-status")
    {
        reachable_status.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reachable-details" || name == "reachable-status")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::ReachableDetails()
    :
    multicast_root_distance{YType::uint32, "multicast-root-distance"},
    root_distance{YType::uint32, "root-distance"}
{

    yang_name = "reachable-details"; yang_parent_name = "reachability-status"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::~ReachableDetails()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::has_data() const
{
    for (std::size_t index=0; index<children_.size(); index++)
    {
        if(children_[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<multicast_path.size(); index++)
    {
        if(multicast_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<parent_.size(); index++)
    {
        if(parent_[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<paths.size(); index++)
    {
        if(paths[index]->has_data())
            return true;
    }
    return multicast_root_distance.is_set
	|| root_distance.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::has_operation() const
{
    for (std::size_t index=0; index<children_.size(); index++)
    {
        if(children_[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<multicast_path.size(); index++)
    {
        if(multicast_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<parent_.size(); index++)
    {
        if(parent_[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<paths.size(); index++)
    {
        if(paths[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(multicast_root_distance.yfilter)
	|| ydk::is_set(root_distance.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reachable-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multicast_root_distance.is_set || is_set(multicast_root_distance.yfilter)) leaf_name_data.push_back(multicast_root_distance.get_name_leafdata());
    if (root_distance.is_set || is_set(root_distance.yfilter)) leaf_name_data.push_back(root_distance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "children")
    {
        for(auto const & c : children_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Children_>();
        c->parent = this;
        children_.push_back(c);
        return c;
    }

    if(child_yang_name == "multicast-path")
    {
        for(auto const & c : multicast_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath>();
        c->parent = this;
        multicast_path.push_back(c);
        return c;
    }

    if(child_yang_name == "parent")
    {
        for(auto const & c : parent_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Parent_>();
        c->parent = this;
        parent_.push_back(c);
        return c;
    }

    if(child_yang_name == "paths")
    {
        for(auto const & c : paths)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths>();
        c->parent = this;
        paths.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : children_)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : multicast_path)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : parent_)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : paths)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multicast-root-distance")
    {
        multicast_root_distance = value;
        multicast_root_distance.value_namespace = name_space;
        multicast_root_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "root-distance")
    {
        root_distance = value;
        root_distance.value_namespace = name_space;
        root_distance.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multicast-root-distance")
    {
        multicast_root_distance.yfilter = yfilter;
    }
    if(value_path == "root-distance")
    {
        root_distance.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "children" || name == "multicast-path" || name == "parent" || name == "paths" || name == "multicast-root-distance" || name == "root-distance")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Children_::Children_()
    :
    intermediate_pseudonode{YType::str, "intermediate-pseudonode"},
    neighbor_id{YType::str, "neighbor-id"}
{

    yang_name = "children"; yang_parent_name = "reachable-details"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Children_::~Children_()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Children_::has_data() const
{
    return intermediate_pseudonode.is_set
	|| neighbor_id.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Children_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(intermediate_pseudonode.yfilter)
	|| ydk::is_set(neighbor_id.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Children_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "children";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Children_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (intermediate_pseudonode.is_set || is_set(intermediate_pseudonode.yfilter)) leaf_name_data.push_back(intermediate_pseudonode.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Children_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Children_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Children_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "intermediate-pseudonode")
    {
        intermediate_pseudonode = value;
        intermediate_pseudonode.value_namespace = name_space;
        intermediate_pseudonode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Children_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "intermediate-pseudonode")
    {
        intermediate_pseudonode.yfilter = yfilter;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Children_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intermediate-pseudonode" || name == "neighbor-id")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::MulticastPath()
    :
    egress_interface{YType::str, "egress-interface"},
    is_sr_exclude_tunnel_interface{YType::boolean, "is-sr-exclude-tunnel-interface"},
    is_te_tunnel_interface{YType::boolean, "is-te-tunnel-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    tag{YType::uint32, "tag"},
    tunnel_interface{YType::str, "tunnel-interface"},
    weight{YType::uint32, "weight"}
    	,
    frr_backup(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup>())
{
    frr_backup->parent = this;

    yang_name = "multicast-path"; yang_parent_name = "reachable-details"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::~MulticastPath()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::has_data() const
{
    for (std::size_t index=0; index<uloop_explicit.size(); index++)
    {
        if(uloop_explicit[index]->has_data())
            return true;
    }
    return egress_interface.is_set
	|| is_sr_exclude_tunnel_interface.is_set
	|| is_te_tunnel_interface.is_set
	|| neighbor_address.is_set
	|| neighbor_id.is_set
	|| neighbor_snpa.is_set
	|| segment_routing_sid_value.is_set
	|| tag.is_set
	|| tunnel_interface.is_set
	|| weight.is_set
	|| (frr_backup !=  nullptr && frr_backup->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::has_operation() const
{
    for (std::size_t index=0; index<uloop_explicit.size(); index++)
    {
        if(uloop_explicit[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(egress_interface.yfilter)
	|| ydk::is_set(is_sr_exclude_tunnel_interface.yfilter)
	|| ydk::is_set(is_te_tunnel_interface.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(neighbor_snpa.yfilter)
	|| ydk::is_set(segment_routing_sid_value.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(tunnel_interface.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| (frr_backup !=  nullptr && frr_backup->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (egress_interface.is_set || is_set(egress_interface.yfilter)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (is_sr_exclude_tunnel_interface.is_set || is_set(is_sr_exclude_tunnel_interface.yfilter)) leaf_name_data.push_back(is_sr_exclude_tunnel_interface.get_name_leafdata());
    if (is_te_tunnel_interface.is_set || is_set(is_te_tunnel_interface.yfilter)) leaf_name_data.push_back(is_te_tunnel_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.yfilter)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.yfilter)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.yfilter)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-backup")
    {
        if(frr_backup == nullptr)
        {
            frr_backup = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup>();
        }
        return frr_backup;
    }

    if(child_yang_name == "uloop-explicit")
    {
        for(auto const & c : uloop_explicit)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit>();
        c->parent = this;
        uloop_explicit.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(frr_backup != nullptr)
    {
        children["frr-backup"] = frr_backup;
    }

    for (auto const & c : uloop_explicit)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "egress-interface")
    {
        egress_interface = value;
        egress_interface.value_namespace = name_space;
        egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-sr-exclude-tunnel-interface")
    {
        is_sr_exclude_tunnel_interface = value;
        is_sr_exclude_tunnel_interface.value_namespace = name_space;
        is_sr_exclude_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-te-tunnel-interface")
    {
        is_te_tunnel_interface = value;
        is_te_tunnel_interface.value_namespace = name_space;
        is_te_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
        neighbor_snpa.value_namespace = name_space;
        neighbor_snpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
        segment_routing_sid_value.value_namespace = name_space;
        segment_routing_sid_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
        tunnel_interface.value_namespace = name_space;
        tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "egress-interface")
    {
        egress_interface.yfilter = yfilter;
    }
    if(value_path == "is-sr-exclude-tunnel-interface")
    {
        is_sr_exclude_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "is-te-tunnel-interface")
    {
        is_te_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa.yfilter = yfilter;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-backup" || name == "uloop-explicit" || name == "egress-interface" || name == "is-sr-exclude-tunnel-interface" || name == "is-te-tunnel-interface" || name == "neighbor-address" || name == "neighbor-id" || name == "neighbor-snpa" || name == "segment-routing-sid-value" || name == "tag" || name == "tunnel-interface" || name == "weight")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::FrrBackup()
    :
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    egress_interface{YType::str, "egress-interface"},
    is_downstream{YType::boolean, "is-downstream"},
    is_epcfrr_lfa{YType::boolean, "is-epcfrr-lfa"},
    is_lc_disjoint{YType::boolean, "is-lc-disjoint"},
    is_node_protecting{YType::boolean, "is-node-protecting"},
    is_primary_path{YType::boolean, "is-primary-path"},
    is_remote_lfa{YType::boolean, "is-remote-lfa"},
    is_srlg_disjoint{YType::boolean, "is-srlg-disjoint"},
    is_strict_spflfa{YType::boolean, "is-strict-spflfa"},
    is_tunnel_requested{YType::boolean, "is-tunnel-requested"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    num_sid{YType::uint32, "num-sid"},
    prefix_source_node_id{YType::str, "prefix-source-node-id"},
    remote_lfa_router_id{YType::str, "remote-lfa-router-id"},
    remote_lfa_router_pid{YType::str, "remote-lfa-router-pid"},
    remote_lfa_system_id{YType::str, "remote-lfa-system-id"},
    remote_lfa_system_pid{YType::str, "remote-lfa-system-pid"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    tilfa_computation{YType::enumeration, "tilfa-computation"},
    total_backup_distance{YType::uint32, "total-backup-distance"},
    tunnel_egress_interface{YType::str, "tunnel-egress-interface"},
    weight{YType::uint32, "weight"}
{

    yang_name = "frr-backup"; yang_parent_name = "multicast-path"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::~FrrBackup()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::has_data() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<segment_routing_sid_value_entry.size(); index++)
    {
        if(segment_routing_sid_value_entry[index]->has_data())
            return true;
    }
    return backup_repair_list_size.is_set
	|| egress_interface.is_set
	|| is_downstream.is_set
	|| is_epcfrr_lfa.is_set
	|| is_lc_disjoint.is_set
	|| is_node_protecting.is_set
	|| is_primary_path.is_set
	|| is_remote_lfa.is_set
	|| is_srlg_disjoint.is_set
	|| is_strict_spflfa.is_set
	|| is_tunnel_requested.is_set
	|| neighbor_address.is_set
	|| neighbor_id.is_set
	|| neighbor_snpa.is_set
	|| num_sid.is_set
	|| prefix_source_node_id.is_set
	|| remote_lfa_router_id.is_set
	|| remote_lfa_router_pid.is_set
	|| remote_lfa_system_id.is_set
	|| remote_lfa_system_pid.is_set
	|| segment_routing_sid_value.is_set
	|| tilfa_computation.is_set
	|| total_backup_distance.is_set
	|| tunnel_egress_interface.is_set
	|| weight.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::has_operation() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<segment_routing_sid_value_entry.size(); index++)
    {
        if(segment_routing_sid_value_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_repair_list_size.yfilter)
	|| ydk::is_set(egress_interface.yfilter)
	|| ydk::is_set(is_downstream.yfilter)
	|| ydk::is_set(is_epcfrr_lfa.yfilter)
	|| ydk::is_set(is_lc_disjoint.yfilter)
	|| ydk::is_set(is_node_protecting.yfilter)
	|| ydk::is_set(is_primary_path.yfilter)
	|| ydk::is_set(is_remote_lfa.yfilter)
	|| ydk::is_set(is_srlg_disjoint.yfilter)
	|| ydk::is_set(is_strict_spflfa.yfilter)
	|| ydk::is_set(is_tunnel_requested.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(neighbor_snpa.yfilter)
	|| ydk::is_set(num_sid.yfilter)
	|| ydk::is_set(prefix_source_node_id.yfilter)
	|| ydk::is_set(remote_lfa_router_id.yfilter)
	|| ydk::is_set(remote_lfa_router_pid.yfilter)
	|| ydk::is_set(remote_lfa_system_id.yfilter)
	|| ydk::is_set(remote_lfa_system_pid.yfilter)
	|| ydk::is_set(segment_routing_sid_value.yfilter)
	|| ydk::is_set(tilfa_computation.yfilter)
	|| ydk::is_set(total_backup_distance.yfilter)
	|| ydk::is_set(tunnel_egress_interface.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.yfilter)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.yfilter)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (is_downstream.is_set || is_set(is_downstream.yfilter)) leaf_name_data.push_back(is_downstream.get_name_leafdata());
    if (is_epcfrr_lfa.is_set || is_set(is_epcfrr_lfa.yfilter)) leaf_name_data.push_back(is_epcfrr_lfa.get_name_leafdata());
    if (is_lc_disjoint.is_set || is_set(is_lc_disjoint.yfilter)) leaf_name_data.push_back(is_lc_disjoint.get_name_leafdata());
    if (is_node_protecting.is_set || is_set(is_node_protecting.yfilter)) leaf_name_data.push_back(is_node_protecting.get_name_leafdata());
    if (is_primary_path.is_set || is_set(is_primary_path.yfilter)) leaf_name_data.push_back(is_primary_path.get_name_leafdata());
    if (is_remote_lfa.is_set || is_set(is_remote_lfa.yfilter)) leaf_name_data.push_back(is_remote_lfa.get_name_leafdata());
    if (is_srlg_disjoint.is_set || is_set(is_srlg_disjoint.yfilter)) leaf_name_data.push_back(is_srlg_disjoint.get_name_leafdata());
    if (is_strict_spflfa.is_set || is_set(is_strict_spflfa.yfilter)) leaf_name_data.push_back(is_strict_spflfa.get_name_leafdata());
    if (is_tunnel_requested.is_set || is_set(is_tunnel_requested.yfilter)) leaf_name_data.push_back(is_tunnel_requested.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.yfilter)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (num_sid.is_set || is_set(num_sid.yfilter)) leaf_name_data.push_back(num_sid.get_name_leafdata());
    if (prefix_source_node_id.is_set || is_set(prefix_source_node_id.yfilter)) leaf_name_data.push_back(prefix_source_node_id.get_name_leafdata());
    if (remote_lfa_router_id.is_set || is_set(remote_lfa_router_id.yfilter)) leaf_name_data.push_back(remote_lfa_router_id.get_name_leafdata());
    if (remote_lfa_router_pid.is_set || is_set(remote_lfa_router_pid.yfilter)) leaf_name_data.push_back(remote_lfa_router_pid.get_name_leafdata());
    if (remote_lfa_system_id.is_set || is_set(remote_lfa_system_id.yfilter)) leaf_name_data.push_back(remote_lfa_system_id.get_name_leafdata());
    if (remote_lfa_system_pid.is_set || is_set(remote_lfa_system_pid.yfilter)) leaf_name_data.push_back(remote_lfa_system_pid.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.yfilter)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (tilfa_computation.is_set || is_set(tilfa_computation.yfilter)) leaf_name_data.push_back(tilfa_computation.get_name_leafdata());
    if (total_backup_distance.is_set || is_set(total_backup_distance.yfilter)) leaf_name_data.push_back(total_backup_distance.get_name_leafdata());
    if (tunnel_egress_interface.is_set || is_set(tunnel_egress_interface.yfilter)) leaf_name_data.push_back(tunnel_egress_interface.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-repair")
    {
        for(auto const & c : backup_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair>();
        c->parent = this;
        backup_repair.push_back(c);
        return c;
    }

    if(child_yang_name == "segment-routing-sid-value-entry")
    {
        for(auto const & c : segment_routing_sid_value_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry>();
        c->parent = this;
        segment_routing_sid_value_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : backup_repair)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : segment_routing_sid_value_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
        backup_repair_list_size.value_namespace = name_space;
        backup_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
        egress_interface.value_namespace = name_space;
        egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-downstream")
    {
        is_downstream = value;
        is_downstream.value_namespace = name_space;
        is_downstream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa = value;
        is_epcfrr_lfa.value_namespace = name_space;
        is_epcfrr_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint = value;
        is_lc_disjoint.value_namespace = name_space;
        is_lc_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting = value;
        is_node_protecting.value_namespace = name_space;
        is_node_protecting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path = value;
        is_primary_path.value_namespace = name_space;
        is_primary_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa = value;
        is_remote_lfa.value_namespace = name_space;
        is_remote_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint = value;
        is_srlg_disjoint.value_namespace = name_space;
        is_srlg_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa = value;
        is_strict_spflfa.value_namespace = name_space;
        is_strict_spflfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested = value;
        is_tunnel_requested.value_namespace = name_space;
        is_tunnel_requested.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
        neighbor_snpa.value_namespace = name_space;
        neighbor_snpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-sid")
    {
        num_sid = value;
        num_sid.value_namespace = name_space;
        num_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-source-node-id")
    {
        prefix_source_node_id = value;
        prefix_source_node_id.value_namespace = name_space;
        prefix_source_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id = value;
        remote_lfa_router_id.value_namespace = name_space;
        remote_lfa_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid = value;
        remote_lfa_router_pid.value_namespace = name_space;
        remote_lfa_router_pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id = value;
        remote_lfa_system_id.value_namespace = name_space;
        remote_lfa_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid = value;
        remote_lfa_system_pid.value_namespace = name_space;
        remote_lfa_system_pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
        segment_routing_sid_value.value_namespace = name_space;
        segment_routing_sid_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation = value;
        tilfa_computation.value_namespace = name_space;
        tilfa_computation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance = value;
        total_backup_distance.value_namespace = name_space;
        total_backup_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface = value;
        tunnel_egress_interface.value_namespace = name_space;
        tunnel_egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "egress-interface")
    {
        egress_interface.yfilter = yfilter;
    }
    if(value_path == "is-downstream")
    {
        is_downstream.yfilter = yfilter;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa.yfilter = yfilter;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint.yfilter = yfilter;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting.yfilter = yfilter;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path.yfilter = yfilter;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa.yfilter = yfilter;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint.yfilter = yfilter;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa.yfilter = yfilter;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa.yfilter = yfilter;
    }
    if(value_path == "num-sid")
    {
        num_sid.yfilter = yfilter;
    }
    if(value_path == "prefix-source-node-id")
    {
        prefix_source_node_id.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid.yfilter = yfilter;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value.yfilter = yfilter;
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation.yfilter = yfilter;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance.yfilter = yfilter;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-repair" || name == "segment-routing-sid-value-entry" || name == "backup-repair-list-size" || name == "egress-interface" || name == "is-downstream" || name == "is-epcfrr-lfa" || name == "is-lc-disjoint" || name == "is-node-protecting" || name == "is-primary-path" || name == "is-remote-lfa" || name == "is-srlg-disjoint" || name == "is-strict-spflfa" || name == "is-tunnel-requested" || name == "neighbor-address" || name == "neighbor-id" || name == "neighbor-snpa" || name == "num-sid" || name == "prefix-source-node-id" || name == "remote-lfa-router-id" || name == "remote-lfa-router-pid" || name == "remote-lfa-system-id" || name == "remote-lfa-system-pid" || name == "segment-routing-sid-value" || name == "tilfa-computation" || name == "total-backup-distance" || name == "tunnel-egress-interface" || name == "weight")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair::BackupRepair()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{

    yang_name = "backup-repair"; yang_parent_name = "frr-backup"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair::~BackupRepair()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair::has_data() const
{
    return repair_element_node_id.is_set
	|| repair_element_type.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_node_id.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_ipv4_addr.yfilter)
	|| ydk::is_set(repair_ipv6_addr.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_strict_spf_label.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.yfilter)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.yfilter)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.yfilter)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.yfilter)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
        repair_element_node_id.value_namespace = name_space;
        repair_element_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
        repair_ipv4_addr.value_namespace = name_space;
        repair_ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
        repair_ipv6_addr.value_namespace = name_space;
        repair_ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
        repair_strict_spf_label.value_namespace = name_space;
        repair_strict_spf_label.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-node-id" || name == "repair-element-type" || name == "repair-ipv4-addr" || name == "repair-ipv6-addr" || name == "repair-label" || name == "repair-strict-spf-label")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::SegmentRoutingSidValueEntry()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "segment-routing-sid-value-entry"; yang_parent_name = "frr-backup"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::~SegmentRoutingSidValueEntry()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing-sid-value-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit::UloopExplicit()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{

    yang_name = "uloop-explicit"; yang_parent_name = "multicast-path"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit::~UloopExplicit()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit::has_data() const
{
    return repair_element_node_id.is_set
	|| repair_element_type.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_node_id.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_ipv4_addr.yfilter)
	|| ydk::is_set(repair_ipv6_addr.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_strict_spf_label.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uloop-explicit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.yfilter)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.yfilter)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.yfilter)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.yfilter)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
        repair_element_node_id.value_namespace = name_space;
        repair_element_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
        repair_ipv4_addr.value_namespace = name_space;
        repair_ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
        repair_ipv6_addr.value_namespace = name_space;
        repair_ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
        repair_strict_spf_label.value_namespace = name_space;
        repair_strict_spf_label.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-node-id" || name == "repair-element-type" || name == "repair-ipv4-addr" || name == "repair-ipv6-addr" || name == "repair-label" || name == "repair-strict-spf-label")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Parent_::Parent_()
    :
    intermediate_pseudonode{YType::str, "intermediate-pseudonode"},
    neighbor_id{YType::str, "neighbor-id"}
{

    yang_name = "parent"; yang_parent_name = "reachable-details"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Parent_::~Parent_()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Parent_::has_data() const
{
    return intermediate_pseudonode.is_set
	|| neighbor_id.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Parent_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(intermediate_pseudonode.yfilter)
	|| ydk::is_set(neighbor_id.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Parent_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Parent_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (intermediate_pseudonode.is_set || is_set(intermediate_pseudonode.yfilter)) leaf_name_data.push_back(intermediate_pseudonode.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Parent_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Parent_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Parent_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "intermediate-pseudonode")
    {
        intermediate_pseudonode = value;
        intermediate_pseudonode.value_namespace = name_space;
        intermediate_pseudonode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Parent_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "intermediate-pseudonode")
    {
        intermediate_pseudonode.yfilter = yfilter;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Parent_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intermediate-pseudonode" || name == "neighbor-id")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::Paths()
    :
    egress_interface{YType::str, "egress-interface"},
    is_sr_exclude_tunnel_interface{YType::boolean, "is-sr-exclude-tunnel-interface"},
    is_te_tunnel_interface{YType::boolean, "is-te-tunnel-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    tag{YType::uint32, "tag"},
    tunnel_interface{YType::str, "tunnel-interface"},
    weight{YType::uint32, "weight"}
    	,
    frr_backup(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup>())
{
    frr_backup->parent = this;

    yang_name = "paths"; yang_parent_name = "reachable-details"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::~Paths()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::has_data() const
{
    for (std::size_t index=0; index<uloop_explicit.size(); index++)
    {
        if(uloop_explicit[index]->has_data())
            return true;
    }
    return egress_interface.is_set
	|| is_sr_exclude_tunnel_interface.is_set
	|| is_te_tunnel_interface.is_set
	|| neighbor_address.is_set
	|| neighbor_id.is_set
	|| neighbor_snpa.is_set
	|| segment_routing_sid_value.is_set
	|| tag.is_set
	|| tunnel_interface.is_set
	|| weight.is_set
	|| (frr_backup !=  nullptr && frr_backup->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::has_operation() const
{
    for (std::size_t index=0; index<uloop_explicit.size(); index++)
    {
        if(uloop_explicit[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(egress_interface.yfilter)
	|| ydk::is_set(is_sr_exclude_tunnel_interface.yfilter)
	|| ydk::is_set(is_te_tunnel_interface.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(neighbor_snpa.yfilter)
	|| ydk::is_set(segment_routing_sid_value.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(tunnel_interface.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| (frr_backup !=  nullptr && frr_backup->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (egress_interface.is_set || is_set(egress_interface.yfilter)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (is_sr_exclude_tunnel_interface.is_set || is_set(is_sr_exclude_tunnel_interface.yfilter)) leaf_name_data.push_back(is_sr_exclude_tunnel_interface.get_name_leafdata());
    if (is_te_tunnel_interface.is_set || is_set(is_te_tunnel_interface.yfilter)) leaf_name_data.push_back(is_te_tunnel_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.yfilter)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.yfilter)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.yfilter)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-backup")
    {
        if(frr_backup == nullptr)
        {
            frr_backup = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup>();
        }
        return frr_backup;
    }

    if(child_yang_name == "uloop-explicit")
    {
        for(auto const & c : uloop_explicit)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit>();
        c->parent = this;
        uloop_explicit.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(frr_backup != nullptr)
    {
        children["frr-backup"] = frr_backup;
    }

    for (auto const & c : uloop_explicit)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "egress-interface")
    {
        egress_interface = value;
        egress_interface.value_namespace = name_space;
        egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-sr-exclude-tunnel-interface")
    {
        is_sr_exclude_tunnel_interface = value;
        is_sr_exclude_tunnel_interface.value_namespace = name_space;
        is_sr_exclude_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-te-tunnel-interface")
    {
        is_te_tunnel_interface = value;
        is_te_tunnel_interface.value_namespace = name_space;
        is_te_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
        neighbor_snpa.value_namespace = name_space;
        neighbor_snpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
        segment_routing_sid_value.value_namespace = name_space;
        segment_routing_sid_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
        tunnel_interface.value_namespace = name_space;
        tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "egress-interface")
    {
        egress_interface.yfilter = yfilter;
    }
    if(value_path == "is-sr-exclude-tunnel-interface")
    {
        is_sr_exclude_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "is-te-tunnel-interface")
    {
        is_te_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa.yfilter = yfilter;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-backup" || name == "uloop-explicit" || name == "egress-interface" || name == "is-sr-exclude-tunnel-interface" || name == "is-te-tunnel-interface" || name == "neighbor-address" || name == "neighbor-id" || name == "neighbor-snpa" || name == "segment-routing-sid-value" || name == "tag" || name == "tunnel-interface" || name == "weight")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::FrrBackup()
    :
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    egress_interface{YType::str, "egress-interface"},
    is_downstream{YType::boolean, "is-downstream"},
    is_epcfrr_lfa{YType::boolean, "is-epcfrr-lfa"},
    is_lc_disjoint{YType::boolean, "is-lc-disjoint"},
    is_node_protecting{YType::boolean, "is-node-protecting"},
    is_primary_path{YType::boolean, "is-primary-path"},
    is_remote_lfa{YType::boolean, "is-remote-lfa"},
    is_srlg_disjoint{YType::boolean, "is-srlg-disjoint"},
    is_strict_spflfa{YType::boolean, "is-strict-spflfa"},
    is_tunnel_requested{YType::boolean, "is-tunnel-requested"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    num_sid{YType::uint32, "num-sid"},
    prefix_source_node_id{YType::str, "prefix-source-node-id"},
    remote_lfa_router_id{YType::str, "remote-lfa-router-id"},
    remote_lfa_router_pid{YType::str, "remote-lfa-router-pid"},
    remote_lfa_system_id{YType::str, "remote-lfa-system-id"},
    remote_lfa_system_pid{YType::str, "remote-lfa-system-pid"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    tilfa_computation{YType::enumeration, "tilfa-computation"},
    total_backup_distance{YType::uint32, "total-backup-distance"},
    tunnel_egress_interface{YType::str, "tunnel-egress-interface"},
    weight{YType::uint32, "weight"}
{

    yang_name = "frr-backup"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::~FrrBackup()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::has_data() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<segment_routing_sid_value_entry.size(); index++)
    {
        if(segment_routing_sid_value_entry[index]->has_data())
            return true;
    }
    return backup_repair_list_size.is_set
	|| egress_interface.is_set
	|| is_downstream.is_set
	|| is_epcfrr_lfa.is_set
	|| is_lc_disjoint.is_set
	|| is_node_protecting.is_set
	|| is_primary_path.is_set
	|| is_remote_lfa.is_set
	|| is_srlg_disjoint.is_set
	|| is_strict_spflfa.is_set
	|| is_tunnel_requested.is_set
	|| neighbor_address.is_set
	|| neighbor_id.is_set
	|| neighbor_snpa.is_set
	|| num_sid.is_set
	|| prefix_source_node_id.is_set
	|| remote_lfa_router_id.is_set
	|| remote_lfa_router_pid.is_set
	|| remote_lfa_system_id.is_set
	|| remote_lfa_system_pid.is_set
	|| segment_routing_sid_value.is_set
	|| tilfa_computation.is_set
	|| total_backup_distance.is_set
	|| tunnel_egress_interface.is_set
	|| weight.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::has_operation() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<segment_routing_sid_value_entry.size(); index++)
    {
        if(segment_routing_sid_value_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_repair_list_size.yfilter)
	|| ydk::is_set(egress_interface.yfilter)
	|| ydk::is_set(is_downstream.yfilter)
	|| ydk::is_set(is_epcfrr_lfa.yfilter)
	|| ydk::is_set(is_lc_disjoint.yfilter)
	|| ydk::is_set(is_node_protecting.yfilter)
	|| ydk::is_set(is_primary_path.yfilter)
	|| ydk::is_set(is_remote_lfa.yfilter)
	|| ydk::is_set(is_srlg_disjoint.yfilter)
	|| ydk::is_set(is_strict_spflfa.yfilter)
	|| ydk::is_set(is_tunnel_requested.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(neighbor_snpa.yfilter)
	|| ydk::is_set(num_sid.yfilter)
	|| ydk::is_set(prefix_source_node_id.yfilter)
	|| ydk::is_set(remote_lfa_router_id.yfilter)
	|| ydk::is_set(remote_lfa_router_pid.yfilter)
	|| ydk::is_set(remote_lfa_system_id.yfilter)
	|| ydk::is_set(remote_lfa_system_pid.yfilter)
	|| ydk::is_set(segment_routing_sid_value.yfilter)
	|| ydk::is_set(tilfa_computation.yfilter)
	|| ydk::is_set(total_backup_distance.yfilter)
	|| ydk::is_set(tunnel_egress_interface.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.yfilter)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.yfilter)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (is_downstream.is_set || is_set(is_downstream.yfilter)) leaf_name_data.push_back(is_downstream.get_name_leafdata());
    if (is_epcfrr_lfa.is_set || is_set(is_epcfrr_lfa.yfilter)) leaf_name_data.push_back(is_epcfrr_lfa.get_name_leafdata());
    if (is_lc_disjoint.is_set || is_set(is_lc_disjoint.yfilter)) leaf_name_data.push_back(is_lc_disjoint.get_name_leafdata());
    if (is_node_protecting.is_set || is_set(is_node_protecting.yfilter)) leaf_name_data.push_back(is_node_protecting.get_name_leafdata());
    if (is_primary_path.is_set || is_set(is_primary_path.yfilter)) leaf_name_data.push_back(is_primary_path.get_name_leafdata());
    if (is_remote_lfa.is_set || is_set(is_remote_lfa.yfilter)) leaf_name_data.push_back(is_remote_lfa.get_name_leafdata());
    if (is_srlg_disjoint.is_set || is_set(is_srlg_disjoint.yfilter)) leaf_name_data.push_back(is_srlg_disjoint.get_name_leafdata());
    if (is_strict_spflfa.is_set || is_set(is_strict_spflfa.yfilter)) leaf_name_data.push_back(is_strict_spflfa.get_name_leafdata());
    if (is_tunnel_requested.is_set || is_set(is_tunnel_requested.yfilter)) leaf_name_data.push_back(is_tunnel_requested.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.yfilter)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (num_sid.is_set || is_set(num_sid.yfilter)) leaf_name_data.push_back(num_sid.get_name_leafdata());
    if (prefix_source_node_id.is_set || is_set(prefix_source_node_id.yfilter)) leaf_name_data.push_back(prefix_source_node_id.get_name_leafdata());
    if (remote_lfa_router_id.is_set || is_set(remote_lfa_router_id.yfilter)) leaf_name_data.push_back(remote_lfa_router_id.get_name_leafdata());
    if (remote_lfa_router_pid.is_set || is_set(remote_lfa_router_pid.yfilter)) leaf_name_data.push_back(remote_lfa_router_pid.get_name_leafdata());
    if (remote_lfa_system_id.is_set || is_set(remote_lfa_system_id.yfilter)) leaf_name_data.push_back(remote_lfa_system_id.get_name_leafdata());
    if (remote_lfa_system_pid.is_set || is_set(remote_lfa_system_pid.yfilter)) leaf_name_data.push_back(remote_lfa_system_pid.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.yfilter)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (tilfa_computation.is_set || is_set(tilfa_computation.yfilter)) leaf_name_data.push_back(tilfa_computation.get_name_leafdata());
    if (total_backup_distance.is_set || is_set(total_backup_distance.yfilter)) leaf_name_data.push_back(total_backup_distance.get_name_leafdata());
    if (tunnel_egress_interface.is_set || is_set(tunnel_egress_interface.yfilter)) leaf_name_data.push_back(tunnel_egress_interface.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-repair")
    {
        for(auto const & c : backup_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair>();
        c->parent = this;
        backup_repair.push_back(c);
        return c;
    }

    if(child_yang_name == "segment-routing-sid-value-entry")
    {
        for(auto const & c : segment_routing_sid_value_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::SegmentRoutingSidValueEntry>();
        c->parent = this;
        segment_routing_sid_value_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : backup_repair)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : segment_routing_sid_value_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
        backup_repair_list_size.value_namespace = name_space;
        backup_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
        egress_interface.value_namespace = name_space;
        egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-downstream")
    {
        is_downstream = value;
        is_downstream.value_namespace = name_space;
        is_downstream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa = value;
        is_epcfrr_lfa.value_namespace = name_space;
        is_epcfrr_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint = value;
        is_lc_disjoint.value_namespace = name_space;
        is_lc_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting = value;
        is_node_protecting.value_namespace = name_space;
        is_node_protecting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path = value;
        is_primary_path.value_namespace = name_space;
        is_primary_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa = value;
        is_remote_lfa.value_namespace = name_space;
        is_remote_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint = value;
        is_srlg_disjoint.value_namespace = name_space;
        is_srlg_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa = value;
        is_strict_spflfa.value_namespace = name_space;
        is_strict_spflfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested = value;
        is_tunnel_requested.value_namespace = name_space;
        is_tunnel_requested.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
        neighbor_snpa.value_namespace = name_space;
        neighbor_snpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-sid")
    {
        num_sid = value;
        num_sid.value_namespace = name_space;
        num_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-source-node-id")
    {
        prefix_source_node_id = value;
        prefix_source_node_id.value_namespace = name_space;
        prefix_source_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id = value;
        remote_lfa_router_id.value_namespace = name_space;
        remote_lfa_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid = value;
        remote_lfa_router_pid.value_namespace = name_space;
        remote_lfa_router_pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id = value;
        remote_lfa_system_id.value_namespace = name_space;
        remote_lfa_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid = value;
        remote_lfa_system_pid.value_namespace = name_space;
        remote_lfa_system_pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
        segment_routing_sid_value.value_namespace = name_space;
        segment_routing_sid_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation = value;
        tilfa_computation.value_namespace = name_space;
        tilfa_computation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance = value;
        total_backup_distance.value_namespace = name_space;
        total_backup_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface = value;
        tunnel_egress_interface.value_namespace = name_space;
        tunnel_egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "egress-interface")
    {
        egress_interface.yfilter = yfilter;
    }
    if(value_path == "is-downstream")
    {
        is_downstream.yfilter = yfilter;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa.yfilter = yfilter;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint.yfilter = yfilter;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting.yfilter = yfilter;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path.yfilter = yfilter;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa.yfilter = yfilter;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint.yfilter = yfilter;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa.yfilter = yfilter;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa.yfilter = yfilter;
    }
    if(value_path == "num-sid")
    {
        num_sid.yfilter = yfilter;
    }
    if(value_path == "prefix-source-node-id")
    {
        prefix_source_node_id.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid.yfilter = yfilter;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value.yfilter = yfilter;
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation.yfilter = yfilter;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance.yfilter = yfilter;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-repair" || name == "segment-routing-sid-value-entry" || name == "backup-repair-list-size" || name == "egress-interface" || name == "is-downstream" || name == "is-epcfrr-lfa" || name == "is-lc-disjoint" || name == "is-node-protecting" || name == "is-primary-path" || name == "is-remote-lfa" || name == "is-srlg-disjoint" || name == "is-strict-spflfa" || name == "is-tunnel-requested" || name == "neighbor-address" || name == "neighbor-id" || name == "neighbor-snpa" || name == "num-sid" || name == "prefix-source-node-id" || name == "remote-lfa-router-id" || name == "remote-lfa-router-pid" || name == "remote-lfa-system-id" || name == "remote-lfa-system-pid" || name == "segment-routing-sid-value" || name == "tilfa-computation" || name == "total-backup-distance" || name == "tunnel-egress-interface" || name == "weight")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair::BackupRepair()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{

    yang_name = "backup-repair"; yang_parent_name = "frr-backup"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair::~BackupRepair()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair::has_data() const
{
    return repair_element_node_id.is_set
	|| repair_element_type.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_node_id.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_ipv4_addr.yfilter)
	|| ydk::is_set(repair_ipv6_addr.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_strict_spf_label.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.yfilter)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.yfilter)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.yfilter)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.yfilter)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
        repair_element_node_id.value_namespace = name_space;
        repair_element_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
        repair_ipv4_addr.value_namespace = name_space;
        repair_ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
        repair_ipv6_addr.value_namespace = name_space;
        repair_ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
        repair_strict_spf_label.value_namespace = name_space;
        repair_strict_spf_label.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-node-id" || name == "repair-element-type" || name == "repair-ipv4-addr" || name == "repair-ipv6-addr" || name == "repair-label" || name == "repair-strict-spf-label")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::SegmentRoutingSidValueEntry::SegmentRoutingSidValueEntry()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "segment-routing-sid-value-entry"; yang_parent_name = "frr-backup"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::SegmentRoutingSidValueEntry::~SegmentRoutingSidValueEntry()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::SegmentRoutingSidValueEntry::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::SegmentRoutingSidValueEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::SegmentRoutingSidValueEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing-sid-value-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::SegmentRoutingSidValueEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::SegmentRoutingSidValueEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::SegmentRoutingSidValueEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::SegmentRoutingSidValueEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::SegmentRoutingSidValueEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::SegmentRoutingSidValueEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit::UloopExplicit()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{

    yang_name = "uloop-explicit"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit::~UloopExplicit()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit::has_data() const
{
    return repair_element_node_id.is_set
	|| repair_element_type.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_node_id.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_ipv4_addr.yfilter)
	|| ydk::is_set(repair_ipv6_addr.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_strict_spf_label.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uloop-explicit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.yfilter)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.yfilter)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.yfilter)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.yfilter)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
        repair_element_node_id.value_namespace = name_space;
        repair_element_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
        repair_ipv4_addr.value_namespace = name_space;
        repair_ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
        repair_ipv6_addr.value_namespace = name_space;
        repair_ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
        repair_strict_spf_label.value_namespace = name_space;
        repair_strict_spf_label.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-node-id" || name == "repair-element-type" || name == "repair-ipv4-addr" || name == "repair-ipv6-addr" || name == "repair-label" || name == "repair-strict-spf-label")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopologies()
{

    yang_name = "ipv6-link-topologies"; yang_parent_name = "topology-level"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::~Ipv6LinkTopologies()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::has_data() const
{
    for (std::size_t index=0; index<ipv6_link_topology.size(); index++)
    {
        if(ipv6_link_topology[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::has_operation() const
{
    for (std::size_t index=0; index<ipv6_link_topology.size(); index++)
    {
        if(ipv6_link_topology[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-link-topologies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-link-topology")
    {
        for(auto const & c : ipv6_link_topology)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology>();
        c->parent = this;
        ipv6_link_topology.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_link_topology)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-link-topology")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::Ipv6LinkTopology()
    :
    system_id{YType::str, "system-id"},
    is_attached{YType::boolean, "is-attached"},
    is_overloaded{YType::boolean, "is-overloaded"},
    is_participant{YType::boolean, "is-participant"},
    source_address{YType::str, "source-address"}
    	,
    advertised_prefix_item_counts(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::AdvertisedPrefixItemCounts>())
	,reachability_status(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus>())
{
    advertised_prefix_item_counts->parent = this;
    reachability_status->parent = this;

    yang_name = "ipv6-link-topology"; yang_parent_name = "ipv6-link-topologies"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::~Ipv6LinkTopology()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::has_data() const
{
    return system_id.is_set
	|| is_attached.is_set
	|| is_overloaded.is_set
	|| is_participant.is_set
	|| source_address.is_set
	|| (advertised_prefix_item_counts !=  nullptr && advertised_prefix_item_counts->has_data())
	|| (reachability_status !=  nullptr && reachability_status->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(is_attached.yfilter)
	|| ydk::is_set(is_overloaded.yfilter)
	|| ydk::is_set(is_participant.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| (advertised_prefix_item_counts !=  nullptr && advertised_prefix_item_counts->has_operation())
	|| (reachability_status !=  nullptr && reachability_status->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-link-topology" <<"[system-id='" <<system_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (is_attached.is_set || is_set(is_attached.yfilter)) leaf_name_data.push_back(is_attached.get_name_leafdata());
    if (is_overloaded.is_set || is_set(is_overloaded.yfilter)) leaf_name_data.push_back(is_overloaded.get_name_leafdata());
    if (is_participant.is_set || is_set(is_participant.yfilter)) leaf_name_data.push_back(is_participant.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertised-prefix-item-counts")
    {
        if(advertised_prefix_item_counts == nullptr)
        {
            advertised_prefix_item_counts = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::AdvertisedPrefixItemCounts>();
        }
        return advertised_prefix_item_counts;
    }

    if(child_yang_name == "reachability-status")
    {
        if(reachability_status == nullptr)
        {
            reachability_status = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus>();
        }
        return reachability_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(advertised_prefix_item_counts != nullptr)
    {
        children["advertised-prefix-item-counts"] = advertised_prefix_item_counts;
    }

    if(reachability_status != nullptr)
    {
        children["reachability-status"] = reachability_status;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-attached")
    {
        is_attached = value;
        is_attached.value_namespace = name_space;
        is_attached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-overloaded")
    {
        is_overloaded = value;
        is_overloaded.value_namespace = name_space;
        is_overloaded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-participant")
    {
        is_participant = value;
        is_participant.value_namespace = name_space;
        is_participant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "is-attached")
    {
        is_attached.yfilter = yfilter;
    }
    if(value_path == "is-overloaded")
    {
        is_overloaded.yfilter = yfilter;
    }
    if(value_path == "is-participant")
    {
        is_participant.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertised-prefix-item-counts" || name == "reachability-status" || name == "system-id" || name == "is-attached" || name == "is-overloaded" || name == "is-participant" || name == "source-address")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::AdvertisedPrefixItemCounts::AdvertisedPrefixItemCounts()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    low{YType::uint32, "low"},
    medium{YType::uint32, "medium"}
{

    yang_name = "advertised-prefix-item-counts"; yang_parent_name = "ipv6-link-topology"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::AdvertisedPrefixItemCounts::~AdvertisedPrefixItemCounts()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::AdvertisedPrefixItemCounts::has_data() const
{
    return critical.is_set
	|| high.is_set
	|| low.is_set
	|| medium.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::AdvertisedPrefixItemCounts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(critical.yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(low.yfilter)
	|| ydk::is_set(medium.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::AdvertisedPrefixItemCounts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertised-prefix-item-counts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::AdvertisedPrefixItemCounts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.yfilter)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());
    if (medium.is_set || is_set(medium.yfilter)) leaf_name_data.push_back(medium.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::AdvertisedPrefixItemCounts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::AdvertisedPrefixItemCounts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::AdvertisedPrefixItemCounts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "critical")
    {
        critical = value;
        critical.value_namespace = name_space;
        critical.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "medium")
    {
        medium = value;
        medium.value_namespace = name_space;
        medium.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::AdvertisedPrefixItemCounts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "critical")
    {
        critical.yfilter = yfilter;
    }
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
    if(value_path == "medium")
    {
        medium.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::AdvertisedPrefixItemCounts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical" || name == "high" || name == "low" || name == "medium")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachabilityStatus()
    :
    reachable_status{YType::enumeration, "reachable-status"}
    	,
    reachable_details(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails>())
{
    reachable_details->parent = this;

    yang_name = "reachability-status"; yang_parent_name = "ipv6-link-topology"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::~ReachabilityStatus()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::has_data() const
{
    return reachable_status.is_set
	|| (reachable_details !=  nullptr && reachable_details->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reachable_status.yfilter)
	|| (reachable_details !=  nullptr && reachable_details->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reachability-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reachable_status.is_set || is_set(reachable_status.yfilter)) leaf_name_data.push_back(reachable_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reachable-details")
    {
        if(reachable_details == nullptr)
        {
            reachable_details = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails>();
        }
        return reachable_details;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(reachable_details != nullptr)
    {
        children["reachable-details"] = reachable_details;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reachable-status")
    {
        reachable_status = value;
        reachable_status.value_namespace = name_space;
        reachable_status.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reachable-status")
    {
        reachable_status.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reachable-details" || name == "reachable-status")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::ReachableDetails()
    :
    multicast_root_distance{YType::uint32, "multicast-root-distance"},
    root_distance{YType::uint32, "root-distance"}
{

    yang_name = "reachable-details"; yang_parent_name = "reachability-status"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::~ReachableDetails()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::has_data() const
{
    for (std::size_t index=0; index<children_.size(); index++)
    {
        if(children_[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<multicast_path.size(); index++)
    {
        if(multicast_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<parent_.size(); index++)
    {
        if(parent_[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<paths.size(); index++)
    {
        if(paths[index]->has_data())
            return true;
    }
    return multicast_root_distance.is_set
	|| root_distance.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::has_operation() const
{
    for (std::size_t index=0; index<children_.size(); index++)
    {
        if(children_[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<multicast_path.size(); index++)
    {
        if(multicast_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<parent_.size(); index++)
    {
        if(parent_[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<paths.size(); index++)
    {
        if(paths[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(multicast_root_distance.yfilter)
	|| ydk::is_set(root_distance.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reachable-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multicast_root_distance.is_set || is_set(multicast_root_distance.yfilter)) leaf_name_data.push_back(multicast_root_distance.get_name_leafdata());
    if (root_distance.is_set || is_set(root_distance.yfilter)) leaf_name_data.push_back(root_distance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "children")
    {
        for(auto const & c : children_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Children_>();
        c->parent = this;
        children_.push_back(c);
        return c;
    }

    if(child_yang_name == "multicast-path")
    {
        for(auto const & c : multicast_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath>();
        c->parent = this;
        multicast_path.push_back(c);
        return c;
    }

    if(child_yang_name == "parent")
    {
        for(auto const & c : parent_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Parent_>();
        c->parent = this;
        parent_.push_back(c);
        return c;
    }

    if(child_yang_name == "paths")
    {
        for(auto const & c : paths)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths>();
        c->parent = this;
        paths.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : children_)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : multicast_path)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : parent_)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : paths)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multicast-root-distance")
    {
        multicast_root_distance = value;
        multicast_root_distance.value_namespace = name_space;
        multicast_root_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "root-distance")
    {
        root_distance = value;
        root_distance.value_namespace = name_space;
        root_distance.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multicast-root-distance")
    {
        multicast_root_distance.yfilter = yfilter;
    }
    if(value_path == "root-distance")
    {
        root_distance.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "children" || name == "multicast-path" || name == "parent" || name == "paths" || name == "multicast-root-distance" || name == "root-distance")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Children_::Children_()
    :
    intermediate_pseudonode{YType::str, "intermediate-pseudonode"},
    neighbor_id{YType::str, "neighbor-id"}
{

    yang_name = "children"; yang_parent_name = "reachable-details"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Children_::~Children_()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Children_::has_data() const
{
    return intermediate_pseudonode.is_set
	|| neighbor_id.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Children_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(intermediate_pseudonode.yfilter)
	|| ydk::is_set(neighbor_id.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Children_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "children";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Children_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (intermediate_pseudonode.is_set || is_set(intermediate_pseudonode.yfilter)) leaf_name_data.push_back(intermediate_pseudonode.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Children_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Children_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Children_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "intermediate-pseudonode")
    {
        intermediate_pseudonode = value;
        intermediate_pseudonode.value_namespace = name_space;
        intermediate_pseudonode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Children_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "intermediate-pseudonode")
    {
        intermediate_pseudonode.yfilter = yfilter;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Children_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intermediate-pseudonode" || name == "neighbor-id")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::MulticastPath()
    :
    egress_interface{YType::str, "egress-interface"},
    is_sr_exclude_tunnel_interface{YType::boolean, "is-sr-exclude-tunnel-interface"},
    is_te_tunnel_interface{YType::boolean, "is-te-tunnel-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    tag{YType::uint32, "tag"},
    tunnel_interface{YType::str, "tunnel-interface"},
    weight{YType::uint32, "weight"}
    	,
    frr_backup(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup>())
{
    frr_backup->parent = this;

    yang_name = "multicast-path"; yang_parent_name = "reachable-details"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::~MulticastPath()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::has_data() const
{
    for (std::size_t index=0; index<uloop_explicit.size(); index++)
    {
        if(uloop_explicit[index]->has_data())
            return true;
    }
    return egress_interface.is_set
	|| is_sr_exclude_tunnel_interface.is_set
	|| is_te_tunnel_interface.is_set
	|| neighbor_address.is_set
	|| neighbor_id.is_set
	|| neighbor_snpa.is_set
	|| segment_routing_sid_value.is_set
	|| tag.is_set
	|| tunnel_interface.is_set
	|| weight.is_set
	|| (frr_backup !=  nullptr && frr_backup->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::has_operation() const
{
    for (std::size_t index=0; index<uloop_explicit.size(); index++)
    {
        if(uloop_explicit[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(egress_interface.yfilter)
	|| ydk::is_set(is_sr_exclude_tunnel_interface.yfilter)
	|| ydk::is_set(is_te_tunnel_interface.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(neighbor_snpa.yfilter)
	|| ydk::is_set(segment_routing_sid_value.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(tunnel_interface.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| (frr_backup !=  nullptr && frr_backup->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (egress_interface.is_set || is_set(egress_interface.yfilter)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (is_sr_exclude_tunnel_interface.is_set || is_set(is_sr_exclude_tunnel_interface.yfilter)) leaf_name_data.push_back(is_sr_exclude_tunnel_interface.get_name_leafdata());
    if (is_te_tunnel_interface.is_set || is_set(is_te_tunnel_interface.yfilter)) leaf_name_data.push_back(is_te_tunnel_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.yfilter)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.yfilter)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.yfilter)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-backup")
    {
        if(frr_backup == nullptr)
        {
            frr_backup = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup>();
        }
        return frr_backup;
    }

    if(child_yang_name == "uloop-explicit")
    {
        for(auto const & c : uloop_explicit)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit>();
        c->parent = this;
        uloop_explicit.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(frr_backup != nullptr)
    {
        children["frr-backup"] = frr_backup;
    }

    for (auto const & c : uloop_explicit)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "egress-interface")
    {
        egress_interface = value;
        egress_interface.value_namespace = name_space;
        egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-sr-exclude-tunnel-interface")
    {
        is_sr_exclude_tunnel_interface = value;
        is_sr_exclude_tunnel_interface.value_namespace = name_space;
        is_sr_exclude_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-te-tunnel-interface")
    {
        is_te_tunnel_interface = value;
        is_te_tunnel_interface.value_namespace = name_space;
        is_te_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
        neighbor_snpa.value_namespace = name_space;
        neighbor_snpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
        segment_routing_sid_value.value_namespace = name_space;
        segment_routing_sid_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
        tunnel_interface.value_namespace = name_space;
        tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "egress-interface")
    {
        egress_interface.yfilter = yfilter;
    }
    if(value_path == "is-sr-exclude-tunnel-interface")
    {
        is_sr_exclude_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "is-te-tunnel-interface")
    {
        is_te_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa.yfilter = yfilter;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-backup" || name == "uloop-explicit" || name == "egress-interface" || name == "is-sr-exclude-tunnel-interface" || name == "is-te-tunnel-interface" || name == "neighbor-address" || name == "neighbor-id" || name == "neighbor-snpa" || name == "segment-routing-sid-value" || name == "tag" || name == "tunnel-interface" || name == "weight")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::FrrBackup()
    :
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    egress_interface{YType::str, "egress-interface"},
    is_downstream{YType::boolean, "is-downstream"},
    is_epcfrr_lfa{YType::boolean, "is-epcfrr-lfa"},
    is_lc_disjoint{YType::boolean, "is-lc-disjoint"},
    is_node_protecting{YType::boolean, "is-node-protecting"},
    is_primary_path{YType::boolean, "is-primary-path"},
    is_remote_lfa{YType::boolean, "is-remote-lfa"},
    is_srlg_disjoint{YType::boolean, "is-srlg-disjoint"},
    is_strict_spflfa{YType::boolean, "is-strict-spflfa"},
    is_tunnel_requested{YType::boolean, "is-tunnel-requested"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    num_sid{YType::uint32, "num-sid"},
    prefix_source_node_id{YType::str, "prefix-source-node-id"},
    remote_lfa_router_id{YType::str, "remote-lfa-router-id"},
    remote_lfa_router_pid{YType::str, "remote-lfa-router-pid"},
    remote_lfa_system_id{YType::str, "remote-lfa-system-id"},
    remote_lfa_system_pid{YType::str, "remote-lfa-system-pid"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    tilfa_computation{YType::enumeration, "tilfa-computation"},
    total_backup_distance{YType::uint32, "total-backup-distance"},
    tunnel_egress_interface{YType::str, "tunnel-egress-interface"},
    weight{YType::uint32, "weight"}
{

    yang_name = "frr-backup"; yang_parent_name = "multicast-path"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::~FrrBackup()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::has_data() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<segment_routing_sid_value_entry.size(); index++)
    {
        if(segment_routing_sid_value_entry[index]->has_data())
            return true;
    }
    return backup_repair_list_size.is_set
	|| egress_interface.is_set
	|| is_downstream.is_set
	|| is_epcfrr_lfa.is_set
	|| is_lc_disjoint.is_set
	|| is_node_protecting.is_set
	|| is_primary_path.is_set
	|| is_remote_lfa.is_set
	|| is_srlg_disjoint.is_set
	|| is_strict_spflfa.is_set
	|| is_tunnel_requested.is_set
	|| neighbor_address.is_set
	|| neighbor_id.is_set
	|| neighbor_snpa.is_set
	|| num_sid.is_set
	|| prefix_source_node_id.is_set
	|| remote_lfa_router_id.is_set
	|| remote_lfa_router_pid.is_set
	|| remote_lfa_system_id.is_set
	|| remote_lfa_system_pid.is_set
	|| segment_routing_sid_value.is_set
	|| tilfa_computation.is_set
	|| total_backup_distance.is_set
	|| tunnel_egress_interface.is_set
	|| weight.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::has_operation() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<segment_routing_sid_value_entry.size(); index++)
    {
        if(segment_routing_sid_value_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_repair_list_size.yfilter)
	|| ydk::is_set(egress_interface.yfilter)
	|| ydk::is_set(is_downstream.yfilter)
	|| ydk::is_set(is_epcfrr_lfa.yfilter)
	|| ydk::is_set(is_lc_disjoint.yfilter)
	|| ydk::is_set(is_node_protecting.yfilter)
	|| ydk::is_set(is_primary_path.yfilter)
	|| ydk::is_set(is_remote_lfa.yfilter)
	|| ydk::is_set(is_srlg_disjoint.yfilter)
	|| ydk::is_set(is_strict_spflfa.yfilter)
	|| ydk::is_set(is_tunnel_requested.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(neighbor_snpa.yfilter)
	|| ydk::is_set(num_sid.yfilter)
	|| ydk::is_set(prefix_source_node_id.yfilter)
	|| ydk::is_set(remote_lfa_router_id.yfilter)
	|| ydk::is_set(remote_lfa_router_pid.yfilter)
	|| ydk::is_set(remote_lfa_system_id.yfilter)
	|| ydk::is_set(remote_lfa_system_pid.yfilter)
	|| ydk::is_set(segment_routing_sid_value.yfilter)
	|| ydk::is_set(tilfa_computation.yfilter)
	|| ydk::is_set(total_backup_distance.yfilter)
	|| ydk::is_set(tunnel_egress_interface.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.yfilter)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.yfilter)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (is_downstream.is_set || is_set(is_downstream.yfilter)) leaf_name_data.push_back(is_downstream.get_name_leafdata());
    if (is_epcfrr_lfa.is_set || is_set(is_epcfrr_lfa.yfilter)) leaf_name_data.push_back(is_epcfrr_lfa.get_name_leafdata());
    if (is_lc_disjoint.is_set || is_set(is_lc_disjoint.yfilter)) leaf_name_data.push_back(is_lc_disjoint.get_name_leafdata());
    if (is_node_protecting.is_set || is_set(is_node_protecting.yfilter)) leaf_name_data.push_back(is_node_protecting.get_name_leafdata());
    if (is_primary_path.is_set || is_set(is_primary_path.yfilter)) leaf_name_data.push_back(is_primary_path.get_name_leafdata());
    if (is_remote_lfa.is_set || is_set(is_remote_lfa.yfilter)) leaf_name_data.push_back(is_remote_lfa.get_name_leafdata());
    if (is_srlg_disjoint.is_set || is_set(is_srlg_disjoint.yfilter)) leaf_name_data.push_back(is_srlg_disjoint.get_name_leafdata());
    if (is_strict_spflfa.is_set || is_set(is_strict_spflfa.yfilter)) leaf_name_data.push_back(is_strict_spflfa.get_name_leafdata());
    if (is_tunnel_requested.is_set || is_set(is_tunnel_requested.yfilter)) leaf_name_data.push_back(is_tunnel_requested.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.yfilter)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (num_sid.is_set || is_set(num_sid.yfilter)) leaf_name_data.push_back(num_sid.get_name_leafdata());
    if (prefix_source_node_id.is_set || is_set(prefix_source_node_id.yfilter)) leaf_name_data.push_back(prefix_source_node_id.get_name_leafdata());
    if (remote_lfa_router_id.is_set || is_set(remote_lfa_router_id.yfilter)) leaf_name_data.push_back(remote_lfa_router_id.get_name_leafdata());
    if (remote_lfa_router_pid.is_set || is_set(remote_lfa_router_pid.yfilter)) leaf_name_data.push_back(remote_lfa_router_pid.get_name_leafdata());
    if (remote_lfa_system_id.is_set || is_set(remote_lfa_system_id.yfilter)) leaf_name_data.push_back(remote_lfa_system_id.get_name_leafdata());
    if (remote_lfa_system_pid.is_set || is_set(remote_lfa_system_pid.yfilter)) leaf_name_data.push_back(remote_lfa_system_pid.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.yfilter)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (tilfa_computation.is_set || is_set(tilfa_computation.yfilter)) leaf_name_data.push_back(tilfa_computation.get_name_leafdata());
    if (total_backup_distance.is_set || is_set(total_backup_distance.yfilter)) leaf_name_data.push_back(total_backup_distance.get_name_leafdata());
    if (tunnel_egress_interface.is_set || is_set(tunnel_egress_interface.yfilter)) leaf_name_data.push_back(tunnel_egress_interface.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-repair")
    {
        for(auto const & c : backup_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair>();
        c->parent = this;
        backup_repair.push_back(c);
        return c;
    }

    if(child_yang_name == "segment-routing-sid-value-entry")
    {
        for(auto const & c : segment_routing_sid_value_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry>();
        c->parent = this;
        segment_routing_sid_value_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : backup_repair)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : segment_routing_sid_value_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
        backup_repair_list_size.value_namespace = name_space;
        backup_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
        egress_interface.value_namespace = name_space;
        egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-downstream")
    {
        is_downstream = value;
        is_downstream.value_namespace = name_space;
        is_downstream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa = value;
        is_epcfrr_lfa.value_namespace = name_space;
        is_epcfrr_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint = value;
        is_lc_disjoint.value_namespace = name_space;
        is_lc_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting = value;
        is_node_protecting.value_namespace = name_space;
        is_node_protecting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path = value;
        is_primary_path.value_namespace = name_space;
        is_primary_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa = value;
        is_remote_lfa.value_namespace = name_space;
        is_remote_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint = value;
        is_srlg_disjoint.value_namespace = name_space;
        is_srlg_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa = value;
        is_strict_spflfa.value_namespace = name_space;
        is_strict_spflfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested = value;
        is_tunnel_requested.value_namespace = name_space;
        is_tunnel_requested.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
        neighbor_snpa.value_namespace = name_space;
        neighbor_snpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-sid")
    {
        num_sid = value;
        num_sid.value_namespace = name_space;
        num_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-source-node-id")
    {
        prefix_source_node_id = value;
        prefix_source_node_id.value_namespace = name_space;
        prefix_source_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id = value;
        remote_lfa_router_id.value_namespace = name_space;
        remote_lfa_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid = value;
        remote_lfa_router_pid.value_namespace = name_space;
        remote_lfa_router_pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id = value;
        remote_lfa_system_id.value_namespace = name_space;
        remote_lfa_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid = value;
        remote_lfa_system_pid.value_namespace = name_space;
        remote_lfa_system_pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
        segment_routing_sid_value.value_namespace = name_space;
        segment_routing_sid_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation = value;
        tilfa_computation.value_namespace = name_space;
        tilfa_computation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance = value;
        total_backup_distance.value_namespace = name_space;
        total_backup_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface = value;
        tunnel_egress_interface.value_namespace = name_space;
        tunnel_egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "egress-interface")
    {
        egress_interface.yfilter = yfilter;
    }
    if(value_path == "is-downstream")
    {
        is_downstream.yfilter = yfilter;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa.yfilter = yfilter;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint.yfilter = yfilter;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting.yfilter = yfilter;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path.yfilter = yfilter;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa.yfilter = yfilter;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint.yfilter = yfilter;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa.yfilter = yfilter;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa.yfilter = yfilter;
    }
    if(value_path == "num-sid")
    {
        num_sid.yfilter = yfilter;
    }
    if(value_path == "prefix-source-node-id")
    {
        prefix_source_node_id.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid.yfilter = yfilter;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value.yfilter = yfilter;
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation.yfilter = yfilter;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance.yfilter = yfilter;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-repair" || name == "segment-routing-sid-value-entry" || name == "backup-repair-list-size" || name == "egress-interface" || name == "is-downstream" || name == "is-epcfrr-lfa" || name == "is-lc-disjoint" || name == "is-node-protecting" || name == "is-primary-path" || name == "is-remote-lfa" || name == "is-srlg-disjoint" || name == "is-strict-spflfa" || name == "is-tunnel-requested" || name == "neighbor-address" || name == "neighbor-id" || name == "neighbor-snpa" || name == "num-sid" || name == "prefix-source-node-id" || name == "remote-lfa-router-id" || name == "remote-lfa-router-pid" || name == "remote-lfa-system-id" || name == "remote-lfa-system-pid" || name == "segment-routing-sid-value" || name == "tilfa-computation" || name == "total-backup-distance" || name == "tunnel-egress-interface" || name == "weight")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair::BackupRepair()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{

    yang_name = "backup-repair"; yang_parent_name = "frr-backup"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair::~BackupRepair()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair::has_data() const
{
    return repair_element_node_id.is_set
	|| repair_element_type.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_node_id.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_ipv4_addr.yfilter)
	|| ydk::is_set(repair_ipv6_addr.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_strict_spf_label.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.yfilter)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.yfilter)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.yfilter)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.yfilter)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
        repair_element_node_id.value_namespace = name_space;
        repair_element_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
        repair_ipv4_addr.value_namespace = name_space;
        repair_ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
        repair_ipv6_addr.value_namespace = name_space;
        repair_ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
        repair_strict_spf_label.value_namespace = name_space;
        repair_strict_spf_label.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-node-id" || name == "repair-element-type" || name == "repair-ipv4-addr" || name == "repair-ipv6-addr" || name == "repair-label" || name == "repair-strict-spf-label")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::SegmentRoutingSidValueEntry()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "segment-routing-sid-value-entry"; yang_parent_name = "frr-backup"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::~SegmentRoutingSidValueEntry()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing-sid-value-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit::UloopExplicit()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{

    yang_name = "uloop-explicit"; yang_parent_name = "multicast-path"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit::~UloopExplicit()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit::has_data() const
{
    return repair_element_node_id.is_set
	|| repair_element_type.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_node_id.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_ipv4_addr.yfilter)
	|| ydk::is_set(repair_ipv6_addr.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_strict_spf_label.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uloop-explicit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.yfilter)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.yfilter)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.yfilter)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.yfilter)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
        repair_element_node_id.value_namespace = name_space;
        repair_element_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
        repair_ipv4_addr.value_namespace = name_space;
        repair_ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
        repair_ipv6_addr.value_namespace = name_space;
        repair_ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
        repair_strict_spf_label.value_namespace = name_space;
        repair_strict_spf_label.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-node-id" || name == "repair-element-type" || name == "repair-ipv4-addr" || name == "repair-ipv6-addr" || name == "repair-label" || name == "repair-strict-spf-label")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Parent_::Parent_()
    :
    intermediate_pseudonode{YType::str, "intermediate-pseudonode"},
    neighbor_id{YType::str, "neighbor-id"}
{

    yang_name = "parent"; yang_parent_name = "reachable-details"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Parent_::~Parent_()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Parent_::has_data() const
{
    return intermediate_pseudonode.is_set
	|| neighbor_id.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Parent_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(intermediate_pseudonode.yfilter)
	|| ydk::is_set(neighbor_id.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Parent_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Parent_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (intermediate_pseudonode.is_set || is_set(intermediate_pseudonode.yfilter)) leaf_name_data.push_back(intermediate_pseudonode.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Parent_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Parent_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Parent_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "intermediate-pseudonode")
    {
        intermediate_pseudonode = value;
        intermediate_pseudonode.value_namespace = name_space;
        intermediate_pseudonode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Parent_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "intermediate-pseudonode")
    {
        intermediate_pseudonode.yfilter = yfilter;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Parent_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intermediate-pseudonode" || name == "neighbor-id")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::Paths()
    :
    egress_interface{YType::str, "egress-interface"},
    is_sr_exclude_tunnel_interface{YType::boolean, "is-sr-exclude-tunnel-interface"},
    is_te_tunnel_interface{YType::boolean, "is-te-tunnel-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    tag{YType::uint32, "tag"},
    tunnel_interface{YType::str, "tunnel-interface"},
    weight{YType::uint32, "weight"}
    	,
    frr_backup(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup>())
{
    frr_backup->parent = this;

    yang_name = "paths"; yang_parent_name = "reachable-details"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::~Paths()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::has_data() const
{
    for (std::size_t index=0; index<uloop_explicit.size(); index++)
    {
        if(uloop_explicit[index]->has_data())
            return true;
    }
    return egress_interface.is_set
	|| is_sr_exclude_tunnel_interface.is_set
	|| is_te_tunnel_interface.is_set
	|| neighbor_address.is_set
	|| neighbor_id.is_set
	|| neighbor_snpa.is_set
	|| segment_routing_sid_value.is_set
	|| tag.is_set
	|| tunnel_interface.is_set
	|| weight.is_set
	|| (frr_backup !=  nullptr && frr_backup->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::has_operation() const
{
    for (std::size_t index=0; index<uloop_explicit.size(); index++)
    {
        if(uloop_explicit[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(egress_interface.yfilter)
	|| ydk::is_set(is_sr_exclude_tunnel_interface.yfilter)
	|| ydk::is_set(is_te_tunnel_interface.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(neighbor_snpa.yfilter)
	|| ydk::is_set(segment_routing_sid_value.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(tunnel_interface.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| (frr_backup !=  nullptr && frr_backup->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (egress_interface.is_set || is_set(egress_interface.yfilter)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (is_sr_exclude_tunnel_interface.is_set || is_set(is_sr_exclude_tunnel_interface.yfilter)) leaf_name_data.push_back(is_sr_exclude_tunnel_interface.get_name_leafdata());
    if (is_te_tunnel_interface.is_set || is_set(is_te_tunnel_interface.yfilter)) leaf_name_data.push_back(is_te_tunnel_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.yfilter)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.yfilter)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.yfilter)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-backup")
    {
        if(frr_backup == nullptr)
        {
            frr_backup = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup>();
        }
        return frr_backup;
    }

    if(child_yang_name == "uloop-explicit")
    {
        for(auto const & c : uloop_explicit)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit>();
        c->parent = this;
        uloop_explicit.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(frr_backup != nullptr)
    {
        children["frr-backup"] = frr_backup;
    }

    for (auto const & c : uloop_explicit)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "egress-interface")
    {
        egress_interface = value;
        egress_interface.value_namespace = name_space;
        egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-sr-exclude-tunnel-interface")
    {
        is_sr_exclude_tunnel_interface = value;
        is_sr_exclude_tunnel_interface.value_namespace = name_space;
        is_sr_exclude_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-te-tunnel-interface")
    {
        is_te_tunnel_interface = value;
        is_te_tunnel_interface.value_namespace = name_space;
        is_te_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
        neighbor_snpa.value_namespace = name_space;
        neighbor_snpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
        segment_routing_sid_value.value_namespace = name_space;
        segment_routing_sid_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
        tunnel_interface.value_namespace = name_space;
        tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "egress-interface")
    {
        egress_interface.yfilter = yfilter;
    }
    if(value_path == "is-sr-exclude-tunnel-interface")
    {
        is_sr_exclude_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "is-te-tunnel-interface")
    {
        is_te_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa.yfilter = yfilter;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-backup" || name == "uloop-explicit" || name == "egress-interface" || name == "is-sr-exclude-tunnel-interface" || name == "is-te-tunnel-interface" || name == "neighbor-address" || name == "neighbor-id" || name == "neighbor-snpa" || name == "segment-routing-sid-value" || name == "tag" || name == "tunnel-interface" || name == "weight")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::FrrBackup()
    :
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    egress_interface{YType::str, "egress-interface"},
    is_downstream{YType::boolean, "is-downstream"},
    is_epcfrr_lfa{YType::boolean, "is-epcfrr-lfa"},
    is_lc_disjoint{YType::boolean, "is-lc-disjoint"},
    is_node_protecting{YType::boolean, "is-node-protecting"},
    is_primary_path{YType::boolean, "is-primary-path"},
    is_remote_lfa{YType::boolean, "is-remote-lfa"},
    is_srlg_disjoint{YType::boolean, "is-srlg-disjoint"},
    is_strict_spflfa{YType::boolean, "is-strict-spflfa"},
    is_tunnel_requested{YType::boolean, "is-tunnel-requested"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    num_sid{YType::uint32, "num-sid"},
    prefix_source_node_id{YType::str, "prefix-source-node-id"},
    remote_lfa_router_id{YType::str, "remote-lfa-router-id"},
    remote_lfa_router_pid{YType::str, "remote-lfa-router-pid"},
    remote_lfa_system_id{YType::str, "remote-lfa-system-id"},
    remote_lfa_system_pid{YType::str, "remote-lfa-system-pid"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    tilfa_computation{YType::enumeration, "tilfa-computation"},
    total_backup_distance{YType::uint32, "total-backup-distance"},
    tunnel_egress_interface{YType::str, "tunnel-egress-interface"},
    weight{YType::uint32, "weight"}
{

    yang_name = "frr-backup"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::~FrrBackup()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::has_data() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<segment_routing_sid_value_entry.size(); index++)
    {
        if(segment_routing_sid_value_entry[index]->has_data())
            return true;
    }
    return backup_repair_list_size.is_set
	|| egress_interface.is_set
	|| is_downstream.is_set
	|| is_epcfrr_lfa.is_set
	|| is_lc_disjoint.is_set
	|| is_node_protecting.is_set
	|| is_primary_path.is_set
	|| is_remote_lfa.is_set
	|| is_srlg_disjoint.is_set
	|| is_strict_spflfa.is_set
	|| is_tunnel_requested.is_set
	|| neighbor_address.is_set
	|| neighbor_id.is_set
	|| neighbor_snpa.is_set
	|| num_sid.is_set
	|| prefix_source_node_id.is_set
	|| remote_lfa_router_id.is_set
	|| remote_lfa_router_pid.is_set
	|| remote_lfa_system_id.is_set
	|| remote_lfa_system_pid.is_set
	|| segment_routing_sid_value.is_set
	|| tilfa_computation.is_set
	|| total_backup_distance.is_set
	|| tunnel_egress_interface.is_set
	|| weight.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::has_operation() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<segment_routing_sid_value_entry.size(); index++)
    {
        if(segment_routing_sid_value_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_repair_list_size.yfilter)
	|| ydk::is_set(egress_interface.yfilter)
	|| ydk::is_set(is_downstream.yfilter)
	|| ydk::is_set(is_epcfrr_lfa.yfilter)
	|| ydk::is_set(is_lc_disjoint.yfilter)
	|| ydk::is_set(is_node_protecting.yfilter)
	|| ydk::is_set(is_primary_path.yfilter)
	|| ydk::is_set(is_remote_lfa.yfilter)
	|| ydk::is_set(is_srlg_disjoint.yfilter)
	|| ydk::is_set(is_strict_spflfa.yfilter)
	|| ydk::is_set(is_tunnel_requested.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(neighbor_snpa.yfilter)
	|| ydk::is_set(num_sid.yfilter)
	|| ydk::is_set(prefix_source_node_id.yfilter)
	|| ydk::is_set(remote_lfa_router_id.yfilter)
	|| ydk::is_set(remote_lfa_router_pid.yfilter)
	|| ydk::is_set(remote_lfa_system_id.yfilter)
	|| ydk::is_set(remote_lfa_system_pid.yfilter)
	|| ydk::is_set(segment_routing_sid_value.yfilter)
	|| ydk::is_set(tilfa_computation.yfilter)
	|| ydk::is_set(total_backup_distance.yfilter)
	|| ydk::is_set(tunnel_egress_interface.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.yfilter)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.yfilter)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (is_downstream.is_set || is_set(is_downstream.yfilter)) leaf_name_data.push_back(is_downstream.get_name_leafdata());
    if (is_epcfrr_lfa.is_set || is_set(is_epcfrr_lfa.yfilter)) leaf_name_data.push_back(is_epcfrr_lfa.get_name_leafdata());
    if (is_lc_disjoint.is_set || is_set(is_lc_disjoint.yfilter)) leaf_name_data.push_back(is_lc_disjoint.get_name_leafdata());
    if (is_node_protecting.is_set || is_set(is_node_protecting.yfilter)) leaf_name_data.push_back(is_node_protecting.get_name_leafdata());
    if (is_primary_path.is_set || is_set(is_primary_path.yfilter)) leaf_name_data.push_back(is_primary_path.get_name_leafdata());
    if (is_remote_lfa.is_set || is_set(is_remote_lfa.yfilter)) leaf_name_data.push_back(is_remote_lfa.get_name_leafdata());
    if (is_srlg_disjoint.is_set || is_set(is_srlg_disjoint.yfilter)) leaf_name_data.push_back(is_srlg_disjoint.get_name_leafdata());
    if (is_strict_spflfa.is_set || is_set(is_strict_spflfa.yfilter)) leaf_name_data.push_back(is_strict_spflfa.get_name_leafdata());
    if (is_tunnel_requested.is_set || is_set(is_tunnel_requested.yfilter)) leaf_name_data.push_back(is_tunnel_requested.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.yfilter)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (num_sid.is_set || is_set(num_sid.yfilter)) leaf_name_data.push_back(num_sid.get_name_leafdata());
    if (prefix_source_node_id.is_set || is_set(prefix_source_node_id.yfilter)) leaf_name_data.push_back(prefix_source_node_id.get_name_leafdata());
    if (remote_lfa_router_id.is_set || is_set(remote_lfa_router_id.yfilter)) leaf_name_data.push_back(remote_lfa_router_id.get_name_leafdata());
    if (remote_lfa_router_pid.is_set || is_set(remote_lfa_router_pid.yfilter)) leaf_name_data.push_back(remote_lfa_router_pid.get_name_leafdata());
    if (remote_lfa_system_id.is_set || is_set(remote_lfa_system_id.yfilter)) leaf_name_data.push_back(remote_lfa_system_id.get_name_leafdata());
    if (remote_lfa_system_pid.is_set || is_set(remote_lfa_system_pid.yfilter)) leaf_name_data.push_back(remote_lfa_system_pid.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.yfilter)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (tilfa_computation.is_set || is_set(tilfa_computation.yfilter)) leaf_name_data.push_back(tilfa_computation.get_name_leafdata());
    if (total_backup_distance.is_set || is_set(total_backup_distance.yfilter)) leaf_name_data.push_back(total_backup_distance.get_name_leafdata());
    if (tunnel_egress_interface.is_set || is_set(tunnel_egress_interface.yfilter)) leaf_name_data.push_back(tunnel_egress_interface.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-repair")
    {
        for(auto const & c : backup_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair>();
        c->parent = this;
        backup_repair.push_back(c);
        return c;
    }

    if(child_yang_name == "segment-routing-sid-value-entry")
    {
        for(auto const & c : segment_routing_sid_value_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::SegmentRoutingSidValueEntry>();
        c->parent = this;
        segment_routing_sid_value_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : backup_repair)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : segment_routing_sid_value_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
        backup_repair_list_size.value_namespace = name_space;
        backup_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
        egress_interface.value_namespace = name_space;
        egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-downstream")
    {
        is_downstream = value;
        is_downstream.value_namespace = name_space;
        is_downstream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa = value;
        is_epcfrr_lfa.value_namespace = name_space;
        is_epcfrr_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint = value;
        is_lc_disjoint.value_namespace = name_space;
        is_lc_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting = value;
        is_node_protecting.value_namespace = name_space;
        is_node_protecting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path = value;
        is_primary_path.value_namespace = name_space;
        is_primary_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa = value;
        is_remote_lfa.value_namespace = name_space;
        is_remote_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint = value;
        is_srlg_disjoint.value_namespace = name_space;
        is_srlg_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa = value;
        is_strict_spflfa.value_namespace = name_space;
        is_strict_spflfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested = value;
        is_tunnel_requested.value_namespace = name_space;
        is_tunnel_requested.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
        neighbor_snpa.value_namespace = name_space;
        neighbor_snpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-sid")
    {
        num_sid = value;
        num_sid.value_namespace = name_space;
        num_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-source-node-id")
    {
        prefix_source_node_id = value;
        prefix_source_node_id.value_namespace = name_space;
        prefix_source_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id = value;
        remote_lfa_router_id.value_namespace = name_space;
        remote_lfa_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid = value;
        remote_lfa_router_pid.value_namespace = name_space;
        remote_lfa_router_pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id = value;
        remote_lfa_system_id.value_namespace = name_space;
        remote_lfa_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid = value;
        remote_lfa_system_pid.value_namespace = name_space;
        remote_lfa_system_pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
        segment_routing_sid_value.value_namespace = name_space;
        segment_routing_sid_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation = value;
        tilfa_computation.value_namespace = name_space;
        tilfa_computation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance = value;
        total_backup_distance.value_namespace = name_space;
        total_backup_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface = value;
        tunnel_egress_interface.value_namespace = name_space;
        tunnel_egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "egress-interface")
    {
        egress_interface.yfilter = yfilter;
    }
    if(value_path == "is-downstream")
    {
        is_downstream.yfilter = yfilter;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa.yfilter = yfilter;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint.yfilter = yfilter;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting.yfilter = yfilter;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path.yfilter = yfilter;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa.yfilter = yfilter;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint.yfilter = yfilter;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa.yfilter = yfilter;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa.yfilter = yfilter;
    }
    if(value_path == "num-sid")
    {
        num_sid.yfilter = yfilter;
    }
    if(value_path == "prefix-source-node-id")
    {
        prefix_source_node_id.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid.yfilter = yfilter;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value.yfilter = yfilter;
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation.yfilter = yfilter;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance.yfilter = yfilter;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-repair" || name == "segment-routing-sid-value-entry" || name == "backup-repair-list-size" || name == "egress-interface" || name == "is-downstream" || name == "is-epcfrr-lfa" || name == "is-lc-disjoint" || name == "is-node-protecting" || name == "is-primary-path" || name == "is-remote-lfa" || name == "is-srlg-disjoint" || name == "is-strict-spflfa" || name == "is-tunnel-requested" || name == "neighbor-address" || name == "neighbor-id" || name == "neighbor-snpa" || name == "num-sid" || name == "prefix-source-node-id" || name == "remote-lfa-router-id" || name == "remote-lfa-router-pid" || name == "remote-lfa-system-id" || name == "remote-lfa-system-pid" || name == "segment-routing-sid-value" || name == "tilfa-computation" || name == "total-backup-distance" || name == "tunnel-egress-interface" || name == "weight")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair::BackupRepair()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{

    yang_name = "backup-repair"; yang_parent_name = "frr-backup"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair::~BackupRepair()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair::has_data() const
{
    return repair_element_node_id.is_set
	|| repair_element_type.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_node_id.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_ipv4_addr.yfilter)
	|| ydk::is_set(repair_ipv6_addr.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_strict_spf_label.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.yfilter)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.yfilter)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.yfilter)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.yfilter)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
        repair_element_node_id.value_namespace = name_space;
        repair_element_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
        repair_ipv4_addr.value_namespace = name_space;
        repair_ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
        repair_ipv6_addr.value_namespace = name_space;
        repair_ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
        repair_strict_spf_label.value_namespace = name_space;
        repair_strict_spf_label.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-node-id" || name == "repair-element-type" || name == "repair-ipv4-addr" || name == "repair-ipv6-addr" || name == "repair-label" || name == "repair-strict-spf-label")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::SegmentRoutingSidValueEntry::SegmentRoutingSidValueEntry()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "segment-routing-sid-value-entry"; yang_parent_name = "frr-backup"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::SegmentRoutingSidValueEntry::~SegmentRoutingSidValueEntry()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::SegmentRoutingSidValueEntry::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::SegmentRoutingSidValueEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::SegmentRoutingSidValueEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing-sid-value-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::SegmentRoutingSidValueEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::SegmentRoutingSidValueEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::SegmentRoutingSidValueEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::SegmentRoutingSidValueEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::SegmentRoutingSidValueEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::SegmentRoutingSidValueEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit::UloopExplicit()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{

    yang_name = "uloop-explicit"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit::~UloopExplicit()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit::has_data() const
{
    return repair_element_node_id.is_set
	|| repair_element_type.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_node_id.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_ipv4_addr.yfilter)
	|| ydk::is_set(repair_ipv6_addr.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_strict_spf_label.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uloop-explicit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.yfilter)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.yfilter)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.yfilter)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.yfilter)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
        repair_element_node_id.value_namespace = name_space;
        repair_element_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
        repair_ipv4_addr.value_namespace = name_space;
        repair_ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
        repair_ipv6_addr.value_namespace = name_space;
        repair_ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
        repair_strict_spf_label.value_namespace = name_space;
        repair_strict_spf_label.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-node-id" || name == "repair-element-type" || name == "repair-ipv4-addr" || name == "repair-ipv6-addr" || name == "repair-label" || name == "repair-strict-spf-label")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::SpfLog()
{

    yang_name = "spf-log"; yang_parent_name = "topology-level"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::~SpfLog()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::has_data() const
{
    for (std::size_t index=0; index<log_entry.size(); index++)
    {
        if(log_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::has_operation() const
{
    for (std::size_t index=0; index<log_entry.size(); index++)
    {
        if(log_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-log";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-entry")
    {
        for(auto const & c : log_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry>();
        c->parent = this;
        log_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : log_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-entry")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::LogEntry()
    :
    class_{YType::enumeration, "class"},
    next_wait_interval{YType::uint32, "next-wait-interval"},
    updated_lsp_count{YType::uint32, "updated-lsp-count"},
    wait_enforced{YType::uint32, "wait-enforced"}
    	,
    generic_data(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData>())
	,route_update_statistics(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics>())
	,spt_calculation_statistics(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics>())
	,triggers(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers>())
{
    generic_data->parent = this;
    route_update_statistics->parent = this;
    spt_calculation_statistics->parent = this;
    triggers->parent = this;

    yang_name = "log-entry"; yang_parent_name = "spf-log"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::~LogEntry()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::has_data() const
{
    return class_.is_set
	|| next_wait_interval.is_set
	|| updated_lsp_count.is_set
	|| wait_enforced.is_set
	|| (generic_data !=  nullptr && generic_data->has_data())
	|| (route_update_statistics !=  nullptr && route_update_statistics->has_data())
	|| (spt_calculation_statistics !=  nullptr && spt_calculation_statistics->has_data())
	|| (triggers !=  nullptr && triggers->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(class_.yfilter)
	|| ydk::is_set(next_wait_interval.yfilter)
	|| ydk::is_set(updated_lsp_count.yfilter)
	|| ydk::is_set(wait_enforced.yfilter)
	|| (generic_data !=  nullptr && generic_data->has_operation())
	|| (route_update_statistics !=  nullptr && route_update_statistics->has_operation())
	|| (spt_calculation_statistics !=  nullptr && spt_calculation_statistics->has_operation())
	|| (triggers !=  nullptr && triggers->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_.is_set || is_set(class_.yfilter)) leaf_name_data.push_back(class_.get_name_leafdata());
    if (next_wait_interval.is_set || is_set(next_wait_interval.yfilter)) leaf_name_data.push_back(next_wait_interval.get_name_leafdata());
    if (updated_lsp_count.is_set || is_set(updated_lsp_count.yfilter)) leaf_name_data.push_back(updated_lsp_count.get_name_leafdata());
    if (wait_enforced.is_set || is_set(wait_enforced.yfilter)) leaf_name_data.push_back(wait_enforced.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generic-data")
    {
        if(generic_data == nullptr)
        {
            generic_data = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData>();
        }
        return generic_data;
    }

    if(child_yang_name == "route-update-statistics")
    {
        if(route_update_statistics == nullptr)
        {
            route_update_statistics = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics>();
        }
        return route_update_statistics;
    }

    if(child_yang_name == "spt-calculation-statistics")
    {
        if(spt_calculation_statistics == nullptr)
        {
            spt_calculation_statistics = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics>();
        }
        return spt_calculation_statistics;
    }

    if(child_yang_name == "triggers")
    {
        if(triggers == nullptr)
        {
            triggers = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers>();
        }
        return triggers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(generic_data != nullptr)
    {
        children["generic-data"] = generic_data;
    }

    if(route_update_statistics != nullptr)
    {
        children["route-update-statistics"] = route_update_statistics;
    }

    if(spt_calculation_statistics != nullptr)
    {
        children["spt-calculation-statistics"] = spt_calculation_statistics;
    }

    if(triggers != nullptr)
    {
        children["triggers"] = triggers;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "class")
    {
        class_ = value;
        class_.value_namespace = name_space;
        class_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-wait-interval")
    {
        next_wait_interval = value;
        next_wait_interval.value_namespace = name_space;
        next_wait_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "updated-lsp-count")
    {
        updated_lsp_count = value;
        updated_lsp_count.value_namespace = name_space;
        updated_lsp_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-enforced")
    {
        wait_enforced = value;
        wait_enforced.value_namespace = name_space;
        wait_enforced.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "class")
    {
        class_.yfilter = yfilter;
    }
    if(value_path == "next-wait-interval")
    {
        next_wait_interval.yfilter = yfilter;
    }
    if(value_path == "updated-lsp-count")
    {
        updated_lsp_count.yfilter = yfilter;
    }
    if(value_path == "wait-enforced")
    {
        wait_enforced.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generic-data" || name == "route-update-statistics" || name == "spt-calculation-statistics" || name == "triggers" || name == "class" || name == "next-wait-interval" || name == "updated-lsp-count" || name == "wait-enforced")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::GenericData()
    :
    timestamp(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::Timestamp>())
{
    timestamp->parent = this;

    yang_name = "generic-data"; yang_parent_name = "log-entry"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::~GenericData()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::has_data() const
{
    return (timestamp !=  nullptr && timestamp->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::has_operation() const
{
    return is_set(yfilter)
	|| (timestamp !=  nullptr && timestamp->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "timestamp")
    {
        if(timestamp == nullptr)
        {
            timestamp = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::Timestamp>();
        }
        return timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(timestamp != nullptr)
    {
        children["timestamp"] = timestamp;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timestamp")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::Timestamp::Timestamp()
    :
    nano_seconds{YType::uint32, "nano-seconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "timestamp"; yang_parent_name = "generic-data"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::Timestamp::~Timestamp()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::Timestamp::has_data() const
{
    return nano_seconds.is_set
	|| seconds.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::Timestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nano_seconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::Timestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::Timestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::Timestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::Timestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::Timestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::Timestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::Timestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nano-seconds" || name == "seconds")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteUpdateStatistics()
    :
    duration(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::Duration>())
	,duration_breakdown(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown>())
	,item_counts(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts>())
	,node_counts(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts>())
	,rib_batch_counts(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RibBatchCounts>())
	,route_counts(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts>())
{
    duration->parent = this;
    duration_breakdown->parent = this;
    item_counts->parent = this;
    node_counts->parent = this;
    rib_batch_counts->parent = this;
    route_counts->parent = this;

    yang_name = "route-update-statistics"; yang_parent_name = "log-entry"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::~RouteUpdateStatistics()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::has_data() const
{
    return (duration !=  nullptr && duration->has_data())
	|| (duration_breakdown !=  nullptr && duration_breakdown->has_data())
	|| (item_counts !=  nullptr && item_counts->has_data())
	|| (node_counts !=  nullptr && node_counts->has_data())
	|| (rib_batch_counts !=  nullptr && rib_batch_counts->has_data())
	|| (route_counts !=  nullptr && route_counts->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::has_operation() const
{
    return is_set(yfilter)
	|| (duration !=  nullptr && duration->has_operation())
	|| (duration_breakdown !=  nullptr && duration_breakdown->has_operation())
	|| (item_counts !=  nullptr && item_counts->has_operation())
	|| (node_counts !=  nullptr && node_counts->has_operation())
	|| (rib_batch_counts !=  nullptr && rib_batch_counts->has_operation())
	|| (route_counts !=  nullptr && route_counts->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "duration")
    {
        if(duration == nullptr)
        {
            duration = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::Duration>();
        }
        return duration;
    }

    if(child_yang_name == "duration-breakdown")
    {
        if(duration_breakdown == nullptr)
        {
            duration_breakdown = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown>();
        }
        return duration_breakdown;
    }

    if(child_yang_name == "item-counts")
    {
        if(item_counts == nullptr)
        {
            item_counts = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts>();
        }
        return item_counts;
    }

    if(child_yang_name == "node-counts")
    {
        if(node_counts == nullptr)
        {
            node_counts = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts>();
        }
        return node_counts;
    }

    if(child_yang_name == "rib-batch-counts")
    {
        if(rib_batch_counts == nullptr)
        {
            rib_batch_counts = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RibBatchCounts>();
        }
        return rib_batch_counts;
    }

    if(child_yang_name == "route-counts")
    {
        if(route_counts == nullptr)
        {
            route_counts = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts>();
        }
        return route_counts;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(duration != nullptr)
    {
        children["duration"] = duration;
    }

    if(duration_breakdown != nullptr)
    {
        children["duration-breakdown"] = duration_breakdown;
    }

    if(item_counts != nullptr)
    {
        children["item-counts"] = item_counts;
    }

    if(node_counts != nullptr)
    {
        children["node-counts"] = node_counts;
    }

    if(rib_batch_counts != nullptr)
    {
        children["rib-batch-counts"] = rib_batch_counts;
    }

    if(route_counts != nullptr)
    {
        children["route-counts"] = route_counts;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "duration-breakdown" || name == "item-counts" || name == "node-counts" || name == "rib-batch-counts" || name == "route-counts")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::Duration::Duration()
    :
    cpu_duration{YType::uint32, "cpu-duration"},
    real_duration{YType::uint32, "real-duration"}
{

    yang_name = "duration"; yang_parent_name = "route-update-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::Duration::~Duration()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::Duration::has_data() const
{
    return cpu_duration.is_set
	|| real_duration.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::Duration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpu_duration.yfilter)
	|| ydk::is_set(real_duration.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::Duration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "duration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::Duration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu_duration.is_set || is_set(cpu_duration.yfilter)) leaf_name_data.push_back(cpu_duration.get_name_leafdata());
    if (real_duration.is_set || is_set(real_duration.yfilter)) leaf_name_data.push_back(real_duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::Duration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::Duration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::Duration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpu-duration")
    {
        cpu_duration = value;
        cpu_duration.value_namespace = name_space;
        cpu_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "real-duration")
    {
        real_duration = value;
        real_duration.value_namespace = name_space;
        real_duration.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::Duration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpu-duration")
    {
        cpu_duration.yfilter = yfilter;
    }
    if(value_path == "real-duration")
    {
        real_duration.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::Duration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu-duration" || name == "real-duration")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::DurationBreakdown()
    :
    global_rib_build(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild>())
	,global_rib_send(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend>())
	,local_rib_update(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate>())
{
    global_rib_build->parent = this;
    global_rib_send->parent = this;
    local_rib_update->parent = this;

    yang_name = "duration-breakdown"; yang_parent_name = "route-update-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::~DurationBreakdown()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::has_data() const
{
    return (global_rib_build !=  nullptr && global_rib_build->has_data())
	|| (global_rib_send !=  nullptr && global_rib_send->has_data())
	|| (local_rib_update !=  nullptr && local_rib_update->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::has_operation() const
{
    return is_set(yfilter)
	|| (global_rib_build !=  nullptr && global_rib_build->has_operation())
	|| (global_rib_send !=  nullptr && global_rib_send->has_operation())
	|| (local_rib_update !=  nullptr && local_rib_update->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "duration-breakdown";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global-rib-build")
    {
        if(global_rib_build == nullptr)
        {
            global_rib_build = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild>();
        }
        return global_rib_build;
    }

    if(child_yang_name == "global-rib-send")
    {
        if(global_rib_send == nullptr)
        {
            global_rib_send = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend>();
        }
        return global_rib_send;
    }

    if(child_yang_name == "local-rib-update")
    {
        if(local_rib_update == nullptr)
        {
            local_rib_update = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate>();
        }
        return local_rib_update;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(global_rib_build != nullptr)
    {
        children["global-rib-build"] = global_rib_build;
    }

    if(global_rib_send != nullptr)
    {
        children["global-rib-send"] = global_rib_send;
    }

    if(local_rib_update != nullptr)
    {
        children["local-rib-update"] = local_rib_update;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-rib-build" || name == "global-rib-send" || name == "local-rib-update")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::GlobalRibBuild()
    :
    critical(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Critical>())
	,high(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::High>())
	,low(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Low>())
	,medium(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Medium>())
{
    critical->parent = this;
    high->parent = this;
    low->parent = this;
    medium->parent = this;

    yang_name = "global-rib-build"; yang_parent_name = "duration-breakdown"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::~GlobalRibBuild()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::has_data() const
{
    return (critical !=  nullptr && critical->has_data())
	|| (high !=  nullptr && high->has_data())
	|| (low !=  nullptr && low->has_data())
	|| (medium !=  nullptr && medium->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::has_operation() const
{
    return is_set(yfilter)
	|| (critical !=  nullptr && critical->has_operation())
	|| (high !=  nullptr && high->has_operation())
	|| (low !=  nullptr && low->has_operation())
	|| (medium !=  nullptr && medium->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-rib-build";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "critical")
    {
        if(critical == nullptr)
        {
            critical = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Critical>();
        }
        return critical;
    }

    if(child_yang_name == "high")
    {
        if(high == nullptr)
        {
            high = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::High>();
        }
        return high;
    }

    if(child_yang_name == "low")
    {
        if(low == nullptr)
        {
            low = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Low>();
        }
        return low;
    }

    if(child_yang_name == "medium")
    {
        if(medium == nullptr)
        {
            medium = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Medium>();
        }
        return medium;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(critical != nullptr)
    {
        children["critical"] = critical;
    }

    if(high != nullptr)
    {
        children["high"] = high;
    }

    if(low != nullptr)
    {
        children["low"] = low;
    }

    if(medium != nullptr)
    {
        children["medium"] = medium;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical" || name == "high" || name == "low" || name == "medium")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Critical::Critical()
    :
    cpu_duration{YType::uint32, "cpu-duration"},
    real_duration{YType::uint32, "real-duration"}
{

    yang_name = "critical"; yang_parent_name = "global-rib-build"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Critical::~Critical()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Critical::has_data() const
{
    return cpu_duration.is_set
	|| real_duration.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Critical::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpu_duration.yfilter)
	|| ydk::is_set(real_duration.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Critical::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "critical";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Critical::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu_duration.is_set || is_set(cpu_duration.yfilter)) leaf_name_data.push_back(cpu_duration.get_name_leafdata());
    if (real_duration.is_set || is_set(real_duration.yfilter)) leaf_name_data.push_back(real_duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Critical::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Critical::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Critical::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpu-duration")
    {
        cpu_duration = value;
        cpu_duration.value_namespace = name_space;
        cpu_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "real-duration")
    {
        real_duration = value;
        real_duration.value_namespace = name_space;
        real_duration.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Critical::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpu-duration")
    {
        cpu_duration.yfilter = yfilter;
    }
    if(value_path == "real-duration")
    {
        real_duration.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Critical::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu-duration" || name == "real-duration")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::High::High()
    :
    cpu_duration{YType::uint32, "cpu-duration"},
    real_duration{YType::uint32, "real-duration"}
{

    yang_name = "high"; yang_parent_name = "global-rib-build"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::High::~High()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::High::has_data() const
{
    return cpu_duration.is_set
	|| real_duration.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::High::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpu_duration.yfilter)
	|| ydk::is_set(real_duration.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::High::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu_duration.is_set || is_set(cpu_duration.yfilter)) leaf_name_data.push_back(cpu_duration.get_name_leafdata());
    if (real_duration.is_set || is_set(real_duration.yfilter)) leaf_name_data.push_back(real_duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::High::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::High::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpu-duration")
    {
        cpu_duration = value;
        cpu_duration.value_namespace = name_space;
        cpu_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "real-duration")
    {
        real_duration = value;
        real_duration.value_namespace = name_space;
        real_duration.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::High::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpu-duration")
    {
        cpu_duration.yfilter = yfilter;
    }
    if(value_path == "real-duration")
    {
        real_duration.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::High::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu-duration" || name == "real-duration")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Low::Low()
    :
    cpu_duration{YType::uint32, "cpu-duration"},
    real_duration{YType::uint32, "real-duration"}
{

    yang_name = "low"; yang_parent_name = "global-rib-build"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Low::~Low()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Low::has_data() const
{
    return cpu_duration.is_set
	|| real_duration.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Low::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpu_duration.yfilter)
	|| ydk::is_set(real_duration.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Low::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Low::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu_duration.is_set || is_set(cpu_duration.yfilter)) leaf_name_data.push_back(cpu_duration.get_name_leafdata());
    if (real_duration.is_set || is_set(real_duration.yfilter)) leaf_name_data.push_back(real_duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Low::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Low::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Low::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpu-duration")
    {
        cpu_duration = value;
        cpu_duration.value_namespace = name_space;
        cpu_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "real-duration")
    {
        real_duration = value;
        real_duration.value_namespace = name_space;
        real_duration.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Low::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpu-duration")
    {
        cpu_duration.yfilter = yfilter;
    }
    if(value_path == "real-duration")
    {
        real_duration.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Low::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu-duration" || name == "real-duration")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Medium::Medium()
    :
    cpu_duration{YType::uint32, "cpu-duration"},
    real_duration{YType::uint32, "real-duration"}
{

    yang_name = "medium"; yang_parent_name = "global-rib-build"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Medium::~Medium()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Medium::has_data() const
{
    return cpu_duration.is_set
	|| real_duration.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Medium::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpu_duration.yfilter)
	|| ydk::is_set(real_duration.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Medium::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "medium";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Medium::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu_duration.is_set || is_set(cpu_duration.yfilter)) leaf_name_data.push_back(cpu_duration.get_name_leafdata());
    if (real_duration.is_set || is_set(real_duration.yfilter)) leaf_name_data.push_back(real_duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Medium::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Medium::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Medium::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpu-duration")
    {
        cpu_duration = value;
        cpu_duration.value_namespace = name_space;
        cpu_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "real-duration")
    {
        real_duration = value;
        real_duration.value_namespace = name_space;
        real_duration.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Medium::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpu-duration")
    {
        cpu_duration.yfilter = yfilter;
    }
    if(value_path == "real-duration")
    {
        real_duration.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Medium::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu-duration" || name == "real-duration")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::GlobalRibSend()
    :
    critical(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Critical>())
	,high(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::High>())
	,low(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Low>())
	,medium(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Medium>())
{
    critical->parent = this;
    high->parent = this;
    low->parent = this;
    medium->parent = this;

    yang_name = "global-rib-send"; yang_parent_name = "duration-breakdown"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::~GlobalRibSend()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::has_data() const
{
    return (critical !=  nullptr && critical->has_data())
	|| (high !=  nullptr && high->has_data())
	|| (low !=  nullptr && low->has_data())
	|| (medium !=  nullptr && medium->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::has_operation() const
{
    return is_set(yfilter)
	|| (critical !=  nullptr && critical->has_operation())
	|| (high !=  nullptr && high->has_operation())
	|| (low !=  nullptr && low->has_operation())
	|| (medium !=  nullptr && medium->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-rib-send";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "critical")
    {
        if(critical == nullptr)
        {
            critical = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Critical>();
        }
        return critical;
    }

    if(child_yang_name == "high")
    {
        if(high == nullptr)
        {
            high = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::High>();
        }
        return high;
    }

    if(child_yang_name == "low")
    {
        if(low == nullptr)
        {
            low = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Low>();
        }
        return low;
    }

    if(child_yang_name == "medium")
    {
        if(medium == nullptr)
        {
            medium = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Medium>();
        }
        return medium;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(critical != nullptr)
    {
        children["critical"] = critical;
    }

    if(high != nullptr)
    {
        children["high"] = high;
    }

    if(low != nullptr)
    {
        children["low"] = low;
    }

    if(medium != nullptr)
    {
        children["medium"] = medium;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical" || name == "high" || name == "low" || name == "medium")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Critical::Critical()
    :
    cpu_duration{YType::uint32, "cpu-duration"},
    real_duration{YType::uint32, "real-duration"}
{

    yang_name = "critical"; yang_parent_name = "global-rib-send"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Critical::~Critical()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Critical::has_data() const
{
    return cpu_duration.is_set
	|| real_duration.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Critical::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpu_duration.yfilter)
	|| ydk::is_set(real_duration.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Critical::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "critical";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Critical::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu_duration.is_set || is_set(cpu_duration.yfilter)) leaf_name_data.push_back(cpu_duration.get_name_leafdata());
    if (real_duration.is_set || is_set(real_duration.yfilter)) leaf_name_data.push_back(real_duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Critical::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Critical::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Critical::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpu-duration")
    {
        cpu_duration = value;
        cpu_duration.value_namespace = name_space;
        cpu_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "real-duration")
    {
        real_duration = value;
        real_duration.value_namespace = name_space;
        real_duration.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Critical::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpu-duration")
    {
        cpu_duration.yfilter = yfilter;
    }
    if(value_path == "real-duration")
    {
        real_duration.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Critical::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu-duration" || name == "real-duration")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::High::High()
    :
    cpu_duration{YType::uint32, "cpu-duration"},
    real_duration{YType::uint32, "real-duration"}
{

    yang_name = "high"; yang_parent_name = "global-rib-send"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::High::~High()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::High::has_data() const
{
    return cpu_duration.is_set
	|| real_duration.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::High::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpu_duration.yfilter)
	|| ydk::is_set(real_duration.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::High::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu_duration.is_set || is_set(cpu_duration.yfilter)) leaf_name_data.push_back(cpu_duration.get_name_leafdata());
    if (real_duration.is_set || is_set(real_duration.yfilter)) leaf_name_data.push_back(real_duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::High::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::High::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpu-duration")
    {
        cpu_duration = value;
        cpu_duration.value_namespace = name_space;
        cpu_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "real-duration")
    {
        real_duration = value;
        real_duration.value_namespace = name_space;
        real_duration.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::High::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpu-duration")
    {
        cpu_duration.yfilter = yfilter;
    }
    if(value_path == "real-duration")
    {
        real_duration.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::High::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu-duration" || name == "real-duration")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Low::Low()
    :
    cpu_duration{YType::uint32, "cpu-duration"},
    real_duration{YType::uint32, "real-duration"}
{

    yang_name = "low"; yang_parent_name = "global-rib-send"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Low::~Low()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Low::has_data() const
{
    return cpu_duration.is_set
	|| real_duration.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Low::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpu_duration.yfilter)
	|| ydk::is_set(real_duration.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Low::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Low::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu_duration.is_set || is_set(cpu_duration.yfilter)) leaf_name_data.push_back(cpu_duration.get_name_leafdata());
    if (real_duration.is_set || is_set(real_duration.yfilter)) leaf_name_data.push_back(real_duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Low::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Low::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Low::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpu-duration")
    {
        cpu_duration = value;
        cpu_duration.value_namespace = name_space;
        cpu_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "real-duration")
    {
        real_duration = value;
        real_duration.value_namespace = name_space;
        real_duration.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Low::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpu-duration")
    {
        cpu_duration.yfilter = yfilter;
    }
    if(value_path == "real-duration")
    {
        real_duration.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Low::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu-duration" || name == "real-duration")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Medium::Medium()
    :
    cpu_duration{YType::uint32, "cpu-duration"},
    real_duration{YType::uint32, "real-duration"}
{

    yang_name = "medium"; yang_parent_name = "global-rib-send"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Medium::~Medium()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Medium::has_data() const
{
    return cpu_duration.is_set
	|| real_duration.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Medium::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpu_duration.yfilter)
	|| ydk::is_set(real_duration.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Medium::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "medium";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Medium::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu_duration.is_set || is_set(cpu_duration.yfilter)) leaf_name_data.push_back(cpu_duration.get_name_leafdata());
    if (real_duration.is_set || is_set(real_duration.yfilter)) leaf_name_data.push_back(real_duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Medium::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Medium::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Medium::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpu-duration")
    {
        cpu_duration = value;
        cpu_duration.value_namespace = name_space;
        cpu_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "real-duration")
    {
        real_duration = value;
        real_duration.value_namespace = name_space;
        real_duration.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Medium::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpu-duration")
    {
        cpu_duration.yfilter = yfilter;
    }
    if(value_path == "real-duration")
    {
        real_duration.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Medium::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu-duration" || name == "real-duration")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::LocalRibUpdate()
    :
    critical(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Critical>())
	,high(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::High>())
	,low(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Low>())
	,medium(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Medium>())
{
    critical->parent = this;
    high->parent = this;
    low->parent = this;
    medium->parent = this;

    yang_name = "local-rib-update"; yang_parent_name = "duration-breakdown"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::~LocalRibUpdate()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::has_data() const
{
    return (critical !=  nullptr && critical->has_data())
	|| (high !=  nullptr && high->has_data())
	|| (low !=  nullptr && low->has_data())
	|| (medium !=  nullptr && medium->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::has_operation() const
{
    return is_set(yfilter)
	|| (critical !=  nullptr && critical->has_operation())
	|| (high !=  nullptr && high->has_operation())
	|| (low !=  nullptr && low->has_operation())
	|| (medium !=  nullptr && medium->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-rib-update";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "critical")
    {
        if(critical == nullptr)
        {
            critical = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Critical>();
        }
        return critical;
    }

    if(child_yang_name == "high")
    {
        if(high == nullptr)
        {
            high = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::High>();
        }
        return high;
    }

    if(child_yang_name == "low")
    {
        if(low == nullptr)
        {
            low = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Low>();
        }
        return low;
    }

    if(child_yang_name == "medium")
    {
        if(medium == nullptr)
        {
            medium = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Medium>();
        }
        return medium;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(critical != nullptr)
    {
        children["critical"] = critical;
    }

    if(high != nullptr)
    {
        children["high"] = high;
    }

    if(low != nullptr)
    {
        children["low"] = low;
    }

    if(medium != nullptr)
    {
        children["medium"] = medium;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical" || name == "high" || name == "low" || name == "medium")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Critical::Critical()
    :
    cpu_duration{YType::uint32, "cpu-duration"},
    real_duration{YType::uint32, "real-duration"}
{

    yang_name = "critical"; yang_parent_name = "local-rib-update"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Critical::~Critical()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Critical::has_data() const
{
    return cpu_duration.is_set
	|| real_duration.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Critical::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpu_duration.yfilter)
	|| ydk::is_set(real_duration.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Critical::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "critical";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Critical::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu_duration.is_set || is_set(cpu_duration.yfilter)) leaf_name_data.push_back(cpu_duration.get_name_leafdata());
    if (real_duration.is_set || is_set(real_duration.yfilter)) leaf_name_data.push_back(real_duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Critical::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Critical::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Critical::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpu-duration")
    {
        cpu_duration = value;
        cpu_duration.value_namespace = name_space;
        cpu_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "real-duration")
    {
        real_duration = value;
        real_duration.value_namespace = name_space;
        real_duration.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Critical::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpu-duration")
    {
        cpu_duration.yfilter = yfilter;
    }
    if(value_path == "real-duration")
    {
        real_duration.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Critical::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu-duration" || name == "real-duration")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::High::High()
    :
    cpu_duration{YType::uint32, "cpu-duration"},
    real_duration{YType::uint32, "real-duration"}
{

    yang_name = "high"; yang_parent_name = "local-rib-update"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::High::~High()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::High::has_data() const
{
    return cpu_duration.is_set
	|| real_duration.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::High::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpu_duration.yfilter)
	|| ydk::is_set(real_duration.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::High::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu_duration.is_set || is_set(cpu_duration.yfilter)) leaf_name_data.push_back(cpu_duration.get_name_leafdata());
    if (real_duration.is_set || is_set(real_duration.yfilter)) leaf_name_data.push_back(real_duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::High::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::High::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpu-duration")
    {
        cpu_duration = value;
        cpu_duration.value_namespace = name_space;
        cpu_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "real-duration")
    {
        real_duration = value;
        real_duration.value_namespace = name_space;
        real_duration.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::High::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpu-duration")
    {
        cpu_duration.yfilter = yfilter;
    }
    if(value_path == "real-duration")
    {
        real_duration.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::High::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu-duration" || name == "real-duration")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Low::Low()
    :
    cpu_duration{YType::uint32, "cpu-duration"},
    real_duration{YType::uint32, "real-duration"}
{

    yang_name = "low"; yang_parent_name = "local-rib-update"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Low::~Low()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Low::has_data() const
{
    return cpu_duration.is_set
	|| real_duration.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Low::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpu_duration.yfilter)
	|| ydk::is_set(real_duration.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Low::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Low::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu_duration.is_set || is_set(cpu_duration.yfilter)) leaf_name_data.push_back(cpu_duration.get_name_leafdata());
    if (real_duration.is_set || is_set(real_duration.yfilter)) leaf_name_data.push_back(real_duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Low::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Low::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Low::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpu-duration")
    {
        cpu_duration = value;
        cpu_duration.value_namespace = name_space;
        cpu_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "real-duration")
    {
        real_duration = value;
        real_duration.value_namespace = name_space;
        real_duration.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Low::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpu-duration")
    {
        cpu_duration.yfilter = yfilter;
    }
    if(value_path == "real-duration")
    {
        real_duration.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Low::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu-duration" || name == "real-duration")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Medium::Medium()
    :
    cpu_duration{YType::uint32, "cpu-duration"},
    real_duration{YType::uint32, "real-duration"}
{

    yang_name = "medium"; yang_parent_name = "local-rib-update"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Medium::~Medium()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Medium::has_data() const
{
    return cpu_duration.is_set
	|| real_duration.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Medium::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpu_duration.yfilter)
	|| ydk::is_set(real_duration.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Medium::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "medium";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Medium::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu_duration.is_set || is_set(cpu_duration.yfilter)) leaf_name_data.push_back(cpu_duration.get_name_leafdata());
    if (real_duration.is_set || is_set(real_duration.yfilter)) leaf_name_data.push_back(real_duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Medium::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Medium::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Medium::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpu-duration")
    {
        cpu_duration = value;
        cpu_duration.value_namespace = name_space;
        cpu_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "real-duration")
    {
        real_duration = value;
        real_duration.value_namespace = name_space;
        real_duration.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Medium::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpu-duration")
    {
        cpu_duration.yfilter = yfilter;
    }
    if(value_path == "real-duration")
    {
        real_duration.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Medium::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu-duration" || name == "real-duration")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::ItemCounts()
    :
    added(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Added>())
	,deleted(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Deleted>())
	,modified(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Modified>())
	,reachable(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Reachable>())
	,touched(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Touched>())
	,unreachable(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Unreachable>())
{
    added->parent = this;
    deleted->parent = this;
    modified->parent = this;
    reachable->parent = this;
    touched->parent = this;
    unreachable->parent = this;

    yang_name = "item-counts"; yang_parent_name = "route-update-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::~ItemCounts()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::has_data() const
{
    return (added !=  nullptr && added->has_data())
	|| (deleted !=  nullptr && deleted->has_data())
	|| (modified !=  nullptr && modified->has_data())
	|| (reachable !=  nullptr && reachable->has_data())
	|| (touched !=  nullptr && touched->has_data())
	|| (unreachable !=  nullptr && unreachable->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::has_operation() const
{
    return is_set(yfilter)
	|| (added !=  nullptr && added->has_operation())
	|| (deleted !=  nullptr && deleted->has_operation())
	|| (modified !=  nullptr && modified->has_operation())
	|| (reachable !=  nullptr && reachable->has_operation())
	|| (touched !=  nullptr && touched->has_operation())
	|| (unreachable !=  nullptr && unreachable->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "item-counts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "added")
    {
        if(added == nullptr)
        {
            added = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Added>();
        }
        return added;
    }

    if(child_yang_name == "deleted")
    {
        if(deleted == nullptr)
        {
            deleted = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Deleted>();
        }
        return deleted;
    }

    if(child_yang_name == "modified")
    {
        if(modified == nullptr)
        {
            modified = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Modified>();
        }
        return modified;
    }

    if(child_yang_name == "reachable")
    {
        if(reachable == nullptr)
        {
            reachable = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Reachable>();
        }
        return reachable;
    }

    if(child_yang_name == "touched")
    {
        if(touched == nullptr)
        {
            touched = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Touched>();
        }
        return touched;
    }

    if(child_yang_name == "unreachable")
    {
        if(unreachable == nullptr)
        {
            unreachable = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Unreachable>();
        }
        return unreachable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(added != nullptr)
    {
        children["added"] = added;
    }

    if(deleted != nullptr)
    {
        children["deleted"] = deleted;
    }

    if(modified != nullptr)
    {
        children["modified"] = modified;
    }

    if(reachable != nullptr)
    {
        children["reachable"] = reachable;
    }

    if(touched != nullptr)
    {
        children["touched"] = touched;
    }

    if(unreachable != nullptr)
    {
        children["unreachable"] = unreachable;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "added" || name == "deleted" || name == "modified" || name == "reachable" || name == "touched" || name == "unreachable")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Added::Added()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    low{YType::uint32, "low"},
    medium{YType::uint32, "medium"}
{

    yang_name = "added"; yang_parent_name = "item-counts"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Added::~Added()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Added::has_data() const
{
    return critical.is_set
	|| high.is_set
	|| low.is_set
	|| medium.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Added::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(critical.yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(low.yfilter)
	|| ydk::is_set(medium.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Added::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "added";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Added::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.yfilter)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());
    if (medium.is_set || is_set(medium.yfilter)) leaf_name_data.push_back(medium.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Added::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Added::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Added::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "critical")
    {
        critical = value;
        critical.value_namespace = name_space;
        critical.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "medium")
    {
        medium = value;
        medium.value_namespace = name_space;
        medium.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Added::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "critical")
    {
        critical.yfilter = yfilter;
    }
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
    if(value_path == "medium")
    {
        medium.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Added::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical" || name == "high" || name == "low" || name == "medium")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Deleted::Deleted()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    low{YType::uint32, "low"},
    medium{YType::uint32, "medium"}
{

    yang_name = "deleted"; yang_parent_name = "item-counts"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Deleted::~Deleted()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Deleted::has_data() const
{
    return critical.is_set
	|| high.is_set
	|| low.is_set
	|| medium.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Deleted::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(critical.yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(low.yfilter)
	|| ydk::is_set(medium.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Deleted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deleted";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Deleted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.yfilter)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());
    if (medium.is_set || is_set(medium.yfilter)) leaf_name_data.push_back(medium.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Deleted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Deleted::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Deleted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "critical")
    {
        critical = value;
        critical.value_namespace = name_space;
        critical.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "medium")
    {
        medium = value;
        medium.value_namespace = name_space;
        medium.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Deleted::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "critical")
    {
        critical.yfilter = yfilter;
    }
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
    if(value_path == "medium")
    {
        medium.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Deleted::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical" || name == "high" || name == "low" || name == "medium")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Modified::Modified()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    low{YType::uint32, "low"},
    medium{YType::uint32, "medium"}
{

    yang_name = "modified"; yang_parent_name = "item-counts"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Modified::~Modified()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Modified::has_data() const
{
    return critical.is_set
	|| high.is_set
	|| low.is_set
	|| medium.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Modified::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(critical.yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(low.yfilter)
	|| ydk::is_set(medium.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Modified::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "modified";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Modified::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.yfilter)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());
    if (medium.is_set || is_set(medium.yfilter)) leaf_name_data.push_back(medium.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Modified::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Modified::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Modified::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "critical")
    {
        critical = value;
        critical.value_namespace = name_space;
        critical.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "medium")
    {
        medium = value;
        medium.value_namespace = name_space;
        medium.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Modified::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "critical")
    {
        critical.yfilter = yfilter;
    }
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
    if(value_path == "medium")
    {
        medium.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Modified::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical" || name == "high" || name == "low" || name == "medium")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Reachable::Reachable()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    low{YType::uint32, "low"},
    medium{YType::uint32, "medium"}
{

    yang_name = "reachable"; yang_parent_name = "item-counts"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Reachable::~Reachable()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Reachable::has_data() const
{
    return critical.is_set
	|| high.is_set
	|| low.is_set
	|| medium.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Reachable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(critical.yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(low.yfilter)
	|| ydk::is_set(medium.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Reachable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reachable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Reachable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.yfilter)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());
    if (medium.is_set || is_set(medium.yfilter)) leaf_name_data.push_back(medium.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Reachable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Reachable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Reachable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "critical")
    {
        critical = value;
        critical.value_namespace = name_space;
        critical.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "medium")
    {
        medium = value;
        medium.value_namespace = name_space;
        medium.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Reachable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "critical")
    {
        critical.yfilter = yfilter;
    }
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
    if(value_path == "medium")
    {
        medium.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Reachable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical" || name == "high" || name == "low" || name == "medium")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Touched::Touched()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    low{YType::uint32, "low"},
    medium{YType::uint32, "medium"}
{

    yang_name = "touched"; yang_parent_name = "item-counts"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Touched::~Touched()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Touched::has_data() const
{
    return critical.is_set
	|| high.is_set
	|| low.is_set
	|| medium.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Touched::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(critical.yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(low.yfilter)
	|| ydk::is_set(medium.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Touched::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "touched";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Touched::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.yfilter)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());
    if (medium.is_set || is_set(medium.yfilter)) leaf_name_data.push_back(medium.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Touched::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Touched::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Touched::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "critical")
    {
        critical = value;
        critical.value_namespace = name_space;
        critical.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "medium")
    {
        medium = value;
        medium.value_namespace = name_space;
        medium.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Touched::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "critical")
    {
        critical.yfilter = yfilter;
    }
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
    if(value_path == "medium")
    {
        medium.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Touched::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical" || name == "high" || name == "low" || name == "medium")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Unreachable::Unreachable()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    low{YType::uint32, "low"},
    medium{YType::uint32, "medium"}
{

    yang_name = "unreachable"; yang_parent_name = "item-counts"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Unreachable::~Unreachable()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Unreachable::has_data() const
{
    return critical.is_set
	|| high.is_set
	|| low.is_set
	|| medium.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Unreachable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(critical.yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(low.yfilter)
	|| ydk::is_set(medium.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Unreachable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unreachable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Unreachable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.yfilter)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());
    if (medium.is_set || is_set(medium.yfilter)) leaf_name_data.push_back(medium.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Unreachable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Unreachable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Unreachable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "critical")
    {
        critical = value;
        critical.value_namespace = name_space;
        critical.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "medium")
    {
        medium = value;
        medium.value_namespace = name_space;
        medium.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Unreachable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "critical")
    {
        critical.yfilter = yfilter;
    }
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
    if(value_path == "medium")
    {
        medium.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Unreachable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical" || name == "high" || name == "low" || name == "medium")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::NodeCounts()
    :
    total_touched{YType::uint32, "total-touched"}
    	,
    per_priority_touched(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::PerPriorityTouched>())
{
    per_priority_touched->parent = this;

    yang_name = "node-counts"; yang_parent_name = "route-update-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::~NodeCounts()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::has_data() const
{
    return total_touched.is_set
	|| (per_priority_touched !=  nullptr && per_priority_touched->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_touched.yfilter)
	|| (per_priority_touched !=  nullptr && per_priority_touched->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-counts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_touched.is_set || is_set(total_touched.yfilter)) leaf_name_data.push_back(total_touched.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "per-priority-touched")
    {
        if(per_priority_touched == nullptr)
        {
            per_priority_touched = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::PerPriorityTouched>();
        }
        return per_priority_touched;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(per_priority_touched != nullptr)
    {
        children["per-priority-touched"] = per_priority_touched;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-touched")
    {
        total_touched = value;
        total_touched.value_namespace = name_space;
        total_touched.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-touched")
    {
        total_touched.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-priority-touched" || name == "total-touched")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::PerPriorityTouched::PerPriorityTouched()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    low{YType::uint32, "low"},
    medium{YType::uint32, "medium"}
{

    yang_name = "per-priority-touched"; yang_parent_name = "node-counts"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::PerPriorityTouched::~PerPriorityTouched()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::PerPriorityTouched::has_data() const
{
    return critical.is_set
	|| high.is_set
	|| low.is_set
	|| medium.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::PerPriorityTouched::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(critical.yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(low.yfilter)
	|| ydk::is_set(medium.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::PerPriorityTouched::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-priority-touched";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::PerPriorityTouched::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.yfilter)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());
    if (medium.is_set || is_set(medium.yfilter)) leaf_name_data.push_back(medium.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::PerPriorityTouched::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::PerPriorityTouched::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::PerPriorityTouched::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "critical")
    {
        critical = value;
        critical.value_namespace = name_space;
        critical.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "medium")
    {
        medium = value;
        medium.value_namespace = name_space;
        medium.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::PerPriorityTouched::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "critical")
    {
        critical.yfilter = yfilter;
    }
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
    if(value_path == "medium")
    {
        medium.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::PerPriorityTouched::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical" || name == "high" || name == "low" || name == "medium")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RibBatchCounts::RibBatchCounts()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    low{YType::uint32, "low"},
    medium{YType::uint32, "medium"}
{

    yang_name = "rib-batch-counts"; yang_parent_name = "route-update-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RibBatchCounts::~RibBatchCounts()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RibBatchCounts::has_data() const
{
    return critical.is_set
	|| high.is_set
	|| low.is_set
	|| medium.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RibBatchCounts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(critical.yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(low.yfilter)
	|| ydk::is_set(medium.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RibBatchCounts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rib-batch-counts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RibBatchCounts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.yfilter)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());
    if (medium.is_set || is_set(medium.yfilter)) leaf_name_data.push_back(medium.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RibBatchCounts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RibBatchCounts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RibBatchCounts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "critical")
    {
        critical = value;
        critical.value_namespace = name_space;
        critical.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "medium")
    {
        medium = value;
        medium.value_namespace = name_space;
        medium.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RibBatchCounts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "critical")
    {
        critical.yfilter = yfilter;
    }
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
    if(value_path == "medium")
    {
        medium.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RibBatchCounts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical" || name == "high" || name == "low" || name == "medium")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::RouteCounts()
    :
    added(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Added>())
	,deleted(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Deleted>())
	,modified(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Modified>())
	,reachable(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Reachable>())
	,touched(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Touched>())
	,unreachable(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Unreachable>())
{
    added->parent = this;
    deleted->parent = this;
    modified->parent = this;
    reachable->parent = this;
    touched->parent = this;
    unreachable->parent = this;

    yang_name = "route-counts"; yang_parent_name = "route-update-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::~RouteCounts()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::has_data() const
{
    return (added !=  nullptr && added->has_data())
	|| (deleted !=  nullptr && deleted->has_data())
	|| (modified !=  nullptr && modified->has_data())
	|| (reachable !=  nullptr && reachable->has_data())
	|| (touched !=  nullptr && touched->has_data())
	|| (unreachable !=  nullptr && unreachable->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::has_operation() const
{
    return is_set(yfilter)
	|| (added !=  nullptr && added->has_operation())
	|| (deleted !=  nullptr && deleted->has_operation())
	|| (modified !=  nullptr && modified->has_operation())
	|| (reachable !=  nullptr && reachable->has_operation())
	|| (touched !=  nullptr && touched->has_operation())
	|| (unreachable !=  nullptr && unreachable->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-counts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "added")
    {
        if(added == nullptr)
        {
            added = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Added>();
        }
        return added;
    }

    if(child_yang_name == "deleted")
    {
        if(deleted == nullptr)
        {
            deleted = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Deleted>();
        }
        return deleted;
    }

    if(child_yang_name == "modified")
    {
        if(modified == nullptr)
        {
            modified = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Modified>();
        }
        return modified;
    }

    if(child_yang_name == "reachable")
    {
        if(reachable == nullptr)
        {
            reachable = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Reachable>();
        }
        return reachable;
    }

    if(child_yang_name == "touched")
    {
        if(touched == nullptr)
        {
            touched = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Touched>();
        }
        return touched;
    }

    if(child_yang_name == "unreachable")
    {
        if(unreachable == nullptr)
        {
            unreachable = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Unreachable>();
        }
        return unreachable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(added != nullptr)
    {
        children["added"] = added;
    }

    if(deleted != nullptr)
    {
        children["deleted"] = deleted;
    }

    if(modified != nullptr)
    {
        children["modified"] = modified;
    }

    if(reachable != nullptr)
    {
        children["reachable"] = reachable;
    }

    if(touched != nullptr)
    {
        children["touched"] = touched;
    }

    if(unreachable != nullptr)
    {
        children["unreachable"] = unreachable;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "added" || name == "deleted" || name == "modified" || name == "reachable" || name == "touched" || name == "unreachable")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Added::Added()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    low{YType::uint32, "low"},
    medium{YType::uint32, "medium"}
{

    yang_name = "added"; yang_parent_name = "route-counts"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Added::~Added()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Added::has_data() const
{
    return critical.is_set
	|| high.is_set
	|| low.is_set
	|| medium.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Added::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(critical.yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(low.yfilter)
	|| ydk::is_set(medium.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Added::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "added";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Added::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.yfilter)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());
    if (medium.is_set || is_set(medium.yfilter)) leaf_name_data.push_back(medium.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Added::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Added::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Added::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "critical")
    {
        critical = value;
        critical.value_namespace = name_space;
        critical.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "medium")
    {
        medium = value;
        medium.value_namespace = name_space;
        medium.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Added::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "critical")
    {
        critical.yfilter = yfilter;
    }
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
    if(value_path == "medium")
    {
        medium.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Added::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical" || name == "high" || name == "low" || name == "medium")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Deleted::Deleted()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    low{YType::uint32, "low"},
    medium{YType::uint32, "medium"}
{

    yang_name = "deleted"; yang_parent_name = "route-counts"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Deleted::~Deleted()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Deleted::has_data() const
{
    return critical.is_set
	|| high.is_set
	|| low.is_set
	|| medium.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Deleted::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(critical.yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(low.yfilter)
	|| ydk::is_set(medium.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Deleted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deleted";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Deleted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.yfilter)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());
    if (medium.is_set || is_set(medium.yfilter)) leaf_name_data.push_back(medium.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Deleted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Deleted::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Deleted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "critical")
    {
        critical = value;
        critical.value_namespace = name_space;
        critical.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "medium")
    {
        medium = value;
        medium.value_namespace = name_space;
        medium.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Deleted::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "critical")
    {
        critical.yfilter = yfilter;
    }
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
    if(value_path == "medium")
    {
        medium.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Deleted::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical" || name == "high" || name == "low" || name == "medium")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Modified::Modified()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    low{YType::uint32, "low"},
    medium{YType::uint32, "medium"}
{

    yang_name = "modified"; yang_parent_name = "route-counts"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Modified::~Modified()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Modified::has_data() const
{
    return critical.is_set
	|| high.is_set
	|| low.is_set
	|| medium.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Modified::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(critical.yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(low.yfilter)
	|| ydk::is_set(medium.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Modified::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "modified";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Modified::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.yfilter)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());
    if (medium.is_set || is_set(medium.yfilter)) leaf_name_data.push_back(medium.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Modified::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Modified::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Modified::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "critical")
    {
        critical = value;
        critical.value_namespace = name_space;
        critical.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "medium")
    {
        medium = value;
        medium.value_namespace = name_space;
        medium.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Modified::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "critical")
    {
        critical.yfilter = yfilter;
    }
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
    if(value_path == "medium")
    {
        medium.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Modified::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical" || name == "high" || name == "low" || name == "medium")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Reachable::Reachable()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    low{YType::uint32, "low"},
    medium{YType::uint32, "medium"}
{

    yang_name = "reachable"; yang_parent_name = "route-counts"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Reachable::~Reachable()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Reachable::has_data() const
{
    return critical.is_set
	|| high.is_set
	|| low.is_set
	|| medium.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Reachable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(critical.yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(low.yfilter)
	|| ydk::is_set(medium.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Reachable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reachable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Reachable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.yfilter)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());
    if (medium.is_set || is_set(medium.yfilter)) leaf_name_data.push_back(medium.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Reachable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Reachable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Reachable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "critical")
    {
        critical = value;
        critical.value_namespace = name_space;
        critical.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "medium")
    {
        medium = value;
        medium.value_namespace = name_space;
        medium.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Reachable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "critical")
    {
        critical.yfilter = yfilter;
    }
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
    if(value_path == "medium")
    {
        medium.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Reachable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical" || name == "high" || name == "low" || name == "medium")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Touched::Touched()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    low{YType::uint32, "low"},
    medium{YType::uint32, "medium"}
{

    yang_name = "touched"; yang_parent_name = "route-counts"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Touched::~Touched()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Touched::has_data() const
{
    return critical.is_set
	|| high.is_set
	|| low.is_set
	|| medium.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Touched::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(critical.yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(low.yfilter)
	|| ydk::is_set(medium.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Touched::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "touched";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Touched::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.yfilter)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());
    if (medium.is_set || is_set(medium.yfilter)) leaf_name_data.push_back(medium.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Touched::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Touched::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Touched::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "critical")
    {
        critical = value;
        critical.value_namespace = name_space;
        critical.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "medium")
    {
        medium = value;
        medium.value_namespace = name_space;
        medium.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Touched::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "critical")
    {
        critical.yfilter = yfilter;
    }
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
    if(value_path == "medium")
    {
        medium.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Touched::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical" || name == "high" || name == "low" || name == "medium")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Unreachable::Unreachable()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    low{YType::uint32, "low"},
    medium{YType::uint32, "medium"}
{

    yang_name = "unreachable"; yang_parent_name = "route-counts"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Unreachable::~Unreachable()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Unreachable::has_data() const
{
    return critical.is_set
	|| high.is_set
	|| low.is_set
	|| medium.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Unreachable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(critical.yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(low.yfilter)
	|| ydk::is_set(medium.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Unreachable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unreachable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Unreachable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.yfilter)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());
    if (medium.is_set || is_set(medium.yfilter)) leaf_name_data.push_back(medium.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Unreachable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Unreachable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Unreachable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "critical")
    {
        critical = value;
        critical.value_namespace = name_space;
        critical.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "medium")
    {
        medium = value;
        medium.value_namespace = name_space;
        medium.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Unreachable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "critical")
    {
        critical.yfilter = yfilter;
    }
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
    if(value_path == "medium")
    {
        medium.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Unreachable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical" || name == "high" || name == "low" || name == "medium")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::SptCalculationStatistics()
    :
    duration(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::Duration>())
	,node_counts(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::NodeCounts>())
{
    duration->parent = this;
    node_counts->parent = this;

    yang_name = "spt-calculation-statistics"; yang_parent_name = "log-entry"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::~SptCalculationStatistics()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::has_data() const
{
    return (duration !=  nullptr && duration->has_data())
	|| (node_counts !=  nullptr && node_counts->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::has_operation() const
{
    return is_set(yfilter)
	|| (duration !=  nullptr && duration->has_operation())
	|| (node_counts !=  nullptr && node_counts->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spt-calculation-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "duration")
    {
        if(duration == nullptr)
        {
            duration = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::Duration>();
        }
        return duration;
    }

    if(child_yang_name == "node-counts")
    {
        if(node_counts == nullptr)
        {
            node_counts = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::NodeCounts>();
        }
        return node_counts;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(duration != nullptr)
    {
        children["duration"] = duration;
    }

    if(node_counts != nullptr)
    {
        children["node-counts"] = node_counts;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "node-counts")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::Duration::Duration()
    :
    cpu_duration{YType::uint32, "cpu-duration"},
    real_duration{YType::uint32, "real-duration"}
{

    yang_name = "duration"; yang_parent_name = "spt-calculation-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::Duration::~Duration()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::Duration::has_data() const
{
    return cpu_duration.is_set
	|| real_duration.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::Duration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpu_duration.yfilter)
	|| ydk::is_set(real_duration.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::Duration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "duration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::Duration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu_duration.is_set || is_set(cpu_duration.yfilter)) leaf_name_data.push_back(cpu_duration.get_name_leafdata());
    if (real_duration.is_set || is_set(real_duration.yfilter)) leaf_name_data.push_back(real_duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::Duration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::Duration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::Duration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpu-duration")
    {
        cpu_duration = value;
        cpu_duration.value_namespace = name_space;
        cpu_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "real-duration")
    {
        real_duration = value;
        real_duration.value_namespace = name_space;
        real_duration.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::Duration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpu-duration")
    {
        cpu_duration.yfilter = yfilter;
    }
    if(value_path == "real-duration")
    {
        real_duration.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::Duration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu-duration" || name == "real-duration")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::NodeCounts::NodeCounts()
    :
    added{YType::uint32, "added"},
    deleted{YType::uint32, "deleted"},
    modified{YType::uint32, "modified"},
    reachable{YType::uint32, "reachable"},
    touched{YType::uint32, "touched"},
    unreachable{YType::uint32, "unreachable"}
{

    yang_name = "node-counts"; yang_parent_name = "spt-calculation-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::NodeCounts::~NodeCounts()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::NodeCounts::has_data() const
{
    return added.is_set
	|| deleted.is_set
	|| modified.is_set
	|| reachable.is_set
	|| touched.is_set
	|| unreachable.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::NodeCounts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(added.yfilter)
	|| ydk::is_set(deleted.yfilter)
	|| ydk::is_set(modified.yfilter)
	|| ydk::is_set(reachable.yfilter)
	|| ydk::is_set(touched.yfilter)
	|| ydk::is_set(unreachable.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::NodeCounts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-counts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::NodeCounts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (added.is_set || is_set(added.yfilter)) leaf_name_data.push_back(added.get_name_leafdata());
    if (deleted.is_set || is_set(deleted.yfilter)) leaf_name_data.push_back(deleted.get_name_leafdata());
    if (modified.is_set || is_set(modified.yfilter)) leaf_name_data.push_back(modified.get_name_leafdata());
    if (reachable.is_set || is_set(reachable.yfilter)) leaf_name_data.push_back(reachable.get_name_leafdata());
    if (touched.is_set || is_set(touched.yfilter)) leaf_name_data.push_back(touched.get_name_leafdata());
    if (unreachable.is_set || is_set(unreachable.yfilter)) leaf_name_data.push_back(unreachable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::NodeCounts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::NodeCounts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::NodeCounts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "added")
    {
        added = value;
        added.value_namespace = name_space;
        added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deleted")
    {
        deleted = value;
        deleted.value_namespace = name_space;
        deleted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "modified")
    {
        modified = value;
        modified.value_namespace = name_space;
        modified.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reachable")
    {
        reachable = value;
        reachable.value_namespace = name_space;
        reachable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "touched")
    {
        touched = value;
        touched.value_namespace = name_space;
        touched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreachable")
    {
        unreachable = value;
        unreachable.value_namespace = name_space;
        unreachable.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::NodeCounts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "added")
    {
        added.yfilter = yfilter;
    }
    if(value_path == "deleted")
    {
        deleted.yfilter = yfilter;
    }
    if(value_path == "modified")
    {
        modified.yfilter = yfilter;
    }
    if(value_path == "reachable")
    {
        reachable.yfilter = yfilter;
    }
    if(value_path == "touched")
    {
        touched.yfilter = yfilter;
    }
    if(value_path == "unreachable")
    {
        unreachable.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::NodeCounts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "added" || name == "deleted" || name == "modified" || name == "reachable" || name == "touched" || name == "unreachable")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::Triggers()
    :
    first_trigger_lsp_id{YType::str, "first-trigger-lsp-id"},
    is_sr_uloop_calculation{YType::boolean, "is-sr-uloop-calculation"},
    is_sr_uloop_link_down{YType::boolean, "is-sr-uloop-link-down"},
    trigger_link{YType::str, "trigger-link"},
    trigger_next_hop_id{YType::str, "trigger-next-hop-id"},
    unique_trigger_count{YType::uint32, "unique-trigger-count"}
    	,
    trigger_prefix(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix>())
{
    trigger_prefix->parent = this;

    yang_name = "triggers"; yang_parent_name = "log-entry"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::~Triggers()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::has_data() const
{
    for (std::size_t index=0; index<trigger.size(); index++)
    {
        if(trigger[index]->has_data())
            return true;
    }
    return first_trigger_lsp_id.is_set
	|| is_sr_uloop_calculation.is_set
	|| is_sr_uloop_link_down.is_set
	|| trigger_link.is_set
	|| trigger_next_hop_id.is_set
	|| unique_trigger_count.is_set
	|| (trigger_prefix !=  nullptr && trigger_prefix->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::has_operation() const
{
    for (std::size_t index=0; index<trigger.size(); index++)
    {
        if(trigger[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(first_trigger_lsp_id.yfilter)
	|| ydk::is_set(is_sr_uloop_calculation.yfilter)
	|| ydk::is_set(is_sr_uloop_link_down.yfilter)
	|| ydk::is_set(trigger_link.yfilter)
	|| ydk::is_set(trigger_next_hop_id.yfilter)
	|| ydk::is_set(unique_trigger_count.yfilter)
	|| (trigger_prefix !=  nullptr && trigger_prefix->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "triggers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (first_trigger_lsp_id.is_set || is_set(first_trigger_lsp_id.yfilter)) leaf_name_data.push_back(first_trigger_lsp_id.get_name_leafdata());
    if (is_sr_uloop_calculation.is_set || is_set(is_sr_uloop_calculation.yfilter)) leaf_name_data.push_back(is_sr_uloop_calculation.get_name_leafdata());
    if (is_sr_uloop_link_down.is_set || is_set(is_sr_uloop_link_down.yfilter)) leaf_name_data.push_back(is_sr_uloop_link_down.get_name_leafdata());
    if (trigger_link.is_set || is_set(trigger_link.yfilter)) leaf_name_data.push_back(trigger_link.get_name_leafdata());
    if (trigger_next_hop_id.is_set || is_set(trigger_next_hop_id.yfilter)) leaf_name_data.push_back(trigger_next_hop_id.get_name_leafdata());
    if (unique_trigger_count.is_set || is_set(unique_trigger_count.yfilter)) leaf_name_data.push_back(unique_trigger_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trigger")
    {
        for(auto const & c : trigger)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::Trigger>();
        c->parent = this;
        trigger.push_back(c);
        return c;
    }

    if(child_yang_name == "trigger-prefix")
    {
        if(trigger_prefix == nullptr)
        {
            trigger_prefix = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix>();
        }
        return trigger_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : trigger)
    {
        children[c->get_segment_path()] = c;
    }

    if(trigger_prefix != nullptr)
    {
        children["trigger-prefix"] = trigger_prefix;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "first-trigger-lsp-id")
    {
        first_trigger_lsp_id = value;
        first_trigger_lsp_id.value_namespace = name_space;
        first_trigger_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-sr-uloop-calculation")
    {
        is_sr_uloop_calculation = value;
        is_sr_uloop_calculation.value_namespace = name_space;
        is_sr_uloop_calculation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-sr-uloop-link-down")
    {
        is_sr_uloop_link_down = value;
        is_sr_uloop_link_down.value_namespace = name_space;
        is_sr_uloop_link_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger-link")
    {
        trigger_link = value;
        trigger_link.value_namespace = name_space;
        trigger_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger-next-hop-id")
    {
        trigger_next_hop_id = value;
        trigger_next_hop_id.value_namespace = name_space;
        trigger_next_hop_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unique-trigger-count")
    {
        unique_trigger_count = value;
        unique_trigger_count.value_namespace = name_space;
        unique_trigger_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "first-trigger-lsp-id")
    {
        first_trigger_lsp_id.yfilter = yfilter;
    }
    if(value_path == "is-sr-uloop-calculation")
    {
        is_sr_uloop_calculation.yfilter = yfilter;
    }
    if(value_path == "is-sr-uloop-link-down")
    {
        is_sr_uloop_link_down.yfilter = yfilter;
    }
    if(value_path == "trigger-link")
    {
        trigger_link.yfilter = yfilter;
    }
    if(value_path == "trigger-next-hop-id")
    {
        trigger_next_hop_id.yfilter = yfilter;
    }
    if(value_path == "unique-trigger-count")
    {
        unique_trigger_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trigger" || name == "trigger-prefix" || name == "first-trigger-lsp-id" || name == "is-sr-uloop-calculation" || name == "is-sr-uloop-link-down" || name == "trigger-link" || name == "trigger-next-hop-id" || name == "unique-trigger-count")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::Trigger::Trigger()
    :
    entry{YType::enumeration, "entry"}
{

    yang_name = "trigger"; yang_parent_name = "triggers"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::Trigger::~Trigger()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::Trigger::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::Trigger::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::Trigger::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::Trigger::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::Trigger::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::Trigger::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::Trigger::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::Trigger::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::Trigger::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::TriggerPrefix()
    :
    af_name{YType::enumeration, "af-name"}
    	,
    ipv4(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv4>())
	,ipv6(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv6>())
{
    ipv4->parent = this;
    ipv6->parent = this;

    yang_name = "trigger-prefix"; yang_parent_name = "triggers"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::~TriggerPrefix()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::has_data() const
{
    return af_name.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6" || name == "af-name")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv4::Ipv4()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "ipv4"; yang_parent_name = "trigger-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv4::~Ipv4()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv4::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv6::Ipv6()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "ipv6"; yang_parent_name = "trigger-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv6::~Ipv6()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv6::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::TeAdjacencyLog()
{

    yang_name = "te-adjacency-log"; yang_parent_name = "topology-level"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::~TeAdjacencyLog()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::has_data() const
{
    for (std::size_t index=0; index<log_entry.size(); index++)
    {
        if(log_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::has_operation() const
{
    for (std::size_t index=0; index<log_entry.size(); index++)
    {
        if(log_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-adjacency-log";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-entry")
    {
        for(auto const & c : log_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry>();
        c->parent = this;
        log_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : log_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-entry")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::LogEntry()
    :
    log_interface{YType::str, "log-interface"},
    neighbor_ip_address{YType::str, "neighbor-ip-address"},
    status{YType::boolean, "status"},
    te_log_neighbor_system_id{YType::str, "te-log-neighbor-system-id"}
    	,
    generic_data(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData>())
{
    generic_data->parent = this;

    yang_name = "log-entry"; yang_parent_name = "te-adjacency-log"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::~LogEntry()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::has_data() const
{
    return log_interface.is_set
	|| neighbor_ip_address.is_set
	|| status.is_set
	|| te_log_neighbor_system_id.is_set
	|| (generic_data !=  nullptr && generic_data->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_interface.yfilter)
	|| ydk::is_set(neighbor_ip_address.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(te_log_neighbor_system_id.yfilter)
	|| (generic_data !=  nullptr && generic_data->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_interface.is_set || is_set(log_interface.yfilter)) leaf_name_data.push_back(log_interface.get_name_leafdata());
    if (neighbor_ip_address.is_set || is_set(neighbor_ip_address.yfilter)) leaf_name_data.push_back(neighbor_ip_address.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (te_log_neighbor_system_id.is_set || is_set(te_log_neighbor_system_id.yfilter)) leaf_name_data.push_back(te_log_neighbor_system_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generic-data")
    {
        if(generic_data == nullptr)
        {
            generic_data = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData>();
        }
        return generic_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(generic_data != nullptr)
    {
        children["generic-data"] = generic_data;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-interface")
    {
        log_interface = value;
        log_interface.value_namespace = name_space;
        log_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-ip-address")
    {
        neighbor_ip_address = value;
        neighbor_ip_address.value_namespace = name_space;
        neighbor_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-log-neighbor-system-id")
    {
        te_log_neighbor_system_id = value;
        te_log_neighbor_system_id.value_namespace = name_space;
        te_log_neighbor_system_id.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-interface")
    {
        log_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-ip-address")
    {
        neighbor_ip_address.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "te-log-neighbor-system-id")
    {
        te_log_neighbor_system_id.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generic-data" || name == "log-interface" || name == "neighbor-ip-address" || name == "status" || name == "te-log-neighbor-system-id")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::GenericData()
    :
    timestamp(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::Timestamp>())
{
    timestamp->parent = this;

    yang_name = "generic-data"; yang_parent_name = "log-entry"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::~GenericData()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::has_data() const
{
    return (timestamp !=  nullptr && timestamp->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::has_operation() const
{
    return is_set(yfilter)
	|| (timestamp !=  nullptr && timestamp->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "timestamp")
    {
        if(timestamp == nullptr)
        {
            timestamp = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::Timestamp>();
        }
        return timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(timestamp != nullptr)
    {
        children["timestamp"] = timestamp;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timestamp")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::Timestamp::Timestamp()
    :
    nano_seconds{YType::uint32, "nano-seconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "timestamp"; yang_parent_name = "generic-data"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::Timestamp::~Timestamp()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::Timestamp::has_data() const
{
    return nano_seconds.is_set
	|| seconds.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::Timestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nano_seconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::Timestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::Timestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::Timestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::Timestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::Timestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::Timestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::Timestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nano-seconds" || name == "seconds")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdvertisements()
    :
    te_adv_data_present{YType::boolean, "te-adv-data-present"},
    te_local_router_id{YType::str, "te-local-router-id"},
    te_system_id{YType::str, "te-system-id"}
    	,
    tepceadv(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::Tepceadv>())
{
    tepceadv->parent = this;

    yang_name = "te-advertisements"; yang_parent_name = "topology-level"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::~TeAdvertisements()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::has_data() const
{
    for (std::size_t index=0; index<te_adv.size(); index++)
    {
        if(te_adv[index]->has_data())
            return true;
    }
    return te_adv_data_present.is_set
	|| te_local_router_id.is_set
	|| te_system_id.is_set
	|| (tepceadv !=  nullptr && tepceadv->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::has_operation() const
{
    for (std::size_t index=0; index<te_adv.size(); index++)
    {
        if(te_adv[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(te_adv_data_present.yfilter)
	|| ydk::is_set(te_local_router_id.yfilter)
	|| ydk::is_set(te_system_id.yfilter)
	|| (tepceadv !=  nullptr && tepceadv->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-advertisements";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (te_adv_data_present.is_set || is_set(te_adv_data_present.yfilter)) leaf_name_data.push_back(te_adv_data_present.get_name_leafdata());
    if (te_local_router_id.is_set || is_set(te_local_router_id.yfilter)) leaf_name_data.push_back(te_local_router_id.get_name_leafdata());
    if (te_system_id.is_set || is_set(te_system_id.yfilter)) leaf_name_data.push_back(te_system_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-adv")
    {
        for(auto const & c : te_adv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv>();
        c->parent = this;
        te_adv.push_back(c);
        return c;
    }

    if(child_yang_name == "tepceadv")
    {
        if(tepceadv == nullptr)
        {
            tepceadv = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::Tepceadv>();
        }
        return tepceadv;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : te_adv)
    {
        children[c->get_segment_path()] = c;
    }

    if(tepceadv != nullptr)
    {
        children["tepceadv"] = tepceadv;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "te-adv-data-present")
    {
        te_adv_data_present = value;
        te_adv_data_present.value_namespace = name_space;
        te_adv_data_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-local-router-id")
    {
        te_local_router_id = value;
        te_local_router_id.value_namespace = name_space;
        te_local_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-system-id")
    {
        te_system_id = value;
        te_system_id.value_namespace = name_space;
        te_system_id.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "te-adv-data-present")
    {
        te_adv_data_present.yfilter = yfilter;
    }
    if(value_path == "te-local-router-id")
    {
        te_local_router_id.yfilter = yfilter;
    }
    if(value_path == "te-system-id")
    {
        te_system_id.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-adv" || name == "tepceadv" || name == "te-adv-data-present" || name == "te-local-router-id" || name == "te-system-id")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeAdv()
    :
    link_type{YType::enumeration, "link-type"},
    local_ip_address{YType::str, "local-ip-address"},
    te_affinity{YType::uint32, "te-affinity"},
    te_ext_admin_num{YType::uint32, "te-ext-admin-num"},
    te_metric{YType::uint32, "te-metric"},
    te_neighbor_ip_address{YType::str, "te-neighbor-ip-address"},
    te_neighbor_system_id{YType::str, "te-neighbor-system-id"},
    te_physical_link_bandwidth{YType::uint32, "te-physical-link-bandwidth"},
    te_reserved_link_bandwidth{YType::uint32, "te-reserved-link-bandwidth"},
    te_sub_tlv_data_present{YType::boolean, "te-sub-tlv-data-present"},
    te_subpool_reserved_link_bandwidth{YType::uint32, "te-subpool-reserved-link-bandwidth"}
{

    yang_name = "te-adv"; yang_parent_name = "te-advertisements"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::~TeAdv()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::has_data() const
{
    for (std::size_t index=0; index<te_ext_admin_sub.size(); index++)
    {
        if(te_ext_admin_sub[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<te_sub_tlv.size(); index++)
    {
        if(te_sub_tlv[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<te_subpool_transmitted_bandwidth.size(); index++)
    {
        if(te_subpool_transmitted_bandwidth[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<te_transmitted_bandwidth.size(); index++)
    {
        if(te_transmitted_bandwidth[index]->has_data())
            return true;
    }
    return link_type.is_set
	|| local_ip_address.is_set
	|| te_affinity.is_set
	|| te_ext_admin_num.is_set
	|| te_metric.is_set
	|| te_neighbor_ip_address.is_set
	|| te_neighbor_system_id.is_set
	|| te_physical_link_bandwidth.is_set
	|| te_reserved_link_bandwidth.is_set
	|| te_sub_tlv_data_present.is_set
	|| te_subpool_reserved_link_bandwidth.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::has_operation() const
{
    for (std::size_t index=0; index<te_ext_admin_sub.size(); index++)
    {
        if(te_ext_admin_sub[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<te_sub_tlv.size(); index++)
    {
        if(te_sub_tlv[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<te_subpool_transmitted_bandwidth.size(); index++)
    {
        if(te_subpool_transmitted_bandwidth[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<te_transmitted_bandwidth.size(); index++)
    {
        if(te_transmitted_bandwidth[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(link_type.yfilter)
	|| ydk::is_set(local_ip_address.yfilter)
	|| ydk::is_set(te_affinity.yfilter)
	|| ydk::is_set(te_ext_admin_num.yfilter)
	|| ydk::is_set(te_metric.yfilter)
	|| ydk::is_set(te_neighbor_ip_address.yfilter)
	|| ydk::is_set(te_neighbor_system_id.yfilter)
	|| ydk::is_set(te_physical_link_bandwidth.yfilter)
	|| ydk::is_set(te_reserved_link_bandwidth.yfilter)
	|| ydk::is_set(te_sub_tlv_data_present.yfilter)
	|| ydk::is_set(te_subpool_reserved_link_bandwidth.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-adv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_type.is_set || is_set(link_type.yfilter)) leaf_name_data.push_back(link_type.get_name_leafdata());
    if (local_ip_address.is_set || is_set(local_ip_address.yfilter)) leaf_name_data.push_back(local_ip_address.get_name_leafdata());
    if (te_affinity.is_set || is_set(te_affinity.yfilter)) leaf_name_data.push_back(te_affinity.get_name_leafdata());
    if (te_ext_admin_num.is_set || is_set(te_ext_admin_num.yfilter)) leaf_name_data.push_back(te_ext_admin_num.get_name_leafdata());
    if (te_metric.is_set || is_set(te_metric.yfilter)) leaf_name_data.push_back(te_metric.get_name_leafdata());
    if (te_neighbor_ip_address.is_set || is_set(te_neighbor_ip_address.yfilter)) leaf_name_data.push_back(te_neighbor_ip_address.get_name_leafdata());
    if (te_neighbor_system_id.is_set || is_set(te_neighbor_system_id.yfilter)) leaf_name_data.push_back(te_neighbor_system_id.get_name_leafdata());
    if (te_physical_link_bandwidth.is_set || is_set(te_physical_link_bandwidth.yfilter)) leaf_name_data.push_back(te_physical_link_bandwidth.get_name_leafdata());
    if (te_reserved_link_bandwidth.is_set || is_set(te_reserved_link_bandwidth.yfilter)) leaf_name_data.push_back(te_reserved_link_bandwidth.get_name_leafdata());
    if (te_sub_tlv_data_present.is_set || is_set(te_sub_tlv_data_present.yfilter)) leaf_name_data.push_back(te_sub_tlv_data_present.get_name_leafdata());
    if (te_subpool_reserved_link_bandwidth.is_set || is_set(te_subpool_reserved_link_bandwidth.yfilter)) leaf_name_data.push_back(te_subpool_reserved_link_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-ext-admin-sub")
    {
        for(auto const & c : te_ext_admin_sub)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeExtAdminSub>();
        c->parent = this;
        te_ext_admin_sub.push_back(c);
        return c;
    }

    if(child_yang_name == "te-sub-tlv")
    {
        for(auto const & c : te_sub_tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubTlv>();
        c->parent = this;
        te_sub_tlv.push_back(c);
        return c;
    }

    if(child_yang_name == "te-subpool-transmitted-bandwidth")
    {
        for(auto const & c : te_subpool_transmitted_bandwidth)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubpoolTransmittedBandwidth>();
        c->parent = this;
        te_subpool_transmitted_bandwidth.push_back(c);
        return c;
    }

    if(child_yang_name == "te-transmitted-bandwidth")
    {
        for(auto const & c : te_transmitted_bandwidth)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeTransmittedBandwidth>();
        c->parent = this;
        te_transmitted_bandwidth.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : te_ext_admin_sub)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : te_sub_tlv)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : te_subpool_transmitted_bandwidth)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : te_transmitted_bandwidth)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-type")
    {
        link_type = value;
        link_type.value_namespace = name_space;
        link_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-ip-address")
    {
        local_ip_address = value;
        local_ip_address.value_namespace = name_space;
        local_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-affinity")
    {
        te_affinity = value;
        te_affinity.value_namespace = name_space;
        te_affinity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-ext-admin-num")
    {
        te_ext_admin_num = value;
        te_ext_admin_num.value_namespace = name_space;
        te_ext_admin_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-metric")
    {
        te_metric = value;
        te_metric.value_namespace = name_space;
        te_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-neighbor-ip-address")
    {
        te_neighbor_ip_address = value;
        te_neighbor_ip_address.value_namespace = name_space;
        te_neighbor_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-neighbor-system-id")
    {
        te_neighbor_system_id = value;
        te_neighbor_system_id.value_namespace = name_space;
        te_neighbor_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-physical-link-bandwidth")
    {
        te_physical_link_bandwidth = value;
        te_physical_link_bandwidth.value_namespace = name_space;
        te_physical_link_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-reserved-link-bandwidth")
    {
        te_reserved_link_bandwidth = value;
        te_reserved_link_bandwidth.value_namespace = name_space;
        te_reserved_link_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-sub-tlv-data-present")
    {
        te_sub_tlv_data_present = value;
        te_sub_tlv_data_present.value_namespace = name_space;
        te_sub_tlv_data_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-subpool-reserved-link-bandwidth")
    {
        te_subpool_reserved_link_bandwidth = value;
        te_subpool_reserved_link_bandwidth.value_namespace = name_space;
        te_subpool_reserved_link_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-type")
    {
        link_type.yfilter = yfilter;
    }
    if(value_path == "local-ip-address")
    {
        local_ip_address.yfilter = yfilter;
    }
    if(value_path == "te-affinity")
    {
        te_affinity.yfilter = yfilter;
    }
    if(value_path == "te-ext-admin-num")
    {
        te_ext_admin_num.yfilter = yfilter;
    }
    if(value_path == "te-metric")
    {
        te_metric.yfilter = yfilter;
    }
    if(value_path == "te-neighbor-ip-address")
    {
        te_neighbor_ip_address.yfilter = yfilter;
    }
    if(value_path == "te-neighbor-system-id")
    {
        te_neighbor_system_id.yfilter = yfilter;
    }
    if(value_path == "te-physical-link-bandwidth")
    {
        te_physical_link_bandwidth.yfilter = yfilter;
    }
    if(value_path == "te-reserved-link-bandwidth")
    {
        te_reserved_link_bandwidth.yfilter = yfilter;
    }
    if(value_path == "te-sub-tlv-data-present")
    {
        te_sub_tlv_data_present.yfilter = yfilter;
    }
    if(value_path == "te-subpool-reserved-link-bandwidth")
    {
        te_subpool_reserved_link_bandwidth.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-ext-admin-sub" || name == "te-sub-tlv" || name == "te-subpool-transmitted-bandwidth" || name == "te-transmitted-bandwidth" || name == "link-type" || name == "local-ip-address" || name == "te-affinity" || name == "te-ext-admin-num" || name == "te-metric" || name == "te-neighbor-ip-address" || name == "te-neighbor-system-id" || name == "te-physical-link-bandwidth" || name == "te-reserved-link-bandwidth" || name == "te-sub-tlv-data-present" || name == "te-subpool-reserved-link-bandwidth")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeExtAdminSub::TeExtAdminSub()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "te-ext-admin-sub"; yang_parent_name = "te-adv"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeExtAdminSub::~TeExtAdminSub()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeExtAdminSub::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeExtAdminSub::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeExtAdminSub::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-ext-admin-sub";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeExtAdminSub::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeExtAdminSub::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeExtAdminSub::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeExtAdminSub::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeExtAdminSub::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeExtAdminSub::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubTlv::TeSubTlv()
    :
    te_sub_tlv_length{YType::uint16, "te-sub-tlv-length"},
    te_sub_tlv_type{YType::uint16, "te-sub-tlv-type"},
    te_sub_tlv_value{YType::str, "te-sub-tlv-value"}
{

    yang_name = "te-sub-tlv"; yang_parent_name = "te-adv"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubTlv::~TeSubTlv()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubTlv::has_data() const
{
    return te_sub_tlv_length.is_set
	|| te_sub_tlv_type.is_set
	|| te_sub_tlv_value.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(te_sub_tlv_length.yfilter)
	|| ydk::is_set(te_sub_tlv_type.yfilter)
	|| ydk::is_set(te_sub_tlv_value.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-sub-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (te_sub_tlv_length.is_set || is_set(te_sub_tlv_length.yfilter)) leaf_name_data.push_back(te_sub_tlv_length.get_name_leafdata());
    if (te_sub_tlv_type.is_set || is_set(te_sub_tlv_type.yfilter)) leaf_name_data.push_back(te_sub_tlv_type.get_name_leafdata());
    if (te_sub_tlv_value.is_set || is_set(te_sub_tlv_value.yfilter)) leaf_name_data.push_back(te_sub_tlv_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "te-sub-tlv-length")
    {
        te_sub_tlv_length = value;
        te_sub_tlv_length.value_namespace = name_space;
        te_sub_tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-sub-tlv-type")
    {
        te_sub_tlv_type = value;
        te_sub_tlv_type.value_namespace = name_space;
        te_sub_tlv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-sub-tlv-value")
    {
        te_sub_tlv_value = value;
        te_sub_tlv_value.value_namespace = name_space;
        te_sub_tlv_value.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "te-sub-tlv-length")
    {
        te_sub_tlv_length.yfilter = yfilter;
    }
    if(value_path == "te-sub-tlv-type")
    {
        te_sub_tlv_type.yfilter = yfilter;
    }
    if(value_path == "te-sub-tlv-value")
    {
        te_sub_tlv_value.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-sub-tlv-length" || name == "te-sub-tlv-type" || name == "te-sub-tlv-value")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubpoolTransmittedBandwidth::TeSubpoolTransmittedBandwidth()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "te-subpool-transmitted-bandwidth"; yang_parent_name = "te-adv"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubpoolTransmittedBandwidth::~TeSubpoolTransmittedBandwidth()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubpoolTransmittedBandwidth::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubpoolTransmittedBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubpoolTransmittedBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-subpool-transmitted-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubpoolTransmittedBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubpoolTransmittedBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubpoolTransmittedBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubpoolTransmittedBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubpoolTransmittedBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubpoolTransmittedBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeTransmittedBandwidth::TeTransmittedBandwidth()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "te-transmitted-bandwidth"; yang_parent_name = "te-adv"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeTransmittedBandwidth::~TeTransmittedBandwidth()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeTransmittedBandwidth::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeTransmittedBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeTransmittedBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-transmitted-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeTransmittedBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeTransmittedBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeTransmittedBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeTransmittedBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeTransmittedBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeTransmittedBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::Tepceadv::Tepceadv()
    :
    pce_address_ipv4{YType::str, "pce-address-ipv4"},
    pce_adv_data_present{YType::boolean, "pce-adv-data-present"},
    pce_flooding_scope{YType::enumeration, "pce-flooding-scope"},
    pce_path_scope_bits{YType::uint8, "pce-path-scope-bits"},
    pce_path_scope_prefs{YType::uint16, "pce-path-scope-prefs"}
{

    yang_name = "tepceadv"; yang_parent_name = "te-advertisements"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::Tepceadv::~Tepceadv()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::Tepceadv::has_data() const
{
    return pce_address_ipv4.is_set
	|| pce_adv_data_present.is_set
	|| pce_flooding_scope.is_set
	|| pce_path_scope_bits.is_set
	|| pce_path_scope_prefs.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::Tepceadv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pce_address_ipv4.yfilter)
	|| ydk::is_set(pce_adv_data_present.yfilter)
	|| ydk::is_set(pce_flooding_scope.yfilter)
	|| ydk::is_set(pce_path_scope_bits.yfilter)
	|| ydk::is_set(pce_path_scope_prefs.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::Tepceadv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tepceadv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::Tepceadv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pce_address_ipv4.is_set || is_set(pce_address_ipv4.yfilter)) leaf_name_data.push_back(pce_address_ipv4.get_name_leafdata());
    if (pce_adv_data_present.is_set || is_set(pce_adv_data_present.yfilter)) leaf_name_data.push_back(pce_adv_data_present.get_name_leafdata());
    if (pce_flooding_scope.is_set || is_set(pce_flooding_scope.yfilter)) leaf_name_data.push_back(pce_flooding_scope.get_name_leafdata());
    if (pce_path_scope_bits.is_set || is_set(pce_path_scope_bits.yfilter)) leaf_name_data.push_back(pce_path_scope_bits.get_name_leafdata());
    if (pce_path_scope_prefs.is_set || is_set(pce_path_scope_prefs.yfilter)) leaf_name_data.push_back(pce_path_scope_prefs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::Tepceadv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::Tepceadv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::Tepceadv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pce-address-ipv4")
    {
        pce_address_ipv4 = value;
        pce_address_ipv4.value_namespace = name_space;
        pce_address_ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-adv-data-present")
    {
        pce_adv_data_present = value;
        pce_adv_data_present.value_namespace = name_space;
        pce_adv_data_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-flooding-scope")
    {
        pce_flooding_scope = value;
        pce_flooding_scope.value_namespace = name_space;
        pce_flooding_scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-path-scope-bits")
    {
        pce_path_scope_bits = value;
        pce_path_scope_bits.value_namespace = name_space;
        pce_path_scope_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-path-scope-prefs")
    {
        pce_path_scope_prefs = value;
        pce_path_scope_prefs.value_namespace = name_space;
        pce_path_scope_prefs.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::Tepceadv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pce-address-ipv4")
    {
        pce_address_ipv4.yfilter = yfilter;
    }
    if(value_path == "pce-adv-data-present")
    {
        pce_adv_data_present.yfilter = yfilter;
    }
    if(value_path == "pce-flooding-scope")
    {
        pce_flooding_scope.yfilter = yfilter;
    }
    if(value_path == "pce-path-scope-bits")
    {
        pce_path_scope_bits.yfilter = yfilter;
    }
    if(value_path == "pce-path-scope-prefs")
    {
        pce_path_scope_prefs.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::Tepceadv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pce-address-ipv4" || name == "pce-adv-data-present" || name == "pce-flooding-scope" || name == "pce-path-scope-bits" || name == "pce-path-scope-prefs")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::TeTunnels()
{

    yang_name = "te-tunnels"; yang_parent_name = "topology-level"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::~TeTunnels()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::has_data() const
{
    for (std::size_t index=0; index<te_tunnel.size(); index++)
    {
        if(te_tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::has_operation() const
{
    for (std::size_t index=0; index<te_tunnel.size(); index++)
    {
        if(te_tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-tunnel")
    {
        for(auto const & c : te_tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::TeTunnel>();
        c->parent = this;
        te_tunnel.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : te_tunnel)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-tunnel")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::TeTunnel::TeTunnel()
    :
    interface_name{YType::str, "interface-name"},
    system_id{YType::str, "system-id"},
    te_bandwidth{YType::uint32, "te-bandwidth"},
    te_checkpoint_object_id{YType::uint32, "te-checkpoint-object-id"},
    te_interface{YType::str, "te-interface"},
    te_mode_type{YType::enumeration, "te-mode-type"},
    te_next_hop_ip_address{YType::str, "te-next-hop-ip-address"},
    te_segment_routing_enabled{YType::boolean, "te-segment-routing-enabled"},
    te_segment_routing_exclude{YType::boolean, "te-segment-routing-exclude"},
    te_segment_routing_strict_spf{YType::boolean, "te-segment-routing-strict-spf"},
    te_system_id{YType::str, "te-system-id"},
    teigp_metric{YType::int32, "teigp-metric"},
    teipv4aa_enabled{YType::boolean, "teipv4aa-enabled"},
    teipv4fa_enabled{YType::boolean, "teipv4fa-enabled"},
    teipv6aa_enabled{YType::boolean, "teipv6aa-enabled"},
    teipv6fa_enabled{YType::boolean, "teipv6fa-enabled"}
{

    yang_name = "te-tunnel"; yang_parent_name = "te-tunnels"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::TeTunnel::~TeTunnel()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::TeTunnel::has_data() const
{
    return interface_name.is_set
	|| system_id.is_set
	|| te_bandwidth.is_set
	|| te_checkpoint_object_id.is_set
	|| te_interface.is_set
	|| te_mode_type.is_set
	|| te_next_hop_ip_address.is_set
	|| te_segment_routing_enabled.is_set
	|| te_segment_routing_exclude.is_set
	|| te_segment_routing_strict_spf.is_set
	|| te_system_id.is_set
	|| teigp_metric.is_set
	|| teipv4aa_enabled.is_set
	|| teipv4fa_enabled.is_set
	|| teipv6aa_enabled.is_set
	|| teipv6fa_enabled.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::TeTunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(te_bandwidth.yfilter)
	|| ydk::is_set(te_checkpoint_object_id.yfilter)
	|| ydk::is_set(te_interface.yfilter)
	|| ydk::is_set(te_mode_type.yfilter)
	|| ydk::is_set(te_next_hop_ip_address.yfilter)
	|| ydk::is_set(te_segment_routing_enabled.yfilter)
	|| ydk::is_set(te_segment_routing_exclude.yfilter)
	|| ydk::is_set(te_segment_routing_strict_spf.yfilter)
	|| ydk::is_set(te_system_id.yfilter)
	|| ydk::is_set(teigp_metric.yfilter)
	|| ydk::is_set(teipv4aa_enabled.yfilter)
	|| ydk::is_set(teipv4fa_enabled.yfilter)
	|| ydk::is_set(teipv6aa_enabled.yfilter)
	|| ydk::is_set(teipv6fa_enabled.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::TeTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::TeTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (te_bandwidth.is_set || is_set(te_bandwidth.yfilter)) leaf_name_data.push_back(te_bandwidth.get_name_leafdata());
    if (te_checkpoint_object_id.is_set || is_set(te_checkpoint_object_id.yfilter)) leaf_name_data.push_back(te_checkpoint_object_id.get_name_leafdata());
    if (te_interface.is_set || is_set(te_interface.yfilter)) leaf_name_data.push_back(te_interface.get_name_leafdata());
    if (te_mode_type.is_set || is_set(te_mode_type.yfilter)) leaf_name_data.push_back(te_mode_type.get_name_leafdata());
    if (te_next_hop_ip_address.is_set || is_set(te_next_hop_ip_address.yfilter)) leaf_name_data.push_back(te_next_hop_ip_address.get_name_leafdata());
    if (te_segment_routing_enabled.is_set || is_set(te_segment_routing_enabled.yfilter)) leaf_name_data.push_back(te_segment_routing_enabled.get_name_leafdata());
    if (te_segment_routing_exclude.is_set || is_set(te_segment_routing_exclude.yfilter)) leaf_name_data.push_back(te_segment_routing_exclude.get_name_leafdata());
    if (te_segment_routing_strict_spf.is_set || is_set(te_segment_routing_strict_spf.yfilter)) leaf_name_data.push_back(te_segment_routing_strict_spf.get_name_leafdata());
    if (te_system_id.is_set || is_set(te_system_id.yfilter)) leaf_name_data.push_back(te_system_id.get_name_leafdata());
    if (teigp_metric.is_set || is_set(teigp_metric.yfilter)) leaf_name_data.push_back(teigp_metric.get_name_leafdata());
    if (teipv4aa_enabled.is_set || is_set(teipv4aa_enabled.yfilter)) leaf_name_data.push_back(teipv4aa_enabled.get_name_leafdata());
    if (teipv4fa_enabled.is_set || is_set(teipv4fa_enabled.yfilter)) leaf_name_data.push_back(teipv4fa_enabled.get_name_leafdata());
    if (teipv6aa_enabled.is_set || is_set(teipv6aa_enabled.yfilter)) leaf_name_data.push_back(teipv6aa_enabled.get_name_leafdata());
    if (teipv6fa_enabled.is_set || is_set(teipv6fa_enabled.yfilter)) leaf_name_data.push_back(teipv6fa_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::TeTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::TeTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::TeTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-bandwidth")
    {
        te_bandwidth = value;
        te_bandwidth.value_namespace = name_space;
        te_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-checkpoint-object-id")
    {
        te_checkpoint_object_id = value;
        te_checkpoint_object_id.value_namespace = name_space;
        te_checkpoint_object_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-interface")
    {
        te_interface = value;
        te_interface.value_namespace = name_space;
        te_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-mode-type")
    {
        te_mode_type = value;
        te_mode_type.value_namespace = name_space;
        te_mode_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-next-hop-ip-address")
    {
        te_next_hop_ip_address = value;
        te_next_hop_ip_address.value_namespace = name_space;
        te_next_hop_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-segment-routing-enabled")
    {
        te_segment_routing_enabled = value;
        te_segment_routing_enabled.value_namespace = name_space;
        te_segment_routing_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-segment-routing-exclude")
    {
        te_segment_routing_exclude = value;
        te_segment_routing_exclude.value_namespace = name_space;
        te_segment_routing_exclude.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-segment-routing-strict-spf")
    {
        te_segment_routing_strict_spf = value;
        te_segment_routing_strict_spf.value_namespace = name_space;
        te_segment_routing_strict_spf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-system-id")
    {
        te_system_id = value;
        te_system_id.value_namespace = name_space;
        te_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "teigp-metric")
    {
        teigp_metric = value;
        teigp_metric.value_namespace = name_space;
        teigp_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "teipv4aa-enabled")
    {
        teipv4aa_enabled = value;
        teipv4aa_enabled.value_namespace = name_space;
        teipv4aa_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "teipv4fa-enabled")
    {
        teipv4fa_enabled = value;
        teipv4fa_enabled.value_namespace = name_space;
        teipv4fa_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "teipv6aa-enabled")
    {
        teipv6aa_enabled = value;
        teipv6aa_enabled.value_namespace = name_space;
        teipv6aa_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "teipv6fa-enabled")
    {
        teipv6fa_enabled = value;
        teipv6fa_enabled.value_namespace = name_space;
        teipv6fa_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::TeTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "te-bandwidth")
    {
        te_bandwidth.yfilter = yfilter;
    }
    if(value_path == "te-checkpoint-object-id")
    {
        te_checkpoint_object_id.yfilter = yfilter;
    }
    if(value_path == "te-interface")
    {
        te_interface.yfilter = yfilter;
    }
    if(value_path == "te-mode-type")
    {
        te_mode_type.yfilter = yfilter;
    }
    if(value_path == "te-next-hop-ip-address")
    {
        te_next_hop_ip_address.yfilter = yfilter;
    }
    if(value_path == "te-segment-routing-enabled")
    {
        te_segment_routing_enabled.yfilter = yfilter;
    }
    if(value_path == "te-segment-routing-exclude")
    {
        te_segment_routing_exclude.yfilter = yfilter;
    }
    if(value_path == "te-segment-routing-strict-spf")
    {
        te_segment_routing_strict_spf.yfilter = yfilter;
    }
    if(value_path == "te-system-id")
    {
        te_system_id.yfilter = yfilter;
    }
    if(value_path == "teigp-metric")
    {
        teigp_metric.yfilter = yfilter;
    }
    if(value_path == "teipv4aa-enabled")
    {
        teipv4aa_enabled.yfilter = yfilter;
    }
    if(value_path == "teipv4fa-enabled")
    {
        teipv4fa_enabled.yfilter = yfilter;
    }
    if(value_path == "teipv6aa-enabled")
    {
        teipv6aa_enabled.yfilter = yfilter;
    }
    if(value_path == "teipv6fa-enabled")
    {
        teipv6fa_enabled.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::TeTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "system-id" || name == "te-bandwidth" || name == "te-checkpoint-object-id" || name == "te-interface" || name == "te-mode-type" || name == "te-next-hop-ip-address" || name == "te-segment-routing-enabled" || name == "te-segment-routing-exclude" || name == "te-segment-routing-strict-spf" || name == "te-system-id" || name == "teigp-metric" || name == "teipv4aa-enabled" || name == "teipv4fa-enabled" || name == "teipv6aa-enabled" || name == "teipv6fa-enabled")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::TopologySummary()
    :
    pseudonode_node_count(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::PseudonodeNodeCount>())
	,router_node_count(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::RouterNodeCount>())
{
    pseudonode_node_count->parent = this;
    router_node_count->parent = this;

    yang_name = "topology-summary"; yang_parent_name = "topology-level"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::~TopologySummary()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::has_data() const
{
    return (pseudonode_node_count !=  nullptr && pseudonode_node_count->has_data())
	|| (router_node_count !=  nullptr && router_node_count->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::has_operation() const
{
    return is_set(yfilter)
	|| (pseudonode_node_count !=  nullptr && pseudonode_node_count->has_operation())
	|| (router_node_count !=  nullptr && router_node_count->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pseudonode-node-count")
    {
        if(pseudonode_node_count == nullptr)
        {
            pseudonode_node_count = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::PseudonodeNodeCount>();
        }
        return pseudonode_node_count;
    }

    if(child_yang_name == "router-node-count")
    {
        if(router_node_count == nullptr)
        {
            router_node_count = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::RouterNodeCount>();
        }
        return router_node_count;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pseudonode_node_count != nullptr)
    {
        children["pseudonode-node-count"] = pseudonode_node_count;
    }

    if(router_node_count != nullptr)
    {
        children["router-node-count"] = router_node_count;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pseudonode-node-count" || name == "router-node-count")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::PseudonodeNodeCount::PseudonodeNodeCount()
    :
    reachable_node_count{YType::uint32, "reachable-node-count"},
    unreachable_node_count{YType::uint32, "unreachable-node-count"},
    unreachable_participant_node_count{YType::uint32, "unreachable-participant-node-count"}
{

    yang_name = "pseudonode-node-count"; yang_parent_name = "topology-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::PseudonodeNodeCount::~PseudonodeNodeCount()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::PseudonodeNodeCount::has_data() const
{
    return reachable_node_count.is_set
	|| unreachable_node_count.is_set
	|| unreachable_participant_node_count.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::PseudonodeNodeCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reachable_node_count.yfilter)
	|| ydk::is_set(unreachable_node_count.yfilter)
	|| ydk::is_set(unreachable_participant_node_count.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::PseudonodeNodeCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudonode-node-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::PseudonodeNodeCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reachable_node_count.is_set || is_set(reachable_node_count.yfilter)) leaf_name_data.push_back(reachable_node_count.get_name_leafdata());
    if (unreachable_node_count.is_set || is_set(unreachable_node_count.yfilter)) leaf_name_data.push_back(unreachable_node_count.get_name_leafdata());
    if (unreachable_participant_node_count.is_set || is_set(unreachable_participant_node_count.yfilter)) leaf_name_data.push_back(unreachable_participant_node_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::PseudonodeNodeCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::PseudonodeNodeCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::PseudonodeNodeCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reachable-node-count")
    {
        reachable_node_count = value;
        reachable_node_count.value_namespace = name_space;
        reachable_node_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreachable-node-count")
    {
        unreachable_node_count = value;
        unreachable_node_count.value_namespace = name_space;
        unreachable_node_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreachable-participant-node-count")
    {
        unreachable_participant_node_count = value;
        unreachable_participant_node_count.value_namespace = name_space;
        unreachable_participant_node_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::PseudonodeNodeCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reachable-node-count")
    {
        reachable_node_count.yfilter = yfilter;
    }
    if(value_path == "unreachable-node-count")
    {
        unreachable_node_count.yfilter = yfilter;
    }
    if(value_path == "unreachable-participant-node-count")
    {
        unreachable_participant_node_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::PseudonodeNodeCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reachable-node-count" || name == "unreachable-node-count" || name == "unreachable-participant-node-count")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::RouterNodeCount::RouterNodeCount()
    :
    reachable_node_count{YType::uint32, "reachable-node-count"},
    unreachable_node_count{YType::uint32, "unreachable-node-count"},
    unreachable_participant_node_count{YType::uint32, "unreachable-participant-node-count"}
{

    yang_name = "router-node-count"; yang_parent_name = "topology-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::RouterNodeCount::~RouterNodeCount()
{
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::RouterNodeCount::has_data() const
{
    return reachable_node_count.is_set
	|| unreachable_node_count.is_set
	|| unreachable_participant_node_count.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::RouterNodeCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reachable_node_count.yfilter)
	|| ydk::is_set(unreachable_node_count.yfilter)
	|| ydk::is_set(unreachable_participant_node_count.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::RouterNodeCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-node-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::RouterNodeCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reachable_node_count.is_set || is_set(reachable_node_count.yfilter)) leaf_name_data.push_back(reachable_node_count.get_name_leafdata());
    if (unreachable_node_count.is_set || is_set(unreachable_node_count.yfilter)) leaf_name_data.push_back(unreachable_node_count.get_name_leafdata());
    if (unreachable_participant_node_count.is_set || is_set(unreachable_participant_node_count.yfilter)) leaf_name_data.push_back(unreachable_participant_node_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::RouterNodeCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::RouterNodeCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::RouterNodeCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reachable-node-count")
    {
        reachable_node_count = value;
        reachable_node_count.value_namespace = name_space;
        reachable_node_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreachable-node-count")
    {
        unreachable_node_count = value;
        unreachable_node_count.value_namespace = name_space;
        unreachable_node_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreachable-participant-node-count")
    {
        unreachable_participant_node_count = value;
        unreachable_participant_node_count.value_namespace = name_space;
        unreachable_participant_node_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::RouterNodeCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reachable-node-count")
    {
        reachable_node_count.yfilter = yfilter;
    }
    if(value_path == "unreachable-node-count")
    {
        unreachable_node_count.yfilter = yfilter;
    }
    if(value_path == "unreachable-participant-node-count")
    {
        unreachable_participant_node_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::RouterNodeCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reachable-node-count" || name == "unreachable-node-count" || name == "unreachable-participant-node-count")
        return true;
    return false;
}


}
}

