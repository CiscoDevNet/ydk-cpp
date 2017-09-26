#ifndef _CISCO_IOS_XR_IPV6_OSPFV3_OPER_2_
#define _CISCO_IOS_XR_IPV6_OSPFV3_OPER_2_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv6_ospfv3_oper_0.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv6_ospfv3_oper {


class Ospfv3::Processes::Process::DefaultVrf::RequestListProcessTable : public ydk::Entity
{
    public:
        RequestListProcessTable();
        ~RequestListProcessTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Request; //type: Ospfv3::Processes::Process::DefaultVrf::RequestListProcessTable::Request

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::RequestListProcessTable::Request> > request;
        
}; // Ospfv3::Processes::Process::DefaultVrf::RequestListProcessTable


class Ospfv3::Processes::Process::DefaultVrf::RequestListProcessTable::Request : public ydk::Entity
{
    public:
        Request();
        ~Request();

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
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf request_neighbor_address; //type: string
        ydk::YLeaf is_request_virtual_link; //type: boolean
        ydk::YLeaf request_virtual_link_id; //type: uint32
        ydk::YLeaf is_request_sham_link; //type: boolean
        ydk::YLeaf request_sham_link_id; //type: uint32
        class Request_; //type: Ospfv3::Processes::Process::DefaultVrf::RequestListProcessTable::Request::Request_

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::RequestListProcessTable::Request::Request_> > request;
        
}; // Ospfv3::Processes::Process::DefaultVrf::RequestListProcessTable::Request


class Ospfv3::Processes::Process::DefaultVrf::RequestListProcessTable::Request::Request_ : public ydk::Entity
{
    public:
        Request_();
        ~Request_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf header_lsa_type; //type: Ospfv3Lsa1
        ydk::YLeaf header_lsa_age; //type: uint16
        ydk::YLeaf header_lsa_id; //type: string
        ydk::YLeaf header_advertising_router; //type: string
        ydk::YLeaf header_sequence_number; //type: int32

}; // Ospfv3::Processes::Process::DefaultVrf::RequestListProcessTable::Request::Request_


class Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable : public ydk::Entity
{
    public:
        RetransmissionListProcessTable();
        ~RetransmissionListProcessTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Retransmission; //type: Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission> > retransmission;
        
}; // Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable


class Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission : public ydk::Entity
{
    public:
        Retransmission();
        ~Retransmission();

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
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf retransmission_neighbor_address; //type: string
        ydk::YLeaf is_retransmissionvirtual_link; //type: boolean
        ydk::YLeaf retransmissionvirtual_link_id; //type: uint32
        ydk::YLeaf is_retransmission_sham_link; //type: boolean
        ydk::YLeaf retransmission_sham_link_id; //type: uint32
        ydk::YLeaf retransmission_timer; //type: uint32
        ydk::YLeaf retransmission_length; //type: uint32
        class RetransmissionvirtualLinkDb; //type: Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::RetransmissionvirtualLinkDb
        class RetransmissionAreaDb; //type: Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::RetransmissionAreaDb
        class RetransmissionAsdb; //type: Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::RetransmissionAsdb

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::RetransmissionAreaDb> > retransmission_area_db;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::RetransmissionAsdb> > retransmission_asdb;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::RetransmissionvirtualLinkDb> > retransmissionvirtual_link_db;
        
}; // Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission


class Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::RetransmissionAreaDb : public ydk::Entity
{
    public:
        RetransmissionAreaDb();
        ~RetransmissionAreaDb();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf header_lsa_type; //type: Ospfv3Lsa1
        ydk::YLeaf header_lsa_age; //type: uint16
        ydk::YLeaf header_lsa_id; //type: string
        ydk::YLeaf header_advertising_router; //type: string
        ydk::YLeaf header_sequence_number; //type: int32

}; // Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::RetransmissionAreaDb


class Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::RetransmissionAsdb : public ydk::Entity
{
    public:
        RetransmissionAsdb();
        ~RetransmissionAsdb();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf header_lsa_type; //type: Ospfv3Lsa1
        ydk::YLeaf header_lsa_age; //type: uint16
        ydk::YLeaf header_lsa_id; //type: string
        ydk::YLeaf header_advertising_router; //type: string
        ydk::YLeaf header_sequence_number; //type: int32

}; // Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::RetransmissionAsdb


class Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::RetransmissionvirtualLinkDb : public ydk::Entity
{
    public:
        RetransmissionvirtualLinkDb();
        ~RetransmissionvirtualLinkDb();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf header_lsa_type; //type: Ospfv3Lsa1
        ydk::YLeaf header_lsa_age; //type: uint16
        ydk::YLeaf header_lsa_id; //type: string
        ydk::YLeaf header_advertising_router; //type: string
        ydk::YLeaf header_sequence_number; //type: int32

}; // Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::RetransmissionvirtualLinkDb


class Ospfv3::Processes::Process::DefaultVrf::RouteSummary : public ydk::Entity
{
    public:
        RouteSummary();
        ~RouteSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_id; //type: string
        ydk::YLeaf intra_area_route; //type: uint32
        ydk::YLeaf inter_area_route; //type: uint32
        ydk::YLeaf extern_one_route; //type: uint32
        ydk::YLeaf extern_two_route; //type: uint32
        ydk::YLeaf nssa_one_route; //type: uint32
        ydk::YLeaf nssa_two_route; //type: uint32
        ydk::YLeaf total_sent_route; //type: uint32
        ydk::YLeaf route_connected; //type: uint32
        ydk::YLeaf redistribution_route; //type: uint32
        ydk::YLeaf total_received_route; //type: uint32

}; // Ospfv3::Processes::Process::DefaultVrf::RouteSummary


class Ospfv3::Processes::Process::DefaultVrf::ShamLinkTable : public ydk::Entity
{
    public:
        ShamLinkTable();
        ~ShamLinkTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sham_link_neighbor_id; //type: string
        ydk::YLeaf sham_link_source_address; //type: string
        ydk::YLeaf sham_link_dest_address; //type: string
        ydk::YLeaf sham_link_state; //type: Ospfv3InterfaceState
        ydk::YLeaf sham_link_demand_circuit; //type: boolean
        ydk::YLeaf sham_link_dc_bitless_lsa; //type: uint32
        ydk::YLeaf sham_link_ifindex; //type: uint32
        ydk::YLeaf sham_link_area; //type: string
        ydk::YLeaf sham_link_cost; //type: uint16
        ydk::YLeaf sham_link_transmission_delay; //type: uint16
        ydk::YLeaf sham_link_hello_interval; //type: uint32
        ydk::YLeaf sham_link_dead_interval; //type: uint32
        ydk::YLeaf sham_link_wait_interval; //type: uint32
        ydk::YLeaf sham_link_retransmission_interval; //type: uint32
        ydk::YLeaf sham_link_next_hello; //type: uint32
        ydk::YLeaf sham_link_passive; //type: boolean
        ydk::YLeaf is_sham_link_ip_security_required; //type: boolean
        ydk::YLeaf is_sham_link_ip_security_active; //type: boolean
        ydk::YLeaf is_sham_link_authentication_enabled; //type: boolean
        ydk::YLeaf virtual_link_authentication_spi; //type: uint32
        ydk::YLeaf sham_link_authentication_transmit; //type: uint32
        ydk::YLeaf is_sham_link_encryption_enabled; //type: boolean
        ydk::YLeaf sham_link_encryption_spi; //type: uint32
        ydk::YLeaf sham_link_encryption_transmitted; //type: uint32
        ydk::YLeaf sham_link_encrypted_authentication_transmitted; //type: uint32
        ydk::YLeaf sham_link_gr_enabled; //type: boolean
        ydk::YLeaf sham_link_gr; //type: boolean
        ydk::YLeaf sham_link_last_gr; //type: uint32
        class ShamLinkNeighbor; //type: Ospfv3::Processes::Process::DefaultVrf::ShamLinkTable::ShamLinkNeighbor

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::ShamLinkTable::ShamLinkNeighbor> sham_link_neighbor;
        
}; // Ospfv3::Processes::Process::DefaultVrf::ShamLinkTable


class Ospfv3::Processes::Process::DefaultVrf::ShamLinkTable::ShamLinkNeighbor : public ydk::Entity
{
    public:
        ShamLinkNeighbor();
        ~ShamLinkNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sham_link_suppress_hello; //type: boolean
        ydk::YLeaf sham_link_state; //type: Ospfv3NeighborState
        class ShamLinkRetransmission; //type: Ospfv3::Processes::Process::DefaultVrf::ShamLinkTable::ShamLinkNeighbor::ShamLinkRetransmission

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::ShamLinkTable::ShamLinkNeighbor::ShamLinkRetransmission> sham_link_retransmission;
        
}; // Ospfv3::Processes::Process::DefaultVrf::ShamLinkTable::ShamLinkNeighbor


class Ospfv3::Processes::Process::DefaultVrf::ShamLinkTable::ShamLinkNeighbor::ShamLinkRetransmission : public ydk::Entity
{
    public:
        ShamLinkRetransmission();
        ~ShamLinkRetransmission();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf database_descriptor_retransmissions; //type: uint32
        ydk::YLeaf area_flood_index; //type: uint32
        ydk::YLeaf as_flood_index; //type: uint32
        ydk::YLeaf link_flood_index; //type: uint32
        ydk::YLeaf neighbor_retransmissions; //type: uint32
        ydk::YLeaf retransmissions; //type: uint32
        ydk::YLeaf area_first_flood; //type: uint32
        ydk::YLeaf area_first_flood_index; //type: uint32
        ydk::YLeaf as_first_flood; //type: uint32
        ydk::YLeaf as_first_flood_index; //type: uint32
        ydk::YLeaf link_first_flood; //type: uint32
        ydk::YLeaf link_first_flood_index; //type: uint32
        ydk::YLeaf area_next_flood; //type: uint32
        ydk::YLeaf area_next_flood_index; //type: uint32
        ydk::YLeaf as_next_flood; //type: uint32
        ydk::YLeaf as_next_flood_index; //type: uint32
        ydk::YLeaf link_next_flood; //type: uint32
        ydk::YLeaf link_next_flood_index; //type: uint32
        ydk::YLeaf last_retransmission_length; //type: uint32
        ydk::YLeaf maximum_retransmission_length; //type: uint32
        ydk::YLeaf last_retransmission_time; //type: uint32
        ydk::YLeaf maximum_retransmission_time; //type: uint32
        ydk::YLeaf lsa_retransmission_timer; //type: uint32

}; // Ospfv3::Processes::Process::DefaultVrf::ShamLinkTable::ShamLinkNeighbor::ShamLinkRetransmission


class Ospfv3::Processes::Process::DefaultVrf::Summary : public ydk::Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Protocol; //type: Ospfv3::Processes::Process::DefaultVrf::Summary::Protocol
        class Ospfv3_; //type: Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_
        class Route; //type: Ospfv3::Processes::Process::DefaultVrf::Summary::Route

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_> ospfv3;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Summary::Protocol> protocol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Summary::Route> route;
        
}; // Ospfv3::Processes::Process::DefaultVrf::Summary


class Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_ : public ydk::Entity
{
    public:
        Ospfv3_();
        ~Ospfv3_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf router_id; //type: string
        ydk::YLeaf is_role_standby; //type: boolean
        ydk::YLeaf role; //type: uint32
        ydk::YLeaf is_nsr_enabled; //type: boolean
        ydk::YLeaf is_nsr_switchover_on_restart; //type: boolean
        ydk::YLeaf is_router_id_stalled; //type: boolean
        ydk::YLeaf is_opaque_capable; //type: boolean
        ydk::YLeaf is_area_border_router; //type: boolean
        ydk::YLeaf is_as_border_router; //type: boolean
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf is_default_originated; //type: boolean
        ydk::YLeaf is_default_always; //type: boolean
        ydk::YLeaf default_metric; //type: uint32
        ydk::YLeaf default_metric_type; //type: Ospfv3DefaultMetric
        ydk::YLeaf default_tag; //type: uint32
        ydk::YLeaf is_default_policy; //type: boolean
        ydk::YLeaf default_policy_name; //type: string
        ydk::YLeaf spf_start_time; //type: uint32
        ydk::YLeaf spf_hold_time; //type: uint32
        ydk::YLeaf spf_maximum_time; //type: uint32
        ydk::YLeaf lsa_start_time; //type: uint32
        ydk::YLeaf lsa_hold_time; //type: uint32
        ydk::YLeaf lsa_maximum_time; //type: uint32
        ydk::YLeaf minimum_lsa_interval; //type: uint32
        ydk::YLeaf lsa_group_interval; //type: uint32
        ydk::YLeaf lsa_flood_pacing_interval; //type: uint32
        ydk::YLeaf lsa_retransmission_pacing_interval; //type: uint32
        ydk::YLeaf as_ls_as; //type: uint32
        ydk::YLeaf opaque_lsas; //type: uint32
        ydk::YLeaf opaque_lsa_checksum; //type: uint32
        ydk::YLeaf as_dc_bitless_ls_as; //type: uint32
        ydk::YLeaf as_do_not_age_ls_as; //type: uint32
        ydk::YLeaf areas; //type: uint16
        ydk::YLeaf normal_areas; //type: uint16
        ydk::YLeaf stub_areas; //type: uint16
        ydk::YLeaf nssa_areas; //type: uint16
        ydk::YLeaf as_lsa_flood_list_length; //type: uint32
        ydk::YLeaf is_grace_restart_enabled; //type: boolean
        ydk::YLeaf last_nsf_time; //type: uint32
        ydk::YLeaf grace_resync_time; //type: uint32
        ydk::YLeaf maximum_interfaces; //type: uint32
        ydk::YLeaf maximum_paths; //type: uint32
        ydk::YLeaf redistribution_limit; //type: uint32
        ydk::YLeaf redistribution_threshold; //type: uint32
        ydk::YLeaf is_auto_cost; //type: boolean
        ydk::YLeaf reference_bandwidth; //type: uint32
        ydk::YLeaf context_name; //type: string
        ydk::YLeaf snmp_trap_enabled; //type: boolean
        ydk::YLeaf graceful_shutdown_state; //type: Ospfv3GracefulShutdownState
        class DomainId; //type: Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::DomainId
        class StubRouter; //type: Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter
        class IpfrrTiebreakers; //type: Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::IpfrrTiebreakers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::DomainId> domain_id;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::IpfrrTiebreakers> > ipfrr_tiebreakers;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter> > stub_router;
        
}; // Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_


class Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::DomainId : public ydk::Entity
{
    public:
        DomainId();
        ~DomainId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrimaryDomainId; //type: Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::DomainId::PrimaryDomainId
        class SecondaryDomainId; //type: Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::DomainId::SecondaryDomainId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::DomainId::PrimaryDomainId> primary_domain_id;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::DomainId::SecondaryDomainId> > secondary_domain_id;
        
}; // Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::DomainId


class Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::DomainId::PrimaryDomainId : public ydk::Entity
{
    public:
        PrimaryDomainId();
        ~PrimaryDomainId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain_id_type; //type: uint16
        ydk::YLeaf domain_id_value; //type: string

}; // Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::DomainId::PrimaryDomainId


class Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::DomainId::SecondaryDomainId : public ydk::Entity
{
    public:
        SecondaryDomainId();
        ~SecondaryDomainId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain_id_type; //type: uint16
        ydk::YLeaf domain_id_value; //type: string

}; // Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::DomainId::SecondaryDomainId


class Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::IpfrrTiebreakers : public ydk::Entity
{
    public:
        IpfrrTiebreakers();
        ~IpfrrTiebreakers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tiebreaker_type; //type: IpfrrTbrkr
        ydk::YLeaf tiebreaker_index; //type: uint32

}; // Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::IpfrrTiebreakers


class Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter : public ydk::Entity
{
    public:
        StubRouter();
        ~StubRouter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mode; //type: StubRouterMode
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf remaining_time; //type: uint32
        ydk::YLeaf set_reason; //type: StubRouterTrigger
        ydk::YLeaf unset_reason; //type: StubRouterExitReason
        ydk::YLeaf include_stub_links; //type: boolean
        ydk::YLeaf summary_lsa_metric; //type: uint32
        ydk::YLeaf external_lsa_metric; //type: uint32
        ydk::YLeaf abr_off_reason; //type: StubRouterAbrOffReason
        class UnsetTime; //type: Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::UnsetTime
        class StartTime; //type: Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::StartTime
        class AbrResumeTime; //type: Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::AbrResumeTime
        class Trigger; //type: Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::Trigger

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::AbrResumeTime> abr_resume_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::StartTime> start_time;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::Trigger> > trigger;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::UnsetTime> unset_time;
        
}; // Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter


class Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::AbrResumeTime : public ydk::Entity
{
    public:
        AbrResumeTime();
        ~AbrResumeTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nanosecond; //type: uint32

}; // Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::AbrResumeTime


class Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::StartTime : public ydk::Entity
{
    public:
        StartTime();
        ~StartTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nanosecond; //type: uint32

}; // Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::StartTime


class Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::Trigger : public ydk::Entity
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

        ydk::YLeaf trigger; //type: StubRouterTrigger
        ydk::YLeaf wait_for_bgp; //type: boolean
        ydk::YLeaf unset_reason; //type: StubRouterExitReason
        ydk::YLeaf time; //type: uint32
        class UnsetTime; //type: Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::Trigger::UnsetTime
        class StartTime; //type: Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::Trigger::StartTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::Trigger::StartTime> start_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::Trigger::UnsetTime> unset_time;
        
}; // Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::Trigger


class Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::Trigger::StartTime : public ydk::Entity
{
    public:
        StartTime();
        ~StartTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nanosecond; //type: uint32

}; // Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::Trigger::StartTime


class Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::Trigger::UnsetTime : public ydk::Entity
{
    public:
        UnsetTime();
        ~UnsetTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nanosecond; //type: uint32

}; // Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::Trigger::UnsetTime


class Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::UnsetTime : public ydk::Entity
{
    public:
        UnsetTime();
        ~UnsetTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nanosecond; //type: uint32

}; // Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::UnsetTime


class Ospfv3::Processes::Process::DefaultVrf::Summary::Protocol : public ydk::Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_router_id; //type: string
        ydk::YLeaf administrative_distance; //type: uint32
        ydk::YLeaf administrative_distance_inter_area; //type: uint32
        ydk::YLeaf administrative_distance_external; //type: uint32
        ydk::YLeaf is_graceful_restart; //type: boolean
        ydk::YLeaf distribute_list_in; //type: string

}; // Ospfv3::Processes::Process::DefaultVrf::Summary::Protocol


class Ospfv3::Processes::Process::DefaultVrf::Summary::Route : public ydk::Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_id; //type: string
        ydk::YLeaf intra_area_route; //type: uint32
        ydk::YLeaf inter_area_route; //type: uint32
        ydk::YLeaf extern_one_route; //type: uint32
        ydk::YLeaf extern_two_route; //type: uint32
        ydk::YLeaf nssa_one_route; //type: uint32
        ydk::YLeaf nssa_two_route; //type: uint32
        ydk::YLeaf total_sent_route; //type: uint32
        ydk::YLeaf route_connected; //type: uint32
        ydk::YLeaf redistribution_route; //type: uint32
        ydk::YLeaf total_received_route; //type: uint32

}; // Ospfv3::Processes::Process::DefaultVrf::Summary::Route


class Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes : public ydk::Entity
{
    public:
        SummaryPrefixes();
        ~SummaryPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SummaryPrefix; //type: Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix> > summary_prefix;
        
}; // Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes


class Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix : public ydk::Entity
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
        ydk::YLeaf prefix_metric; //type: uint32
        ydk::YLeaf prefix_metric_type; //type: Ospfv3DefaultMetric
        ydk::YLeaf tag; //type: uint32

}; // Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix


class Ospfv3::Processes::Process::DefaultVrf::VirtualLink : public ydk::Entity
{
    public:
        VirtualLink();
        ~VirtualLink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf virtual_link_neighbor_id; //type: string
        ydk::YLeaf virtual_link_interface_number; //type: uint32
        ydk::YLeaf virtual_link_state; //type: Ospfv3InterfaceState
        ydk::YLeaf is_virtual_link_ip_security_required; //type: boolean
        ydk::YLeaf is_virtual_link_ip_security_active; //type: boolean
        ydk::YLeaf virtual_link_neighbor_address; //type: string
        ydk::YLeaf is_virtual_link_demand_circuit; //type: boolean
        ydk::YLeaf virtual_link_dc_bitless_lsa; //type: uint32
        ydk::YLeaf transit_area_id; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf virtual_link_cost; //type: uint16
        ydk::YLeaf virual_link_transmission_delay; //type: uint16
        ydk::YLeaf virtual_link_hello_interval; //type: uint32
        ydk::YLeaf virtual_link_dead_interval; //type: uint32
        ydk::YLeaf virtual_link_wait_interval; //type: uint32
        ydk::YLeaf virtual_link_retransmission_interval; //type: uint32
        ydk::YLeaf virtual_link_next_hello; //type: uint32
        ydk::YLeaf is_virtual_link_passive; //type: boolean
        ydk::YLeaf is_virtual_link_authentication_enabled; //type: boolean
        ydk::YLeaf virtual_link_authentication_spi; //type: uint32
        ydk::YLeaf virtual_link_authentication_transmit; //type: uint32
        ydk::YLeaf is_virtual_link_encryption_enabled; //type: boolean
        ydk::YLeaf virtual_link_encryption_spi; //type: uint32
        ydk::YLeaf virtual_link_encryption_transmitted; //type: uint32
        ydk::YLeaf virtual_link_encrypted_authentication_transmitted; //type: uint32
        class VirtualLinkNeighbor; //type: Ospfv3::Processes::Process::DefaultVrf::VirtualLink::VirtualLinkNeighbor

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::VirtualLink::VirtualLinkNeighbor> virtual_link_neighbor;
        
}; // Ospfv3::Processes::Process::DefaultVrf::VirtualLink


class Ospfv3::Processes::Process::DefaultVrf::VirtualLink::VirtualLinkNeighbor : public ydk::Entity
{
    public:
        VirtualLinkNeighbor();
        ~VirtualLinkNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_virtual_link_hello_suppressed; //type: boolean
        ydk::YLeaf virtual_link_state; //type: Ospfv3InterfaceState
        class VirtualLinkRetransmission; //type: Ospfv3::Processes::Process::DefaultVrf::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmission

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmission> virtual_link_retransmission;
        
}; // Ospfv3::Processes::Process::DefaultVrf::VirtualLink::VirtualLinkNeighbor


class Ospfv3::Processes::Process::DefaultVrf::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmission : public ydk::Entity
{
    public:
        VirtualLinkRetransmission();
        ~VirtualLinkRetransmission();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf database_descriptor_retransmissions; //type: uint32
        ydk::YLeaf area_flood_index; //type: uint32
        ydk::YLeaf as_flood_index; //type: uint32
        ydk::YLeaf link_flood_index; //type: uint32
        ydk::YLeaf neighbor_retransmissions; //type: uint32
        ydk::YLeaf retransmissions; //type: uint32
        ydk::YLeaf area_first_flood; //type: uint32
        ydk::YLeaf area_first_flood_index; //type: uint32
        ydk::YLeaf as_first_flood; //type: uint32
        ydk::YLeaf as_first_flood_index; //type: uint32
        ydk::YLeaf link_first_flood; //type: uint32
        ydk::YLeaf link_first_flood_index; //type: uint32
        ydk::YLeaf area_next_flood; //type: uint32
        ydk::YLeaf area_next_flood_index; //type: uint32
        ydk::YLeaf as_next_flood; //type: uint32
        ydk::YLeaf as_next_flood_index; //type: uint32
        ydk::YLeaf link_next_flood; //type: uint32
        ydk::YLeaf link_next_flood_index; //type: uint32
        ydk::YLeaf last_retransmission_length; //type: uint32
        ydk::YLeaf maximum_retransmission_length; //type: uint32
        ydk::YLeaf last_retransmission_time; //type: uint32
        ydk::YLeaf maximum_retransmission_time; //type: uint32
        ydk::YLeaf lsa_retransmission_timer; //type: uint32

}; // Ospfv3::Processes::Process::DefaultVrf::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmission


class Ospfv3::Processes::Process::DefaultVrf::VrfStatistics : public ydk::Entity
{
    public:
        VrfStatistics();
        ~VrfStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolStats; //type: Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::ProtocolStats
        class SpfStats; //type: Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats
        class RawioStats; //type: Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::RawioStats
        class PrefixPriorityStats; //type: Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::PrefixPriorityStats
        class VrfRibBatchStats; //type: Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::VrfRibBatchStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::PrefixPriorityStats> prefix_priority_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::ProtocolStats> protocol_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::RawioStats> rawio_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats> spf_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::VrfRibBatchStats> vrf_rib_batch_stats;
        
}; // Ospfv3::Processes::Process::DefaultVrf::VrfStatistics


class Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::PrefixPriorityStats : public ydk::Entity
{
    public:
        PrefixPriorityStats();
        ~PrefixPriorityStats();

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

}; // Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::PrefixPriorityStats


class Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::ProtocolStats : public ydk::Entity
{
    public:
        ProtocolStats();
        ~ProtocolStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolStat; //type: Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::ProtocolStats::ProtocolStat

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::ProtocolStats::ProtocolStat> > protocol_stat;
        
}; // Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::ProtocolStats


class Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::ProtocolStats::ProtocolStat : public ydk::Entity
{
    public:
        ProtocolStat();
        ~ProtocolStat();

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
        ydk::YLeaf total_in_packets; //type: uint64
        ydk::YLeaf hello_in_packets; //type: uint64
        ydk::YLeaf dbdes_in_packets; //type: uint64
        ydk::YLeaf dbdes_in_ls_as; //type: uint64
        ydk::YLeaf ls_req_in_packets; //type: uint64
        ydk::YLeaf ls_req_in_ls_as; //type: uint64
        ydk::YLeaf ls_upd_in_packets; //type: uint64
        ydk::YLeaf ls_upd_in_ignored; //type: uint64
        ydk::YLeaf ls_upd_in_ls_as; //type: uint64
        ydk::YLeaf ls_ack_in_packets; //type: uint64
        ydk::YLeaf ls_ack_in_ls_as; //type: uint64
        ydk::YLeaf total_out_packets; //type: uint64
        ydk::YLeaf hello_out_packets; //type: uint64
        ydk::YLeaf dbdes_out_packets; //type: uint64
        ydk::YLeaf dbdes_out_ls_as; //type: uint64
        ydk::YLeaf ls_req_out_packets; //type: uint64
        ydk::YLeaf ls_req_out_ls_as; //type: uint64
        ydk::YLeaf ls_upd_out_packets; //type: uint64
        ydk::YLeaf ls_upd_out_ls_as; //type: uint64
        ydk::YLeaf ls_ack_out_packets; //type: uint64
        ydk::YLeaf ls_ack_out_ls_as; //type: uint64
        ydk::YLeaf dropped_in_gs; //type: uint64
        ydk::YLeaf checksum_err; //type: uint64

}; // Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::ProtocolStats::ProtocolStat


class Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::RawioStats : public ydk::Entity
{
    public:
        RawioStats();
        ~RawioStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf raw_conn_open; //type: uint64
        ydk::YLeaf raw_conn_close; //type: uint64
        ydk::YLeaf raw_conn_error; //type: uint64
        ydk::YLeaf in_packets; //type: uint64
        ydk::YLeaf in_bytes; //type: uint64
        ydk::YLeaf in_long_packets; //type: uint64
        ydk::YLeaf in_malloc_drops; //type: uint64
        ydk::YLeaf in_handle_drops; //type: uint64
        ydk::YLeaf in_short_drops; //type: uint64
        ydk::YLeaf in_error_drops; //type: uint64
        ydk::YLeaf in_ipsec_drops; //type: uint64
        ydk::YLeaf in_queue_drops; //type: uint64
        ydk::YLeaf out_packets; //type: uint64
        ydk::YLeaf out_bytes; //type: uint64
        ydk::YLeaf out_nofd_drops; //type: uint64
        ydk::YLeaf out_error_drops; //type: uint64
        ydk::YLeaf out_ipsec_drops; //type: uint64
        ydk::YLeaf out_nopak_drops; //type: uint64
        ydk::YLeaf out_pakapi_errors; //type: uint64
        ydk::YLeaf raw_conn_state; //type: uint32

}; // Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::RawioStats


class Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats : public ydk::Entity
{
    public:
        SpfStats();
        ~SpfStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SpfHeader; //type: Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfHeader
        class SpfRuntime; //type: Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfHeader> spf_header;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime> > spf_runtime;
        
}; // Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats


class Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfHeader : public ydk::Entity
{
    public:
        SpfHeader();
        ~SpfHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf header_router_id; //type: string
        ydk::YLeaf header_sp_fs; //type: uint32
        class AreaSummary; //type: Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfHeader::AreaSummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfHeader::AreaSummary> > area_summary;
        
}; // Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfHeader


class Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfHeader::AreaSummary : public ydk::Entity
{
    public:
        AreaSummary();
        ~AreaSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf area_id; //type: uint32
        ydk::YLeaf sp_fs; //type: uint32

}; // Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfHeader::AreaSummary


class Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime : public ydk::Entity
{
    public:
        SpfRuntime();
        ~SpfRuntime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: uint32
        ydk::YLeaf rib_add_routes; //type: uint32
        ydk::YLeaf rib_delete_routes; //type: uint32
        ydk::YLeaf reason_flags; //type: string
        ydk::YLeaf lsa_changes; //type: int16
        class GlobalTime; //type: Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::GlobalTime
        class Lsa; //type: Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::Lsa
        class AreaStat; //type: Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat> > area_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::GlobalTime> global_time;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::Lsa> > lsa;
        
}; // Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime


class Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat : public ydk::Entity
{
    public:
        AreaStat();
        ~AreaStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf spf_stat_area_id; //type: uint32
        ydk::YLeafList spf_stat_lsa_type_count; //type: list of  uint32
        class SpfStatTime; //type: Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat::SpfStatTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat::SpfStatTime> spf_stat_time;
        
}; // Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat


class Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat::SpfStatTime : public ydk::Entity
{
    public:
        SpfStatTime();
        ~SpfStatTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dijkstra; //type: uint32
        ydk::YLeaf intra_prefix; //type: uint32
        ydk::YLeaf intra_prefix_del; //type: uint32
        ydk::YLeaf inter_prefix; //type: uint32
        ydk::YLeaf inter_prefix_del; //type: uint32
        ydk::YLeaf external_prefix; //type: uint32
        ydk::YLeaf external_prefix_del; //type: uint32
        ydk::YLeaf rib_add; //type: uint32
        ydk::YLeaf rib_del; //type: uint32

}; // Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat::SpfStatTime


class Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::GlobalTime : public ydk::Entity
{
    public:
        GlobalTime();
        ~GlobalTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dijkstra; //type: uint32
        ydk::YLeaf intra_prefix; //type: uint32
        ydk::YLeaf intra_prefix_del; //type: uint32
        ydk::YLeaf inter_prefix; //type: uint32
        ydk::YLeaf inter_prefix_del; //type: uint32
        ydk::YLeaf external_prefix; //type: uint32
        ydk::YLeaf external_prefix_del; //type: uint32
        ydk::YLeaf rib_add; //type: uint32
        ydk::YLeaf rib_del; //type: uint32

}; // Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::GlobalTime


class Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::Lsa : public ydk::Entity
{
    public:
        Lsa();
        ~Lsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_area_id; //type: uint32
        ydk::YLeaf lsa_advertising_router; //type: string
        ydk::YLeaf lsa_id; //type: string
        ydk::YLeaf lsa_type; //type: uint8
        ydk::YLeaf lsa_flush; //type: boolean

}; // Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::Lsa


class Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::VrfRibBatchStats : public ydk::Entity
{
    public:
        VrfRibBatchStats();
        ~VrfRibBatchStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf batches_sent; //type: uint32
        ydk::YLeaf routes_sent; //type: uint32
        ydk::YLeaf routes_pending; //type: uint32
        ydk::YLeaf max_routes; //type: uint32
        ydk::YLeaf paths_sent; //type: uint32
        ydk::YLeaf paths_pending; //type: uint32
        ydk::YLeaf paths_add; //type: uint32
        ydk::YLeaf paths_add_errs; //type: uint32
        ydk::YLeaf paths_del; //type: uint32
        ydk::YLeaf paths_del_errs; //type: uint32

}; // Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::VrfRibBatchStats


class Ospfv3::Processes::Process::Statistics : public ydk::Entity
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

        class NsrStats; //type: Ospfv3::Processes::Process::Statistics::NsrStats
        class RibThreadStats; //type: Ospfv3::Processes::Process::Statistics::RibThreadStats
        class IssuStats; //type: Ospfv3::Processes::Process::Statistics::IssuStats
        class NsrPlStats; //type: Ospfv3::Processes::Process::Statistics::NsrPlStats
        class ProtocolStats; //type: Ospfv3::Processes::Process::Statistics::ProtocolStats
        class SpfStats; //type: Ospfv3::Processes::Process::Statistics::SpfStats
        class RawioStats; //type: Ospfv3::Processes::Process::Statistics::RawioStats
        class PrefixPriorityStats; //type: Ospfv3::Processes::Process::Statistics::PrefixPriorityStats
        class VrfRibBatchStats; //type: Ospfv3::Processes::Process::Statistics::VrfRibBatchStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Statistics::IssuStats> issu_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Statistics::NsrPlStats> nsr_pl_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Statistics::NsrStats> nsr_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Statistics::PrefixPriorityStats> prefix_priority_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Statistics::ProtocolStats> protocol_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Statistics::RawioStats> rawio_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Statistics::RibThreadStats> rib_thread_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Statistics::SpfStats> spf_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Statistics::VrfRibBatchStats> vrf_rib_batch_stats;
        
}; // Ospfv3::Processes::Process::Statistics


class Ospfv3::Processes::Process::Statistics::IssuStats : public ydk::Entity
{
    public:
        IssuStats();
        ~IssuStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nsr_revision; //type: int32
        ydk::YLeaf nsr_fsm_state; //type: int32
        ydk::YLeaf nsr_version; //type: uint32
        ydk::YLeaf nsr_node_id; //type: uint32
        ydk::YLeaf nsr_peer_version; //type: uint32
        ydk::YLeaf nsr_peer_node_id; //type: uint32
        ydk::YLeaf nsr_mtu; //type: uint32
        ydk::YLeaf nsr_nbr_qad_qid; //type: uint32
        ydk::YLeaf nsr_lsa_qad_qid; //type: uint32
        ydk::YLeaf nsr_nbr_qad_mdata_count; //type: uint32
        ydk::YLeaf nsr_lsa_qad_mdata_count; //type: uint32
        ydk::YLeaf nsr_nbr_init_sync_pend_count; //type: int32
        ydk::YLeaf nsr_lsa_init_sync_pend_count; //type: int32
        ydk::YLeaf nsr_nbr_seq_no; //type: uint32
        ydk::YLeaf nsr_intf_seq_no; //type: uint32
        ydk::YLeaf nsr_tmr_quant; //type: int32
        ydk::YLeaf nsr_conn_to_active_attempts; //type: uint64
        ydk::YLeaf nsr_conn_to_active_fails; //type: uint64
        ydk::YLeaf nsr_conn_to_active_opens; //type: uint64
        ydk::YLeaf nsr_conn_to_active_closes; //type: uint64
        ydk::YLeaf nsr_conn_to_active_errors; //type: uint64
        class NsrThdStats; //type: Ospfv3::Processes::Process::Statistics::IssuStats::NsrThdStats
        class NsrRtrThdSched; //type: Ospfv3::Processes::Process::Statistics::IssuStats::NsrRtrThdSched

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Statistics::IssuStats::NsrRtrThdSched> nsr_rtr_thd_sched;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Statistics::IssuStats::NsrThdStats> nsr_thd_stats;
        
}; // Ospfv3::Processes::Process::Statistics::IssuStats


class Ospfv3::Processes::Process::Statistics::IssuStats::NsrRtrThdSched : public ydk::Entity
{
    public:
        NsrRtrThdSched();
        ~NsrRtrThdSched();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nsr_pulse_quant; //type: int32
        ydk::YLeaf nsr_events_in_q; //type: uint32
        ydk::YLeaf nsr_events_tx; //type: uint64
        ydk::YLeaf nsr_events_rx; //type: uint64
        ydk::YLeaf nsr_bad_pulses_rx; //type: uint64
        ydk::YLeaf nsr_good_pulses_rx; //type: uint64
        ydk::YLeaf nsr_pulses_tx; //type: uint64
        ydk::YLeaf nsr_pulse_tx_fails; //type: uint64
        class NsrPri; //type: Ospfv3::Processes::Process::Statistics::IssuStats::NsrRtrThdSched::NsrPri

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Statistics::IssuStats::NsrRtrThdSched::NsrPri> > nsr_pri;
        
}; // Ospfv3::Processes::Process::Statistics::IssuStats::NsrRtrThdSched


