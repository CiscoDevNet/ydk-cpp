#ifndef _CISCO_IOS_XR_IPV6_OSPFV3_OPER_4_
#define _CISCO_IOS_XR_IPV6_OSPFV3_OPER_4_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv6_ospfv3_oper_0.hpp"
#include "Cisco_IOS_XR_ipv6_ospfv3_oper_2.hpp"
#include "Cisco_IOS_XR_ipv6_ospfv3_oper_3.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv6_ospfv3_oper {


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo : public Entity
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

        class LsaHeader; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader> lsa_header;


}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader : public Entity
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



}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail : public Entity
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



}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType : public Entity
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

        class LsaHeader; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail
        class RpfPath; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RpfPath
        class Link; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::Link

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::Link> > link;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader> lsa_header;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RpfPath> rpf_path;


}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader : public Entity
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



}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail : public Entity
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



}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RpfPath : public Entity
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



}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RpfPath


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::Link : public Entity
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



}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::Link


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType : public Entity
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

        class LsaHeader; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader> lsa_header;


}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader : public Entity
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



}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail : public Entity
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



}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType : public Entity
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

        class LsaHeader; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader> lsa_header;


}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader : public Entity
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



}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail : public Entity
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



}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType : public Entity
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

        class LsaHeader; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader> lsa_header;


}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader : public Entity
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



}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail : public Entity
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



}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType : public Entity
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

        class LsaHeader; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader> lsa_header;


}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader : public Entity
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



}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail : public Entity
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



}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType : public Entity
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

        class LsaHeader; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaHeader> lsa_header;


}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaHeader : public Entity
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



}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaHeader


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaDetail : public Entity
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



}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaDetail


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType : public Entity
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

        class LsaHeader; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaDetail
        class Prefix; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::Prefix

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaHeader> lsa_header;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::Prefix> > prefix;


}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaHeader : public Entity
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



}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaHeader


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaDetail : public Entity
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



}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaDetail


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::Prefix : public Entity
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



}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::Prefix


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType : public Entity
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

        class LsaHeader; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail
        class Prefix; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader> lsa_header;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix> > prefix;


}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader : public Entity
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



}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail : public Entity
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



}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix : public Entity
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



}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa : public Entity
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

        class LsaHeader; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaHeader> lsa_header;


}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaHeader : public Entity
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



}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaHeader


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaDetail : public Entity
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



}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaDetail


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType : public Entity
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

        class LsaHeader; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader> lsa_header;


}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader : public Entity
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



}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail : public Entity
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



}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType : public Entity
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

        class LsaHeader; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader> lsa_header;


}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader : public Entity
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



}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail : public Entity
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



}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType : public Entity
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

        class LsaHeader; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader> lsa_header;


}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader : public Entity
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



}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail : public Entity
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



}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType : public Entity
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

        class LsaHeader; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader> lsa_header;


}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader : public Entity
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



}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail : public Entity
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



}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable : public Entity
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



        class DatabaseSummary; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary> database_summary;


}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary : public Entity
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

        class DatabaseCounters; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters
        class AreaDatabase; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase> > area_database;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters> database_counters;


}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters : public Entity
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



}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase : public Entity
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

        class AreaDatabaseSummary; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary> area_database_summary;


}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary : public Entity
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



}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary


class Ospfv3::Processes::Process::DefaultVrf::InternalRoutes : public Entity
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



        class InternalRoute; //type: Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute> > internal_route;


}; // Ospfv3::Processes::Process::DefaultVrf::InternalRoutes


class Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute : public Entity
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

        class RouteTopology; //type: Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RouteTopology
        class RouteSource; //type: Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RouteSource
        class RoutePath; //type: Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RoutePath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RoutePath> > route_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RouteSource> > route_source;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RouteTopology> route_topology;


}; // Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute


class Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RouteTopology : public Entity
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



}; // Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RouteTopology


class Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RouteSource : public Entity
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



}; // Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RouteSource


class Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RoutePath : public Entity
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

        class RouteBackupPath; //type: Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RoutePath::RouteBackupPath

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RoutePath::RouteBackupPath> route_backup_path;


}; // Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RoutePath


class Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RoutePath::RouteBackupPath : public Entity
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



}; // Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RoutePath::RouteBackupPath


