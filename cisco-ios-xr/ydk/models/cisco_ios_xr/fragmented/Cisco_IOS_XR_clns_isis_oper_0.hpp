#ifndef _CISCO_IOS_XR_CLNS_ISIS_OPER_0_
#define _CISCO_IOS_XR_CLNS_ISIS_OPER_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xr {
namespace Cisco_IOS_XR_clns_isis_oper {

class Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Instances; //type: Isis::Instances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances> instances;
        
}; // Isis


class Isis::Instances : public ydk::Entity
{
    public:
        Instances();
        ~Instances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Instance; //type: Isis::Instances::Instance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance> > instance;
        
}; // Isis::Instances


class Isis::Instances::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf instance_name; //type: string
        class Neighbors; //type: Isis::Instances::Instance::Neighbors
        class HostNames; //type: Isis::Instances::Instance::HostNames
        class StatisticsGlobal; //type: Isis::Instances::Instance::StatisticsGlobal
        class Levels; //type: Isis::Instances::Instance::Levels
        class Topologies; //type: Isis::Instances::Instance::Topologies
        class NsrStatus; //type: Isis::Instances::Instance::NsrStatus
        class Interfaces; //type: Isis::Instances::Instance::Interfaces
        class CheckpointAdjacencies; //type: Isis::Instances::Instance::CheckpointAdjacencies
        class Srms; //type: Isis::Instances::Instance::Srms
        class ErrorLog; //type: Isis::Instances::Instance::ErrorLog
        class CheckpointInterfaces; //type: Isis::Instances::Instance::CheckpointInterfaces
        class InterfaceStatistics; //type: Isis::Instances::Instance::InterfaceStatistics
        class Protocol; //type: Isis::Instances::Instance::Protocol
        class NeighborSummaries; //type: Isis::Instances::Instance::NeighborSummaries
        class CheckpointLsps; //type: Isis::Instances::Instance::CheckpointLsps
        class MeshGroups; //type: Isis::Instances::Instance::MeshGroups
        class NsrStatistics; //type: Isis::Instances::Instance::NsrStatistics
        class CheckpointTeTunnels; //type: Isis::Instances::Instance::CheckpointTeTunnels

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::CheckpointAdjacencies> checkpoint_adjacencies;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::CheckpointInterfaces> checkpoint_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::CheckpointLsps> checkpoint_lsps;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::CheckpointTeTunnels> checkpoint_te_tunnels;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::ErrorLog> error_log;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::HostNames> host_names;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::InterfaceStatistics> interface_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels> levels;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::MeshGroups> mesh_groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NeighborSummaries> neighbor_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors> neighbors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatistics> nsr_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus> nsr_status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Protocol> protocol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Srms> srms;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::StatisticsGlobal> statistics_global;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies> topologies;
        
}; // Isis::Instances::Instance


class Isis::Instances::Instance::CheckpointAdjacencies : public ydk::Entity
{
    public:
        CheckpointAdjacencies();
        ~CheckpointAdjacencies();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CheckpointAdjacency; //type: Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency> > checkpoint_adjacency;
        
}; // Isis::Instances::Instance::CheckpointAdjacencies


class Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency : public ydk::Entity
{
    public:
        CheckpointAdjacency();
        ~CheckpointAdjacency();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf system_id; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf checkpoint_adjacency_object_id; //type: uint32
        ydk::YLeaf checkpoint_adjacency_system_id; //type: string
        ydk::YLeaf checkpoint_adjacency_snpa; //type: string
        ydk::YLeaf checkpoint_adjacency_interface; //type: string
        ydk::YLeaf checkpoint_adjacency_level; //type: IsisLevel
        ydk::YLeaf checkpoint_adjacency_holdtime; //type: uint16
        ydk::YLeaf checkpoint_adjacency_lan_priority; //type: uint8
        ydk::YLeaf checkpoint_adjacency_circuit_number; //type: uint8
        class CheckpointAdjacencyPerAddressFamilyNextHop; //type: Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop> > checkpoint_adjacency_per_address_family_next_hop;
        
}; // Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency


class Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop : public ydk::Entity
{
    public:
        CheckpointAdjacencyPerAddressFamilyNextHop();
        ~CheckpointAdjacencyPerAddressFamilyNextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IsisAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop


class Isis::Instances::Instance::CheckpointInterfaces : public ydk::Entity
{
    public:
        CheckpointInterfaces();
        ~CheckpointInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CheckpointInterface; //type: Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface> > checkpoint_interface;
        
}; // Isis::Instances::Instance::CheckpointInterfaces


class Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface : public ydk::Entity
{
    public:
        CheckpointInterface();
        ~CheckpointInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf checkpoint_object_id; //type: uint32
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf checkpoint_interface_handle; //type: string
        ydk::YLeaf local_circuit_number; //type: uint8
        ydk::YLeaf dis_areas; //type: IsisLevels
        ydk::YLeaf has_adjacency; //type: boolean
        ydk::YLeaf local_snpa; //type: string
        ydk::YLeaf has_joined_mcast_group; //type: boolean
        ydk::YLeaf has_achieved_ldp_sync; //type: boolean
        ydk::YLeaf has_achieved_ld_pv6_sync; //type: boolean

}; // Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface


class Isis::Instances::Instance::CheckpointLsps : public ydk::Entity
{
    public:
        CheckpointLsps();
        ~CheckpointLsps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CheckpointLsp; //type: Isis::Instances::Instance::CheckpointLsps::CheckpointLsp

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::CheckpointLsps::CheckpointLsp> > checkpoint_lsp;
        
}; // Isis::Instances::Instance::CheckpointLsps


class Isis::Instances::Instance::CheckpointLsps::CheckpointLsp : public ydk::Entity
{
    public:
        CheckpointLsp();
        ~CheckpointLsp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf lsp_id; //type: string
        ydk::YLeaf checkpoint_lsp_object_id; //type: uint32
        ydk::YLeaf checkpoint_lsp_level; //type: uint8
        ydk::YLeaf checkpoint_lsp_local_flag; //type: boolean
        ydk::YLeaf checkpoint_lsp_id; //type: string

}; // Isis::Instances::Instance::CheckpointLsps::CheckpointLsp


class Isis::Instances::Instance::CheckpointTeTunnels : public ydk::Entity
{
    public:
        CheckpointTeTunnels();
        ~CheckpointTeTunnels();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CheckpointTeTunnel; //type: Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel> > checkpoint_te_tunnel;
        
}; // Isis::Instances::Instance::CheckpointTeTunnels


class Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel : public ydk::Entity
{
    public:
        CheckpointTeTunnel();
        ~CheckpointTeTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf checkpoint_te_level; //type: IsisLevel
        ydk::YLeaf checkpoint_te_system_id; //type: string
        ydk::YLeaf checkpoint_te_interface; //type: string
        ydk::YLeaf checkpoint_te_flags; //type: uint32
        ydk::YLeaf checkpoint_te_nexthop; //type: string
        ydk::YLeaf checkpoint_te_metric; //type: int32
        ydk::YLeaf checkpoint_te_metric_mode; //type: IsisMetricMode
        ydk::YLeaf checkpoint_te_bandwidth; //type: uint32
        ydk::YLeaf checkpoint_te_object_id; //type: uint32

}; // Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel


class Isis::Instances::Instance::ErrorLog : public ydk::Entity
{
    public:
        ErrorLog();
        ~ErrorLog();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LogEntry; //type: Isis::Instances::Instance::ErrorLog::LogEntry

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::ErrorLog::LogEntry> > log_entry;
        
}; // Isis::Instances::Instance::ErrorLog


class Isis::Instances::Instance::ErrorLog::LogEntry : public ydk::Entity
{
    public:
        LogEntry();
        ~LogEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf error_log_level; //type: IsisErrLogLevel
        ydk::YLeaf error_code; //type: uint32
        ydk::YLeaf error_reason; //type: string
        class GenericData; //type: Isis::Instances::Instance::ErrorLog::LogEntry::GenericData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::ErrorLog::LogEntry::GenericData> generic_data;
        
}; // Isis::Instances::Instance::ErrorLog::LogEntry


class Isis::Instances::Instance::ErrorLog::LogEntry::GenericData : public ydk::Entity
{
    public:
        GenericData();
        ~GenericData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Timestamp; //type: Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp> timestamp;
        
}; // Isis::Instances::Instance::ErrorLog::LogEntry::GenericData


class Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp : public ydk::Entity
{
    public:
        Timestamp();
        ~Timestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nano_seconds; //type: uint32

}; // Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp


class Isis::Instances::Instance::HostNames : public ydk::Entity
{
    public:
        HostNames();
        ~HostNames();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HostName; //type: Isis::Instances::Instance::HostNames::HostName

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::HostNames::HostName> > host_name;
        
}; // Isis::Instances::Instance::HostNames


class Isis::Instances::Instance::HostNames::HostName : public ydk::Entity
{
    public:
        HostName();
        ~HostName();

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
        ydk::YLeaf local_is_flag; //type: boolean
        ydk::YLeaf host_levels; //type: IsisLevels
        ydk::YLeaf host_name; //type: string

}; // Isis::Instances::Instance::HostNames::HostName


class Isis::Instances::Instance::InterfaceStatistics : public ydk::Entity
{
    public:
        InterfaceStatistics();
        ~InterfaceStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceStatistic; //type: Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic> > interface_statistic;
        
}; // Isis::Instances::Instance::InterfaceStatistics


class Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic : public ydk::Entity
{
    public:
        InterfaceStatistic();
        ~InterfaceStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf traffic_interface; //type: string
        ydk::YLeaf interface_media_type; //type: IsisMediaClass
        class P2PStatistics; //type: Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics
        class PerAreaData; //type: Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics> p2p_statistics;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData> > per_area_data;
        
}; // Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic


class Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics : public ydk::Entity
{
    public:
        P2PStatistics();
        ~P2PStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf memory_exhausted_iih_count; //type: uint32
        ydk::YLeaf lsp_retransmit_count; //type: uint32
        class IihCount; //type: Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::IihCount

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::IihCount> iih_count;
        
}; // Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics


class Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::IihCount : public ydk::Entity
{
    public:
        IihCount();
        ~IihCount();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pdu_receive_count; //type: uint32
        ydk::YLeaf pdu_send_count; //type: uint32

}; // Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::IihCount


class Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData : public ydk::Entity
{
    public:
        PerAreaData();
        ~PerAreaData();

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
        class Statistics; //type: Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics
        class LanData; //type: Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData> lan_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics> statistics;
        
}; // Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData


class Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData : public ydk::Entity
{
    public:
        LanData();
        ~LanData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf memory_exhausted_iih_count; //type: uint32
        ydk::YLeaf dis_election_count; //type: uint32
        class IihCount; //type: Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount> iih_count;
        
}; // Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData


class Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount : public ydk::Entity
{
    public:
        IihCount();
        ~IihCount();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pdu_receive_count; //type: uint32
        ydk::YLeaf pdu_send_count; //type: uint32

}; // Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount


class Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_drop_count; //type: uint32
        ydk::YLeaf lsp_flooding_dup_count; //type: uint32
        class LspCount; //type: Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount
        class CsnpCount; //type: Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount
        class PsnpCount; //type: Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount> csnp_count;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount> lsp_count;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount> psnp_count;
        
}; // Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics


class Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount : public ydk::Entity
{
    public:
        CsnpCount();
        ~CsnpCount();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pdu_receive_count; //type: uint32
        ydk::YLeaf pdu_send_count; //type: uint32

}; // Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount


class Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount : public ydk::Entity
{
    public:
        LspCount();
        ~LspCount();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pdu_receive_count; //type: uint32
        ydk::YLeaf pdu_send_count; //type: uint32

}; // Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount


class Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount : public ydk::Entity
{
    public:
        PsnpCount();
        ~PsnpCount();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pdu_receive_count; //type: uint32
        ydk::YLeaf pdu_send_count; //type: uint32

}; // Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount


class Isis::Instances::Instance::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: Isis::Instances::Instance::Interfaces::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface> > interface;
        
}; // Isis::Instances::Instance::Interfaces


class Isis::Instances::Instance::Interfaces::Interface : public ydk::Entity
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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf configured_circuit_type; //type: IsisLevels
        ydk::YLeaf mesh_group; //type: uint32
        ydk::YLeaf is_type; //type: IsisLevels
        ydk::YLeaf nsr_intf; //type: boolean
        class ConfiguredStatus; //type: Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus
        class InterfaceStatusAndData; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus> configured_status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData> interface_status_and_data;
        
}; // Isis::Instances::Instance::Interfaces::Interface


class Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus : public ydk::Entity
{
    public:
        ConfiguredStatus();
        ~ConfiguredStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adjacency_form_status; //type: boolean
        ydk::YLeaf adv_prefix_status; //type: boolean

}; // Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData : public ydk::Entity
{
    public:
        InterfaceStatusAndData();
        ~InterfaceStatusAndData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf status; //type: IsisEnabled
        class Disabled; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled
        class Enabled; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled> disabled;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled> enabled;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled : public ydk::Entity
{
    public:
        Disabled();
        ~Disabled();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reason_code; //type: IsisIfDisabledReason

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled : public ydk::Entity
{
    public:
        Enabled();
        ~Enabled();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_media_type; //type: IsisMediaClass
        ydk::YLeaf enabled_circuit_type; //type: IsisLevels
        ydk::YLeaf local_circuit_number; //type: uint8
        ydk::YLeaf rsi_srlg_registered; //type: boolean
        ydk::YLeaf bandwidth; //type: uint32
        class AdjacencyFormStatus; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus
        class AdvPrefixStatus; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus
        class P2PData; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2PData
        class BfdData; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData
        class ClnsData; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData
        class UnderlyingInterface; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::UnderlyingInterface
        class PerAreaData; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData
        class PerTopologyData; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData
        class PerAddressFamilyData; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus> adjacency_form_status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus> adv_prefix_status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData> bfd_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData> clns_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2PData> p2p_data;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData> > per_address_family_data;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData> > per_area_data;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData> > per_topology_data;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::UnderlyingInterface> > underlying_interface;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus : public ydk::Entity
{
    public:
        AdjacencyFormStatus();
        ~AdjacencyFormStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf status; //type: IsisEnabled
        class Disabled; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled> disabled;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled : public ydk::Entity
{
    public:
        Disabled();
        ~Disabled();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reason_code; //type: IsisIfAdjFormDisabledReason

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus : public ydk::Entity
{
    public:
        AdvPrefixStatus();
        ~AdvPrefixStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf status; //type: IsisEnabled
        class Disabled; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled> disabled;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled : public ydk::Entity
{
    public:
        Disabled();
        ~Disabled();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reason_code; //type: IsisIfAdvPrefixDisabledReason

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData : public ydk::Entity
{
    public:
        BfdData();
        ~BfdData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf ipv6_enabled; //type: boolean
        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf multiplier; //type: uint32

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData : public ydk::Entity
{
    public:
        ClnsData();
        ~ClnsData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_until_next_lsp; //type: uint32
        ydk::YLeaf lsp_transmit_requested_flag; //type: boolean
        ydk::YLeaf lsp_transmitted_flag; //type: boolean
        ydk::YLeaf lsp_txmitd_b2b_limit; //type: uint32
        ydk::YLeaf lsp_txmt_b2b_msecs; //type: uint32
        ydk::YLeaf last_lsp_level_transmitted; //type: IsisLevel
        ydk::YLeaf last_lsp_id_transmitted; //type: string
        class ClnsStatus; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus
        class MtuInfo; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo
        class SnpaState; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState
        class MediaSpecificState; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus> clns_status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState> media_specific_state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo> mtu_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState> snpa_state;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus : public ydk::Entity
{
    public:
        ClnsStatus();
        ~ClnsStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf status; //type: IsisUp
        class ClnsDownInfo; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo> clns_down_info;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo : public ydk::Entity
{
    public:
        ClnsDownInfo();
        ~ClnsDownInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reason_code; //type: IsisIfClnsProtoDownReason

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState : public ydk::Entity
{
    public:
        MediaSpecificState();
        ~MediaSpecificState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf clns_media_type; //type: IsisMediaClass
        class ClnsLanData; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData
        class ClnsP2PData; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData> clns_lan_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData> clns_p2p_data;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData : public ydk::Entity
{
    public:
        ClnsLanData();
        ~ClnsLanData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PerAreaData; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData> > per_area_data;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData : public ydk::Entity
{
    public:
        PerAreaData();
        ~PerAreaData();

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
        class MulticastStatus; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus> multicast_status;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus : public ydk::Entity
{
    public:
        MulticastStatus();
        ~MulticastStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf status; //type: IsisValid
        class Invalid; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid> invalid;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid : public ydk::Entity
{
    public:
        Invalid();
        ~Invalid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reason_code; //type: IsisIfMcastInvalidReason

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData : public ydk::Entity
{
    public:
        ClnsP2PData();
        ~ClnsP2PData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class P2POverLanData; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData> p2p_over_lan_data;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData : public ydk::Entity
{
    public:
        P2POverLanData();
        ~P2POverLanData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MulticastStatus; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus> multicast_status;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus : public ydk::Entity
{
    public:
        MulticastStatus();
        ~MulticastStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf status; //type: IsisValid
        class Invalid; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::Invalid

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::Invalid> invalid;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::Invalid : public ydk::Entity
{
    public:
        Invalid();
        ~Invalid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reason_code; //type: IsisIfMcastInvalidReason

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::Invalid


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo : public ydk::Entity
{
    public:
        MtuInfo();
        ~MtuInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf status; //type: IsisValid
        ydk::YLeaf mtu; //type: uint32
        class Invalid; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid> invalid;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid : public ydk::Entity
{
    public:
        Invalid();
        ~Invalid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reason_code; //type: IsisIfClnsMtuInvalidReason

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState : public ydk::Entity
{
    public:
        SnpaState();
        ~SnpaState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf status; //type: IsisKnown
        class Unknown; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown
        class Known; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known> known;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown> unknown;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known : public ydk::Entity
{
    public:
        Known();
        ~Known();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf snpa; //type: string

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown : public ydk::Entity
{
    public:
        Unknown();
        ~Unknown();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reason_code; //type: IsisIfClnsSnpaUnknownReason

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2PData : public ydk::Entity
{
    public:
        P2PData();
        ~P2PData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_until_next_iih; //type: uint32
        ydk::YLeaf retransmit_lsp_queue_size; //type: uint32
        ydk::YLeaf retransmit_lsp_interval; //type: uint32
        ydk::YLeaf extended_circuit_number; //type: uint32

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2PData


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData : public ydk::Entity
{
    public:
        PerAddressFamilyData();
        ~PerAddressFamilyData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IsisAfId
        class AfStatus; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus> af_status;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus : public ydk::Entity
{
    public:
        AfStatus();
        ~AfStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf status; //type: IsisEnabled
        class Disabled; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled
        class AfData; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData> af_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled> disabled;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData : public ydk::Entity
{
    public:
        AfData();
        ~AfData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolStatus; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus
        class ForwardingAddressStatus; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus
        class PrefixStatus; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus> forwarding_address_status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus> prefix_status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus> protocol_status;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus : public ydk::Entity
{
    public:
        ForwardingAddressStatus();
        ~ForwardingAddressStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf status; //type: IsisKnown
        class Unknown; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown
        class ForwardingAddressData; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData> forwarding_address_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown> unknown;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData : public ydk::Entity
{
    public:
        ForwardingAddressData();
        ~ForwardingAddressData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unnumbered_interface_name; //type: string
        class ForwardingAddress; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress> > forwarding_address;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress : public ydk::Entity
{
    public:
        ForwardingAddress();
        ~ForwardingAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IsisAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown : public ydk::Entity
{
    public:
        Unknown();
        ~Unknown();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reason_code; //type: IsisIfAfFwdAddrUnknownReason

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus : public ydk::Entity
{
    public:
        PrefixStatus();
        ~PrefixStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf status; //type: IsisKnown
        class Unknown; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown
        class PrefixData; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData> prefix_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown> unknown;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData : public ydk::Entity
{
    public:
        PrefixData();
        ~PrefixData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_unnumbered; //type: boolean
        class Prefix; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix> > prefix;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix : public ydk::Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IsisAfId
        class Ipv4; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4
        class Ipv6; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6> ipv6;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

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

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

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

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown : public ydk::Entity
{
    public:
        Unknown();
        ~Unknown();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reason_code; //type: IsisIfAfPrefixUnknownReason

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus : public ydk::Entity
{
    public:
        ProtocolStatus();
        ~ProtocolStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf status; //type: IsisUp
        class Disabled; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled> disabled;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled : public ydk::Entity
{
    public:
        Disabled();
        ~Disabled();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reason_code; //type: IsisIfAfProtoDownReason

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled : public ydk::Entity
{
    public:
        Disabled();
        ~Disabled();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reason_code; //type: IsisIfAfDisabledReason

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData : public ydk::Entity
{
    public:
        PerAreaData();
        ~PerAreaData();

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
        ydk::YLeaf adjacency_count; //type: uint32
        ydk::YLeaf lsp_pacing_interval; //type: uint32
        ydk::YLeaf psnp_transmit_queue_size; //type: uint32
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf hello_multiplier; //type: uint32
        class LanData; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData> lan_data;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData : public ydk::Entity
{
    public:
        LanData();
        ~LanData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf circuit_lan_id; //type: string
        ydk::YLeaf time_until_next_iih; //type: uint32
        ydk::YLeaf interface_priority; //type: uint8
        ydk::YLeaf dispriority; //type: uint8
        ydk::YLeaf are_we_dis; //type: boolean

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData : public ydk::Entity
{
    public:
        PerTopologyData();
        ~PerTopologyData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TopologyId; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId
        class Status; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status> status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId> topology_id;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status : public ydk::Entity
{
    public:
        Status();
        ~Status();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf status; //type: IsisEnabled
        class Disabled; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled
        class Enabled_; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled> disabled;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_> enabled;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled : public ydk::Entity
{
    public:
        Disabled();
        ~Disabled();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reason_code; //type: IsisIfTopoDisabledReason

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_ : public ydk::Entity
{
    public:
        Enabled_();
        ~Enabled_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level1_metric; //type: uint32
        ydk::YLeaf level2_metric; //type: uint32
        ydk::YLeaf level1_weight; //type: uint32
        ydk::YLeaf level2_weight; //type: uint32
        ydk::YLeaf max_label_supported; //type: uint8
        ydk::YLeaf max_bkp_label_supported; //type: uint8
        ydk::YLeaf max_srte_label_supported; //type: uint8
        ydk::YLeaf level1ldp_sync_enabled; //type: boolean
        ydk::YLeaf level2ldp_sync_enabled; //type: boolean
        ydk::YLeaf ldp_sync_status; //type: boolean
        ydk::YLeaf ld_pv6_sync_status; //type: boolean
        ydk::YLeaf level1_offset_metric; //type: uint32
        ydk::YLeaf level2_offset_metric; //type: uint32
        ydk::YLeaf level1_lkgp_configured; //type: boolean
        ydk::YLeaf level2_lkgp_configured; //type: boolean
        ydk::YLeaf level1pp_metric; //type: uint32
        ydk::YLeaf level2pp_metric; //type: uint32
        ydk::YLeaf level1pp_configured; //type: boolean
        ydk::YLeaf level2pp_configured; //type: boolean
        class AdjacencyFormStatus; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus
        class AdvPrefixStatus; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus
        class Level1Frr; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr
        class Level2Frr; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr
        class ManualAdjSid; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::ManualAdjSid

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus> adjacency_form_status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus> adv_prefix_status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr> level1_frr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr> level2_frr;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::ManualAdjSid> > manual_adj_sid;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus : public ydk::Entity
{
    public:
        AdjacencyFormStatus();
        ~AdjacencyFormStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf status; //type: IsisEnabled
        class Disabled; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled> disabled;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled : public ydk::Entity
{
    public:
        Disabled();
        ~Disabled();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reason_code; //type: IsisIfTopoAdjFormDisabledReason

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus : public ydk::Entity
{
    public:
        AdvPrefixStatus();
        ~AdvPrefixStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf status; //type: IsisEnabled
        class Disabled; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled> disabled;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled : public ydk::Entity
{
    public:
        Disabled();
        ~Disabled();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reason_code; //type: IsisIfTopoAdvPrefixDisabledReason

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr : public ydk::Entity
{
    public:
        Level1Frr();
        ~Level1Frr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf frr_type; //type: IsisFrr
        ydk::YLeaf is_frr; //type: boolean
        ydk::YLeaf is_remote_lfa; //type: boolean
        ydk::YLeaf is_ti_lfa; //type: boolean
        ydk::YLeaf ti_lfa_node_tie_breaker_index; //type: uint8
        ydk::YLeaf ti_lfa_srlg_tie_breaker; //type: uint8
        ydk::YLeaf is_tie_breakers_configured; //type: boolean
        class FrrTieBreaker; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::FrrTieBreaker

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::FrrTieBreaker> > frr_tie_breaker;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::FrrTieBreaker : public ydk::Entity
{
    public:
        FrrTieBreaker();
        ~FrrTieBreaker();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tie_breaker; //type: IsisFrrTiebreaker
        ydk::YLeaf index_; //type: uint8

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::FrrTieBreaker


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr : public ydk::Entity
{
    public:
        Level2Frr();
        ~Level2Frr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf frr_type; //type: IsisFrr
        ydk::YLeaf is_frr; //type: boolean
        ydk::YLeaf is_remote_lfa; //type: boolean
        ydk::YLeaf is_ti_lfa; //type: boolean
        ydk::YLeaf ti_lfa_node_tie_breaker_index; //type: uint8
        ydk::YLeaf ti_lfa_srlg_tie_breaker; //type: uint8
        ydk::YLeaf is_tie_breakers_configured; //type: boolean
        class FrrTieBreaker; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::FrrTieBreaker

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::FrrTieBreaker> > frr_tie_breaker;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::FrrTieBreaker : public ydk::Entity
{
    public:
        FrrTieBreaker();
        ~FrrTieBreaker();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tie_breaker; //type: IsisFrrTiebreaker
        ydk::YLeaf index_; //type: uint8

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::FrrTieBreaker


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::ManualAdjSid : public ydk::Entity
{
    public:
        ManualAdjSid();
        ~ManualAdjSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf manual_adjacency_sid_label; //type: uint32
        ydk::YLeaf manual_adjacency_sid_index; //type: uint32
        ydk::YLeaf manual_adjacency_sid_type; //type: uint8
        ydk::YLeaf sid_protected; //type: boolean
        ydk::YLeaf sid_active; //type: boolean

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::ManualAdjSid


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId : public ydk::Entity
{
    public:
        TopologyId();
        ~TopologyId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IsisAfId
        ydk::YLeaf saf_name; //type: IsisSubAfId
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf topology_name; //type: string

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::UnderlyingInterface : public ydk::Entity
{
    public:
        UnderlyingInterface();
        ~UnderlyingInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_handle; //type: string
        ydk::YLeaf interface_name; //type: string

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::UnderlyingInterface


class Isis::Instances::Instance::Levels : public ydk::Entity
{
    public:
        Levels();
        ~Levels();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Level; //type: Isis::Instances::Instance::Levels::Level

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level> > level;
        
}; // Isis::Instances::Instance::Levels


class Isis::Instances::Instance::Levels::Level : public ydk::Entity
{
    public:
        Level();
        ~Level();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        class AdjacencyLog; //type: Isis::Instances::Instance::Levels::Level::AdjacencyLog
        class LspTableSummary; //type: Isis::Instances::Instance::Levels::Level::LspTableSummary
        class Adjacencies; //type: Isis::Instances::Instance::Levels::Level::Adjacencies
        class DetailedLsps; //type: Isis::Instances::Instance::Levels::Level::DetailedLsps
        class Lsps; //type: Isis::Instances::Instance::Levels::Level::Lsps
        class LspLog; //type: Isis::Instances::Instance::Levels::Level::LspLog
        class DatabaseLog; //type: Isis::Instances::Instance::Levels::Level::DatabaseLog

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies> adjacencies;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::AdjacencyLog> adjacency_log;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::DatabaseLog> database_log;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::DetailedLsps> detailed_lsps;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspLog> lsp_log;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspTableSummary> lsp_table_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Lsps> lsps;
        
}; // Isis::Instances::Instance::Levels::Level


class Isis::Instances::Instance::Levels::Level::Adjacencies : public ydk::Entity
{
    public:
        Adjacencies();
        ~Adjacencies();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Adjacency; //type: Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency> > adjacency;
        
}; // Isis::Instances::Instance::Levels::Level::Adjacencies


class Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency : public ydk::Entity
{
    public:
        Adjacency();
        ~Adjacency();

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
        ydk::YLeaf adjacency_system_id; //type: string
        ydk::YLeaf adjacency_snpa; //type: string
        ydk::YLeaf adjacency_interface; //type: string
        ydk::YLeaf adjacency_media_type; //type: IsisMediaClass
        ydk::YLeaf adjacency_state; //type: IsisAdjState
        ydk::YLeaf adjacency_bfd_state; //type: IsisAdjBfdState
        ydk::YLeaf adjacency_ipv6bfd_state; //type: IsisAdjBfdState
        ydk::YLeaf adj_ipv4bfd_retry_running; //type: boolean
        ydk::YLeaf adj_ipv6bfd_retry_running; //type: boolean
        ydk::YLeaf adj_ipv4bfd_retry_exp; //type: uint32
        ydk::YLeaf adj_ipv6bfd_retry_exp; //type: uint32
        ydk::YLeaf adj_ipv4bfd_retry_count; //type: uint32
        ydk::YLeaf adj_ipv6bfd_retry_count; //type: uint32
        ydk::YLeaf adjacency_uptime_valid_flag; //type: boolean
        ydk::YLeaf adjacency_uptime; //type: uint32
        ydk::YLeaf adjacency_holdtime; //type: uint32
        ydk::YLeaf adjacency_checkpoint_object_id; //type: uint32
        ydk::YLeaf adjacency_ietf_nsf_capable_flag; //type: boolean
        ydk::YLeaf adjacency_dispriority; //type: uint8
        ydk::YLeaf adjacency_neighbor_priority; //type: uint8
        ydk::YLeaf adjacency_local_priority; //type: uint8
        ydk::YLeaf local_dis_flag; //type: boolean
        ydk::YLeaf neighbor_dis_flag; //type: boolean
        ydk::YLeaf nsr_standby; //type: uint8
        class AdjacencyAreaAddress; //type: Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyAreaAddress
        class AdjacencyTopology; //type: Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology
        class AdjacencyPerAddressFamilyData; //type: Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyAreaAddress> > adjacency_area_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData> > adjacency_per_address_family_data;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology> > adjacency_topology;
        
}; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency


class Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyAreaAddress : public ydk::Entity
{
    public:
        AdjacencyAreaAddress();
        ~AdjacencyAreaAddress();

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

}; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyAreaAddress


class Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData : public ydk::Entity
{
    public:
        AdjacencyPerAddressFamilyData();
        ~AdjacencyPerAddressFamilyData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IsisAfId
        class Ipv4; //type: Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4
        class Ipv6; //type: Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6> ipv6;
        
}; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData


class Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop; //type: string
        class AdjacencySid; //type: Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid
        class NonFrrAdjacencySid; //type: Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid
        class InterfaceAddress; //type: Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::InterfaceAddress
        class UnderlyingAdjacencySid; //type: Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::UnderlyingAdjacencySid
        class UnderlyingInterface; //type: Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::UnderlyingInterface

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid> adjacency_sid;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::InterfaceAddress> > interface_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid> non_frr_adjacency_sid;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::UnderlyingAdjacencySid> > underlying_adjacency_sid;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::UnderlyingInterface> > underlying_interface;
        
}; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4


class Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid : public ydk::Entity
{
    public:
        AdjacencySid();
        ~AdjacencySid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adjacency_sid_value; //type: uint32
        class AdjacencySidBackup; //type: Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup
        class AdjacencySidBackupTe; //type: Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup> adjacency_sid_backup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe> adjacency_sid_backup_te;
        
}; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid


class Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup : public ydk::Entity
{
    public:
        AdjacencySidBackup();
        ~AdjacencySidBackup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf backup_label_stack_size; //type: uint8
        ydk::YLeaf backup_node_address; //type: string
        ydk::YLeaf backup_nexthop; //type: string
        ydk::YLeaf backup_interface; //type: string
        class BackupLabelStack; //type: Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::BackupLabelStack

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::BackupLabelStack> > backup_label_stack;
        
}; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup


class Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::BackupLabelStack : public ydk::Entity
{
    public:
        BackupLabelStack();
        ~BackupLabelStack();

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

}; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::BackupLabelStack


class Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe : public ydk::Entity
{
    public:
        AdjacencySidBackupTe();
        ~AdjacencySidBackupTe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf backup_label_stack_size; //type: uint8
        ydk::YLeaf backup_node_address; //type: string
        ydk::YLeaf backup_nexthop; //type: string
        ydk::YLeaf backup_interface; //type: string
        class BackupLabelStack; //type: Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack> > backup_label_stack;
        
}; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe


class Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack : public ydk::Entity
{
    public:
        BackupLabelStack();
        ~BackupLabelStack();

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

}; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack


class Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::InterfaceAddress : public ydk::Entity
{
    public:
        InterfaceAddress();
        ~InterfaceAddress();

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

}; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::InterfaceAddress


class Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid : public ydk::Entity
{
    public:
        NonFrrAdjacencySid();
        ~NonFrrAdjacencySid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adjacency_sid_value; //type: uint32
        class AdjacencySidBackup; //type: Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup
        class AdjacencySidBackupTe; //type: Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup> adjacency_sid_backup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe> adjacency_sid_backup_te;
        
}; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid


class Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup : public ydk::Entity
{
    public:
        AdjacencySidBackup();
        ~AdjacencySidBackup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf backup_label_stack_size; //type: uint8
        ydk::YLeaf backup_node_address; //type: string
        ydk::YLeaf backup_nexthop; //type: string
        ydk::YLeaf backup_interface; //type: string
        class BackupLabelStack; //type: Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack> > backup_label_stack;
        
}; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup


class Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack : public ydk::Entity
{
    public:
        BackupLabelStack();
        ~BackupLabelStack();

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

}; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack


class Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe : public ydk::Entity
{
    public:
        AdjacencySidBackupTe();
        ~AdjacencySidBackupTe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf backup_label_stack_size; //type: uint8
        ydk::YLeaf backup_node_address; //type: string
        ydk::YLeaf backup_nexthop; //type: string
        ydk::YLeaf backup_interface; //type: string
        class BackupLabelStack; //type: Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack> > backup_label_stack;
        
}; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe


class Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack : public ydk::Entity
{
    public:
        BackupLabelStack();
        ~BackupLabelStack();

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

}; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack


class Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::UnderlyingAdjacencySid : public ydk::Entity
{
    public:
        UnderlyingAdjacencySid();
        ~UnderlyingAdjacencySid();

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

}; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::UnderlyingAdjacencySid


class Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::UnderlyingInterface : public ydk::Entity
{
    public:
        UnderlyingInterface();
        ~UnderlyingInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_handle; //type: string
        ydk::YLeaf interface_name; //type: string

}; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::UnderlyingInterface


class Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop; //type: string
        class AdjacencySid; //type: Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid
        class NonFrrAdjacencySid; //type: Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid
        class InterfaceAddress; //type: Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::InterfaceAddress
        class UnderlyingAdjacencySid; //type: Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::UnderlyingAdjacencySid
        class UnderlyingInterface; //type: Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::UnderlyingInterface

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid> adjacency_sid;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::InterfaceAddress> > interface_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid> non_frr_adjacency_sid;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::UnderlyingAdjacencySid> > underlying_adjacency_sid;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::UnderlyingInterface> > underlying_interface;
        
}; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6


class Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid : public ydk::Entity
{
    public:
        AdjacencySid();
        ~AdjacencySid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adjacency_sid_value; //type: uint32
        class AdjacencySidBackup; //type: Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup
        class AdjacencySidBackupTe; //type: Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup> adjacency_sid_backup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe> adjacency_sid_backup_te;
        
}; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid


class Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup : public ydk::Entity
{
    public:
        AdjacencySidBackup();
        ~AdjacencySidBackup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf backup_label_stack_size; //type: uint8
        ydk::YLeaf backup_node_address; //type: string
        ydk::YLeaf backup_nexthop; //type: string
        ydk::YLeaf backup_interface; //type: string
        class BackupLabelStack; //type: Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::BackupLabelStack

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::BackupLabelStack> > backup_label_stack;
        
}; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup


class Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::BackupLabelStack : public ydk::Entity
{
    public:
        BackupLabelStack();
        ~BackupLabelStack();

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

}; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::BackupLabelStack


class Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe : public ydk::Entity
{
    public:
        AdjacencySidBackupTe();
        ~AdjacencySidBackupTe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf backup_label_stack_size; //type: uint8
        ydk::YLeaf backup_node_address; //type: string
        ydk::YLeaf backup_nexthop; //type: string
        ydk::YLeaf backup_interface; //type: string
        class BackupLabelStack; //type: Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack> > backup_label_stack;
        
}; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe


class Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack : public ydk::Entity
{
    public:
        BackupLabelStack();
        ~BackupLabelStack();

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

}; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack


class Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::InterfaceAddress : public ydk::Entity
{
    public:
        InterfaceAddress();
        ~InterfaceAddress();

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

}; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::InterfaceAddress


class Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid : public ydk::Entity
{
    public:
        NonFrrAdjacencySid();
        ~NonFrrAdjacencySid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adjacency_sid_value; //type: uint32
        class AdjacencySidBackup; //type: Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup
        class AdjacencySidBackupTe; //type: Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup> adjacency_sid_backup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe> adjacency_sid_backup_te;
        
}; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid


class Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup : public ydk::Entity
{
    public:
        AdjacencySidBackup();
        ~AdjacencySidBackup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf backup_label_stack_size; //type: uint8
        ydk::YLeaf backup_node_address; //type: string
        ydk::YLeaf backup_nexthop; //type: string
        ydk::YLeaf backup_interface; //type: string
        class BackupLabelStack; //type: Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack> > backup_label_stack;
        
}; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup


class Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack : public ydk::Entity
{
    public:
        BackupLabelStack();
        ~BackupLabelStack();

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

}; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack


class Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe : public ydk::Entity
{
    public:
        AdjacencySidBackupTe();
        ~AdjacencySidBackupTe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf backup_label_stack_size; //type: uint8
        ydk::YLeaf backup_node_address; //type: string
        ydk::YLeaf backup_nexthop; //type: string
        ydk::YLeaf backup_interface; //type: string
        class BackupLabelStack; //type: Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack> > backup_label_stack;
        
}; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe


class Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack : public ydk::Entity
{
    public:
        BackupLabelStack();
        ~BackupLabelStack();

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

}; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack


class Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::UnderlyingAdjacencySid : public ydk::Entity
{
    public:
        UnderlyingAdjacencySid();
        ~UnderlyingAdjacencySid();

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

}; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::UnderlyingAdjacencySid


class Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::UnderlyingInterface : public ydk::Entity
{
    public:
        UnderlyingInterface();
        ~UnderlyingInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_handle; //type: string
        ydk::YLeaf interface_name; //type: string

}; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::UnderlyingInterface


class Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology : public ydk::Entity
{
    public:
        AdjacencyTopology();
        ~AdjacencyTopology();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf topology_status; //type: IsisAdjTopoStatus
        ydk::YLeaf parallel_p2p_link_suppressed_flag; //type: boolean
        class Id; //type: Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology::Id

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology::Id> id;
        
}; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology


class Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology::Id : public ydk::Entity
{
    public:
        Id();
        ~Id();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IsisAfId
        ydk::YLeaf saf_name; //type: IsisSubAfId
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf topology_name; //type: string

}; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology::Id


class Isis::Instances::Instance::Levels::Level::AdjacencyLog : public ydk::Entity
{
    public:
        AdjacencyLog();
        ~AdjacencyLog();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LogEntry; //type: Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry> > log_entry;
        
}; // Isis::Instances::Instance::Levels::Level::AdjacencyLog


class Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry : public ydk::Entity
{
    public:
        LogEntry();
        ~LogEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adj_log_neighbor_system_id; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf prev_adj_state; //type: IsisAdjState
        ydk::YLeaf cur_adj_state; //type: IsisAdjState
        ydk::YLeaf state_reason; //type: IsisAdjStateReason
        class GenericData; //type: Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData
        class AdjacencyPerTopologyChange; //type: Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange> > adjacency_per_topology_change;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData> generic_data;
        
}; // Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry


class Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange : public ydk::Entity
{
    public:
        AdjacencyPerTopologyChange();
        ~AdjacencyPerTopologyChange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf change; //type: IsisAdjTopoChange
        class Id; //type: Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::Id

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::Id> id;
        
}; // Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange


class Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::Id : public ydk::Entity
{
    public:
        Id();
        ~Id();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IsisAfId
        ydk::YLeaf saf_name; //type: IsisSubAfId
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf topology_name; //type: string

}; // Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::Id


class Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData : public ydk::Entity
{
    public:
        GenericData();
        ~GenericData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Timestamp; //type: Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::Timestamp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::Timestamp> timestamp;
        
}; // Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData


class Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::Timestamp : public ydk::Entity
{
    public:
        Timestamp();
        ~Timestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nano_seconds; //type: uint32

}; // Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::Timestamp


class Isis::Instances::Instance::Levels::Level::DatabaseLog : public ydk::Entity
{
    public:
        DatabaseLog();
        ~DatabaseLog();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LogEntry; //type: Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry> > log_entry;
        
}; // Isis::Instances::Instance::Levels::Level::DatabaseLog


class Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry : public ydk::Entity
{
    public:
        LogEntry();
        ~LogEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lspdb_operation; //type: IsisLspDbOp
        class GenericData; //type: Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData
        class NewLspEntry; //type: Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::NewLspEntry
        class OldLspEntry; //type: Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::OldLspEntry

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData> generic_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::NewLspEntry> new_lsp_entry;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::OldLspEntry> old_lsp_entry;
        
}; // Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry


class Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData : public ydk::Entity
{
    public:
        GenericData();
        ~GenericData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Timestamp; //type: Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData::Timestamp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData::Timestamp> timestamp;
        
}; // Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData


class Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData::Timestamp : public ydk::Entity
{
    public:
        Timestamp();
        ~Timestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nano_seconds; //type: uint32

}; // Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData::Timestamp


class Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::NewLspEntry : public ydk::Entity
{
    public:
        NewLspEntry();
        ~NewLspEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_id; //type: string
        ydk::YLeaf local_lsp_flag; //type: boolean
        ydk::YLeaf lsp_active_flag; //type: boolean
        ydk::YLeaf lsp_holdtime; //type: uint16
        ydk::YLeaf lsp_sequence_number; //type: uint32
        ydk::YLeaf lsp_checksum; //type: uint16
        ydk::YLeaf lsp_partition_repair_supported_flag; //type: boolean
        ydk::YLeaf lsp_attached_flag; //type: boolean
        ydk::YLeaf lsp_overloaded_flag; //type: boolean
        ydk::YLeaf lsp_nonv1a_flag; //type: uint16
        ydk::YLeaf lsp_level; //type: IsisLevels
        ydk::YLeaf lsp_length; //type: uint16
        ydk::YLeaf max_area_addresses; //type: uint8
        ydk::YLeaf id_length; //type: uint8
        ydk::YLeaf version; //type: uint8
        ydk::YLeaf version2; //type: uint8

}; // Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::NewLspEntry


class Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::OldLspEntry : public ydk::Entity
{
    public:
        OldLspEntry();
        ~OldLspEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_id; //type: string
        ydk::YLeaf local_lsp_flag; //type: boolean
        ydk::YLeaf lsp_active_flag; //type: boolean
        ydk::YLeaf lsp_holdtime; //type: uint16
        ydk::YLeaf lsp_sequence_number; //type: uint32
        ydk::YLeaf lsp_checksum; //type: uint16
        ydk::YLeaf lsp_partition_repair_supported_flag; //type: boolean
        ydk::YLeaf lsp_attached_flag; //type: boolean
        ydk::YLeaf lsp_overloaded_flag; //type: boolean
        ydk::YLeaf lsp_nonv1a_flag; //type: uint16
        ydk::YLeaf lsp_level; //type: IsisLevels
        ydk::YLeaf lsp_length; //type: uint16
        ydk::YLeaf max_area_addresses; //type: uint8
        ydk::YLeaf id_length; //type: uint8
        ydk::YLeaf version; //type: uint8
        ydk::YLeaf version2; //type: uint8

}; // Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::OldLspEntry


class Isis::Instances::Instance::Levels::Level::DetailedLsps : public ydk::Entity
{
    public:
        DetailedLsps();
        ~DetailedLsps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DetailedLsp; //type: Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp> > detailed_lsp;
        
}; // Isis::Instances::Instance::Levels::Level::DetailedLsps


class Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp : public ydk::Entity
{
    public:
        DetailedLsp();
        ~DetailedLsp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_id; //type: string
        ydk::YLeaf lsp_body; //type: string
        class LspHeaderData; //type: Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp::LspHeaderData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp::LspHeaderData> lsp_header_data;
        
}; // Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp


class Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp::LspHeaderData : public ydk::Entity
{
    public:
        LspHeaderData();
        ~LspHeaderData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_id; //type: string
        ydk::YLeaf local_lsp_flag; //type: boolean
        ydk::YLeaf lsp_active_flag; //type: boolean
        ydk::YLeaf lsp_holdtime; //type: uint16
        ydk::YLeaf lsp_sequence_number; //type: uint32
        ydk::YLeaf lsp_checksum; //type: uint16
        ydk::YLeaf lsp_partition_repair_supported_flag; //type: boolean
        ydk::YLeaf lsp_attached_flag; //type: boolean
        ydk::YLeaf lsp_overloaded_flag; //type: boolean
        ydk::YLeaf lsp_nonv1a_flag; //type: uint16
        ydk::YLeaf lsp_level; //type: IsisLevels
        ydk::YLeaf lsp_length; //type: uint16
        ydk::YLeaf max_area_addresses; //type: uint8
        ydk::YLeaf id_length; //type: uint8
        ydk::YLeaf version; //type: uint8
        ydk::YLeaf version2; //type: uint8

}; // Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp::LspHeaderData


class Isis::Instances::Instance::Levels::Level::LspLog : public ydk::Entity
{
    public:
        LspLog();
        ~LspLog();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LogEntry; //type: Isis::Instances::Instance::Levels::Level::LspLog::LogEntry

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspLog::LogEntry> > log_entry;
        
}; // Isis::Instances::Instance::Levels::Level::LspLog


class Isis::Instances::Instance::Levels::Level::LspLog::LogEntry : public ydk::Entity
{
    public:
        LogEntry();
        ~LogEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf trigger_count; //type: uint32
        ydk::YLeaf delayed_trigger_count; //type: uint32
        ydk::YLeaf log_interface; //type: string
        ydk::YLeaf pseudo_node_number; //type: uint8
        class GenericData; //type: Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData
        class Trigger; //type: Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::Trigger

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData> generic_data;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::Trigger> > trigger;
        
}; // Isis::Instances::Instance::Levels::Level::LspLog::LogEntry


class Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData : public ydk::Entity
{
    public:
        GenericData();
        ~GenericData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Timestamp; //type: Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData::Timestamp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData::Timestamp> timestamp;
        
}; // Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData


class Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData::Timestamp : public ydk::Entity
{
    public:
        Timestamp();
        ~Timestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nano_seconds; //type: uint32

}; // Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData::Timestamp


class Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::Trigger : public ydk::Entity
{
    public:
        Trigger();
        ~Trigger();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: IsisLspTrigger

}; // Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::Trigger


class Isis::Instances::Instance::Levels::Level::LspTableSummary : public ydk::Entity
{
    public:
        LspTableSummary();
        ~LspTableSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Fragment0LspStats; //type: Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats
        class AllFragmentLspStats; //type: Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats> all_fragment_lsp_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats> fragment0lsp_stats;
        
}; // Isis::Instances::Instance::Levels::Level::LspTableSummary


class Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats : public ydk::Entity
{
    public:
        AllFragmentLspStats();
        ~AllFragmentLspStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NodeCounters; //type: Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters> node_counters;
        
}; // Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats


class Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters : public ydk::Entity
{
    public:
        NodeCounters();
        ~NodeCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RouteLspCount; //type: Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::RouteLspCount
        class PseudoNodeLspCount; //type: Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::PseudoNodeLspCount

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::PseudoNodeLspCount> pseudo_node_lsp_count;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::RouteLspCount> route_lsp_count;
        
}; // Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters

class IsisSubAfId : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unicast;
        static const ydk::Enum::YLeaf multicast;

};

class IsisShRouteAdvOrigin : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_sh_route_adv_origin_interface;
        static const ydk::Enum::YLeaf isis_sh_route_adv_origin_redistributed;
        static const ydk::Enum::YLeaf isis_sh_route_adv_origin_native;
        static const ydk::Enum::YLeaf isis_sh_route_adv_origin_summary;
        static const ydk::Enum::YLeaf isis_sh_route_adv_origin_default;

};

class IsisIfTopoAdvPrefixDisabledReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_intf_topo_adv_prefix_disabled_intf_suppressed;
        static const ydk::Enum::YLeaf isis_intf_topo_adv_prefix_disabled_af_not_up;
        static const ydk::Enum::YLeaf isis_intf_topo_adv_prefix_disabled_af_prefixes_unknown;
        static const ydk::Enum::YLeaf isis_intf_topo_adv_prefix_disabled_internal_error;

};

class IsisIfAdvPrefixDisabledReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_intf_adv_prefix_disabled_if_cfg_suppressed;
        static const ydk::Enum::YLeaf isis_intf_adv_prefix_disabled_no_topo_participate;
        static const ydk::Enum::YLeaf isis_intf_adv_prefix_disabled_internal_error;

};

class IsisMetricStyle : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_metric_style_narrow;
        static const ydk::Enum::YLeaf isis_metric_style_wide;
        static const ydk::Enum::YLeaf isis_metric_style_transition;

};

class SrmsMiAfEB : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

};

class IsisUp : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_down;
        static const ydk::Enum::YLeaf isis_up;

};

class IsisLevels : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_levels_none;
        static const ydk::Enum::YLeaf isis_levels_1;
        static const ydk::Enum::YLeaf isis_levels_2;
        static const ydk::Enum::YLeaf isis_levels_12;
        static const ydk::Enum::YLeaf isis_levels_total;

};

class IsisIfMcastInvalidReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_intf_mcast_invalid_join_error;
        static const ydk::Enum::YLeaf isis_intf_mcast_invalid_internal_error;
        static const ydk::Enum::YLeaf isis_intf_mcast_invalid_not_yet_needed;

};

class IsisSpfTrigger : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_spf_trig_config;
        static const ydk::Enum::YLeaf isis_spf_trig_nsr_fo;
        static const ydk::Enum::YLeaf isis_spf_trig_periodic;
        static const ydk::Enum::YLeaf isis_spf_trig_clear;
        static const ydk::Enum::YLeaf isis_spf_trig_newadj;
        static const ydk::Enum::YLeaf isis_spf_trig_deladj;
        static const ydk::Enum::YLeaf isis_spf_trig_next_hop;
        static const ydk::Enum::YLeaf isis_spf_trig_metric;
        static const ydk::Enum::YLeaf isis_spf_trig_dis;
        static const ydk::Enum::YLeaf isis_spf_trig_frr_per_link;
        static const ydk::Enum::YLeaf isis_spf_trig_frr_per_prefix;
        static const ydk::Enum::YLeaf isis_spf_trig_ucmp;
        static const ydk::Enum::YLeaf isis_spf_trig_new_tunnel;
        static const ydk::Enum::YLeaf isis_spf_trig_del_tunnel;
        static const ydk::Enum::YLeaf isis_spf_trig_chg_tunnel;
        static const ydk::Enum::YLeaf isis_spf_trig_new_node;
        static const ydk::Enum::YLeaf isis_spf_trig_del_node;
        static const ydk::Enum::YLeaf isis_spf_trig_newlsp;
        static const ydk::Enum::YLeaf isis_spf_trig_lsp_expiry;
        static const ydk::Enum::YLeaf isis_spf_trig_attach_set;
        static const ydk::Enum::YLeaf isis_spf_trig_attach_clr;
        static const ydk::Enum::YLeaf isis_spf_trig_overload_set;
        static const ydk::Enum::YLeaf isis_spf_trig_overload_clr;
        static const ydk::Enum::YLeaf isis_spf_trig_link_good;
        static const ydk::Enum::YLeaf isis_spf_trig_link_bad;
        static const ydk::Enum::YLeaf isis_spf_trig_prefix_good;
        static const ydk::Enum::YLeaf isis_spf_trig_prefix_bad;
        static const ydk::Enum::YLeaf isis_spf_trig_prefix;
        static const ydk::Enum::YLeaf isis_spf_trig_area_addr;
        static const ydk::Enum::YLeaf isis_spf_trig_ip_addr;
        static const ydk::Enum::YLeaf isis_spf_trig_rtrid;
        static const ydk::Enum::YLeaf isis_spf_trig_prefix_policy;

};

class IsisPrefixPriority : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_prefix_priority_critical;
        static const ydk::Enum::YLeaf isis_prefix_priority_high;
        static const ydk::Enum::YLeaf isis_prefix_priority_med;
        static const ydk::Enum::YLeaf isis_prefix_priority_low;

};

class IsisPrefixOrigin : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_prefix_origin_l1_summary_null;
        static const ydk::Enum::YLeaf isis_prefix_origin_l1;
        static const ydk::Enum::YLeaf isis_prefix_origin_l2_summary_null;
        static const ydk::Enum::YLeaf isis_prefix_origin_l2;
        static const ydk::Enum::YLeaf isis_prefix_origin_inter_area_summary_null;
        static const ydk::Enum::YLeaf isis_prefix_origin_inter_area;
        static const ydk::Enum::YLeaf isis_prefix_origin_default_nearest_attached;

};

class IsisNsfFlavor : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_nsf_flav_or_none;
        static const ydk::Enum::YLeaf isis_nsf_flav_or_cisco;
        static const ydk::Enum::YLeaf isis_nsf_flav_or_ietf;
        static const ydk::Enum::YLeaf isis_nsf_flav_or_nsr;

};

class IsisIfClnsMtuInvalidReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_intf_clns_mtu_invalid_too_small;
        static const ydk::Enum::YLeaf isis_intf_clns_mtu_invalid_internal_error;

};

class IsisIfAfFwdAddrUnknownReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_intf_af_fwd_addr_unknown_cfg_passive;
        static const ydk::Enum::YLeaf isis_intf_af_fwd_addr_unknown_proto_doesnt_exist;
        static const ydk::Enum::YLeaf isis_intf_af_fwd_addr_unknown_next_hop_reg_error;
        static const ydk::Enum::YLeaf isis_intf_af_fwd_addr_unknown_no_link_local_add;
        static const ydk::Enum::YLeaf isis_intf_af_fwd_addr_unknown_af_not_up;
        static const ydk::Enum::YLeaf isis_intf_af_fwd_addr_unknown_vrf_enabled;
        static const ydk::Enum::YLeaf isis_intf_af_fwd_addr_unknown_internal_error;

};

class IsisKnown : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_unknown;
        static const ydk::Enum::YLeaf isis_known;

};

class IsisIfClnsSnpaUnknownReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_intf_clns_snpa_unknown_access_error;
        static const ydk::Enum::YLeaf isis_intf_clns_snpa_unknown_not_lan;
        static const ydk::Enum::YLeaf isis_intf_clns_snpa_unknown_internal_error;

};

class IsisIfTopoAdjFormDisabledReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_intf_topo_adj_form_disabled_intf_passive;
        static const ydk::Enum::YLeaf isis_intf_topo_adj_form_disabled_af_not_up;
        static const ydk::Enum::YLeaf isis_intf_topo_adj_form_disabled_af_fwd_addr_unknown;
        static const ydk::Enum::YLeaf isis_intf_topo_adj_form_disabled_topo_not_cfg;
        static const ydk::Enum::YLeaf isis_intf_topo_adj_form_disabled_topo_can_not_participate;
        static const ydk::Enum::YLeaf isis_intf_topo_adj_form_disabled_idle;
        static const ydk::Enum::YLeaf isis_intf_topo_adj_form_disabled_internal_error;
        static const ydk::Enum::YLeaf isis_intf_topo_adj_form_disabled_mtu;
        static const ydk::Enum::YLeaf isis_intf_topo_adj_form_disabled_snpa;
        static const ydk::Enum::YLeaf isis_intf_topo_adj_form_disabled_mcast;

};

class IsisMetricMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_metric_mode_fixed;
        static const ydk::Enum::YLeaf isis_metric_mode_relative;
        static const ydk::Enum::YLeaf isis_metric_mode_absolute;

};

class IsisAdjTopoStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_adj_topo_status_ok;
        static const ydk::Enum::YLeaf isis_adj_topo_status_intf_not_configured;
        static const ydk::Enum::YLeaf isis_adj_topo_status_intf_not_running;
        static const ydk::Enum::YLeaf isis_adj_topo_status_init_state;
        static const ydk::Enum::YLeaf isis_adj_topo_status_neighbor_doesnt_participate;
        static const ydk::Enum::YLeaf isis_adj_topo_status_ipv4_address_tlv_missing;
        static const ydk::Enum::YLeaf isis_adj_topo_status_ipv4_address_tlv_empty;
        static const ydk::Enum::YLeaf isis_adj_topo_status_ipv6_address_tlv_missing;
        static const ydk::Enum::YLeaf isis_adj_topo_status_ipv6_address_tlv_empty;
        static const ydk::Enum::YLeaf isis_adj_topo_status_ipv4_address_matches_ours;
        static const ydk::Enum::YLeaf isis_adj_topo_status_ipv6_address_matches_ours;
        static const ydk::Enum::YLeaf isis_adj_topo_status_ipv4_address_subnet_mismatch;
        static const ydk::Enum::YLeaf isis_adj_topo_status_ipv6_address_not_link_local;

};

class IsisUloopAvoidance : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_u_loop_avoidance_type_none;
        static const ydk::Enum::YLeaf isis_u_loop_avoidance_type_all;
        static const ydk::Enum::YLeaf isis_u_loop_avoidance_type_protected;
        static const ydk::Enum::YLeaf isis_u_loop_avoidance_type_sr;

};

class IsisIfAfPrefixUnknownReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_intf_af_prefix_unknown_adv_suppressed;
        static const ydk::Enum::YLeaf isis_intf_af_prefix_unknown_global_addr_reg_error;
        static const ydk::Enum::YLeaf isis_intf_af_prefix_unknown_internal_error;

};

class IsisAdjBfdState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_adj_bfd_no_state;
        static const ydk::Enum::YLeaf isis_adj_bfd_down_state;
        static const ydk::Enum::YLeaf isis_adj_bfd_init_state;
        static const ydk::Enum::YLeaf isis_adj_bfd_up_state;

};

class IsisTilfaComputation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_tilfa_comp_none;
        static const ydk::Enum::YLeaf isis_tilfa_comp_link;
        static const ydk::Enum::YLeaf isis_tilfa_comp_node;
        static const ydk::Enum::YLeaf isis_tilfa_comp_srlg;
        static const ydk::Enum::YLeaf isis_tilfa_comp_node_srlg;

};

class IsisFrr : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_frr_type_none;
        static const ydk::Enum::YLeaf isis_frr_type_per_link;
        static const ydk::Enum::YLeaf isis_frr_type_per_prefix;
        static const ydk::Enum::YLeaf isis_frr_type_sr_u_loop;

};

class IsisReachable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_unreachable;
        static const ydk::Enum::YLeaf isis_reachable;

};

class IsisStartupStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_startup_ssm_active;
        static const ydk::Enum::YLeaf isis_startup_ssm_complete;
        static const ydk::Enum::YLeaf isis_startup_ssm_aborted;
        static const ydk::Enum::YLeaf isis_startup_ssm_not_run;

};

class IsisEnabled : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_disabled;
        static const ydk::Enum::YLeaf isis_enabled;

};

class IsisLevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_level0;
        static const ydk::Enum::YLeaf isis_level1;
        static const ydk::Enum::YLeaf isis_level2;

};

class IsisIfClnsProtoDownReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_intf_clns_proto_down_add_to_intf_stack_fail;
        static const ydk::Enum::YLeaf isis_intf_clns_proto_down_no_imd_conn;
        static const ydk::Enum::YLeaf isis_intf_clns_proto_down_imd_node_doesnt_exist;
        static const ydk::Enum::YLeaf isis_intf_clns_proto_down_imd_exist_reg_error;
        static const ydk::Enum::YLeaf isis_intf_clns_proto_down_imd_state_reg_error;
        static const ydk::Enum::YLeaf isis_intf_clns_proto_down_clns_not_up;

};

class IsisAdjTopoChange : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_adj_topo_up_change;
        static const ydk::Enum::YLeaf isis_adj_topo_next_hop_change;
        static const ydk::Enum::YLeaf isis_adj_topo_down_change;

};

class IsisShTePceFloodingScope : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf area;
        static const ydk::Enum::YLeaf domain;

};

class IsisIfAfProtoDownReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_intf_af_proto_down_imd_conn_fail;
        static const ydk::Enum::YLeaf isis_intf_af_proto_down_imd_node_doesnt_exist;
        static const ydk::Enum::YLeaf isis_intf_af_proto_down_imd_exist_reg_error;
        static const ydk::Enum::YLeaf isis_intf_af_proto_down_imd_state_reg_error;
        static const ydk::Enum::YLeaf isis_intf_af_proto_down_af_not_up;
        static const ydk::Enum::YLeaf isis_intf_af_proto_down_internal_error;

};

class IsisLspTrigger : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_lsp_trig_config;
        static const ydk::Enum::YLeaf isis_lsp_trig_newadj;
        static const ydk::Enum::YLeaf isis_lsp_trig_deladj;
        static const ydk::Enum::YLeaf isis_lsp_trig_dr_change;
        static const ydk::Enum::YLeaf isis_lsp_trig_area_set;
        static const ydk::Enum::YLeaf isis_lsp_trig_attach;
        static const ydk::Enum::YLeaf isis_lsp_trig_hippity;
        static const ydk::Enum::YLeaf isis_lsp_trig_regen;
        static const ydk::Enum::YLeaf isis_lsp_trig_ip_if_up;
        static const ydk::Enum::YLeaf isis_lsp_trig_ip_if_down;
        static const ydk::Enum::YLeaf isis_lsp_trig_ip_inter_area;
        static const ydk::Enum::YLeaf isis_lsp_trig_ip_external;
        static const ydk::Enum::YLeaf isis_lsp_trig_ip_external_full;
        static const ydk::Enum::YLeaf isis_lsp_trig_ip_def_orig;
        static const ydk::Enum::YLeaf isis_lsp_trig_ip_addr_chg;
        static const ydk::Enum::YLeaf isis_lsp_trig_te_info;
        static const ydk::Enum::YLeaf isis_lsp_trig_te_pce_info;
        static const ydk::Enum::YLeaf isis_lsp_trig_te_fa_info;
        static const ydk::Enum::YLeaf isis_lsp_trig_nsr_fo;
        static const ydk::Enum::YLeaf isis_lsp_trig_pn_cancel;
        static const ydk::Enum::YLeaf isis_lsp_trig_lkgp;
        static const ydk::Enum::YLeaf isis_lsp_trig_pp;
        static const ydk::Enum::YLeaf isis_lsp_trig_config_force_send;
        static const ydk::Enum::YLeaf isis_lsp_trig_config_force_init;
        static const ydk::Enum::YLeaf isis_lsp_trig_adj_sid_add;
        static const ydk::Enum::YLeaf isis_lsp_trig_adj_sid_delete;
        static const ydk::Enum::YLeaf isis_lsp_trig_msd;
        static const ydk::Enum::YLeaf isis_lsp_trig_adj_sid_wait_timer;
        static const ydk::Enum::YLeaf isis_lsp_trig_direct_gen;

};

class IsisErrLogLevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_err_log_level_info;
        static const ydk::Enum::YLeaf isis_err_log_level_warn;
        static const ydk::Enum::YLeaf isis_err_log_level_critical;

};

class IsisLspDbOp : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_lsp_db_clear;
        static const ydk::Enum::YLeaf isis_lsp_db_insert_new_lsp;
        static const ydk::Enum::YLeaf isis_lsp_db_replace_lsp_with_lsp;
        static const ydk::Enum::YLeaf isis_lsp_db_purge_lsp;
        static const ydk::Enum::YLeaf isis_lsp_db_delete_lsp;

};

class IsisAdjState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_adj_up_state;
        static const ydk::Enum::YLeaf isis_adj_init_state;
        static const ydk::Enum::YLeaf isis_adj_failed_state;

};

class IsisAdjStateReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_adj_up_nsf_restart;
        static const ydk::Enum::YLeaf isis_adj_up_new_adj;
        static const ydk::Enum::YLeaf isis_adj_up_restarted;
        static const ydk::Enum::YLeaf isis_adj_up_nsf_restored;
        static const ydk::Enum::YLeaf isis_adj_up_chkpt_restored;
        static const ydk::Enum::YLeaf isis_adj_init_reason;
        static const ydk::Enum::YLeaf isis_adj_init_neighbor_forgot;
        static const ydk::Enum::YLeaf isis_adj_down_hold_time;
        static const ydk::Enum::YLeaf isis_adj_down_if_down;
        static const ydk::Enum::YLeaf isis_adj_down_cfg_mismatch;
        static const ydk::Enum::YLeaf isis_adj_down_circ_id;
        static const ydk::Enum::YLeaf isis_adj_down_nsf_ack_fail;
        static const ydk::Enum::YLeaf isis_adj_down_db_clear;
        static const ydk::Enum::YLeaf isis_adj_down_no_common_topology;
        static const ydk::Enum::YLeaf isis_adj_down_restart_tlv_missing;
        static const ydk::Enum::YLeaf isis_adj_down_bfd_down;
        static const ydk::Enum::YLeaf isis_adj_down_3way_down;

};

class IsisAfId : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

};

class IsisIfAfDisabledReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_intf_af_disabled_no_topo_enabled;
        static const ydk::Enum::YLeaf isis_intf_af_disabled_internal_error;

};

class IsisRedistProto : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_redist_connected;
        static const ydk::Enum::YLeaf isis_redist_static;
        static const ydk::Enum::YLeaf isis_redist_ospf;
        static const ydk::Enum::YLeaf isis_redist_bgp;
        static const ydk::Enum::YLeaf isis_redist_isis;
        static const ydk::Enum::YLeaf isis_redist_ospfv3;
        static const ydk::Enum::YLeaf isis_redist_rip;
        static const ydk::Enum::YLeaf isis_redist_eigrp;
        static const ydk::Enum::YLeaf isis_redist_subscriber;
        static const ydk::Enum::YLeaf isis_redist_application;
        static const ydk::Enum::YLeaf isis_redist_mobile;

};

class IsisSpfClass : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_spf_frr_sr_u_loop;
        static const ydk::Enum::YLeaf isis_spf_frr_per_link;
        static const ydk::Enum::YLeaf isis_spf_partial;
        static const ydk::Enum::YLeaf isis_spf_frr_per_prefix;
        static const ydk::Enum::YLeaf isis_spf_ucmp_calc;
        static const ydk::Enum::YLeaf isis_spf_next_hop;
        static const ydk::Enum::YLeaf isis_spf_incremental;
        static const ydk::Enum::YLeaf isis_spf_full;

};

class IsisIfTopoDisabledReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_intf_topo_disabled_not_cfg;
        static const ydk::Enum::YLeaf isis_intf_topo_disabled_internal_error;

};

class IsisShTeLink : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_sh_te_link_p2p;
        static const ydk::Enum::YLeaf isis_sh_te_link_broadcast;

};

class IsisIfDisabledReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_intf_disabled_no_net_cfg;
        static const ydk::Enum::YLeaf isis_intf_disabled_area_missing;
        static const ydk::Enum::YLeaf isis_intf_disabled_no_area_running;
        static const ydk::Enum::YLeaf isis_intf_disabled_no_topos_cfg;
        static const ydk::Enum::YLeaf isis_intf_disabled_no_imd_conn;
        static const ydk::Enum::YLeaf isis_intf_disabled_imd_reg_error;
        static const ydk::Enum::YLeaf isis_intf_disabled_level_mismatch;
        static const ydk::Enum::YLeaf isis_intf_disabled_base_caps_error;
        static const ydk::Enum::YLeaf isis_intf_disabled_intf_doesnt_exist;
        static const ydk::Enum::YLeaf isis_intf_disabled_intf_shutdown;
        static const ydk::Enum::YLeaf isis_intf_disabled_internal_error;

};

class IsisFrrTiebreaker : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_frr_tiebreaker_down_stream;
        static const ydk::Enum::YLeaf isis_frr_tiebreaker_lc_disjoint;
        static const ydk::Enum::YLeaf isis_frr_tiebreaker_low_est_backup_metric;
        static const ydk::Enum::YLeaf isis_frr_tiebreaker_node_protecting;
        static const ydk::Enum::YLeaf isis_frr_tiebreaker_primary_path;
        static const ydk::Enum::YLeaf isis_frr_tiebreaker_secondary_path;
        static const ydk::Enum::YLeaf isis_frr_tiebreaker_srlg_disjoint;
        static const ydk::Enum::YLeaf isis_frr_tiebreaker_default;

};

class IsisValid : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_invalid;
        static const ydk::Enum::YLeaf isis_valid;

};

class IsisIfAdjFormDisabledReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_intf_adj_form_disabled_cfg_passive;
        static const ydk::Enum::YLeaf isis_intf_adj_form_disabled_no_topo_participate;
        static const ydk::Enum::YLeaf isis_intf_adj_form_disabled_add_to_intf_stack_fail;
        static const ydk::Enum::YLeaf isis_intf_adj_form_disabled_clns_io;
        static const ydk::Enum::YLeaf isis_intf_adj_form_disabled_internal_error;

};

class IsisMediaClass : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_media_class_lan;
        static const ydk::Enum::YLeaf isis_media_class_p2p;
        static const ydk::Enum::YLeaf isis_media_class_loop_back;

};

class IsisUloopEvent : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_u_loop_event_none;
        static const ydk::Enum::YLeaf isis_u_loop_event_link_down;
        static const ydk::Enum::YLeaf isis_u_loop_event_link_up;
        static const ydk::Enum::YLeaf isis_u_loop_event_ol_bit_set;
        static const ydk::Enum::YLeaf isis_u_loop_event_ol_bit_unset;

};

class SrmsMiSrcEB : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf local;
        static const ydk::Enum::YLeaf remote;

};

class SrmsMiFlagEB : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf false_;
        static const ydk::Enum::YLeaf true_;

};


}
}

#endif /* _CISCO_IOS_XR_CLNS_ISIS_OPER_0_ */