class Ospfv3::Processes::Process::Statistics::IssuStats::NsrRtrThdSched::NsrPri : public ydk::Entity
{
    public:
        NsrPri();
        ~NsrPri();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nsr_sched_pri; //type: OspfNsrSchedPri
        ydk::YLeaf nsr_sched_quant; //type: uint8
        ydk::YLeaf nsr_sched_remain_quant; //type: uint8
        ydk::YLeaf nsr_sched_evs_in_q; //type: uint16
        ydk::YLeaf nsr_sched_max_evs; //type: uint16
        ydk::YLeaf nsr_sched_peak_q_len; //type: uint16
        ydk::YLeaf nsr_sched_evs_qd; //type: uint64
        ydk::YLeaf nsr_sched_enq_fails; //type: uint64
        ydk::YLeaf nsr_sched_evs_deqd; //type: uint64

}; // Ospfv3::Processes::Process::Statistics::IssuStats::NsrRtrThdSched::NsrPri


class Ospfv3::Processes::Process::Statistics::IssuStats::NsrThdStats : public ydk::Entity
{
    public:
        NsrThdStats();
        ~NsrThdStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nsr_pulse_quant; //type: int32
        ydk::YLeaf nsr_events_in_q; //type: uint32
        ydk::YLeaf nsr_events_tx; //type: uint64
        ydk::YLeaf nsr_events_rx; //type: uint64
        ydk::YLeaf nsr_bad_pulses_rx; //type: uint64
        ydk::YLeaf nsr_good_pulses_rx; //type: uint64
        ydk::YLeaf nsr_pulses_tx; //type: uint64
        ydk::YLeaf nsr_pulse_tx_fails; //type: uint64
        class NsrPri; //type: Ospfv3::Processes::Process::Statistics::IssuStats::NsrThdStats::NsrPri

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Statistics::IssuStats::NsrThdStats::NsrPri> > nsr_pri;
        
}; // Ospfv3::Processes::Process::Statistics::IssuStats::NsrThdStats


class Ospfv3::Processes::Process::Statistics::IssuStats::NsrThdStats::NsrPri : public ydk::Entity
{
    public:
        NsrPri();
        ~NsrPri();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nsr_sched_pri; //type: OspfNsrSchedPri
        ydk::YLeaf nsr_sched_quant; //type: uint8
        ydk::YLeaf nsr_sched_remain_quant; //type: uint8
        ydk::YLeaf nsr_sched_evs_in_q; //type: uint16
        ydk::YLeaf nsr_sched_max_evs; //type: uint16
        ydk::YLeaf nsr_sched_peak_q_len; //type: uint16
        ydk::YLeaf nsr_sched_evs_qd; //type: uint64
        ydk::YLeaf nsr_sched_enq_fails; //type: uint64
        ydk::YLeaf nsr_sched_evs_deqd; //type: uint64

}; // Ospfv3::Processes::Process::Statistics::IssuStats::NsrThdStats::NsrPri


class Ospfv3::Processes::Process::Statistics::NsrPlStats : public ydk::Entity
{
    public:
        NsrPlStats();
        ~NsrPlStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NcdPri; //type: Ospfv3::Processes::Process::Statistics::NsrPlStats::NcdPri

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Statistics::NsrPlStats::NcdPri> > ncd_pri;
        
}; // Ospfv3::Processes::Process::Statistics::NsrPlStats


class Ospfv3::Processes::Process::Statistics::NsrPlStats::NcdPri : public ydk::Entity
{
    public:
        NcdPri();
        ~NcdPri();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList num_sent; //type: list of  uint64
        ydk::YLeafList num_recv; //type: list of  uint64
        class NumSentDrop; //type: Ospfv3::Processes::Process::Statistics::NsrPlStats::NcdPri::NumSentDrop
        class NumRecvDrop; //type: Ospfv3::Processes::Process::Statistics::NsrPlStats::NcdPri::NumRecvDrop

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Statistics::NsrPlStats::NcdPri::NumRecvDrop> > num_recv_drop;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Statistics::NsrPlStats::NcdPri::NumSentDrop> > num_sent_drop;
        
}; // Ospfv3::Processes::Process::Statistics::NsrPlStats::NcdPri


class Ospfv3::Processes::Process::Statistics::NsrPlStats::NcdPri::NumRecvDrop : public ydk::Entity
{
    public:
        NumRecvDrop();
        ~NumRecvDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList nsr_pl_recv_drop_array; //type: list of  uint32

}; // Ospfv3::Processes::Process::Statistics::NsrPlStats::NcdPri::NumRecvDrop


class Ospfv3::Processes::Process::Statistics::NsrPlStats::NcdPri::NumSentDrop : public ydk::Entity
{
    public:
        NumSentDrop();
        ~NumSentDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList nsr_pl_send_drop_array; //type: list of  uint32

}; // Ospfv3::Processes::Process::Statistics::NsrPlStats::NcdPri::NumSentDrop


class Ospfv3::Processes::Process::Statistics::NsrStats : public ydk::Entity
{
    public:
        NsrStats();
        ~NsrStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nsr_revision; //type: int32
        ydk::YLeaf nsr_fsm_state; //type: int32
        ydk::YLeaf nsr_version; //type: uint32
        ydk::YLeaf nsr_node_id; //type: uint32
        ydk::YLeaf nsr_peer_version; //type: uint32
        ydk::YLeaf nsr_peer_node_id; //type: uint32
        ydk::YLeaf nsr_mtu; //type: uint32
        ydk::YLeaf nsr_nbr_qad_qid; //type: uint32
        ydk::YLeaf nsr_lsa_qad_qid; //type: uint32
        ydk::YLeaf nsr_nbr_qad_mdata_count; //type: uint32
        ydk::YLeaf nsr_lsa_qad_mdata_count; //type: uint32
        ydk::YLeaf nsr_nbr_init_sync_pend_count; //type: int32
        ydk::YLeaf nsr_lsa_init_sync_pend_count; //type: int32
        ydk::YLeaf nsr_nbr_seq_no; //type: uint32
        ydk::YLeaf nsr_intf_seq_no; //type: uint32
        ydk::YLeaf nsr_tmr_quant; //type: int32
        ydk::YLeaf nsr_conn_to_active_attempts; //type: uint64
        ydk::YLeaf nsr_conn_to_active_fails; //type: uint64
        ydk::YLeaf nsr_conn_to_active_opens; //type: uint64
        ydk::YLeaf nsr_conn_to_active_closes; //type: uint64
        ydk::YLeaf nsr_conn_to_active_errors; //type: uint64
        class NsrThdStats; //type: Ospfv3::Processes::Process::Statistics::NsrStats::NsrThdStats
        class NsrRtrThdSched; //type: Ospfv3::Processes::Process::Statistics::NsrStats::NsrRtrThdSched

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Statistics::NsrStats::NsrRtrThdSched> nsr_rtr_thd_sched;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Statistics::NsrStats::NsrThdStats> nsr_thd_stats;
        
}; // Ospfv3::Processes::Process::Statistics::NsrStats


class Ospfv3::Processes::Process::Statistics::NsrStats::NsrRtrThdSched : public ydk::Entity
{
    public:
        NsrRtrThdSched();
        ~NsrRtrThdSched();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nsr_pulse_quant; //type: int32
        ydk::YLeaf nsr_events_in_q; //type: uint32
        ydk::YLeaf nsr_events_tx; //type: uint64
        ydk::YLeaf nsr_events_rx; //type: uint64
        ydk::YLeaf nsr_bad_pulses_rx; //type: uint64
        ydk::YLeaf nsr_good_pulses_rx; //type: uint64
        ydk::YLeaf nsr_pulses_tx; //type: uint64
        ydk::YLeaf nsr_pulse_tx_fails; //type: uint64
        class NsrPri; //type: Ospfv3::Processes::Process::Statistics::NsrStats::NsrRtrThdSched::NsrPri

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Statistics::NsrStats::NsrRtrThdSched::NsrPri> > nsr_pri;
        
}; // Ospfv3::Processes::Process::Statistics::NsrStats::NsrRtrThdSched


class Ospfv3::Processes::Process::Statistics::NsrStats::NsrRtrThdSched::NsrPri : public ydk::Entity
{
    public:
        NsrPri();
        ~NsrPri();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nsr_sched_pri; //type: OspfNsrSchedPri
        ydk::YLeaf nsr_sched_quant; //type: uint8
        ydk::YLeaf nsr_sched_remain_quant; //type: uint8
        ydk::YLeaf nsr_sched_evs_in_q; //type: uint16
        ydk::YLeaf nsr_sched_max_evs; //type: uint16
        ydk::YLeaf nsr_sched_peak_q_len; //type: uint16
        ydk::YLeaf nsr_sched_evs_qd; //type: uint64
        ydk::YLeaf nsr_sched_enq_fails; //type: uint64
        ydk::YLeaf nsr_sched_evs_deqd; //type: uint64

}; // Ospfv3::Processes::Process::Statistics::NsrStats::NsrRtrThdSched::NsrPri


class Ospfv3::Processes::Process::Statistics::NsrStats::NsrThdStats : public ydk::Entity
{
    public:
        NsrThdStats();
        ~NsrThdStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nsr_pulse_quant; //type: int32
        ydk::YLeaf nsr_events_in_q; //type: uint32
        ydk::YLeaf nsr_events_tx; //type: uint64
        ydk::YLeaf nsr_events_rx; //type: uint64
        ydk::YLeaf nsr_bad_pulses_rx; //type: uint64
        ydk::YLeaf nsr_good_pulses_rx; //type: uint64
        ydk::YLeaf nsr_pulses_tx; //type: uint64
        ydk::YLeaf nsr_pulse_tx_fails; //type: uint64
        class NsrPri; //type: Ospfv3::Processes::Process::Statistics::NsrStats::NsrThdStats::NsrPri

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Statistics::NsrStats::NsrThdStats::NsrPri> > nsr_pri;
        
}; // Ospfv3::Processes::Process::Statistics::NsrStats::NsrThdStats


class Ospfv3::Processes::Process::Statistics::NsrStats::NsrThdStats::NsrPri : public ydk::Entity
{
    public:
        NsrPri();
        ~NsrPri();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nsr_sched_pri; //type: OspfNsrSchedPri
        ydk::YLeaf nsr_sched_quant; //type: uint8
        ydk::YLeaf nsr_sched_remain_quant; //type: uint8
        ydk::YLeaf nsr_sched_evs_in_q; //type: uint16
        ydk::YLeaf nsr_sched_max_evs; //type: uint16
        ydk::YLeaf nsr_sched_peak_q_len; //type: uint16
        ydk::YLeaf nsr_sched_evs_qd; //type: uint64
        ydk::YLeaf nsr_sched_enq_fails; //type: uint64
        ydk::YLeaf nsr_sched_evs_deqd; //type: uint64

}; // Ospfv3::Processes::Process::Statistics::NsrStats::NsrThdStats::NsrPri


class Ospfv3::Processes::Process::Statistics::PrefixPriorityStats : public ydk::Entity
{
    public:
        PrefixPriorityStats();
        ~PrefixPriorityStats();

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

}; // Ospfv3::Processes::Process::Statistics::PrefixPriorityStats


class Ospfv3::Processes::Process::Statistics::ProtocolStats : public ydk::Entity
{
    public:
        ProtocolStats();
        ~ProtocolStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolStat; //type: Ospfv3::Processes::Process::Statistics::ProtocolStats::ProtocolStat

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Statistics::ProtocolStats::ProtocolStat> > protocol_stat;
        
}; // Ospfv3::Processes::Process::Statistics::ProtocolStats


class Ospfv3::Processes::Process::Statistics::ProtocolStats::ProtocolStat : public ydk::Entity
{
    public:
        ProtocolStat();
        ~ProtocolStat();

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
        ydk::YLeaf total_in_packets; //type: uint64
        ydk::YLeaf hello_in_packets; //type: uint64
        ydk::YLeaf dbdes_in_packets; //type: uint64
        ydk::YLeaf dbdes_in_ls_as; //type: uint64
        ydk::YLeaf ls_req_in_packets; //type: uint64
        ydk::YLeaf ls_req_in_ls_as; //type: uint64
        ydk::YLeaf ls_upd_in_packets; //type: uint64
        ydk::YLeaf ls_upd_in_ignored; //type: uint64
        ydk::YLeaf ls_upd_in_ls_as; //type: uint64
        ydk::YLeaf ls_ack_in_packets; //type: uint64
        ydk::YLeaf ls_ack_in_ls_as; //type: uint64
        ydk::YLeaf total_out_packets; //type: uint64
        ydk::YLeaf hello_out_packets; //type: uint64
        ydk::YLeaf dbdes_out_packets; //type: uint64
        ydk::YLeaf dbdes_out_ls_as; //type: uint64
        ydk::YLeaf ls_req_out_packets; //type: uint64
        ydk::YLeaf ls_req_out_ls_as; //type: uint64
        ydk::YLeaf ls_upd_out_packets; //type: uint64
        ydk::YLeaf ls_upd_out_ls_as; //type: uint64
        ydk::YLeaf ls_ack_out_packets; //type: uint64
        ydk::YLeaf ls_ack_out_ls_as; //type: uint64
        ydk::YLeaf dropped_in_gs; //type: uint64
        ydk::YLeaf checksum_err; //type: uint64

}; // Ospfv3::Processes::Process::Statistics::ProtocolStats::ProtocolStat