class Ospfv3::Processes::Process::DefaultVrf::ProtocolAreas : public Entity
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



        class ProtocolArea; //type: Ospfv3::Processes::Process::DefaultVrf::ProtocolAreas::ProtocolArea

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::ProtocolAreas::ProtocolArea> > protocol_area;


}; // Ospfv3::Processes::Process::DefaultVrf::ProtocolAreas


class Ospfv3::Processes::Process::DefaultVrf::ProtocolAreas::ProtocolArea : public Entity
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

        class ProtocolInterface; //type: Ospfv3::Processes::Process::DefaultVrf::ProtocolAreas::ProtocolArea::ProtocolInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::ProtocolAreas::ProtocolArea::ProtocolInterface> > protocol_interface;


}; // Ospfv3::Processes::Process::DefaultVrf::ProtocolAreas::ProtocolArea


class Ospfv3::Processes::Process::DefaultVrf::ProtocolAreas::ProtocolArea::ProtocolInterface : public Entity
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



}; // Ospfv3::Processes::Process::DefaultVrf::ProtocolAreas::ProtocolArea::ProtocolInterface


class Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes : public Entity
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



        class ConnectedRoute; //type: Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute> > connected_route;


}; // Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes


class Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute : public Entity
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

        class RouteTopology; //type: Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute::RouteTopology
        class RoutePath; //type: Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute::RoutePath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute::RoutePath> > route_path;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute::RouteTopology> route_topology;


}; // Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute


class Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute::RouteTopology : public Entity
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



}; // Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute::RouteTopology


class Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute::RoutePath : public Entity
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

        class RouteBackupPath; //type: Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute::RoutePath::RouteBackupPath

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute::RoutePath::RouteBackupPath> route_backup_path;


}; // Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute::RoutePath


class Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute::RoutePath::RouteBackupPath : public Entity
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



}; // Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute::RoutePath::RouteBackupPath


class Ospfv3::Processes::Process::DefaultVrf::VrfStatistics : public Entity
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



        class ProtocolStats; //type: Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::ProtocolStats
        class SpfStats; //type: Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats
        class RawioStats; //type: Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::RawioStats
        class PrefixPriorityStats; //type: Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::PrefixPriorityStats
        class VrfRibBatchStats; //type: Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::VrfRibBatchStats

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::PrefixPriorityStats> prefix_priority_stats;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::ProtocolStats> protocol_stats;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::RawioStats> rawio_stats;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats> spf_stats;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::VrfRibBatchStats> vrf_rib_batch_stats;


}; // Ospfv3::Processes::Process::DefaultVrf::VrfStatistics


class Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::ProtocolStats : public Entity
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



        class ProtocolStat; //type: Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::ProtocolStats::ProtocolStat

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::ProtocolStats::ProtocolStat> > protocol_stat;


}; // Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::ProtocolStats


class Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::ProtocolStats::ProtocolStat : public Entity
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



}; // Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::ProtocolStats::ProtocolStat


class Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats : public Entity
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



        class SpfHeader; //type: Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfHeader
        class SpfRuntime; //type: Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfHeader> spf_header;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime> > spf_runtime;


}; // Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats


class Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfHeader : public Entity
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

        class AreaSummary; //type: Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfHeader::AreaSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfHeader::AreaSummary> > area_summary;


}; // Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfHeader


class Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfHeader::AreaSummary : public Entity
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



}; // Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfHeader::AreaSummary


class Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime : public Entity
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

        class GlobalTime; //type: Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::GlobalTime
        class Lsa; //type: Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::Lsa
        class AreaStat; //type: Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat> > area_stat;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::GlobalTime> global_time;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::Lsa> > lsa;


}; // Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime


class Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::GlobalTime : public Entity
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



}; // Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::GlobalTime


class Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::Lsa : public Entity
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



}; // Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::Lsa


class Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat : public Entity
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

        class SpfStatTime; //type: Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat::SpfStatTime

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat::SpfStatTime> spf_stat_time;


}; // Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat


class Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat::SpfStatTime : public Entity
{
    public:
        SpfStatTime();
        ~SpfStatTime();

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



}; // Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat::SpfStatTime


class Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::RawioStats : public Entity
{
    public:
        RawioStats();
        ~RawioStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf raw_conn_open; //type: uint64
        YLeaf raw_conn_close; //type: uint64
        YLeaf raw_conn_error; //type: uint64
        YLeaf in_packets; //type: uint64
        YLeaf in_bytes; //type: uint64
        YLeaf in_long_packets; //type: uint64
        YLeaf in_malloc_drops; //type: uint64
        YLeaf in_handle_drops; //type: uint64
        YLeaf in_short_drops; //type: uint64
        YLeaf in_error_drops; //type: uint64
        YLeaf in_ipsec_drops; //type: uint64
        YLeaf in_queue_drops; //type: uint64
        YLeaf out_packets; //type: uint64
        YLeaf out_bytes; //type: uint64
        YLeaf out_nofd_drops; //type: uint64
        YLeaf out_error_drops; //type: uint64
        YLeaf out_ipsec_drops; //type: uint64
        YLeaf out_nopak_drops; //type: uint64
        YLeaf out_pakapi_errors; //type: uint64
        YLeaf raw_conn_state; //type: uint32



}; // Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::RawioStats


class Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::PrefixPriorityStats : public Entity
{
    public:
        PrefixPriorityStats();
        ~PrefixPriorityStats();

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



}; // Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::PrefixPriorityStats


class Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::VrfRibBatchStats : public Entity
{
    public:
        VrfRibBatchStats();
        ~VrfRibBatchStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf batches_sent; //type: uint32
        YLeaf routes_sent; //type: uint32
        YLeaf routes_pending; //type: uint32
        YLeaf max_routes; //type: uint32
        YLeaf paths_sent; //type: uint32
        YLeaf paths_pending; //type: uint32
        YLeaf paths_add; //type: uint32
        YLeaf paths_add_errs; //type: uint32
        YLeaf paths_del; //type: uint32
        YLeaf paths_del_errs; //type: uint32



}; // Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::VrfRibBatchStats


class Ospfv3::Processes::Process::DefaultVrf::Summary : public Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Protocol; //type: Ospfv3::Processes::Process::DefaultVrf::Summary::Protocol
        class Ospfv3_; //type: Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_
        class Route; //type: Ospfv3::Processes::Process::DefaultVrf::Summary::Route

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_> ospfv3;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Summary::Protocol> protocol;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Summary::Route> route;


}; // Ospfv3::Processes::Process::DefaultVrf::Summary


class Ospfv3::Processes::Process::DefaultVrf::Summary::Protocol : public Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf protocol_router_id; //type: string
        YLeaf administrative_distance; //type: uint32
        YLeaf administrative_distance_inter_area; //type: uint32
        YLeaf administrative_distance_external; //type: uint32
        YLeaf is_graceful_restart; //type: boolean
        YLeaf distribute_list_in; //type: string



}; // Ospfv3::Processes::Process::DefaultVrf::Summary::Protocol


class Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_ : public Entity
{
    public:
        Ospfv3_();
        ~Ospfv3_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_id; //type: string
        YLeaf is_role_standby; //type: boolean
        YLeaf role; //type: uint32
        YLeaf is_nsr_enabled; //type: boolean
        YLeaf is_nsr_switchover_on_restart; //type: boolean
        YLeaf is_router_id_stalled; //type: boolean
        YLeaf is_opaque_capable; //type: boolean
        YLeaf is_area_border_router; //type: boolean
        YLeaf is_as_border_router; //type: boolean
        YLeaf metric; //type: uint32
        YLeaf is_default_originated; //type: boolean
        YLeaf is_default_always; //type: boolean
        YLeaf default_metric; //type: uint32
        YLeaf default_metric_type; //type: Ospfv3DefaultMetricEnum
        YLeaf default_tag; //type: uint32
        YLeaf is_default_policy; //type: boolean
        YLeaf default_policy_name; //type: string
        YLeaf spf_start_time; //type: uint32
        YLeaf spf_hold_time; //type: uint32
        YLeaf spf_maximum_time; //type: uint32
        YLeaf lsa_start_time; //type: uint32
        YLeaf lsa_hold_time; //type: uint32
        YLeaf lsa_maximum_time; //type: uint32
        YLeaf minimum_lsa_interval; //type: uint32
        YLeaf lsa_group_interval; //type: uint32
        YLeaf lsa_flood_pacing_interval; //type: uint32
        YLeaf lsa_retransmission_pacing_interval; //type: uint32
        YLeaf as_ls_as; //type: uint32
        YLeaf opaque_lsas; //type: uint32
        YLeaf opaque_lsa_checksum; //type: uint32
        YLeaf as_dc_bitless_ls_as; //type: uint32
        YLeaf as_do_not_age_ls_as; //type: uint32
        YLeaf areas; //type: uint16
        YLeaf normal_areas; //type: uint16
        YLeaf stub_areas; //type: uint16
        YLeaf nssa_areas; //type: uint16
        YLeaf as_lsa_flood_list_length; //type: uint32
        YLeaf is_grace_restart_enabled; //type: boolean
        YLeaf last_nsf_time; //type: uint32
        YLeaf grace_resync_time; //type: uint32
        YLeaf maximum_interfaces; //type: uint32
        YLeaf maximum_paths; //type: uint32
        YLeaf redistribution_limit; //type: uint32
        YLeaf redistribution_threshold; //type: uint32
        YLeaf is_auto_cost; //type: boolean
        YLeaf reference_bandwidth; //type: uint32
        YLeaf context_name; //type: string
        YLeaf snmp_trap_enabled; //type: boolean
        YLeaf graceful_shutdown_state; //type: Ospfv3GracefulShutdownStateEnum

