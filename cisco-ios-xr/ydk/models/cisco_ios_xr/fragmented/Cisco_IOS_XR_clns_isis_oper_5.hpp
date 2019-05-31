#ifndef _CISCO_IOS_XR_CLNS_ISIS_OPER_5_
#define _CISCO_IOS_XR_CLNS_ISIS_OPER_5_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_clns_isis_oper_2.hpp"
#include "Cisco_IOS_XR_clns_isis_oper_3.hpp"
#include "Cisco_IOS_XR_clns_isis_oper_4.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_clns_isis_oper {


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Modified : public ydk::Entity
{
    public:
        Modified();
        ~Modified();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf critical; //type: uint32
        ydk::YLeaf high; //type: uint32
        ydk::YLeaf medium; //type: uint32
        ydk::YLeaf low; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Modified


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Touched : public ydk::Entity
{
    public:
        Touched();
        ~Touched();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf critical; //type: uint32
        ydk::YLeaf high; //type: uint32
        ydk::YLeaf medium; //type: uint32
        ydk::YLeaf low; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Touched


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts : public ydk::Entity
{
    public:
        RouteCounts();
        ~RouteCounts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Unreachable; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Unreachable
        class Reachable; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Reachable
        class Added; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Added
        class Deleted; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Deleted
        class Modified; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Modified
        class Touched; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Touched

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Unreachable> unreachable;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Reachable> reachable;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Added> added;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Deleted> deleted;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Modified> modified;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Touched> touched;
        
}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Unreachable : public ydk::Entity
{
    public:
        Unreachable();
        ~Unreachable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf critical; //type: uint32
        ydk::YLeaf high; //type: uint32
        ydk::YLeaf medium; //type: uint32
        ydk::YLeaf low; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Unreachable


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Reachable : public ydk::Entity
{
    public:
        Reachable();
        ~Reachable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf critical; //type: uint32
        ydk::YLeaf high; //type: uint32
        ydk::YLeaf medium; //type: uint32
        ydk::YLeaf low; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Reachable


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Added : public ydk::Entity
{
    public:
        Added();
        ~Added();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf critical; //type: uint32
        ydk::YLeaf high; //type: uint32
        ydk::YLeaf medium; //type: uint32
        ydk::YLeaf low; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Added


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Deleted : public ydk::Entity
{
    public:
        Deleted();
        ~Deleted();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf critical; //type: uint32
        ydk::YLeaf high; //type: uint32
        ydk::YLeaf medium; //type: uint32
        ydk::YLeaf low; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Deleted


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Modified : public ydk::Entity
{
    public:
        Modified();
        ~Modified();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf critical; //type: uint32
        ydk::YLeaf high; //type: uint32
        ydk::YLeaf medium; //type: uint32
        ydk::YLeaf low; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Modified


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Touched : public ydk::Entity
{
    public:
        Touched();
        ~Touched();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf critical; //type: uint32
        ydk::YLeaf high; //type: uint32
        ydk::YLeaf medium; //type: uint32
        ydk::YLeaf low; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Touched


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RibBatchCounts : public ydk::Entity
{
    public:
        RibBatchCounts();
        ~RibBatchCounts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf critical; //type: uint32
        ydk::YLeaf high; //type: uint32
        ydk::YLeaf medium; //type: uint32
        ydk::YLeaf low; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RibBatchCounts


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels : public ydk::Entity
{
    public:
        TeTunnels();
        ~TeTunnels();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TeTunnel; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::TeTunnel

        ydk::YList te_tunnel;
        
}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::TeTunnel : public ydk::Entity
{
    public:
        TeTunnel();
        ~TeTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_id; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf te_system_id; //type: string
        ydk::YLeaf te_interface; //type: string
        ydk::YLeaf te_bandwidth; //type: uint32
        ydk::YLeaf teigp_metric; //type: int32
        ydk::YLeaf te_next_hop_ip_address; //type: string
        ydk::YLeaf te_mode_type; //type: IsisMetricMode
        ydk::YLeaf teipv4fa_enabled; //type: boolean
        ydk::YLeaf teipv6fa_enabled; //type: boolean
        ydk::YLeaf teipv4aa_enabled; //type: boolean
        ydk::YLeaf teipv6aa_enabled; //type: boolean
        ydk::YLeaf te_checkpoint_object_id; //type: uint32
        ydk::YLeaf te_segment_routing_enabled; //type: boolean
        ydk::YLeaf te_segment_routing_strict_spf; //type: boolean
        ydk::YLeaf te_segment_routing_exclude; //type: boolean

}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::TeTunnel


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies : public ydk::Entity
{
    public:
        Ipv4LinkTopologies();
        ~Ipv4LinkTopologies();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4LinkTopology; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology

        ydk::YList ipv4_link_topology;
        
}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology : public ydk::Entity
{
    public:
        Ipv4LinkTopology();
        ~Ipv4LinkTopology();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_id; //type: string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf is_participant; //type: boolean
        ydk::YLeaf is_overloaded; //type: boolean
        ydk::YLeaf is_attached; //type: boolean
        class ReachabilityStatus; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus
        class AdvertisedPrefixItemCounts; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::AdvertisedPrefixItemCounts

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus> reachability_status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::AdvertisedPrefixItemCounts> advertised_prefix_item_counts;
        
}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus : public ydk::Entity
{
    public:
        ReachabilityStatus();
        ~ReachabilityStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reachable_status; //type: IsisReachable
        class ReachableDetails; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails> reachable_details;
        
}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails : public ydk::Entity
{
    public:
        ReachableDetails();
        ~ReachableDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf root_distance; //type: uint32
        ydk::YLeaf multicast_root_distance; //type: uint32
        class Paths; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths
        class MulticastPath; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath
        class Parent; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Parent
        class Children; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Children

        ydk::YList paths;
        ydk::YList multicast_path;
        ydk::YList parent_;
        ydk::YList children_;
        
}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths : public ydk::Entity
{
    public:
        Paths();
        ~Paths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_id; //type: string
        ydk::YLeaf egress_interface; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_snpa; //type: string
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf tunnel_interface; //type: string
        ydk::YLeaf segment_routing_sid_value; //type: uint32
        ydk::YLeaf weight; //type: uint32
        ydk::YLeaf is_te_tunnel_interface; //type: boolean
        ydk::YLeaf is_sr_exclude_tunnel_interface; //type: boolean
        ydk::YLeaf outgoing_label; //type: uint32
        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup
        class UloopExplicit; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit
        class Nnh; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::Nnh

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup> frr_backup;
        ydk::YList uloop_explicit;
        ydk::YList nnh;
        
}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup : public ydk::Entity
{
    public:
        FrrBackup();
        ~FrrBackup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_id; //type: string
        ydk::YLeaf egress_interface; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf tunnel_egress_interface; //type: string
        ydk::YLeaf neighbor_snpa; //type: string
        ydk::YLeaf remote_lfa_system_id; //type: string
        ydk::YLeaf remote_lfa_router_id; //type: string
        ydk::YLeaf remote_lfa_system_pid; //type: string
        ydk::YLeaf remote_lfa_router_pid; //type: string
        ydk::YLeaf total_backup_distance; //type: uint32
        ydk::YLeaf segment_routing_sid_value; //type: uint32
        ydk::YLeaf num_sid; //type: uint32
        ydk::YLeaf backup_repair_list_size; //type: uint32
        ydk::YLeaf tilfa_computation; //type: IsisTilfaComputation
        ydk::YLeaf prefix_source_node_id; //type: string
        ydk::YLeaf is_downstream; //type: boolean
        ydk::YLeaf is_lc_disjoint; //type: boolean
        ydk::YLeaf is_node_protecting; //type: boolean
        ydk::YLeaf is_primary_path; //type: boolean
        ydk::YLeaf is_srlg_disjoint; //type: boolean
        ydk::YLeaf is_remote_lfa; //type: boolean
        ydk::YLeaf is_epcfrr_lfa; //type: boolean
        ydk::YLeaf is_strict_spflfa; //type: boolean
        ydk::YLeaf is_tunnel_requested; //type: boolean
        ydk::YLeaf weight; //type: uint32
        ydk::YLeaf outgoing_label; //type: uint32
        class SegmentRoutingSidValueEntry; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::SegmentRoutingSidValueEntry
        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair

        ydk::YList segment_routing_sid_value_entry;
        ydk::YList backup_repair;
        
}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::SegmentRoutingSidValueEntry : public ydk::Entity
{
    public:
        SegmentRoutingSidValueEntry();
        ~SegmentRoutingSidValueEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::SegmentRoutingSidValueEntry


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair : public ydk::Entity
{
    public:
        BackupRepair();
        ~BackupRepair();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_node_id; //type: string
        ydk::YLeaf repair_ipv4_addr; //type: string
        ydk::YLeaf repair_ipv6_addr; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32
        ydk::YLeaf repair_strict_spf_label; //type: uint32
        ydk::YLeaf repair_s_rv6sid; //type: string
        ydk::YLeaf repair_s_rv6_end_func; //type: uint16
        ydk::YLeaf repair_s_rv6_strict_spfsid; //type: string
        ydk::YLeaf repair_s_rv6_strict_spf_end_func; //type: uint16

}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit : public ydk::Entity
{
    public:
        UloopExplicit();
        ~UloopExplicit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_node_id; //type: string
        ydk::YLeaf repair_ipv4_addr; //type: string
        ydk::YLeaf repair_ipv6_addr; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32
        ydk::YLeaf repair_strict_spf_label; //type: uint32
        ydk::YLeaf repair_s_rv6sid; //type: string
        ydk::YLeaf repair_s_rv6_end_func; //type: uint16
        ydk::YLeaf repair_s_rv6_strict_spfsid; //type: string
        ydk::YLeaf repair_s_rv6_strict_spf_end_func; //type: uint16

}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::Nnh : public ydk::Entity
{
    public:
        Nnh();
        ~Nnh();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_id_set; //type: boolean
        ydk::YLeaf ipv4_set; //type: boolean
        ydk::YLeaf link_id; //type: uint32
        ydk::YLeaf ipv4_address; //type: string

}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::Nnh


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath : public ydk::Entity
{
    public:
        MulticastPath();
        ~MulticastPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_id; //type: string
        ydk::YLeaf egress_interface; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_snpa; //type: string
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf tunnel_interface; //type: string
        ydk::YLeaf segment_routing_sid_value; //type: uint32
        ydk::YLeaf weight; //type: uint32
        ydk::YLeaf is_te_tunnel_interface; //type: boolean
        ydk::YLeaf is_sr_exclude_tunnel_interface; //type: boolean
        ydk::YLeaf outgoing_label; //type: uint32
        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup
        class UloopExplicit; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit
        class Nnh; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::Nnh

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup> frr_backup;
        ydk::YList uloop_explicit;
        ydk::YList nnh;
        
}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup : public ydk::Entity
{
    public:
        FrrBackup();
        ~FrrBackup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_id; //type: string
        ydk::YLeaf egress_interface; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf tunnel_egress_interface; //type: string
        ydk::YLeaf neighbor_snpa; //type: string
        ydk::YLeaf remote_lfa_system_id; //type: string
        ydk::YLeaf remote_lfa_router_id; //type: string
        ydk::YLeaf remote_lfa_system_pid; //type: string
        ydk::YLeaf remote_lfa_router_pid; //type: string
        ydk::YLeaf total_backup_distance; //type: uint32
        ydk::YLeaf segment_routing_sid_value; //type: uint32
        ydk::YLeaf num_sid; //type: uint32
        ydk::YLeaf backup_repair_list_size; //type: uint32
        ydk::YLeaf tilfa_computation; //type: IsisTilfaComputation
        ydk::YLeaf prefix_source_node_id; //type: string
        ydk::YLeaf is_downstream; //type: boolean
        ydk::YLeaf is_lc_disjoint; //type: boolean
        ydk::YLeaf is_node_protecting; //type: boolean
        ydk::YLeaf is_primary_path; //type: boolean
        ydk::YLeaf is_srlg_disjoint; //type: boolean
        ydk::YLeaf is_remote_lfa; //type: boolean
        ydk::YLeaf is_epcfrr_lfa; //type: boolean
        ydk::YLeaf is_strict_spflfa; //type: boolean
        ydk::YLeaf is_tunnel_requested; //type: boolean
        ydk::YLeaf weight; //type: uint32
        ydk::YLeaf outgoing_label; //type: uint32
        class SegmentRoutingSidValueEntry; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry
        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair

        ydk::YList segment_routing_sid_value_entry;
        ydk::YList backup_repair;
        
}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry : public ydk::Entity
{
    public:
        SegmentRoutingSidValueEntry();
        ~SegmentRoutingSidValueEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair : public ydk::Entity
{
    public:
        BackupRepair();
        ~BackupRepair();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_node_id; //type: string
        ydk::YLeaf repair_ipv4_addr; //type: string
        ydk::YLeaf repair_ipv6_addr; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32
        ydk::YLeaf repair_strict_spf_label; //type: uint32
        ydk::YLeaf repair_s_rv6sid; //type: string
        ydk::YLeaf repair_s_rv6_end_func; //type: uint16
        ydk::YLeaf repair_s_rv6_strict_spfsid; //type: string
        ydk::YLeaf repair_s_rv6_strict_spf_end_func; //type: uint16

}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit : public ydk::Entity
{
    public:
        UloopExplicit();
        ~UloopExplicit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_node_id; //type: string
        ydk::YLeaf repair_ipv4_addr; //type: string
        ydk::YLeaf repair_ipv6_addr; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32
        ydk::YLeaf repair_strict_spf_label; //type: uint32
        ydk::YLeaf repair_s_rv6sid; //type: string
        ydk::YLeaf repair_s_rv6_end_func; //type: uint16
        ydk::YLeaf repair_s_rv6_strict_spfsid; //type: string
        ydk::YLeaf repair_s_rv6_strict_spf_end_func; //type: uint16

}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::Nnh : public ydk::Entity
{
    public:
        Nnh();
        ~Nnh();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_id_set; //type: boolean
        ydk::YLeaf ipv4_set; //type: boolean
        ydk::YLeaf link_id; //type: uint32
        ydk::YLeaf ipv4_address; //type: string

}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::Nnh


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Parent : public ydk::Entity
{
    public:
        Parent();
        ~Parent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_id; //type: string
        ydk::YLeaf intermediate_pseudonode; //type: string

}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Parent


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Children : public ydk::Entity
{
    public:
        Children();
        ~Children();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_id; //type: string
        ydk::YLeaf intermediate_pseudonode; //type: string

}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Children


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::AdvertisedPrefixItemCounts : public ydk::Entity
{
    public:
        AdvertisedPrefixItemCounts();
        ~AdvertisedPrefixItemCounts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf critical; //type: uint32
        ydk::YLeaf high; //type: uint32
        ydk::YLeaf medium; //type: uint32
        ydk::YLeaf low; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::AdvertisedPrefixItemCounts


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary : public ydk::Entity
{
    public:
        TopologySummary();
        ~TopologySummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RouterNodeCount; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::RouterNodeCount
        class PseudonodeNodeCount; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::PseudonodeNodeCount

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::RouterNodeCount> router_node_count;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::PseudonodeNodeCount> pseudonode_node_count;
        
}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::RouterNodeCount : public ydk::Entity
{
    public:
        RouterNodeCount();
        ~RouterNodeCount();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reachable_node_count; //type: uint32
        ydk::YLeaf unreachable_node_count; //type: uint32
        ydk::YLeaf unreachable_participant_node_count; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::RouterNodeCount


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::PseudonodeNodeCount : public ydk::Entity
{
    public:
        PseudonodeNodeCount();
        ~PseudonodeNodeCount();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reachable_node_count; //type: uint32
        ydk::YLeaf unreachable_node_count; //type: uint32
        ydk::YLeaf unreachable_participant_node_count; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::PseudonodeNodeCount


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies : public ydk::Entity
{
    public:
        Ipv6LinkTopologies();
        ~Ipv6LinkTopologies();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv6LinkTopology; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology

        ydk::YList ipv6_link_topology;
        
}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology : public ydk::Entity
{
    public:
        Ipv6LinkTopology();
        ~Ipv6LinkTopology();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_id; //type: string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf is_participant; //type: boolean
        ydk::YLeaf is_overloaded; //type: boolean
        ydk::YLeaf is_attached; //type: boolean
        class ReachabilityStatus; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus
        class AdvertisedPrefixItemCounts; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::AdvertisedPrefixItemCounts

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus> reachability_status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::AdvertisedPrefixItemCounts> advertised_prefix_item_counts;
        
}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus : public ydk::Entity
{
    public:
        ReachabilityStatus();
        ~ReachabilityStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reachable_status; //type: IsisReachable
        class ReachableDetails; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails> reachable_details;
        
}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails : public ydk::Entity
{
    public:
        ReachableDetails();
        ~ReachableDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf root_distance; //type: uint32
        ydk::YLeaf multicast_root_distance; //type: uint32
        class Paths; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths
        class MulticastPath; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath
        class Parent; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Parent
        class Children; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Children

        ydk::YList paths;
        ydk::YList multicast_path;
        ydk::YList parent_;
        ydk::YList children_;
        
}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths : public ydk::Entity
{
    public:
        Paths();
        ~Paths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_id; //type: string
        ydk::YLeaf egress_interface; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_snpa; //type: string
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf tunnel_interface; //type: string
        ydk::YLeaf segment_routing_sid_value; //type: uint32
        ydk::YLeaf weight; //type: uint32
        ydk::YLeaf is_te_tunnel_interface; //type: boolean
        ydk::YLeaf is_sr_exclude_tunnel_interface; //type: boolean
        ydk::YLeaf is_s_rv6; //type: boolean
        ydk::YLeaf outgoing_label; //type: uint32
        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup
        class UloopExplicit; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit
        class Nnh; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::Nnh

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup> frr_backup;
        ydk::YList uloop_explicit;
        ydk::YList nnh;
        
}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup : public ydk::Entity
{
    public:
        FrrBackup();
        ~FrrBackup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_id; //type: string
        ydk::YLeaf egress_interface; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf tunnel_egress_interface; //type: string
        ydk::YLeaf neighbor_snpa; //type: string
        ydk::YLeaf remote_lfa_system_id; //type: string
        ydk::YLeaf remote_lfa_router_id; //type: string
        ydk::YLeaf remote_lfa_system_pid; //type: string
        ydk::YLeaf remote_lfa_router_pid; //type: string
        ydk::YLeaf total_backup_distance; //type: uint32
        ydk::YLeaf segment_routing_sid_value; //type: uint32
        ydk::YLeaf num_sid; //type: uint32
        ydk::YLeaf backup_repair_list_size; //type: uint32
        ydk::YLeaf tilfa_computation; //type: IsisTilfaComputation
        ydk::YLeaf prefix_source_node_id; //type: string
        ydk::YLeaf is_downstream; //type: boolean
        ydk::YLeaf is_lc_disjoint; //type: boolean
        ydk::YLeaf is_node_protecting; //type: boolean
        ydk::YLeaf is_primary_path; //type: boolean
        ydk::YLeaf is_srlg_disjoint; //type: boolean
        ydk::YLeaf is_remote_lfa; //type: boolean
        ydk::YLeaf is_epcfrr_lfa; //type: boolean
        ydk::YLeaf is_strict_spflfa; //type: boolean
        ydk::YLeaf is_s_rv6; //type: boolean
        ydk::YLeaf is_tunnel_requested; //type: boolean
        ydk::YLeaf weight; //type: uint32
        ydk::YLeaf outgoing_label; //type: uint32
        class SegmentRoutingSidValueEntry; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::SegmentRoutingSidValueEntry
        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair

        ydk::YList segment_routing_sid_value_entry;
        ydk::YList backup_repair;
        
}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::SegmentRoutingSidValueEntry : public ydk::Entity
{
    public:
        SegmentRoutingSidValueEntry();
        ~SegmentRoutingSidValueEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::SegmentRoutingSidValueEntry


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair : public ydk::Entity
{
    public:
        BackupRepair();
        ~BackupRepair();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_node_id; //type: string
        ydk::YLeaf repair_ipv4_addr; //type: string
        ydk::YLeaf repair_ipv6_addr; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32
        ydk::YLeaf repair_strict_spf_label; //type: uint32
        ydk::YLeaf repair_s_rv6sid; //type: string
        ydk::YLeaf repair_s_rv6_end_func; //type: uint16
        ydk::YLeaf repair_s_rv6_strict_spfsid; //type: string
        ydk::YLeaf repair_s_rv6_strict_spf_end_func; //type: uint16

}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit : public ydk::Entity
{
    public:
        UloopExplicit();
        ~UloopExplicit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_node_id; //type: string
        ydk::YLeaf repair_ipv4_addr; //type: string
        ydk::YLeaf repair_ipv6_addr; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32
        ydk::YLeaf repair_strict_spf_label; //type: uint32
        ydk::YLeaf repair_s_rv6sid; //type: string
        ydk::YLeaf repair_s_rv6_end_func; //type: uint16
        ydk::YLeaf repair_s_rv6_strict_spfsid; //type: string
        ydk::YLeaf repair_s_rv6_strict_spf_end_func; //type: uint16

}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::Nnh : public ydk::Entity
{
    public:
        Nnh();
        ~Nnh();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_id_set; //type: boolean
        ydk::YLeaf ipv4_set; //type: boolean
        ydk::YLeaf link_id; //type: uint32
        ydk::YLeaf ipv4_address; //type: string

}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::Nnh


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath : public ydk::Entity
{
    public:
        MulticastPath();
        ~MulticastPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_id; //type: string
        ydk::YLeaf egress_interface; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_snpa; //type: string
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf tunnel_interface; //type: string
        ydk::YLeaf segment_routing_sid_value; //type: uint32
        ydk::YLeaf weight; //type: uint32
        ydk::YLeaf is_te_tunnel_interface; //type: boolean
        ydk::YLeaf is_sr_exclude_tunnel_interface; //type: boolean
        ydk::YLeaf is_s_rv6; //type: boolean
        ydk::YLeaf outgoing_label; //type: uint32
        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup
        class UloopExplicit; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit
        class Nnh; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::Nnh

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup> frr_backup;
        ydk::YList uloop_explicit;
        ydk::YList nnh;
        
}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup : public ydk::Entity
{
    public:
        FrrBackup();
        ~FrrBackup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_id; //type: string
        ydk::YLeaf egress_interface; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf tunnel_egress_interface; //type: string
        ydk::YLeaf neighbor_snpa; //type: string
        ydk::YLeaf remote_lfa_system_id; //type: string
        ydk::YLeaf remote_lfa_router_id; //type: string
        ydk::YLeaf remote_lfa_system_pid; //type: string
        ydk::YLeaf remote_lfa_router_pid; //type: string
        ydk::YLeaf total_backup_distance; //type: uint32
        ydk::YLeaf segment_routing_sid_value; //type: uint32
        ydk::YLeaf num_sid; //type: uint32
        ydk::YLeaf backup_repair_list_size; //type: uint32
        ydk::YLeaf tilfa_computation; //type: IsisTilfaComputation
        ydk::YLeaf prefix_source_node_id; //type: string
        ydk::YLeaf is_downstream; //type: boolean
        ydk::YLeaf is_lc_disjoint; //type: boolean
        ydk::YLeaf is_node_protecting; //type: boolean
        ydk::YLeaf is_primary_path; //type: boolean
        ydk::YLeaf is_srlg_disjoint; //type: boolean
        ydk::YLeaf is_remote_lfa; //type: boolean
        ydk::YLeaf is_epcfrr_lfa; //type: boolean
        ydk::YLeaf is_strict_spflfa; //type: boolean
        ydk::YLeaf is_s_rv6; //type: boolean
        ydk::YLeaf is_tunnel_requested; //type: boolean
        ydk::YLeaf weight; //type: uint32
        ydk::YLeaf outgoing_label; //type: uint32
        class SegmentRoutingSidValueEntry; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry
        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair

        ydk::YList segment_routing_sid_value_entry;
        ydk::YList backup_repair;
        
}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry : public ydk::Entity
{
    public:
        SegmentRoutingSidValueEntry();
        ~SegmentRoutingSidValueEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair : public ydk::Entity
{
    public:
        BackupRepair();
        ~BackupRepair();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_node_id; //type: string
        ydk::YLeaf repair_ipv4_addr; //type: string
        ydk::YLeaf repair_ipv6_addr; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32
        ydk::YLeaf repair_strict_spf_label; //type: uint32
        ydk::YLeaf repair_s_rv6sid; //type: string
        ydk::YLeaf repair_s_rv6_end_func; //type: uint16
        ydk::YLeaf repair_s_rv6_strict_spfsid; //type: string
        ydk::YLeaf repair_s_rv6_strict_spf_end_func; //type: uint16

}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit : public ydk::Entity
{
    public:
        UloopExplicit();
        ~UloopExplicit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_node_id; //type: string
        ydk::YLeaf repair_ipv4_addr; //type: string
        ydk::YLeaf repair_ipv6_addr; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32
        ydk::YLeaf repair_strict_spf_label; //type: uint32
        ydk::YLeaf repair_s_rv6sid; //type: string
        ydk::YLeaf repair_s_rv6_end_func; //type: uint16
        ydk::YLeaf repair_s_rv6_strict_spfsid; //type: string
        ydk::YLeaf repair_s_rv6_strict_spf_end_func; //type: uint16

}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::Nnh : public ydk::Entity
{
    public:
        Nnh();
        ~Nnh();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_id_set; //type: boolean
        ydk::YLeaf ipv4_set; //type: boolean
        ydk::YLeaf link_id; //type: uint32
        ydk::YLeaf ipv4_address; //type: string

}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::Nnh


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Parent : public ydk::Entity
{
    public:
        Parent();
        ~Parent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_id; //type: string
        ydk::YLeaf intermediate_pseudonode; //type: string

}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Parent


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Children : public ydk::Entity
{
    public:
        Children();
        ~Children();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_id; //type: string
        ydk::YLeaf intermediate_pseudonode; //type: string

}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Children


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::AdvertisedPrefixItemCounts : public ydk::Entity
{
    public:
        AdvertisedPrefixItemCounts();
        ~AdvertisedPrefixItemCounts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf critical; //type: uint32
        ydk::YLeaf high; //type: uint32
        ydk::YLeaf medium; //type: uint32
        ydk::YLeaf low; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::AdvertisedPrefixItemCounts


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes : public ydk::Entity
{
    public:
        Ipv6Routes();
        ~Ipv6Routes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv6Route; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route

        ydk::YList ipv6_route;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route : public ydk::Entity
{
    public:
        Ipv6Route();
        ~Ipv6Route();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint32
        class ConnectedStatus; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus
        class RedistributedStatus; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus
        class NativeStatus; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus
        class PerLevelAdvertisingDetail; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus> connected_status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus> redistributed_status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus> native_status;
        ydk::YList per_level_advertising_detail;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus : public ydk::Entity
{
    public:
        ConnectedStatus();
        ~ConnectedStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_valid; //type: IsisValid
        class ConnectedDetails; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::ConnectedDetails

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::ConnectedDetails> connected_details;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::ConnectedDetails : public ydk::Entity
{
    public:
        ConnectedDetails();
        ~ConnectedDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::ConnectedDetails::Interface

        ydk::YList interface;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::ConnectedDetails


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::ConnectedDetails::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::ConnectedDetails::Interface


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus : public ydk::Entity
{
    public:
        RedistributedStatus();
        ~RedistributedStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_valid; //type: IsisValid
        class RedistributionDetails; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails> redistribution_details;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails : public ydk::Entity
{
    public:
        RedistributionDetails();
        ~RedistributionDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IsisShRouteRedistDetail; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail

        ydk::YList isis_sh_route_redist_detail;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail : public ydk::Entity
{
    public:
        IsisShRouteRedistDetail();
        ~IsisShRouteRedistDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisLevel
        class Owner; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner> owner;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner : public ydk::Entity
{
    public:
        Owner();
        ~Owner();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: IsisRedistProto
        ydk::YLeaf isis_instance_id; //type: string
        ydk::YLeaf ospf_process_id; //type: string
        ydk::YLeaf ospfv3_process_id; //type: string
        ydk::YLeaf bgp_as_number; //type: string
        ydk::YLeaf eigrp_as_number; //type: string
        ydk::YLeaf application_name; //type: string

}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus : public ydk::Entity
{
    public:
        NativeStatus();
        ~NativeStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_valid; //type: IsisValid
        class NativeDetails; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails> native_details;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails : public ydk::Entity
{
    public:
        NativeDetails();
        ~NativeDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority; //type: IsisPrefixPriority
        ydk::YLeaf is_filtered_by_dl; //type: boolean
        ydk::YLeaf local_label; //type: uint32
        class Primary; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary
        class Backup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary> primary;
        ydk::YList backup;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary : public ydk::Entity
{
    public:
        Primary();
        ~Primary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf origin; //type: IsisPrefixOrigin
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf multicast_metric; //type: uint32
        ydk::YLeaf is_external_metric; //type: boolean
        ydk::YLeaf administrative_distance; //type: uint16
        class Paths; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths
        class UcmpNextHop; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop
        class MulticastPath; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath
        class SrtePath; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath
        class ExplicitPath; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath
        class Source; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Source
        class MulticastSource; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastSource

        ydk::YList paths;
        ydk::YList ucmp_next_hop;
        ydk::YList multicast_path;
        ydk::YList srte_path;
        ydk::YList explicit_path;
        ydk::YList source;
        ydk::YList multicast_source;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths : public ydk::Entity
{
    public:
        Paths();
        ~Paths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_id; //type: string
        ydk::YLeaf egress_interface; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_snpa; //type: string
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf tunnel_interface; //type: string
        ydk::YLeaf segment_routing_sid_value; //type: uint32
        ydk::YLeaf weight; //type: uint32
        ydk::YLeaf is_te_tunnel_interface; //type: boolean
        ydk::YLeaf is_sr_exclude_tunnel_interface; //type: boolean
        ydk::YLeaf is_s_rv6; //type: boolean
        ydk::YLeaf outgoing_label; //type: uint32
        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup
        class UloopExplicit; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit
        class Nnh; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::Nnh

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup> frr_backup;
        ydk::YList uloop_explicit;
        ydk::YList nnh;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup : public ydk::Entity
{
    public:
        FrrBackup();
        ~FrrBackup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_id; //type: string
        ydk::YLeaf egress_interface; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf tunnel_egress_interface; //type: string
        ydk::YLeaf neighbor_snpa; //type: string
        ydk::YLeaf remote_lfa_system_id; //type: string
        ydk::YLeaf remote_lfa_router_id; //type: string
        ydk::YLeaf remote_lfa_system_pid; //type: string
        ydk::YLeaf remote_lfa_router_pid; //type: string
        ydk::YLeaf total_backup_distance; //type: uint32
        ydk::YLeaf segment_routing_sid_value; //type: uint32
        ydk::YLeaf num_sid; //type: uint32
        ydk::YLeaf backup_repair_list_size; //type: uint32
        ydk::YLeaf tilfa_computation; //type: IsisTilfaComputation
        ydk::YLeaf prefix_source_node_id; //type: string
        ydk::YLeaf is_downstream; //type: boolean
        ydk::YLeaf is_lc_disjoint; //type: boolean
        ydk::YLeaf is_node_protecting; //type: boolean
        ydk::YLeaf is_primary_path; //type: boolean
        ydk::YLeaf is_srlg_disjoint; //type: boolean
        ydk::YLeaf is_remote_lfa; //type: boolean
        ydk::YLeaf is_epcfrr_lfa; //type: boolean
        ydk::YLeaf is_strict_spflfa; //type: boolean
        ydk::YLeaf is_s_rv6; //type: boolean
        ydk::YLeaf is_tunnel_requested; //type: boolean
        ydk::YLeaf weight; //type: uint32
        ydk::YLeaf outgoing_label; //type: uint32
        class SegmentRoutingSidValueEntry; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::SegmentRoutingSidValueEntry
        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair

        ydk::YList segment_routing_sid_value_entry;
        ydk::YList backup_repair;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::SegmentRoutingSidValueEntry : public ydk::Entity
{
    public:
        SegmentRoutingSidValueEntry();
        ~SegmentRoutingSidValueEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::SegmentRoutingSidValueEntry


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair : public ydk::Entity
{
    public:
        BackupRepair();
        ~BackupRepair();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_node_id; //type: string
        ydk::YLeaf repair_ipv4_addr; //type: string
        ydk::YLeaf repair_ipv6_addr; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32
        ydk::YLeaf repair_strict_spf_label; //type: uint32
        ydk::YLeaf repair_s_rv6sid; //type: string
        ydk::YLeaf repair_s_rv6_end_func; //type: uint16
        ydk::YLeaf repair_s_rv6_strict_spfsid; //type: string
        ydk::YLeaf repair_s_rv6_strict_spf_end_func; //type: uint16

}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit : public ydk::Entity
{
    public:
        UloopExplicit();
        ~UloopExplicit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_node_id; //type: string
        ydk::YLeaf repair_ipv4_addr; //type: string
        ydk::YLeaf repair_ipv6_addr; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32
        ydk::YLeaf repair_strict_spf_label; //type: uint32
        ydk::YLeaf repair_s_rv6sid; //type: string
        ydk::YLeaf repair_s_rv6_end_func; //type: uint16
        ydk::YLeaf repair_s_rv6_strict_spfsid; //type: string
        ydk::YLeaf repair_s_rv6_strict_spf_end_func; //type: uint16

}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::Nnh : public ydk::Entity
{
    public:
        Nnh();
        ~Nnh();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_id_set; //type: boolean
        ydk::YLeaf ipv4_set; //type: boolean
        ydk::YLeaf link_id; //type: uint32
        ydk::YLeaf ipv4_address; //type: string

}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::Nnh


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop : public ydk::Entity
{
    public:
        UcmpNextHop();
        ~UcmpNextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_id; //type: string
        ydk::YLeaf egress_interface; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_snpa; //type: string
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf total_ucmp_distance; //type: uint32
        ydk::YLeaf segment_routing_sid_value; //type: uint32
        ydk::YLeaf weight; //type: uint32
        ydk::YLeaf is_te_tunnel_interface; //type: boolean
        ydk::YLeaf is_sr_exclude_tunnel_interface; //type: boolean
        ydk::YLeaf outgoing_label; //type: uint32
        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup> frr_backup;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup : public ydk::Entity
{
    public:
        FrrBackup();
        ~FrrBackup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_id; //type: string
        ydk::YLeaf egress_interface; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf tunnel_egress_interface; //type: string
        ydk::YLeaf neighbor_snpa; //type: string
        ydk::YLeaf remote_lfa_system_id; //type: string
        ydk::YLeaf remote_lfa_router_id; //type: string
        ydk::YLeaf remote_lfa_system_pid; //type: string
        ydk::YLeaf remote_lfa_router_pid; //type: string
        ydk::YLeaf total_backup_distance; //type: uint32
        ydk::YLeaf segment_routing_sid_value; //type: uint32
        ydk::YLeaf num_sid; //type: uint32
        ydk::YLeaf backup_repair_list_size; //type: uint32
        ydk::YLeaf tilfa_computation; //type: IsisTilfaComputation
        ydk::YLeaf prefix_source_node_id; //type: string
        ydk::YLeaf is_downstream; //type: boolean
        ydk::YLeaf is_lc_disjoint; //type: boolean
        ydk::YLeaf is_node_protecting; //type: boolean
        ydk::YLeaf is_primary_path; //type: boolean
        ydk::YLeaf is_srlg_disjoint; //type: boolean
        ydk::YLeaf is_remote_lfa; //type: boolean
        ydk::YLeaf is_epcfrr_lfa; //type: boolean
        ydk::YLeaf is_strict_spflfa; //type: boolean
        ydk::YLeaf is_s_rv6; //type: boolean
        ydk::YLeaf is_tunnel_requested; //type: boolean
        ydk::YLeaf weight; //type: uint32
        ydk::YLeaf outgoing_label; //type: uint32
        class SegmentRoutingSidValueEntry; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::SegmentRoutingSidValueEntry
        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair

        ydk::YList segment_routing_sid_value_entry;
        ydk::YList backup_repair;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::SegmentRoutingSidValueEntry : public ydk::Entity
{
    public:
        SegmentRoutingSidValueEntry();
        ~SegmentRoutingSidValueEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::SegmentRoutingSidValueEntry


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair : public ydk::Entity
{
    public:
        BackupRepair();
        ~BackupRepair();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_node_id; //type: string
        ydk::YLeaf repair_ipv4_addr; //type: string
        ydk::YLeaf repair_ipv6_addr; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32
        ydk::YLeaf repair_strict_spf_label; //type: uint32
        ydk::YLeaf repair_s_rv6sid; //type: string
        ydk::YLeaf repair_s_rv6_end_func; //type: uint16
        ydk::YLeaf repair_s_rv6_strict_spfsid; //type: string
        ydk::YLeaf repair_s_rv6_strict_spf_end_func; //type: uint16

}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath : public ydk::Entity
{
    public:
        MulticastPath();
        ~MulticastPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_id; //type: string
        ydk::YLeaf egress_interface; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_snpa; //type: string
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf tunnel_interface; //type: string
        ydk::YLeaf segment_routing_sid_value; //type: uint32
        ydk::YLeaf weight; //type: uint32
        ydk::YLeaf is_te_tunnel_interface; //type: boolean
        ydk::YLeaf is_sr_exclude_tunnel_interface; //type: boolean
        ydk::YLeaf is_s_rv6; //type: boolean
        ydk::YLeaf outgoing_label; //type: uint32
        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup
        class UloopExplicit; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit
        class Nnh; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::Nnh

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup> frr_backup;
        ydk::YList uloop_explicit;
        ydk::YList nnh;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup : public ydk::Entity
{
    public:
        FrrBackup();
        ~FrrBackup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_id; //type: string
        ydk::YLeaf egress_interface; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf tunnel_egress_interface; //type: string
        ydk::YLeaf neighbor_snpa; //type: string
        ydk::YLeaf remote_lfa_system_id; //type: string
        ydk::YLeaf remote_lfa_router_id; //type: string
        ydk::YLeaf remote_lfa_system_pid; //type: string
        ydk::YLeaf remote_lfa_router_pid; //type: string
        ydk::YLeaf total_backup_distance; //type: uint32
        ydk::YLeaf segment_routing_sid_value; //type: uint32
        ydk::YLeaf num_sid; //type: uint32
        ydk::YLeaf backup_repair_list_size; //type: uint32
        ydk::YLeaf tilfa_computation; //type: IsisTilfaComputation
        ydk::YLeaf prefix_source_node_id; //type: string
        ydk::YLeaf is_downstream; //type: boolean
        ydk::YLeaf is_lc_disjoint; //type: boolean
        ydk::YLeaf is_node_protecting; //type: boolean
        ydk::YLeaf is_primary_path; //type: boolean
        ydk::YLeaf is_srlg_disjoint; //type: boolean
        ydk::YLeaf is_remote_lfa; //type: boolean
        ydk::YLeaf is_epcfrr_lfa; //type: boolean
        ydk::YLeaf is_strict_spflfa; //type: boolean
        ydk::YLeaf is_s_rv6; //type: boolean
        ydk::YLeaf is_tunnel_requested; //type: boolean
        ydk::YLeaf weight; //type: uint32
        ydk::YLeaf outgoing_label; //type: uint32
        class SegmentRoutingSidValueEntry; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry
        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair

        ydk::YList segment_routing_sid_value_entry;
        ydk::YList backup_repair;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry : public ydk::Entity
{
    public:
        SegmentRoutingSidValueEntry();
        ~SegmentRoutingSidValueEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair : public ydk::Entity
{
    public:
        BackupRepair();
        ~BackupRepair();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_node_id; //type: string
        ydk::YLeaf repair_ipv4_addr; //type: string
        ydk::YLeaf repair_ipv6_addr; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32
        ydk::YLeaf repair_strict_spf_label; //type: uint32
        ydk::YLeaf repair_s_rv6sid; //type: string
        ydk::YLeaf repair_s_rv6_end_func; //type: uint16
        ydk::YLeaf repair_s_rv6_strict_spfsid; //type: string
        ydk::YLeaf repair_s_rv6_strict_spf_end_func; //type: uint16

}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit : public ydk::Entity
{
    public:
        UloopExplicit();
        ~UloopExplicit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_node_id; //type: string
        ydk::YLeaf repair_ipv4_addr; //type: string
        ydk::YLeaf repair_ipv6_addr; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32
        ydk::YLeaf repair_strict_spf_label; //type: uint32
        ydk::YLeaf repair_s_rv6sid; //type: string
        ydk::YLeaf repair_s_rv6_end_func; //type: uint16
        ydk::YLeaf repair_s_rv6_strict_spfsid; //type: string
        ydk::YLeaf repair_s_rv6_strict_spf_end_func; //type: uint16

}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::Nnh : public ydk::Entity
{
    public:
        Nnh();
        ~Nnh();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_id_set; //type: boolean
        ydk::YLeaf ipv4_set; //type: boolean
        ydk::YLeaf link_id; //type: uint32
        ydk::YLeaf ipv4_address; //type: string

}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::Nnh


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath : public ydk::Entity
{
    public:
        SrtePath();
        ~SrtePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_id; //type: string
        ydk::YLeaf egress_interface; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_snpa; //type: string
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf tunnel_interface; //type: string
        ydk::YLeaf segment_routing_sid_value; //type: uint32
        ydk::YLeaf weight; //type: uint32
        ydk::YLeaf is_te_tunnel_interface; //type: boolean
        ydk::YLeaf is_sr_exclude_tunnel_interface; //type: boolean
        ydk::YLeaf is_s_rv6; //type: boolean
        ydk::YLeaf outgoing_label; //type: uint32
        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup
        class UloopExplicit; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit
        class Nnh; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::Nnh

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup> frr_backup;
        ydk::YList uloop_explicit;
        ydk::YList nnh;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup : public ydk::Entity
{
    public:
        FrrBackup();
        ~FrrBackup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_id; //type: string
        ydk::YLeaf egress_interface; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf tunnel_egress_interface; //type: string
        ydk::YLeaf neighbor_snpa; //type: string
        ydk::YLeaf remote_lfa_system_id; //type: string
        ydk::YLeaf remote_lfa_router_id; //type: string
        ydk::YLeaf remote_lfa_system_pid; //type: string
        ydk::YLeaf remote_lfa_router_pid; //type: string
        ydk::YLeaf total_backup_distance; //type: uint32
        ydk::YLeaf segment_routing_sid_value; //type: uint32
        ydk::YLeaf num_sid; //type: uint32
        ydk::YLeaf backup_repair_list_size; //type: uint32
        ydk::YLeaf tilfa_computation; //type: IsisTilfaComputation
        ydk::YLeaf prefix_source_node_id; //type: string
        ydk::YLeaf is_downstream; //type: boolean
        ydk::YLeaf is_lc_disjoint; //type: boolean
        ydk::YLeaf is_node_protecting; //type: boolean
        ydk::YLeaf is_primary_path; //type: boolean
        ydk::YLeaf is_srlg_disjoint; //type: boolean
        ydk::YLeaf is_remote_lfa; //type: boolean
        ydk::YLeaf is_epcfrr_lfa; //type: boolean
        ydk::YLeaf is_strict_spflfa; //type: boolean
        ydk::YLeaf is_s_rv6; //type: boolean
        ydk::YLeaf is_tunnel_requested; //type: boolean
        ydk::YLeaf weight; //type: uint32
        ydk::YLeaf outgoing_label; //type: uint32
        class SegmentRoutingSidValueEntry; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::SegmentRoutingSidValueEntry
        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair

        ydk::YList segment_routing_sid_value_entry;
        ydk::YList backup_repair;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::SegmentRoutingSidValueEntry : public ydk::Entity
{
    public:
        SegmentRoutingSidValueEntry();
        ~SegmentRoutingSidValueEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::SegmentRoutingSidValueEntry


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair : public ydk::Entity
{
    public:
        BackupRepair();
        ~BackupRepair();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_node_id; //type: string
        ydk::YLeaf repair_ipv4_addr; //type: string
        ydk::YLeaf repair_ipv6_addr; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32
        ydk::YLeaf repair_strict_spf_label; //type: uint32
        ydk::YLeaf repair_s_rv6sid; //type: string
        ydk::YLeaf repair_s_rv6_end_func; //type: uint16
        ydk::YLeaf repair_s_rv6_strict_spfsid; //type: string
        ydk::YLeaf repair_s_rv6_strict_spf_end_func; //type: uint16

}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit : public ydk::Entity
{
    public:
        UloopExplicit();
        ~UloopExplicit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_node_id; //type: string
        ydk::YLeaf repair_ipv4_addr; //type: string
        ydk::YLeaf repair_ipv6_addr; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32
        ydk::YLeaf repair_strict_spf_label; //type: uint32
        ydk::YLeaf repair_s_rv6sid; //type: string
        ydk::YLeaf repair_s_rv6_end_func; //type: uint16
        ydk::YLeaf repair_s_rv6_strict_spfsid; //type: string
        ydk::YLeaf repair_s_rv6_strict_spf_end_func; //type: uint16

}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::Nnh : public ydk::Entity
{
    public:
        Nnh();
        ~Nnh();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_id_set; //type: boolean
        ydk::YLeaf ipv4_set; //type: boolean
        ydk::YLeaf link_id; //type: uint32
        ydk::YLeaf ipv4_address; //type: string

}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::Nnh


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath : public ydk::Entity
{
    public:
        ExplicitPath();
        ~ExplicitPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_id; //type: string
        ydk::YLeaf egress_interface; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_snpa; //type: string
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf tunnel_interface; //type: string
        ydk::YLeaf segment_routing_sid_value; //type: uint32
        ydk::YLeaf weight; //type: uint32
        ydk::YLeaf is_te_tunnel_interface; //type: boolean
        ydk::YLeaf is_sr_exclude_tunnel_interface; //type: boolean
        ydk::YLeaf is_s_rv6; //type: boolean
        ydk::YLeaf outgoing_label; //type: uint32
        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup
        class UloopExplicit; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::UloopExplicit
        class Nnh; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::Nnh

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup> frr_backup;
        ydk::YList uloop_explicit;
        ydk::YList nnh;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup : public ydk::Entity
{
    public:
        FrrBackup();
        ~FrrBackup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_id; //type: string
        ydk::YLeaf egress_interface; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf tunnel_egress_interface; //type: string
        ydk::YLeaf neighbor_snpa; //type: string
        ydk::YLeaf remote_lfa_system_id; //type: string
        ydk::YLeaf remote_lfa_router_id; //type: string
        ydk::YLeaf remote_lfa_system_pid; //type: string
        ydk::YLeaf remote_lfa_router_pid; //type: string
        ydk::YLeaf total_backup_distance; //type: uint32
        ydk::YLeaf segment_routing_sid_value; //type: uint32
        ydk::YLeaf num_sid; //type: uint32
        ydk::YLeaf backup_repair_list_size; //type: uint32
        ydk::YLeaf tilfa_computation; //type: IsisTilfaComputation
        ydk::YLeaf prefix_source_node_id; //type: string
        ydk::YLeaf is_downstream; //type: boolean
        ydk::YLeaf is_lc_disjoint; //type: boolean
        ydk::YLeaf is_node_protecting; //type: boolean
        ydk::YLeaf is_primary_path; //type: boolean
        ydk::YLeaf is_srlg_disjoint; //type: boolean
        ydk::YLeaf is_remote_lfa; //type: boolean
        ydk::YLeaf is_epcfrr_lfa; //type: boolean
        ydk::YLeaf is_strict_spflfa; //type: boolean
        ydk::YLeaf is_s_rv6; //type: boolean
        ydk::YLeaf is_tunnel_requested; //type: boolean
        ydk::YLeaf weight; //type: uint32
        ydk::YLeaf outgoing_label; //type: uint32
        class SegmentRoutingSidValueEntry; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry
        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair

        ydk::YList segment_routing_sid_value_entry;
        ydk::YList backup_repair;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry : public ydk::Entity
{
    public:
        SegmentRoutingSidValueEntry();
        ~SegmentRoutingSidValueEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair : public ydk::Entity
{
    public:
        BackupRepair();
        ~BackupRepair();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_node_id; //type: string
        ydk::YLeaf repair_ipv4_addr; //type: string
        ydk::YLeaf repair_ipv6_addr; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32
        ydk::YLeaf repair_strict_spf_label; //type: uint32
        ydk::YLeaf repair_s_rv6sid; //type: string
        ydk::YLeaf repair_s_rv6_end_func; //type: uint16
        ydk::YLeaf repair_s_rv6_strict_spfsid; //type: string
        ydk::YLeaf repair_s_rv6_strict_spf_end_func; //type: uint16

}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::UloopExplicit : public ydk::Entity
{
    public:
        UloopExplicit();
        ~UloopExplicit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_node_id; //type: string
        ydk::YLeaf repair_ipv4_addr; //type: string
        ydk::YLeaf repair_ipv6_addr; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32
        ydk::YLeaf repair_strict_spf_label; //type: uint32
        ydk::YLeaf repair_s_rv6sid; //type: string
        ydk::YLeaf repair_s_rv6_end_func; //type: uint16
        ydk::YLeaf repair_s_rv6_strict_spfsid; //type: string
        ydk::YLeaf repair_s_rv6_strict_spf_end_func; //type: uint16

}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::UloopExplicit


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::Nnh : public ydk::Entity
{
    public:
        Nnh();
        ~Nnh();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_id_set; //type: boolean
        ydk::YLeaf ipv4_set; //type: boolean
        ydk::YLeaf link_id; //type: uint32
        ydk::YLeaf ipv4_address; //type: string

}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::Nnh


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_lsp_id; //type: string
        ydk::YLeaf source_address; //type: string
        class Tags; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Source::Tags
        class NodalSid; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Source::NodalSid

        ydk::YList tags;
        ydk::YList nodal_sid;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Source


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Source::Tags : public ydk::Entity
{
    public:
        Tags();
        ~Tags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Source::Tags


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Source::NodalSid : public ydk::Entity
{
    public:
        NodalSid();
        ~NodalSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_value; //type: uint32
        ydk::YLeaf rflag; //type: uint8
        ydk::YLeaf nflag; //type: uint8
        ydk::YLeaf pflag; //type: uint8
        ydk::YLeaf eflag; //type: uint8
        ydk::YLeaf vflag; //type: uint8
        ydk::YLeaf lflag; //type: uint8
        ydk::YLeaf algorithm; //type: uint8

}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Source::NodalSid


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastSource : public ydk::Entity
{
    public:
        MulticastSource();
        ~MulticastSource();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_lsp_id; //type: string
        ydk::YLeaf source_address; //type: string
        class Tags; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastSource::Tags
        class NodalSid; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastSource::NodalSid

        ydk::YList tags;
        ydk::YList nodal_sid;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastSource


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastSource::Tags : public ydk::Entity
{
    public:
        Tags();
        ~Tags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastSource::Tags


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastSource::NodalSid : public ydk::Entity
{
    public:
        NodalSid();
        ~NodalSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_value; //type: uint32
        ydk::YLeaf rflag; //type: uint8
        ydk::YLeaf nflag; //type: uint8
        ydk::YLeaf pflag; //type: uint8
        ydk::YLeaf eflag; //type: uint8
        ydk::YLeaf vflag; //type: uint8
        ydk::YLeaf lflag; //type: uint8
        ydk::YLeaf algorithm; //type: uint8

}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastSource::NodalSid


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup : public ydk::Entity
{
    public:
        Backup();
        ~Backup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf origin; //type: IsisPrefixOrigin
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf multicast_metric; //type: uint32
        ydk::YLeaf is_external_metric; //type: boolean
        ydk::YLeaf administrative_distance; //type: uint16
        class Paths; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths
        class UcmpNextHop; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::UcmpNextHop
        class MulticastPath; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath
        class SrtePath; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath
        class ExplicitPath; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath
        class Source; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Source
        class MulticastSource; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastSource

        ydk::YList paths;
        ydk::YList ucmp_next_hop;
        ydk::YList multicast_path;
        ydk::YList srte_path;
        ydk::YList explicit_path;
        ydk::YList source;
        ydk::YList multicast_source;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths : public ydk::Entity
{
    public:
        Paths();
        ~Paths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_id; //type: string
        ydk::YLeaf egress_interface; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_snpa; //type: string
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf tunnel_interface; //type: string
        ydk::YLeaf segment_routing_sid_value; //type: uint32
        ydk::YLeaf weight; //type: uint32
        ydk::YLeaf is_te_tunnel_interface; //type: boolean
        ydk::YLeaf is_sr_exclude_tunnel_interface; //type: boolean
        ydk::YLeaf is_s_rv6; //type: boolean
        ydk::YLeaf outgoing_label; //type: uint32
        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup
        class UloopExplicit; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::UloopExplicit
        class Nnh; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::Nnh

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup> frr_backup;
        ydk::YList uloop_explicit;
        ydk::YList nnh;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup : public ydk::Entity
{
    public:
        FrrBackup();
        ~FrrBackup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_id; //type: string
        ydk::YLeaf egress_interface; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf tunnel_egress_interface; //type: string
        ydk::YLeaf neighbor_snpa; //type: string
        ydk::YLeaf remote_lfa_system_id; //type: string
        ydk::YLeaf remote_lfa_router_id; //type: string
        ydk::YLeaf remote_lfa_system_pid; //type: string
        ydk::YLeaf remote_lfa_router_pid; //type: string
        ydk::YLeaf total_backup_distance; //type: uint32
        ydk::YLeaf segment_routing_sid_value; //type: uint32
        ydk::YLeaf num_sid; //type: uint32
        ydk::YLeaf backup_repair_list_size; //type: uint32
        ydk::YLeaf tilfa_computation; //type: IsisTilfaComputation
        ydk::YLeaf prefix_source_node_id; //type: string
        ydk::YLeaf is_downstream; //type: boolean
        ydk::YLeaf is_lc_disjoint; //type: boolean
        ydk::YLeaf is_node_protecting; //type: boolean
        ydk::YLeaf is_primary_path; //type: boolean
        ydk::YLeaf is_srlg_disjoint; //type: boolean
        ydk::YLeaf is_remote_lfa; //type: boolean
        ydk::YLeaf is_epcfrr_lfa; //type: boolean
        ydk::YLeaf is_strict_spflfa; //type: boolean
        ydk::YLeaf is_s_rv6; //type: boolean
        ydk::YLeaf is_tunnel_requested; //type: boolean
        ydk::YLeaf weight; //type: uint32
        ydk::YLeaf outgoing_label; //type: uint32
        class SegmentRoutingSidValueEntry; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::SegmentRoutingSidValueEntry
        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::BackupRepair

        ydk::YList segment_routing_sid_value_entry;
        ydk::YList backup_repair;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::SegmentRoutingSidValueEntry : public ydk::Entity
{
    public:
        SegmentRoutingSidValueEntry();
        ~SegmentRoutingSidValueEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::SegmentRoutingSidValueEntry


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::BackupRepair : public ydk::Entity
{
    public:
        BackupRepair();
        ~BackupRepair();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_node_id; //type: string
        ydk::YLeaf repair_ipv4_addr; //type: string
        ydk::YLeaf repair_ipv6_addr; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32
        ydk::YLeaf repair_strict_spf_label; //type: uint32
        ydk::YLeaf repair_s_rv6sid; //type: string
        ydk::YLeaf repair_s_rv6_end_func; //type: uint16
        ydk::YLeaf repair_s_rv6_strict_spfsid; //type: string
        ydk::YLeaf repair_s_rv6_strict_spf_end_func; //type: uint16

}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::UloopExplicit : public ydk::Entity
{
    public:
        UloopExplicit();
        ~UloopExplicit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_node_id; //type: string
        ydk::YLeaf repair_ipv4_addr; //type: string
        ydk::YLeaf repair_ipv6_addr; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32
        ydk::YLeaf repair_strict_spf_label; //type: uint32
        ydk::YLeaf repair_s_rv6sid; //type: string
        ydk::YLeaf repair_s_rv6_end_func; //type: uint16
        ydk::YLeaf repair_s_rv6_strict_spfsid; //type: string
        ydk::YLeaf repair_s_rv6_strict_spf_end_func; //type: uint16

}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::UloopExplicit


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::Nnh : public ydk::Entity
{
    public:
        Nnh();
        ~Nnh();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_id_set; //type: boolean
        ydk::YLeaf ipv4_set; //type: boolean
        ydk::YLeaf link_id; //type: uint32
        ydk::YLeaf ipv4_address; //type: string

}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::Nnh


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::UcmpNextHop : public ydk::Entity
{
    public:
        UcmpNextHop();
        ~UcmpNextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_id; //type: string
        ydk::YLeaf egress_interface; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_snpa; //type: string
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf total_ucmp_distance; //type: uint32
        ydk::YLeaf segment_routing_sid_value; //type: uint32
        ydk::YLeaf weight; //type: uint32
        ydk::YLeaf is_te_tunnel_interface; //type: boolean
        ydk::YLeaf is_sr_exclude_tunnel_interface; //type: boolean
        ydk::YLeaf outgoing_label; //type: uint32
        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup> frr_backup;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::UcmpNextHop


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup : public ydk::Entity
{
    public:
        FrrBackup();
        ~FrrBackup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_id; //type: string
        ydk::YLeaf egress_interface; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf tunnel_egress_interface; //type: string
        ydk::YLeaf neighbor_snpa; //type: string
        ydk::YLeaf remote_lfa_system_id; //type: string
        ydk::YLeaf remote_lfa_router_id; //type: string
        ydk::YLeaf remote_lfa_system_pid; //type: string
        ydk::YLeaf remote_lfa_router_pid; //type: string
        ydk::YLeaf total_backup_distance; //type: uint32
        ydk::YLeaf segment_routing_sid_value; //type: uint32
        ydk::YLeaf num_sid; //type: uint32
        ydk::YLeaf backup_repair_list_size; //type: uint32
        ydk::YLeaf tilfa_computation; //type: IsisTilfaComputation
        ydk::YLeaf prefix_source_node_id; //type: string
        ydk::YLeaf is_downstream; //type: boolean
        ydk::YLeaf is_lc_disjoint; //type: boolean
        ydk::YLeaf is_node_protecting; //type: boolean
        ydk::YLeaf is_primary_path; //type: boolean
        ydk::YLeaf is_srlg_disjoint; //type: boolean
        ydk::YLeaf is_remote_lfa; //type: boolean
        ydk::YLeaf is_epcfrr_lfa; //type: boolean
        ydk::YLeaf is_strict_spflfa; //type: boolean
        ydk::YLeaf is_s_rv6; //type: boolean
        ydk::YLeaf is_tunnel_requested; //type: boolean
        ydk::YLeaf weight; //type: uint32
        ydk::YLeaf outgoing_label; //type: uint32
        class SegmentRoutingSidValueEntry; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::SegmentRoutingSidValueEntry
        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::BackupRepair

        ydk::YList segment_routing_sid_value_entry;
        ydk::YList backup_repair;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::SegmentRoutingSidValueEntry : public ydk::Entity
{
    public:
        SegmentRoutingSidValueEntry();
        ~SegmentRoutingSidValueEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::SegmentRoutingSidValueEntry


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::BackupRepair : public ydk::Entity
{
    public:
        BackupRepair();
        ~BackupRepair();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_node_id; //type: string
        ydk::YLeaf repair_ipv4_addr; //type: string
        ydk::YLeaf repair_ipv6_addr; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32
        ydk::YLeaf repair_strict_spf_label; //type: uint32
        ydk::YLeaf repair_s_rv6sid; //type: string
        ydk::YLeaf repair_s_rv6_end_func; //type: uint16
        ydk::YLeaf repair_s_rv6_strict_spfsid; //type: string
        ydk::YLeaf repair_s_rv6_strict_spf_end_func; //type: uint16

}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath : public ydk::Entity
{
    public:
        MulticastPath();
        ~MulticastPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_id; //type: string
        ydk::YLeaf egress_interface; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_snpa; //type: string
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf tunnel_interface; //type: string
        ydk::YLeaf segment_routing_sid_value; //type: uint32
        ydk::YLeaf weight; //type: uint32
        ydk::YLeaf is_te_tunnel_interface; //type: boolean
        ydk::YLeaf is_sr_exclude_tunnel_interface; //type: boolean
        ydk::YLeaf is_s_rv6; //type: boolean
        ydk::YLeaf outgoing_label; //type: uint32
        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup
        class UloopExplicit; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::UloopExplicit
        class Nnh; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::Nnh

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup> frr_backup;
        ydk::YList uloop_explicit;
        ydk::YList nnh;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup : public ydk::Entity
{
    public:
        FrrBackup();
        ~FrrBackup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_id; //type: string
        ydk::YLeaf egress_interface; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf tunnel_egress_interface; //type: string
        ydk::YLeaf neighbor_snpa; //type: string
        ydk::YLeaf remote_lfa_system_id; //type: string
        ydk::YLeaf remote_lfa_router_id; //type: string
        ydk::YLeaf remote_lfa_system_pid; //type: string
        ydk::YLeaf remote_lfa_router_pid; //type: string
        ydk::YLeaf total_backup_distance; //type: uint32
        ydk::YLeaf segment_routing_sid_value; //type: uint32
        ydk::YLeaf num_sid; //type: uint32
        ydk::YLeaf backup_repair_list_size; //type: uint32
        ydk::YLeaf tilfa_computation; //type: IsisTilfaComputation
        ydk::YLeaf prefix_source_node_id; //type: string
        ydk::YLeaf is_downstream; //type: boolean
        ydk::YLeaf is_lc_disjoint; //type: boolean
        ydk::YLeaf is_node_protecting; //type: boolean
        ydk::YLeaf is_primary_path; //type: boolean
        ydk::YLeaf is_srlg_disjoint; //type: boolean
        ydk::YLeaf is_remote_lfa; //type: boolean
        ydk::YLeaf is_epcfrr_lfa; //type: boolean
        ydk::YLeaf is_strict_spflfa; //type: boolean
        ydk::YLeaf is_s_rv6; //type: boolean
        ydk::YLeaf is_tunnel_requested; //type: boolean
        ydk::YLeaf weight; //type: uint32
        ydk::YLeaf outgoing_label; //type: uint32
        class SegmentRoutingSidValueEntry; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry
        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::BackupRepair

        ydk::YList segment_routing_sid_value_entry;
        ydk::YList backup_repair;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry : public ydk::Entity
{
    public:
        SegmentRoutingSidValueEntry();
        ~SegmentRoutingSidValueEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::BackupRepair : public ydk::Entity
{
    public:
        BackupRepair();
        ~BackupRepair();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_node_id; //type: string
        ydk::YLeaf repair_ipv4_addr; //type: string
        ydk::YLeaf repair_ipv6_addr; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32
        ydk::YLeaf repair_strict_spf_label; //type: uint32
        ydk::YLeaf repair_s_rv6sid; //type: string
        ydk::YLeaf repair_s_rv6_end_func; //type: uint16
        ydk::YLeaf repair_s_rv6_strict_spfsid; //type: string
        ydk::YLeaf repair_s_rv6_strict_spf_end_func; //type: uint16

}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::UloopExplicit : public ydk::Entity
{
    public:
        UloopExplicit();
        ~UloopExplicit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_node_id; //type: string
        ydk::YLeaf repair_ipv4_addr; //type: string
        ydk::YLeaf repair_ipv6_addr; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32
        ydk::YLeaf repair_strict_spf_label; //type: uint32
        ydk::YLeaf repair_s_rv6sid; //type: string
        ydk::YLeaf repair_s_rv6_end_func; //type: uint16
        ydk::YLeaf repair_s_rv6_strict_spfsid; //type: string
        ydk::YLeaf repair_s_rv6_strict_spf_end_func; //type: uint16

}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::UloopExplicit


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::Nnh : public ydk::Entity
{
    public:
        Nnh();
        ~Nnh();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_id_set; //type: boolean
        ydk::YLeaf ipv4_set; //type: boolean
        ydk::YLeaf link_id; //type: uint32
        ydk::YLeaf ipv4_address; //type: string

}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::Nnh


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath : public ydk::Entity
{
    public:
        SrtePath();
        ~SrtePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_id; //type: string
        ydk::YLeaf egress_interface; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_snpa; //type: string
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf tunnel_interface; //type: string
        ydk::YLeaf segment_routing_sid_value; //type: uint32
        ydk::YLeaf weight; //type: uint32
        ydk::YLeaf is_te_tunnel_interface; //type: boolean
        ydk::YLeaf is_sr_exclude_tunnel_interface; //type: boolean
        ydk::YLeaf is_s_rv6; //type: boolean
        ydk::YLeaf outgoing_label; //type: uint32
        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup
        class UloopExplicit; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::UloopExplicit
        class Nnh; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::Nnh

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup> frr_backup;
        ydk::YList uloop_explicit;
        ydk::YList nnh;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup : public ydk::Entity
{
    public:
        FrrBackup();
        ~FrrBackup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_id; //type: string
        ydk::YLeaf egress_interface; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf tunnel_egress_interface; //type: string
        ydk::YLeaf neighbor_snpa; //type: string
        ydk::YLeaf remote_lfa_system_id; //type: string
        ydk::YLeaf remote_lfa_router_id; //type: string
        ydk::YLeaf remote_lfa_system_pid; //type: string
        ydk::YLeaf remote_lfa_router_pid; //type: string
        ydk::YLeaf total_backup_distance; //type: uint32
        ydk::YLeaf segment_routing_sid_value; //type: uint32
        ydk::YLeaf num_sid; //type: uint32
        ydk::YLeaf backup_repair_list_size; //type: uint32
        ydk::YLeaf tilfa_computation; //type: IsisTilfaComputation
        ydk::YLeaf prefix_source_node_id; //type: string
        ydk::YLeaf is_downstream; //type: boolean
        ydk::YLeaf is_lc_disjoint; //type: boolean
        ydk::YLeaf is_node_protecting; //type: boolean
        ydk::YLeaf is_primary_path; //type: boolean
        ydk::YLeaf is_srlg_disjoint; //type: boolean
        ydk::YLeaf is_remote_lfa; //type: boolean
        ydk::YLeaf is_epcfrr_lfa; //type: boolean
        ydk::YLeaf is_strict_spflfa; //type: boolean
        ydk::YLeaf is_s_rv6; //type: boolean
        ydk::YLeaf is_tunnel_requested; //type: boolean
        ydk::YLeaf weight; //type: uint32
        ydk::YLeaf outgoing_label; //type: uint32
        class SegmentRoutingSidValueEntry; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::SegmentRoutingSidValueEntry
        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::BackupRepair

        ydk::YList segment_routing_sid_value_entry;
        ydk::YList backup_repair;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::SegmentRoutingSidValueEntry : public ydk::Entity
{
    public:
        SegmentRoutingSidValueEntry();
        ~SegmentRoutingSidValueEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::SegmentRoutingSidValueEntry


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::BackupRepair : public ydk::Entity
{
    public:
        BackupRepair();
        ~BackupRepair();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_node_id; //type: string
        ydk::YLeaf repair_ipv4_addr; //type: string
        ydk::YLeaf repair_ipv6_addr; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32
        ydk::YLeaf repair_strict_spf_label; //type: uint32
        ydk::YLeaf repair_s_rv6sid; //type: string
        ydk::YLeaf repair_s_rv6_end_func; //type: uint16
        ydk::YLeaf repair_s_rv6_strict_spfsid; //type: string
        ydk::YLeaf repair_s_rv6_strict_spf_end_func; //type: uint16

}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::UloopExplicit : public ydk::Entity
{
    public:
        UloopExplicit();
        ~UloopExplicit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_node_id; //type: string
        ydk::YLeaf repair_ipv4_addr; //type: string
        ydk::YLeaf repair_ipv6_addr; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32
        ydk::YLeaf repair_strict_spf_label; //type: uint32
        ydk::YLeaf repair_s_rv6sid; //type: string
        ydk::YLeaf repair_s_rv6_end_func; //type: uint16
        ydk::YLeaf repair_s_rv6_strict_spfsid; //type: string
        ydk::YLeaf repair_s_rv6_strict_spf_end_func; //type: uint16

}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::UloopExplicit


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::Nnh : public ydk::Entity
{
    public:
        Nnh();
        ~Nnh();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_id_set; //type: boolean
        ydk::YLeaf ipv4_set; //type: boolean
        ydk::YLeaf link_id; //type: uint32
        ydk::YLeaf ipv4_address; //type: string

}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::Nnh


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath : public ydk::Entity
{
    public:
        ExplicitPath();
        ~ExplicitPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_id; //type: string
        ydk::YLeaf egress_interface; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_snpa; //type: string
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf tunnel_interface; //type: string
        ydk::YLeaf segment_routing_sid_value; //type: uint32
        ydk::YLeaf weight; //type: uint32
        ydk::YLeaf is_te_tunnel_interface; //type: boolean
        ydk::YLeaf is_sr_exclude_tunnel_interface; //type: boolean
        ydk::YLeaf is_s_rv6; //type: boolean
        ydk::YLeaf outgoing_label; //type: uint32
        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup
        class UloopExplicit; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::UloopExplicit
        class Nnh; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::Nnh

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup> frr_backup;
        ydk::YList uloop_explicit;
        ydk::YList nnh;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup : public ydk::Entity
{
    public:
        FrrBackup();
        ~FrrBackup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_id; //type: string
        ydk::YLeaf egress_interface; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf tunnel_egress_interface; //type: string
        ydk::YLeaf neighbor_snpa; //type: string
        ydk::YLeaf remote_lfa_system_id; //type: string
        ydk::YLeaf remote_lfa_router_id; //type: string
        ydk::YLeaf remote_lfa_system_pid; //type: string
        ydk::YLeaf remote_lfa_router_pid; //type: string
        ydk::YLeaf total_backup_distance; //type: uint32
        ydk::YLeaf segment_routing_sid_value; //type: uint32
        ydk::YLeaf num_sid; //type: uint32
        ydk::YLeaf backup_repair_list_size; //type: uint32
        ydk::YLeaf tilfa_computation; //type: IsisTilfaComputation
        ydk::YLeaf prefix_source_node_id; //type: string
        ydk::YLeaf is_downstream; //type: boolean
        ydk::YLeaf is_lc_disjoint; //type: boolean
        ydk::YLeaf is_node_protecting; //type: boolean
        ydk::YLeaf is_primary_path; //type: boolean
        ydk::YLeaf is_srlg_disjoint; //type: boolean
        ydk::YLeaf is_remote_lfa; //type: boolean
        ydk::YLeaf is_epcfrr_lfa; //type: boolean
        ydk::YLeaf is_strict_spflfa; //type: boolean
        ydk::YLeaf is_s_rv6; //type: boolean
        ydk::YLeaf is_tunnel_requested; //type: boolean
        ydk::YLeaf weight; //type: uint32
        ydk::YLeaf outgoing_label; //type: uint32
        class SegmentRoutingSidValueEntry; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry
        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::BackupRepair

        ydk::YList segment_routing_sid_value_entry;
        ydk::YList backup_repair;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry : public ydk::Entity
{
    public:
        SegmentRoutingSidValueEntry();
        ~SegmentRoutingSidValueEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::BackupRepair : public ydk::Entity
{
    public:
        BackupRepair();
        ~BackupRepair();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_node_id; //type: string
        ydk::YLeaf repair_ipv4_addr; //type: string
        ydk::YLeaf repair_ipv6_addr; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32
        ydk::YLeaf repair_strict_spf_label; //type: uint32
        ydk::YLeaf repair_s_rv6sid; //type: string
        ydk::YLeaf repair_s_rv6_end_func; //type: uint16
        ydk::YLeaf repair_s_rv6_strict_spfsid; //type: string
        ydk::YLeaf repair_s_rv6_strict_spf_end_func; //type: uint16

}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::UloopExplicit : public ydk::Entity
{
    public:
        UloopExplicit();
        ~UloopExplicit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_node_id; //type: string
        ydk::YLeaf repair_ipv4_addr; //type: string
        ydk::YLeaf repair_ipv6_addr; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32
        ydk::YLeaf repair_strict_spf_label; //type: uint32
        ydk::YLeaf repair_s_rv6sid; //type: string
        ydk::YLeaf repair_s_rv6_end_func; //type: uint16
        ydk::YLeaf repair_s_rv6_strict_spfsid; //type: string
        ydk::YLeaf repair_s_rv6_strict_spf_end_func; //type: uint16

}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::UloopExplicit


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::Nnh : public ydk::Entity
{
    public:
        Nnh();
        ~Nnh();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_id_set; //type: boolean
        ydk::YLeaf ipv4_set; //type: boolean
        ydk::YLeaf link_id; //type: uint32
        ydk::YLeaf ipv4_address; //type: string

}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::Nnh


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_lsp_id; //type: string
        ydk::YLeaf source_address; //type: string
        class Tags; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Source::Tags
        class NodalSid; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Source::NodalSid

        ydk::YList tags;
        ydk::YList nodal_sid;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Source


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Source::Tags : public ydk::Entity
{
    public:
        Tags();
        ~Tags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Source::Tags


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Source::NodalSid : public ydk::Entity
{
    public:
        NodalSid();
        ~NodalSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_value; //type: uint32
        ydk::YLeaf rflag; //type: uint8
        ydk::YLeaf nflag; //type: uint8
        ydk::YLeaf pflag; //type: uint8
        ydk::YLeaf eflag; //type: uint8
        ydk::YLeaf vflag; //type: uint8
        ydk::YLeaf lflag; //type: uint8
        ydk::YLeaf algorithm; //type: uint8

}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Source::NodalSid


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastSource : public ydk::Entity
{
    public:
        MulticastSource();
        ~MulticastSource();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_lsp_id; //type: string
        ydk::YLeaf source_address; //type: string
        class Tags; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastSource::Tags
        class NodalSid; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid

        ydk::YList tags;
        ydk::YList nodal_sid;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastSource


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastSource::Tags : public ydk::Entity
{
    public:
        Tags();
        ~Tags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastSource::Tags


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid : public ydk::Entity
{
    public:
        NodalSid();
        ~NodalSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_value; //type: uint32
        ydk::YLeaf rflag; //type: uint8
        ydk::YLeaf nflag; //type: uint8
        ydk::YLeaf pflag; //type: uint8
        ydk::YLeaf eflag; //type: uint8
        ydk::YLeaf vflag; //type: uint8
        ydk::YLeaf lflag; //type: uint8
        ydk::YLeaf algorithm; //type: uint8

}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail : public ydk::Entity
{
    public:
        PerLevelAdvertisingDetail();
        ~PerLevelAdvertisingDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisLevel
        ydk::YLeaf advertising_origin; //type: IsisShRouteAdvOrigin
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf is_propagated; //type: boolean
        ydk::YLeaf is_external_metric; //type: boolean
        ydk::YLeaf is_external_reachability; //type: boolean
        ydk::YLeaf is_interarea; //type: boolean
        class SummarizationStatus; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::SummarizationStatus
        class Tags; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::Tags
        class NodalSid; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::NodalSid

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::SummarizationStatus> summarization_status;
        ydk::YList tags;
        ydk::YList nodal_sid;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::SummarizationStatus : public ydk::Entity
{
    public:
        SummarizationStatus();
        ~SummarizationStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_valid; //type: IsisValid
        class SummaryPrefix; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix> summary_prefix;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::SummarizationStatus


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix : public ydk::Entity
{
    public:
        SummaryPrefix();
        ~SummaryPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint8

}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::Tags : public ydk::Entity
{
    public:
        Tags();
        ~Tags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::Tags


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::NodalSid : public ydk::Entity
{
    public:
        NodalSid();
        ~NodalSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_value; //type: uint32
        ydk::YLeaf rflag; //type: uint8
        ydk::YLeaf nflag; //type: uint8
        ydk::YLeaf pflag; //type: uint8
        ydk::YLeaf eflag; //type: uint8
        ydk::YLeaf vflag; //type: uint8
        ydk::YLeaf lflag; //type: uint8
        ydk::YLeaf algorithm; //type: uint8

}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::NodalSid


class Isis::Instances::Instance::Topologies::Topology::Ipv6frrFlexTables : public ydk::Entity
{
    public:
        Ipv6frrFlexTables();
        ~Ipv6frrFlexTables();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv6frrFlexTable; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6frrFlexTables::Ipv6frrFlexTable

        ydk::YList ipv6frr_flex_table;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv6frrFlexTables


class Isis::Instances::Instance::Topologies::Topology::Ipv6frrFlexTables::Ipv6frrFlexTable : public ydk::Entity
{
    public:
        Ipv6frrFlexTable();
        ~Ipv6frrFlexTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flex_alg; //type: uint32
        class Ipv6frrFlexBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6frrFlexTables::Ipv6frrFlexTable::Ipv6frrFlexBackup

        ydk::YList ipv6frr_flex_backup;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv6frrFlexTables::Ipv6frrFlexTable


class Isis::Instances::Instance::Topologies::Topology::Ipv6frrFlexTables::Ipv6frrFlexTable::Ipv6frrFlexBackup : public ydk::Entity
{
    public:
        Ipv6frrFlexBackup();
        ~Ipv6frrFlexBackup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint32
        class ConnectedStatus; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6frrFlexTables::Ipv6frrFlexTable::Ipv6frrFlexBackup::ConnectedStatus
        class RedistributedStatus; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6frrFlexTables::Ipv6frrFlexTable::Ipv6frrFlexBackup::RedistributedStatus
        class NativeStatus; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6frrFlexTables::Ipv6frrFlexTable::Ipv6frrFlexBackup::NativeStatus
        class PerLevelAdvertisingDetail; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6frrFlexTables::Ipv6frrFlexTable::Ipv6frrFlexBackup::PerLevelAdvertisingDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6frrFlexTables::Ipv6frrFlexTable::Ipv6frrFlexBackup::ConnectedStatus> connected_status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6frrFlexTables::Ipv6frrFlexTable::Ipv6frrFlexBackup::RedistributedStatus> redistributed_status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6frrFlexTables::Ipv6frrFlexTable::Ipv6frrFlexBackup::NativeStatus> native_status;
        ydk::YList per_level_advertising_detail;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv6frrFlexTables::Ipv6frrFlexTable::Ipv6frrFlexBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv6frrFlexTables::Ipv6frrFlexTable::Ipv6frrFlexBackup::ConnectedStatus : public ydk::Entity
{
    public:
        ConnectedStatus();
        ~ConnectedStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_valid; //type: IsisValid
        class ConnectedDetails; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6frrFlexTables::Ipv6frrFlexTable::Ipv6frrFlexBackup::ConnectedStatus::ConnectedDetails

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6frrFlexTables::Ipv6frrFlexTable::Ipv6frrFlexBackup::ConnectedStatus::ConnectedDetails> connected_details;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv6frrFlexTables::Ipv6frrFlexTable::Ipv6frrFlexBackup::ConnectedStatus


class Isis::Instances::Instance::Topologies::Topology::Ipv6frrFlexTables::Ipv6frrFlexTable::Ipv6frrFlexBackup::ConnectedStatus::ConnectedDetails : public ydk::Entity
{
    public:
        ConnectedDetails();
        ~ConnectedDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6frrFlexTables::Ipv6frrFlexTable::Ipv6frrFlexBackup::ConnectedStatus::ConnectedDetails::Interface

        ydk::YList interface;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv6frrFlexTables::Ipv6frrFlexTable::Ipv6frrFlexBackup::ConnectedStatus::ConnectedDetails


class Isis::Instances::Instance::Topologies::Topology::Ipv6frrFlexTables::Ipv6frrFlexTable::Ipv6frrFlexBackup::ConnectedStatus::ConnectedDetails::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // Isis::Instances::Instance::Topologies::Topology::Ipv6frrFlexTables::Ipv6frrFlexTable::Ipv6frrFlexBackup::ConnectedStatus::ConnectedDetails::Interface


class Isis::Instances::Instance::Topologies::Topology::Ipv6frrFlexTables::Ipv6frrFlexTable::Ipv6frrFlexBackup::RedistributedStatus : public ydk::Entity
{
    public:
        RedistributedStatus();
        ~RedistributedStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_valid; //type: IsisValid
        class RedistributionDetails; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6frrFlexTables::Ipv6frrFlexTable::Ipv6frrFlexBackup::RedistributedStatus::RedistributionDetails

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6frrFlexTables::Ipv6frrFlexTable::Ipv6frrFlexBackup::RedistributedStatus::RedistributionDetails> redistribution_details;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv6frrFlexTables::Ipv6frrFlexTable::Ipv6frrFlexBackup::RedistributedStatus


class Isis::Instances::Instance::Topologies::Topology::Ipv6frrFlexTables::Ipv6frrFlexTable::Ipv6frrFlexBackup::RedistributedStatus::RedistributionDetails : public ydk::Entity
{
    public:
        RedistributionDetails();
        ~RedistributionDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IsisShRouteRedistDetail; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6frrFlexTables::Ipv6frrFlexTable::Ipv6frrFlexBackup::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail

        ydk::YList isis_sh_route_redist_detail;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv6frrFlexTables::Ipv6frrFlexTable::Ipv6frrFlexBackup::RedistributedStatus::RedistributionDetails


class Isis::Instances::Instance::Topologies::Topology::Ipv6frrFlexTables::Ipv6frrFlexTable::Ipv6frrFlexBackup::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail : public ydk::Entity
{
    public:
        IsisShRouteRedistDetail();
        ~IsisShRouteRedistDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisLevel
        class Owner; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6frrFlexTables::Ipv6frrFlexTable::Ipv6frrFlexBackup::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6frrFlexTables::Ipv6frrFlexTable::Ipv6frrFlexBackup::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner> owner;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv6frrFlexTables::Ipv6frrFlexTable::Ipv6frrFlexBackup::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail


class Isis::Instances::Instance::Topologies::Topology::Ipv6frrFlexTables::Ipv6frrFlexTable::Ipv6frrFlexBackup::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner : public ydk::Entity
{
    public:
        Owner();
        ~Owner();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: IsisRedistProto
        ydk::YLeaf isis_instance_id; //type: string
        ydk::YLeaf ospf_process_id; //type: string
        ydk::YLeaf ospfv3_process_id; //type: string
        ydk::YLeaf bgp_as_number; //type: string
        ydk::YLeaf eigrp_as_number; //type: string
        ydk::YLeaf application_name; //type: string

}; // Isis::Instances::Instance::Topologies::Topology::Ipv6frrFlexTables::Ipv6frrFlexTable::Ipv6frrFlexBackup::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner


class Isis::Instances::Instance::Topologies::Topology::Ipv6frrFlexTables::Ipv6frrFlexTable::Ipv6frrFlexBackup::NativeStatus : public ydk::Entity
{
    public:
        NativeStatus();
        ~NativeStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_valid; //type: IsisValid
        class NativeDetails; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6frrFlexTables::Ipv6frrFlexTable::Ipv6frrFlexBackup::NativeStatus::NativeDetails

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6frrFlexTables::Ipv6frrFlexTable::Ipv6frrFlexBackup::NativeStatus::NativeDetails> native_details;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv6frrFlexTables::Ipv6frrFlexTable::Ipv6frrFlexBackup::NativeStatus


}
}

#endif /* _CISCO_IOS_XR_CLNS_ISIS_OPER_5_ */

