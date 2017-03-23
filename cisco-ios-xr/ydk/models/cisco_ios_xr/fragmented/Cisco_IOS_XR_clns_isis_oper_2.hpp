#ifndef _CISCO_IOS_XR_CLNS_ISIS_OPER_2_
#define _CISCO_IOS_XR_CLNS_ISIS_OPER_2_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_clns_isis_oper_0.hpp"
#include "Cisco_IOS_XR_clns_isis_oper_1.hpp"

namespace ydk {
namespace Cisco_IOS_XR_clns_isis_oper {


class Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::BackupRepair : public Entity
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



}; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::MulticastPath : public Entity
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

        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup
        class UloopExplicit; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::MulticastPath::UloopExplicit

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup> frr_backup;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::MulticastPath::UloopExplicit> > uloop_explicit;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::MulticastPath


class Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup : public Entity
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

        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::BackupRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::BackupRepair> > backup_repair;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::BackupRepair : public Entity
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



}; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::MulticastPath::UloopExplicit : public Entity
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



}; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::MulticastPath::UloopExplicit


class Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::SrtePath : public Entity
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

        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup
        class UloopExplicit; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::SrtePath::UloopExplicit

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup> frr_backup;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::SrtePath::UloopExplicit> > uloop_explicit;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::SrtePath


class Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup : public Entity
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

        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::BackupRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::BackupRepair> > backup_repair;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::BackupRepair : public Entity
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



}; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::SrtePath::UloopExplicit : public Entity
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



}; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::SrtePath::UloopExplicit


class Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath : public Entity
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

        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup
        class UloopExplicit; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::UloopExplicit

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup> frr_backup;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::UloopExplicit> > uloop_explicit;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath


class Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup : public Entity
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

        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::BackupRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::BackupRepair> > backup_repair;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::BackupRepair : public Entity
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



}; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::UloopExplicit : public Entity
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



}; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::UloopExplicit


class Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Source : public Entity
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

        class NodalSid; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Source::NodalSid

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Source::NodalSid> > nodal_sid;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Source


class Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Source::NodalSid : public Entity
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



}; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Source::NodalSid


class Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::MulticastSource : public Entity
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

        class NodalSid; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid> > nodal_sid;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::MulticastSource


class Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid : public Entity
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



}; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid


class Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::PerLevelAdvertisingDetail : public Entity
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

        class SummarizationStatus; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::PerLevelAdvertisingDetail::SummarizationStatus
        class NodalSid; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::PerLevelAdvertisingDetail::NodalSid

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::PerLevelAdvertisingDetail::NodalSid> > nodal_sid;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::PerLevelAdvertisingDetail::SummarizationStatus> summarization_status;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::PerLevelAdvertisingDetail


class Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::PerLevelAdvertisingDetail::SummarizationStatus : public Entity
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

        class SummaryPrefix; //type: Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix> summary_prefix;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::PerLevelAdvertisingDetail::SummarizationStatus


class Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix : public Entity
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



}; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix


class Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::PerLevelAdvertisingDetail::NodalSid : public Entity
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



}; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::PerLevelAdvertisingDetail::NodalSid


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups : public Entity
{
    public:
        Ipv4FrrBackups();
        ~Ipv4FrrBackups();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv4FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup> > ipv4frr_backup;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup : public Entity
{
    public:
        Ipv4FrrBackup();
        ~Ipv4FrrBackup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint32

        class ConnectedStatus; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::ConnectedStatus
        class RedistributedStatus; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::RedistributedStatus
        class NativeStatus; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus
        class PerLevelAdvertisingDetail; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::PerLevelAdvertisingDetail

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::ConnectedStatus> connected_status;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus> native_status;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::PerLevelAdvertisingDetail> > per_level_advertising_detail;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::RedistributedStatus> redistributed_status;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::ConnectedStatus : public Entity
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

        class ConnectedDetails; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::ConnectedStatus::ConnectedDetails

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::ConnectedStatus::ConnectedDetails> connected_details;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::ConnectedStatus


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::ConnectedStatus::ConnectedDetails : public Entity
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



}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::ConnectedStatus::ConnectedDetails


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::RedistributedStatus : public Entity
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

        class RedistributionDetails; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::RedistributedStatus::RedistributionDetails

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::RedistributedStatus::RedistributionDetails> redistribution_details;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::RedistributedStatus


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::RedistributedStatus::RedistributionDetails : public Entity
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



        class IsisShRouteRedistDetail; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail> > isis_sh_route_redist_detail;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::RedistributedStatus::RedistributionDetails


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail : public Entity
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

        class Owner; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner> owner;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner : public Entity
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



}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus : public Entity
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

        class NativeDetails; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails> native_details;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails : public Entity
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

        class Primary; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary
        class Backup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup> > backup;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary> primary;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary : public Entity
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

        class Paths; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::Paths
        class UcmpNextHop; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop
        class MulticastPath; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath
        class SrtePath; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath
        class ExplicitPath; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath
        class Source; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::Source
        class MulticastSource; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::MulticastSource

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath> > explicit_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath> > multicast_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::MulticastSource> > multicast_source;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::Paths> > paths;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::Source> > source;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath> > srte_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop> > ucmp_next_hop;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::Paths : public Entity
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

        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::Paths::FrrBackup
        class UloopExplicit; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::Paths::FrrBackup> frr_backup;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit> > uloop_explicit;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::Paths


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::Paths::FrrBackup : public Entity
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

        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair> > backup_repair;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::Paths::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair : public Entity
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



}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit : public Entity
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



}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop : public Entity
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

        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup> frr_backup;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup : public Entity
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

        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair> > backup_repair;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair : public Entity
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



}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath : public Entity
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

        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup
        class UloopExplicit; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup> frr_backup;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit> > uloop_explicit;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup : public Entity
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

        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair> > backup_repair;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair : public Entity
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



}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit : public Entity
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



}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath : public Entity
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

        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup
        class UloopExplicit; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup> frr_backup;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit> > uloop_explicit;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup : public Entity
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

        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair> > backup_repair;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair : public Entity
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



}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit : public Entity
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



}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath : public Entity
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

        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup
        class UloopExplicit; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::UloopExplicit

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup> frr_backup;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::UloopExplicit> > uloop_explicit;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup : public Entity
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

        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair> > backup_repair;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair : public Entity
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



}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::UloopExplicit : public Entity
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



}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::ExplicitPath::UloopExplicit


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::Source : public Entity
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

        class NodalSid; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::Source::NodalSid

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::Source::NodalSid> > nodal_sid;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::Source


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::Source::NodalSid : public Entity
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



}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::Source::NodalSid


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::MulticastSource : public Entity
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

        class NodalSid; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::MulticastSource::NodalSid

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::MulticastSource::NodalSid> > nodal_sid;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::MulticastSource


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::MulticastSource::NodalSid : public Entity
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



}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::MulticastSource::NodalSid


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup : public Entity
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

        class Paths; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::Paths
        class UcmpNextHop; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::UcmpNextHop
        class MulticastPath; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::MulticastPath
        class SrtePath; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::SrtePath
        class ExplicitPath; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath
        class Source; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::Source
        class MulticastSource; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::MulticastSource

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath> > explicit_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::MulticastPath> > multicast_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::MulticastSource> > multicast_source;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::Paths> > paths;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::Source> > source;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::SrtePath> > srte_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::UcmpNextHop> > ucmp_next_hop;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::Paths : public Entity
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

        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::Paths::FrrBackup
        class UloopExplicit; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::Paths::UloopExplicit

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::Paths::FrrBackup> frr_backup;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::Paths::UloopExplicit> > uloop_explicit;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::Paths


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::Paths::FrrBackup : public Entity
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

        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::BackupRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::BackupRepair> > backup_repair;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::Paths::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::BackupRepair : public Entity
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



}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::Paths::UloopExplicit : public Entity
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



}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::Paths::UloopExplicit


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::UcmpNextHop : public Entity
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

        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup> frr_backup;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::UcmpNextHop


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup : public Entity
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

        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::BackupRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::BackupRepair> > backup_repair;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::BackupRepair : public Entity
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



}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::MulticastPath : public Entity
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

        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup
        class UloopExplicit; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::MulticastPath::UloopExplicit

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup> frr_backup;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::MulticastPath::UloopExplicit> > uloop_explicit;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::MulticastPath


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup : public Entity
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

        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::BackupRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::BackupRepair> > backup_repair;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::BackupRepair : public Entity
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



}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::MulticastPath::UloopExplicit : public Entity
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



}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::MulticastPath::UloopExplicit


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::SrtePath : public Entity
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

        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup
        class UloopExplicit; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::SrtePath::UloopExplicit

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup> frr_backup;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::SrtePath::UloopExplicit> > uloop_explicit;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::SrtePath


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup : public Entity
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

        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::BackupRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::BackupRepair> > backup_repair;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::BackupRepair : public Entity
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



}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::SrtePath::UloopExplicit : public Entity
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



}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::SrtePath::UloopExplicit


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath : public Entity
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

        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup
        class UloopExplicit; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::UloopExplicit

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup> frr_backup;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::UloopExplicit> > uloop_explicit;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup : public Entity
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

        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::BackupRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::BackupRepair> > backup_repair;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::BackupRepair : public Entity
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



}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::UloopExplicit : public Entity
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



}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::UloopExplicit


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::Source : public Entity
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

        class NodalSid; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::Source::NodalSid

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::Source::NodalSid> > nodal_sid;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::Source


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::Source::NodalSid : public Entity
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



}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::Source::NodalSid


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::MulticastSource : public Entity
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

        class NodalSid; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid> > nodal_sid;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::MulticastSource


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid : public Entity
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



}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::PerLevelAdvertisingDetail : public Entity
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

        class SummarizationStatus; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::PerLevelAdvertisingDetail::SummarizationStatus
        class NodalSid; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::PerLevelAdvertisingDetail::NodalSid

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::PerLevelAdvertisingDetail::NodalSid> > nodal_sid;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::PerLevelAdvertisingDetail::SummarizationStatus> summarization_status;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::PerLevelAdvertisingDetail


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::PerLevelAdvertisingDetail::SummarizationStatus : public Entity
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

        class SummaryPrefix; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix> summary_prefix;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::PerLevelAdvertisingDetail::SummarizationStatus


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix : public Entity
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



}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix


class Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::PerLevelAdvertisingDetail::NodalSid : public Entity
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



}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::PerLevelAdvertisingDetail::NodalSid


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes : public Entity
{
    public:
        Ipv4Routes();
        ~Ipv4Routes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv4Route; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route> > ipv4_route;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route : public Entity
{
    public:
        Ipv4Route();
        ~Ipv4Route();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint32

        class ConnectedStatus; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::ConnectedStatus
        class RedistributedStatus; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus
        class NativeStatus; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus
        class PerLevelAdvertisingDetail; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::ConnectedStatus> connected_status;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus> native_status;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail> > per_level_advertising_detail;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus> redistributed_status;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::ConnectedStatus : public Entity
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

        class ConnectedDetails; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::ConnectedStatus::ConnectedDetails

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::ConnectedStatus::ConnectedDetails> connected_details;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::ConnectedStatus


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::ConnectedStatus::ConnectedDetails : public Entity
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



}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::ConnectedStatus::ConnectedDetails


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus : public Entity
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

        class RedistributionDetails; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails> redistribution_details;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails : public Entity
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



        class IsisShRouteRedistDetail; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail> > isis_sh_route_redist_detail;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail : public Entity
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

        class Owner; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner> owner;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner : public Entity
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



}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus : public Entity
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

        class NativeDetails; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails> native_details;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails : public Entity
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

        class Primary; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary
        class Backup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup> > backup;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary> primary;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary : public Entity
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

        class Paths; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths
        class UcmpNextHop; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop
        class MulticastPath; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath
        class SrtePath; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath
        class ExplicitPath; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath
        class Source; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Source
        class MulticastSource; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastSource

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath> > explicit_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath> > multicast_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastSource> > multicast_source;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths> > paths;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Source> > source;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath> > srte_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop> > ucmp_next_hop;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths : public Entity
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

        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup
        class UloopExplicit; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup> frr_backup;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit> > uloop_explicit;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup : public Entity
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

        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair> > backup_repair;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair : public Entity
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



}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit : public Entity
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



}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop : public Entity
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

        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup> frr_backup;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup : public Entity
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

        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair> > backup_repair;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair : public Entity
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



}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath : public Entity
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

        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup
        class UloopExplicit; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup> frr_backup;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit> > uloop_explicit;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup : public Entity
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

        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair> > backup_repair;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair : public Entity
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



}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit : public Entity
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



}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath : public Entity
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

        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup
        class UloopExplicit; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup> frr_backup;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit> > uloop_explicit;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup : public Entity
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

        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair> > backup_repair;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair : public Entity
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



}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit : public Entity
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



}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath : public Entity
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

        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup
        class UloopExplicit; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::UloopExplicit

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup> frr_backup;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::UloopExplicit> > uloop_explicit;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup : public Entity
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

        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair> > backup_repair;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair : public Entity
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



}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::UloopExplicit : public Entity
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



}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::UloopExplicit


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Source : public Entity
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

        class NodalSid; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Source::NodalSid

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Source::NodalSid> > nodal_sid;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Source


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Source::NodalSid : public Entity
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



}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Source::NodalSid


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastSource : public Entity
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

        class NodalSid; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastSource::NodalSid

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastSource::NodalSid> > nodal_sid;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastSource


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastSource::NodalSid : public Entity
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



}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastSource::NodalSid


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup : public Entity
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

        class Paths; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths
        class UcmpNextHop; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop
        class MulticastPath; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath
        class SrtePath; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath
        class ExplicitPath; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath
        class Source; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Source
        class MulticastSource; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastSource

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath> > explicit_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath> > multicast_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastSource> > multicast_source;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths> > paths;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Source> > source;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath> > srte_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop> > ucmp_next_hop;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths : public Entity
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

        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup
        class UloopExplicit; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::UloopExplicit

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup> frr_backup;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::UloopExplicit> > uloop_explicit;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup : public Entity
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

        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::BackupRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::BackupRepair> > backup_repair;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::BackupRepair : public Entity
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



}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::UloopExplicit : public Entity
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



}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::UloopExplicit


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop : public Entity
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

        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup> frr_backup;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup : public Entity
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

        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::BackupRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::BackupRepair> > backup_repair;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::BackupRepair : public Entity
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



}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath : public Entity
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

        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup
        class UloopExplicit; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::UloopExplicit

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup> frr_backup;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::UloopExplicit> > uloop_explicit;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup : public Entity
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

        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::BackupRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::BackupRepair> > backup_repair;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::BackupRepair : public Entity
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



}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::UloopExplicit : public Entity
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



}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::UloopExplicit


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath : public Entity
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

        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup
        class UloopExplicit; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::UloopExplicit

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup> frr_backup;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::UloopExplicit> > uloop_explicit;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup : public Entity
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

        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::BackupRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::BackupRepair> > backup_repair;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::BackupRepair : public Entity
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



}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::UloopExplicit : public Entity
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



}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::UloopExplicit


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath : public Entity
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

        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup
        class UloopExplicit; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::UloopExplicit

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup> frr_backup;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::UloopExplicit> > uloop_explicit;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup : public Entity
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

        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::BackupRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::BackupRepair> > backup_repair;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::BackupRepair : public Entity
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



}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::UloopExplicit : public Entity
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



}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::UloopExplicit


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Source : public Entity
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

        class NodalSid; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Source::NodalSid

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Source::NodalSid> > nodal_sid;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Source


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Source::NodalSid : public Entity
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



}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Source::NodalSid


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastSource : public Entity
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

        class NodalSid; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid> > nodal_sid;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastSource


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid : public Entity
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



}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail : public Entity
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

        class SummarizationStatus; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::SummarizationStatus
        class NodalSid; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::NodalSid

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::NodalSid> > nodal_sid;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::SummarizationStatus> summarization_status;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::SummarizationStatus : public Entity
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

        class SummaryPrefix; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix> summary_prefix;


}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::SummarizationStatus


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix : public Entity
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



}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::NodalSid : public Entity
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



}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::NodalSid