        class DomainId; //type: Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::DomainId
        class StubRouter; //type: Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter
        class IpfrrTiebreakers; //type: Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::IpfrrTiebreakers

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::DomainId> domain_id;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::IpfrrTiebreakers> > ipfrr_tiebreakers;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter> > stub_router;


}; // Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_


class Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::DomainId : public Entity
{
    public:
        DomainId();
        ~DomainId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PrimaryDomainId; //type: Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::DomainId::PrimaryDomainId
        class SecondaryDomainId; //type: Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::DomainId::SecondaryDomainId

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::DomainId::PrimaryDomainId> primary_domain_id;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::DomainId::SecondaryDomainId> > secondary_domain_id;


}; // Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::DomainId


class Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::DomainId::PrimaryDomainId : public Entity
{
    public:
        PrimaryDomainId();
        ~PrimaryDomainId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf domain_id_type; //type: uint16
        YLeaf domain_id_value; //type: string



}; // Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::DomainId::PrimaryDomainId


class Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::DomainId::SecondaryDomainId : public Entity
{
    public:
        SecondaryDomainId();
        ~SecondaryDomainId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf domain_id_type; //type: uint16
        YLeaf domain_id_value; //type: string



}; // Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::DomainId::SecondaryDomainId


class Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter : public Entity
{
    public:
        StubRouter();
        ~StubRouter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mode; //type: StubRouterModeEnum
        YLeaf active; //type: boolean
        YLeaf remaining_time; //type: uint32
        YLeaf set_reason; //type: StubRouterTriggerEnum
        YLeaf unset_reason; //type: StubRouterExitReasonEnum
        YLeaf include_stub_links; //type: boolean
        YLeaf summary_lsa_metric; //type: uint32
        YLeaf external_lsa_metric; //type: uint32
        YLeaf abr_off_reason; //type: StubRouterAbrOffReasonEnum

        class UnsetTime; //type: Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::UnsetTime
        class StartTime; //type: Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::StartTime
        class AbrResumeTime; //type: Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::AbrResumeTime
        class Trigger; //type: Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::Trigger

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::AbrResumeTime> abr_resume_time;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::StartTime> start_time;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::Trigger> > trigger;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::UnsetTime> unset_time;


}; // Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter


class Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::UnsetTime : public Entity
{
    public:
        UnsetTime();
        ~UnsetTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::UnsetTime


class Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::StartTime : public Entity
{
    public:
        StartTime();
        ~StartTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::StartTime


class Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::AbrResumeTime : public Entity
{
    public:
        AbrResumeTime();
        ~AbrResumeTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::AbrResumeTime


class Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::Trigger : public Entity
{
    public:
        Trigger();
        ~Trigger();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf trigger; //type: StubRouterTriggerEnum
        YLeaf wait_for_bgp; //type: boolean
        YLeaf unset_reason; //type: StubRouterExitReasonEnum
        YLeaf time; //type: uint32