class Ospfv3::Processes::Process::Statistics::RawioStats : public ydk::Entity
{
    public:
        RawioStats();
        ~RawioStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf raw_conn_open; //type: uint64
        ydk::YLeaf raw_conn_close; //type: uint64
        ydk::YLeaf raw_conn_error; //type: uint64
        ydk::YLeaf in_packets; //type: uint64
        ydk::YLeaf in_bytes; //type: uint64
        ydk::YLeaf in_long_packets; //type: uint64
        ydk::YLeaf in_malloc_drops; //type: uint64
        ydk::YLeaf in_handle_drops; //type: uint64
        ydk::YLeaf in_short_drops; //type: uint64
        ydk::YLeaf in_error_drops; //type: uint64
        ydk::YLeaf in_ipsec_drops; //type: uint64
        ydk::YLeaf in_queue_drops; //type: uint64
        ydk::YLeaf out_packets; //type: uint64
        ydk::YLeaf out_bytes; //type: uint64
        ydk::YLeaf out_nofd_drops; //type: uint64
        ydk::YLeaf out_error_drops; //type: uint64
        ydk::YLeaf out_ipsec_drops; //type: uint64
        ydk::YLeaf out_nopak_drops; //type: uint64
        ydk::YLeaf out_pakapi_errors; //type: uint64
        ydk::YLeaf raw_conn_state; //type: uint32

}; // Ospfv3::Processes::Process::Statistics::RawioStats


class Ospfv3::Processes::Process::Statistics::RibThreadStats : public ydk::Entity
{
    public:
        RibThreadStats();
        ~RibThreadStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wq_thread_active; //type: boolean
        ydk::YLeaf wq_signals; //type: uint32
        ydk::YLeaf rib_base_clock; //type: uint64
        ydk::YLeaf rib_batch_sent; //type: uint32
        ydk::YLeaf rib_batch_purged; //type: uint32
        ydk::YLeaf rib_drop_version; //type: uint32
        ydk::YLeaf rib_drop_conn; //type: uint32
        ydk::YLeaf rib_batch_ok; //type: uint32
        ydk::YLeaf rib_batch_backup; //type: uint32
        ydk::YLeaf rib_batch_limit; //type: uint32
        ydk::YLeaf rib_batch_no_table; //type: uint32
        ydk::YLeaf rib_batch_some_err; //type: uint32
        ydk::YLeaf rib_batch_err; //type: uint32
        ydk::YLeaf rib_route_limit; //type: uint32
        ydk::YLeaf rib_route_some_err; //type: uint32
        ydk::YLeaf rib_route_err; //type: uint32
        ydk::YLeaf rib_path_limit; //type: uint32
        ydk::YLeaf rib_path_err; //type: uint32
        ydk::YLeaf rib_max_latency; //type: uint64
        ydk::YLeaf rib_sum_latency; //type: uint64
        class ThreadQ; //type: Ospfv3::Processes::Process::Statistics::RibThreadStats::ThreadQ
        class RibBaseTime; //type: Ospfv3::Processes::Process::Statistics::RibThreadStats::RibBaseTime
        class Holdq; //type: Ospfv3::Processes::Process::Statistics::RibThreadStats::Holdq

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Statistics::RibThreadStats::Holdq> > holdq;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Statistics::RibThreadStats::RibBaseTime> rib_base_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Statistics::RibThreadStats::ThreadQ> thread_q;
        
}; // Ospfv3::Processes::Process::Statistics::RibThreadStats


class Ospfv3::Processes::Process::Statistics::RibThreadStats::Holdq : public ydk::Entity
{
    public:
        Holdq();
        ~Holdq();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wq_eqtime; //type: uint64
        ydk::YLeaf wq_dqtime; //type: uint64
        ydk::YLeaf wq_first_eqtime; //type: uint64
        ydk::YLeaf wq_len_cur; //type: int32
        ydk::YLeaf wq_len_max; //type: int32
        ydk::YLeaf wq_total_enqueued; //type: uint32
        ydk::YLeaf wq_total_dequeued; //type: uint32
        ydk::YLeaf wq_eneueue_errs; //type: uint32
        ydk::YLeaf wq_dequeue_errs; //type: uint32
        ydk::YLeaf wq_max_latency; //type: uint64
        ydk::YLeaf wq_sum_latency; //type: uint64

}; // Ospfv3::Processes::Process::Statistics::RibThreadStats::Holdq


class Ospfv3::Processes::Process::Statistics::RibThreadStats::RibBaseTime : public ydk::Entity
{
    public:
        RibBaseTime();
        ~RibBaseTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nanosecond; //type: uint32

}; // Ospfv3::Processes::Process::Statistics::RibThreadStats::RibBaseTime


class Ospfv3::Processes::Process::Statistics::RibThreadStats::ThreadQ : public ydk::Entity
{
    public:
        ThreadQ();
        ~ThreadQ();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wq_eqtime; //type: uint64
        ydk::YLeaf wq_dqtime; //type: uint64
        ydk::YLeaf wq_first_eqtime; //type: uint64
        ydk::YLeaf wq_len_cur; //type: int32
        ydk::YLeaf wq_len_max; //type: int32
        ydk::YLeaf wq_total_enqueued; //type: uint32
        ydk::YLeaf wq_total_dequeued; //type: uint32
        ydk::YLeaf wq_eneueue_errs; //type: uint32
        ydk::YLeaf wq_dequeue_errs; //type: uint32
        ydk::YLeaf wq_max_latency; //type: uint64
        ydk::YLeaf wq_sum_latency; //type: uint64

}; // Ospfv3::Processes::Process::Statistics::RibThreadStats::ThreadQ


class Ospfv3::Processes::Process::Statistics::SpfStats : public ydk::Entity
{
    public:
        SpfStats();
        ~SpfStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SpfHeader; //type: Ospfv3::Processes::Process::Statistics::SpfStats::SpfHeader
        class SpfRuntime; //type: Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Statistics::SpfStats::SpfHeader> spf_header;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime> > spf_runtime;
        
}; // Ospfv3::Processes::Process::Statistics::SpfStats


class Ospfv3::Processes::Process::Statistics::SpfStats::SpfHeader : public ydk::Entity
{
    public:
        SpfHeader();
        ~SpfHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf header_router_id; //type: string
        ydk::YLeaf header_sp_fs; //type: uint32
        class AreaSummary; //type: Ospfv3::Processes::Process::Statistics::SpfStats::SpfHeader::AreaSummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Statistics::SpfStats::SpfHeader::AreaSummary> > area_summary;
        
}; // Ospfv3::Processes::Process::Statistics::SpfStats::SpfHeader


class Ospfv3::Processes::Process::Statistics::SpfStats::SpfHeader::AreaSummary : public ydk::Entity
{
    public:
        AreaSummary();
        ~AreaSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf area_id; //type: uint32
        ydk::YLeaf sp_fs; //type: uint32

}; // Ospfv3::Processes::Process::Statistics::SpfStats::SpfHeader::AreaSummary


class Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime : public ydk::Entity
{
    public:
        SpfRuntime();
        ~SpfRuntime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: uint32
        ydk::YLeaf rib_add_routes; //type: uint32
        ydk::YLeaf rib_delete_routes; //type: uint32
        ydk::YLeaf reason_flags; //type: string
        ydk::YLeaf lsa_changes; //type: int16
        class GlobalTime; //type: Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::GlobalTime
        class Lsa; //type: Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::Lsa
        class AreaStat; //type: Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::AreaStat

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::AreaStat> > area_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::GlobalTime> global_time;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::Lsa> > lsa;
        
}; // Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime


class Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::AreaStat : public ydk::Entity
{
    public:
        AreaStat();
        ~AreaStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf spf_stat_area_id; //type: uint32
        ydk::YLeafList spf_stat_lsa_type_count; //type: list of  uint32
        class SpfStatTime; //type: Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::AreaStat::SpfStatTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::AreaStat::SpfStatTime> spf_stat_time;
        
}; // Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::AreaStat


class Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::AreaStat::SpfStatTime : public ydk::Entity
{
    public:
        SpfStatTime();
        ~SpfStatTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dijkstra; //type: uint32
        ydk::YLeaf intra_prefix; //type: uint32
        ydk::YLeaf intra_prefix_del; //type: uint32
        ydk::YLeaf inter_prefix; //type: uint32
        ydk::YLeaf inter_prefix_del; //type: uint32
        ydk::YLeaf external_prefix; //type: uint32
        ydk::YLeaf external_prefix_del; //type: uint32
        ydk::YLeaf rib_add; //type: uint32
        ydk::YLeaf rib_del; //type: uint32

}; // Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::AreaStat::SpfStatTime


class Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::GlobalTime : public ydk::Entity
{
    public:
        GlobalTime();
        ~GlobalTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dijkstra; //type: uint32
        ydk::YLeaf intra_prefix; //type: uint32
        ydk::YLeaf intra_prefix_del; //type: uint32
        ydk::YLeaf inter_prefix; //type: uint32
        ydk::YLeaf inter_prefix_del; //type: uint32
        ydk::YLeaf external_prefix; //type: uint32
        ydk::YLeaf external_prefix_del; //type: uint32
        ydk::YLeaf rib_add; //type: uint32
        ydk::YLeaf rib_del; //type: uint32

}; // Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::GlobalTime


class Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::Lsa : public ydk::Entity
{
    public:
        Lsa();
        ~Lsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_area_id; //type: uint32
        ydk::YLeaf lsa_advertising_router; //type: string
        ydk::YLeaf lsa_id; //type: string
        ydk::YLeaf lsa_type; //type: uint8
        ydk::YLeaf lsa_flush; //type: boolean

}; // Ospfv3::Processes::Process::Statistics::SpfStats::SpfRuntime::Lsa


class Ospfv3::Processes::Process::Statistics::VrfRibBatchStats : public ydk::Entity
{
    public:
        VrfRibBatchStats();
        ~VrfRibBatchStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf batches_sent; //type: uint32
        ydk::YLeaf routes_sent; //type: uint32
        ydk::YLeaf routes_pending; //type: uint32
        ydk::YLeaf max_routes; //type: uint32
        ydk::YLeaf paths_sent; //type: uint32
        ydk::YLeaf paths_pending; //type: uint32
        ydk::YLeaf paths_add; //type: uint32
        ydk::YLeaf paths_add_errs; //type: uint32
        ydk::YLeaf paths_del; //type: uint32
        ydk::YLeaf paths_del_errs; //type: uint32

}; // Ospfv3::Processes::Process::Statistics::VrfRibBatchStats


class Ospfv3::Processes::Process::Vrfs : public ydk::Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vrf; //type: Ospfv3::Processes::Process::Vrfs::Vrf

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf> > vrf;
        
}; // Ospfv3::Processes::Process::Vrfs


