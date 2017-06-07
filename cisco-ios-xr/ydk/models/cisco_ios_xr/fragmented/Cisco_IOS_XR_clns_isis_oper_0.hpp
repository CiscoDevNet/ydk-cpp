#ifndef _CISCO_IOS_XR_CLNS_ISIS_OPER_0_
#define _CISCO_IOS_XR_CLNS_ISIS_OPER_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace Cisco_IOS_XR_clns_isis_oper {

class Isis : public Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Instances; //type: Isis::Instances

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances> instances;
        
}; // Isis


class Isis::Instances : public Entity
{
    public:
        Instances();
        ~Instances();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Instance; //type: Isis::Instances::Instance

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance> > instance;
        
}; // Isis::Instances


class Isis::Instances::Instance : public Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_name; //type: string
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

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::CheckpointAdjacencies> checkpoint_adjacencies;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::CheckpointInterfaces> checkpoint_interfaces;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::CheckpointLsps> checkpoint_lsps;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::CheckpointTeTunnels> checkpoint_te_tunnels;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::ErrorLog> error_log;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::HostNames> host_names;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::InterfaceStatistics> interface_statistics;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels> levels;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::MeshGroups> mesh_groups;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NeighborSummaries> neighbor_summaries;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors> neighbors;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatistics> nsr_statistics;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus> nsr_status;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Protocol> protocol;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Srms> srms;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::StatisticsGlobal> statistics_global;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies> topologies;
        
}; // Isis::Instances::Instance


class Isis::Instances::Instance::Neighbors : public Entity
{
    public:
        Neighbors();
        ~Neighbors();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Neighbor; //type: Isis::Instances::Instance::Neighbors::Neighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor> > neighbor;
        
}; // Isis::Instances::Instance::Neighbors


class Isis::Instances::Instance::Neighbors::Neighbor : public Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf system_id; //type: string
        YLeaf interface_name; //type: string
        YLeaf neighbor_system_id; //type: string
        YLeaf neighbor_snpa; //type: string
        YLeaf local_interface; //type: string
        YLeaf neighbor_state; //type: IsisAdjStateEnum
        YLeaf neighbor_circuit_type; //type: IsisLevelsEnum
        YLeaf neighbor_ietf_nsf_capable_flag; //type: uint32
        YLeaf neighbor_media_type; //type: IsisMediaClassEnum
        YLeaf neighbor_holdtime; //type: uint32
        YLeaf neighbor_uptime_valid_flag; //type: boolean
        YLeaf neighbor_uptime; //type: uint32
        YLeaf nsr_standby; //type: boolean
        YLeafList neighbor_active_area_address; //type: list of  string
        class TopologiesSupported; //type: Isis::Instances::Instance::Neighbors::Neighbor::TopologiesSupported
        class NeighborPerAddressFamilyData; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData> > neighbor_per_address_family_data;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::TopologiesSupported> > topologies_supported;
        
}; // Isis::Instances::Instance::Neighbors::Neighbor


class Isis::Instances::Instance::Neighbors::Neighbor::TopologiesSupported : public Entity
{
    public:
        TopologiesSupported();
        ~TopologiesSupported();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IsisAfIdEnum
        YLeaf saf_name; //type: IsisSubAfIdEnum
        YLeaf vrf_name; //type: string
        YLeaf topology_name; //type: string

}; // Isis::Instances::Instance::Neighbors::Neighbor::TopologiesSupported


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData : public Entity
{
    public:
        NeighborPerAddressFamilyData();
        ~NeighborPerAddressFamilyData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IsisAfIdEnum
        class Ipv4; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4
        class Ipv6; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6> ipv6;
        
}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4 : public Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf next_hop; //type: string
        YLeafList interface_address; //type: list of  string
        YLeafList underlying_interface; //type: list of  string
        YLeafList underlying_adjacency_sid; //type: list of  uint32
        class AdjacencySid; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid
        class NonFrrAdjacencySid; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid> adjacency_sid;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid> non_frr_adjacency_sid;
        
}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid : public Entity
{
    public:
        AdjacencySid();
        ~AdjacencySid();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf adjacency_sid_value; //type: uint32
        class AdjacencySidBackup; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup
        class AdjacencySidBackupTe; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup> adjacency_sid_backup;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe> adjacency_sid_backup_te;
        
}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup : public Entity
{
    public:
        AdjacencySidBackup();
        ~AdjacencySidBackup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf backup_label_stack_size; //type: uint8
        YLeaf backup_node_address; //type: string
        YLeaf backup_nexthop; //type: string
        YLeaf backup_interface; //type: string
        YLeafList backup_label_stack; //type: list of  uint32

}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe : public Entity
{
    public:
        AdjacencySidBackupTe();
        ~AdjacencySidBackupTe();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf backup_label_stack_size; //type: uint8
        YLeaf backup_node_address; //type: string
        YLeaf backup_nexthop; //type: string
        YLeaf backup_interface; //type: string
        YLeafList backup_label_stack; //type: list of  uint32

}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid : public Entity
{
    public:
        NonFrrAdjacencySid();
        ~NonFrrAdjacencySid();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf adjacency_sid_value; //type: uint32
        class AdjacencySidBackup; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup
        class AdjacencySidBackupTe; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup> adjacency_sid_backup;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe> adjacency_sid_backup_te;
        
}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup : public Entity
{
    public:
        AdjacencySidBackup();
        ~AdjacencySidBackup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf backup_label_stack_size; //type: uint8
        YLeaf backup_node_address; //type: string
        YLeaf backup_nexthop; //type: string
        YLeaf backup_interface; //type: string
        YLeafList backup_label_stack; //type: list of  uint32

}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe : public Entity
{
    public:
        AdjacencySidBackupTe();
        ~AdjacencySidBackupTe();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf backup_label_stack_size; //type: uint8
        YLeaf backup_node_address; //type: string
        YLeaf backup_nexthop; //type: string
        YLeaf backup_interface; //type: string
        YLeafList backup_label_stack; //type: list of  uint32

}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6 : public Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf next_hop; //type: string
        YLeafList interface_address; //type: list of  string
        YLeafList underlying_interface; //type: list of  string
        YLeafList underlying_adjacency_sid; //type: list of  uint32
        class AdjacencySid; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid
        class NonFrrAdjacencySid; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid> adjacency_sid;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid> non_frr_adjacency_sid;
        
}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid : public Entity
{
    public:
        AdjacencySid();
        ~AdjacencySid();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf adjacency_sid_value; //type: uint32
        class AdjacencySidBackup; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup
        class AdjacencySidBackupTe; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup> adjacency_sid_backup;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe> adjacency_sid_backup_te;
        
}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup : public Entity
{
    public:
        AdjacencySidBackup();
        ~AdjacencySidBackup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf backup_label_stack_size; //type: uint8
        YLeaf backup_node_address; //type: string
        YLeaf backup_nexthop; //type: string
        YLeaf backup_interface; //type: string
        YLeafList backup_label_stack; //type: list of  uint32

}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe : public Entity
{
    public:
        AdjacencySidBackupTe();
        ~AdjacencySidBackupTe();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf backup_label_stack_size; //type: uint8
        YLeaf backup_node_address; //type: string
        YLeaf backup_nexthop; //type: string
        YLeaf backup_interface; //type: string
        YLeafList backup_label_stack; //type: list of  uint32

}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid : public Entity
{
    public:
        NonFrrAdjacencySid();
        ~NonFrrAdjacencySid();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf adjacency_sid_value; //type: uint32
        class AdjacencySidBackup; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup
        class AdjacencySidBackupTe; //type: Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup> adjacency_sid_backup;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe> adjacency_sid_backup_te;
        
}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup : public Entity
{
    public:
        AdjacencySidBackup();
        ~AdjacencySidBackup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf backup_label_stack_size; //type: uint8
        YLeaf backup_node_address; //type: string
        YLeaf backup_nexthop; //type: string
        YLeaf backup_interface; //type: string
        YLeafList backup_label_stack; //type: list of  uint32

}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup


class Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe : public Entity
{
    public:
        AdjacencySidBackupTe();
        ~AdjacencySidBackupTe();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf backup_label_stack_size; //type: uint8
        YLeaf backup_node_address; //type: string
        YLeaf backup_nexthop; //type: string
        YLeaf backup_interface; //type: string
        YLeafList backup_label_stack; //type: list of  uint32

}; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe


class Isis::Instances::Instance::HostNames : public Entity
{
    public:
        HostNames();
        ~HostNames();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class HostName; //type: Isis::Instances::Instance::HostNames::HostName

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::HostNames::HostName> > host_name;
        
}; // Isis::Instances::Instance::HostNames


class Isis::Instances::Instance::HostNames::HostName : public Entity
{
    public:
        HostName();
        ~HostName();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf system_id; //type: string
        YLeaf local_is_flag; //type: boolean
        YLeaf host_levels; //type: IsisLevelsEnum
        YLeaf host_name; //type: string

}; // Isis::Instances::Instance::HostNames::HostName


class Isis::Instances::Instance::StatisticsGlobal : public Entity
{
    public:
        StatisticsGlobal();
        ~StatisticsGlobal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Statistics; //type: Isis::Instances::Instance::StatisticsGlobal::Statistics
        class PerAreaData; //type: Isis::Instances::Instance::StatisticsGlobal::PerAreaData

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::StatisticsGlobal::PerAreaData> > per_area_data;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::StatisticsGlobal::Statistics> statistics;
        
}; // Isis::Instances::Instance::StatisticsGlobal