        class UnsetTime; //type: Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::Trigger::UnsetTime
        class StartTime; //type: Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::Trigger::StartTime

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::Trigger::StartTime> start_time;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::Trigger::UnsetTime> unset_time;


}; // Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::Trigger


class Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::Trigger::UnsetTime : public Entity
{
    public:
        UnsetTime();
        ~UnsetTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::Trigger::UnsetTime


class Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::Trigger::StartTime : public Entity
{
    public:
        StartTime();
        ~StartTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::Trigger::StartTime


class Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::IpfrrTiebreakers : public Entity
{
    public:
        IpfrrTiebreakers();
        ~IpfrrTiebreakers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tiebreaker_type; //type: IpfrrTbrkrEnum
        YLeaf tiebreaker_index; //type: uint32



}; // Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::IpfrrTiebreakers


class Ospfv3::Processes::Process::DefaultVrf::Summary::Route : public Entity
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


        YLeaf route_id; //type: string
        YLeaf intra_area_route; //type: uint32
        YLeaf inter_area_route; //type: uint32
        YLeaf extern_one_route; //type: uint32
        YLeaf extern_two_route; //type: uint32
        YLeaf nssa_one_route; //type: uint32
        YLeaf nssa_two_route; //type: uint32
        YLeaf total_sent_route; //type: uint32
        YLeaf route_connected; //type: uint32
        YLeaf redistribution_route; //type: uint32
        YLeaf total_received_route; //type: uint32



}; // Ospfv3::Processes::Process::DefaultVrf::Summary::Route


class Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable : public Entity
{
    public:
        RetransmissionListProcessTable();
        ~RetransmissionListProcessTable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Retransmission; //type: Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission> > retransmission;


}; // Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable


class Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission : public Entity
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

        class RetransmissionvirtualLinkDb; //type: Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::RetransmissionvirtualLinkDb
        class RetransmissionAreaDb; //type: Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::RetransmissionAreaDb
        class RetransmissionAsdb; //type: Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::RetransmissionAsdb

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::RetransmissionAreaDb> > retransmission_area_db;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::RetransmissionAsdb> > retransmission_asdb;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::RetransmissionvirtualLinkDb> > retransmissionvirtual_link_db;


}; // Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission


class Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::RetransmissionvirtualLinkDb : public Entity
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



}; // Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::RetransmissionvirtualLinkDb


class Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::RetransmissionAreaDb : public Entity
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



}; // Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::RetransmissionAreaDb


class Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::RetransmissionAsdb : public Entity
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



}; // Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::RetransmissionAsdb


class Ospfv3::Processes::Process::DefaultVrf::BadChecksums : public Entity
{
    public:
        BadChecksums();
        ~BadChecksums();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BadChecksum; //type: Ospfv3::Processes::Process::DefaultVrf::BadChecksums::BadChecksum

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::BadChecksums::BadChecksum> > bad_checksum;


}; // Ospfv3::Processes::Process::DefaultVrf::BadChecksums


class Ospfv3::Processes::Process::DefaultVrf::BadChecksums::BadChecksum : public Entity
{
    public:
        BadChecksum();
        ~BadChecksum();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_number; //type: uint32
        YLeaf received_checksum; //type: uint16
        YLeaf computed_checksum; //type: uint16
        YLeaf received_data; //type: string

        class Timestamp; //type: Ospfv3::Processes::Process::DefaultVrf::BadChecksums::BadChecksum::Timestamp

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::BadChecksums::BadChecksum::Timestamp> timestamp;


}; // Ospfv3::Processes::Process::DefaultVrf::BadChecksums::BadChecksum


class Ospfv3::Processes::Process::DefaultVrf::BadChecksums::BadChecksum::Timestamp : public Entity
{
    public:
        Timestamp();
        ~Timestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospfv3::Processes::Process::DefaultVrf::BadChecksums::BadChecksum::Timestamp


class Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable : public Entity
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



        class DatabaseSummary; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary> database_summary;


}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable


class Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary : public Entity
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

        class DatabaseCounters; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters
        class AreaDatabase; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase> > area_database;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters> database_counters;


}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary


class Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters : public Entity
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



}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters


class Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase : public Entity
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

        class AreaDatabaseSummary; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary> area_database_summary;


}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase


class Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary : public Entity
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



}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary


class Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable : public Entity
{
    public:
        NeighborProcessTable();
        ~NeighborProcessTable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Neighbor; //type: Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor> > neighbor;


}; // Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable


class Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor : public Entity
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

        class NeighborDetail; //type: Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor::NeighborDetail
        class NeighborBfdInfo; //type: Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor::NeighborBfdInfo

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor::NeighborBfdInfo> neighbor_bfd_info;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor::NeighborDetail> neighbor_detail;


}; // Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor


class Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor::NeighborDetail : public Entity
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

        class NeighborRetransmission; //type: Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor::NeighborDetail::NeighborRetransmission

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor::NeighborDetail::NeighborRetransmission> neighbor_retransmission;


}; // Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor::NeighborDetail


class Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor::NeighborDetail::NeighborRetransmission : public Entity
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



}; // Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor::NeighborDetail::NeighborRetransmission


class Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor::NeighborBfdInfo : public Entity
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



}; // Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor::NeighborBfdInfo


class Ospfv3::Processes::Process::DefaultVrf::FastReroutes : public Entity
{
    public:
        FastReroutes();
        ~FastReroutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class FastReroute; //type: Ospfv3::Processes::Process::DefaultVrf::FastReroutes::FastReroute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::FastReroutes::FastReroute> > fast_reroute;


}; // Ospfv3::Processes::Process::DefaultVrf::FastReroutes


class Ospfv3::Processes::Process::DefaultVrf::FastReroutes::FastReroute : public Entity
{
    public:
        FastReroute();
        ~FastReroute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_id; //type: string
        YLeaf area_id; //type: int32
        YLeaf ipfrr_topo_area_id; //type: string
        YLeaf ipfrr_router_id; //type: string
        YLeaf ipfrr_area_revision; //type: uint32

        class IpfrrTopo; //type: Ospfv3::Processes::Process::DefaultVrf::FastReroutes::FastReroute::IpfrrTopo

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::FastReroutes::FastReroute::IpfrrTopo> > ipfrr_topo;


}; // Ospfv3::Processes::Process::DefaultVrf::FastReroutes::FastReroute


class Ospfv3::Processes::Process::DefaultVrf::FastReroutes::FastReroute::IpfrrTopo : public Entity
{
    public:
        IpfrrTopo();
        ~IpfrrTopo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_id; //type: string
        YLeaf lsaid; //type: uint32
        YLeaf distance; //type: uint32
        YLeaf type4; //type: boolean
        YLeaf revision; //type: uint32
        YLeaf neighbor_sourced; //type: boolean
        YLeaf dr; //type: boolean



}; // Ospfv3::Processes::Process::DefaultVrf::FastReroutes::FastReroute::IpfrrTopo


class Ospfv3::Processes::Process::DefaultVrf::InterfaceBriefProcessTable : public Entity
{
    public:
        InterfaceBriefProcessTable();
        ~InterfaceBriefProcessTable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InterfaceBrief; //type: Ospfv3::Processes::Process::DefaultVrf::InterfaceBriefProcessTable::InterfaceBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::InterfaceBriefProcessTable::InterfaceBrief> > interface_brief;


}; // Ospfv3::Processes::Process::DefaultVrf::InterfaceBriefProcessTable


class Ospfv3::Processes::Process::DefaultVrf::InterfaceBriefProcessTable::InterfaceBrief : public Entity
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
        YLeaf interface_address; //type: string
        YLeaf interface_link_cost; //type: uint16
        YLeaf ospf_interface_state; //type: Ospfv3InterfaceStateEnum
        YLeaf interface_neighbors; //type: uint16
        YLeaf interface_adjacent_neighbors; //type: uint16
        YLeaf network_type; //type: Ospfv3InterfaceEnum



}; // Ospfv3::Processes::Process::DefaultVrf::InterfaceBriefProcessTable::InterfaceBrief


class Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable : public Entity
{
    public:
        NeighborDetailProcessTable();
        ~NeighborDetailProcessTable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NeighborDetail; //type: Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail> > neighbor_detail;


}; // Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable


class Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail : public Entity
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

        class NeighborDetail_; //type: Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_
        class NeighborBfdInfo; //type: Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail::NeighborBfdInfo

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail::NeighborBfdInfo> neighbor_bfd_info;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_> neighbor_detail;


}; // Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail


class Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_ : public Entity
{
    public:
        NeighborDetail_();
        ~NeighborDetail_();

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

        class NeighborRetransmission; //type: Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_::NeighborRetransmission

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_::NeighborRetransmission> neighbor_retransmission;


}; // Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_


class Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_::NeighborRetransmission : public Entity
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



}; // Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_::NeighborRetransmission


class Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail::NeighborBfdInfo : public Entity
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



}; // Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail::NeighborBfdInfo


}
}

#endif /* _CISCO_IOS_XR_IPV6_OSPFV3_OPER_4_ */