class Ospfv3::Processes::Process::Vrfs::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string
        class SummaryPrefixes; //type: Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes
        class BorderRouters; //type: Ospfv3::Processes::Process::Vrfs::Vrf::BorderRouters
        class ShamLinkTable; //type: Ospfv3::Processes::Process::Vrfs::Vrf::ShamLinkTable
        class AreaInformations; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaInformations
        class DatabaseTable; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable
        class InterfaceProcessTable; //type: Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable
        class Redistributions; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Redistributions
        class ExternalRoutes; //type: Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes
        class RequestListProcessTable; //type: Ospfv3::Processes::Process::Vrfs::Vrf::RequestListProcessTable
        class VirtualLink; //type: Ospfv3::Processes::Process::Vrfs::Vrf::VirtualLink
        class FloodListProcessTable; //type: Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable
        class RouteSummary; //type: Ospfv3::Processes::Process::Vrfs::Vrf::RouteSummary
        class Areas; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas
        class InternalRoutes; //type: Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes
        class ProtocolAreas; //type: Ospfv3::Processes::Process::Vrfs::Vrf::ProtocolAreas
        class ConnectedRoutes; //type: Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes
        class VrfStatistics; //type: Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics
        class Summary; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Summary
        class RetransmissionListProcessTable; //type: Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable
        class BadChecksums; //type: Ospfv3::Processes::Process::Vrfs::Vrf::BadChecksums
        class DatabaseSummaryTable; //type: Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable
        class NeighborProcessTable; //type: Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable
        class FastReroutes; //type: Ospfv3::Processes::Process::Vrfs::Vrf::FastReroutes
        class InterfaceBriefProcessTable; //type: Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceBriefProcessTable
        class NeighborDetailProcessTable; //type: Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::AreaInformations> area_informations;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas> areas;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::BadChecksums> bad_checksums;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::BorderRouters> border_routers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes> connected_routes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseSummaryTable> database_summary_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseTable> database_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::ExternalRoutes> external_routes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::FastReroutes> fast_reroutes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::FloodListProcessTable> flood_list_process_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceBriefProcessTable> interface_brief_process_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::InterfaceProcessTable> interface_process_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes> internal_routes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::NeighborDetailProcessTable> neighbor_detail_process_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::NeighborProcessTable> neighbor_process_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::ProtocolAreas> protocol_areas;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Redistributions> redistributions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::RequestListProcessTable> request_list_process_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::RetransmissionListProcessTable> retransmission_list_process_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::RouteSummary> route_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::ShamLinkTable> sham_link_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes> summary_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::VirtualLink> virtual_link;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics> vrf_statistics;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaInformations : public ydk::Entity
{
    public:
        AreaInformations();
        ~AreaInformations();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AreaInformation; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaInformations::AreaInformation

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::AreaInformations::AreaInformation> > area_information;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaInformations


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaInformations::AreaInformation : public ydk::Entity
{
    public:
        AreaInformation();
        ~AreaInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf area_id; //type: int32
        ydk::YLeaf is_backbone_area_active; //type: boolean
        ydk::YLeaf area_interfaces; //type: uint16
        ydk::YLeaf is_area_stubbed; //type: boolean
        ydk::YLeaf is_area_total_stubbed; //type: boolean
        ydk::YLeaf stub_default_cost; //type: uint16
        ydk::YLeaf is_area_nssa; //type: boolean
        ydk::YLeaf nssa_no_redistribution; //type: boolean
        ydk::YLeaf is_nssa_translated; //type: boolean
        ydk::YLeaf is_nssa_default; //type: boolean
        ydk::YLeaf is_rrr_enabled; //type: boolean
        ydk::YLeaf sp_fs; //type: uint32
        ydk::YLeaf area_opaque_lsas; //type: uint32
        ydk::YLeaf area_opaque_lsa_checksum; //type: uint32
        ydk::YLeaf area_dc_bitless_ls_as; //type: uint32
        ydk::YLeaf indication_ls_as; //type: uint32
        ydk::YLeaf do_not_age_ls_as; //type: uint32
        ydk::YLeaf flood_list_length; //type: uint32
        ydk::YLeaf area_lfa_interface_count; //type: uint32
        ydk::YLeaf area_per_prefix_lfa_interface_count; //type: uint32
        ydk::YLeaf area_lfa_revision; //type: uint32
        class AreaRange; //type: Ospfv3::Processes::Process::Vrfs::Vrf::AreaInformations::AreaInformation::AreaRange

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::AreaInformations::AreaInformation::AreaRange> > area_range;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaInformations::AreaInformation


class Ospfv3::Processes::Process::Vrfs::Vrf::AreaInformations::AreaInformation::AreaRange : public ydk::Entity
{
    public:
        AreaRange();
        ~AreaRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range_prefix; //type: string
        ydk::YLeaf range_prefix_length; //type: uint32
        ydk::YLeaf net_cost; //type: uint32
        ydk::YLeaf status; //type: Ospfv3AreaRangeStatus
        ydk::YLeaf is_cost_configured; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaInformations::AreaInformation::AreaRange


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas : public ydk::Entity
{
    public:
        Areas();
        ~Areas();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Area; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area> > area;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area : public ydk::Entity
{
    public:
        Area();
        ~Area();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf area_id; //type: int32
        class NeighborDetailTable; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable
        class InterfaceBriefTable; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefTable
        class RequestListTable; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RequestListTable
        class NeighborTable; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable
        class InterfaceTable; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable
        class FloodListTable; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable
        class RetransmissionListTable; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable
        class DatabaseTable; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable
        class DatabaseSummaryTable; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable> database_summary_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable> database_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable> flood_list_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefTable> interface_brief_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable> interface_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetailTable> neighbor_detail_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable> neighbor_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RequestListTable> request_list_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable> retransmission_list_table;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable : public ydk::Entity
{
    public:
        DatabaseSummaryTable();
        ~DatabaseSummaryTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DatabaseSummary; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary> database_summary;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary : public ydk::Entity
{
    public:
        DatabaseSummary();
        ~DatabaseSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf database_router_id; //type: string
        ydk::YLeaf is_opaque_database_capable; //type: boolean
        class DatabaseCounters; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters
        class AreaDatabase; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase> > area_database;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters> database_counters;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase : public ydk::Entity
{
    public:
        AreaDatabase();
        ~AreaDatabase();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_area_id; //type: string
        class AreaDatabaseSummary; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary> area_database_summary;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary : public ydk::Entity
{
    public:
        AreaDatabaseSummary();
        ~AreaDatabaseSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList lsa; //type: list of  uint32
        ydk::YLeafList deleted_lsa; //type: list of  uint32
        ydk::YLeafList max_age_lsa; //type: list of  uint32
        ydk::YLeafList lsa_checksum; //type: list of  uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters : public ydk::Entity
{
    public:
        DatabaseCounters();
        ~DatabaseCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList lsa; //type: list of  uint32
        ydk::YLeafList deleted_lsa; //type: list of  uint32
        ydk::YLeafList max_age_lsa; //type: list of  uint32
        ydk::YLeafList lsa_checksum; //type: list of  uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable : public ydk::Entity
{
    public:
        DatabaseTable();
        ~DatabaseTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LsaTable; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable
        class LsaInternalTable; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable> lsa_internal_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable> lsa_table;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable : public ydk::Entity
{
    public:
        LsaInternalTable();
        ~LsaInternalTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Lsa; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa> > lsa;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa : public ydk::Entity
{
    public:
        Lsa();
        ~Lsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf area_id; //type: int32
        ydk::YLeaf ls_type; //type: Ospfv3Lsa
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf ls_id; //type: int32
        ydk::YLeaf interface_name; //type: string
        class LsaInfo; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo> lsa_info;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo : public ydk::Entity
{
    public:
        LsaInfo();
        ~LsaInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_info_type; //type: Ospfv3LsaInfoTypes
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType> external_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa> grace_lsa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType> inter_area_prefix_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType> inter_area_router_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType> intra_area_prefix_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType> link_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo> lsa_summary_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType> network_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType> nssalsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType> router_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType> unknown_area_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType> unknown_aslsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType> unknown_link_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType> unknown_lsa_type;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType : public ydk::Entity
{
    public:
        ExternalLsaType();
        ~ExternalLsaType();

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
        ydk::YLeaf metric_type; //type: Ospfv3DefaultMetric
        ydk::YLeaf tos_cost; //type: uint32
        ydk::YLeaf is_forwarding_address_set; //type: boolean
        ydk::YLeaf forwarding_address; //type: string
        ydk::YLeaf external_tag; //type: uint32
        ydk::YLeaf priority; //type: PrefixPriority
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail : public ydk::Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second_table_index; //type: uint8
        ydk::YLeaf minute_table_index; //type: uint8
        ydk::YLeaf free_time; //type: uint32
        ydk::YLeaf is_deleted; //type: boolean
        ydk::YLeaf is_routing_bit; //type: boolean
        ydk::YLeaf is_advertising_router_reachable; //type: boolean
        ydk::YLeaf is_no_delete; //type: boolean
        ydk::YLeaf is_neighbor_exchange; //type: boolean
        ydk::YLeaf is_routing_table; //type: boolean
        ydk::YLeaf is_acknowledged; //type: boolean
        ydk::YLeaf is_maximum_aged; //type: boolean
        ydk::YLeaf is_partial_spf; //type: boolean
        ydk::YLeaf is_flood_pending; //type: boolean
        ydk::YLeaf rate_limit; //type: boolean
        ydk::YLeaf is_nsr_ack_pending; //type: boolean
        ydk::YLeaf nsr_flood_required; //type: boolean
        ydk::YLeaf lsa_flood_required_post_fail_over; //type: boolean
        ydk::YLeaf lsa_length; //type: uint16
        ydk::YLeaf lsa_sync_state; //type: OspfLsaSyncState

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader : public ydk::Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint16
        ydk::YLeaf lsa_area_id; //type: string
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf is_do_not_age_lsa; //type: boolean
        ydk::YLeaf ls_id; //type: uint32
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16
        ydk::YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa : public ydk::Entity
{
    public:
        GraceLsa();
        ~GraceLsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf grace_period; //type: uint32
        ydk::YLeaf grace_reason; //type: Ospfv3GracefulRestartReason
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaDetail> lsa_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaDetail : public ydk::Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second_table_index; //type: uint8
        ydk::YLeaf minute_table_index; //type: uint8
        ydk::YLeaf free_time; //type: uint32
        ydk::YLeaf is_deleted; //type: boolean
        ydk::YLeaf is_routing_bit; //type: boolean
        ydk::YLeaf is_advertising_router_reachable; //type: boolean
        ydk::YLeaf is_no_delete; //type: boolean
        ydk::YLeaf is_neighbor_exchange; //type: boolean
        ydk::YLeaf is_routing_table; //type: boolean
        ydk::YLeaf is_acknowledged; //type: boolean
        ydk::YLeaf is_maximum_aged; //type: boolean
        ydk::YLeaf is_partial_spf; //type: boolean
        ydk::YLeaf is_flood_pending; //type: boolean
        ydk::YLeaf rate_limit; //type: boolean
        ydk::YLeaf is_nsr_ack_pending; //type: boolean
        ydk::YLeaf nsr_flood_required; //type: boolean
        ydk::YLeaf lsa_flood_required_post_fail_over; //type: boolean
        ydk::YLeaf lsa_length; //type: uint16
        ydk::YLeaf lsa_sync_state; //type: OspfLsaSyncState

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaHeader : public ydk::Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint16
        ydk::YLeaf lsa_area_id; //type: string
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf is_do_not_age_lsa; //type: boolean
        ydk::YLeaf ls_id; //type: uint32
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16
        ydk::YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType : public ydk::Entity
{
    public:
        InterAreaPrefixLsaType();
        ~InterAreaPrefixLsaType();

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
        ydk::YLeaf priority; //type: PrefixPriority
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail : public ydk::Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second_table_index; //type: uint8
        ydk::YLeaf minute_table_index; //type: uint8
        ydk::YLeaf free_time; //type: uint32
        ydk::YLeaf is_deleted; //type: boolean
        ydk::YLeaf is_routing_bit; //type: boolean
        ydk::YLeaf is_advertising_router_reachable; //type: boolean
        ydk::YLeaf is_no_delete; //type: boolean
        ydk::YLeaf is_neighbor_exchange; //type: boolean
        ydk::YLeaf is_routing_table; //type: boolean
        ydk::YLeaf is_acknowledged; //type: boolean
        ydk::YLeaf is_maximum_aged; //type: boolean
        ydk::YLeaf is_partial_spf; //type: boolean
        ydk::YLeaf is_flood_pending; //type: boolean
        ydk::YLeaf rate_limit; //type: boolean
        ydk::YLeaf is_nsr_ack_pending; //type: boolean
        ydk::YLeaf nsr_flood_required; //type: boolean
        ydk::YLeaf lsa_flood_required_post_fail_over; //type: boolean
        ydk::YLeaf lsa_length; //type: uint16
        ydk::YLeaf lsa_sync_state; //type: OspfLsaSyncState

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader : public ydk::Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint16
        ydk::YLeaf lsa_area_id; //type: string
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf is_do_not_age_lsa; //type: boolean
        ydk::YLeaf ls_id; //type: uint32
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16
        ydk::YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType : public ydk::Entity
{
    public:
        InterAreaRouterLsaType();
        ~InterAreaRouterLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_router_id; //type: uint32
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail : public ydk::Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second_table_index; //type: uint8
        ydk::YLeaf minute_table_index; //type: uint8
        ydk::YLeaf free_time; //type: uint32
        ydk::YLeaf is_deleted; //type: boolean
        ydk::YLeaf is_routing_bit; //type: boolean
        ydk::YLeaf is_advertising_router_reachable; //type: boolean
        ydk::YLeaf is_no_delete; //type: boolean
        ydk::YLeaf is_neighbor_exchange; //type: boolean
        ydk::YLeaf is_routing_table; //type: boolean
        ydk::YLeaf is_acknowledged; //type: boolean
        ydk::YLeaf is_maximum_aged; //type: boolean
        ydk::YLeaf is_partial_spf; //type: boolean
        ydk::YLeaf is_flood_pending; //type: boolean
        ydk::YLeaf rate_limit; //type: boolean
        ydk::YLeaf is_nsr_ack_pending; //type: boolean
        ydk::YLeaf nsr_flood_required; //type: boolean
        ydk::YLeaf lsa_flood_required_post_fail_over; //type: boolean
        ydk::YLeaf lsa_length; //type: uint16
        ydk::YLeaf lsa_sync_state; //type: OspfLsaSyncState

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader : public ydk::Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint16
        ydk::YLeaf lsa_area_id; //type: string
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf is_do_not_age_lsa; //type: boolean
        ydk::YLeaf ls_id; //type: uint32
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16
        ydk::YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType : public ydk::Entity
{
    public:
        IntraAreaPrefixLsaType();
        ~IntraAreaPrefixLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reference_type; //type: Ospfv3Lsa1
        ydk::YLeaf reference_lsa_id; //type: uint32
        ydk::YLeaf reference_advertised_router; //type: string
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail
        class Prefix; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader> lsa_header;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix> > prefix;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail : public ydk::Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second_table_index; //type: uint8
        ydk::YLeaf minute_table_index; //type: uint8
        ydk::YLeaf free_time; //type: uint32
        ydk::YLeaf is_deleted; //type: boolean
        ydk::YLeaf is_routing_bit; //type: boolean
        ydk::YLeaf is_advertising_router_reachable; //type: boolean
        ydk::YLeaf is_no_delete; //type: boolean
        ydk::YLeaf is_neighbor_exchange; //type: boolean
        ydk::YLeaf is_routing_table; //type: boolean
        ydk::YLeaf is_acknowledged; //type: boolean
        ydk::YLeaf is_maximum_aged; //type: boolean
        ydk::YLeaf is_partial_spf; //type: boolean
        ydk::YLeaf is_flood_pending; //type: boolean
        ydk::YLeaf rate_limit; //type: boolean
        ydk::YLeaf is_nsr_ack_pending; //type: boolean
        ydk::YLeaf nsr_flood_required; //type: boolean
        ydk::YLeaf lsa_flood_required_post_fail_over; //type: boolean
        ydk::YLeaf lsa_length; //type: uint16
        ydk::YLeaf lsa_sync_state; //type: OspfLsaSyncState

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader : public ydk::Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint16
        ydk::YLeaf lsa_area_id; //type: string
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf is_do_not_age_lsa; //type: boolean
        ydk::YLeaf ls_id; //type: uint32
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16
        ydk::YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix : public ydk::Entity
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

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf ospfv3_prefix_length; //type: uint8
        ydk::YLeaf ospfv3_prefix_options; //type: uint8
        ydk::YLeaf ospfv3_prefix_metric; //type: uint16
        ydk::YLeaf priority; //type: PrefixPriority

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType : public ydk::Entity
{
    public:
        LinkLsaType();
        ~LinkLsaType();

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
        ydk::YLeaf is_virtual_link; //type: boolean
        ydk::YLeaf virtual_link_id; //type: uint32
        ydk::YLeaf is_sham_link; //type: boolean
        ydk::YLeaf sham_link_id; //type: uint32
        ydk::YLeaf lsa_link_local; //type: string
        ydk::YLeaf router_priority; //type: uint8
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaDetail
        class Prefix; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::Prefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaHeader> lsa_header;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::Prefix> > prefix;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaDetail : public ydk::Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second_table_index; //type: uint8
        ydk::YLeaf minute_table_index; //type: uint8
        ydk::YLeaf free_time; //type: uint32
        ydk::YLeaf is_deleted; //type: boolean
        ydk::YLeaf is_routing_bit; //type: boolean
        ydk::YLeaf is_advertising_router_reachable; //type: boolean
        ydk::YLeaf is_no_delete; //type: boolean
        ydk::YLeaf is_neighbor_exchange; //type: boolean
        ydk::YLeaf is_routing_table; //type: boolean
        ydk::YLeaf is_acknowledged; //type: boolean
        ydk::YLeaf is_maximum_aged; //type: boolean
        ydk::YLeaf is_partial_spf; //type: boolean
        ydk::YLeaf is_flood_pending; //type: boolean
        ydk::YLeaf rate_limit; //type: boolean
        ydk::YLeaf is_nsr_ack_pending; //type: boolean
        ydk::YLeaf nsr_flood_required; //type: boolean
        ydk::YLeaf lsa_flood_required_post_fail_over; //type: boolean
        ydk::YLeaf lsa_length; //type: uint16
        ydk::YLeaf lsa_sync_state; //type: OspfLsaSyncState

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaHeader : public ydk::Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint16
        ydk::YLeaf lsa_area_id; //type: string
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf is_do_not_age_lsa; //type: boolean
        ydk::YLeaf ls_id; //type: uint32
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16
        ydk::YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::Prefix : public ydk::Entity
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

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf ospfv3_prefix_length; //type: uint8
        ydk::YLeaf ospfv3_prefix_options; //type: uint8
        ydk::YLeaf ospfv3_prefix_metric; //type: uint16
        ydk::YLeaf priority; //type: PrefixPriority

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::Prefix


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo : public ydk::Entity
{
    public:
        LsaSummaryInfo();
        ~LsaSummaryInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf links; //type: uint16
        ydk::YLeaf router_la_bits; //type: uint8
        ydk::YLeaf reference_type; //type: uint16
        ydk::YLeaf reference_lsa_id; //type: uint32
        ydk::YLeaf lsa_router_id; //type: uint32
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf is_virtual_link; //type: boolean
        ydk::YLeaf virtual_link_id; //type: uint32
        ydk::YLeaf is_sham_link; //type: boolean
        ydk::YLeaf sham_link_id; //type: uint32
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail> lsa_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail : public ydk::Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second_table_index; //type: uint8
        ydk::YLeaf minute_table_index; //type: uint8
        ydk::YLeaf free_time; //type: uint32
        ydk::YLeaf is_deleted; //type: boolean
        ydk::YLeaf is_routing_bit; //type: boolean
        ydk::YLeaf is_advertising_router_reachable; //type: boolean
        ydk::YLeaf is_no_delete; //type: boolean
        ydk::YLeaf is_neighbor_exchange; //type: boolean
        ydk::YLeaf is_routing_table; //type: boolean
        ydk::YLeaf is_acknowledged; //type: boolean
        ydk::YLeaf is_maximum_aged; //type: boolean
        ydk::YLeaf is_partial_spf; //type: boolean
        ydk::YLeaf is_flood_pending; //type: boolean
        ydk::YLeaf rate_limit; //type: boolean
        ydk::YLeaf is_nsr_ack_pending; //type: boolean
        ydk::YLeaf nsr_flood_required; //type: boolean
        ydk::YLeaf lsa_flood_required_post_fail_over; //type: boolean
        ydk::YLeaf lsa_length; //type: uint16
        ydk::YLeaf lsa_sync_state; //type: OspfLsaSyncState

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader : public ydk::Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint16
        ydk::YLeaf lsa_area_id; //type: string
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf is_do_not_age_lsa; //type: boolean
        ydk::YLeaf ls_id; //type: uint32
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16
        ydk::YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType : public ydk::Entity
{
    public:
        NetworkLsaType();
        ~NetworkLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList neighbor_router; //type: list of  string
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail : public ydk::Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second_table_index; //type: uint8
        ydk::YLeaf minute_table_index; //type: uint8
        ydk::YLeaf free_time; //type: uint32
        ydk::YLeaf is_deleted; //type: boolean
        ydk::YLeaf is_routing_bit; //type: boolean
        ydk::YLeaf is_advertising_router_reachable; //type: boolean
        ydk::YLeaf is_no_delete; //type: boolean
        ydk::YLeaf is_neighbor_exchange; //type: boolean
        ydk::YLeaf is_routing_table; //type: boolean
        ydk::YLeaf is_acknowledged; //type: boolean
        ydk::YLeaf is_maximum_aged; //type: boolean
        ydk::YLeaf is_partial_spf; //type: boolean
        ydk::YLeaf is_flood_pending; //type: boolean
        ydk::YLeaf rate_limit; //type: boolean
        ydk::YLeaf is_nsr_ack_pending; //type: boolean
        ydk::YLeaf nsr_flood_required; //type: boolean
        ydk::YLeaf lsa_flood_required_post_fail_over; //type: boolean
        ydk::YLeaf lsa_length; //type: uint16
        ydk::YLeaf lsa_sync_state; //type: OspfLsaSyncState

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader : public ydk::Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint16
        ydk::YLeaf lsa_area_id; //type: string
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf is_do_not_age_lsa; //type: boolean
        ydk::YLeaf ls_id; //type: uint32
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16
        ydk::YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType : public ydk::Entity
{
    public:
        NssalsaType();
        ~NssalsaType();

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
        ydk::YLeaf metric_type; //type: Ospfv3DefaultMetric
        ydk::YLeaf tos_cost; //type: uint32
        ydk::YLeaf is_forwarding_address_set; //type: boolean
        ydk::YLeaf forwarding_address; //type: string
        ydk::YLeaf external_tag; //type: uint32
        ydk::YLeaf priority; //type: PrefixPriority
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaDetail> lsa_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaDetail : public ydk::Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second_table_index; //type: uint8
        ydk::YLeaf minute_table_index; //type: uint8
        ydk::YLeaf free_time; //type: uint32
        ydk::YLeaf is_deleted; //type: boolean
        ydk::YLeaf is_routing_bit; //type: boolean
        ydk::YLeaf is_advertising_router_reachable; //type: boolean
        ydk::YLeaf is_no_delete; //type: boolean
        ydk::YLeaf is_neighbor_exchange; //type: boolean
        ydk::YLeaf is_routing_table; //type: boolean
        ydk::YLeaf is_acknowledged; //type: boolean
        ydk::YLeaf is_maximum_aged; //type: boolean
        ydk::YLeaf is_partial_spf; //type: boolean
        ydk::YLeaf is_flood_pending; //type: boolean
        ydk::YLeaf rate_limit; //type: boolean
        ydk::YLeaf is_nsr_ack_pending; //type: boolean
        ydk::YLeaf nsr_flood_required; //type: boolean
        ydk::YLeaf lsa_flood_required_post_fail_over; //type: boolean
        ydk::YLeaf lsa_length; //type: uint16
        ydk::YLeaf lsa_sync_state; //type: OspfLsaSyncState

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaHeader : public ydk::Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint16
        ydk::YLeaf lsa_area_id; //type: string
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf is_do_not_age_lsa; //type: boolean
        ydk::YLeaf ls_id; //type: uint32
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16
        ydk::YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType : public ydk::Entity
{
    public:
        RouterLsaType();
        ~RouterLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf router_la_bits; //type: uint8
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail
        class RpfPath; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RpfPath
        class Link; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::Link

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::Link> > link;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader> lsa_header;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RpfPath> rpf_path;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::Link : public ydk::Entity
{
    public:
        Link();
        ~Link();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_type; //type: Ospfv3Link
        ydk::YLeaf link_metric; //type: uint16
        ydk::YLeaf link_interface_id; //type: uint32
        ydk::YLeaf link_neighbor_interface_id; //type: uint32
        ydk::YLeaf link_neighbor_router_id; //type: uint32

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::Link


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail : public ydk::Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second_table_index; //type: uint8
        ydk::YLeaf minute_table_index; //type: uint8
        ydk::YLeaf free_time; //type: uint32
        ydk::YLeaf is_deleted; //type: boolean
        ydk::YLeaf is_routing_bit; //type: boolean
        ydk::YLeaf is_advertising_router_reachable; //type: boolean
        ydk::YLeaf is_no_delete; //type: boolean
        ydk::YLeaf is_neighbor_exchange; //type: boolean
        ydk::YLeaf is_routing_table; //type: boolean
        ydk::YLeaf is_acknowledged; //type: boolean
        ydk::YLeaf is_maximum_aged; //type: boolean
        ydk::YLeaf is_partial_spf; //type: boolean
        ydk::YLeaf is_flood_pending; //type: boolean
        ydk::YLeaf rate_limit; //type: boolean
        ydk::YLeaf is_nsr_ack_pending; //type: boolean
        ydk::YLeaf nsr_flood_required; //type: boolean
        ydk::YLeaf lsa_flood_required_post_fail_over; //type: boolean
        ydk::YLeaf lsa_length; //type: uint16
        ydk::YLeaf lsa_sync_state; //type: OspfLsaSyncState

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader : public ydk::Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint16
        ydk::YLeaf lsa_area_id; //type: string
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf is_do_not_age_lsa; //type: boolean
        ydk::YLeaf ls_id; //type: uint32
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16
        ydk::YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RpfPath : public ydk::Entity
{
    public:
        RpfPath();
        ~RpfPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rpf_multicast_next_hop; //type: uint32
        ydk::YLeaf interface_name; //type: string

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RpfPath


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType : public ydk::Entity
{
    public:
        UnknownAreaLsaType();
        ~UnknownAreaLsaType();

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
        ydk::YLeaf is_virtual_link; //type: boolean
        ydk::YLeaf virtual_link_id; //type: uint32
        ydk::YLeaf is_sham_link; //type: boolean
        ydk::YLeaf sham_link_id; //type: uint32
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail : public ydk::Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second_table_index; //type: uint8
        ydk::YLeaf minute_table_index; //type: uint8
        ydk::YLeaf free_time; //type: uint32
        ydk::YLeaf is_deleted; //type: boolean
        ydk::YLeaf is_routing_bit; //type: boolean
        ydk::YLeaf is_advertising_router_reachable; //type: boolean
        ydk::YLeaf is_no_delete; //type: boolean
        ydk::YLeaf is_neighbor_exchange; //type: boolean
        ydk::YLeaf is_routing_table; //type: boolean
        ydk::YLeaf is_acknowledged; //type: boolean
        ydk::YLeaf is_maximum_aged; //type: boolean
        ydk::YLeaf is_partial_spf; //type: boolean
        ydk::YLeaf is_flood_pending; //type: boolean
        ydk::YLeaf rate_limit; //type: boolean
        ydk::YLeaf is_nsr_ack_pending; //type: boolean
        ydk::YLeaf nsr_flood_required; //type: boolean
        ydk::YLeaf lsa_flood_required_post_fail_over; //type: boolean
        ydk::YLeaf lsa_length; //type: uint16
        ydk::YLeaf lsa_sync_state; //type: OspfLsaSyncState

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader : public ydk::Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint16
        ydk::YLeaf lsa_area_id; //type: string
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf is_do_not_age_lsa; //type: boolean
        ydk::YLeaf ls_id; //type: uint32
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16
        ydk::YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType : public ydk::Entity
{
    public:
        UnknownAslsaType();
        ~UnknownAslsaType();

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
        ydk::YLeaf is_virtual_link; //type: boolean
        ydk::YLeaf virtual_link_id; //type: uint32
        ydk::YLeaf is_sham_link; //type: boolean
        ydk::YLeaf sham_link_id; //type: uint32
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail> lsa_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail : public ydk::Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second_table_index; //type: uint8
        ydk::YLeaf minute_table_index; //type: uint8
        ydk::YLeaf free_time; //type: uint32
        ydk::YLeaf is_deleted; //type: boolean
        ydk::YLeaf is_routing_bit; //type: boolean
        ydk::YLeaf is_advertising_router_reachable; //type: boolean
        ydk::YLeaf is_no_delete; //type: boolean
        ydk::YLeaf is_neighbor_exchange; //type: boolean
        ydk::YLeaf is_routing_table; //type: boolean
        ydk::YLeaf is_acknowledged; //type: boolean
        ydk::YLeaf is_maximum_aged; //type: boolean
        ydk::YLeaf is_partial_spf; //type: boolean
        ydk::YLeaf is_flood_pending; //type: boolean
        ydk::YLeaf rate_limit; //type: boolean
        ydk::YLeaf is_nsr_ack_pending; //type: boolean
        ydk::YLeaf nsr_flood_required; //type: boolean
        ydk::YLeaf lsa_flood_required_post_fail_over; //type: boolean
        ydk::YLeaf lsa_length; //type: uint16
        ydk::YLeaf lsa_sync_state; //type: OspfLsaSyncState

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader : public ydk::Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint16
        ydk::YLeaf lsa_area_id; //type: string
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf is_do_not_age_lsa; //type: boolean
        ydk::YLeaf ls_id; //type: uint32
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16
        ydk::YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType : public ydk::Entity
{
    public:
        UnknownLinkLsaType();
        ~UnknownLinkLsaType();

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
        ydk::YLeaf is_virtual_link; //type: boolean
        ydk::YLeaf virtual_link_id; //type: uint32
        ydk::YLeaf is_sham_link; //type: boolean
        ydk::YLeaf sham_link_id; //type: uint32
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail : public ydk::Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second_table_index; //type: uint8
        ydk::YLeaf minute_table_index; //type: uint8
        ydk::YLeaf free_time; //type: uint32
        ydk::YLeaf is_deleted; //type: boolean
        ydk::YLeaf is_routing_bit; //type: boolean
        ydk::YLeaf is_advertising_router_reachable; //type: boolean
        ydk::YLeaf is_no_delete; //type: boolean
        ydk::YLeaf is_neighbor_exchange; //type: boolean
        ydk::YLeaf is_routing_table; //type: boolean
        ydk::YLeaf is_acknowledged; //type: boolean
        ydk::YLeaf is_maximum_aged; //type: boolean
        ydk::YLeaf is_partial_spf; //type: boolean
        ydk::YLeaf is_flood_pending; //type: boolean
        ydk::YLeaf rate_limit; //type: boolean
        ydk::YLeaf is_nsr_ack_pending; //type: boolean
        ydk::YLeaf nsr_flood_required; //type: boolean
        ydk::YLeaf lsa_flood_required_post_fail_over; //type: boolean
        ydk::YLeaf lsa_length; //type: uint16
        ydk::YLeaf lsa_sync_state; //type: OspfLsaSyncState

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader : public ydk::Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint16
        ydk::YLeaf lsa_area_id; //type: string
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf is_do_not_age_lsa; //type: boolean
        ydk::YLeaf ls_id; //type: uint32
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16
        ydk::YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType : public ydk::Entity
{
    public:
        UnknownLsaType();
        ~UnknownLsaType();

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
        ydk::YLeaf is_virtual_link; //type: boolean
        ydk::YLeaf virtual_link_id; //type: uint32
        ydk::YLeaf is_sham_link; //type: boolean
        ydk::YLeaf sham_link_id; //type: uint32
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail : public ydk::Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second_table_index; //type: uint8
        ydk::YLeaf minute_table_index; //type: uint8
        ydk::YLeaf free_time; //type: uint32
        ydk::YLeaf is_deleted; //type: boolean
        ydk::YLeaf is_routing_bit; //type: boolean
        ydk::YLeaf is_advertising_router_reachable; //type: boolean
        ydk::YLeaf is_no_delete; //type: boolean
        ydk::YLeaf is_neighbor_exchange; //type: boolean
        ydk::YLeaf is_routing_table; //type: boolean
        ydk::YLeaf is_acknowledged; //type: boolean
        ydk::YLeaf is_maximum_aged; //type: boolean
        ydk::YLeaf is_partial_spf; //type: boolean
        ydk::YLeaf is_flood_pending; //type: boolean
        ydk::YLeaf rate_limit; //type: boolean
        ydk::YLeaf is_nsr_ack_pending; //type: boolean
        ydk::YLeaf nsr_flood_required; //type: boolean
        ydk::YLeaf lsa_flood_required_post_fail_over; //type: boolean
        ydk::YLeaf lsa_length; //type: uint16
        ydk::YLeaf lsa_sync_state; //type: OspfLsaSyncState

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader : public ydk::Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint16
        ydk::YLeaf lsa_area_id; //type: string
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf is_do_not_age_lsa; //type: boolean
        ydk::YLeaf ls_id; //type: uint32
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16
        ydk::YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable : public ydk::Entity
{
    public:
        LsaTable();
        ~LsaTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Lsa; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa> > lsa;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa : public ydk::Entity
{
    public:
        Lsa();
        ~Lsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf area_id; //type: int32
        ydk::YLeaf ls_type; //type: Ospfv3Lsa
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf ls_id; //type: int32
        ydk::YLeaf interface_name; //type: string
        class LsaInfo; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo> lsa_info;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo : public ydk::Entity
{
    public:
        LsaInfo();
        ~LsaInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_info_type; //type: Ospfv3LsaInfoTypes
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType> external_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa> grace_lsa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType> inter_area_prefix_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType> inter_area_router_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType> intra_area_prefix_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType> link_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo> lsa_summary_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType> network_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType> nssalsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType> router_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType> unknown_area_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType> unknown_aslsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType> unknown_link_lsa_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType> unknown_lsa_type;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType : public ydk::Entity
{
    public:
        ExternalLsaType();
        ~ExternalLsaType();

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
        ydk::YLeaf metric_type; //type: Ospfv3DefaultMetric
        ydk::YLeaf tos_cost; //type: uint32
        ydk::YLeaf is_forwarding_address_set; //type: boolean
        ydk::YLeaf forwarding_address; //type: string
        ydk::YLeaf external_tag; //type: uint32
        ydk::YLeaf priority; //type: PrefixPriority
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail : public ydk::Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second_table_index; //type: uint8
        ydk::YLeaf minute_table_index; //type: uint8
        ydk::YLeaf free_time; //type: uint32
        ydk::YLeaf is_deleted; //type: boolean
        ydk::YLeaf is_routing_bit; //type: boolean
        ydk::YLeaf is_advertising_router_reachable; //type: boolean
        ydk::YLeaf is_no_delete; //type: boolean
        ydk::YLeaf is_neighbor_exchange; //type: boolean
        ydk::YLeaf is_routing_table; //type: boolean
        ydk::YLeaf is_acknowledged; //type: boolean
        ydk::YLeaf is_maximum_aged; //type: boolean
        ydk::YLeaf is_partial_spf; //type: boolean
        ydk::YLeaf is_flood_pending; //type: boolean
        ydk::YLeaf rate_limit; //type: boolean
        ydk::YLeaf is_nsr_ack_pending; //type: boolean
        ydk::YLeaf nsr_flood_required; //type: boolean
        ydk::YLeaf lsa_flood_required_post_fail_over; //type: boolean
        ydk::YLeaf lsa_length; //type: uint16
        ydk::YLeaf lsa_sync_state; //type: OspfLsaSyncState

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader : public ydk::Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint16
        ydk::YLeaf lsa_area_id; //type: string
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf is_do_not_age_lsa; //type: boolean
        ydk::YLeaf ls_id; //type: uint32
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16
        ydk::YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa : public ydk::Entity
{
    public:
        GraceLsa();
        ~GraceLsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf grace_period; //type: uint32
        ydk::YLeaf grace_reason; //type: Ospfv3GracefulRestartReason
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaDetail> lsa_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaDetail : public ydk::Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second_table_index; //type: uint8
        ydk::YLeaf minute_table_index; //type: uint8
        ydk::YLeaf free_time; //type: uint32
        ydk::YLeaf is_deleted; //type: boolean
        ydk::YLeaf is_routing_bit; //type: boolean
        ydk::YLeaf is_advertising_router_reachable; //type: boolean
        ydk::YLeaf is_no_delete; //type: boolean
        ydk::YLeaf is_neighbor_exchange; //type: boolean
        ydk::YLeaf is_routing_table; //type: boolean
        ydk::YLeaf is_acknowledged; //type: boolean
        ydk::YLeaf is_maximum_aged; //type: boolean
        ydk::YLeaf is_partial_spf; //type: boolean
        ydk::YLeaf is_flood_pending; //type: boolean
        ydk::YLeaf rate_limit; //type: boolean
        ydk::YLeaf is_nsr_ack_pending; //type: boolean
        ydk::YLeaf nsr_flood_required; //type: boolean
        ydk::YLeaf lsa_flood_required_post_fail_over; //type: boolean
        ydk::YLeaf lsa_length; //type: uint16
        ydk::YLeaf lsa_sync_state; //type: OspfLsaSyncState

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaDetail


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaHeader : public ydk::Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint16
        ydk::YLeaf lsa_area_id; //type: string
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf is_do_not_age_lsa; //type: boolean
        ydk::YLeaf ls_id; //type: uint32
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16
        ydk::YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaHeader


class Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType : public ydk::Entity
{
    public:
        InterAreaPrefixLsaType();
        ~InterAreaPrefixLsaType();

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
        ydk::YLeaf priority; //type: PrefixPriority
        class LsaHeader; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType


}
}

#endif /* _CISCO_IOS_XR_IPV6_OSPFV3_OPER_2_ */