class Isis::Instances::Instance::StatisticsGlobal::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fast_psnp_lookup_count; //type: uint32
        YLeaf fast_psnp_lookup_hit_count; //type: uint32
        YLeaf fast_csnp_lookup_count; //type: uint32
        YLeaf fast_csnp_lookup_hit_count; //type: uint32
        YLeaf fast_csnp_cache_update_count; //type: uint32
        YLeaf zero_holdtime_lsp_count; //type: uint32
        YLeaf invalid_checksum_lsp_count; //type: uint32
        YLeaf iih_dropped_count; //type: uint32
        YLeaf lsp_dropped_count; //type: uint32
        YLeaf snp_dropped_count; //type: uint32
        YLeaf maximum_iih_queue_length; //type: uint32
        YLeaf maximum_pdu_queue_length; //type: uint32
        YLeaf pdu_queue_length; //type: uint32
        YLeaf avg_hello_recv_rate; //type: uint32
        YLeaf avg_csnp_recv_rate; //type: uint32
        YLeaf avg_psnp_recv_rate; //type: uint32
        YLeaf avg_lsp_recv_rate; //type: uint32
        YLeaf avg_hello_send_rate; //type: uint32
        YLeaf avg_csnp_send_rate; //type: uint32
        YLeaf avg_psnp_send_rate; //type: uint32
        YLeaf avg_lsp_send_rate; //type: uint32
        class AvgHelloProcessTime; //type: Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime
        class AvgCsnpProcessTime; //type: Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime
        class AvgPsnpProcessTime; //type: Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime
        class AvgLspProcessTime; //type: Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime
        class AvgHelloTransmitTime; //type: Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime
        class AvgCsnpTransmitTime; //type: Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime
        class AvgPsnpTransmitTime; //type: Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime
        class AvgLspTransmitTime; //type: Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime> avg_csnp_process_time;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime> avg_csnp_transmit_time;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime> avg_hello_process_time;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime> avg_hello_transmit_time;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime> avg_lsp_process_time;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime> avg_lsp_transmit_time;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime> avg_psnp_process_time;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime> avg_psnp_transmit_time;
        
}; // Isis::Instances::Instance::StatisticsGlobal::Statistics


class Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime : public Entity
{
    public:
        AvgHelloProcessTime();
        ~AvgHelloProcessTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint32
        YLeaf nano_seconds; //type: uint32

}; // Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime


class Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime : public Entity
{
    public:
        AvgCsnpProcessTime();
        ~AvgCsnpProcessTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint32
        YLeaf nano_seconds; //type: uint32

}; // Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime


class Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime : public Entity
{
    public:
        AvgPsnpProcessTime();
        ~AvgPsnpProcessTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint32
        YLeaf nano_seconds; //type: uint32

}; // Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime


class Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime : public Entity
{
    public:
        AvgLspProcessTime();
        ~AvgLspProcessTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint32
        YLeaf nano_seconds; //type: uint32

}; // Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime


class Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime : public Entity
{
    public:
        AvgHelloTransmitTime();
        ~AvgHelloTransmitTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint32
        YLeaf nano_seconds; //type: uint32

}; // Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime


class Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime : public Entity
{
    public:
        AvgCsnpTransmitTime();
        ~AvgCsnpTransmitTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint32
        YLeaf nano_seconds; //type: uint32

}; // Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime


class Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime : public Entity
{
    public:
        AvgPsnpTransmitTime();
        ~AvgPsnpTransmitTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint32
        YLeaf nano_seconds; //type: uint32

}; // Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime


class Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime : public Entity
{
    public:
        AvgLspTransmitTime();
        ~AvgLspTransmitTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint32
        YLeaf nano_seconds; //type: uint32

}; // Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime


class Isis::Instances::Instance::StatisticsGlobal::PerAreaData : public Entity
{
    public:
        PerAreaData();
        ~PerAreaData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf level; //type: IsisLevelEnum
        class Statistics; //type: Isis::Instances::Instance::StatisticsGlobal::PerAreaData::Statistics
        class PerTopologyData; //type: Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData> > per_topology_data;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::StatisticsGlobal::PerAreaData::Statistics> statistics;
        
}; // Isis::Instances::Instance::StatisticsGlobal::PerAreaData


class Isis::Instances::Instance::StatisticsGlobal::PerAreaData::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf system_lsp_build_count; //type: uint32
        YLeaf system_lsp_refresh_count; //type: uint32

}; // Isis::Instances::Instance::StatisticsGlobal::PerAreaData::Statistics


class Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData : public Entity
{
    public:
        PerTopologyData();
        ~PerTopologyData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Id; //type: Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id
        class Statistics; //type: Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id> id;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics> statistics;
        
}; // Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData


class Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id : public Entity
{
    public:
        Id();
        ~Id();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IsisAfIdEnum
        YLeaf saf_name; //type: IsisSubAfIdEnum
        YLeaf vrf_name; //type: string
        YLeaf topology_name; //type: string

}; // Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id


class Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf spf_run_count; //type: uint32
        YLeaf ispf_run_count; //type: uint32
        YLeaf nhc_run_count; //type: uint32
        YLeaf prc_run_count; //type: uint32
        YLeaf periodic_run_count; //type: uint32

}; // Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics


class Isis::Instances::Instance::Levels : public Entity
{
    public:
        Levels();
        ~Levels();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Level; //type: Isis::Instances::Instance::Levels::Level

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level> > level;
        
}; // Isis::Instances::Instance::Levels


class Isis::Instances::Instance::Levels::Level : public Entity
{
    public:
        Level();
        ~Level();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf level; //type: IsisInternalLevelEnum
        class AdjacencyLog; //type: Isis::Instances::Instance::Levels::Level::AdjacencyLog
        class LspTableSummary; //type: Isis::Instances::Instance::Levels::Level::LspTableSummary
        class Adjacencies; //type: Isis::Instances::Instance::Levels::Level::Adjacencies
        class DetailedLsps; //type: Isis::Instances::Instance::Levels::Level::DetailedLsps
        class Lsps; //type: Isis::Instances::Instance::Levels::Level::Lsps
        class LspLog; //type: Isis::Instances::Instance::Levels::Level::LspLog
        class DatabaseLog; //type: Isis::Instances::Instance::Levels::Level::DatabaseLog

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies> adjacencies;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::AdjacencyLog> adjacency_log;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::DatabaseLog> database_log;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::DetailedLsps> detailed_lsps;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspLog> lsp_log;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspTableSummary> lsp_table_summary;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Lsps> lsps;
        
}; // Isis::Instances::Instance::Levels::Level


class Isis::Instances::Instance::Levels::Level::AdjacencyLog : public Entity
{
    public:
        AdjacencyLog();
        ~AdjacencyLog();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LogEntry; //type: Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry> > log_entry;
        
}; // Isis::Instances::Instance::Levels::Level::AdjacencyLog


class Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry : public Entity
{
    public:
        LogEntry();
        ~LogEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf adj_log_neighbor_system_id; //type: string
        YLeaf interface_name; //type: string
        YLeaf prev_adj_state; //type: IsisAdjStateEnum
        YLeaf cur_adj_state; //type: IsisAdjStateEnum
        YLeaf state_reason; //type: IsisAdjStateReasonEnum
        class GenericData; //type: Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData
        class AdjacencyPerTopologyChange; //type: Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange> > adjacency_per_topology_change;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData> generic_data;
        
}; // Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry


class Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData : public Entity
{
    public:
        GenericData();
        ~GenericData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Timestamp; //type: Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::Timestamp

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::Timestamp> timestamp;
        
}; // Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData


class Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::Timestamp : public Entity
{
    public:
        Timestamp();
        ~Timestamp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint32
        YLeaf nano_seconds; //type: uint32

}; // Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::Timestamp


class Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange : public Entity
{
    public:
        AdjacencyPerTopologyChange();
        ~AdjacencyPerTopologyChange();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf change; //type: IsisAdjTopoChangeEnum
        class Id; //type: Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::Id

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::Id> id;
        
}; // Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange


class Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::Id : public Entity
{
    public:
        Id();
        ~Id();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IsisAfIdEnum
        YLeaf saf_name; //type: IsisSubAfIdEnum
        YLeaf vrf_name; //type: string
        YLeaf topology_name; //type: string

}; // Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::Id


class Isis::Instances::Instance::Levels::Level::LspTableSummary : public Entity
{
    public:
        LspTableSummary();
        ~LspTableSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Fragment0LspStats; //type: Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats
        class AllFragmentLspStats; //type: Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats> all_fragment_lsp_stats;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats> fragment0lsp_stats;
        
}; // Isis::Instances::Instance::Levels::Level::LspTableSummary


class Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats : public Entity
{
    public:
        Fragment0LspStats();
        ~Fragment0LspStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NodeCounters; //type: Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters
        class PerTopologyCounter; //type: Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters> node_counters;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter> > per_topology_counter;
        
}; // Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats


class Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters : public Entity
{
    public:
        NodeCounters();
        ~NodeCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RouteLspCount; //type: Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::RouteLspCount
        class PseudoNodeLspCount; //type: Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::PseudoNodeLspCount

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::PseudoNodeLspCount> pseudo_node_lsp_count;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::RouteLspCount> route_lsp_count;
        
}; // Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters


class Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::RouteLspCount : public Entity
{
    public:
        RouteLspCount();
        ~RouteLspCount();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf active_lsp_count; //type: uint32
        YLeaf purged_lsp_count; //type: uint32

}; // Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::RouteLspCount


class Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::PseudoNodeLspCount : public Entity
{
    public:
        PseudoNodeLspCount();
        ~PseudoNodeLspCount();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf active_lsp_count; //type: uint32
        YLeaf purged_lsp_count; //type: uint32

}; // Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::PseudoNodeLspCount


class Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter : public Entity
{
    public:
        PerTopologyCounter();
        ~PerTopologyCounter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Id; //type: Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::Id
        class OverloadedLspCount; //type: Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::OverloadedLspCount
        class AttachedLspCount; //type: Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::AttachedLspCount

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::AttachedLspCount> attached_lsp_count;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::Id> id;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::OverloadedLspCount> overloaded_lsp_count;
        
}; // Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter


class Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::Id : public Entity
{
    public:
        Id();
        ~Id();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IsisAfIdEnum
        YLeaf saf_name; //type: IsisSubAfIdEnum
        YLeaf vrf_name; //type: string
        YLeaf topology_name; //type: string

}; // Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::Id


class Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::OverloadedLspCount : public Entity
{
    public:
        OverloadedLspCount();
        ~OverloadedLspCount();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf active_lsp_count; //type: uint32
        YLeaf purged_lsp_count; //type: uint32

}; // Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::OverloadedLspCount


class Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::AttachedLspCount : public Entity
{
    public:
        AttachedLspCount();
        ~AttachedLspCount();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf active_lsp_count; //type: uint32
        YLeaf purged_lsp_count; //type: uint32

}; // Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::AttachedLspCount


class Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats : public Entity
{
    public:
        AllFragmentLspStats();
        ~AllFragmentLspStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NodeCounters; //type: Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters> node_counters;
        
}; // Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats


class Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters : public Entity
{
    public:
        NodeCounters();
        ~NodeCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RouteLspCount; //type: Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::RouteLspCount
        class PseudoNodeLspCount; //type: Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::PseudoNodeLspCount

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::PseudoNodeLspCount> pseudo_node_lsp_count;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::RouteLspCount> route_lsp_count;
        
}; // Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters


class Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::RouteLspCount : public Entity
{
    public:
        RouteLspCount();
        ~RouteLspCount();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf active_lsp_count; //type: uint32
        YLeaf purged_lsp_count; //type: uint32

}; // Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::RouteLspCount


class Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::PseudoNodeLspCount : public Entity
{
    public:
        PseudoNodeLspCount();
        ~PseudoNodeLspCount();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf active_lsp_count; //type: uint32
        YLeaf purged_lsp_count; //type: uint32

}; // Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::PseudoNodeLspCount


class Isis::Instances::Instance::Levels::Level::Adjacencies : public Entity
{
    public:
        Adjacencies();
        ~Adjacencies();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Adjacency; //type: Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency> > adjacency;
        
}; // Isis::Instances::Instance::Levels::Level::Adjacencies


class Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency : public Entity
{
    public:
        Adjacency();
        ~Adjacency();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf system_id; //type: string
        YLeaf interface_name; //type: string
        YLeaf adjacency_system_id; //type: string
        YLeaf adjacency_snpa; //type: string
        YLeaf adjacency_interface; //type: string
        YLeaf adjacency_media_type; //type: IsisMediaClassEnum
        YLeaf adjacency_state; //type: IsisAdjStateEnum
        YLeaf adjacency_bfd_state; //type: IsisAdjBfdStateEnum
        YLeaf adjacency_ipv6bfd_state; //type: IsisAdjBfdStateEnum
        YLeaf adj_ipv4bfd_retry_running; //type: boolean
        YLeaf adj_ipv6bfd_retry_running; //type: boolean
        YLeaf adj_ipv4bfd_retry_exp; //type: uint32
        YLeaf adj_ipv6bfd_retry_exp; //type: uint32
        YLeaf adj_ipv4bfd_retry_count; //type: uint32
        YLeaf adj_ipv6bfd_retry_count; //type: uint32
        YLeaf adjacency_uptime_valid_flag; //type: boolean
        YLeaf adjacency_uptime; //type: uint32
        YLeaf adjacency_holdtime; //type: uint32
        YLeaf adjacency_checkpoint_object_id; //type: uint32
        YLeaf adjacency_ietf_nsf_capable_flag; //type: boolean
        YLeaf adjacency_dispriority; //type: uint8
        YLeaf adjacency_neighbor_priority; //type: uint8
        YLeaf adjacency_local_priority; //type: uint8
        YLeaf local_dis_flag; //type: boolean
        YLeaf neighbor_dis_flag; //type: boolean
        YLeaf nsr_standby; //type: uint8
        YLeafList adjacency_area_address; //type: list of  string
        class AdjacencyTopology; //type: Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology
        class AdjacencyPerAddressFamilyData; //type: Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData> > adjacency_per_address_family_data;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology> > adjacency_topology;
        
}; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency


class Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology : public Entity
{
    public:
        AdjacencyTopology();
        ~AdjacencyTopology();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf topology_status; //type: IsisAdjTopoStatusEnum
        YLeaf parallel_p2p_link_suppressed_flag; //type: boolean
        class Id; //type: Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology::Id

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology::Id> id;
        
}; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology


class Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology::Id : public Entity
{
    public:
        Id();
        ~Id();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IsisAfIdEnum
        YLeaf saf_name; //type: IsisSubAfIdEnum
        YLeaf vrf_name; //type: string
        YLeaf topology_name; //type: string

}; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology::Id


class Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData : public Entity
{
    public:
        AdjacencyPerAddressFamilyData();
        ~AdjacencyPerAddressFamilyData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IsisAfIdEnum
        class Ipv4; //type: Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4
        class Ipv6; //type: Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6> ipv6;
        
}; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData


class Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4 : public Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf next_hop; //type: string
        YLeafList interface_address; //type: list of  string
        YLeafList underlying_interface; //type: list of  string
        YLeafList underlying_adjacency_sid; //type: list of  uint32
        class AdjacencySid; //type: Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid
        class NonFrrAdjacencySid; //type: Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid> adjacency_sid;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid> non_frr_adjacency_sid;
        
}; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4


class Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid : public Entity
{
    public:
        AdjacencySid();
        ~AdjacencySid();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf adjacency_sid_value; //type: uint32
        class AdjacencySidBackup; //type: Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup
        class AdjacencySidBackupTe; //type: Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup> adjacency_sid_backup;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe> adjacency_sid_backup_te;
        
}; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid


class Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup : public Entity
{
    public:
        AdjacencySidBackup();
        ~AdjacencySidBackup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf backup_label_stack_size; //type: uint8
        YLeaf backup_node_address; //type: string
        YLeaf backup_nexthop; //type: string
        YLeaf backup_interface; //type: string
        YLeafList backup_label_stack; //type: list of  uint32

}; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup


class Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe : public Entity
{
    public:
        AdjacencySidBackupTe();
        ~AdjacencySidBackupTe();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf backup_label_stack_size; //type: uint8
        YLeaf backup_node_address; //type: string
        YLeaf backup_nexthop; //type: string
        YLeaf backup_interface; //type: string
        YLeafList backup_label_stack; //type: list of  uint32

}; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe


class Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid : public Entity
{
    public:
        NonFrrAdjacencySid();
        ~NonFrrAdjacencySid();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf adjacency_sid_value; //type: uint32
        class AdjacencySidBackup; //type: Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup
        class AdjacencySidBackupTe; //type: Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup> adjacency_sid_backup;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe> adjacency_sid_backup_te;
        
}; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid


class Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup : public Entity
{
    public:
        AdjacencySidBackup();
        ~AdjacencySidBackup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf backup_label_stack_size; //type: uint8
        YLeaf backup_node_address; //type: string
        YLeaf backup_nexthop; //type: string
        YLeaf backup_interface; //type: string
        YLeafList backup_label_stack; //type: list of  uint32

}; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup


class Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe : public Entity
{
    public:
        AdjacencySidBackupTe();
        ~AdjacencySidBackupTe();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf backup_label_stack_size; //type: uint8
        YLeaf backup_node_address; //type: string
        YLeaf backup_nexthop; //type: string
        YLeaf backup_interface; //type: string
        YLeafList backup_label_stack; //type: list of  uint32

}; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe


class Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6 : public Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf next_hop; //type: string
        YLeafList interface_address; //type: list of  string
        YLeafList underlying_interface; //type: list of  string
        YLeafList underlying_adjacency_sid; //type: list of  uint32
        class AdjacencySid; //type: Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid
        class NonFrrAdjacencySid; //type: Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid> adjacency_sid;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid> non_frr_adjacency_sid;
        
}; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6


class Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid : public Entity
{
    public:
        AdjacencySid();
        ~AdjacencySid();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf adjacency_sid_value; //type: uint32
        class AdjacencySidBackup; //type: Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup
        class AdjacencySidBackupTe; //type: Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup> adjacency_sid_backup;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe> adjacency_sid_backup_te;
        
}; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid


class Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup : public Entity
{
    public:
        AdjacencySidBackup();
        ~AdjacencySidBackup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf backup_label_stack_size; //type: uint8
        YLeaf backup_node_address; //type: string
        YLeaf backup_nexthop; //type: string
        YLeaf backup_interface; //type: string
        YLeafList backup_label_stack; //type: list of  uint32

}; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup


class Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe : public Entity
{
    public:
        AdjacencySidBackupTe();
        ~AdjacencySidBackupTe();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf backup_label_stack_size; //type: uint8
        YLeaf backup_node_address; //type: string
        YLeaf backup_nexthop; //type: string
        YLeaf backup_interface; //type: string
        YLeafList backup_label_stack; //type: list of  uint32

}; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe


class Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid : public Entity
{
    public:
        NonFrrAdjacencySid();
        ~NonFrrAdjacencySid();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf adjacency_sid_value; //type: uint32
        class AdjacencySidBackup; //type: Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup
        class AdjacencySidBackupTe; //type: Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup> adjacency_sid_backup;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe> adjacency_sid_backup_te;
        
}; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid


class Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup : public Entity
{
    public:
        AdjacencySidBackup();
        ~AdjacencySidBackup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf backup_label_stack_size; //type: uint8
        YLeaf backup_node_address; //type: string
        YLeaf backup_nexthop; //type: string
        YLeaf backup_interface; //type: string
        YLeafList backup_label_stack; //type: list of  uint32

}; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup


class Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe : public Entity
{
    public:
        AdjacencySidBackupTe();
        ~AdjacencySidBackupTe();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf backup_label_stack_size; //type: uint8
        YLeaf backup_node_address; //type: string
        YLeaf backup_nexthop; //type: string
        YLeaf backup_interface; //type: string
        YLeafList backup_label_stack; //type: list of  uint32

}; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe


class Isis::Instances::Instance::Levels::Level::DetailedLsps : public Entity
{
    public:
        DetailedLsps();
        ~DetailedLsps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DetailedLsp; //type: Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp> > detailed_lsp;
        
}; // Isis::Instances::Instance::Levels::Level::DetailedLsps


class Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp : public Entity
{
    public:
        DetailedLsp();
        ~DetailedLsp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsp_id; //type: string
        YLeaf lsp_body; //type: string
        class LspHeaderData; //type: Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp::LspHeaderData

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp::LspHeaderData> lsp_header_data;
        
}; // Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp


class Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp::LspHeaderData : public Entity
{
    public:
        LspHeaderData();
        ~LspHeaderData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsp_id; //type: string
        YLeaf local_lsp_flag; //type: boolean
        YLeaf lsp_active_flag; //type: boolean
        YLeaf lsp_holdtime; //type: uint16
        YLeaf lsp_sequence_number; //type: uint32
        YLeaf lsp_checksum; //type: uint16
        YLeaf lsp_parition_repair_supported_flag; //type: boolean
        YLeaf lsp_attached_flag; //type: boolean
        YLeaf lsp_overloaded_flag; //type: boolean
        YLeaf lsp_nonv1a_flag; //type: uint16
        YLeaf lsp_level; //type: IsisLevelsEnum
        YLeaf lsp_length; //type: uint16

}; // Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp::LspHeaderData


class Isis::Instances::Instance::Levels::Level::Lsps : public Entity
{
    public:
        Lsps();
        ~Lsps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Lsp; //type: Isis::Instances::Instance::Levels::Level::Lsps::Lsp

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Lsps::Lsp> > lsp;
        
}; // Isis::Instances::Instance::Levels::Level::Lsps


class Isis::Instances::Instance::Levels::Level::Lsps::Lsp : public Entity
{
    public:
        Lsp();
        ~Lsp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsp_id; //type: string
        YLeaf lsp_body; //type: string
        class LspHeaderData; //type: Isis::Instances::Instance::Levels::Level::Lsps::Lsp::LspHeaderData

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Lsps::Lsp::LspHeaderData> lsp_header_data;
        
}; // Isis::Instances::Instance::Levels::Level::Lsps::Lsp


class Isis::Instances::Instance::Levels::Level::Lsps::Lsp::LspHeaderData : public Entity
{
    public:
        LspHeaderData();
        ~LspHeaderData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsp_id; //type: string
        YLeaf local_lsp_flag; //type: boolean
        YLeaf lsp_active_flag; //type: boolean
        YLeaf lsp_holdtime; //type: uint16
        YLeaf lsp_sequence_number; //type: uint32
        YLeaf lsp_checksum; //type: uint16
        YLeaf lsp_parition_repair_supported_flag; //type: boolean
        YLeaf lsp_attached_flag; //type: boolean
        YLeaf lsp_overloaded_flag; //type: boolean
        YLeaf lsp_nonv1a_flag; //type: uint16
        YLeaf lsp_level; //type: IsisLevelsEnum
        YLeaf lsp_length; //type: uint16

}; // Isis::Instances::Instance::Levels::Level::Lsps::Lsp::LspHeaderData


class Isis::Instances::Instance::Levels::Level::LspLog : public Entity
{
    public:
        LspLog();
        ~LspLog();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LogEntry; //type: Isis::Instances::Instance::Levels::Level::LspLog::LogEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspLog::LogEntry> > log_entry;
        
}; // Isis::Instances::Instance::Levels::Level::LspLog


class Isis::Instances::Instance::Levels::Level::LspLog::LogEntry : public Entity
{
    public:
        LogEntry();
        ~LogEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf trigger_count; //type: uint32
        YLeaf delayed_trigger_count; //type: uint32
        YLeaf log_interface; //type: string
        YLeaf pseudo_node_number; //type: uint8
        YLeafList trigger; //type: list of  IsisLspTriggerEnum
        class GenericData; //type: Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData> generic_data;
        
}; // Isis::Instances::Instance::Levels::Level::LspLog::LogEntry


class Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData : public Entity
{
    public:
        GenericData();
        ~GenericData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Timestamp; //type: Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData::Timestamp

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData::Timestamp> timestamp;
        
}; // Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData


class Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData::Timestamp : public Entity
{
    public:
        Timestamp();
        ~Timestamp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint32
        YLeaf nano_seconds; //type: uint32

}; // Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData::Timestamp


class Isis::Instances::Instance::Levels::Level::DatabaseLog : public Entity
{
    public:
        DatabaseLog();
        ~DatabaseLog();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LogEntry; //type: Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry> > log_entry;
        
}; // Isis::Instances::Instance::Levels::Level::DatabaseLog


class Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry : public Entity
{
    public:
        LogEntry();
        ~LogEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lspdb_operation; //type: IsisLspDbOpEnum
        class GenericData; //type: Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData
        class NewLspEntry; //type: Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::NewLspEntry
        class OldLspEntry; //type: Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::OldLspEntry

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData> generic_data;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::NewLspEntry> new_lsp_entry;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::OldLspEntry> old_lsp_entry;
        
}; // Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry


class Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData : public Entity
{
    public:
        GenericData();
        ~GenericData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Timestamp; //type: Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData::Timestamp

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData::Timestamp> timestamp;
        
}; // Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData


class Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData::Timestamp : public Entity
{
    public:
        Timestamp();
        ~Timestamp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint32
        YLeaf nano_seconds; //type: uint32

}; // Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData::Timestamp


class Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::NewLspEntry : public Entity
{
    public:
        NewLspEntry();
        ~NewLspEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsp_id; //type: string
        YLeaf local_lsp_flag; //type: boolean
        YLeaf lsp_active_flag; //type: boolean
        YLeaf lsp_holdtime; //type: uint16
        YLeaf lsp_sequence_number; //type: uint32
        YLeaf lsp_checksum; //type: uint16
        YLeaf lsp_parition_repair_supported_flag; //type: boolean
        YLeaf lsp_attached_flag; //type: boolean
        YLeaf lsp_overloaded_flag; //type: boolean
        YLeaf lsp_nonv1a_flag; //type: uint16
        YLeaf lsp_level; //type: IsisLevelsEnum
        YLeaf lsp_length; //type: uint16

}; // Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::NewLspEntry


class Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::OldLspEntry : public Entity
{
    public:
        OldLspEntry();
        ~OldLspEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsp_id; //type: string
        YLeaf local_lsp_flag; //type: boolean
        YLeaf lsp_active_flag; //type: boolean
        YLeaf lsp_holdtime; //type: uint16
        YLeaf lsp_sequence_number; //type: uint32
        YLeaf lsp_checksum; //type: uint16
        YLeaf lsp_parition_repair_supported_flag; //type: boolean
        YLeaf lsp_attached_flag; //type: boolean
        YLeaf lsp_overloaded_flag; //type: boolean
        YLeaf lsp_nonv1a_flag; //type: uint16
        YLeaf lsp_level; //type: IsisLevelsEnum
        YLeaf lsp_length; //type: uint16

}; // Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::OldLspEntry


class Isis::Instances::Instance::Topologies : public Entity
{
    public:
        Topologies();
        ~Topologies();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Topology; //type: Isis::Instances::Instance::Topologies::Topology

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology> > topology;
        
}; // Isis::Instances::Instance::Topologies


