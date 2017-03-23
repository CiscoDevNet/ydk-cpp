#ifndef _CISCO_IOS_XR_CLNS_ISIS_OPER_1_
#define _CISCO_IOS_XR_CLNS_ISIS_OPER_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_clns_isis_oper_0.hpp"

namespace ydk {
namespace Cisco_IOS_XR_clns_isis_oper {


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Added : public Entity
{
    public:
        Added();
        ~Added();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf critical; //type: uint32
        YLeaf high; //type: uint32
        YLeaf medium; //type: uint32
        YLeaf low; //type: uint32



}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Added


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Deleted : public Entity
{
    public:
        Deleted();
        ~Deleted();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf critical; //type: uint32
        YLeaf high; //type: uint32
        YLeaf medium; //type: uint32
        YLeaf low; //type: uint32



}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Deleted


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Modified : public Entity
{
    public:
        Modified();
        ~Modified();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf critical; //type: uint32
        YLeaf high; //type: uint32
        YLeaf medium; //type: uint32
        YLeaf low; //type: uint32



}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Modified


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Touched : public Entity
{
    public:
        Touched();
        ~Touched();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf critical; //type: uint32
        YLeaf high; //type: uint32
        YLeaf medium; //type: uint32
        YLeaf low; //type: uint32



}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Touched


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts : public Entity
{
    public:
        RouteCounts();
        ~RouteCounts();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Unreachable; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Unreachable
        class Reachable; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Reachable
        class Added; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Added
        class Deleted; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Deleted
        class Modified; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Modified
        class Touched; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Touched

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Added> added;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Deleted> deleted;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Modified> modified;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Reachable> reachable;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Touched> touched;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Unreachable> unreachable;


}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Unreachable : public Entity
{
    public:
        Unreachable();
        ~Unreachable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf critical; //type: uint32
        YLeaf high; //type: uint32
        YLeaf medium; //type: uint32
        YLeaf low; //type: uint32



}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Unreachable


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Reachable : public Entity
{
    public:
        Reachable();
        ~Reachable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf critical; //type: uint32
        YLeaf high; //type: uint32
        YLeaf medium; //type: uint32
        YLeaf low; //type: uint32



}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Reachable


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Added : public Entity
{
    public:
        Added();
        ~Added();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf critical; //type: uint32
        YLeaf high; //type: uint32
        YLeaf medium; //type: uint32
        YLeaf low; //type: uint32



}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Added


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Deleted : public Entity
{
    public:
        Deleted();
        ~Deleted();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf critical; //type: uint32
        YLeaf high; //type: uint32
        YLeaf medium; //type: uint32
        YLeaf low; //type: uint32



}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Deleted


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Modified : public Entity
{
    public:
        Modified();
        ~Modified();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf critical; //type: uint32
        YLeaf high; //type: uint32
        YLeaf medium; //type: uint32
        YLeaf low; //type: uint32



}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Modified


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Touched : public Entity
{
    public:
        Touched();
        ~Touched();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf critical; //type: uint32
        YLeaf high; //type: uint32
        YLeaf medium; //type: uint32
        YLeaf low; //type: uint32



}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Touched


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RibBatchCounts : public Entity
{
    public:
        RibBatchCounts();
        ~RibBatchCounts();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf critical; //type: uint32
        YLeaf high; //type: uint32
        YLeaf medium; //type: uint32
        YLeaf low; //type: uint32



}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RibBatchCounts


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels : public Entity
{
    public:
        TeTunnels();
        ~TeTunnels();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TeTunnel; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::TeTunnel

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::TeTunnel> > te_tunnel;


}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::TeTunnel : public Entity
{
    public:
        TeTunnel();
        ~TeTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf system_id; //type: string
        YLeaf interface_name; //type: string
        YLeaf te_system_id; //type: string
        YLeaf te_interface; //type: string
        YLeaf te_bandwidth; //type: uint32
        YLeaf teigp_metric; //type: int32
        YLeaf te_next_hop_ip_address; //type: string
        YLeaf te_mode_type; //type: IsisMetricModeEnum
        YLeaf teipv4fa_enabled; //type: boolean
        YLeaf teipv6fa_enabled; //type: boolean
        YLeaf teipv4aa_enabled; //type: boolean
        YLeaf teipv6aa_enabled; //type: boolean
        YLeaf te_checkpoint_object_id; //type: uint32
        YLeaf te_segment_routing_enabled; //type: boolean
        YLeaf te_segment_routing_strict_spf; //type: boolean
        YLeaf te_segment_routing_exclude; //type: boolean



}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::TeTunnel


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies : public Entity
{
    public:
        Ipv4LinkTopologies();
        ~Ipv4LinkTopologies();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv4LinkTopology; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology> > ipv4_link_topology;


}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology : public Entity
{
    public:
        Ipv4LinkTopology();
        ~Ipv4LinkTopology();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf system_id; //type: string
        YLeaf source_address; //type: string
        YLeaf is_participant; //type: boolean
        YLeaf is_overloaded; //type: boolean
        YLeaf is_attached; //type: boolean

        class ReachabilityStatus; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus
        class AdvertisedPrefixItemCounts; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::AdvertisedPrefixItemCounts

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::AdvertisedPrefixItemCounts> advertised_prefix_item_counts;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus> reachability_status;


}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus : public Entity
{
    public:
        ReachabilityStatus();
        ~ReachabilityStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf reachable_status; //type: IsisReachableEnum

        class ReachableDetails; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails> reachable_details;


}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails : public Entity
{
    public:
        ReachableDetails();
        ~ReachableDetails();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf root_distance; //type: uint32
        YLeaf multicast_root_distance; //type: uint32

        class Paths; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths
        class MulticastPath; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath
        class Parent_; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Parent_
        class Children_; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Children_

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Children_> > children_;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath> > multicast_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Parent_> > parent_;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths> > paths;


}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths : public Entity
{
    public:
        Paths();
        ~Paths();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_id; //type: string
        YLeaf egress_interface; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf neighbor_snpa; //type: string
        YLeaf tag; //type: uint32
        YLeaf tunnel_interface; //type: string
        YLeaf segment_routing_sid_value; //type: uint32
        YLeaf weight; //type: uint32

        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup
        class UloopExplicit; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup> frr_backup;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit> > uloop_explicit;


}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup : public Entity
{
    public:
        FrrBackup();
        ~FrrBackup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_id; //type: string
        YLeaf egress_interface; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf tunnel_egress_interface; //type: string
        YLeaf neighbor_snpa; //type: string
        YLeaf remote_lfa_system_id; //type: string
        YLeaf remote_lfa_router_id; //type: string
        YLeaf remote_lfa_system_pid; //type: string
        YLeaf remote_lfa_router_pid; //type: string
        YLeaf total_backup_distance; //type: uint32
        YLeaf segment_routing_sid_value; //type: uint32
        YLeaf num_sid; //type: uint32
        YLeaf backup_repair_list_size; //type: uint32
        YLeaf tilfa_computation; //type: IsisTilfaComputationEnum
        YLeaf is_downstream; //type: boolean
        YLeaf is_lc_disjoint; //type: boolean
        YLeaf is_node_protecting; //type: boolean
        YLeaf is_primary_path; //type: boolean
        YLeaf is_srlg_disjoint; //type: boolean
        YLeaf is_remote_lfa; //type: boolean
        YLeaf is_epcfrr_lfa; //type: boolean
        YLeaf is_strict_spflfa; //type: boolean
        YLeaf is_tunnel_requested; //type: boolean
        YLeaf weight; //type: uint32
        YLeafList segment_routing_sid_value_entry; //type: list of  uint32

        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair> > backup_repair;


}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair : public Entity
{
    public:
        BackupRepair();
        ~BackupRepair();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_node_id; //type: string
        YLeaf repair_ipv4_addr; //type: string
        YLeaf repair_ipv6_addr; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32
        YLeaf repair_strict_spf_label; //type: uint32



}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit : public Entity
{
    public:
        UloopExplicit();
        ~UloopExplicit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_node_id; //type: string
        YLeaf repair_ipv4_addr; //type: string
        YLeaf repair_ipv6_addr; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32
        YLeaf repair_strict_spf_label; //type: uint32



}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath : public Entity
{
    public:
        MulticastPath();
        ~MulticastPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_id; //type: string
        YLeaf egress_interface; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf neighbor_snpa; //type: string
        YLeaf tag; //type: uint32
        YLeaf tunnel_interface; //type: string
        YLeaf segment_routing_sid_value; //type: uint32
        YLeaf weight; //type: uint32

        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup
        class UloopExplicit; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup> frr_backup;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit> > uloop_explicit;


}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup : public Entity
{
    public:
        FrrBackup();
        ~FrrBackup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_id; //type: string
        YLeaf egress_interface; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf tunnel_egress_interface; //type: string
        YLeaf neighbor_snpa; //type: string
        YLeaf remote_lfa_system_id; //type: string
        YLeaf remote_lfa_router_id; //type: string
        YLeaf remote_lfa_system_pid; //type: string
        YLeaf remote_lfa_router_pid; //type: string
        YLeaf total_backup_distance; //type: uint32
        YLeaf segment_routing_sid_value; //type: uint32
        YLeaf num_sid; //type: uint32
        YLeaf backup_repair_list_size; //type: uint32
        YLeaf tilfa_computation; //type: IsisTilfaComputationEnum
        YLeaf is_downstream; //type: boolean
        YLeaf is_lc_disjoint; //type: boolean
        YLeaf is_node_protecting; //type: boolean
        YLeaf is_primary_path; //type: boolean
        YLeaf is_srlg_disjoint; //type: boolean
        YLeaf is_remote_lfa; //type: boolean
        YLeaf is_epcfrr_lfa; //type: boolean
        YLeaf is_strict_spflfa; //type: boolean
        YLeaf is_tunnel_requested; //type: boolean
        YLeaf weight; //type: uint32
        YLeafList segment_routing_sid_value_entry; //type: list of  uint32

        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair> > backup_repair;


}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair : public Entity
{
    public:
        BackupRepair();
        ~BackupRepair();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_node_id; //type: string
        YLeaf repair_ipv4_addr; //type: string
        YLeaf repair_ipv6_addr; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32
        YLeaf repair_strict_spf_label; //type: uint32



}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit : public Entity
{
    public:
        UloopExplicit();
        ~UloopExplicit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_node_id; //type: string
        YLeaf repair_ipv4_addr; //type: string
        YLeaf repair_ipv6_addr; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32
        YLeaf repair_strict_spf_label; //type: uint32



}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Parent_ : public Entity
{
    public:
        Parent_();
        ~Parent_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_id; //type: string
        YLeaf intermediate_pseudonode; //type: string



}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Parent_


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Children_ : public Entity
{
    public:
        Children_();
        ~Children_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_id; //type: string
        YLeaf intermediate_pseudonode; //type: string



}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Children_


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::AdvertisedPrefixItemCounts : public Entity
{
    public:
        AdvertisedPrefixItemCounts();
        ~AdvertisedPrefixItemCounts();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf critical; //type: uint32
        YLeaf high; //type: uint32
        YLeaf medium; //type: uint32
        YLeaf low; //type: uint32



}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::AdvertisedPrefixItemCounts


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary : public Entity
{
    public:
        TopologySummary();
        ~TopologySummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RouterNodeCount; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::RouterNodeCount
        class PseudonodeNodeCount; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::PseudonodeNodeCount

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::PseudonodeNodeCount> pseudonode_node_count;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::RouterNodeCount> router_node_count;


}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::RouterNodeCount : public Entity
{
    public:
        RouterNodeCount();
        ~RouterNodeCount();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf reachable_node_count; //type: uint32
        YLeaf unreachable_node_count; //type: uint32
        YLeaf unreachable_participant_node_count; //type: uint32



}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::RouterNodeCount


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::PseudonodeNodeCount : public Entity
{
    public:
        PseudonodeNodeCount();
        ~PseudonodeNodeCount();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf reachable_node_count; //type: uint32
        YLeaf unreachable_node_count; //type: uint32
        YLeaf unreachable_participant_node_count; //type: uint32



}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::PseudonodeNodeCount


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies : public Entity
{
    public:
        Ipv6LinkTopologies();
        ~Ipv6LinkTopologies();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv6LinkTopology; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology> > ipv6_link_topology;


}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology : public Entity
{
    public:
        Ipv6LinkTopology();
        ~Ipv6LinkTopology();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf system_id; //type: string
        YLeaf source_address; //type: string
        YLeaf is_participant; //type: boolean
        YLeaf is_overloaded; //type: boolean
        YLeaf is_attached; //type: boolean

        class ReachabilityStatus; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus
        class AdvertisedPrefixItemCounts; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::AdvertisedPrefixItemCounts

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::AdvertisedPrefixItemCounts> advertised_prefix_item_counts;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus> reachability_status;


}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus : public Entity
{
    public:
        ReachabilityStatus();
        ~ReachabilityStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf reachable_status; //type: IsisReachableEnum

        class ReachableDetails; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails> reachable_details;


}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails : public Entity
{
    public:
        ReachableDetails();
        ~ReachableDetails();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf root_distance; //type: uint32
        YLeaf multicast_root_distance; //type: uint32

        class Paths; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths
        class MulticastPath; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath
        class Parent_; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Parent_
        class Children_; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Children_

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Children_> > children_;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath> > multicast_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Parent_> > parent_;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths> > paths;


}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths : public Entity
{
    public:
        Paths();
        ~Paths();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_id; //type: string
        YLeaf egress_interface; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf neighbor_snpa; //type: string
        YLeaf tag; //type: uint32
        YLeaf tunnel_interface; //type: string
        YLeaf segment_routing_sid_value; //type: uint32
        YLeaf weight; //type: uint32

        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup
        class UloopExplicit; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup> frr_backup;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit> > uloop_explicit;


}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup : public Entity
{
    public:
        FrrBackup();
        ~FrrBackup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_id; //type: string
        YLeaf egress_interface; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf tunnel_egress_interface; //type: string
        YLeaf neighbor_snpa; //type: string
        YLeaf remote_lfa_system_id; //type: string
        YLeaf remote_lfa_router_id; //type: string
        YLeaf remote_lfa_system_pid; //type: string
        YLeaf remote_lfa_router_pid; //type: string
        YLeaf total_backup_distance; //type: uint32
        YLeaf segment_routing_sid_value; //type: uint32
        YLeaf num_sid; //type: uint32
        YLeaf backup_repair_list_size; //type: uint32
        YLeaf tilfa_computation; //type: IsisTilfaComputationEnum
        YLeaf is_downstream; //type: boolean
        YLeaf is_lc_disjoint; //type: boolean
        YLeaf is_node_protecting; //type: boolean
        YLeaf is_primary_path; //type: boolean
        YLeaf is_srlg_disjoint; //type: boolean
        YLeaf is_remote_lfa; //type: boolean
        YLeaf is_epcfrr_lfa; //type: boolean
        YLeaf is_strict_spflfa; //type: boolean
        YLeaf is_tunnel_requested; //type: boolean
        YLeaf weight; //type: uint32
        YLeafList segment_routing_sid_value_entry; //type: list of  uint32

        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair> > backup_repair;


}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair : public Entity
{
    public:
        BackupRepair();
        ~BackupRepair();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_node_id; //type: string
        YLeaf repair_ipv4_addr; //type: string
        YLeaf repair_ipv6_addr; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32
        YLeaf repair_strict_spf_label; //type: uint32



}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit : public Entity
{
    public:
        UloopExplicit();
        ~UloopExplicit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_node_id; //type: string
        YLeaf repair_ipv4_addr; //type: string
        YLeaf repair_ipv6_addr; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32
        YLeaf repair_strict_spf_label; //type: uint32



}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::UloopExplicit


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath : public Entity
{
    public:
        MulticastPath();
        ~MulticastPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_id; //type: string
        YLeaf egress_interface; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf neighbor_snpa; //type: string
        YLeaf tag; //type: uint32
        YLeaf tunnel_interface; //type: string
        YLeaf segment_routing_sid_value; //type: uint32
        YLeaf weight; //type: uint32

        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup
        class UloopExplicit; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup> frr_backup;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit> > uloop_explicit;


}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup : public Entity
{
    public:
        FrrBackup();
        ~FrrBackup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_id; //type: string
        YLeaf egress_interface; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf tunnel_egress_interface; //type: string
        YLeaf neighbor_snpa; //type: string
        YLeaf remote_lfa_system_id; //type: string
        YLeaf remote_lfa_router_id; //type: string
        YLeaf remote_lfa_system_pid; //type: string
        YLeaf remote_lfa_router_pid; //type: string
        YLeaf total_backup_distance; //type: uint32
        YLeaf segment_routing_sid_value; //type: uint32
        YLeaf num_sid; //type: uint32
        YLeaf backup_repair_list_size; //type: uint32
        YLeaf tilfa_computation; //type: IsisTilfaComputationEnum
        YLeaf is_downstream; //type: boolean
        YLeaf is_lc_disjoint; //type: boolean
        YLeaf is_node_protecting; //type: boolean
        YLeaf is_primary_path; //type: boolean
        YLeaf is_srlg_disjoint; //type: boolean
        YLeaf is_remote_lfa; //type: boolean
        YLeaf is_epcfrr_lfa; //type: boolean
        YLeaf is_strict_spflfa; //type: boolean
        YLeaf is_tunnel_requested; //type: boolean
        YLeaf weight; //type: uint32
        YLeafList segment_routing_sid_value_entry; //type: list of  uint32

        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair> > backup_repair;


}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair : public Entity
{
    public:
        BackupRepair();
        ~BackupRepair();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_node_id; //type: string
        YLeaf repair_ipv4_addr; //type: string
        YLeaf repair_ipv6_addr; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32
        YLeaf repair_strict_spf_label; //type: uint32



}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit : public Entity
{
    public:
        UloopExplicit();
        ~UloopExplicit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_node_id; //type: string
        YLeaf repair_ipv4_addr; //type: string
        YLeaf repair_ipv6_addr; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32
        YLeaf repair_strict_spf_label; //type: uint32



}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::UloopExplicit


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Parent_ : public Entity
{
    public:
        Parent_();
        ~Parent_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_id; //type: string
        YLeaf intermediate_pseudonode; //type: string



}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Parent_


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Children_ : public Entity
{
    public:
        Children_();
        ~Children_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_id; //type: string
        YLeaf intermediate_pseudonode; //type: string



}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Children_


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::AdvertisedPrefixItemCounts : public Entity
{
    public:
        AdvertisedPrefixItemCounts();
        ~AdvertisedPrefixItemCounts();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf critical; //type: uint32
        YLeaf high; //type: uint32
        YLeaf medium; //type: uint32
        YLeaf low; //type: uint32



}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::AdvertisedPrefixItemCounts


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes : public Entity
{
    public:
        Ipv6Routes();
        ~Ipv6Routes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv6Route; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route> > ipv6_route;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route : public Entity
{
    public:
        Ipv6Route();
        ~Ipv6Route();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint32

        class ConnectedStatus; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus
        class RedistributedStatus; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus
        class NativeStatus; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus
        class PerLevelAdvertisingDetail; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus> connected_status;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus> native_status;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail> > per_level_advertising_detail;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus> redistributed_status;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus : public Entity
{
    public:
        ConnectedStatus();
        ~ConnectedStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_valid; //type: IsisValidEnum

        class ConnectedDetails; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::ConnectedDetails

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::ConnectedDetails> connected_details;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::ConnectedDetails : public Entity
{
    public:
        ConnectedDetails();
        ~ConnectedDetails();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList interface; //type: list of  string



}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::ConnectedDetails


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus : public Entity
{
    public:
        RedistributedStatus();
        ~RedistributedStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_valid; //type: IsisValidEnum

        class RedistributionDetails; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails> redistribution_details;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails : public Entity
{
    public:
        RedistributionDetails();
        ~RedistributionDetails();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class IsisShRouteRedistDetail; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail> > isis_sh_route_redist_detail;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail : public Entity
{
    public:
        IsisShRouteRedistDetail();
        ~IsisShRouteRedistDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisLevelEnum

        class Owner; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner> owner;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner : public Entity
{
    public:
        Owner();
        ~Owner();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf protocol; //type: IsisRedistProtoEnum
        YLeaf isis_instance_id; //type: string
        YLeaf ospf_process_id; //type: string
        YLeaf ospfv3_process_id; //type: string
        YLeaf bgp_as_number; //type: string
        YLeaf eigrp_as_number; //type: string
        YLeaf application_name; //type: string



}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus : public Entity
{
    public:
        NativeStatus();
        ~NativeStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_valid; //type: IsisValidEnum

        class NativeDetails; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails> native_details;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails : public Entity
{
    public:
        NativeDetails();
        ~NativeDetails();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf priority; //type: IsisPrefixPriorityEnum

        class Primary; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary
        class Backup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup> > backup;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary> primary;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary : public Entity
{
    public:
        Primary();
        ~Primary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf origin; //type: IsisPrefixOriginEnum
        YLeaf metric; //type: uint32
        YLeaf multicast_metric; //type: uint32
        YLeaf is_external_metric; //type: boolean
        YLeaf administrative_distance; //type: uint16

        class Paths; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths
        class UcmpNextHop; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop
        class MulticastPath; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath
        class SrtePath; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath
        class ExplicitPath; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath
        class Source; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Source
        class MulticastSource; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastSource

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath> > explicit_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath> > multicast_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastSource> > multicast_source;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths> > paths;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Source> > source;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath> > srte_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop> > ucmp_next_hop;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths : public Entity
{
    public:
        Paths();
        ~Paths();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_id; //type: string
        YLeaf egress_interface; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf neighbor_snpa; //type: string
        YLeaf tag; //type: uint32
        YLeaf tunnel_interface; //type: string
        YLeaf segment_routing_sid_value; //type: uint32
        YLeaf weight; //type: uint32

        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup
        class UloopExplicit; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup> frr_backup;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit> > uloop_explicit;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup : public Entity
{
    public:
        FrrBackup();
        ~FrrBackup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_id; //type: string
        YLeaf egress_interface; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf tunnel_egress_interface; //type: string
        YLeaf neighbor_snpa; //type: string
        YLeaf remote_lfa_system_id; //type: string
        YLeaf remote_lfa_router_id; //type: string
        YLeaf remote_lfa_system_pid; //type: string
        YLeaf remote_lfa_router_pid; //type: string
        YLeaf total_backup_distance; //type: uint32
        YLeaf segment_routing_sid_value; //type: uint32
        YLeaf num_sid; //type: uint32
        YLeaf backup_repair_list_size; //type: uint32
        YLeaf tilfa_computation; //type: IsisTilfaComputationEnum
        YLeaf is_downstream; //type: boolean
        YLeaf is_lc_disjoint; //type: boolean
        YLeaf is_node_protecting; //type: boolean
        YLeaf is_primary_path; //type: boolean
        YLeaf is_srlg_disjoint; //type: boolean
        YLeaf is_remote_lfa; //type: boolean
        YLeaf is_epcfrr_lfa; //type: boolean
        YLeaf is_strict_spflfa; //type: boolean
        YLeaf is_tunnel_requested; //type: boolean
        YLeaf weight; //type: uint32
        YLeafList segment_routing_sid_value_entry; //type: list of  uint32

        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair> > backup_repair;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair : public Entity
{
    public:
        BackupRepair();
        ~BackupRepair();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_node_id; //type: string
        YLeaf repair_ipv4_addr; //type: string
        YLeaf repair_ipv6_addr; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32
        YLeaf repair_strict_spf_label; //type: uint32



}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit : public Entity
{
    public:
        UloopExplicit();
        ~UloopExplicit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_node_id; //type: string
        YLeaf repair_ipv4_addr; //type: string
        YLeaf repair_ipv6_addr; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32
        YLeaf repair_strict_spf_label; //type: uint32



}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop : public Entity
{
    public:
        UcmpNextHop();
        ~UcmpNextHop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_id; //type: string
        YLeaf egress_interface; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf neighbor_snpa; //type: string
        YLeaf tag; //type: uint32
        YLeaf total_ucmp_distance; //type: uint32
        YLeaf segment_routing_sid_value; //type: uint32
        YLeaf weight; //type: uint32

        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup> frr_backup;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup : public Entity
{
    public:
        FrrBackup();
        ~FrrBackup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_id; //type: string
        YLeaf egress_interface; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf tunnel_egress_interface; //type: string
        YLeaf neighbor_snpa; //type: string
        YLeaf remote_lfa_system_id; //type: string
        YLeaf remote_lfa_router_id; //type: string
        YLeaf remote_lfa_system_pid; //type: string
        YLeaf remote_lfa_router_pid; //type: string
        YLeaf total_backup_distance; //type: uint32
        YLeaf segment_routing_sid_value; //type: uint32
        YLeaf num_sid; //type: uint32
        YLeaf backup_repair_list_size; //type: uint32
        YLeaf tilfa_computation; //type: IsisTilfaComputationEnum
        YLeaf is_downstream; //type: boolean
        YLeaf is_lc_disjoint; //type: boolean
        YLeaf is_node_protecting; //type: boolean
        YLeaf is_primary_path; //type: boolean
        YLeaf is_srlg_disjoint; //type: boolean
        YLeaf is_remote_lfa; //type: boolean
        YLeaf is_epcfrr_lfa; //type: boolean
        YLeaf is_strict_spflfa; //type: boolean
        YLeaf is_tunnel_requested; //type: boolean
        YLeaf weight; //type: uint32
        YLeafList segment_routing_sid_value_entry; //type: list of  uint32

        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair> > backup_repair;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair : public Entity
{
    public:
        BackupRepair();
        ~BackupRepair();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_node_id; //type: string
        YLeaf repair_ipv4_addr; //type: string
        YLeaf repair_ipv6_addr; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32
        YLeaf repair_strict_spf_label; //type: uint32



}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath : public Entity
{
    public:
        MulticastPath();
        ~MulticastPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_id; //type: string
        YLeaf egress_interface; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf neighbor_snpa; //type: string
        YLeaf tag; //type: uint32
        YLeaf tunnel_interface; //type: string
        YLeaf segment_routing_sid_value; //type: uint32
        YLeaf weight; //type: uint32

        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup
        class UloopExplicit; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup> frr_backup;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit> > uloop_explicit;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup : public Entity
{
    public:
        FrrBackup();
        ~FrrBackup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_id; //type: string
        YLeaf egress_interface; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf tunnel_egress_interface; //type: string
        YLeaf neighbor_snpa; //type: string
        YLeaf remote_lfa_system_id; //type: string
        YLeaf remote_lfa_router_id; //type: string
        YLeaf remote_lfa_system_pid; //type: string
        YLeaf remote_lfa_router_pid; //type: string
        YLeaf total_backup_distance; //type: uint32
        YLeaf segment_routing_sid_value; //type: uint32
        YLeaf num_sid; //type: uint32
        YLeaf backup_repair_list_size; //type: uint32
        YLeaf tilfa_computation; //type: IsisTilfaComputationEnum
        YLeaf is_downstream; //type: boolean
        YLeaf is_lc_disjoint; //type: boolean
        YLeaf is_node_protecting; //type: boolean
        YLeaf is_primary_path; //type: boolean
        YLeaf is_srlg_disjoint; //type: boolean
        YLeaf is_remote_lfa; //type: boolean
        YLeaf is_epcfrr_lfa; //type: boolean
        YLeaf is_strict_spflfa; //type: boolean
        YLeaf is_tunnel_requested; //type: boolean
        YLeaf weight; //type: uint32
        YLeafList segment_routing_sid_value_entry; //type: list of  uint32

        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair> > backup_repair;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair : public Entity
{
    public:
        BackupRepair();
        ~BackupRepair();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_node_id; //type: string
        YLeaf repair_ipv4_addr; //type: string
        YLeaf repair_ipv6_addr; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32
        YLeaf repair_strict_spf_label; //type: uint32



}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit : public Entity
{
    public:
        UloopExplicit();
        ~UloopExplicit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_node_id; //type: string
        YLeaf repair_ipv4_addr; //type: string
        YLeaf repair_ipv6_addr; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32
        YLeaf repair_strict_spf_label; //type: uint32



}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath : public Entity
{
    public:
        SrtePath();
        ~SrtePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_id; //type: string
        YLeaf egress_interface; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf neighbor_snpa; //type: string
        YLeaf tag; //type: uint32
        YLeaf tunnel_interface; //type: string
        YLeaf segment_routing_sid_value; //type: uint32
        YLeaf weight; //type: uint32

        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup
        class UloopExplicit; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup> frr_backup;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit> > uloop_explicit;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup : public Entity
{
    public:
        FrrBackup();
        ~FrrBackup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_id; //type: string
        YLeaf egress_interface; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf tunnel_egress_interface; //type: string
        YLeaf neighbor_snpa; //type: string
        YLeaf remote_lfa_system_id; //type: string
        YLeaf remote_lfa_router_id; //type: string
        YLeaf remote_lfa_system_pid; //type: string
        YLeaf remote_lfa_router_pid; //type: string
        YLeaf total_backup_distance; //type: uint32
        YLeaf segment_routing_sid_value; //type: uint32
        YLeaf num_sid; //type: uint32
        YLeaf backup_repair_list_size; //type: uint32
        YLeaf tilfa_computation; //type: IsisTilfaComputationEnum
        YLeaf is_downstream; //type: boolean
        YLeaf is_lc_disjoint; //type: boolean
        YLeaf is_node_protecting; //type: boolean
        YLeaf is_primary_path; //type: boolean
        YLeaf is_srlg_disjoint; //type: boolean
        YLeaf is_remote_lfa; //type: boolean
        YLeaf is_epcfrr_lfa; //type: boolean
        YLeaf is_strict_spflfa; //type: boolean
        YLeaf is_tunnel_requested; //type: boolean
        YLeaf weight; //type: uint32
        YLeafList segment_routing_sid_value_entry; //type: list of  uint32

        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair> > backup_repair;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair : public Entity
{
    public:
        BackupRepair();
        ~BackupRepair();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_node_id; //type: string
        YLeaf repair_ipv4_addr; //type: string
        YLeaf repair_ipv6_addr; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32
        YLeaf repair_strict_spf_label; //type: uint32



}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit : public Entity
{
    public:
        UloopExplicit();
        ~UloopExplicit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_node_id; //type: string
        YLeaf repair_ipv4_addr; //type: string
        YLeaf repair_ipv6_addr; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32
        YLeaf repair_strict_spf_label; //type: uint32



}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath : public Entity
{
    public:
        ExplicitPath();
        ~ExplicitPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_id; //type: string
        YLeaf egress_interface; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf neighbor_snpa; //type: string
        YLeaf tag; //type: uint32
        YLeaf tunnel_interface; //type: string
        YLeaf segment_routing_sid_value; //type: uint32
        YLeaf weight; //type: uint32

        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup
        class UloopExplicit; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::UloopExplicit

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup> frr_backup;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::UloopExplicit> > uloop_explicit;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup : public Entity
{
    public:
        FrrBackup();
        ~FrrBackup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_id; //type: string
        YLeaf egress_interface; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf tunnel_egress_interface; //type: string
        YLeaf neighbor_snpa; //type: string
        YLeaf remote_lfa_system_id; //type: string
        YLeaf remote_lfa_router_id; //type: string
        YLeaf remote_lfa_system_pid; //type: string
        YLeaf remote_lfa_router_pid; //type: string
        YLeaf total_backup_distance; //type: uint32
        YLeaf segment_routing_sid_value; //type: uint32
        YLeaf num_sid; //type: uint32
        YLeaf backup_repair_list_size; //type: uint32
        YLeaf tilfa_computation; //type: IsisTilfaComputationEnum
        YLeaf is_downstream; //type: boolean
        YLeaf is_lc_disjoint; //type: boolean
        YLeaf is_node_protecting; //type: boolean
        YLeaf is_primary_path; //type: boolean
        YLeaf is_srlg_disjoint; //type: boolean
        YLeaf is_remote_lfa; //type: boolean
        YLeaf is_epcfrr_lfa; //type: boolean
        YLeaf is_strict_spflfa; //type: boolean
        YLeaf is_tunnel_requested; //type: boolean
        YLeaf weight; //type: uint32
        YLeafList segment_routing_sid_value_entry; //type: list of  uint32

        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair> > backup_repair;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair : public Entity
{
    public:
        BackupRepair();
        ~BackupRepair();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_node_id; //type: string
        YLeaf repair_ipv4_addr; //type: string
        YLeaf repair_ipv6_addr; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32
        YLeaf repair_strict_spf_label; //type: uint32



}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::UloopExplicit : public Entity
{
    public:
        UloopExplicit();
        ~UloopExplicit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_node_id; //type: string
        YLeaf repair_ipv4_addr; //type: string
        YLeaf repair_ipv6_addr; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32
        YLeaf repair_strict_spf_label; //type: uint32



}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::ExplicitPath::UloopExplicit


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Source : public Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_lsp_id; //type: string
        YLeaf source_address; //type: string
        YLeafList tags; //type: list of  uint32

        class NodalSid; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Source::NodalSid

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Source::NodalSid> > nodal_sid;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Source


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Source::NodalSid : public Entity
{
    public:
        NodalSid();
        ~NodalSid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sid_value; //type: uint32
        YLeaf rflag; //type: uint8
        YLeaf nflag; //type: uint8
        YLeaf pflag; //type: uint8
        YLeaf eflag; //type: uint8
        YLeaf vflag; //type: uint8
        YLeaf lflag; //type: uint8
        YLeaf algorithm; //type: uint8



}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Source::NodalSid


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastSource : public Entity
{
    public:
        MulticastSource();
        ~MulticastSource();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_lsp_id; //type: string
        YLeaf source_address; //type: string
        YLeafList tags; //type: list of  uint32

        class NodalSid; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastSource::NodalSid

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastSource::NodalSid> > nodal_sid;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastSource


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastSource::NodalSid : public Entity
{
    public:
        NodalSid();
        ~NodalSid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sid_value; //type: uint32
        YLeaf rflag; //type: uint8
        YLeaf nflag; //type: uint8
        YLeaf pflag; //type: uint8
        YLeaf eflag; //type: uint8
        YLeaf vflag; //type: uint8
        YLeaf lflag; //type: uint8
        YLeaf algorithm; //type: uint8



}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastSource::NodalSid


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup : public Entity
{
    public:
        Backup();
        ~Backup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf origin; //type: IsisPrefixOriginEnum
        YLeaf metric; //type: uint32
        YLeaf multicast_metric; //type: uint32
        YLeaf is_external_metric; //type: boolean
        YLeaf administrative_distance; //type: uint16

        class Paths; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths
        class UcmpNextHop; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::UcmpNextHop
        class MulticastPath; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath
        class SrtePath; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath
        class ExplicitPath; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath
        class Source; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Source
        class MulticastSource; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastSource

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath> > explicit_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath> > multicast_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastSource> > multicast_source;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths> > paths;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Source> > source;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath> > srte_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::UcmpNextHop> > ucmp_next_hop;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths : public Entity
{
    public:
        Paths();
        ~Paths();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_id; //type: string
        YLeaf egress_interface; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf neighbor_snpa; //type: string
        YLeaf tag; //type: uint32
        YLeaf tunnel_interface; //type: string
        YLeaf segment_routing_sid_value; //type: uint32
        YLeaf weight; //type: uint32

        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup
        class UloopExplicit; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::UloopExplicit

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup> frr_backup;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::UloopExplicit> > uloop_explicit;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup : public Entity
{
    public:
        FrrBackup();
        ~FrrBackup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_id; //type: string
        YLeaf egress_interface; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf tunnel_egress_interface; //type: string
        YLeaf neighbor_snpa; //type: string
        YLeaf remote_lfa_system_id; //type: string
        YLeaf remote_lfa_router_id; //type: string
        YLeaf remote_lfa_system_pid; //type: string
        YLeaf remote_lfa_router_pid; //type: string
        YLeaf total_backup_distance; //type: uint32
        YLeaf segment_routing_sid_value; //type: uint32
        YLeaf num_sid; //type: uint32
        YLeaf backup_repair_list_size; //type: uint32
        YLeaf tilfa_computation; //type: IsisTilfaComputationEnum
        YLeaf is_downstream; //type: boolean
        YLeaf is_lc_disjoint; //type: boolean
        YLeaf is_node_protecting; //type: boolean
        YLeaf is_primary_path; //type: boolean
        YLeaf is_srlg_disjoint; //type: boolean
        YLeaf is_remote_lfa; //type: boolean
        YLeaf is_epcfrr_lfa; //type: boolean
        YLeaf is_strict_spflfa; //type: boolean
        YLeaf is_tunnel_requested; //type: boolean
        YLeaf weight; //type: uint32
        YLeafList segment_routing_sid_value_entry; //type: list of  uint32

        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::BackupRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::BackupRepair> > backup_repair;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::BackupRepair : public Entity
{
    public:
        BackupRepair();
        ~BackupRepair();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_node_id; //type: string
        YLeaf repair_ipv4_addr; //type: string
        YLeaf repair_ipv6_addr; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32
        YLeaf repair_strict_spf_label; //type: uint32



}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::UloopExplicit : public Entity
{
    public:
        UloopExplicit();
        ~UloopExplicit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_node_id; //type: string
        YLeaf repair_ipv4_addr; //type: string
        YLeaf repair_ipv6_addr; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32
        YLeaf repair_strict_spf_label; //type: uint32



}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::UloopExplicit


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::UcmpNextHop : public Entity
{
    public:
        UcmpNextHop();
        ~UcmpNextHop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_id; //type: string
        YLeaf egress_interface; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf neighbor_snpa; //type: string
        YLeaf tag; //type: uint32
        YLeaf total_ucmp_distance; //type: uint32
        YLeaf segment_routing_sid_value; //type: uint32
        YLeaf weight; //type: uint32

        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup> frr_backup;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::UcmpNextHop


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup : public Entity
{
    public:
        FrrBackup();
        ~FrrBackup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_id; //type: string
        YLeaf egress_interface; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf tunnel_egress_interface; //type: string
        YLeaf neighbor_snpa; //type: string
        YLeaf remote_lfa_system_id; //type: string
        YLeaf remote_lfa_router_id; //type: string
        YLeaf remote_lfa_system_pid; //type: string
        YLeaf remote_lfa_router_pid; //type: string
        YLeaf total_backup_distance; //type: uint32
        YLeaf segment_routing_sid_value; //type: uint32
        YLeaf num_sid; //type: uint32
        YLeaf backup_repair_list_size; //type: uint32
        YLeaf tilfa_computation; //type: IsisTilfaComputationEnum
        YLeaf is_downstream; //type: boolean
        YLeaf is_lc_disjoint; //type: boolean
        YLeaf is_node_protecting; //type: boolean
        YLeaf is_primary_path; //type: boolean
        YLeaf is_srlg_disjoint; //type: boolean
        YLeaf is_remote_lfa; //type: boolean
        YLeaf is_epcfrr_lfa; //type: boolean
        YLeaf is_strict_spflfa; //type: boolean
        YLeaf is_tunnel_requested; //type: boolean
        YLeaf weight; //type: uint32
        YLeafList segment_routing_sid_value_entry; //type: list of  uint32

        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::BackupRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::BackupRepair> > backup_repair;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::BackupRepair : public Entity
{
    public:
        BackupRepair();
        ~BackupRepair();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_node_id; //type: string
        YLeaf repair_ipv4_addr; //type: string
        YLeaf repair_ipv6_addr; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32
        YLeaf repair_strict_spf_label; //type: uint32



}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath : public Entity
{
    public:
        MulticastPath();
        ~MulticastPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_id; //type: string
        YLeaf egress_interface; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf neighbor_snpa; //type: string
        YLeaf tag; //type: uint32
        YLeaf tunnel_interface; //type: string
        YLeaf segment_routing_sid_value; //type: uint32
        YLeaf weight; //type: uint32

        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup
        class UloopExplicit; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::UloopExplicit

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup> frr_backup;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::UloopExplicit> > uloop_explicit;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup : public Entity
{
    public:
        FrrBackup();
        ~FrrBackup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_id; //type: string
        YLeaf egress_interface; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf tunnel_egress_interface; //type: string
        YLeaf neighbor_snpa; //type: string
        YLeaf remote_lfa_system_id; //type: string
        YLeaf remote_lfa_router_id; //type: string
        YLeaf remote_lfa_system_pid; //type: string
        YLeaf remote_lfa_router_pid; //type: string
        YLeaf total_backup_distance; //type: uint32
        YLeaf segment_routing_sid_value; //type: uint32
        YLeaf num_sid; //type: uint32
        YLeaf backup_repair_list_size; //type: uint32
        YLeaf tilfa_computation; //type: IsisTilfaComputationEnum
        YLeaf is_downstream; //type: boolean
        YLeaf is_lc_disjoint; //type: boolean
        YLeaf is_node_protecting; //type: boolean
        YLeaf is_primary_path; //type: boolean
        YLeaf is_srlg_disjoint; //type: boolean
        YLeaf is_remote_lfa; //type: boolean
        YLeaf is_epcfrr_lfa; //type: boolean
        YLeaf is_strict_spflfa; //type: boolean
        YLeaf is_tunnel_requested; //type: boolean
        YLeaf weight; //type: uint32
        YLeafList segment_routing_sid_value_entry; //type: list of  uint32

        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::BackupRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::BackupRepair> > backup_repair;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::BackupRepair : public Entity
{
    public:
        BackupRepair();
        ~BackupRepair();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_node_id; //type: string
        YLeaf repair_ipv4_addr; //type: string
        YLeaf repair_ipv6_addr; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32
        YLeaf repair_strict_spf_label; //type: uint32



}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::UloopExplicit : public Entity
{
    public:
        UloopExplicit();
        ~UloopExplicit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_node_id; //type: string
        YLeaf repair_ipv4_addr; //type: string
        YLeaf repair_ipv6_addr; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32
        YLeaf repair_strict_spf_label; //type: uint32



}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::UloopExplicit


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath : public Entity
{
    public:
        SrtePath();
        ~SrtePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_id; //type: string
        YLeaf egress_interface; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf neighbor_snpa; //type: string
        YLeaf tag; //type: uint32
        YLeaf tunnel_interface; //type: string
        YLeaf segment_routing_sid_value; //type: uint32
        YLeaf weight; //type: uint32

        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup
        class UloopExplicit; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::UloopExplicit

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup> frr_backup;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::UloopExplicit> > uloop_explicit;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup : public Entity
{
    public:
        FrrBackup();
        ~FrrBackup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_id; //type: string
        YLeaf egress_interface; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf tunnel_egress_interface; //type: string
        YLeaf neighbor_snpa; //type: string
        YLeaf remote_lfa_system_id; //type: string
        YLeaf remote_lfa_router_id; //type: string
        YLeaf remote_lfa_system_pid; //type: string
        YLeaf remote_lfa_router_pid; //type: string
        YLeaf total_backup_distance; //type: uint32
        YLeaf segment_routing_sid_value; //type: uint32
        YLeaf num_sid; //type: uint32
        YLeaf backup_repair_list_size; //type: uint32
        YLeaf tilfa_computation; //type: IsisTilfaComputationEnum
        YLeaf is_downstream; //type: boolean
        YLeaf is_lc_disjoint; //type: boolean
        YLeaf is_node_protecting; //type: boolean
        YLeaf is_primary_path; //type: boolean
        YLeaf is_srlg_disjoint; //type: boolean
        YLeaf is_remote_lfa; //type: boolean
        YLeaf is_epcfrr_lfa; //type: boolean
        YLeaf is_strict_spflfa; //type: boolean
        YLeaf is_tunnel_requested; //type: boolean
        YLeaf weight; //type: uint32
        YLeafList segment_routing_sid_value_entry; //type: list of  uint32

        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::BackupRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::BackupRepair> > backup_repair;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::BackupRepair : public Entity
{
    public:
        BackupRepair();
        ~BackupRepair();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_node_id; //type: string
        YLeaf repair_ipv4_addr; //type: string
        YLeaf repair_ipv6_addr; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32
        YLeaf repair_strict_spf_label; //type: uint32



}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::UloopExplicit : public Entity
{
    public:
        UloopExplicit();
        ~UloopExplicit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_node_id; //type: string
        YLeaf repair_ipv4_addr; //type: string
        YLeaf repair_ipv6_addr; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32
        YLeaf repair_strict_spf_label; //type: uint32



}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::UloopExplicit


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath : public Entity
{
    public:
        ExplicitPath();
        ~ExplicitPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_id; //type: string
        YLeaf egress_interface; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf neighbor_snpa; //type: string
        YLeaf tag; //type: uint32
        YLeaf tunnel_interface; //type: string
        YLeaf segment_routing_sid_value; //type: uint32
        YLeaf weight; //type: uint32

        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup
        class UloopExplicit; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::UloopExplicit

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup> frr_backup;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::UloopExplicit> > uloop_explicit;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup : public Entity
{
    public:
        FrrBackup();
        ~FrrBackup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_id; //type: string
        YLeaf egress_interface; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf tunnel_egress_interface; //type: string
        YLeaf neighbor_snpa; //type: string
        YLeaf remote_lfa_system_id; //type: string
        YLeaf remote_lfa_router_id; //type: string
        YLeaf remote_lfa_system_pid; //type: string
        YLeaf remote_lfa_router_pid; //type: string
        YLeaf total_backup_distance; //type: uint32
        YLeaf segment_routing_sid_value; //type: uint32
        YLeaf num_sid; //type: uint32
        YLeaf backup_repair_list_size; //type: uint32
        YLeaf tilfa_computation; //type: IsisTilfaComputationEnum
        YLeaf is_downstream; //type: boolean
        YLeaf is_lc_disjoint; //type: boolean
        YLeaf is_node_protecting; //type: boolean
        YLeaf is_primary_path; //type: boolean
        YLeaf is_srlg_disjoint; //type: boolean
        YLeaf is_remote_lfa; //type: boolean
        YLeaf is_epcfrr_lfa; //type: boolean
        YLeaf is_strict_spflfa; //type: boolean
        YLeaf is_tunnel_requested; //type: boolean
        YLeaf weight; //type: uint32
        YLeafList segment_routing_sid_value_entry; //type: list of  uint32

        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::BackupRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::BackupRepair> > backup_repair;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::BackupRepair : public Entity
{
    public:
        BackupRepair();
        ~BackupRepair();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_node_id; //type: string
        YLeaf repair_ipv4_addr; //type: string
        YLeaf repair_ipv6_addr; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32
        YLeaf repair_strict_spf_label; //type: uint32



}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::UloopExplicit : public Entity
{
    public:
        UloopExplicit();
        ~UloopExplicit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_node_id; //type: string
        YLeaf repair_ipv4_addr; //type: string
        YLeaf repair_ipv6_addr; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32
        YLeaf repair_strict_spf_label; //type: uint32



}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::ExplicitPath::UloopExplicit


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Source : public Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_lsp_id; //type: string
        YLeaf source_address; //type: string
        YLeafList tags; //type: list of  uint32

        class NodalSid; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Source::NodalSid

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Source::NodalSid> > nodal_sid;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Source


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Source::NodalSid : public Entity
{
    public:
        NodalSid();
        ~NodalSid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sid_value; //type: uint32
        YLeaf rflag; //type: uint8
        YLeaf nflag; //type: uint8
        YLeaf pflag; //type: uint8
        YLeaf eflag; //type: uint8
        YLeaf vflag; //type: uint8
        YLeaf lflag; //type: uint8
        YLeaf algorithm; //type: uint8



}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Source::NodalSid


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastSource : public Entity
{
    public:
        MulticastSource();
        ~MulticastSource();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_lsp_id; //type: string
        YLeaf source_address; //type: string
        YLeafList tags; //type: list of  uint32

        class NodalSid; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid> > nodal_sid;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastSource


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid : public Entity
{
    public:
        NodalSid();
        ~NodalSid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sid_value; //type: uint32
        YLeaf rflag; //type: uint8
        YLeaf nflag; //type: uint8
        YLeaf pflag; //type: uint8
        YLeaf eflag; //type: uint8
        YLeaf vflag; //type: uint8
        YLeaf lflag; //type: uint8
        YLeaf algorithm; //type: uint8



}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail : public Entity
{
    public:
        PerLevelAdvertisingDetail();
        ~PerLevelAdvertisingDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisLevelEnum
        YLeaf advertising_origin; //type: IsisShRouteAdvOriginEnum
        YLeaf metric; //type: uint32
        YLeaf is_propagated; //type: boolean
        YLeaf is_external_metric; //type: boolean
        YLeaf is_external_reachability; //type: boolean
        YLeaf is_interarea; //type: boolean
        YLeafList tags; //type: list of  uint32

        class SummarizationStatus; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::SummarizationStatus
        class NodalSid; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::NodalSid

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::NodalSid> > nodal_sid;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::SummarizationStatus> summarization_status;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::SummarizationStatus : public Entity
{
    public:
        SummarizationStatus();
        ~SummarizationStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_valid; //type: IsisValidEnum

        class SummaryPrefix; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix> summary_prefix;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::SummarizationStatus


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix : public Entity
{
    public:
        SummaryPrefix();
        ~SummaryPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8



}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix


class Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::NodalSid : public Entity
{
    public:
        NodalSid();
        ~NodalSid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sid_value; //type: uint32
        YLeaf rflag; //type: uint8
        YLeaf nflag; //type: uint8
        YLeaf pflag; //type: uint8
        YLeaf eflag; //type: uint8
        YLeaf vflag; //type: uint8
        YLeaf lflag; //type: uint8
        YLeaf algorithm; //type: uint8



}; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::NodalSid


class Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups : public Entity
{
    public:
        Ipv6FrrBackups();
        ~Ipv6FrrBackups();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv6FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup> > ipv6frr_backup;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups


class Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup : public Entity
{
    public:
        Ipv6FrrBackup();
        ~Ipv6FrrBackup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint32

        class ConnectedStatus; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::ConnectedStatus
        class RedistributedStatus; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus
        class NativeStatus; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus
        class PerLevelAdvertisingDetail; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::PerLevelAdvertisingDetail

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::ConnectedStatus> connected_status;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus> native_status;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::PerLevelAdvertisingDetail> > per_level_advertising_detail;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus> redistributed_status;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::ConnectedStatus : public Entity
{
    public:
        ConnectedStatus();
        ~ConnectedStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_valid; //type: IsisValidEnum

        class ConnectedDetails; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::ConnectedStatus::ConnectedDetails

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::ConnectedStatus::ConnectedDetails> connected_details;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::ConnectedStatus


class Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::ConnectedStatus::ConnectedDetails : public Entity
{
    public:
        ConnectedDetails();
        ~ConnectedDetails();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList interface; //type: list of  string



}; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::ConnectedStatus::ConnectedDetails


class Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus : public Entity
{
    public:
        RedistributedStatus();
        ~RedistributedStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_valid; //type: IsisValidEnum

        class RedistributionDetails; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus::RedistributionDetails

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus::RedistributionDetails> redistribution_details;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus


class Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus::RedistributionDetails : public Entity
{
    public:
        RedistributionDetails();
        ~RedistributionDetails();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class IsisShRouteRedistDetail; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail> > isis_sh_route_redist_detail;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus::RedistributionDetails


class Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail : public Entity
{
    public:
        IsisShRouteRedistDetail();
        ~IsisShRouteRedistDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisLevelEnum

        class Owner; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner> owner;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail


class Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner : public Entity
{
    public:
        Owner();
        ~Owner();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf protocol; //type: IsisRedistProtoEnum
        YLeaf isis_instance_id; //type: string
        YLeaf ospf_process_id; //type: string
        YLeaf ospfv3_process_id; //type: string
        YLeaf bgp_as_number; //type: string
        YLeaf eigrp_as_number; //type: string
        YLeaf application_name; //type: string



}; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner


class Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus : public Entity
{
    public:
        NativeStatus();
        ~NativeStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_valid; //type: IsisValidEnum

        class NativeDetails; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails> native_details;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus


class Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails : public Entity
{
    public:
        NativeDetails();
        ~NativeDetails();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf priority; //type: IsisPrefixPriorityEnum

        class Primary; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary
        class Backup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup> > backup;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary> primary;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails


class Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary : public Entity
{
    public:
        Primary();
        ~Primary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf origin; //type: IsisPrefixOriginEnum
        YLeaf metric; //type: uint32
        YLeaf multicast_metric; //type: uint32
        YLeaf is_external_metric; //type: boolean
        YLeaf administrative_distance; //type: uint16

        class Paths; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Paths
        class UcmpNextHop; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop
        class MulticastPath; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath
        class SrtePath; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath
        class ExplicitPath; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath
        class Source; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Source
        class MulticastSource; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastSource

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath> > explicit_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath> > multicast_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastSource> > multicast_source;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Paths> > paths;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Source> > source;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath> > srte_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop> > ucmp_next_hop;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary


class Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Paths : public Entity
{
    public:
        Paths();
        ~Paths();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_id; //type: string
        YLeaf egress_interface; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf neighbor_snpa; //type: string
        YLeaf tag; //type: uint32
        YLeaf tunnel_interface; //type: string
        YLeaf segment_routing_sid_value; //type: uint32
        YLeaf weight; //type: uint32

        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Paths::FrrBackup
        class UloopExplicit; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Paths::FrrBackup> frr_backup;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit> > uloop_explicit;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Paths


class Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Paths::FrrBackup : public Entity
{
    public:
        FrrBackup();
        ~FrrBackup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_id; //type: string
        YLeaf egress_interface; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf tunnel_egress_interface; //type: string
        YLeaf neighbor_snpa; //type: string
        YLeaf remote_lfa_system_id; //type: string
        YLeaf remote_lfa_router_id; //type: string
        YLeaf remote_lfa_system_pid; //type: string
        YLeaf remote_lfa_router_pid; //type: string
        YLeaf total_backup_distance; //type: uint32
        YLeaf segment_routing_sid_value; //type: uint32
        YLeaf num_sid; //type: uint32
        YLeaf backup_repair_list_size; //type: uint32
        YLeaf tilfa_computation; //type: IsisTilfaComputationEnum
        YLeaf is_downstream; //type: boolean
        YLeaf is_lc_disjoint; //type: boolean
        YLeaf is_node_protecting; //type: boolean
        YLeaf is_primary_path; //type: boolean
        YLeaf is_srlg_disjoint; //type: boolean
        YLeaf is_remote_lfa; //type: boolean
        YLeaf is_epcfrr_lfa; //type: boolean
        YLeaf is_strict_spflfa; //type: boolean
        YLeaf is_tunnel_requested; //type: boolean
        YLeaf weight; //type: uint32
        YLeafList segment_routing_sid_value_entry; //type: list of  uint32

        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair> > backup_repair;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Paths::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair : public Entity
{
    public:
        BackupRepair();
        ~BackupRepair();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_node_id; //type: string
        YLeaf repair_ipv4_addr; //type: string
        YLeaf repair_ipv6_addr; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32
        YLeaf repair_strict_spf_label; //type: uint32



}; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit : public Entity
{
    public:
        UloopExplicit();
        ~UloopExplicit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_node_id; //type: string
        YLeaf repair_ipv4_addr; //type: string
        YLeaf repair_ipv6_addr; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32
        YLeaf repair_strict_spf_label; //type: uint32



}; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit


class Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop : public Entity
{
    public:
        UcmpNextHop();
        ~UcmpNextHop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_id; //type: string
        YLeaf egress_interface; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf neighbor_snpa; //type: string
        YLeaf tag; //type: uint32
        YLeaf total_ucmp_distance; //type: uint32
        YLeaf segment_routing_sid_value; //type: uint32
        YLeaf weight; //type: uint32

        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup> frr_backup;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop


class Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup : public Entity
{
    public:
        FrrBackup();
        ~FrrBackup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_id; //type: string
        YLeaf egress_interface; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf tunnel_egress_interface; //type: string
        YLeaf neighbor_snpa; //type: string
        YLeaf remote_lfa_system_id; //type: string
        YLeaf remote_lfa_router_id; //type: string
        YLeaf remote_lfa_system_pid; //type: string
        YLeaf remote_lfa_router_pid; //type: string
        YLeaf total_backup_distance; //type: uint32
        YLeaf segment_routing_sid_value; //type: uint32
        YLeaf num_sid; //type: uint32
        YLeaf backup_repair_list_size; //type: uint32
        YLeaf tilfa_computation; //type: IsisTilfaComputationEnum
        YLeaf is_downstream; //type: boolean
        YLeaf is_lc_disjoint; //type: boolean
        YLeaf is_node_protecting; //type: boolean
        YLeaf is_primary_path; //type: boolean
        YLeaf is_srlg_disjoint; //type: boolean
        YLeaf is_remote_lfa; //type: boolean
        YLeaf is_epcfrr_lfa; //type: boolean
        YLeaf is_strict_spflfa; //type: boolean
        YLeaf is_tunnel_requested; //type: boolean
        YLeaf weight; //type: uint32
        YLeafList segment_routing_sid_value_entry; //type: list of  uint32

        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair> > backup_repair;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair : public Entity
{
    public:
        BackupRepair();
        ~BackupRepair();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_node_id; //type: string
        YLeaf repair_ipv4_addr; //type: string
        YLeaf repair_ipv6_addr; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32
        YLeaf repair_strict_spf_label; //type: uint32



}; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath : public Entity
{
    public:
        MulticastPath();
        ~MulticastPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_id; //type: string
        YLeaf egress_interface; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf neighbor_snpa; //type: string
        YLeaf tag; //type: uint32
        YLeaf tunnel_interface; //type: string
        YLeaf segment_routing_sid_value; //type: uint32
        YLeaf weight; //type: uint32

        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup
        class UloopExplicit; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup> frr_backup;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit> > uloop_explicit;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath


class Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup : public Entity
{
    public:
        FrrBackup();
        ~FrrBackup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_id; //type: string
        YLeaf egress_interface; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf tunnel_egress_interface; //type: string
        YLeaf neighbor_snpa; //type: string
        YLeaf remote_lfa_system_id; //type: string
        YLeaf remote_lfa_router_id; //type: string
        YLeaf remote_lfa_system_pid; //type: string
        YLeaf remote_lfa_router_pid; //type: string
        YLeaf total_backup_distance; //type: uint32
        YLeaf segment_routing_sid_value; //type: uint32
        YLeaf num_sid; //type: uint32
        YLeaf backup_repair_list_size; //type: uint32
        YLeaf tilfa_computation; //type: IsisTilfaComputationEnum
        YLeaf is_downstream; //type: boolean
        YLeaf is_lc_disjoint; //type: boolean
        YLeaf is_node_protecting; //type: boolean
        YLeaf is_primary_path; //type: boolean
        YLeaf is_srlg_disjoint; //type: boolean
        YLeaf is_remote_lfa; //type: boolean
        YLeaf is_epcfrr_lfa; //type: boolean
        YLeaf is_strict_spflfa; //type: boolean
        YLeaf is_tunnel_requested; //type: boolean
        YLeaf weight; //type: uint32
        YLeafList segment_routing_sid_value_entry; //type: list of  uint32

        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair> > backup_repair;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair : public Entity
{
    public:
        BackupRepair();
        ~BackupRepair();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_node_id; //type: string
        YLeaf repair_ipv4_addr; //type: string
        YLeaf repair_ipv6_addr; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32
        YLeaf repair_strict_spf_label; //type: uint32



}; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit : public Entity
{
    public:
        UloopExplicit();
        ~UloopExplicit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_node_id; //type: string
        YLeaf repair_ipv4_addr; //type: string
        YLeaf repair_ipv6_addr; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32
        YLeaf repair_strict_spf_label; //type: uint32



}; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit


class Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath : public Entity
{
    public:
        SrtePath();
        ~SrtePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_id; //type: string
        YLeaf egress_interface; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf neighbor_snpa; //type: string
        YLeaf tag; //type: uint32
        YLeaf tunnel_interface; //type: string
        YLeaf segment_routing_sid_value; //type: uint32
        YLeaf weight; //type: uint32

        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup
        class UloopExplicit; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup> frr_backup;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit> > uloop_explicit;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath


class Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup : public Entity
{
    public:
        FrrBackup();
        ~FrrBackup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_id; //type: string
        YLeaf egress_interface; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf tunnel_egress_interface; //type: string
        YLeaf neighbor_snpa; //type: string
        YLeaf remote_lfa_system_id; //type: string
        YLeaf remote_lfa_router_id; //type: string
        YLeaf remote_lfa_system_pid; //type: string
        YLeaf remote_lfa_router_pid; //type: string
        YLeaf total_backup_distance; //type: uint32
        YLeaf segment_routing_sid_value; //type: uint32
        YLeaf num_sid; //type: uint32
        YLeaf backup_repair_list_size; //type: uint32
        YLeaf tilfa_computation; //type: IsisTilfaComputationEnum
        YLeaf is_downstream; //type: boolean
        YLeaf is_lc_disjoint; //type: boolean
        YLeaf is_node_protecting; //type: boolean
        YLeaf is_primary_path; //type: boolean
        YLeaf is_srlg_disjoint; //type: boolean
        YLeaf is_remote_lfa; //type: boolean
        YLeaf is_epcfrr_lfa; //type: boolean
        YLeaf is_strict_spflfa; //type: boolean
        YLeaf is_tunnel_requested; //type: boolean
        YLeaf weight; //type: uint32
        YLeafList segment_routing_sid_value_entry; //type: list of  uint32

        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair> > backup_repair;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair : public Entity
{
    public:
        BackupRepair();
        ~BackupRepair();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_node_id; //type: string
        YLeaf repair_ipv4_addr; //type: string
        YLeaf repair_ipv6_addr; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32
        YLeaf repair_strict_spf_label; //type: uint32



}; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit : public Entity
{
    public:
        UloopExplicit();
        ~UloopExplicit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_node_id; //type: string
        YLeaf repair_ipv4_addr; //type: string
        YLeaf repair_ipv6_addr; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32
        YLeaf repair_strict_spf_label; //type: uint32



}; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit


class Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath : public Entity
{
    public:
        ExplicitPath();
        ~ExplicitPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_id; //type: string
        YLeaf egress_interface; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf neighbor_snpa; //type: string
        YLeaf tag; //type: uint32
        YLeaf tunnel_interface; //type: string
        YLeaf segment_routing_sid_value; //type: uint32
        YLeaf weight; //type: uint32

        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup
        class UloopExplicit; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::UloopExplicit

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup> frr_backup;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::UloopExplicit> > uloop_explicit;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath


class Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup : public Entity
{
    public:
        FrrBackup();
        ~FrrBackup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_id; //type: string
        YLeaf egress_interface; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf tunnel_egress_interface; //type: string
        YLeaf neighbor_snpa; //type: string
        YLeaf remote_lfa_system_id; //type: string
        YLeaf remote_lfa_router_id; //type: string
        YLeaf remote_lfa_system_pid; //type: string
        YLeaf remote_lfa_router_pid; //type: string
        YLeaf total_backup_distance; //type: uint32
        YLeaf segment_routing_sid_value; //type: uint32
        YLeaf num_sid; //type: uint32
        YLeaf backup_repair_list_size; //type: uint32
        YLeaf tilfa_computation; //type: IsisTilfaComputationEnum
        YLeaf is_downstream; //type: boolean
        YLeaf is_lc_disjoint; //type: boolean
        YLeaf is_node_protecting; //type: boolean
        YLeaf is_primary_path; //type: boolean
        YLeaf is_srlg_disjoint; //type: boolean
        YLeaf is_remote_lfa; //type: boolean
        YLeaf is_epcfrr_lfa; //type: boolean
        YLeaf is_strict_spflfa; //type: boolean
        YLeaf is_tunnel_requested; //type: boolean
        YLeaf weight; //type: uint32
        YLeafList segment_routing_sid_value_entry; //type: list of  uint32

        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair> > backup_repair;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair : public Entity
{
    public:
        BackupRepair();
        ~BackupRepair();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_node_id; //type: string
        YLeaf repair_ipv4_addr; //type: string
        YLeaf repair_ipv6_addr; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32
        YLeaf repair_strict_spf_label; //type: uint32



}; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::UloopExplicit : public Entity
{
    public:
        UloopExplicit();
        ~UloopExplicit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_node_id; //type: string
        YLeaf repair_ipv4_addr; //type: string
        YLeaf repair_ipv6_addr; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32
        YLeaf repair_strict_spf_label; //type: uint32



}; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::UloopExplicit


class Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Source : public Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_lsp_id; //type: string
        YLeaf source_address; //type: string
        YLeafList tags; //type: list of  uint32

        class NodalSid; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Source::NodalSid

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Source::NodalSid> > nodal_sid;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Source


class Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Source::NodalSid : public Entity
{
    public:
        NodalSid();
        ~NodalSid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sid_value; //type: uint32
        YLeaf rflag; //type: uint8
        YLeaf nflag; //type: uint8
        YLeaf pflag; //type: uint8
        YLeaf eflag; //type: uint8
        YLeaf vflag; //type: uint8
        YLeaf lflag; //type: uint8
        YLeaf algorithm; //type: uint8



}; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Source::NodalSid


class Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastSource : public Entity
{
    public:
        MulticastSource();
        ~MulticastSource();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_lsp_id; //type: string
        YLeaf source_address; //type: string
        YLeafList tags; //type: list of  uint32

        class NodalSid; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastSource::NodalSid

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastSource::NodalSid> > nodal_sid;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastSource


class Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastSource::NodalSid : public Entity
{
    public:
        NodalSid();
        ~NodalSid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sid_value; //type: uint32
        YLeaf rflag; //type: uint8
        YLeaf nflag; //type: uint8
        YLeaf pflag; //type: uint8
        YLeaf eflag; //type: uint8
        YLeaf vflag; //type: uint8
        YLeaf lflag; //type: uint8
        YLeaf algorithm; //type: uint8



}; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastSource::NodalSid


class Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup : public Entity
{
    public:
        Backup();
        ~Backup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf origin; //type: IsisPrefixOriginEnum
        YLeaf metric; //type: uint32
        YLeaf multicast_metric; //type: uint32
        YLeaf is_external_metric; //type: boolean
        YLeaf administrative_distance; //type: uint16

        class Paths; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Paths
        class UcmpNextHop; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::UcmpNextHop
        class MulticastPath; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::MulticastPath
        class SrtePath; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::SrtePath
        class ExplicitPath; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath
        class Source; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Source
        class MulticastSource; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::MulticastSource

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath> > explicit_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::MulticastPath> > multicast_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::MulticastSource> > multicast_source;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Paths> > paths;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Source> > source;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::SrtePath> > srte_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::UcmpNextHop> > ucmp_next_hop;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup


class Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Paths : public Entity
{
    public:
        Paths();
        ~Paths();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_id; //type: string
        YLeaf egress_interface; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf neighbor_snpa; //type: string
        YLeaf tag; //type: uint32
        YLeaf tunnel_interface; //type: string
        YLeaf segment_routing_sid_value; //type: uint32
        YLeaf weight; //type: uint32

        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Paths::FrrBackup
        class UloopExplicit; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Paths::UloopExplicit

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Paths::FrrBackup> frr_backup;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Paths::UloopExplicit> > uloop_explicit;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Paths


class Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Paths::FrrBackup : public Entity
{
    public:
        FrrBackup();
        ~FrrBackup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_id; //type: string
        YLeaf egress_interface; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf tunnel_egress_interface; //type: string
        YLeaf neighbor_snpa; //type: string
        YLeaf remote_lfa_system_id; //type: string
        YLeaf remote_lfa_router_id; //type: string
        YLeaf remote_lfa_system_pid; //type: string
        YLeaf remote_lfa_router_pid; //type: string
        YLeaf total_backup_distance; //type: uint32
        YLeaf segment_routing_sid_value; //type: uint32
        YLeaf num_sid; //type: uint32
        YLeaf backup_repair_list_size; //type: uint32
        YLeaf tilfa_computation; //type: IsisTilfaComputationEnum
        YLeaf is_downstream; //type: boolean
        YLeaf is_lc_disjoint; //type: boolean
        YLeaf is_node_protecting; //type: boolean
        YLeaf is_primary_path; //type: boolean
        YLeaf is_srlg_disjoint; //type: boolean
        YLeaf is_remote_lfa; //type: boolean
        YLeaf is_epcfrr_lfa; //type: boolean
        YLeaf is_strict_spflfa; //type: boolean
        YLeaf is_tunnel_requested; //type: boolean
        YLeaf weight; //type: uint32
        YLeafList segment_routing_sid_value_entry; //type: list of  uint32

        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::BackupRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::BackupRepair> > backup_repair;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Paths::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::BackupRepair : public Entity
{
    public:
        BackupRepair();
        ~BackupRepair();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_node_id; //type: string
        YLeaf repair_ipv4_addr; //type: string
        YLeaf repair_ipv6_addr; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32
        YLeaf repair_strict_spf_label; //type: uint32



}; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Paths::UloopExplicit : public Entity
{
    public:
        UloopExplicit();
        ~UloopExplicit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_node_id; //type: string
        YLeaf repair_ipv4_addr; //type: string
        YLeaf repair_ipv6_addr; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32
        YLeaf repair_strict_spf_label; //type: uint32



}; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Paths::UloopExplicit


class Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::UcmpNextHop : public Entity
{
    public:
        UcmpNextHop();
        ~UcmpNextHop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_id; //type: string
        YLeaf egress_interface; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf neighbor_snpa; //type: string
        YLeaf tag; //type: uint32
        YLeaf total_ucmp_distance; //type: uint32
        YLeaf segment_routing_sid_value; //type: uint32
        YLeaf weight; //type: uint32

        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup> frr_backup;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::UcmpNextHop


class Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup : public Entity
{
    public:
        FrrBackup();
        ~FrrBackup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_id; //type: string
        YLeaf egress_interface; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf tunnel_egress_interface; //type: string
        YLeaf neighbor_snpa; //type: string
        YLeaf remote_lfa_system_id; //type: string
        YLeaf remote_lfa_router_id; //type: string
        YLeaf remote_lfa_system_pid; //type: string
        YLeaf remote_lfa_router_pid; //type: string
        YLeaf total_backup_distance; //type: uint32
        YLeaf segment_routing_sid_value; //type: uint32
        YLeaf num_sid; //type: uint32
        YLeaf backup_repair_list_size; //type: uint32
        YLeaf tilfa_computation; //type: IsisTilfaComputationEnum
        YLeaf is_downstream; //type: boolean
        YLeaf is_lc_disjoint; //type: boolean
        YLeaf is_node_protecting; //type: boolean
        YLeaf is_primary_path; //type: boolean
        YLeaf is_srlg_disjoint; //type: boolean
        YLeaf is_remote_lfa; //type: boolean
        YLeaf is_epcfrr_lfa; //type: boolean
        YLeaf is_strict_spflfa; //type: boolean
        YLeaf is_tunnel_requested; //type: boolean
        YLeaf weight; //type: uint32
        YLeafList segment_routing_sid_value_entry; //type: list of  uint32

        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::BackupRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::BackupRepair> > backup_repair;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup


}
}

#endif /* _CISCO_IOS_XR_CLNS_ISIS_OPER_1_ */

