#ifndef _CISCO_IOS_XR_IPV4_OSPF_OPER_1_
#define _CISCO_IOS_XR_IPV4_OSPF_OPER_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv4_ospf_oper_0.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_ospf_oper {


class Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry : public Entity
{
    public:
        IfEntry();
        ~IfEntry();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf madj_intf; //type: boolean
        YLeaf area_id; //type: uint32
        YLeaf area_id_str; //type: string
        YLeafList if_stat; //type: list of  uint32



}; // Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry


class Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation : public Entity
{
    public:
        AdjacencyInformation();
        ~AdjacencyInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Neighbors; //type: Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors
        class Requests; //type: Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests
        class Retransmissions; //type: Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions
        class NeighborDetails; //type: Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails> neighbor_details;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors> neighbors;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests> requests;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions> retransmissions;


}; // Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation


class Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors : public Entity
{
    public:
        Neighbors();
        ~Neighbors();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Neighbor; //type: Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor> > neighbor;


}; // Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors


class Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor : public Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf neighbor_id; //type: string
        YLeaf neighbor_address_xr; //type: string
        YLeaf neighbor_interface_name; //type: string
        YLeaf neighbor_dr_priority; //type: uint8
        YLeaf neighbor_state; //type: NeighborStateEnum
        YLeaf dr_bdr_state; //type: DrBdrStateEnum
        YLeaf neighbor_dead_timer; //type: uint32
        YLeaf neighbor_up_time; //type: uint32
        YLeaf neighbor_madj_interface; //type: boolean

        class NeighborBfdInformation; //type: Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation> neighbor_bfd_information;


}; // Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor


class Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation : public Entity
{
    public:
        NeighborBfdInformation();
        ~NeighborBfdInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bfd_intf_enable_mode; //type: uint32
        YLeaf bfd_status_flag; //type: uint8



}; // Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation


class Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests : public Entity
{
    public:
        Requests();
        ~Requests();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Request; //type: Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request> > request;


}; // Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests


class Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request : public Entity
{
    public:
        Request();
        ~Request();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf request_neighbor_id; //type: string
        YLeaf request_neighbor_address; //type: string
        YLeaf request_interface_name; //type: string

        class Request_; //type: Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::Request_

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::Request_> > request;


}; // Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request


class Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::Request_ : public Entity
{
    public:
        Request_();
        ~Request_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf header_lsa_type; //type: LsaEnum
        YLeaf header_lsa_age; //type: uint16
        YLeaf header_ls_id; //type: string
        YLeaf header_advertising_router; //type: string
        YLeaf header_sequence_number; //type: uint32
        YLeaf header_lsa_checksum; //type: uint16



}; // Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::Request_


class Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions : public Entity
{
    public:
        Retransmissions();
        ~Retransmissions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Retransmission; //type: Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission> > retransmission;


}; // Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions


class Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission : public Entity
{
    public:
        Retransmission();
        ~Retransmission();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf retransmission_neighbor_id; //type: string
        YLeaf retransmission_neighbor_ip_address; //type: string
        YLeaf retransmission_interface_name; //type: string
        YLeaf retransmission_timer; //type: uint32
        YLeaf retransmission_count; //type: uint32

        class RetransmissionAreaDb; //type: Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb
        class RetransmissionAsdb; //type: Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb> > retransmission_area_db;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb> > retransmission_asdb;


}; // Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission


class Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb : public Entity
{
    public:
        RetransmissionAreaDb();
        ~RetransmissionAreaDb();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf header_lsa_type; //type: LsaEnum
        YLeaf header_lsa_age; //type: uint16
        YLeaf header_ls_id; //type: string
        YLeaf header_advertising_router; //type: string
        YLeaf header_sequence_number; //type: uint32
        YLeaf header_lsa_checksum; //type: uint16



}; // Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb


class Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb : public Entity
{
    public:
        RetransmissionAsdb();
        ~RetransmissionAsdb();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf header_lsa_type; //type: LsaEnum
        YLeaf header_lsa_age; //type: uint16
        YLeaf header_ls_id; //type: string
        YLeaf header_advertising_router; //type: string
        YLeaf header_sequence_number; //type: uint32
        YLeaf header_lsa_checksum; //type: uint16



}; // Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb


class Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails : public Entity
{
    public:
        NeighborDetails();
        ~NeighborDetails();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NeighborDetail; //type: Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail> > neighbor_detail;


}; // Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails


class Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail : public Entity
{
    public:
        NeighborDetail();
        ~NeighborDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf neighbor_area_id; //type: string
        YLeaf state_change_count; //type: uint16
        YLeaf neighbor_cost; //type: uint16
        YLeaf neighbor_filter; //type: boolean
        YLeaf neighbor_designated_router_address; //type: string
        YLeaf neighbor_backup_designated_router_address; //type: string
        YLeaf interface_type; //type: InterfaceEnum
        YLeaf poll_interval; //type: uint32
        YLeaf next_poll_interval; //type: uint32
        YLeaf neighbor_option; //type: uint8
        YLeaf pending_events; //type: uint16
        YLeaf neighbor_lls_option; //type: uint16
        YLeaf oob_resynchronization; //type: boolean
        YLeaf nsf_router_state; //type: NsfRtrEnum
        YLeaf last_oob_time; //type: uint32
        YLeaf lfa_interface; //type: string
        YLeaf lfa_next_hop; //type: string
        YLeaf lfa_neighbor_id; //type: string
        YLeaf lfa_neighbor_revision; //type: uint32
        YLeaf neighbor_ack_list_count; //type: uint32
        YLeaf neighbor_ack_list_high_watermark; //type: uint32
        YLeaf adjacency_sid_label; //type: uint32
        YLeaf adjacency_sid_protected; //type: boolean
        YLeaf adjacency_sid_unprotected_label; //type: uint32

        class NeighborSummary; //type: Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary
        class NeighborBfdInformation; //type: Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation
        class NeighborRetransmissionInformation; //type: Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation> neighbor_bfd_information;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation> neighbor_retransmission_information;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary> neighbor_summary;


}; // Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail


class Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary : public Entity
{
    public:
        NeighborSummary();
        ~NeighborSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_id; //type: string
        YLeaf neighbor_address_xr; //type: string
        YLeaf neighbor_interface_name; //type: string
        YLeaf neighbor_dr_priority; //type: uint8
        YLeaf neighbor_state; //type: NeighborStateEnum
        YLeaf dr_bdr_state; //type: DrBdrStateEnum
        YLeaf neighbor_dead_timer; //type: uint32
        YLeaf neighbor_up_time; //type: uint32
        YLeaf neighbor_madj_interface; //type: boolean

        class NeighborBfdInformation; //type: Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation> neighbor_bfd_information;


}; // Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary


class Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation : public Entity
{
    public:
        NeighborBfdInformation();
        ~NeighborBfdInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bfd_intf_enable_mode; //type: uint32
        YLeaf bfd_status_flag; //type: uint8



}; // Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation


class Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation : public Entity
{
    public:
        NeighborBfdInformation();
        ~NeighborBfdInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bfd_intf_enable_mode; //type: uint32
        YLeaf bfd_status_flag; //type: uint8



}; // Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation


class Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation : public Entity
{
    public:
        NeighborRetransmissionInformation();
        ~NeighborRetransmissionInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dbd_retransmission_count; //type: uint32
        YLeaf dbd_retransmission_total_count; //type: uint32
        YLeaf area_flooding_index; //type: uint32
        YLeaf as_flood_index; //type: uint32
        YLeaf neighbor_retransmission_count; //type: uint32
        YLeaf number_of_retransmissions; //type: uint32
        YLeaf area_first_flood_information; //type: uint32
        YLeaf area_first_flood_information_index; //type: uint32
        YLeaf as_first_flood_information; //type: uint32
        YLeaf as_first_flood_information_index; //type: uint32
        YLeaf area_next_flood_information; //type: uint32
        YLeaf area_next_flood_information_index; //type: uint32
        YLeaf as_next_flood_information; //type: uint32
        YLeaf as_next_flood_information_index; //type: uint32
        YLeaf last_retransmission_length; //type: uint32
        YLeaf maximum_retransmission_length; //type: uint32
        YLeaf last_retransmission_time; //type: uint32
        YLeaf maximum_retransmission_time; //type: uint32
        YLeaf lsa_retransmission_timer; //type: uint32



}; // Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation : public Entity
{
    public:
        RouteInformation();
        ~RouteInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BackupRoutes; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes
        class MulticastIntactRouteTable; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable
        class MulticastIntactBackupRoutes; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes
        class SummaryInformation; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation
        class ConnectedRoutes; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes
        class LocalRoutes; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes
        class RouteAreas; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas
        class RouteTable; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable
        class ExternalRoutes; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes> backup_routes;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes> connected_routes;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes> external_routes;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes> local_routes;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes> multicast_intact_backup_routes;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable> multicast_intact_route_table;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas> route_areas;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable> route_table;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation> summary_information;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes : public Entity
{
    public:
        BackupRoutes();
        ~BackupRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BackupRoute; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute> > backup_route;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute : public Entity
{
    public:
        BackupRoute();
        ~BackupRoute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint32
        YLeaf route_prefix; //type: string
        YLeaf route_prefix_length; //type: uint32
        YLeaf route_metric; //type: uint32
        YLeaf route_type; //type: OspfRouteEnum
        YLeaf route_connected; //type: boolean

        class RouteInfo; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo
        class RoutePath; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo> route_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath> > route_path;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo : public Entity
{
    public:
        RouteInfo();
        ~RouteInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_area_id; //type: uint32
        YLeaf route_te_metric; //type: uint32
        YLeaf route_rib_version; //type: uint32
        YLeaf route_spf_version; //type: uint64
        YLeaf route_forward_distance; //type: uint32
        YLeaf route_source; //type: uint16
        YLeaf route_spf_priority; //type: uint8
        YLeaf route_auto_excluded; //type: boolean
        YLeaf route_srte_prefix_registered; //type: boolean
        YLeaf route_srte_nbr_registered; //type: uint16

        class RouteUpdateTime; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime
        class RouteFailTime; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime> route_fail_time;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime> route_update_time;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime : public Entity
{
    public:
        RouteUpdateTime();
        ~RouteUpdateTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime : public Entity
{
    public:
        RouteFailTime();
        ~RouteFailTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath : public Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_interface_name; //type: string
        YLeaf route_next_hop_address; //type: string
        YLeaf route_source; //type: string
        YLeaf route_lsaid; //type: string
        YLeaf route_path_is_mcast_intact; //type: boolean
        YLeaf route_path_is_ucmp_path; //type: boolean
        YLeaf route_metric; //type: uint32
        YLeaf route_path_id; //type: uint16
        YLeaf lsa_type; //type: uint8

        class RouteBackupPath; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath
        class SrMicroloopAvoidancePath; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath> route_backup_path;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath> sr_microloop_avoidance_path;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath : public Entity
{
    public:
        RouteBackupPath();
        ~RouteBackupPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf backup_route_interface_name; //type: string
        YLeaf backup_route_next_hop_address; //type: string
        YLeaf backup_route_source; //type: string
        YLeaf backup_metric; //type: uint32
        YLeaf primary_path; //type: boolean
        YLeaf line_card_disjoint; //type: boolean
        YLeaf downstream; //type: boolean
        YLeaf node_protect; //type: boolean
        YLeaf srlg_disjoint; //type: boolean
        YLeaf backup_remote_lfa; //type: string
        YLeaf backup_repair_list_size; //type: uint32
        YLeaf backup_tunnel_interface_name; //type: string

        class BackupRepair; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair> > backup_repair;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair : public Entity
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


        YLeaf repair_element_id; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32



}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath : public Entity
{
    public:
        SrMicroloopAvoidancePath();
        ~SrMicroloopAvoidancePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf microloop_repair_list_size; //type: uint32
        YLeaf microloop_tunnel_interface_name; //type: string
        YLeaf microloop_strict_spf; //type: boolean

        class MicroloopRepair; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair> > microloop_repair;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair : public Entity
{
    public:
        MicroloopRepair();
        ~MicroloopRepair();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_id; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32



}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable : public Entity
{
    public:
        MulticastIntactRouteTable();
        ~MulticastIntactRouteTable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Route; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route> > route;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route : public Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint32
        YLeaf route_prefix; //type: string
        YLeaf route_prefix_length; //type: uint32
        YLeaf route_metric; //type: uint32
        YLeaf route_type; //type: OspfRouteEnum
        YLeaf route_connected; //type: boolean

        class RouteInfo; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo
        class RoutePath; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo> route_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath> > route_path;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo : public Entity
{
    public:
        RouteInfo();
        ~RouteInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_area_id; //type: uint32
        YLeaf route_te_metric; //type: uint32
        YLeaf route_rib_version; //type: uint32
        YLeaf route_spf_version; //type: uint64
        YLeaf route_forward_distance; //type: uint32
        YLeaf route_source; //type: uint16
        YLeaf route_spf_priority; //type: uint8
        YLeaf route_auto_excluded; //type: boolean
        YLeaf route_srte_prefix_registered; //type: boolean
        YLeaf route_srte_nbr_registered; //type: uint16

        class RouteUpdateTime; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime
        class RouteFailTime; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime> route_fail_time;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime> route_update_time;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime : public Entity
{
    public:
        RouteUpdateTime();
        ~RouteUpdateTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime : public Entity
{
    public:
        RouteFailTime();
        ~RouteFailTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath : public Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_interface_name; //type: string
        YLeaf route_next_hop_address; //type: string
        YLeaf route_source; //type: string
        YLeaf route_lsaid; //type: string
        YLeaf route_path_is_mcast_intact; //type: boolean
        YLeaf route_path_is_ucmp_path; //type: boolean
        YLeaf route_metric; //type: uint32
        YLeaf lsa_type; //type: uint8
        YLeaf area_id; //type: uint32
        YLeaf area_format; //type: boolean

        class SrMicroloopAvoidancePath; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath> sr_microloop_avoidance_path;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath : public Entity
{
    public:
        SrMicroloopAvoidancePath();
        ~SrMicroloopAvoidancePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf microloop_repair_list_size; //type: uint32
        YLeaf microloop_tunnel_interface_name; //type: string
        YLeaf microloop_strict_spf; //type: boolean

        class MicroloopRepair; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair> > microloop_repair;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair : public Entity
{
    public:
        MicroloopRepair();
        ~MicroloopRepair();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_id; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32



}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes : public Entity
{
    public:
        MulticastIntactBackupRoutes();
        ~MulticastIntactBackupRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MulticastIntactBackupRoute; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute> > multicast_intact_backup_route;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute : public Entity
{
    public:
        MulticastIntactBackupRoute();
        ~MulticastIntactBackupRoute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint32
        YLeaf route_prefix; //type: string
        YLeaf route_prefix_length; //type: uint32
        YLeaf route_metric; //type: uint32
        YLeaf route_type; //type: OspfRouteEnum
        YLeaf route_connected; //type: boolean

        class RouteInfo; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo
        class RoutePath; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo> route_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath> > route_path;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo : public Entity
{
    public:
        RouteInfo();
        ~RouteInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_area_id; //type: uint32
        YLeaf route_te_metric; //type: uint32
        YLeaf route_rib_version; //type: uint32
        YLeaf route_spf_version; //type: uint64
        YLeaf route_forward_distance; //type: uint32
        YLeaf route_source; //type: uint16
        YLeaf route_spf_priority; //type: uint8
        YLeaf route_auto_excluded; //type: boolean
        YLeaf route_srte_prefix_registered; //type: boolean
        YLeaf route_srte_nbr_registered; //type: uint16

        class RouteUpdateTime; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime
        class RouteFailTime; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime> route_fail_time;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime> route_update_time;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime : public Entity
{
    public:
        RouteUpdateTime();
        ~RouteUpdateTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime : public Entity
{
    public:
        RouteFailTime();
        ~RouteFailTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath : public Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_interface_name; //type: string
        YLeaf route_next_hop_address; //type: string
        YLeaf route_source; //type: string
        YLeaf route_lsaid; //type: string
        YLeaf route_path_is_mcast_intact; //type: boolean
        YLeaf route_path_is_ucmp_path; //type: boolean
        YLeaf route_metric; //type: uint32
        YLeaf route_path_id; //type: uint16
        YLeaf lsa_type; //type: uint8

        class RouteBackupPath; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath
        class SrMicroloopAvoidancePath; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath> route_backup_path;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath> sr_microloop_avoidance_path;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath : public Entity
{
    public:
        RouteBackupPath();
        ~RouteBackupPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf backup_route_interface_name; //type: string
        YLeaf backup_route_next_hop_address; //type: string
        YLeaf backup_route_source; //type: string
        YLeaf backup_metric; //type: uint32
        YLeaf primary_path; //type: boolean
        YLeaf line_card_disjoint; //type: boolean
        YLeaf downstream; //type: boolean
        YLeaf node_protect; //type: boolean
        YLeaf srlg_disjoint; //type: boolean
        YLeaf backup_remote_lfa; //type: string
        YLeaf backup_repair_list_size; //type: uint32
        YLeaf backup_tunnel_interface_name; //type: string

        class BackupRepair; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair> > backup_repair;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair : public Entity
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


        YLeaf repair_element_id; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32



}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath : public Entity
{
    public:
        SrMicroloopAvoidancePath();
        ~SrMicroloopAvoidancePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf microloop_repair_list_size; //type: uint32
        YLeaf microloop_tunnel_interface_name; //type: string
        YLeaf microloop_strict_spf; //type: boolean

        class MicroloopRepair; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair> > microloop_repair;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair : public Entity
{
    public:
        MicroloopRepair();
        ~MicroloopRepair();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_id; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32



}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation : public Entity
{
    public:
        SummaryInformation();
        ~SummaryInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf failures; //type: uint32
        YLeaf failure_address; //type: string

        class FailureTime; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::FailureTime
        class Common; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::Common

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::Common> common;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::FailureTime> failure_time;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::FailureTime : public Entity
{
    public:
        FailureTime();
        ~FailureTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::FailureTime


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::Common : public Entity
{
    public:
        Common();
        ~Common();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf external_type1s; //type: uint32
        YLeaf external_type2s; //type: uint32
        YLeaf external_nssa_type1s; //type: uint32
        YLeaf external_nssa_type2s; //type: uint32
        YLeaf inter_areas; //type: uint32
        YLeaf intra_areas; //type: uint32
        YLeaf total; //type: uint32



}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::Common


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes : public Entity
{
    public:
        ConnectedRoutes();
        ~ConnectedRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ConnectedRoute; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute> > connected_route;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute : public Entity
{
    public:
        ConnectedRoute();
        ~ConnectedRoute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint32
        YLeaf route_prefix; //type: string
        YLeaf route_prefix_length; //type: uint32
        YLeaf route_metric; //type: uint32
        YLeaf route_type; //type: OspfRouteEnum
        YLeaf route_connected; //type: boolean

        class RouteInfo; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo
        class RoutePath; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo> route_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath> > route_path;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo : public Entity
{
    public:
        RouteInfo();
        ~RouteInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_area_id; //type: uint32
        YLeaf route_te_metric; //type: uint32
        YLeaf route_rib_version; //type: uint32
        YLeaf route_spf_version; //type: uint64
        YLeaf route_forward_distance; //type: uint32
        YLeaf route_source; //type: uint16
        YLeaf route_spf_priority; //type: uint8
        YLeaf route_auto_excluded; //type: boolean
        YLeaf route_srte_prefix_registered; //type: boolean
        YLeaf route_srte_nbr_registered; //type: uint16

        class RouteUpdateTime; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime
        class RouteFailTime; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime> route_fail_time;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime> route_update_time;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime : public Entity
{
    public:
        RouteUpdateTime();
        ~RouteUpdateTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime : public Entity
{
    public:
        RouteFailTime();
        ~RouteFailTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath : public Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_interface_name; //type: string
        YLeaf route_next_hop_address; //type: string
        YLeaf route_source; //type: string
        YLeaf route_lsaid; //type: string
        YLeaf route_path_is_mcast_intact; //type: boolean
        YLeaf route_path_is_ucmp_path; //type: boolean
        YLeaf route_metric; //type: uint32
        YLeaf lsa_type; //type: uint8
        YLeaf area_id; //type: uint32
        YLeaf area_format; //type: boolean

        class SrMicroloopAvoidancePath; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath> sr_microloop_avoidance_path;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath : public Entity
{
    public:
        SrMicroloopAvoidancePath();
        ~SrMicroloopAvoidancePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf microloop_repair_list_size; //type: uint32
        YLeaf microloop_tunnel_interface_name; //type: string
        YLeaf microloop_strict_spf; //type: boolean

        class MicroloopRepair; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair> > microloop_repair;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair : public Entity
{
    public:
        MicroloopRepair();
        ~MicroloopRepair();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_id; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32



}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes : public Entity
{
    public:
        LocalRoutes();
        ~LocalRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LocalRoute; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute> > local_route;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute : public Entity
{
    public:
        LocalRoute();
        ~LocalRoute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint32
        YLeaf route_prefix; //type: string
        YLeaf route_prefix_length; //type: uint32
        YLeaf route_metric; //type: uint32
        YLeaf route_type; //type: OspfRouteEnum
        YLeaf route_connected; //type: boolean

        class RouteInfo; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo
        class RoutePath; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo> route_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath> > route_path;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo : public Entity
{
    public:
        RouteInfo();
        ~RouteInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_area_id; //type: uint32
        YLeaf route_te_metric; //type: uint32
        YLeaf route_rib_version; //type: uint32
        YLeaf route_spf_version; //type: uint64
        YLeaf route_forward_distance; //type: uint32
        YLeaf route_source; //type: uint16
        YLeaf route_spf_priority; //type: uint8
        YLeaf route_auto_excluded; //type: boolean
        YLeaf route_srte_prefix_registered; //type: boolean
        YLeaf route_srte_nbr_registered; //type: uint16

        class RouteUpdateTime; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime
        class RouteFailTime; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime> route_fail_time;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime> route_update_time;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime : public Entity
{
    public:
        RouteUpdateTime();
        ~RouteUpdateTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime : public Entity
{
    public:
        RouteFailTime();
        ~RouteFailTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath : public Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_interface_name; //type: string
        YLeaf route_next_hop_address; //type: string
        YLeaf route_source; //type: string
        YLeaf route_lsaid; //type: string
        YLeaf route_path_is_mcast_intact; //type: boolean
        YLeaf route_path_is_ucmp_path; //type: boolean
        YLeaf route_metric; //type: uint32
        YLeaf lsa_type; //type: uint8
        YLeaf area_id; //type: uint32
        YLeaf area_format; //type: boolean

        class SrMicroloopAvoidancePath; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath> sr_microloop_avoidance_path;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath : public Entity
{
    public:
        SrMicroloopAvoidancePath();
        ~SrMicroloopAvoidancePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf microloop_repair_list_size; //type: uint32
        YLeaf microloop_tunnel_interface_name; //type: string
        YLeaf microloop_strict_spf; //type: boolean

        class MicroloopRepair; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair> > microloop_repair;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair : public Entity
{
    public:
        MicroloopRepair();
        ~MicroloopRepair();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_id; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32



}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas : public Entity
{
    public:
        RouteAreas();
        ~RouteAreas();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RouteArea; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea> > route_area;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea : public Entity
{
    public:
        RouteArea();
        ~RouteArea();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf area_id; //type: int32

        class MulticastIntactBackupRouteAreas; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas
        class ConnectedRouteAreas; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas
        class BackupRouteAreas; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas
        class RouteAreaInformations; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations
        class MulticastIntactRouteAreas; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas
        class SummaryAreaInformation; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation
        class LocalRouteAreas; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas> backup_route_areas;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas> connected_route_areas;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas> local_route_areas;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas> multicast_intact_backup_route_areas;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas> multicast_intact_route_areas;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations> route_area_informations;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation> summary_area_information;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas : public Entity
{
    public:
        MulticastIntactBackupRouteAreas();
        ~MulticastIntactBackupRouteAreas();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MulticastIntactBackupRouteArea; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea> > multicast_intact_backup_route_area;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea : public Entity
{
    public:
        MulticastIntactBackupRouteArea();
        ~MulticastIntactBackupRouteArea();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint32
        YLeaf route_prefix; //type: string
        YLeaf route_prefix_length; //type: uint32
        YLeaf route_metric; //type: uint32
        YLeaf route_type; //type: OspfRouteEnum
        YLeaf route_connected; //type: boolean

        class RouteInfo; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo
        class RoutePath; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo> route_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath> > route_path;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo : public Entity
{
    public:
        RouteInfo();
        ~RouteInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_area_id; //type: uint32
        YLeaf route_te_metric; //type: uint32
        YLeaf route_rib_version; //type: uint32
        YLeaf route_spf_version; //type: uint64
        YLeaf route_forward_distance; //type: uint32
        YLeaf route_source; //type: uint16
        YLeaf route_spf_priority; //type: uint8
        YLeaf route_auto_excluded; //type: boolean
        YLeaf route_srte_prefix_registered; //type: boolean
        YLeaf route_srte_nbr_registered; //type: uint16

        class RouteUpdateTime; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime
        class RouteFailTime; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime> route_fail_time;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime> route_update_time;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime : public Entity
{
    public:
        RouteUpdateTime();
        ~RouteUpdateTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime : public Entity
{
    public:
        RouteFailTime();
        ~RouteFailTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath : public Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_interface_name; //type: string
        YLeaf route_next_hop_address; //type: string
        YLeaf route_source; //type: string
        YLeaf route_lsaid; //type: string
        YLeaf route_path_is_mcast_intact; //type: boolean
        YLeaf route_path_is_ucmp_path; //type: boolean
        YLeaf route_metric; //type: uint32
        YLeaf route_path_id; //type: uint16
        YLeaf lsa_type; //type: uint8

        class RouteBackupPath; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath
        class SrMicroloopAvoidancePath; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath> route_backup_path;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath> sr_microloop_avoidance_path;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath : public Entity
{
    public:
        RouteBackupPath();
        ~RouteBackupPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf backup_route_interface_name; //type: string
        YLeaf backup_route_next_hop_address; //type: string
        YLeaf backup_route_source; //type: string
        YLeaf backup_metric; //type: uint32
        YLeaf primary_path; //type: boolean
        YLeaf line_card_disjoint; //type: boolean
        YLeaf downstream; //type: boolean
        YLeaf node_protect; //type: boolean
        YLeaf srlg_disjoint; //type: boolean
        YLeaf backup_remote_lfa; //type: string
        YLeaf backup_repair_list_size; //type: uint32
        YLeaf backup_tunnel_interface_name; //type: string

        class BackupRepair; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair> > backup_repair;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair : public Entity
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


        YLeaf repair_element_id; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32



}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath : public Entity
{
    public:
        SrMicroloopAvoidancePath();
        ~SrMicroloopAvoidancePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf microloop_repair_list_size; //type: uint32
        YLeaf microloop_tunnel_interface_name; //type: string
        YLeaf microloop_strict_spf; //type: boolean

        class MicroloopRepair; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair> > microloop_repair;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair : public Entity
{
    public:
        MicroloopRepair();
        ~MicroloopRepair();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_id; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32



}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas : public Entity
{
    public:
        ConnectedRouteAreas();
        ~ConnectedRouteAreas();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ConnectedRouteArea; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea> > connected_route_area;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea : public Entity
{
    public:
        ConnectedRouteArea();
        ~ConnectedRouteArea();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint32
        YLeaf route_prefix; //type: string
        YLeaf route_prefix_length; //type: uint32
        YLeaf route_metric; //type: uint32
        YLeaf route_type; //type: OspfRouteEnum
        YLeaf route_connected; //type: boolean

        class RouteInfo; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo
        class RoutePath; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo> route_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath> > route_path;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo : public Entity
{
    public:
        RouteInfo();
        ~RouteInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_area_id; //type: uint32
        YLeaf route_te_metric; //type: uint32
        YLeaf route_rib_version; //type: uint32
        YLeaf route_spf_version; //type: uint64
        YLeaf route_forward_distance; //type: uint32
        YLeaf route_source; //type: uint16
        YLeaf route_spf_priority; //type: uint8
        YLeaf route_auto_excluded; //type: boolean
        YLeaf route_srte_prefix_registered; //type: boolean
        YLeaf route_srte_nbr_registered; //type: uint16

        class RouteUpdateTime; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime
        class RouteFailTime; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime> route_fail_time;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime> route_update_time;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime : public Entity
{
    public:
        RouteUpdateTime();
        ~RouteUpdateTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime : public Entity
{
    public:
        RouteFailTime();
        ~RouteFailTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath : public Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_interface_name; //type: string
        YLeaf route_next_hop_address; //type: string
        YLeaf route_source; //type: string
        YLeaf route_lsaid; //type: string
        YLeaf route_path_is_mcast_intact; //type: boolean
        YLeaf route_path_is_ucmp_path; //type: boolean
        YLeaf route_metric; //type: uint32
        YLeaf lsa_type; //type: uint8
        YLeaf area_id; //type: uint32
        YLeaf area_format; //type: boolean

        class SrMicroloopAvoidancePath; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath> sr_microloop_avoidance_path;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath : public Entity
{
    public:
        SrMicroloopAvoidancePath();
        ~SrMicroloopAvoidancePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf microloop_repair_list_size; //type: uint32
        YLeaf microloop_tunnel_interface_name; //type: string
        YLeaf microloop_strict_spf; //type: boolean

        class MicroloopRepair; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair> > microloop_repair;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair : public Entity
{
    public:
        MicroloopRepair();
        ~MicroloopRepair();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_id; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32



}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas : public Entity
{
    public:
        BackupRouteAreas();
        ~BackupRouteAreas();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BackupRouteArea; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea> > backup_route_area;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea : public Entity
{
    public:
        BackupRouteArea();
        ~BackupRouteArea();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint32
        YLeaf route_prefix; //type: string
        YLeaf route_prefix_length; //type: uint32
        YLeaf route_metric; //type: uint32
        YLeaf route_type; //type: OspfRouteEnum
        YLeaf route_connected; //type: boolean

        class RouteInfo; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo
        class RoutePath; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo> route_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath> > route_path;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo : public Entity
{
    public:
        RouteInfo();
        ~RouteInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_area_id; //type: uint32
        YLeaf route_te_metric; //type: uint32
        YLeaf route_rib_version; //type: uint32
        YLeaf route_spf_version; //type: uint64
        YLeaf route_forward_distance; //type: uint32
        YLeaf route_source; //type: uint16
        YLeaf route_spf_priority; //type: uint8
        YLeaf route_auto_excluded; //type: boolean
        YLeaf route_srte_prefix_registered; //type: boolean
        YLeaf route_srte_nbr_registered; //type: uint16

        class RouteUpdateTime; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime
        class RouteFailTime; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime> route_fail_time;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime> route_update_time;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime : public Entity
{
    public:
        RouteUpdateTime();
        ~RouteUpdateTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime : public Entity
{
    public:
        RouteFailTime();
        ~RouteFailTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath : public Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_interface_name; //type: string
        YLeaf route_next_hop_address; //type: string
        YLeaf route_source; //type: string
        YLeaf route_lsaid; //type: string
        YLeaf route_path_is_mcast_intact; //type: boolean
        YLeaf route_path_is_ucmp_path; //type: boolean
        YLeaf route_metric; //type: uint32
        YLeaf route_path_id; //type: uint16
        YLeaf lsa_type; //type: uint8

        class RouteBackupPath; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath
        class SrMicroloopAvoidancePath; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath> route_backup_path;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath> sr_microloop_avoidance_path;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath : public Entity
{
    public:
        RouteBackupPath();
        ~RouteBackupPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf backup_route_interface_name; //type: string
        YLeaf backup_route_next_hop_address; //type: string
        YLeaf backup_route_source; //type: string
        YLeaf backup_metric; //type: uint32
        YLeaf primary_path; //type: boolean
        YLeaf line_card_disjoint; //type: boolean
        YLeaf downstream; //type: boolean
        YLeaf node_protect; //type: boolean
        YLeaf srlg_disjoint; //type: boolean
        YLeaf backup_remote_lfa; //type: string
        YLeaf backup_repair_list_size; //type: uint32
        YLeaf backup_tunnel_interface_name; //type: string

        class BackupRepair; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair> > backup_repair;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair : public Entity
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


        YLeaf repair_element_id; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32



}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath : public Entity
{
    public:
        SrMicroloopAvoidancePath();
        ~SrMicroloopAvoidancePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf microloop_repair_list_size; //type: uint32
        YLeaf microloop_tunnel_interface_name; //type: string
        YLeaf microloop_strict_spf; //type: boolean

        class MicroloopRepair; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair> > microloop_repair;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair : public Entity
{
    public:
        MicroloopRepair();
        ~MicroloopRepair();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_id; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32



}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations : public Entity
{
    public:
        RouteAreaInformations();
        ~RouteAreaInformations();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RouteAreaInformation; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation> > route_area_information;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation : public Entity
{
    public:
        RouteAreaInformation();
        ~RouteAreaInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint32
        YLeaf route_prefix; //type: string
        YLeaf route_prefix_length; //type: uint32
        YLeaf route_metric; //type: uint32
        YLeaf route_type; //type: OspfRouteEnum
        YLeaf route_connected; //type: boolean

        class RouteInfo; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo
        class RoutePath; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo> route_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath> > route_path;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo : public Entity
{
    public:
        RouteInfo();
        ~RouteInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_area_id; //type: uint32
        YLeaf route_te_metric; //type: uint32
        YLeaf route_rib_version; //type: uint32
        YLeaf route_spf_version; //type: uint64
        YLeaf route_forward_distance; //type: uint32
        YLeaf route_source; //type: uint16
        YLeaf route_spf_priority; //type: uint8
        YLeaf route_auto_excluded; //type: boolean
        YLeaf route_srte_prefix_registered; //type: boolean
        YLeaf route_srte_nbr_registered; //type: uint16

        class RouteUpdateTime; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime
        class RouteFailTime; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime> route_fail_time;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime> route_update_time;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime : public Entity
{
    public:
        RouteUpdateTime();
        ~RouteUpdateTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime : public Entity
{
    public:
        RouteFailTime();
        ~RouteFailTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath : public Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_interface_name; //type: string
        YLeaf route_next_hop_address; //type: string
        YLeaf route_source; //type: string
        YLeaf route_lsaid; //type: string
        YLeaf route_path_is_mcast_intact; //type: boolean
        YLeaf route_path_is_ucmp_path; //type: boolean
        YLeaf route_metric; //type: uint32
        YLeaf lsa_type; //type: uint8
        YLeaf area_id; //type: uint32
        YLeaf area_format; //type: boolean

        class SrMicroloopAvoidancePath; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath> sr_microloop_avoidance_path;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath : public Entity
{
    public:
        SrMicroloopAvoidancePath();
        ~SrMicroloopAvoidancePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf microloop_repair_list_size; //type: uint32
        YLeaf microloop_tunnel_interface_name; //type: string
        YLeaf microloop_strict_spf; //type: boolean

        class MicroloopRepair; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair> > microloop_repair;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair : public Entity
{
    public:
        MicroloopRepair();
        ~MicroloopRepair();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_id; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32



}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas : public Entity
{
    public:
        MulticastIntactRouteAreas();
        ~MulticastIntactRouteAreas();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MulticastIntactRouteArea; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea> > multicast_intact_route_area;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea : public Entity
{
    public:
        MulticastIntactRouteArea();
        ~MulticastIntactRouteArea();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint32
        YLeaf route_prefix; //type: string
        YLeaf route_prefix_length; //type: uint32
        YLeaf route_metric; //type: uint32
        YLeaf route_type; //type: OspfRouteEnum
        YLeaf route_connected; //type: boolean

        class RouteInfo; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo
        class RoutePath; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo> route_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath> > route_path;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo : public Entity
{
    public:
        RouteInfo();
        ~RouteInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_area_id; //type: uint32
        YLeaf route_te_metric; //type: uint32
        YLeaf route_rib_version; //type: uint32
        YLeaf route_spf_version; //type: uint64
        YLeaf route_forward_distance; //type: uint32
        YLeaf route_source; //type: uint16
        YLeaf route_spf_priority; //type: uint8
        YLeaf route_auto_excluded; //type: boolean
        YLeaf route_srte_prefix_registered; //type: boolean
        YLeaf route_srte_nbr_registered; //type: uint16

        class RouteUpdateTime; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime
        class RouteFailTime; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime> route_fail_time;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime> route_update_time;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime : public Entity
{
    public:
        RouteUpdateTime();
        ~RouteUpdateTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime : public Entity
{
    public:
        RouteFailTime();
        ~RouteFailTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath : public Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_interface_name; //type: string
        YLeaf route_next_hop_address; //type: string
        YLeaf route_source; //type: string
        YLeaf route_lsaid; //type: string
        YLeaf route_path_is_mcast_intact; //type: boolean
        YLeaf route_path_is_ucmp_path; //type: boolean
        YLeaf route_metric; //type: uint32
        YLeaf lsa_type; //type: uint8
        YLeaf area_id; //type: uint32
        YLeaf area_format; //type: boolean

        class SrMicroloopAvoidancePath; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath> sr_microloop_avoidance_path;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath : public Entity
{
    public:
        SrMicroloopAvoidancePath();
        ~SrMicroloopAvoidancePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf microloop_repair_list_size; //type: uint32
        YLeaf microloop_tunnel_interface_name; //type: string
        YLeaf microloop_strict_spf; //type: boolean

        class MicroloopRepair; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair> > microloop_repair;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair : public Entity
{
    public:
        MicroloopRepair();
        ~MicroloopRepair();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_id; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32



}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation : public Entity
{
    public:
        SummaryAreaInformation();
        ~SummaryAreaInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf failures; //type: uint32
        YLeaf failure_address; //type: string

        class FailureTime; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime
        class Common; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common> common;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime> failure_time;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime : public Entity
{
    public:
        FailureTime();
        ~FailureTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common : public Entity
{
    public:
        Common();
        ~Common();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf external_type1s; //type: uint32
        YLeaf external_type2s; //type: uint32
        YLeaf external_nssa_type1s; //type: uint32
        YLeaf external_nssa_type2s; //type: uint32
        YLeaf inter_areas; //type: uint32
        YLeaf intra_areas; //type: uint32
        YLeaf total; //type: uint32



}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas : public Entity
{
    public:
        LocalRouteAreas();
        ~LocalRouteAreas();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LocalRouteArea; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea> > local_route_area;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea : public Entity
{
    public:
        LocalRouteArea();
        ~LocalRouteArea();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint32
        YLeaf route_prefix; //type: string
        YLeaf route_prefix_length; //type: uint32
        YLeaf route_metric; //type: uint32
        YLeaf route_type; //type: OspfRouteEnum
        YLeaf route_connected; //type: boolean

        class RouteInfo; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo
        class RoutePath; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo> route_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath> > route_path;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo : public Entity
{
    public:
        RouteInfo();
        ~RouteInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_area_id; //type: uint32
        YLeaf route_te_metric; //type: uint32
        YLeaf route_rib_version; //type: uint32
        YLeaf route_spf_version; //type: uint64
        YLeaf route_forward_distance; //type: uint32
        YLeaf route_source; //type: uint16
        YLeaf route_spf_priority; //type: uint8
        YLeaf route_auto_excluded; //type: boolean
        YLeaf route_srte_prefix_registered; //type: boolean
        YLeaf route_srte_nbr_registered; //type: uint16

        class RouteUpdateTime; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime
        class RouteFailTime; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime> route_fail_time;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime> route_update_time;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime : public Entity
{
    public:
        RouteUpdateTime();
        ~RouteUpdateTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime : public Entity
{
    public:
        RouteFailTime();
        ~RouteFailTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath : public Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_interface_name; //type: string
        YLeaf route_next_hop_address; //type: string
        YLeaf route_source; //type: string
        YLeaf route_lsaid; //type: string
        YLeaf route_path_is_mcast_intact; //type: boolean
        YLeaf route_path_is_ucmp_path; //type: boolean
        YLeaf route_metric; //type: uint32
        YLeaf lsa_type; //type: uint8
        YLeaf area_id; //type: uint32
        YLeaf area_format; //type: boolean

        class SrMicroloopAvoidancePath; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath> sr_microloop_avoidance_path;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath : public Entity
{
    public:
        SrMicroloopAvoidancePath();
        ~SrMicroloopAvoidancePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf microloop_repair_list_size; //type: uint32
        YLeaf microloop_tunnel_interface_name; //type: string
        YLeaf microloop_strict_spf; //type: boolean

        class MicroloopRepair; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair> > microloop_repair;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair : public Entity
{
    public:
        MicroloopRepair();
        ~MicroloopRepair();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_id; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32



}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable : public Entity
{
    public:
        RouteTable();
        ~RouteTable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Route; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route> > route;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route : public Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint32
        YLeaf route_prefix; //type: string
        YLeaf route_prefix_length; //type: uint32
        YLeaf route_metric; //type: uint32
        YLeaf route_type; //type: OspfRouteEnum
        YLeaf route_connected; //type: boolean

        class RouteInfo; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo
        class RoutePath; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo> route_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath> > route_path;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo : public Entity
{
    public:
        RouteInfo();
        ~RouteInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_area_id; //type: uint32
        YLeaf route_te_metric; //type: uint32
        YLeaf route_rib_version; //type: uint32
        YLeaf route_spf_version; //type: uint64
        YLeaf route_forward_distance; //type: uint32
        YLeaf route_source; //type: uint16
        YLeaf route_spf_priority; //type: uint8
        YLeaf route_auto_excluded; //type: boolean
        YLeaf route_srte_prefix_registered; //type: boolean
        YLeaf route_srte_nbr_registered; //type: uint16

        class RouteUpdateTime; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime
        class RouteFailTime; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime> route_fail_time;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime> route_update_time;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime : public Entity
{
    public:
        RouteUpdateTime();
        ~RouteUpdateTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime : public Entity
{
    public:
        RouteFailTime();
        ~RouteFailTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath : public Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_interface_name; //type: string
        YLeaf route_next_hop_address; //type: string
        YLeaf route_source; //type: string
        YLeaf route_lsaid; //type: string
        YLeaf route_path_is_mcast_intact; //type: boolean
        YLeaf route_path_is_ucmp_path; //type: boolean
        YLeaf route_metric; //type: uint32
        YLeaf lsa_type; //type: uint8
        YLeaf area_id; //type: uint32
        YLeaf area_format; //type: boolean

        class SrMicroloopAvoidancePath; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath> sr_microloop_avoidance_path;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath : public Entity
{
    public:
        SrMicroloopAvoidancePath();
        ~SrMicroloopAvoidancePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf microloop_repair_list_size; //type: uint32
        YLeaf microloop_tunnel_interface_name; //type: string
        YLeaf microloop_strict_spf; //type: boolean

        class MicroloopRepair; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair> > microloop_repair;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair : public Entity
{
    public:
        MicroloopRepair();
        ~MicroloopRepair();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_id; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32



}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes : public Entity
{
    public:
        ExternalRoutes();
        ~ExternalRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ExternalRoute; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute> > external_route;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute : public Entity
{
    public:
        ExternalRoute();
        ~ExternalRoute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint32

        class RouteInformation_; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_
        class ProtocolName; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName
        class RouteExtendedCommunity; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName> protocol_name;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity> route_extended_community;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_> route_information;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_ : public Entity
{
    public:
        RouteInformation_();
        ~RouteInformation_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_prefix; //type: string
        YLeaf route_prefix_length; //type: uint32
        YLeaf route_metric; //type: uint32
        YLeaf route_type; //type: OspfRouteEnum
        YLeaf route_connected; //type: boolean

        class RouteInfo; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo
        class RoutePath; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo> route_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath> > route_path;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo : public Entity
{
    public:
        RouteInfo();
        ~RouteInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_area_id; //type: uint32
        YLeaf route_te_metric; //type: uint32
        YLeaf route_rib_version; //type: uint32
        YLeaf route_spf_version; //type: uint64
        YLeaf route_forward_distance; //type: uint32
        YLeaf route_source; //type: uint16
        YLeaf route_spf_priority; //type: uint8
        YLeaf route_auto_excluded; //type: boolean
        YLeaf route_srte_prefix_registered; //type: boolean
        YLeaf route_srte_nbr_registered; //type: uint16

        class RouteUpdateTime; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime
        class RouteFailTime; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime> route_fail_time;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime> route_update_time;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime : public Entity
{
    public:
        RouteUpdateTime();
        ~RouteUpdateTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime : public Entity
{
    public:
        RouteFailTime();
        ~RouteFailTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath : public Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_interface_name; //type: string
        YLeaf route_next_hop_address; //type: string
        YLeaf route_source; //type: string
        YLeaf route_lsaid; //type: string
        YLeaf route_path_is_mcast_intact; //type: boolean
        YLeaf route_path_is_ucmp_path; //type: boolean
        YLeaf route_metric; //type: uint32
        YLeaf lsa_type; //type: uint8
        YLeaf area_id; //type: uint32
        YLeaf area_format; //type: boolean

        class SrMicroloopAvoidancePath; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath> sr_microloop_avoidance_path;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath : public Entity
{
    public:
        SrMicroloopAvoidancePath();
        ~SrMicroloopAvoidancePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf microloop_repair_list_size; //type: uint32
        YLeaf microloop_tunnel_interface_name; //type: string
        YLeaf microloop_strict_spf; //type: boolean

        class MicroloopRepair; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair> > microloop_repair;


}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair : public Entity
{
    public:
        MicroloopRepair();
        ~MicroloopRepair();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_id; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32



}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName : public Entity
{
    public:
        ProtocolName();
        ~ProtocolName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf protocol_type; //type: RedistProtocolEnum
        YLeaf isis_instance_id; //type: string
        YLeaf ospf_process_id; //type: string
        YLeaf bgp_as_number; //type: string
        YLeaf eigrp_as_number; //type: string
        YLeaf connected_instance; //type: string



}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName


class Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity : public Entity
{
    public:
        RouteExtendedCommunity();
        ~RouteExtendedCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf extended_community_domain_id_value; //type: string
        YLeaf extended_communityl_domain_id_type; //type: uint16
        YLeaf extended_community_area_id; //type: uint32
        YLeaf extended_community_router_id; //type: string
        YLeaf extended_community_route_type; //type: uint8
        YLeaf extended_community_options; //type: uint8



}; // Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity


class Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation : public Entity
{
    public:
        InterfaceInformation();
        ~InterfaceInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class VirtualLinks; //type: Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::VirtualLinks
        class InterfaceBriefs; //type: Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::InterfaceBriefs
        class Interfaces; //type: Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::InterfaceBriefs> interface_briefs;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::VirtualLinks> virtual_links;


}; // Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation


class Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::VirtualLinks : public Entity
{
    public:
        VirtualLinks();
        ~VirtualLinks();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class VirtualLink; //type: Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::VirtualLinks::VirtualLink

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::VirtualLinks::VirtualLink> > virtual_link;


}; // Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::VirtualLinks


class Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::VirtualLinks::VirtualLink : public Entity
{
    public:
        VirtualLink();
        ~VirtualLink();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf virtual_link_name; //type: string
        YLeaf virtual_link_name_xr; //type: string
        YLeaf virtual_link_neighbor_id; //type: string
        YLeaf virtual_link_state; //type: OspfInterfaceStateEnum
        YLeaf virtual_link_demand_circuit; //type: boolean
        YLeaf virtual_link_dc_bitless_lsa; //type: uint32
        YLeaf transit_area; //type: string
        YLeaf virtual_link_interface_name; //type: string
        YLeaf virtual_link_cost; //type: uint16
        YLeaf virual_link_transmission_delay; //type: uint16
        YLeaf virtual_link_hello_interval; //type: uint32
        YLeaf virtual_link_hello_interval_ms; //type: uint32
        YLeaf virtual_link_dead_interval; //type: uint32
        YLeaf virtual_link_wait_interval; //type: uint32
        YLeaf virtaul_link_retransmission_interval; //type: uint32
        YLeaf virtual_link_next_hello; //type: uint32
        YLeaf virtual_link_next_hello_ms; //type: uint32
        YLeaf virtual_link_passive; //type: boolean
        YLeaf virtual_link_authentication_type; //type: AuthenticationEnum
        YLeaf virtual_link_youngest_md_key; //type: boolean
        YLeaf virtual_link_youngest_md_key_id; //type: uint16
        YLeaf virtual_link_old_md_key_count; //type: uint32
        YLeaf virtual_link_keychain_id; //type: uint64
        YLeaf virtual_link_nsf_enabled; //type: boolean
        YLeaf virtual_link_nsf; //type: boolean
        YLeaf virtual_link_last_nsf; //type: uint32
        YLeafList virtual_link_md_key; //type: list of  uint16

        class VirtualLinkNeighbor; //type: Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor> virtual_link_neighbor;


}; // Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::VirtualLinks::VirtualLink


class Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor : public Entity
{
    public:
        VirtualLinkNeighbor();
        ~VirtualLinkNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf virtual_link_suppress_hello; //type: boolean
        YLeaf virtual_link_state; //type: NeighborStateEnum

        class VirtualLinkRetransmissoin; //type: Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmissoin

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmissoin> virtual_link_retransmissoin;


}; // Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor


class Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmissoin : public Entity
{
    public:
        VirtualLinkRetransmissoin();
        ~VirtualLinkRetransmissoin();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dbd_retransmission_count; //type: uint32
        YLeaf dbd_retransmission_total_count; //type: uint32
        YLeaf area_flooding_index; //type: uint32
        YLeaf as_flood_index; //type: uint32
        YLeaf neighbor_retransmission_count; //type: uint32
        YLeaf number_of_retransmissions; //type: uint32
        YLeaf area_first_flood_information; //type: uint32
        YLeaf area_first_flood_information_index; //type: uint32
        YLeaf as_first_flood_information; //type: uint32
        YLeaf as_first_flood_information_index; //type: uint32
        YLeaf area_next_flood_information; //type: uint32
        YLeaf area_next_flood_information_index; //type: uint32
        YLeaf as_next_flood_information; //type: uint32
        YLeaf as_next_flood_information_index; //type: uint32
        YLeaf last_retransmission_length; //type: uint32
        YLeaf maximum_retransmission_length; //type: uint32
        YLeaf last_retransmission_time; //type: uint32
        YLeaf maximum_retransmission_time; //type: uint32
        YLeaf lsa_retransmission_timer; //type: uint32



}; // Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmissoin


class Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::InterfaceBriefs : public Entity
{
    public:
        InterfaceBriefs();
        ~InterfaceBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InterfaceBrief; //type: Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief> > interface_brief;


}; // Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::InterfaceBriefs


class Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief : public Entity
{
    public:
        InterfaceBrief();
        ~InterfaceBrief();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf interface_area; //type: string
        YLeaf interface_address; //type: string
        YLeaf interface_mask; //type: uint32
        YLeaf interface_link_cost; //type: uint16
        YLeaf ospf_interface_state; //type: OspfInterfaceStateEnum
        YLeaf interface_fast_detect_hold_down; //type: boolean
        YLeaf interface_neighbor_count; //type: uint16
        YLeaf interface_adj_neighbor_count; //type: uint16
        YLeaf interfaceis_madj; //type: boolean
        YLeaf interface_madj_count; //type: uint16

        class InterfaceMadj; //type: Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::InterfaceMadj

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::InterfaceMadj> > interface_madj;


}; // Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief


class Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::InterfaceMadj : public Entity
{
    public:
        InterfaceMadj();
        ~InterfaceMadj();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_area; //type: string
        YLeaf madj_area_id; //type: uint32
        YLeaf interface_neighbor_count; //type: uint16
        YLeaf interface_adj_neighbor_count; //type: uint16
        YLeaf interface_link_cost; //type: uint16
        YLeaf ospf_interface_state; //type: OspfInterfaceStateEnum



}; // Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::InterfaceMadj


}
}

#endif /* _CISCO_IOS_XR_IPV4_OSPF_OPER_1_ */