class Isis::Instances::Instance::NsrStatus : public Entity
{
    public:
        NsrStatus();
        ~NsrStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf isis_vm_state; //type: uint16

        class IsisNsrPeer; //type: Isis::Instances::Instance::NsrStatus::IsisNsrPeer
        class IsisNsrInfra; //type: Isis::Instances::Instance::NsrStatus::IsisNsrInfra

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra> isis_nsr_infra;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrPeer> isis_nsr_peer;


}; // Isis::Instances::Instance::NsrStatus


class Isis::Instances::Instance::NsrStatus::IsisNsrPeer : public Entity
{
    public:
        IsisNsrPeer();
        ~IsisNsrPeer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class FullSyncAchieved; //type: Isis::Instances::Instance::NsrStatus::IsisNsrPeer::FullSyncAchieved
        class ManSyncCount; //type: Isis::Instances::Instance::NsrStatus::IsisNsrPeer::ManSyncCount
        class NsrChgCount; //type: Isis::Instances::Instance::NsrStatus::IsisNsrPeer::NsrChgCount
        class UptimeValid; //type: Isis::Instances::Instance::NsrStatus::IsisNsrPeer::UptimeValid
        class Uptime; //type: Isis::Instances::Instance::NsrStatus::IsisNsrPeer::Uptime

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrPeer::FullSyncAchieved> > full_sync_achieved;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrPeer::ManSyncCount> > man_sync_count;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrPeer::NsrChgCount> > nsr_chg_count;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrPeer::Uptime> > uptime;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrPeer::UptimeValid> > uptime_valid;


}; // Isis::Instances::Instance::NsrStatus::IsisNsrPeer


class Isis::Instances::Instance::NsrStatus::IsisNsrPeer::FullSyncAchieved : public Entity
{
    public:
        FullSyncAchieved();
        ~FullSyncAchieved();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint32



}; // Isis::Instances::Instance::NsrStatus::IsisNsrPeer::FullSyncAchieved


class Isis::Instances::Instance::NsrStatus::IsisNsrPeer::ManSyncCount : public Entity
{
    public:
        ManSyncCount();
        ~ManSyncCount();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint32



}; // Isis::Instances::Instance::NsrStatus::IsisNsrPeer::ManSyncCount


class Isis::Instances::Instance::NsrStatus::IsisNsrPeer::NsrChgCount : public Entity
{
    public:
        NsrChgCount();
        ~NsrChgCount();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint32



}; // Isis::Instances::Instance::NsrStatus::IsisNsrPeer::NsrChgCount


}
}

#endif /* _CISCO_IOS_XR_CLNS_ISIS_OPER_2_ */

