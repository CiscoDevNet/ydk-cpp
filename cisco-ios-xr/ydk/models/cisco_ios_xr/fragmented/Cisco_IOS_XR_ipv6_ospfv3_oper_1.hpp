#ifndef _CISCO_IOS_XR_IPV6_OSPFV3_OPER_1_
#define _CISCO_IOS_XR_IPV6_OSPFV3_OPER_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv6_ospfv3_oper_0.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv6_ospfv3_oper {


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RequestListTable::Request : public Entity
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
        YLeaf request_neighbor_address; //type: string
        YLeaf is_request_virtual_link; //type: boolean
        YLeaf request_virtual_link_id; //type: uint32
        YLeaf is_request_sham_link; //type: boolean
        YLeaf request_sham_link_id; //type: uint32

        class Request_; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RequestListTable::Request::Request_

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RequestListTable::Request::Request_> > request;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RequestListTable::Request


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RequestListTable::Request::Request_ : public Entity
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


        YLeaf header_lsa_type; //type: Ospfv3Lsa1Enum
        YLeaf header_lsa_age; //type: uint16
        YLeaf header_lsa_id; //type: string
        YLeaf header_advertising_router; //type: string
        YLeaf header_sequence_number; //type: int32



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RequestListTable::Request::Request_


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable : public Entity
{
    public:
        NeighborTable();
        ~NeighborTable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Neighbor; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor> > neighbor;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor : public Entity
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
        YLeaf neighbor_address_xr; //type: string
        YLeaf neighbor_interface_id; //type: uint32
        YLeaf neighbor_dr_priority; //type: uint8
        YLeaf neighbor_state; //type: Ospfv3NeighborStateEnum
        YLeaf neighbor_designated_router; //type: string
        YLeaf neighbor_dead_timer; //type: uint32
        YLeaf neighbor_up_time; //type: uint32
        YLeaf neighbor_virtual_link_id; //type: uint32
        YLeaf is_neighbor_virtual_link; //type: boolean
        YLeaf neighbor_sham_link_id; //type: uint32
        YLeaf is_neighbor_sham_link; //type: boolean

        class NeighborDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::NeighborDetail
        class NeighborBfdInfo; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::NeighborBfdInfo

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::NeighborBfdInfo> neighbor_bfd_info;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::NeighborDetail> neighbor_detail;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::NeighborDetail : public Entity
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


        YLeaf state_changes; //type: uint16
        YLeaf neighbor_cost; //type: uint16
        YLeaf is_neighbor_filtered; //type: boolean
        YLeaf neighbor_designated_router_address; //type: string
        YLeaf neighbor_backup_designated_router_address; //type: string
        YLeaf interface_type; //type: Ospfv3InterfaceEnum
        YLeaf poll_interval; //type: uint32
        YLeaf next_poll_interval; //type: uint32
        YLeaf neighbor_ignore_timer; //type: uint32
        YLeaf neighbor_option; //type: uint32
        YLeaf pending_events; //type: uint16

        class NeighborRetransmission; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::NeighborDetail::NeighborRetransmission

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::NeighborDetail::NeighborRetransmission> neighbor_retransmission;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::NeighborDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::NeighborDetail::NeighborRetransmission : public Entity
{
    public:
        NeighborRetransmission();
        ~NeighborRetransmission();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf database_descriptor_retransmissions; //type: uint32
        YLeaf area_flood_index; //type: uint32
        YLeaf as_flood_index; //type: uint32
        YLeaf link_flood_index; //type: uint32
        YLeaf neighbor_retransmissions; //type: uint32
        YLeaf retransmissions; //type: uint32
        YLeaf area_first_flood; //type: uint32
        YLeaf area_first_flood_index; //type: uint32
        YLeaf as_first_flood; //type: uint32
        YLeaf as_first_flood_index; //type: uint32
        YLeaf link_first_flood; //type: uint32
        YLeaf link_first_flood_index; //type: uint32
        YLeaf area_next_flood; //type: uint32
        YLeaf area_next_flood_index; //type: uint32
        YLeaf as_next_flood; //type: uint32
        YLeaf as_next_flood_index; //type: uint32
        YLeaf link_next_flood; //type: uint32
        YLeaf link_next_flood_index; //type: uint32
        YLeaf last_retransmission_length; //type: uint32
        YLeaf maximum_retransmission_length; //type: uint32
        YLeaf last_retransmission_time; //type: uint32
        YLeaf maximum_retransmission_time; //type: uint32
        YLeaf lsa_retransmission_timer; //type: uint32



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::NeighborDetail::NeighborRetransmission


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::NeighborBfdInfo : public Entity
{
    public:
        NeighborBfdInfo();
        ~NeighborBfdInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bfd_intf_enable_mode; //type: uint32
        YLeaf bfd_status_flag; //type: uint8



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::NeighborBfdInfo


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable : public Entity
{
    public:
        InterfaceTable();
        ~InterfaceTable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Interface; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface> > interface;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf interface_state; //type: ImStateEnumEnum
        YLeaf is_interface_line_up; //type: boolean
        YLeaf is_interface_ip_security_required; //type: boolean
        YLeaf is_interface_ip_security_active; //type: boolean
        YLeaf interface_address; //type: string
        YLeaf interface_number; //type: uint32
        YLeaf interface_router_id; //type: string
        YLeaf network_type; //type: Ospfv3InterfaceEnum
        YLeaf interface_link_cost; //type: uint16
        YLeaf is_interface_flood_reduction; //type: boolean
        YLeaf is_demand_circuit_configured; //type: boolean
        YLeaf is_interface_demand_circuit; //type: boolean
        YLeaf interface_dc_bitless_ls_as; //type: uint32
        YLeaf transmission_delay; //type: uint16
        YLeaf ospf_interface_state; //type: Ospfv3InterfaceStateEnum
        YLeaf interface_priority; //type: uint8
        YLeaf is_designated_router; //type: boolean
        YLeaf designated_router_id; //type: string
        YLeaf designated_router_address; //type: string
        YLeaf backup_designated_router_id; //type: string
        YLeaf backup_designated_router_address; //type: string
        YLeaf network_lsa_flush_timer; //type: uint32
        YLeaf is_interface_lsa_filtered; //type: boolean
        YLeaf hello_interval; //type: uint32
        YLeaf dead_interval; //type: uint32
        YLeaf wait_interval; //type: uint32
        YLeaf interface_retransmission_interval; //type: uint32
        YLeaf next_hello_time; //type: uint32
        YLeaf interface_authentication_spi; //type: uint32
        YLeaf interface_authentication_transmit; //type: uint32
        YLeaf is_interface_encryption_enabled; //type: boolean
        YLeaf is_prefix_suppress; //type: boolean
        YLeaf interface_encryption_spi; //type: uint32
        YLeaf interface_encryption_transmitted; //type: uint32
        YLeaf interface_encrypted_authentication_transmitted; //type: uint32
        YLeaf adjacent_neighbor; //type: uint32
        YLeaf interface_references; //type: uint32
        YLeaf configured_ldp_sync; //type: boolean
        YLeaf interface_ldp_sync; //type: boolean

        class ActiveInterface; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::ActiveInterface
        class InterfaceBfd; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::InterfaceBfd
        class InterfaceNeighbor; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::InterfaceNeighbor

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::ActiveInterface> active_interface;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::InterfaceBfd> interface_bfd;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::InterfaceNeighbor> > interface_neighbor;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::ActiveInterface : public Entity
{
    public:
        ActiveInterface();
        ~ActiveInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf wait_time; //type: uint32
        YLeaf interface_area_flood_index; //type: uint32
        YLeaf interface_as_flood_index; //type: uint32
        YLeaf interface_link_flood_index; //type: uint32
        YLeaf flood_queue_length; //type: uint32
        YLeaf interface_area_next_flood; //type: uint32
        YLeaf interface_area_next_flood_index; //type: uint32
        YLeaf interface_as_next_flood; //type: uint32
        YLeaf interface_as_next_flood_index; //type: uint32
        YLeaf interface_link_next_flood; //type: uint32
        YLeaf interface_link_next_index; //type: uint32
        YLeaf flood_scan_length; //type: uint32
        YLeaf maximum_flood_length; //type: uint32
        YLeaf last_flood_time; //type: uint32
        YLeaf maximum_flood_time; //type: uint32
        YLeaf interface_flood_pacing_timer; //type: uint32
        YLeaf interface_neighbors; //type: uint16
        YLeaf suppressed_hellos; //type: uint16



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::ActiveInterface


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::InterfaceBfd : public Entity
{
    public:
        InterfaceBfd();
        ~InterfaceBfd();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bfd_intf_enable_mode; //type: uint32
        YLeaf bfd_interval; //type: uint32
        YLeaf bfd_detection_multiplier; //type: uint32



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::InterfaceBfd


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::InterfaceNeighbor : public Entity
{
    public:
        InterfaceNeighbor();
        ~InterfaceNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_neighbor_id; //type: string
        YLeaf interface_neighbor_cost; //type: uint32
        YLeaf is_neighbor_dr; //type: boolean
        YLeaf is_neighbor_bdr; //type: boolean
        YLeaf is_hello_suppressed; //type: boolean



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::InterfaceNeighbor


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable : public Entity
{
    public:
        FloodListTable();
        ~FloodListTable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Flood; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood> > flood;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood : public Entity
{
    public:
        Flood();
        ~Flood();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf ls_transmission_timer; //type: uint32
        YLeaf queue_length; //type: uint32

        class LinkFlood; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood::LinkFlood
        class AreaFlood; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood::AreaFlood
        class AsFlood; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood::AsFlood

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood::AreaFlood> > area_flood;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood::AsFlood> > as_flood;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood::LinkFlood> > link_flood;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood::LinkFlood : public Entity
{
    public:
        LinkFlood();
        ~LinkFlood();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf header_lsa_type; //type: Ospfv3Lsa1Enum
        YLeaf header_lsa_age; //type: uint16
        YLeaf header_lsa_id; //type: string
        YLeaf header_advertising_router; //type: string
        YLeaf header_sequence_number; //type: int32



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood::LinkFlood


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood::AreaFlood : public Entity
{
    public:
        AreaFlood();
        ~AreaFlood();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf header_lsa_type; //type: Ospfv3Lsa1Enum
        YLeaf header_lsa_age; //type: uint16
        YLeaf header_lsa_id; //type: string
        YLeaf header_advertising_router; //type: string
        YLeaf header_sequence_number; //type: int32



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood::AreaFlood


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood::AsFlood : public Entity
{
    public:
        AsFlood();
        ~AsFlood();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf header_lsa_type; //type: Ospfv3Lsa1Enum
        YLeaf header_lsa_age; //type: uint16
        YLeaf header_lsa_id; //type: string
        YLeaf header_advertising_router; //type: string
        YLeaf header_sequence_number; //type: int32



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood::AsFlood


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable : public Entity
{
    public:
        RetransmissionListTable();
        ~RetransmissionListTable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Retransmission; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission> > retransmission;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission : public Entity
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
        YLeaf retransmission_neighbor_address; //type: string
        YLeaf is_retransmissionvirtual_link; //type: boolean
        YLeaf retransmissionvirtual_link_id; //type: uint32
        YLeaf is_retransmission_sham_link; //type: boolean
        YLeaf retransmission_sham_link_id; //type: uint32
        YLeaf retransmission_timer; //type: uint32
        YLeaf retransmission_length; //type: uint32

        class RetransmissionvirtualLinkDb; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionvirtualLinkDb
        class RetransmissionAreaDb; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionAreaDb
        class RetransmissionAsdb; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionAsdb

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionAreaDb> > retransmission_area_db;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionAsdb> > retransmission_asdb;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionvirtualLinkDb> > retransmissionvirtual_link_db;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionvirtualLinkDb : public Entity
{
    public:
        RetransmissionvirtualLinkDb();
        ~RetransmissionvirtualLinkDb();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf header_lsa_type; //type: Ospfv3Lsa1Enum
        YLeaf header_lsa_age; //type: uint16
        YLeaf header_lsa_id; //type: string
        YLeaf header_advertising_router; //type: string
        YLeaf header_sequence_number; //type: int32



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionvirtualLinkDb


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionAreaDb : public Entity
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


        YLeaf header_lsa_type; //type: Ospfv3Lsa1Enum
        YLeaf header_lsa_age; //type: uint16
        YLeaf header_lsa_id; //type: string
        YLeaf header_advertising_router; //type: string
        YLeaf header_sequence_number; //type: int32



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionAreaDb


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionAsdb : public Entity
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


        YLeaf header_lsa_type; //type: Ospfv3Lsa1Enum
        YLeaf header_lsa_age; //type: uint16
        YLeaf header_lsa_id; //type: string
        YLeaf header_advertising_router; //type: string
        YLeaf header_sequence_number; //type: int32



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionAsdb


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable : public Entity
{
    public:
        DatabaseTable();
        ~DatabaseTable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LsaTable; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable
        class LsaInternalTable; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable> lsa_internal_table;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable> lsa_table;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable : public Entity
{
    public:
        LsaTable();
        ~LsaTable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Lsa; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa> > lsa;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa : public Entity
{
    public:
        Lsa();
        ~Lsa();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf area_id; //type: int32
        YLeaf ls_type; //type: Ospfv3LsaEnum
        YLeaf advertising_router; //type: string
        YLeaf ls_id; //type: int32
        YLeaf interface_name; //type: string

        class LsaInfo; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo> lsa_info;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo : public Entity
{
    public:
        LsaInfo();
        ~LsaInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_info_type; //type: Ospfv3LsaInfoTypesEnum

        class LsaSummaryInfo; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo
        class RouterLsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType
        class NetworkLsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType
        class InterAreaPrefixLsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType
        class InterAreaRouterLsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType
        class ExternalLsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType
        class NssalsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType
        class LinkLsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType
        class IntraAreaPrefixLsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType
        class GraceLsa; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa
        class UnknownLinkLsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType
        class UnknownAreaLsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType
        class UnknownAslsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType
        class UnknownLsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType> external_lsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa> grace_lsa;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType> inter_area_prefix_lsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType> inter_area_router_lsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType> intra_area_prefix_lsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType> link_lsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo> lsa_summary_info;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType> network_lsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType> nssalsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType> router_lsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType> unknown_area_lsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType> unknown_aslsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType> unknown_link_lsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType> unknown_lsa_type;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo : public Entity
{
    public:
        LsaSummaryInfo();
        ~LsaSummaryInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf links; //type: uint16
        YLeaf router_la_bits; //type: uint8
        YLeaf reference_type; //type: uint16
        YLeaf reference_lsa_id; //type: uint32
        YLeaf lsa_router_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf interface_name; //type: string
        YLeaf is_virtual_link; //type: boolean
        YLeaf virtual_link_id; //type: uint32
        YLeaf is_sham_link; //type: boolean
        YLeaf sham_link_id; //type: uint32

        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader> lsa_header;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second_table_index; //type: uint8
        YLeaf minute_table_index; //type: uint8
        YLeaf free_time; //type: uint32
        YLeaf is_deleted; //type: boolean
        YLeaf is_routing_bit; //type: boolean
        YLeaf is_advertising_router_reachable; //type: boolean
        YLeaf is_no_delete; //type: boolean
        YLeaf is_neighbor_exchange; //type: boolean
        YLeaf is_routing_table; //type: boolean
        YLeaf is_acknowledged; //type: boolean
        YLeaf is_maximum_aged; //type: boolean
        YLeaf is_partial_spf; //type: boolean
        YLeaf is_flood_pending; //type: boolean
        YLeaf rate_limit; //type: boolean
        YLeaf is_nsr_ack_pending; //type: boolean
        YLeaf nsr_flood_required; //type: boolean
        YLeaf lsa_flood_required_post_fail_over; //type: boolean
        YLeaf lsa_length; //type: uint16
        YLeaf lsa_sync_state; //type: OspfLsaSyncStateEnum



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType : public Entity
{
    public:
        RouterLsaType();
        ~RouterLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_la_bits; //type: uint8

        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaDetail
        class RpfPath; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::RpfPath
        class Link; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::Link

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::Link> > link;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaHeader> lsa_header;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::RpfPath> rpf_path;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second_table_index; //type: uint8
        YLeaf minute_table_index; //type: uint8
        YLeaf free_time; //type: uint32
        YLeaf is_deleted; //type: boolean
        YLeaf is_routing_bit; //type: boolean
        YLeaf is_advertising_router_reachable; //type: boolean
        YLeaf is_no_delete; //type: boolean
        YLeaf is_neighbor_exchange; //type: boolean
        YLeaf is_routing_table; //type: boolean
        YLeaf is_acknowledged; //type: boolean
        YLeaf is_maximum_aged; //type: boolean
        YLeaf is_partial_spf; //type: boolean
        YLeaf is_flood_pending; //type: boolean
        YLeaf rate_limit; //type: boolean
        YLeaf is_nsr_ack_pending; //type: boolean
        YLeaf nsr_flood_required; //type: boolean
        YLeaf lsa_flood_required_post_fail_over; //type: boolean
        YLeaf lsa_length; //type: uint16
        YLeaf lsa_sync_state; //type: OspfLsaSyncStateEnum



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::RpfPath : public Entity
{
    public:
        RpfPath();
        ~RpfPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rpf_multicast_next_hop; //type: uint32
        YLeaf interface_name; //type: string



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::RpfPath


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::Link : public Entity
{
    public:
        Link();
        ~Link();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf link_type; //type: Ospfv3LinkEnum
        YLeaf link_metric; //type: uint16
        YLeaf link_interface_id; //type: uint32
        YLeaf link_neighbor_interface_id; //type: uint32
        YLeaf link_neighbor_router_id; //type: uint32



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::Link


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType : public Entity
{
    public:
        NetworkLsaType();
        ~NetworkLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList neighbor_router; //type: list of  string

        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader> lsa_header;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second_table_index; //type: uint8
        YLeaf minute_table_index; //type: uint8
        YLeaf free_time; //type: uint32
        YLeaf is_deleted; //type: boolean
        YLeaf is_routing_bit; //type: boolean
        YLeaf is_advertising_router_reachable; //type: boolean
        YLeaf is_no_delete; //type: boolean
        YLeaf is_neighbor_exchange; //type: boolean
        YLeaf is_routing_table; //type: boolean
        YLeaf is_acknowledged; //type: boolean
        YLeaf is_maximum_aged; //type: boolean
        YLeaf is_partial_spf; //type: boolean
        YLeaf is_flood_pending; //type: boolean
        YLeaf rate_limit; //type: boolean
        YLeaf is_nsr_ack_pending; //type: boolean
        YLeaf nsr_flood_required; //type: boolean
        YLeaf lsa_flood_required_post_fail_over; //type: boolean
        YLeaf lsa_length; //type: uint16
        YLeaf lsa_sync_state; //type: OspfLsaSyncStateEnum



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType : public Entity
{
    public:
        InterAreaPrefixLsaType();
        ~InterAreaPrefixLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf priority; //type: PrefixPriorityEnum

        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader> lsa_header;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second_table_index; //type: uint8
        YLeaf minute_table_index; //type: uint8
        YLeaf free_time; //type: uint32
        YLeaf is_deleted; //type: boolean
        YLeaf is_routing_bit; //type: boolean
        YLeaf is_advertising_router_reachable; //type: boolean
        YLeaf is_no_delete; //type: boolean
        YLeaf is_neighbor_exchange; //type: boolean
        YLeaf is_routing_table; //type: boolean
        YLeaf is_acknowledged; //type: boolean
        YLeaf is_maximum_aged; //type: boolean
        YLeaf is_partial_spf; //type: boolean
        YLeaf is_flood_pending; //type: boolean
        YLeaf rate_limit; //type: boolean
        YLeaf is_nsr_ack_pending; //type: boolean
        YLeaf nsr_flood_required; //type: boolean
        YLeaf lsa_flood_required_post_fail_over; //type: boolean
        YLeaf lsa_length; //type: uint16
        YLeaf lsa_sync_state; //type: OspfLsaSyncStateEnum



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType : public Entity
{
    public:
        InterAreaRouterLsaType();
        ~InterAreaRouterLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_router_id; //type: uint32

        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader> lsa_header;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second_table_index; //type: uint8
        YLeaf minute_table_index; //type: uint8
        YLeaf free_time; //type: uint32
        YLeaf is_deleted; //type: boolean
        YLeaf is_routing_bit; //type: boolean
        YLeaf is_advertising_router_reachable; //type: boolean
        YLeaf is_no_delete; //type: boolean
        YLeaf is_neighbor_exchange; //type: boolean
        YLeaf is_routing_table; //type: boolean
        YLeaf is_acknowledged; //type: boolean
        YLeaf is_maximum_aged; //type: boolean
        YLeaf is_partial_spf; //type: boolean
        YLeaf is_flood_pending; //type: boolean
        YLeaf rate_limit; //type: boolean
        YLeaf is_nsr_ack_pending; //type: boolean
        YLeaf nsr_flood_required; //type: boolean
        YLeaf lsa_flood_required_post_fail_over; //type: boolean
        YLeaf lsa_length; //type: uint16
        YLeaf lsa_sync_state; //type: OspfLsaSyncStateEnum



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType : public Entity
{
    public:
        ExternalLsaType();
        ~ExternalLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf metric_type; //type: Ospfv3DefaultMetricEnum
        YLeaf tos_cost; //type: uint32
        YLeaf is_forwarding_address_set; //type: boolean
        YLeaf forwarding_address; //type: string
        YLeaf external_tag; //type: uint32
        YLeaf priority; //type: PrefixPriorityEnum

        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader> lsa_header;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second_table_index; //type: uint8
        YLeaf minute_table_index; //type: uint8
        YLeaf free_time; //type: uint32
        YLeaf is_deleted; //type: boolean
        YLeaf is_routing_bit; //type: boolean
        YLeaf is_advertising_router_reachable; //type: boolean
        YLeaf is_no_delete; //type: boolean
        YLeaf is_neighbor_exchange; //type: boolean
        YLeaf is_routing_table; //type: boolean
        YLeaf is_acknowledged; //type: boolean
        YLeaf is_maximum_aged; //type: boolean
        YLeaf is_partial_spf; //type: boolean
        YLeaf is_flood_pending; //type: boolean
        YLeaf rate_limit; //type: boolean
        YLeaf is_nsr_ack_pending; //type: boolean
        YLeaf nsr_flood_required; //type: boolean
        YLeaf lsa_flood_required_post_fail_over; //type: boolean
        YLeaf lsa_length; //type: uint16
        YLeaf lsa_sync_state; //type: OspfLsaSyncStateEnum



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType : public Entity
{
    public:
        NssalsaType();
        ~NssalsaType();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf metric_type; //type: Ospfv3DefaultMetricEnum
        YLeaf tos_cost; //type: uint32
        YLeaf is_forwarding_address_set; //type: boolean
        YLeaf forwarding_address; //type: string
        YLeaf external_tag; //type: uint32
        YLeaf priority; //type: PrefixPriorityEnum

        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaHeader> lsa_header;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second_table_index; //type: uint8
        YLeaf minute_table_index; //type: uint8
        YLeaf free_time; //type: uint32
        YLeaf is_deleted; //type: boolean
        YLeaf is_routing_bit; //type: boolean
        YLeaf is_advertising_router_reachable; //type: boolean
        YLeaf is_no_delete; //type: boolean
        YLeaf is_neighbor_exchange; //type: boolean
        YLeaf is_routing_table; //type: boolean
        YLeaf is_acknowledged; //type: boolean
        YLeaf is_maximum_aged; //type: boolean
        YLeaf is_partial_spf; //type: boolean
        YLeaf is_flood_pending; //type: boolean
        YLeaf rate_limit; //type: boolean
        YLeaf is_nsr_ack_pending; //type: boolean
        YLeaf nsr_flood_required; //type: boolean
        YLeaf lsa_flood_required_post_fail_over; //type: boolean
        YLeaf lsa_length; //type: uint16
        YLeaf lsa_sync_state; //type: OspfLsaSyncStateEnum



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType : public Entity
{
    public:
        LinkLsaType();
        ~LinkLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf is_virtual_link; //type: boolean
        YLeaf virtual_link_id; //type: uint32
        YLeaf is_sham_link; //type: boolean
        YLeaf sham_link_id; //type: uint32
        YLeaf lsa_link_local; //type: string
        YLeaf router_priority; //type: uint8

        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaDetail
        class Prefix; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::Prefix

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaHeader> lsa_header;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::Prefix> > prefix;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second_table_index; //type: uint8
        YLeaf minute_table_index; //type: uint8
        YLeaf free_time; //type: uint32
        YLeaf is_deleted; //type: boolean
        YLeaf is_routing_bit; //type: boolean
        YLeaf is_advertising_router_reachable; //type: boolean
        YLeaf is_no_delete; //type: boolean
        YLeaf is_neighbor_exchange; //type: boolean
        YLeaf is_routing_table; //type: boolean
        YLeaf is_acknowledged; //type: boolean
        YLeaf is_maximum_aged; //type: boolean
        YLeaf is_partial_spf; //type: boolean
        YLeaf is_flood_pending; //type: boolean
        YLeaf rate_limit; //type: boolean
        YLeaf is_nsr_ack_pending; //type: boolean
        YLeaf nsr_flood_required; //type: boolean
        YLeaf lsa_flood_required_post_fail_over; //type: boolean
        YLeaf lsa_length; //type: uint16
        YLeaf lsa_sync_state; //type: OspfLsaSyncStateEnum



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::Prefix : public Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf ospfv3_prefix_length; //type: uint8
        YLeaf ospfv3_prefix_options; //type: uint8
        YLeaf ospfv3_prefix_metric; //type: uint16
        YLeaf priority; //type: PrefixPriorityEnum



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::Prefix


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType : public Entity
{
    public:
        IntraAreaPrefixLsaType();
        ~IntraAreaPrefixLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf reference_type; //type: Ospfv3Lsa1Enum
        YLeaf reference_lsa_id; //type: uint32
        YLeaf reference_advertised_router; //type: string

        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail
        class Prefix; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader> lsa_header;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix> > prefix;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second_table_index; //type: uint8
        YLeaf minute_table_index; //type: uint8
        YLeaf free_time; //type: uint32
        YLeaf is_deleted; //type: boolean
        YLeaf is_routing_bit; //type: boolean
        YLeaf is_advertising_router_reachable; //type: boolean
        YLeaf is_no_delete; //type: boolean
        YLeaf is_neighbor_exchange; //type: boolean
        YLeaf is_routing_table; //type: boolean
        YLeaf is_acknowledged; //type: boolean
        YLeaf is_maximum_aged; //type: boolean
        YLeaf is_partial_spf; //type: boolean
        YLeaf is_flood_pending; //type: boolean
        YLeaf rate_limit; //type: boolean
        YLeaf is_nsr_ack_pending; //type: boolean
        YLeaf nsr_flood_required; //type: boolean
        YLeaf lsa_flood_required_post_fail_over; //type: boolean
        YLeaf lsa_length; //type: uint16
        YLeaf lsa_sync_state; //type: OspfLsaSyncStateEnum



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix : public Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf ospfv3_prefix_length; //type: uint8
        YLeaf ospfv3_prefix_options; //type: uint8
        YLeaf ospfv3_prefix_metric; //type: uint16
        YLeaf priority; //type: PrefixPriorityEnum



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa : public Entity
{
    public:
        GraceLsa();
        ~GraceLsa();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf grace_period; //type: uint32
        YLeaf grace_reason; //type: Ospfv3GracefulRestartReasonEnum

        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaHeader> lsa_header;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second_table_index; //type: uint8
        YLeaf minute_table_index; //type: uint8
        YLeaf free_time; //type: uint32
        YLeaf is_deleted; //type: boolean
        YLeaf is_routing_bit; //type: boolean
        YLeaf is_advertising_router_reachable; //type: boolean
        YLeaf is_no_delete; //type: boolean
        YLeaf is_neighbor_exchange; //type: boolean
        YLeaf is_routing_table; //type: boolean
        YLeaf is_acknowledged; //type: boolean
        YLeaf is_maximum_aged; //type: boolean
        YLeaf is_partial_spf; //type: boolean
        YLeaf is_flood_pending; //type: boolean
        YLeaf rate_limit; //type: boolean
        YLeaf is_nsr_ack_pending; //type: boolean
        YLeaf nsr_flood_required; //type: boolean
        YLeaf lsa_flood_required_post_fail_over; //type: boolean
        YLeaf lsa_length; //type: uint16
        YLeaf lsa_sync_state; //type: OspfLsaSyncStateEnum



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType : public Entity
{
    public:
        UnknownLinkLsaType();
        ~UnknownLinkLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf is_virtual_link; //type: boolean
        YLeaf virtual_link_id; //type: uint32
        YLeaf is_sham_link; //type: boolean
        YLeaf sham_link_id; //type: uint32

        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader> lsa_header;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second_table_index; //type: uint8
        YLeaf minute_table_index; //type: uint8
        YLeaf free_time; //type: uint32
        YLeaf is_deleted; //type: boolean
        YLeaf is_routing_bit; //type: boolean
        YLeaf is_advertising_router_reachable; //type: boolean
        YLeaf is_no_delete; //type: boolean
        YLeaf is_neighbor_exchange; //type: boolean
        YLeaf is_routing_table; //type: boolean
        YLeaf is_acknowledged; //type: boolean
        YLeaf is_maximum_aged; //type: boolean
        YLeaf is_partial_spf; //type: boolean
        YLeaf is_flood_pending; //type: boolean
        YLeaf rate_limit; //type: boolean
        YLeaf is_nsr_ack_pending; //type: boolean
        YLeaf nsr_flood_required; //type: boolean
        YLeaf lsa_flood_required_post_fail_over; //type: boolean
        YLeaf lsa_length; //type: uint16
        YLeaf lsa_sync_state; //type: OspfLsaSyncStateEnum



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType : public Entity
{
    public:
        UnknownAreaLsaType();
        ~UnknownAreaLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf is_virtual_link; //type: boolean
        YLeaf virtual_link_id; //type: uint32
        YLeaf is_sham_link; //type: boolean
        YLeaf sham_link_id; //type: uint32

        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader> lsa_header;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second_table_index; //type: uint8
        YLeaf minute_table_index; //type: uint8
        YLeaf free_time; //type: uint32
        YLeaf is_deleted; //type: boolean
        YLeaf is_routing_bit; //type: boolean
        YLeaf is_advertising_router_reachable; //type: boolean
        YLeaf is_no_delete; //type: boolean
        YLeaf is_neighbor_exchange; //type: boolean
        YLeaf is_routing_table; //type: boolean
        YLeaf is_acknowledged; //type: boolean
        YLeaf is_maximum_aged; //type: boolean
        YLeaf is_partial_spf; //type: boolean
        YLeaf is_flood_pending; //type: boolean
        YLeaf rate_limit; //type: boolean
        YLeaf is_nsr_ack_pending; //type: boolean
        YLeaf nsr_flood_required; //type: boolean
        YLeaf lsa_flood_required_post_fail_over; //type: boolean
        YLeaf lsa_length; //type: uint16
        YLeaf lsa_sync_state; //type: OspfLsaSyncStateEnum



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType : public Entity
{
    public:
        UnknownAslsaType();
        ~UnknownAslsaType();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf is_virtual_link; //type: boolean
        YLeaf virtual_link_id; //type: uint32
        YLeaf is_sham_link; //type: boolean
        YLeaf sham_link_id; //type: uint32

        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader> lsa_header;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second_table_index; //type: uint8
        YLeaf minute_table_index; //type: uint8
        YLeaf free_time; //type: uint32
        YLeaf is_deleted; //type: boolean
        YLeaf is_routing_bit; //type: boolean
        YLeaf is_advertising_router_reachable; //type: boolean
        YLeaf is_no_delete; //type: boolean
        YLeaf is_neighbor_exchange; //type: boolean
        YLeaf is_routing_table; //type: boolean
        YLeaf is_acknowledged; //type: boolean
        YLeaf is_maximum_aged; //type: boolean
        YLeaf is_partial_spf; //type: boolean
        YLeaf is_flood_pending; //type: boolean
        YLeaf rate_limit; //type: boolean
        YLeaf is_nsr_ack_pending; //type: boolean
        YLeaf nsr_flood_required; //type: boolean
        YLeaf lsa_flood_required_post_fail_over; //type: boolean
        YLeaf lsa_length; //type: uint16
        YLeaf lsa_sync_state; //type: OspfLsaSyncStateEnum



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType : public Entity
{
    public:
        UnknownLsaType();
        ~UnknownLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf is_virtual_link; //type: boolean
        YLeaf virtual_link_id; //type: uint32
        YLeaf is_sham_link; //type: boolean
        YLeaf sham_link_id; //type: uint32

        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader> lsa_header;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second_table_index; //type: uint8
        YLeaf minute_table_index; //type: uint8
        YLeaf free_time; //type: uint32
        YLeaf is_deleted; //type: boolean
        YLeaf is_routing_bit; //type: boolean
        YLeaf is_advertising_router_reachable; //type: boolean
        YLeaf is_no_delete; //type: boolean
        YLeaf is_neighbor_exchange; //type: boolean
        YLeaf is_routing_table; //type: boolean
        YLeaf is_acknowledged; //type: boolean
        YLeaf is_maximum_aged; //type: boolean
        YLeaf is_partial_spf; //type: boolean
        YLeaf is_flood_pending; //type: boolean
        YLeaf rate_limit; //type: boolean
        YLeaf is_nsr_ack_pending; //type: boolean
        YLeaf nsr_flood_required; //type: boolean
        YLeaf lsa_flood_required_post_fail_over; //type: boolean
        YLeaf lsa_length; //type: uint16
        YLeaf lsa_sync_state; //type: OspfLsaSyncStateEnum



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable : public Entity
{
    public:
        LsaInternalTable();
        ~LsaInternalTable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Lsa; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa> > lsa;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa : public Entity
{
    public:
        Lsa();
        ~Lsa();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf area_id; //type: int32
        YLeaf ls_type; //type: Ospfv3LsaEnum
        YLeaf advertising_router; //type: string
        YLeaf ls_id; //type: int32
        YLeaf interface_name; //type: string

        class LsaInfo; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo> lsa_info;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo : public Entity
{
    public:
        LsaInfo();
        ~LsaInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_info_type; //type: Ospfv3LsaInfoTypesEnum

        class LsaSummaryInfo; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo
        class RouterLsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType
        class NetworkLsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType
        class InterAreaPrefixLsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType
        class InterAreaRouterLsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType
        class ExternalLsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType
        class NssalsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType
        class LinkLsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType
        class IntraAreaPrefixLsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType
        class GraceLsa; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa
        class UnknownLinkLsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType
        class UnknownAreaLsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType
        class UnknownAslsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType
        class UnknownLsaType; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType> external_lsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa> grace_lsa;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType> inter_area_prefix_lsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType> inter_area_router_lsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType> intra_area_prefix_lsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType> link_lsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo> lsa_summary_info;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType> network_lsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType> nssalsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType> router_lsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType> unknown_area_lsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType> unknown_aslsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType> unknown_link_lsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType> unknown_lsa_type;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo : public Entity
{
    public:
        LsaSummaryInfo();
        ~LsaSummaryInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf links; //type: uint16
        YLeaf router_la_bits; //type: uint8
        YLeaf reference_type; //type: uint16
        YLeaf reference_lsa_id; //type: uint32
        YLeaf lsa_router_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf interface_name; //type: string
        YLeaf is_virtual_link; //type: boolean
        YLeaf virtual_link_id; //type: uint32
        YLeaf is_sham_link; //type: boolean
        YLeaf sham_link_id; //type: uint32

        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader> lsa_header;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second_table_index; //type: uint8
        YLeaf minute_table_index; //type: uint8
        YLeaf free_time; //type: uint32
        YLeaf is_deleted; //type: boolean
        YLeaf is_routing_bit; //type: boolean
        YLeaf is_advertising_router_reachable; //type: boolean
        YLeaf is_no_delete; //type: boolean
        YLeaf is_neighbor_exchange; //type: boolean
        YLeaf is_routing_table; //type: boolean
        YLeaf is_acknowledged; //type: boolean
        YLeaf is_maximum_aged; //type: boolean
        YLeaf is_partial_spf; //type: boolean
        YLeaf is_flood_pending; //type: boolean
        YLeaf rate_limit; //type: boolean
        YLeaf is_nsr_ack_pending; //type: boolean
        YLeaf nsr_flood_required; //type: boolean
        YLeaf lsa_flood_required_post_fail_over; //type: boolean
        YLeaf lsa_length; //type: uint16
        YLeaf lsa_sync_state; //type: OspfLsaSyncStateEnum



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType : public Entity
{
    public:
        RouterLsaType();
        ~RouterLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_la_bits; //type: uint8

        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail
        class RpfPath; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RpfPath
        class Link; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::Link

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::Link> > link;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader> lsa_header;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RpfPath> rpf_path;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second_table_index; //type: uint8
        YLeaf minute_table_index; //type: uint8
        YLeaf free_time; //type: uint32
        YLeaf is_deleted; //type: boolean
        YLeaf is_routing_bit; //type: boolean
        YLeaf is_advertising_router_reachable; //type: boolean
        YLeaf is_no_delete; //type: boolean
        YLeaf is_neighbor_exchange; //type: boolean
        YLeaf is_routing_table; //type: boolean
        YLeaf is_acknowledged; //type: boolean
        YLeaf is_maximum_aged; //type: boolean
        YLeaf is_partial_spf; //type: boolean
        YLeaf is_flood_pending; //type: boolean
        YLeaf rate_limit; //type: boolean
        YLeaf is_nsr_ack_pending; //type: boolean
        YLeaf nsr_flood_required; //type: boolean
        YLeaf lsa_flood_required_post_fail_over; //type: boolean
        YLeaf lsa_length; //type: uint16
        YLeaf lsa_sync_state; //type: OspfLsaSyncStateEnum



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RpfPath : public Entity
{
    public:
        RpfPath();
        ~RpfPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rpf_multicast_next_hop; //type: uint32
        YLeaf interface_name; //type: string



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RpfPath


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::Link : public Entity
{
    public:
        Link();
        ~Link();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf link_type; //type: Ospfv3LinkEnum
        YLeaf link_metric; //type: uint16
        YLeaf link_interface_id; //type: uint32
        YLeaf link_neighbor_interface_id; //type: uint32
        YLeaf link_neighbor_router_id; //type: uint32



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::Link


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType : public Entity
{
    public:
        NetworkLsaType();
        ~NetworkLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList neighbor_router; //type: list of  string

        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader> lsa_header;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second_table_index; //type: uint8
        YLeaf minute_table_index; //type: uint8
        YLeaf free_time; //type: uint32
        YLeaf is_deleted; //type: boolean
        YLeaf is_routing_bit; //type: boolean
        YLeaf is_advertising_router_reachable; //type: boolean
        YLeaf is_no_delete; //type: boolean
        YLeaf is_neighbor_exchange; //type: boolean
        YLeaf is_routing_table; //type: boolean
        YLeaf is_acknowledged; //type: boolean
        YLeaf is_maximum_aged; //type: boolean
        YLeaf is_partial_spf; //type: boolean
        YLeaf is_flood_pending; //type: boolean
        YLeaf rate_limit; //type: boolean
        YLeaf is_nsr_ack_pending; //type: boolean
        YLeaf nsr_flood_required; //type: boolean
        YLeaf lsa_flood_required_post_fail_over; //type: boolean
        YLeaf lsa_length; //type: uint16
        YLeaf lsa_sync_state; //type: OspfLsaSyncStateEnum



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType : public Entity
{
    public:
        InterAreaPrefixLsaType();
        ~InterAreaPrefixLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf priority; //type: PrefixPriorityEnum

        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader> lsa_header;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second_table_index; //type: uint8
        YLeaf minute_table_index; //type: uint8
        YLeaf free_time; //type: uint32
        YLeaf is_deleted; //type: boolean
        YLeaf is_routing_bit; //type: boolean
        YLeaf is_advertising_router_reachable; //type: boolean
        YLeaf is_no_delete; //type: boolean
        YLeaf is_neighbor_exchange; //type: boolean
        YLeaf is_routing_table; //type: boolean
        YLeaf is_acknowledged; //type: boolean
        YLeaf is_maximum_aged; //type: boolean
        YLeaf is_partial_spf; //type: boolean
        YLeaf is_flood_pending; //type: boolean
        YLeaf rate_limit; //type: boolean
        YLeaf is_nsr_ack_pending; //type: boolean
        YLeaf nsr_flood_required; //type: boolean
        YLeaf lsa_flood_required_post_fail_over; //type: boolean
        YLeaf lsa_length; //type: uint16
        YLeaf lsa_sync_state; //type: OspfLsaSyncStateEnum



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType : public Entity
{
    public:
        InterAreaRouterLsaType();
        ~InterAreaRouterLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_router_id; //type: uint32

        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader> lsa_header;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second_table_index; //type: uint8
        YLeaf minute_table_index; //type: uint8
        YLeaf free_time; //type: uint32
        YLeaf is_deleted; //type: boolean
        YLeaf is_routing_bit; //type: boolean
        YLeaf is_advertising_router_reachable; //type: boolean
        YLeaf is_no_delete; //type: boolean
        YLeaf is_neighbor_exchange; //type: boolean
        YLeaf is_routing_table; //type: boolean
        YLeaf is_acknowledged; //type: boolean
        YLeaf is_maximum_aged; //type: boolean
        YLeaf is_partial_spf; //type: boolean
        YLeaf is_flood_pending; //type: boolean
        YLeaf rate_limit; //type: boolean
        YLeaf is_nsr_ack_pending; //type: boolean
        YLeaf nsr_flood_required; //type: boolean
        YLeaf lsa_flood_required_post_fail_over; //type: boolean
        YLeaf lsa_length; //type: uint16
        YLeaf lsa_sync_state; //type: OspfLsaSyncStateEnum



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType : public Entity
{
    public:
        ExternalLsaType();
        ~ExternalLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf metric_type; //type: Ospfv3DefaultMetricEnum
        YLeaf tos_cost; //type: uint32
        YLeaf is_forwarding_address_set; //type: boolean
        YLeaf forwarding_address; //type: string
        YLeaf external_tag; //type: uint32
        YLeaf priority; //type: PrefixPriorityEnum

        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader> lsa_header;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second_table_index; //type: uint8
        YLeaf minute_table_index; //type: uint8
        YLeaf free_time; //type: uint32
        YLeaf is_deleted; //type: boolean
        YLeaf is_routing_bit; //type: boolean
        YLeaf is_advertising_router_reachable; //type: boolean
        YLeaf is_no_delete; //type: boolean
        YLeaf is_neighbor_exchange; //type: boolean
        YLeaf is_routing_table; //type: boolean
        YLeaf is_acknowledged; //type: boolean
        YLeaf is_maximum_aged; //type: boolean
        YLeaf is_partial_spf; //type: boolean
        YLeaf is_flood_pending; //type: boolean
        YLeaf rate_limit; //type: boolean
        YLeaf is_nsr_ack_pending; //type: boolean
        YLeaf nsr_flood_required; //type: boolean
        YLeaf lsa_flood_required_post_fail_over; //type: boolean
        YLeaf lsa_length; //type: uint16
        YLeaf lsa_sync_state; //type: OspfLsaSyncStateEnum



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType : public Entity
{
    public:
        NssalsaType();
        ~NssalsaType();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf metric_type; //type: Ospfv3DefaultMetricEnum
        YLeaf tos_cost; //type: uint32
        YLeaf is_forwarding_address_set; //type: boolean
        YLeaf forwarding_address; //type: string
        YLeaf external_tag; //type: uint32
        YLeaf priority; //type: PrefixPriorityEnum

        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaHeader> lsa_header;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second_table_index; //type: uint8
        YLeaf minute_table_index; //type: uint8
        YLeaf free_time; //type: uint32
        YLeaf is_deleted; //type: boolean
        YLeaf is_routing_bit; //type: boolean
        YLeaf is_advertising_router_reachable; //type: boolean
        YLeaf is_no_delete; //type: boolean
        YLeaf is_neighbor_exchange; //type: boolean
        YLeaf is_routing_table; //type: boolean
        YLeaf is_acknowledged; //type: boolean
        YLeaf is_maximum_aged; //type: boolean
        YLeaf is_partial_spf; //type: boolean
        YLeaf is_flood_pending; //type: boolean
        YLeaf rate_limit; //type: boolean
        YLeaf is_nsr_ack_pending; //type: boolean
        YLeaf nsr_flood_required; //type: boolean
        YLeaf lsa_flood_required_post_fail_over; //type: boolean
        YLeaf lsa_length; //type: uint16
        YLeaf lsa_sync_state; //type: OspfLsaSyncStateEnum



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType : public Entity
{
    public:
        LinkLsaType();
        ~LinkLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf is_virtual_link; //type: boolean
        YLeaf virtual_link_id; //type: uint32
        YLeaf is_sham_link; //type: boolean
        YLeaf sham_link_id; //type: uint32
        YLeaf lsa_link_local; //type: string
        YLeaf router_priority; //type: uint8

        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaDetail
        class Prefix; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::Prefix

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaHeader> lsa_header;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::Prefix> > prefix;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second_table_index; //type: uint8
        YLeaf minute_table_index; //type: uint8
        YLeaf free_time; //type: uint32
        YLeaf is_deleted; //type: boolean
        YLeaf is_routing_bit; //type: boolean
        YLeaf is_advertising_router_reachable; //type: boolean
        YLeaf is_no_delete; //type: boolean
        YLeaf is_neighbor_exchange; //type: boolean
        YLeaf is_routing_table; //type: boolean
        YLeaf is_acknowledged; //type: boolean
        YLeaf is_maximum_aged; //type: boolean
        YLeaf is_partial_spf; //type: boolean
        YLeaf is_flood_pending; //type: boolean
        YLeaf rate_limit; //type: boolean
        YLeaf is_nsr_ack_pending; //type: boolean
        YLeaf nsr_flood_required; //type: boolean
        YLeaf lsa_flood_required_post_fail_over; //type: boolean
        YLeaf lsa_length; //type: uint16
        YLeaf lsa_sync_state; //type: OspfLsaSyncStateEnum



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::Prefix : public Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf ospfv3_prefix_length; //type: uint8
        YLeaf ospfv3_prefix_options; //type: uint8
        YLeaf ospfv3_prefix_metric; //type: uint16
        YLeaf priority; //type: PrefixPriorityEnum



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::Prefix


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType : public Entity
{
    public:
        IntraAreaPrefixLsaType();
        ~IntraAreaPrefixLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf reference_type; //type: Ospfv3Lsa1Enum
        YLeaf reference_lsa_id; //type: uint32
        YLeaf reference_advertised_router; //type: string

        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail
        class Prefix; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader> lsa_header;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix> > prefix;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second_table_index; //type: uint8
        YLeaf minute_table_index; //type: uint8
        YLeaf free_time; //type: uint32
        YLeaf is_deleted; //type: boolean
        YLeaf is_routing_bit; //type: boolean
        YLeaf is_advertising_router_reachable; //type: boolean
        YLeaf is_no_delete; //type: boolean
        YLeaf is_neighbor_exchange; //type: boolean
        YLeaf is_routing_table; //type: boolean
        YLeaf is_acknowledged; //type: boolean
        YLeaf is_maximum_aged; //type: boolean
        YLeaf is_partial_spf; //type: boolean
        YLeaf is_flood_pending; //type: boolean
        YLeaf rate_limit; //type: boolean
        YLeaf is_nsr_ack_pending; //type: boolean
        YLeaf nsr_flood_required; //type: boolean
        YLeaf lsa_flood_required_post_fail_over; //type: boolean
        YLeaf lsa_length; //type: uint16
        YLeaf lsa_sync_state; //type: OspfLsaSyncStateEnum



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix : public Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf ospfv3_prefix_length; //type: uint8
        YLeaf ospfv3_prefix_options; //type: uint8
        YLeaf ospfv3_prefix_metric; //type: uint16
        YLeaf priority; //type: PrefixPriorityEnum



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa : public Entity
{
    public:
        GraceLsa();
        ~GraceLsa();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf grace_period; //type: uint32
        YLeaf grace_reason; //type: Ospfv3GracefulRestartReasonEnum

        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaHeader> lsa_header;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second_table_index; //type: uint8
        YLeaf minute_table_index; //type: uint8
        YLeaf free_time; //type: uint32
        YLeaf is_deleted; //type: boolean
        YLeaf is_routing_bit; //type: boolean
        YLeaf is_advertising_router_reachable; //type: boolean
        YLeaf is_no_delete; //type: boolean
        YLeaf is_neighbor_exchange; //type: boolean
        YLeaf is_routing_table; //type: boolean
        YLeaf is_acknowledged; //type: boolean
        YLeaf is_maximum_aged; //type: boolean
        YLeaf is_partial_spf; //type: boolean
        YLeaf is_flood_pending; //type: boolean
        YLeaf rate_limit; //type: boolean
        YLeaf is_nsr_ack_pending; //type: boolean
        YLeaf nsr_flood_required; //type: boolean
        YLeaf lsa_flood_required_post_fail_over; //type: boolean
        YLeaf lsa_length; //type: uint16
        YLeaf lsa_sync_state; //type: OspfLsaSyncStateEnum



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType : public Entity
{
    public:
        UnknownLinkLsaType();
        ~UnknownLinkLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf is_virtual_link; //type: boolean
        YLeaf virtual_link_id; //type: uint32
        YLeaf is_sham_link; //type: boolean
        YLeaf sham_link_id; //type: uint32

        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader> lsa_header;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second_table_index; //type: uint8
        YLeaf minute_table_index; //type: uint8
        YLeaf free_time; //type: uint32
        YLeaf is_deleted; //type: boolean
        YLeaf is_routing_bit; //type: boolean
        YLeaf is_advertising_router_reachable; //type: boolean
        YLeaf is_no_delete; //type: boolean
        YLeaf is_neighbor_exchange; //type: boolean
        YLeaf is_routing_table; //type: boolean
        YLeaf is_acknowledged; //type: boolean
        YLeaf is_maximum_aged; //type: boolean
        YLeaf is_partial_spf; //type: boolean
        YLeaf is_flood_pending; //type: boolean
        YLeaf rate_limit; //type: boolean
        YLeaf is_nsr_ack_pending; //type: boolean
        YLeaf nsr_flood_required; //type: boolean
        YLeaf lsa_flood_required_post_fail_over; //type: boolean
        YLeaf lsa_length; //type: uint16
        YLeaf lsa_sync_state; //type: OspfLsaSyncStateEnum



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType : public Entity
{
    public:
        UnknownAreaLsaType();
        ~UnknownAreaLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf is_virtual_link; //type: boolean
        YLeaf virtual_link_id; //type: uint32
        YLeaf is_sham_link; //type: boolean
        YLeaf sham_link_id; //type: uint32

        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader> lsa_header;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second_table_index; //type: uint8
        YLeaf minute_table_index; //type: uint8
        YLeaf free_time; //type: uint32
        YLeaf is_deleted; //type: boolean
        YLeaf is_routing_bit; //type: boolean
        YLeaf is_advertising_router_reachable; //type: boolean
        YLeaf is_no_delete; //type: boolean
        YLeaf is_neighbor_exchange; //type: boolean
        YLeaf is_routing_table; //type: boolean
        YLeaf is_acknowledged; //type: boolean
        YLeaf is_maximum_aged; //type: boolean
        YLeaf is_partial_spf; //type: boolean
        YLeaf is_flood_pending; //type: boolean
        YLeaf rate_limit; //type: boolean
        YLeaf is_nsr_ack_pending; //type: boolean
        YLeaf nsr_flood_required; //type: boolean
        YLeaf lsa_flood_required_post_fail_over; //type: boolean
        YLeaf lsa_length; //type: uint16
        YLeaf lsa_sync_state; //type: OspfLsaSyncStateEnum



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType : public Entity
{
    public:
        UnknownAslsaType();
        ~UnknownAslsaType();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf is_virtual_link; //type: boolean
        YLeaf virtual_link_id; //type: uint32
        YLeaf is_sham_link; //type: boolean
        YLeaf sham_link_id; //type: uint32

        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader> lsa_header;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second_table_index; //type: uint8
        YLeaf minute_table_index; //type: uint8
        YLeaf free_time; //type: uint32
        YLeaf is_deleted; //type: boolean
        YLeaf is_routing_bit; //type: boolean
        YLeaf is_advertising_router_reachable; //type: boolean
        YLeaf is_no_delete; //type: boolean
        YLeaf is_neighbor_exchange; //type: boolean
        YLeaf is_routing_table; //type: boolean
        YLeaf is_acknowledged; //type: boolean
        YLeaf is_maximum_aged; //type: boolean
        YLeaf is_partial_spf; //type: boolean
        YLeaf is_flood_pending; //type: boolean
        YLeaf rate_limit; //type: boolean
        YLeaf is_nsr_ack_pending; //type: boolean
        YLeaf nsr_flood_required; //type: boolean
        YLeaf lsa_flood_required_post_fail_over; //type: boolean
        YLeaf lsa_length; //type: uint16
        YLeaf lsa_sync_state; //type: OspfLsaSyncStateEnum



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType : public Entity
{
    public:
        UnknownLsaType();
        ~UnknownLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf is_virtual_link; //type: boolean
        YLeaf virtual_link_id; //type: uint32
        YLeaf is_sham_link; //type: boolean
        YLeaf sham_link_id; //type: uint32

        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader> lsa_header;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second_table_index; //type: uint8
        YLeaf minute_table_index; //type: uint8
        YLeaf free_time; //type: uint32
        YLeaf is_deleted; //type: boolean
        YLeaf is_routing_bit; //type: boolean
        YLeaf is_advertising_router_reachable; //type: boolean
        YLeaf is_no_delete; //type: boolean
        YLeaf is_neighbor_exchange; //type: boolean
        YLeaf is_routing_table; //type: boolean
        YLeaf is_acknowledged; //type: boolean
        YLeaf is_maximum_aged; //type: boolean
        YLeaf is_partial_spf; //type: boolean
        YLeaf is_flood_pending; //type: boolean
        YLeaf rate_limit; //type: boolean
        YLeaf is_nsr_ack_pending; //type: boolean
        YLeaf nsr_flood_required; //type: boolean
        YLeaf lsa_flood_required_post_fail_over; //type: boolean
        YLeaf lsa_length; //type: uint16
        YLeaf lsa_sync_state; //type: OspfLsaSyncStateEnum



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable : public Entity
{
    public:
        DatabaseSummaryTable();
        ~DatabaseSummaryTable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class DatabaseSummary; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary> database_summary;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary : public Entity
{
    public:
        DatabaseSummary();
        ~DatabaseSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf database_router_id; //type: string
        YLeaf is_opaque_database_capable; //type: boolean

        class DatabaseCounters; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters
        class AreaDatabase; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase> > area_database;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters> database_counters;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters : public Entity
{
    public:
        DatabaseCounters();
        ~DatabaseCounters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList lsa; //type: list of  uint32
        YLeafList deleted_lsa; //type: list of  uint32
        YLeafList max_age_lsa; //type: list of  uint32
        YLeafList lsa_checksum; //type: list of  uint32



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase : public Entity
{
    public:
        AreaDatabase();
        ~AreaDatabase();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_area_id; //type: string

        class AreaDatabaseSummary; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary> area_database_summary;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary : public Entity
{
    public:
        AreaDatabaseSummary();
        ~AreaDatabaseSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList lsa; //type: list of  uint32
        YLeafList deleted_lsa; //type: list of  uint32
        YLeafList max_age_lsa; //type: list of  uint32
        YLeafList lsa_checksum; //type: list of  uint32



}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary


class Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes : public Entity
{
    public:
        InternalRoutes();
        ~InternalRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InternalRoute; //type: Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute> > internal_route;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes


class Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute : public Entity
{
    public:
        InternalRoute();
        ~InternalRoute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf route_area_id; //type: uint32

        class RouteTopology; //type: Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RouteTopology
        class RouteSource; //type: Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RouteSource
        class RoutePath; //type: Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RoutePath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RoutePath> > route_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RouteSource> > route_source;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RouteTopology> route_topology;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute


class Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RouteTopology : public Entity
{
    public:
        RouteTopology();
        ~RouteTopology();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_id; //type: string
        YLeaf route_distance; //type: uint32
        YLeaf route_cost; //type: uint32
        YLeaf route_type; //type: uint32



}; // Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RouteTopology


class Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RouteSource : public Entity
{
    public:
        RouteSource();
        ~RouteSource();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_source_adversting_router; //type: string
        YLeaf route_source_id; //type: string
        YLeaf route_source_lsa_type; //type: uint32



}; // Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RouteSource


class Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RoutePath : public Entity
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


        YLeaf interface_name; //type: string
        YLeaf route_path_next_hop; //type: string
        YLeaf route_path_id; //type: uint16

        class RouteBackupPath; //type: Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RoutePath::RouteBackupPath

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RoutePath::RouteBackupPath> route_backup_path;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RoutePath


class Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RoutePath::RouteBackupPath : public Entity
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



}; // Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RoutePath::RouteBackupPath


class Ospfv3::Processes::Process::Vrfs::Vrf::ProtocolAreas : public Entity
{
    public:
        ProtocolAreas();
        ~ProtocolAreas();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ProtocolArea; //type: Ospfv3::Processes::Process::Vrfs::Vrf::ProtocolAreas::ProtocolArea

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::ProtocolAreas::ProtocolArea> > protocol_area;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::ProtocolAreas


class Ospfv3::Processes::Process::Vrfs::Vrf::ProtocolAreas::ProtocolArea : public Entity
{
    public:
        ProtocolArea();
        ~ProtocolArea();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf area_id; //type: string
        YLeaf protocol_area_id; //type: string
        YLeaf distribute_list_in; //type: string

        class ProtocolInterface; //type: Ospfv3::Processes::Process::Vrfs::Vrf::ProtocolAreas::ProtocolArea::ProtocolInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::ProtocolAreas::ProtocolArea::ProtocolInterface> > protocol_interface;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::ProtocolAreas::ProtocolArea


class Ospfv3::Processes::Process::Vrfs::Vrf::ProtocolAreas::ProtocolArea::ProtocolInterface : public Entity
{
    public:
        ProtocolInterface();
        ~ProtocolInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf distribute_list_in; //type: string



}; // Ospfv3::Processes::Process::Vrfs::Vrf::ProtocolAreas::ProtocolArea::ProtocolInterface


class Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes : public Entity
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



        class ConnectedRoute; //type: Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute> > connected_route;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes


class Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute : public Entity
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
        YLeaf prefix_length; //type: uint8

        class RouteTopology; //type: Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::RouteTopology
        class RoutePath; //type: Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::RoutePath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::RoutePath> > route_path;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::RouteTopology> route_topology;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute


class Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::RouteTopology : public Entity
{
    public:
        RouteTopology();
        ~RouteTopology();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_id; //type: string
        YLeaf route_distance; //type: uint32
        YLeaf route_cost; //type: uint32
        YLeaf route_type; //type: uint32



}; // Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::RouteTopology


class Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::RoutePath : public Entity
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


        YLeaf interface_name; //type: string
        YLeaf route_path_next_hop; //type: string
        YLeaf route_path_id; //type: uint16

        class RouteBackupPath; //type: Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::RoutePath::RouteBackupPath

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::RoutePath::RouteBackupPath> route_backup_path;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::RoutePath


class Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::RoutePath::RouteBackupPath : public Entity
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



}; // Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::RoutePath::RouteBackupPath


class Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics : public Entity
{
    public:
        VrfStatistics();
        ~VrfStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ProtocolStats; //type: Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::ProtocolStats
        class SpfStats; //type: Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats
        class RawioStats; //type: Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::RawioStats
        class PrefixPriorityStats; //type: Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::PrefixPriorityStats
        class VrfRibBatchStats; //type: Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::VrfRibBatchStats

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::PrefixPriorityStats> prefix_priority_stats;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::ProtocolStats> protocol_stats;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::RawioStats> rawio_stats;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats> spf_stats;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::VrfRibBatchStats> vrf_rib_batch_stats;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics


class Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::ProtocolStats : public Entity
{
    public:
        ProtocolStats();
        ~ProtocolStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ProtocolStat; //type: Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::ProtocolStats::ProtocolStat

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::ProtocolStats::ProtocolStat> > protocol_stat;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::ProtocolStats


class Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::ProtocolStats::ProtocolStat : public Entity
{
    public:
        ProtocolStat();
        ~ProtocolStat();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf total_in_packets; //type: uint64
        YLeaf hello_in_packets; //type: uint64
        YLeaf dbdes_in_packets; //type: uint64
        YLeaf dbdes_in_ls_as; //type: uint64
        YLeaf ls_req_in_packets; //type: uint64
        YLeaf ls_req_in_ls_as; //type: uint64
        YLeaf ls_upd_in_packets; //type: uint64
        YLeaf ls_upd_in_ignored; //type: uint64
        YLeaf ls_upd_in_ls_as; //type: uint64
        YLeaf ls_ack_in_packets; //type: uint64
        YLeaf ls_ack_in_ls_as; //type: uint64
        YLeaf total_out_packets; //type: uint64
        YLeaf hello_out_packets; //type: uint64
        YLeaf dbdes_out_packets; //type: uint64
        YLeaf dbdes_out_ls_as; //type: uint64
        YLeaf ls_req_out_packets; //type: uint64
        YLeaf ls_req_out_ls_as; //type: uint64
        YLeaf ls_upd_out_packets; //type: uint64
        YLeaf ls_upd_out_ls_as; //type: uint64
        YLeaf ls_ack_out_packets; //type: uint64
        YLeaf ls_ack_out_ls_as; //type: uint64
        YLeaf dropped_in_gs; //type: uint64
        YLeaf checksum_err; //type: uint64



}; // Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::ProtocolStats::ProtocolStat


class Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats : public Entity
{
    public:
        SpfStats();
        ~SpfStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SpfHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfHeader
        class SpfRuntime; //type: Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfHeader> spf_header;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime> > spf_runtime;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats


class Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfHeader : public Entity
{
    public:
        SpfHeader();
        ~SpfHeader();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf header_router_id; //type: string
        YLeaf header_sp_fs; //type: uint32

        class AreaSummary; //type: Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfHeader::AreaSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfHeader::AreaSummary> > area_summary;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfHeader::AreaSummary : public Entity
{
    public:
        AreaSummary();
        ~AreaSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf area_id; //type: uint32
        YLeaf sp_fs; //type: uint32



}; // Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfHeader::AreaSummary


class Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime : public Entity
{
    public:
        SpfRuntime();
        ~SpfRuntime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: uint32
        YLeaf rib_add_routes; //type: uint32
        YLeaf rib_delete_routes; //type: uint32
        YLeaf reason_flags; //type: string
        YLeaf lsa_changes; //type: int16

        class GlobalTime; //type: Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::GlobalTime
        class Lsa; //type: Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::Lsa
        class AreaStat; //type: Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat> > area_stat;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::GlobalTime> global_time;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::Lsa> > lsa;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime


class Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::GlobalTime : public Entity
{
    public:
        GlobalTime();
        ~GlobalTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dijkstra; //type: uint32
        YLeaf intra_prefix; //type: uint32
        YLeaf intra_prefix_del; //type: uint32
        YLeaf inter_prefix; //type: uint32
        YLeaf inter_prefix_del; //type: uint32
        YLeaf external_prefix; //type: uint32
        YLeaf external_prefix_del; //type: uint32
        YLeaf rib_add; //type: uint32
        YLeaf rib_del; //type: uint32



}; // Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::GlobalTime


class Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::Lsa : public Entity
{
    public:
        Lsa();
        ~Lsa();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_area_id; //type: uint32
        YLeaf lsa_advertising_router; //type: string
        YLeaf lsa_id; //type: string
        YLeaf lsa_type; //type: uint8
        YLeaf lsa_flush; //type: boolean



}; // Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::Lsa


class Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat : public Entity
{
    public:
        AreaStat();
        ~AreaStat();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf spf_stat_area_id; //type: uint32
        YLeafList spf_stat_lsa_type_count; //type: list of  uint32

        class SpfStatTime; //type: Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat::SpfStatTime

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat::SpfStatTime> spf_stat_time;


}; // Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat


}
}

#endif /* _CISCO_IOS_XR_IPV6_OSPFV3_OPER_1_ */