class Isis::Instances::Instance::Topologies::Topology : public Entity
{
    public:
        Topology();
        ~Topology();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IsisAddressFamilyEnum
        YLeaf saf_name; //type: IsisSubAddressFamilyEnum
        YLeaf topology_name; //type: string
        class FrrSummary; //type: Isis::Instances::Instance::Topologies::Topology::FrrSummary
        class TopologyLevels; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels
        class Ipv6Routes; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6Routes
        class Ipv6FrrBackups; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups
        class Ipv4FrrBackups; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups
        class Ipv4Routes; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::FrrSummary> frr_summary;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes> ipv4_routes;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups> ipv4frr_backups;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes> ipv6_routes;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups> ipv6frr_backups;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels> topology_levels;
        
}; // Isis::Instances::Instance::Topologies::Topology


class Isis::Instances::Instance::Topologies::Topology::FrrSummary : public Entity
{
    public:
        FrrSummary();
        ~FrrSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Level1Prefixes; //type: Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes
        class Level2Prefixes; //type: Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes
        class UnreachablePrefixes; //type: Isis::Instances::Instance::Topologies::Topology::FrrSummary::UnreachablePrefixes

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes> level1_prefixes;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes> level2_prefixes;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::FrrSummary::UnreachablePrefixes> unreachable_prefixes;
        
}; // Isis::Instances::Instance::Topologies::Topology::FrrSummary


class Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes : public Entity
{
    public:
        Level1Prefixes();
        ~Level1Prefixes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AllPathsProtected; //type: Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::AllPathsProtected
        class SomePathsProtected; //type: Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::SomePathsProtected
        class Unprotected; //type: Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::Unprotected

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::AllPathsProtected> all_paths_protected;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::SomePathsProtected> some_paths_protected;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::Unprotected> unprotected;
        
}; // Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes


class Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::AllPathsProtected : public Entity
{
    public:
        AllPathsProtected();
        ~AllPathsProtected();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf critical; //type: uint32
        YLeaf high; //type: uint32
        YLeaf medium; //type: uint32
        YLeaf low; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::AllPathsProtected


class Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::SomePathsProtected : public Entity
{
    public:
        SomePathsProtected();
        ~SomePathsProtected();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf critical; //type: uint32
        YLeaf high; //type: uint32
        YLeaf medium; //type: uint32
        YLeaf low; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::SomePathsProtected


class Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::Unprotected : public Entity
{
    public:
        Unprotected();
        ~Unprotected();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf critical; //type: uint32
        YLeaf high; //type: uint32
        YLeaf medium; //type: uint32
        YLeaf low; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::Unprotected


class Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes : public Entity
{
    public:
        Level2Prefixes();
        ~Level2Prefixes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AllPathsProtected; //type: Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::AllPathsProtected
        class SomePathsProtected; //type: Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::SomePathsProtected
        class Unprotected; //type: Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Unprotected

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::AllPathsProtected> all_paths_protected;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::SomePathsProtected> some_paths_protected;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Unprotected> unprotected;
        
}; // Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes


class Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::AllPathsProtected : public Entity
{
    public:
        AllPathsProtected();
        ~AllPathsProtected();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf critical; //type: uint32
        YLeaf high; //type: uint32
        YLeaf medium; //type: uint32
        YLeaf low; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::AllPathsProtected


class Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::SomePathsProtected : public Entity
{
    public:
        SomePathsProtected();
        ~SomePathsProtected();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf critical; //type: uint32
        YLeaf high; //type: uint32
        YLeaf medium; //type: uint32
        YLeaf low; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::SomePathsProtected


class Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Unprotected : public Entity
{
    public:
        Unprotected();
        ~Unprotected();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf critical; //type: uint32
        YLeaf high; //type: uint32
        YLeaf medium; //type: uint32
        YLeaf low; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Unprotected


class Isis::Instances::Instance::Topologies::Topology::FrrSummary::UnreachablePrefixes : public Entity
{
    public:
        UnreachablePrefixes();
        ~UnreachablePrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf critical; //type: uint32
        YLeaf high; //type: uint32
        YLeaf medium; //type: uint32
        YLeaf low; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::FrrSummary::UnreachablePrefixes


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels : public Entity
{
    public:
        TopologyLevels();
        ~TopologyLevels();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class TopologyLevel; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel> > topology_level;
        
}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel : public Entity
{
    public:
        TopologyLevel();
        ~TopologyLevel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf level; //type: IsisInternalLevelEnum
        class TeAdvertisements; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements
        class TeAdjacencyLog; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog
        class SpfLog; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog
        class TeTunnels; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels
        class Ipv4LinkTopologies; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies
        class TopologySummary; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary
        class Ipv6LinkTopologies; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies> ipv4_link_topologies;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies> ipv6_link_topologies;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog> spf_log;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog> te_adjacency_log;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements> te_advertisements;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels> te_tunnels;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary> topology_summary;
        
}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements : public Entity
{
    public:
        TeAdvertisements();
        ~TeAdvertisements();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf te_adv_data_present; //type: boolean
        YLeaf te_system_id; //type: string
        YLeaf te_local_router_id; //type: string
        class Tepceadv; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::Tepceadv
        class TeAdv; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv> > te_adv;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::Tepceadv> tepceadv;
        
}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::Tepceadv : public Entity
{
    public:
        Tepceadv();
        ~Tepceadv();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pce_adv_data_present; //type: boolean
        YLeaf pce_flooding_scope; //type: IsisShTePceFloodingScopeEnum
        YLeaf pce_address_ipv4; //type: string
        YLeaf pce_path_scope_bits; //type: uint8
        YLeaf pce_path_scope_prefs; //type: uint16

}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::Tepceadv


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv : public Entity
{
    public:
        TeAdv();
        ~TeAdv();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf te_neighbor_system_id; //type: string
        YLeaf link_type; //type: IsisShTeLinkEnum
        YLeaf local_ip_address; //type: string
        YLeaf te_neighbor_ip_address; //type: string
        YLeaf te_metric; //type: uint32
        YLeaf te_physical_link_bandwidth; //type: uint32
        YLeaf te_reserved_link_bandwidth; //type: uint32
        YLeaf te_subpool_reserved_link_bandwidth; //type: uint32
        YLeaf te_affinity; //type: uint32
        YLeaf te_ext_admin_num; //type: uint32
        YLeaf te_sub_tlv_data_present; //type: boolean
        YLeafList te_transmitted_bandwidth; //type: list of  uint32
        YLeafList te_subpool_transmitted_bandwidth; //type: list of  uint32
        YLeafList te_ext_admin_sub; //type: list of  uint32
        class TeSubTlv; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubTlv

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubTlv> > te_sub_tlv;
        
}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubTlv : public Entity
{
    public:
        TeSubTlv();
        ~TeSubTlv();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf te_sub_tlv_type; //type: uint16
        YLeaf te_sub_tlv_length; //type: uint16
        YLeaf te_sub_tlv_value; //type: string

}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubTlv


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog : public Entity
{
    public:
        TeAdjacencyLog();
        ~TeAdjacencyLog();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LogEntry; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry> > log_entry;
        
}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry : public Entity
{
    public:
        LogEntry();
        ~LogEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf neighbor_ip_address; //type: string
        YLeaf status; //type: boolean
        YLeaf log_interface; //type: string
        YLeaf te_log_neighbor_system_id; //type: string
        class GenericData; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData> generic_data;
        
}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData : public Entity
{
    public:
        GenericData();
        ~GenericData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Timestamp; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::Timestamp

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::Timestamp> timestamp;
        
}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::Timestamp : public Entity
{
    public:
        Timestamp();
        ~Timestamp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint32
        YLeaf nano_seconds; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::Timestamp


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog : public Entity
{
    public:
        SpfLog();
        ~SpfLog();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LogEntry; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry> > log_entry;
        
}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry : public Entity
{
    public:
        LogEntry();
        ~LogEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf class_; //type: IsisSpfClassEnum
        YLeaf wait_enforced; //type: uint32
        YLeaf next_wait_interval; //type: uint32
        YLeaf updated_lsp_count; //type: uint32
        class GenericData; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData
        class Triggers; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers
        class SptCalculationStatistics; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics
        class RouteUpdateStatistics; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData> generic_data;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics> route_update_statistics;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics> spt_calculation_statistics;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers> triggers;
        
}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData : public Entity
{
    public:
        GenericData();
        ~GenericData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Timestamp; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::Timestamp

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::Timestamp> timestamp;
        
}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::Timestamp : public Entity
{
    public:
        Timestamp();
        ~Timestamp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint32
        YLeaf nano_seconds; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::Timestamp


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers : public Entity
{
    public:
        Triggers();
        ~Triggers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf unique_trigger_count; //type: uint32
        YLeaf first_trigger_lsp_id; //type: string
        YLeaf trigger_link; //type: string
        YLeaf trigger_next_hop_id; //type: string
        YLeaf is_sr_uloop_calculation; //type: boolean
        YLeaf is_sr_uloop_link_down; //type: boolean
        YLeafList trigger; //type: list of  IsisSpfTriggerEnum
        class TriggerPrefix; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix> trigger_prefix;
        
}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix : public Entity
{
    public:
        TriggerPrefix();
        ~TriggerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IsisAfIdEnum
        class Ipv4; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv4
        class Ipv6; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv6

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv6> ipv6;
        
}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv4 : public Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8

}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv4


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv6 : public Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8

}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv6


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics : public Entity
{
    public:
        SptCalculationStatistics();
        ~SptCalculationStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Duration; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::Duration
        class NodeCounts; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::NodeCounts

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::Duration> duration;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::NodeCounts> node_counts;
        
}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::Duration : public Entity
{
    public:
        Duration();
        ~Duration();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf real_duration; //type: uint32
        YLeaf cpu_duration; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::Duration


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::NodeCounts : public Entity
{
    public:
        NodeCounts();
        ~NodeCounts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf unreachable; //type: uint32
        YLeaf reachable; //type: uint32
        YLeaf added; //type: uint32
        YLeaf deleted; //type: uint32
        YLeaf modified; //type: uint32
        YLeaf touched; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::NodeCounts


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics : public Entity
{
    public:
        RouteUpdateStatistics();
        ~RouteUpdateStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Duration; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::Duration
        class DurationBreakdown; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown
        class NodeCounts; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts
        class ItemCounts; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts
        class RouteCounts; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts
        class RibBatchCounts; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RibBatchCounts

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::Duration> duration;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown> duration_breakdown;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts> item_counts;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts> node_counts;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RibBatchCounts> rib_batch_counts;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts> route_counts;
        
}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::Duration : public Entity
{
    public:
        Duration();
        ~Duration();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf real_duration; //type: uint32
        YLeaf cpu_duration; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::Duration


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown : public Entity
{
    public:
        DurationBreakdown();
        ~DurationBreakdown();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LocalRibUpdate; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate
        class GlobalRibBuild; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild
        class GlobalRibSend; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild> global_rib_build;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend> global_rib_send;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate> local_rib_update;
        
}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate : public Entity
{
    public:
        LocalRibUpdate();
        ~LocalRibUpdate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Critical; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Critical
        class High; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::High
        class Medium; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Medium
        class Low; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Low

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Critical> critical;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::High> high;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Low> low;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Medium> medium;
        
}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Critical : public Entity
{
    public:
        Critical();
        ~Critical();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf real_duration; //type: uint32
        YLeaf cpu_duration; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Critical


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::High : public Entity
{
    public:
        High();
        ~High();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf real_duration; //type: uint32
        YLeaf cpu_duration; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::High


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Medium : public Entity
{
    public:
        Medium();
        ~Medium();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf real_duration; //type: uint32
        YLeaf cpu_duration; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Medium


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Low : public Entity
{
    public:
        Low();
        ~Low();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf real_duration; //type: uint32
        YLeaf cpu_duration; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Low


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild : public Entity
{
    public:
        GlobalRibBuild();
        ~GlobalRibBuild();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Critical; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Critical
        class High; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::High
        class Medium; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Medium
        class Low; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Low

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Critical> critical;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::High> high;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Low> low;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Medium> medium;
        
}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Critical : public Entity
{
    public:
        Critical();
        ~Critical();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf real_duration; //type: uint32
        YLeaf cpu_duration; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Critical


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::High : public Entity
{
    public:
        High();
        ~High();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf real_duration; //type: uint32
        YLeaf cpu_duration; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::High


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Medium : public Entity
{
    public:
        Medium();
        ~Medium();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf real_duration; //type: uint32
        YLeaf cpu_duration; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Medium


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Low : public Entity
{
    public:
        Low();
        ~Low();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf real_duration; //type: uint32
        YLeaf cpu_duration; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Low


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend : public Entity
{
    public:
        GlobalRibSend();
        ~GlobalRibSend();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Critical; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Critical
        class High; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::High
        class Medium; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Medium
        class Low; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Low

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Critical> critical;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::High> high;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Low> low;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Medium> medium;
        
}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Critical : public Entity
{
    public:
        Critical();
        ~Critical();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf real_duration; //type: uint32
        YLeaf cpu_duration; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Critical


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::High : public Entity
{
    public:
        High();
        ~High();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf real_duration; //type: uint32
        YLeaf cpu_duration; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::High


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Medium : public Entity
{
    public:
        Medium();
        ~Medium();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf real_duration; //type: uint32
        YLeaf cpu_duration; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Medium


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Low : public Entity
{
    public:
        Low();
        ~Low();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf real_duration; //type: uint32
        YLeaf cpu_duration; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Low


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts : public Entity
{
    public:
        NodeCounts();
        ~NodeCounts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_touched; //type: uint32
        class PerPriorityTouched; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::PerPriorityTouched

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::PerPriorityTouched> per_priority_touched;
        
}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::PerPriorityTouched : public Entity
{
    public:
        PerPriorityTouched();
        ~PerPriorityTouched();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf critical; //type: uint32
        YLeaf high; //type: uint32
        YLeaf medium; //type: uint32
        YLeaf low; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::PerPriorityTouched


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts : public Entity
{
    public:
        ItemCounts();
        ~ItemCounts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Unreachable; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Unreachable
        class Reachable; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Reachable
        class Added; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Added
        class Deleted; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Deleted
        class Modified; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Modified
        class Touched; //type: Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Touched

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Added> added;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Deleted> deleted;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Modified> modified;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Reachable> reachable;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Touched> touched;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Unreachable> unreachable;
        
}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Unreachable : public Entity
{
    public:
        Unreachable();
        ~Unreachable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf critical; //type: uint32
        YLeaf high; //type: uint32
        YLeaf medium; //type: uint32
        YLeaf low; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Unreachable


class Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Reachable : public Entity
{
    public:
        Reachable();
        ~Reachable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf critical; //type: uint32
        YLeaf high; //type: uint32
        YLeaf medium; //type: uint32
        YLeaf low; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Reachable

class IsisIfClnsMtuInvalidReasonEnum : public Enum
{
    public:
        static const Enum::YLeaf isis_intf_clns_mtu_invalid_too_sm_all;
        static const Enum::YLeaf isis_intf_clns_mtu_invalid_internal_error;

};

class IsisIfAfFwdAddrUnknownReasonEnum : public Enum
{
    public:
        static const Enum::YLeaf isis_intf_af_fwd_addr_unknown_cfg_passive;
        static const Enum::YLeaf isis_intf_af_fwd_addr_unknown_proto_doesnt_exist;
        static const Enum::YLeaf isis_intf_af_fwd_addr_unknown_next_hop_reg_error;
        static const Enum::YLeaf isis_intf_af_fwd_addr_unknown_no_link_local_add;
        static const Enum::YLeaf isis_intf_af_fwd_addr_unknown_af_not_up;
        static const Enum::YLeaf isis_intf_af_fwd_addr_unknown_vrf_enabled;
        static const Enum::YLeaf isis_intf_af_fwd_addr_unknown_internal_error;

};

class IsisSubAfIdEnum : public Enum
{
    public:
        static const Enum::YLeaf unicast;
        static const Enum::YLeaf multicast;

};

class IsisErrLogLevelEnum : public Enum
{
    public:
        static const Enum::YLeaf isis_err_log_level_info;
        static const Enum::YLeaf isis_err_log_level_warn;
        static const Enum::YLeaf isis_err_log_level_critical;

};

class IsisUloopEventEnum : public Enum
{
    public:
        static const Enum::YLeaf isis_u_loop_event_none;
        static const Enum::YLeaf isis_u_loop_event_link_down;
        static const Enum::YLeaf isis_u_loop_event_link_up;
        static const Enum::YLeaf isis_u_loop_event_ol_bit_set;
        static const Enum::YLeaf isis_u_loop_event_ol_bit_unset;

};

class SrmsMiAfEBEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;

};

class IsisIfDisabledReasonEnum : public Enum
{
    public:
        static const Enum::YLeaf isis_intf_disabled_no_net_cfg;
        static const Enum::YLeaf isis_intf_disabled_area_missing;
        static const Enum::YLeaf isis_intf_disabled_no_area_running;
        static const Enum::YLeaf isis_intf_disabled_no_topos_cfg;
        static const Enum::YLeaf isis_intf_disabled_no_imd_conn;
        static const Enum::YLeaf isis_intf_disabled_imd_reg_error;
        static const Enum::YLeaf isis_intf_disabled_level_mismatch;
        static const Enum::YLeaf isis_intf_disabled_base_caps_error;
        static const Enum::YLeaf isis_intf_disabled_intf_doesnt_exist;
        static const Enum::YLeaf isis_intf_disabled_intf_shutdown;
        static const Enum::YLeaf isis_intf_disabled_internal_error;

};

class IsisShTeLinkEnum : public Enum
{
    public:
        static const Enum::YLeaf isis_sh_te_link_p2p;
        static const Enum::YLeaf isis_sh_te_link_broadcast;

};

class SrmsMiSrcEBEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf local;
        static const Enum::YLeaf remote;

};

class IsisLspDbOpEnum : public Enum
{
    public:
        static const Enum::YLeaf isis_lsp_db_clear;
        static const Enum::YLeaf isis_lsp_db_insert_new_lsp;
        static const Enum::YLeaf isis_lsp_db_replace_lsp_with_lsp;
        static const Enum::YLeaf isis_lsp_db_purge_lsp;
        static const Enum::YLeaf isis_lsp_db_delete_lsp;

};

class IsisIfAfPrefixUnknownReasonEnum : public Enum
{
    public:
        static const Enum::YLeaf isis_intf_af_prefix_unknown_adv_suppressed;
        static const Enum::YLeaf isis_intf_af_prefix_unknown_global_addr_reg_error;
        static const Enum::YLeaf isis_intf_af_prefix_unknown_internal_error;

};

class IsisMetricStyleEnum : public Enum
{
    public:
        static const Enum::YLeaf isis_metric_style_narrow;
        static const Enum::YLeaf isis_metric_style_wide;
        static const Enum::YLeaf isis_metric_style_transition;

};

class IsisIfAfProtoDownReasonEnum : public Enum
{
    public:
        static const Enum::YLeaf isis_intf_af_proto_down_imd_conn_fail;
        static const Enum::YLeaf isis_intf_af_proto_down_imd_node_doesnt_exist;
        static const Enum::YLeaf isis_intf_af_proto_down_imd_exist_reg_error;
        static const Enum::YLeaf isis_intf_af_proto_down_imd_state_reg_error;
        static const Enum::YLeaf isis_intf_af_proto_down_af_not_up;
        static const Enum::YLeaf isis_intf_af_proto_down_internal_error;

};

class IsisStartupStatusEnum : public Enum
{
    public:
        static const Enum::YLeaf isis_startup_ssm_active;
        static const Enum::YLeaf isis_startup_ssm_complete;
        static const Enum::YLeaf isis_startup_ssm_aborted;
        static const Enum::YLeaf isis_startup_ssm_not_run;

};

class IsisUpEnum : public Enum
{
    public:
        static const Enum::YLeaf isis_down;
        static const Enum::YLeaf isis_up;

};

class IsisMetricModeEnum : public Enum
{
    public:
        static const Enum::YLeaf isis_metric_mode_fixed;
        static const Enum::YLeaf isis_metric_mode_relative;
        static const Enum::YLeaf isis_metric_mode_absolute;

};

class IsisMediaClassEnum : public Enum
{
    public:
        static const Enum::YLeaf isis_media_class_lan;
        static const Enum::YLeaf isis_media_class_p2p;
        static const Enum::YLeaf isis_media_class_loop_back;

};

class IsisNsfFlavorEnum : public Enum
{
    public:
        static const Enum::YLeaf isis_nsf_flav_or_none;
        static const Enum::YLeaf isis_nsf_flav_or_cisco;
        static const Enum::YLeaf isis_nsf_flav_or_ietf;
        static const Enum::YLeaf isis_nsf_flav_or_nsr;

};

class IsisAdjTopoChangeEnum : public Enum
{
    public:
        static const Enum::YLeaf isis_adj_topo_up_change;
        static const Enum::YLeaf isis_adj_topo_next_hop_change;
        static const Enum::YLeaf isis_adj_topo_down_change;

};

class IsisIfMcastInvalidReasonEnum : public Enum
{
    public:
        static const Enum::YLeaf isis_intf_mcast_invalid_join_error;
        static const Enum::YLeaf isis_intf_mcast_invalid_internal_error;
        static const Enum::YLeaf isis_intf_mcast_invalid_not_yet_needed;

};

class IsisIfTopoAdvPrefixDisabledReasonEnum : public Enum
{
    public:
        static const Enum::YLeaf isis_intf_topo_adv_prefix_disabled_intf_suppressed;
        static const Enum::YLeaf isis_intf_topo_adv_prefix_disabled_af_not_up;
        static const Enum::YLeaf isis_intf_topo_adv_prefix_disabled_af_prefixes_unknown;
        static const Enum::YLeaf isis_intf_topo_adv_prefix_disabled_internal_error;

};

class IsisShTePceFloodingScopeEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf area;
        static const Enum::YLeaf domain;

};

class IsisLspTriggerEnum : public Enum
{
    public:
        static const Enum::YLeaf isis_lsp_trig_config;
        static const Enum::YLeaf isis_lsp_trig_newadj;
        static const Enum::YLeaf isis_lsp_trig_deladj;
        static const Enum::YLeaf isis_lsp_trig_dr_change;
        static const Enum::YLeaf isis_lsp_trig_area_set;
        static const Enum::YLeaf isis_lsp_trig_attach;
        static const Enum::YLeaf isis_lsp_trig_hippity;
        static const Enum::YLeaf isis_lsp_trig_regen;
        static const Enum::YLeaf isis_lsp_trig_ip_if_up;
        static const Enum::YLeaf isis_lsp_trig_ip_if_down;
        static const Enum::YLeaf isis_lsp_trig_ip_inter_area;
        static const Enum::YLeaf isis_lsp_trig_ip_external;
        static const Enum::YLeaf isis_lsp_trig_ip_external_full;
        static const Enum::YLeaf isis_lsp_trig_ip_def_orig;
        static const Enum::YLeaf isis_lsp_trig_ip_addr_chg;
        static const Enum::YLeaf isis_lsp_trig_te_info;
        static const Enum::YLeaf isis_lsp_trig_te_pce_info;
        static const Enum::YLeaf isis_lsp_trig_te_fa_info;
        static const Enum::YLeaf isis_lsp_trig_nsr_fo;
        static const Enum::YLeaf isis_lsp_trig_pn_cancel;
        static const Enum::YLeaf isis_lsp_trig_lkgp;
        static const Enum::YLeaf isis_lsp_trig_pp;

};

class IsisEnabledEnum : public Enum
{
    public:
        static const Enum::YLeaf isis_disabled;
        static const Enum::YLeaf isis_enabled;

};

class IsisIfAdvPrefixDisabledReasonEnum : public Enum
{
    public:
        static const Enum::YLeaf isis_intf_adv_prefix_disabled_if_cfg_suppressed;
        static const Enum::YLeaf isis_intf_adv_prefix_disabled_no_topo_participate;
        static const Enum::YLeaf isis_intf_adv_prefix_disabled_internal_error;

};

class IsisAdjStateEnum : public Enum
{
    public:
        static const Enum::YLeaf isis_adj_up_state;
        static const Enum::YLeaf isis_adj_init_state;
        static const Enum::YLeaf isis_adj_failed_state;

};

class IsisIfClnsProtoDownReasonEnum : public Enum
{
    public:
        static const Enum::YLeaf isis_intf_clns_proto_down_add_to_intf_stack_fail;
        static const Enum::YLeaf isis_intf_clns_proto_down_no_imd_conn;
        static const Enum::YLeaf isis_intf_clns_proto_down_imd_node_doesnt_exist;
        static const Enum::YLeaf isis_intf_clns_proto_down_imd_exist_reg_error;
        static const Enum::YLeaf isis_intf_clns_proto_down_imd_state_reg_error;
        static const Enum::YLeaf isis_intf_clns_proto_down_clns_not_up;

};

class IsisSpfTriggerEnum : public Enum
{
    public:
        static const Enum::YLeaf isis_spf_trig_config;
        static const Enum::YLeaf isis_spf_trig_nsr_fo;
        static const Enum::YLeaf isis_spf_trig_periodic;
        static const Enum::YLeaf isis_spf_trig_clear;
        static const Enum::YLeaf isis_spf_trig_newadj;
        static const Enum::YLeaf isis_spf_trig_deladj;
        static const Enum::YLeaf isis_spf_trig_next_hop;
        static const Enum::YLeaf isis_spf_trig_metric;
        static const Enum::YLeaf isis_spf_trig_dis;
        static const Enum::YLeaf isis_spf_trig_frr_per_link;
        static const Enum::YLeaf isis_spf_trig_frr_per_prefix;
        static const Enum::YLeaf isis_spf_trig_ucmp;
        static const Enum::YLeaf isis_spf_trig_new_tunnel;
        static const Enum::YLeaf isis_spf_trig_del_tunnel;
        static const Enum::YLeaf isis_spf_trig_chg_tunnel;
        static const Enum::YLeaf isis_spf_trig_new_node;
        static const Enum::YLeaf isis_spf_trig_del_node;
        static const Enum::YLeaf isis_spf_trig_newlsp;
        static const Enum::YLeaf isis_spf_trig_lsp_expiry;
        static const Enum::YLeaf isis_spf_trig_attach_set;
        static const Enum::YLeaf isis_spf_trig_attach_clr;
        static const Enum::YLeaf isis_spf_trig_overload_set;
        static const Enum::YLeaf isis_spf_trig_overload_clr;
        static const Enum::YLeaf isis_spf_trig_link_good;
        static const Enum::YLeaf isis_spf_trig_link_bad;
        static const Enum::YLeaf isis_spf_trig_prefix_good;
        static const Enum::YLeaf isis_spf_trig_prefix_bad;
        static const Enum::YLeaf isis_spf_trig_prefix;
        static const Enum::YLeaf isis_spf_trig_area_addr;
        static const Enum::YLeaf isis_spf_trig_ip_addr;
        static const Enum::YLeaf isis_spf_trig_rtrid;
        static const Enum::YLeaf isis_spf_trig_prefix_policy;

};

class SrmsMiFlagEBEnum : public Enum
{
    public:
        static const Enum::YLeaf false_;
        static const Enum::YLeaf true_;

};

class IsisReachableEnum : public Enum
{
    public:
        static const Enum::YLeaf isis_unreachable;
        static const Enum::YLeaf isis_reachable;

};

class IsisLevelsEnum : public Enum
{
    public:
        static const Enum::YLeaf isis_levels_none;
        static const Enum::YLeaf isis_levels_1;
        static const Enum::YLeaf isis_levels_2;
        static const Enum::YLeaf isis_levels_12;
        static const Enum::YLeaf isis_levels_total;

};

class IsisPrefixPriorityEnum : public Enum
{
    public:
        static const Enum::YLeaf isis_prefix_priority_critical;
        static const Enum::YLeaf isis_prefix_priority_high;
        static const Enum::YLeaf isis_prefix_priority_med;
        static const Enum::YLeaf isis_prefix_priority_low;

};

class IsisAdjStateReasonEnum : public Enum
{
    public:
        static const Enum::YLeaf isis_adj_up_nsf_restart;
        static const Enum::YLeaf isis_adj_up_new_adj;
        static const Enum::YLeaf isis_adj_up_restarted;
        static const Enum::YLeaf isis_adj_up_nsf_restored;
        static const Enum::YLeaf isis_adj_up_chkpt_restored;
        static const Enum::YLeaf isis_adj_init_reason;
        static const Enum::YLeaf isis_adj_init_neighbor_forgot;
        static const Enum::YLeaf isis_adj_down_hold_time;
        static const Enum::YLeaf isis_adj_down_if_down;
        static const Enum::YLeaf isis_adj_down_cfg_mismatch;
        static const Enum::YLeaf isis_adj_down_circ_id;
        static const Enum::YLeaf isis_adj_down_nsf_ack_fail;
        static const Enum::YLeaf isis_adj_down_db_clear;
        static const Enum::YLeaf isis_adj_down_no_common_topology;
        static const Enum::YLeaf isis_adj_down_restart_tlv_missing;
        static const Enum::YLeaf isis_adj_down_bfd_down;
        static const Enum::YLeaf isis_adj_down_3way_down;

};

class IsisIfClnsSnpaUnknownReasonEnum : public Enum
{
    public:
        static const Enum::YLeaf isis_intf_clns_snpa_unknown_access_error;
        static const Enum::YLeaf isis_intf_clns_snpa_unknown_not_lan;
        static const Enum::YLeaf isis_intf_clns_snpa_unknown_internal_error;

};

class IsisAdjTopoStatusEnum : public Enum
{
    public:
        static const Enum::YLeaf isis_adj_topo_status_ok;
        static const Enum::YLeaf isis_adj_topo_status_intf_not_configured;
        static const Enum::YLeaf isis_adj_topo_status_intf_not_running;
        static const Enum::YLeaf isis_adj_topo_status_init_state;
        static const Enum::YLeaf isis_adj_topo_status_neighbor_doesnt_participate;
        static const Enum::YLeaf isis_adj_topo_status_ipv4_address_tlv_missing;
        static const Enum::YLeaf isis_adj_topo_status_ipv4_address_tlv_empty;
        static const Enum::YLeaf isis_adj_topo_status_ipv6_address_tlv_missing;
        static const Enum::YLeaf isis_adj_topo_status_ipv6_address_tlv_empty;
        static const Enum::YLeaf isis_adj_topo_status_ipv4_address_matches_ours;
        static const Enum::YLeaf isis_adj_topo_status_ipv6_address_matches_ours;
        static const Enum::YLeaf isis_adj_topo_status_ipv4_address_subnet_mismatch;
        static const Enum::YLeaf isis_adj_topo_status_ipv6_address_not_link_local;

};

class IsisIfTopoAdjFormDisabledReasonEnum : public Enum
{
    public:
        static const Enum::YLeaf isis_intf_topo_adj_form_disabled_intf_passive;
        static const Enum::YLeaf isis_intf_topo_adj_form_disabled_af_not_up;
        static const Enum::YLeaf isis_intf_topo_adj_form_disabled_af_fwd_addr_unknown;
        static const Enum::YLeaf isis_intf_topo_adj_form_disabled_topo_not_cfg;
        static const Enum::YLeaf isis_intf_topo_adj_form_disabled_topo_can_not_participate;
        static const Enum::YLeaf isis_intf_topo_adj_form_disabled_idle;
        static const Enum::YLeaf isis_intf_topo_adj_form_disabled_internal_error;
        static const Enum::YLeaf isis_intf_topo_adj_form_disabled_mtu;
        static const Enum::YLeaf isis_intf_topo_adj_form_disabled_snpa;
        static const Enum::YLeaf isis_intf_topo_adj_form_disabled_mcast;

};

class IsisAdjBfdStateEnum : public Enum
{
    public:
        static const Enum::YLeaf isis_adj_bfd_no_state;
        static const Enum::YLeaf isis_adj_bfd_down_state;
        static const Enum::YLeaf isis_adj_bfd_init_state;
        static const Enum::YLeaf isis_adj_bfd_up_state;

};

class IsisAfIdEnum : public Enum
{
    public:
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;

};

class IsisRedistProtoEnum : public Enum
{
    public:
        static const Enum::YLeaf isis_redist_connected;
        static const Enum::YLeaf isis_redist_static;
        static const Enum::YLeaf isis_redist_ospf;
        static const Enum::YLeaf isis_redist_bgp;
        static const Enum::YLeaf isis_redist_isis;
        static const Enum::YLeaf isis_redist_ospfv3;
        static const Enum::YLeaf isis_redist_rip;
        static const Enum::YLeaf isis_redist_eigrp;
        static const Enum::YLeaf isis_redist_subscriber;
        static const Enum::YLeaf isis_redist_application;
        static const Enum::YLeaf isis_redist_mobile;

};

class IsisIfTopoDisabledReasonEnum : public Enum
{
    public:
        static const Enum::YLeaf isis_intf_topo_disabled_not_cfg;
        static const Enum::YLeaf isis_intf_topo_disabled_internal_error;

};

class IsisShRouteAdvOriginEnum : public Enum
{
    public:
        static const Enum::YLeaf isis_sh_route_adv_origin_interface;
        static const Enum::YLeaf isis_sh_route_adv_origin_redistributed;
        static const Enum::YLeaf isis_sh_route_adv_origin_native;
        static const Enum::YLeaf isis_sh_route_adv_origin_summary;
        static const Enum::YLeaf isis_sh_route_adv_origin_default;

};

class IsisKnownEnum : public Enum
{
    public:
        static const Enum::YLeaf isis_unknown;
        static const Enum::YLeaf isis_known;

};

class IsisLevelEnum : public Enum
{
    public:
        static const Enum::YLeaf isis_level0;
        static const Enum::YLeaf isis_level1;
        static const Enum::YLeaf isis_level2;

};

class IsisIfAdjFormDisabledReasonEnum : public Enum
{
    public:
        static const Enum::YLeaf isis_intf_adj_form_disabled_cfg_passive;
        static const Enum::YLeaf isis_intf_adj_form_disabled_no_topo_participate;
        static const Enum::YLeaf isis_intf_adj_form_disabled_add_to_intf_stack_fail;
        static const Enum::YLeaf isis_intf_adj_form_disabled_clns_io;
        static const Enum::YLeaf isis_intf_adj_form_disabled_internal_error;

};

class IsisPrefixOriginEnum : public Enum
{
    public:
        static const Enum::YLeaf isis_prefix_origin_l1_summary_null;
        static const Enum::YLeaf isis_prefix_origin_l1;
        static const Enum::YLeaf isis_prefix_origin_l2_summary_null;
        static const Enum::YLeaf isis_prefix_origin_l2;
        static const Enum::YLeaf isis_prefix_origin_inter_area_summary_null;
        static const Enum::YLeaf isis_prefix_origin_inter_area;
        static const Enum::YLeaf isis_prefix_origin_default_nearest_attached;

};

class IsisIfAfDisabledReasonEnum : public Enum
{
    public:
        static const Enum::YLeaf isis_intf_af_disabled_no_topo_enabled;
        static const Enum::YLeaf isis_intf_af_disabled_internal_error;

};

class IsisTilfaComputationEnum : public Enum
{
    public:
        static const Enum::YLeaf isis_tilfa_comp_none;
        static const Enum::YLeaf isis_tilfa_comp_link;
        static const Enum::YLeaf isis_tilfa_comp_node;
        static const Enum::YLeaf isis_tilfa_comp_srlg;
        static const Enum::YLeaf isis_tilfa_comp_node_srlg;

};

class IsisSpfClassEnum : public Enum
{
    public:
        static const Enum::YLeaf isis_spf_frr_sr_u_loop;
        static const Enum::YLeaf isis_spf_frr_per_link;
        static const Enum::YLeaf isis_spf_partial;
        static const Enum::YLeaf isis_spf_frr_per_prefix;
        static const Enum::YLeaf isis_spf_ucmp_calc;
        static const Enum::YLeaf isis_spf_next_hop;
        static const Enum::YLeaf isis_spf_incremental;
        static const Enum::YLeaf isis_spf_full;

};

class IsisValidEnum : public Enum
{
    public:
        static const Enum::YLeaf isis_invalid;
        static const Enum::YLeaf isis_valid;

};

class IsisUloopAvoidanceEnum : public Enum
{
    public:
        static const Enum::YLeaf isis_u_loop_avoidance_type_none;
        static const Enum::YLeaf isis_u_loop_avoidance_type_all;
        static const Enum::YLeaf isis_u_loop_avoidance_type_protected;
        static const Enum::YLeaf isis_u_loop_avoidance_type_sr;

};


}
}

#endif /* _CISCO_IOS_XR_CLNS_ISIS_OPER_0_ */

