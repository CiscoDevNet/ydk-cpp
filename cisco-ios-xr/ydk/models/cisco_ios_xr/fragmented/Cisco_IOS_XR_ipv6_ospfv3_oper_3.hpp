#ifndef _CISCO_IOS_XR_IPV6_OSPFV3_OPER_3_
#define _CISCO_IOS_XR_IPV6_OSPFV3_OPER_3_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv6_ospfv3_oper_0.hpp"
#include "Cisco_IOS_XR_ipv6_ospfv3_oper_2.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv6_ospfv3_oper {


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RpfPath : public Entity
{
    public:
        RpfPath();
        ~RpfPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rpf_multicast_next_hop; //type: uint32
        YLeaf interface_name; //type: string

}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RpfPath


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::Link : public Entity
{
    public:
        Link();
        ~Link();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf link_type; //type: Ospfv3LinkEnum
        YLeaf link_metric; //type: uint16
        YLeaf link_interface_id; //type: uint32
        YLeaf link_neighbor_interface_id; //type: uint32
        YLeaf link_neighbor_router_id; //type: uint32

}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::Link


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType : public Entity
{
    public:
        NetworkLsaType();
        ~NetworkLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList neighbor_router; //type: list of  string
        class LsaHeader; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType : public Entity
{
    public:
        InterAreaPrefixLsaType();
        ~InterAreaPrefixLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf priority; //type: PrefixPriorityEnum
        class LsaHeader; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType : public Entity
{
    public:
        InterAreaRouterLsaType();
        ~InterAreaRouterLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsa_router_id; //type: uint32
        class LsaHeader; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType : public Entity
{
    public:
        ExternalLsaType();
        ~ExternalLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf metric_type; //type: Ospfv3DefaultMetricEnum
        YLeaf tos_cost; //type: uint32
        YLeaf is_forwarding_address_set; //type: boolean
        YLeaf forwarding_address; //type: string
        YLeaf external_tag; //type: uint32
        YLeaf priority; //type: PrefixPriorityEnum
        class LsaHeader; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType : public Entity
{
    public:
        NssalsaType();
        ~NssalsaType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf metric_type; //type: Ospfv3DefaultMetricEnum
        YLeaf tos_cost; //type: uint32
        YLeaf is_forwarding_address_set; //type: boolean
        YLeaf forwarding_address; //type: string
        YLeaf external_tag; //type: uint32
        YLeaf priority; //type: PrefixPriorityEnum
        class LsaHeader; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaHeader


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaDetail


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType : public Entity
{
    public:
        LinkLsaType();
        ~LinkLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf is_virtual_link; //type: boolean
        YLeaf virtual_link_id; //type: uint32
        YLeaf is_sham_link; //type: boolean
        YLeaf sham_link_id; //type: uint32
        YLeaf lsa_link_local; //type: string
        YLeaf router_priority; //type: uint8
        class LsaHeader; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaDetail
        class Prefix; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::Prefix

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaHeader> lsa_header;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::Prefix> > prefix;
        
}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaHeader


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaDetail


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::Prefix : public Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf ospfv3_prefix_length; //type: uint8
        YLeaf ospfv3_prefix_options; //type: uint8
        YLeaf ospfv3_prefix_metric; //type: uint16
        YLeaf priority; //type: PrefixPriorityEnum

}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::Prefix


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType : public Entity
{
    public:
        IntraAreaPrefixLsaType();
        ~IntraAreaPrefixLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf reference_type; //type: Ospfv3Lsa1Enum
        YLeaf reference_lsa_id; //type: uint32
        YLeaf reference_advertised_router; //type: string
        class LsaHeader; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail
        class Prefix; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader> lsa_header;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix> > prefix;
        
}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix : public Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf ospfv3_prefix_length; //type: uint8
        YLeaf ospfv3_prefix_options; //type: uint8
        YLeaf ospfv3_prefix_metric; //type: uint16
        YLeaf priority; //type: PrefixPriorityEnum

}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa : public Entity
{
    public:
        GraceLsa();
        ~GraceLsa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf grace_period; //type: uint32
        YLeaf grace_reason; //type: Ospfv3GracefulRestartReasonEnum
        class LsaHeader; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaHeader


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaDetail


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType : public Entity
{
    public:
        UnknownLinkLsaType();
        ~UnknownLinkLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf is_virtual_link; //type: boolean
        YLeaf virtual_link_id; //type: uint32
        YLeaf is_sham_link; //type: boolean
        YLeaf sham_link_id; //type: uint32
        class LsaHeader; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType : public Entity
{
    public:
        UnknownAreaLsaType();
        ~UnknownAreaLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf is_virtual_link; //type: boolean
        YLeaf virtual_link_id; //type: uint32
        YLeaf is_sham_link; //type: boolean
        YLeaf sham_link_id; //type: uint32
        class LsaHeader; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType : public Entity
{
    public:
        UnknownAslsaType();
        ~UnknownAslsaType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf is_virtual_link; //type: boolean
        YLeaf virtual_link_id; //type: uint32
        YLeaf is_sham_link; //type: boolean
        YLeaf sham_link_id; //type: uint32
        class LsaHeader; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType : public Entity
{
    public:
        UnknownLsaType();
        ~UnknownLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf is_virtual_link; //type: boolean
        YLeaf virtual_link_id; //type: uint32
        YLeaf is_sham_link; //type: boolean
        YLeaf sham_link_id; //type: uint32
        class LsaHeader; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader


class Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

}; // Ospfv3::Processes::Process::DefaultVrf::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail


class Ospfv3::Processes::Process::DefaultVrf::InterfaceProcessTable : public Entity
{
    public:
        InterfaceProcessTable();
        ~InterfaceProcessTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Interface; //type: Ospfv3::Processes::Process::DefaultVrf::InterfaceProcessTable::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::InterfaceProcessTable::Interface> > interface;
        
}; // Ospfv3::Processes::Process::DefaultVrf::InterfaceProcessTable


class Ospfv3::Processes::Process::DefaultVrf::InterfaceProcessTable::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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
        class ActiveInterface; //type: Ospfv3::Processes::Process::DefaultVrf::InterfaceProcessTable::Interface::ActiveInterface
        class InterfaceBfd; //type: Ospfv3::Processes::Process::DefaultVrf::InterfaceProcessTable::Interface::InterfaceBfd
        class InterfaceNeighbor; //type: Ospfv3::Processes::Process::DefaultVrf::InterfaceProcessTable::Interface::InterfaceNeighbor

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::InterfaceProcessTable::Interface::ActiveInterface> active_interface;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::InterfaceProcessTable::Interface::InterfaceBfd> interface_bfd;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::InterfaceProcessTable::Interface::InterfaceNeighbor> > interface_neighbor;
        
}; // Ospfv3::Processes::Process::DefaultVrf::InterfaceProcessTable::Interface


class Ospfv3::Processes::Process::DefaultVrf::InterfaceProcessTable::Interface::ActiveInterface : public Entity
{
    public:
        ActiveInterface();
        ~ActiveInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

}; // Ospfv3::Processes::Process::DefaultVrf::InterfaceProcessTable::Interface::ActiveInterface


class Ospfv3::Processes::Process::DefaultVrf::InterfaceProcessTable::Interface::InterfaceBfd : public Entity
{
    public:
        InterfaceBfd();
        ~InterfaceBfd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bfd_intf_enable_mode; //type: uint32
        YLeaf bfd_interval; //type: uint32
        YLeaf bfd_detection_multiplier; //type: uint32

}; // Ospfv3::Processes::Process::DefaultVrf::InterfaceProcessTable::Interface::InterfaceBfd


class Ospfv3::Processes::Process::DefaultVrf::InterfaceProcessTable::Interface::InterfaceNeighbor : public Entity
{
    public:
        InterfaceNeighbor();
        ~InterfaceNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_neighbor_id; //type: string
        YLeaf interface_neighbor_cost; //type: uint32
        YLeaf is_neighbor_dr; //type: boolean
        YLeaf is_neighbor_bdr; //type: boolean
        YLeaf is_hello_suppressed; //type: boolean

}; // Ospfv3::Processes::Process::DefaultVrf::InterfaceProcessTable::Interface::InterfaceNeighbor


class Ospfv3::Processes::Process::DefaultVrf::Redistributions : public Entity
{
    public:
        Redistributions();
        ~Redistributions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Redistribution; //type: Ospfv3::Processes::Process::DefaultVrf::Redistributions::Redistribution

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Redistributions::Redistribution> > redistribution;
        
}; // Ospfv3::Processes::Process::DefaultVrf::Redistributions


class Ospfv3::Processes::Process::DefaultVrf::Redistributions::Redistribution : public Entity
{
    public:
        Redistribution();
        ~Redistribution();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf protocol_name; //type: string
        YLeaf process_name; //type: string
        YLeaf protocol_name_xr; //type: string
        YLeaf process_id; //type: string
        YLeaf red_metric_flag; //type: boolean
        YLeaf red_metric; //type: uint32
        YLeaf red_mtype_flag; //type: boolean
        YLeaf red_metric_type; //type: uint8
        YLeaf red_tag; //type: uint32
        YLeaf policy_name; //type: string

}; // Ospfv3::Processes::Process::DefaultVrf::Redistributions::Redistribution


class Ospfv3::Processes::Process::DefaultVrf::ExternalRoutes : public Entity
{
    public:
        ExternalRoutes();
        ~ExternalRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ExternalRoute; //type: Ospfv3::Processes::Process::DefaultVrf::ExternalRoutes::ExternalRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::ExternalRoutes::ExternalRoute> > external_route;
        
}; // Ospfv3::Processes::Process::DefaultVrf::ExternalRoutes


class Ospfv3::Processes::Process::DefaultVrf::ExternalRoutes::ExternalRoute : public Entity
{
    public:
        ExternalRoute();
        ~ExternalRoute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        class RouteTopology; //type: Ospfv3::Processes::Process::DefaultVrf::ExternalRoutes::ExternalRoute::RouteTopology
        class RouteExtendedCommunity; //type: Ospfv3::Processes::Process::DefaultVrf::ExternalRoutes::ExternalRoute::RouteExtendedCommunity
        class RoutePath; //type: Ospfv3::Processes::Process::DefaultVrf::ExternalRoutes::ExternalRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::ExternalRoutes::ExternalRoute::RouteExtendedCommunity> route_extended_community;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::ExternalRoutes::ExternalRoute::RoutePath> > route_path;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::ExternalRoutes::ExternalRoute::RouteTopology> route_topology;
        
}; // Ospfv3::Processes::Process::DefaultVrf::ExternalRoutes::ExternalRoute


class Ospfv3::Processes::Process::DefaultVrf::ExternalRoutes::ExternalRoute::RouteTopology : public Entity
{
    public:
        RouteTopology();
        ~RouteTopology();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_id; //type: string
        YLeaf route_distance; //type: uint32
        YLeaf route_cost; //type: uint32
        YLeaf route_type; //type: uint32

}; // Ospfv3::Processes::Process::DefaultVrf::ExternalRoutes::ExternalRoute::RouteTopology


class Ospfv3::Processes::Process::DefaultVrf::ExternalRoutes::ExternalRoute::RouteExtendedCommunity : public Entity
{
    public:
        RouteExtendedCommunity();
        ~RouteExtendedCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf extended_community_domain_id_value; //type: string
        YLeaf extended_communityl_domain_id_type; //type: uint16
        YLeaf extended_community_area_id; //type: uint32
        YLeaf extended_community_router_id; //type: string
        YLeaf extended_community_route_type; //type: uint8
        YLeaf extended_community_options; //type: uint8

}; // Ospfv3::Processes::Process::DefaultVrf::ExternalRoutes::ExternalRoute::RouteExtendedCommunity


class Ospfv3::Processes::Process::DefaultVrf::ExternalRoutes::ExternalRoute::RoutePath : public Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf route_path_next_hop; //type: string
        YLeaf route_path_id; //type: uint16
        class RouteBackupPath; //type: Ospfv3::Processes::Process::DefaultVrf::ExternalRoutes::ExternalRoute::RoutePath::RouteBackupPath

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::ExternalRoutes::ExternalRoute::RoutePath::RouteBackupPath> route_backup_path;
        
}; // Ospfv3::Processes::Process::DefaultVrf::ExternalRoutes::ExternalRoute::RoutePath


class Ospfv3::Processes::Process::DefaultVrf::ExternalRoutes::ExternalRoute::RoutePath::RouteBackupPath : public Entity
{
    public:
        RouteBackupPath();
        ~RouteBackupPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf backup_route_interface_name; //type: string
        YLeaf backup_route_next_hop_address; //type: string
        YLeaf backup_route_source; //type: string
        YLeaf backup_metric; //type: uint32
        YLeaf primary_path; //type: boolean
        YLeaf line_card_disjoint; //type: boolean
        YLeaf downstream; //type: boolean
        YLeaf node_protect; //type: boolean
        YLeaf srlg_disjoint; //type: boolean

}; // Ospfv3::Processes::Process::DefaultVrf::ExternalRoutes::ExternalRoute::RoutePath::RouteBackupPath


class Ospfv3::Processes::Process::DefaultVrf::RequestListProcessTable : public Entity
{
    public:
        RequestListProcessTable();
        ~RequestListProcessTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Request; //type: Ospfv3::Processes::Process::DefaultVrf::RequestListProcessTable::Request

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::RequestListProcessTable::Request> > request;
        
}; // Ospfv3::Processes::Process::DefaultVrf::RequestListProcessTable


class Ospfv3::Processes::Process::DefaultVrf::RequestListProcessTable::Request : public Entity
{
    public:
        Request();
        ~Request();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf request_neighbor_address; //type: string
        YLeaf is_request_virtual_link; //type: boolean
        YLeaf request_virtual_link_id; //type: uint32
        YLeaf is_request_sham_link; //type: boolean
        YLeaf request_sham_link_id; //type: uint32
        class Request_; //type: Ospfv3::Processes::Process::DefaultVrf::RequestListProcessTable::Request::Request_

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::RequestListProcessTable::Request::Request_> > request;
        
}; // Ospfv3::Processes::Process::DefaultVrf::RequestListProcessTable::Request


class Ospfv3::Processes::Process::DefaultVrf::RequestListProcessTable::Request::Request_ : public Entity
{
    public:
        Request_();
        ~Request_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf header_lsa_type; //type: Ospfv3Lsa1Enum
        YLeaf header_lsa_age; //type: uint16
        YLeaf header_lsa_id; //type: string
        YLeaf header_advertising_router; //type: string
        YLeaf header_sequence_number; //type: int32

}; // Ospfv3::Processes::Process::DefaultVrf::RequestListProcessTable::Request::Request_


class Ospfv3::Processes::Process::DefaultVrf::VirtualLink : public Entity
{
    public:
        VirtualLink();
        ~VirtualLink();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf virtual_link_neighbor_id; //type: string
        YLeaf virtual_link_interface_number; //type: uint32
        YLeaf virtual_link_state; //type: Ospfv3InterfaceStateEnum
        YLeaf is_virtual_link_ip_security_required; //type: boolean
        YLeaf is_virtual_link_ip_security_active; //type: boolean
        YLeaf virtual_link_neighbor_address; //type: string
        YLeaf is_virtual_link_demand_circuit; //type: boolean
        YLeaf virtual_link_dc_bitless_lsa; //type: uint32
        YLeaf transit_area_id; //type: string
        YLeaf interface_name; //type: string
        YLeaf virtual_link_cost; //type: uint16
        YLeaf virual_link_transmission_delay; //type: uint16
        YLeaf virtual_link_hello_interval; //type: uint32
        YLeaf virtual_link_dead_interval; //type: uint32
        YLeaf virtual_link_wait_interval; //type: uint32
        YLeaf virtual_link_retransmission_interval; //type: uint32
        YLeaf virtual_link_next_hello; //type: uint32
        YLeaf is_virtual_link_passive; //type: boolean
        YLeaf is_virtual_link_authentication_enabled; //type: boolean
        YLeaf virtual_link_authentication_spi; //type: uint32
        YLeaf virtual_link_authentication_transmit; //type: uint32
        YLeaf is_virtual_link_encryption_enabled; //type: boolean
        YLeaf virtual_link_encryption_spi; //type: uint32
        YLeaf virtual_link_encryption_transmitted; //type: uint32
        YLeaf virtual_link_encrypted_authentication_transmitted; //type: uint32
        class VirtualLinkNeighbor; //type: Ospfv3::Processes::Process::DefaultVrf::VirtualLink::VirtualLinkNeighbor

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::VirtualLink::VirtualLinkNeighbor> virtual_link_neighbor;
        
}; // Ospfv3::Processes::Process::DefaultVrf::VirtualLink


class Ospfv3::Processes::Process::DefaultVrf::VirtualLink::VirtualLinkNeighbor : public Entity
{
    public:
        VirtualLinkNeighbor();
        ~VirtualLinkNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_virtual_link_hello_suppressed; //type: boolean
        YLeaf virtual_link_state; //type: Ospfv3InterfaceStateEnum
        class VirtualLinkRetransmission; //type: Ospfv3::Processes::Process::DefaultVrf::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmission

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmission> virtual_link_retransmission;
        
}; // Ospfv3::Processes::Process::DefaultVrf::VirtualLink::VirtualLinkNeighbor


class Ospfv3::Processes::Process::DefaultVrf::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmission : public Entity
{
    public:
        VirtualLinkRetransmission();
        ~VirtualLinkRetransmission();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

}; // Ospfv3::Processes::Process::DefaultVrf::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmission


class Ospfv3::Processes::Process::DefaultVrf::FloodListProcessTable : public Entity
{
    public:
        FloodListProcessTable();
        ~FloodListProcessTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Flood; //type: Ospfv3::Processes::Process::DefaultVrf::FloodListProcessTable::Flood

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::FloodListProcessTable::Flood> > flood;
        
}; // Ospfv3::Processes::Process::DefaultVrf::FloodListProcessTable


class Ospfv3::Processes::Process::DefaultVrf::FloodListProcessTable::Flood : public Entity
{
    public:
        Flood();
        ~Flood();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf ls_transmission_timer; //type: uint32
        YLeaf queue_length; //type: uint32
        class LinkFlood; //type: Ospfv3::Processes::Process::DefaultVrf::FloodListProcessTable::Flood::LinkFlood
        class AreaFlood; //type: Ospfv3::Processes::Process::DefaultVrf::FloodListProcessTable::Flood::AreaFlood
        class AsFlood; //type: Ospfv3::Processes::Process::DefaultVrf::FloodListProcessTable::Flood::AsFlood

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::FloodListProcessTable::Flood::AreaFlood> > area_flood;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::FloodListProcessTable::Flood::AsFlood> > as_flood;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::FloodListProcessTable::Flood::LinkFlood> > link_flood;
        
}; // Ospfv3::Processes::Process::DefaultVrf::FloodListProcessTable::Flood


class Ospfv3::Processes::Process::DefaultVrf::FloodListProcessTable::Flood::LinkFlood : public Entity
{
    public:
        LinkFlood();
        ~LinkFlood();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf header_lsa_type; //type: Ospfv3Lsa1Enum
        YLeaf header_lsa_age; //type: uint16
        YLeaf header_lsa_id; //type: string
        YLeaf header_advertising_router; //type: string
        YLeaf header_sequence_number; //type: int32

}; // Ospfv3::Processes::Process::DefaultVrf::FloodListProcessTable::Flood::LinkFlood


class Ospfv3::Processes::Process::DefaultVrf::FloodListProcessTable::Flood::AreaFlood : public Entity
{
    public:
        AreaFlood();
        ~AreaFlood();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf header_lsa_type; //type: Ospfv3Lsa1Enum
        YLeaf header_lsa_age; //type: uint16
        YLeaf header_lsa_id; //type: string
        YLeaf header_advertising_router; //type: string
        YLeaf header_sequence_number; //type: int32

}; // Ospfv3::Processes::Process::DefaultVrf::FloodListProcessTable::Flood::AreaFlood


class Ospfv3::Processes::Process::DefaultVrf::FloodListProcessTable::Flood::AsFlood : public Entity
{
    public:
        AsFlood();
        ~AsFlood();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf header_lsa_type; //type: Ospfv3Lsa1Enum
        YLeaf header_lsa_age; //type: uint16
        YLeaf header_lsa_id; //type: string
        YLeaf header_advertising_router; //type: string
        YLeaf header_sequence_number; //type: int32

}; // Ospfv3::Processes::Process::DefaultVrf::FloodListProcessTable::Flood::AsFlood


class Ospfv3::Processes::Process::DefaultVrf::RouteSummary : public Entity
{
    public:
        RouteSummary();
        ~RouteSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

}; // Ospfv3::Processes::Process::DefaultVrf::RouteSummary


class Ospfv3::Processes::Process::DefaultVrf::Areas : public Entity
{
    public:
        Areas();
        ~Areas();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Area; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area> > area;
        
}; // Ospfv3::Processes::Process::DefaultVrf::Areas


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area : public Entity
{
    public:
        Area();
        ~Area();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf area_id; //type: int32
        class NeighborDetailTable; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::NeighborDetailTable
        class InterfaceBriefTable; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefTable
        class RequestListTable; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::RequestListTable
        class NeighborTable; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::NeighborTable
        class InterfaceTable; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::InterfaceTable
        class FloodListTable; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::FloodListTable
        class RetransmissionListTable; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::RetransmissionListTable
        class DatabaseTable; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable
        class DatabaseSummaryTable; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable> database_summary_table;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable> database_table;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::FloodListTable> flood_list_table;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefTable> interface_brief_table;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::InterfaceTable> interface_table;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::NeighborDetailTable> neighbor_detail_table;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::NeighborTable> neighbor_table;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::RequestListTable> request_list_table;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::RetransmissionListTable> retransmission_list_table;
        
}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::NeighborDetailTable : public Entity
{
    public:
        NeighborDetailTable();
        ~NeighborDetailTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NeighborDetail; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::NeighborDetailTable::NeighborDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::NeighborDetailTable::NeighborDetail> > neighbor_detail;
        
}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::NeighborDetailTable


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::NeighborDetailTable::NeighborDetail : public Entity
{
    public:
        NeighborDetail();
        ~NeighborDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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
        class NeighborDetail_; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborDetail_
        class NeighborBfdInfo; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborBfdInfo

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborBfdInfo> neighbor_bfd_info;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborDetail_> neighbor_detail;
        
}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::NeighborDetailTable::NeighborDetail


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborDetail_ : public Entity
{
    public:
        NeighborDetail_();
        ~NeighborDetail_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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
        class NeighborRetransmission; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborDetail_::NeighborRetransmission

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborDetail_::NeighborRetransmission> neighbor_retransmission;
        
}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborDetail_


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborDetail_::NeighborRetransmission : public Entity
{
    public:
        NeighborRetransmission();
        ~NeighborRetransmission();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborDetail_::NeighborRetransmission


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborBfdInfo : public Entity
{
    public:
        NeighborBfdInfo();
        ~NeighborBfdInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bfd_intf_enable_mode; //type: uint32
        YLeaf bfd_status_flag; //type: uint8

}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::NeighborDetailTable::NeighborDetail::NeighborBfdInfo


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefTable : public Entity
{
    public:
        InterfaceBriefTable();
        ~InterfaceBriefTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class InterfaceBrief; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefTable::InterfaceBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefTable::InterfaceBrief> > interface_brief;
        
}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefTable


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefTable::InterfaceBrief : public Entity
{
    public:
        InterfaceBrief();
        ~InterfaceBrief();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf interface_address; //type: string
        YLeaf interface_link_cost; //type: uint16
        YLeaf ospf_interface_state; //type: Ospfv3InterfaceStateEnum
        YLeaf interface_neighbors; //type: uint16
        YLeaf interface_adjacent_neighbors; //type: uint16
        YLeaf network_type; //type: Ospfv3InterfaceEnum

}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefTable::InterfaceBrief


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::RequestListTable : public Entity
{
    public:
        RequestListTable();
        ~RequestListTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Request; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::RequestListTable::Request

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::RequestListTable::Request> > request;
        
}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::RequestListTable


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::RequestListTable::Request : public Entity
{
    public:
        Request();
        ~Request();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf request_neighbor_address; //type: string
        YLeaf is_request_virtual_link; //type: boolean
        YLeaf request_virtual_link_id; //type: uint32
        YLeaf is_request_sham_link; //type: boolean
        YLeaf request_sham_link_id; //type: uint32
        class Request_; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::RequestListTable::Request::Request_

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::RequestListTable::Request::Request_> > request;
        
}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::RequestListTable::Request


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::RequestListTable::Request::Request_ : public Entity
{
    public:
        Request_();
        ~Request_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf header_lsa_type; //type: Ospfv3Lsa1Enum
        YLeaf header_lsa_age; //type: uint16
        YLeaf header_lsa_id; //type: string
        YLeaf header_advertising_router; //type: string
        YLeaf header_sequence_number; //type: int32

}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::RequestListTable::Request::Request_


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::NeighborTable : public Entity
{
    public:
        NeighborTable();
        ~NeighborTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Neighbor; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::NeighborTable::Neighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::NeighborTable::Neighbor> > neighbor;
        
}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::NeighborTable


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::NeighborTable::Neighbor : public Entity
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
        class NeighborDetail; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::NeighborTable::Neighbor::NeighborDetail
        class NeighborBfdInfo; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::NeighborTable::Neighbor::NeighborBfdInfo

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::NeighborTable::Neighbor::NeighborBfdInfo> neighbor_bfd_info;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::NeighborTable::Neighbor::NeighborDetail> neighbor_detail;
        
}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::NeighborTable::Neighbor


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::NeighborTable::Neighbor::NeighborDetail : public Entity
{
    public:
        NeighborDetail();
        ~NeighborDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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
        class NeighborRetransmission; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::NeighborTable::Neighbor::NeighborDetail::NeighborRetransmission

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::NeighborTable::Neighbor::NeighborDetail::NeighborRetransmission> neighbor_retransmission;
        
}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::NeighborTable::Neighbor::NeighborDetail


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::NeighborTable::Neighbor::NeighborDetail::NeighborRetransmission : public Entity
{
    public:
        NeighborRetransmission();
        ~NeighborRetransmission();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::NeighborTable::Neighbor::NeighborDetail::NeighborRetransmission


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::NeighborTable::Neighbor::NeighborBfdInfo : public Entity
{
    public:
        NeighborBfdInfo();
        ~NeighborBfdInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bfd_intf_enable_mode; //type: uint32
        YLeaf bfd_status_flag; //type: uint8

}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::NeighborTable::Neighbor::NeighborBfdInfo


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::InterfaceTable : public Entity
{
    public:
        InterfaceTable();
        ~InterfaceTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Interface; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::InterfaceTable::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::InterfaceTable::Interface> > interface;
        
}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::InterfaceTable


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::InterfaceTable::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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
        class ActiveInterface; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::InterfaceTable::Interface::ActiveInterface
        class InterfaceBfd; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::InterfaceTable::Interface::InterfaceBfd
        class InterfaceNeighbor; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::InterfaceTable::Interface::InterfaceNeighbor

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::InterfaceTable::Interface::ActiveInterface> active_interface;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::InterfaceTable::Interface::InterfaceBfd> interface_bfd;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::InterfaceTable::Interface::InterfaceNeighbor> > interface_neighbor;
        
}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::InterfaceTable::Interface


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::InterfaceTable::Interface::ActiveInterface : public Entity
{
    public:
        ActiveInterface();
        ~ActiveInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::InterfaceTable::Interface::ActiveInterface


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::InterfaceTable::Interface::InterfaceBfd : public Entity
{
    public:
        InterfaceBfd();
        ~InterfaceBfd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bfd_intf_enable_mode; //type: uint32
        YLeaf bfd_interval; //type: uint32
        YLeaf bfd_detection_multiplier; //type: uint32

}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::InterfaceTable::Interface::InterfaceBfd


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::InterfaceTable::Interface::InterfaceNeighbor : public Entity
{
    public:
        InterfaceNeighbor();
        ~InterfaceNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_neighbor_id; //type: string
        YLeaf interface_neighbor_cost; //type: uint32
        YLeaf is_neighbor_dr; //type: boolean
        YLeaf is_neighbor_bdr; //type: boolean
        YLeaf is_hello_suppressed; //type: boolean

}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::InterfaceTable::Interface::InterfaceNeighbor


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::FloodListTable : public Entity
{
    public:
        FloodListTable();
        ~FloodListTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Flood; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::FloodListTable::Flood

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::FloodListTable::Flood> > flood;
        
}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::FloodListTable


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::FloodListTable::Flood : public Entity
{
    public:
        Flood();
        ~Flood();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf ls_transmission_timer; //type: uint32
        YLeaf queue_length; //type: uint32
        class LinkFlood; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::FloodListTable::Flood::LinkFlood
        class AreaFlood; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::FloodListTable::Flood::AreaFlood
        class AsFlood; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::FloodListTable::Flood::AsFlood

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::FloodListTable::Flood::AreaFlood> > area_flood;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::FloodListTable::Flood::AsFlood> > as_flood;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::FloodListTable::Flood::LinkFlood> > link_flood;
        
}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::FloodListTable::Flood


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::FloodListTable::Flood::LinkFlood : public Entity
{
    public:
        LinkFlood();
        ~LinkFlood();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf header_lsa_type; //type: Ospfv3Lsa1Enum
        YLeaf header_lsa_age; //type: uint16
        YLeaf header_lsa_id; //type: string
        YLeaf header_advertising_router; //type: string
        YLeaf header_sequence_number; //type: int32

}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::FloodListTable::Flood::LinkFlood


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::FloodListTable::Flood::AreaFlood : public Entity
{
    public:
        AreaFlood();
        ~AreaFlood();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf header_lsa_type; //type: Ospfv3Lsa1Enum
        YLeaf header_lsa_age; //type: uint16
        YLeaf header_lsa_id; //type: string
        YLeaf header_advertising_router; //type: string
        YLeaf header_sequence_number; //type: int32

}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::FloodListTable::Flood::AreaFlood


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::FloodListTable::Flood::AsFlood : public Entity
{
    public:
        AsFlood();
        ~AsFlood();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf header_lsa_type; //type: Ospfv3Lsa1Enum
        YLeaf header_lsa_age; //type: uint16
        YLeaf header_lsa_id; //type: string
        YLeaf header_advertising_router; //type: string
        YLeaf header_sequence_number; //type: int32

}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::FloodListTable::Flood::AsFlood


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::RetransmissionListTable : public Entity
{
    public:
        RetransmissionListTable();
        ~RetransmissionListTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Retransmission; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::RetransmissionListTable::Retransmission

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::RetransmissionListTable::Retransmission> > retransmission;
        
}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::RetransmissionListTable


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::RetransmissionListTable::Retransmission : public Entity
{
    public:
        Retransmission();
        ~Retransmission();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf retransmission_neighbor_address; //type: string
        YLeaf is_retransmissionvirtual_link; //type: boolean
        YLeaf retransmissionvirtual_link_id; //type: uint32
        YLeaf is_retransmission_sham_link; //type: boolean
        YLeaf retransmission_sham_link_id; //type: uint32
        YLeaf retransmission_timer; //type: uint32
        YLeaf retransmission_length; //type: uint32
        class RetransmissionvirtualLinkDb; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionvirtualLinkDb
        class RetransmissionAreaDb; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionAreaDb
        class RetransmissionAsdb; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionAsdb

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionAreaDb> > retransmission_area_db;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionAsdb> > retransmission_asdb;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionvirtualLinkDb> > retransmissionvirtual_link_db;
        
}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::RetransmissionListTable::Retransmission


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionvirtualLinkDb : public Entity
{
    public:
        RetransmissionvirtualLinkDb();
        ~RetransmissionvirtualLinkDb();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf header_lsa_type; //type: Ospfv3Lsa1Enum
        YLeaf header_lsa_age; //type: uint16
        YLeaf header_lsa_id; //type: string
        YLeaf header_advertising_router; //type: string
        YLeaf header_sequence_number; //type: int32

}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionvirtualLinkDb


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionAreaDb : public Entity
{
    public:
        RetransmissionAreaDb();
        ~RetransmissionAreaDb();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf header_lsa_type; //type: Ospfv3Lsa1Enum
        YLeaf header_lsa_age; //type: uint16
        YLeaf header_lsa_id; //type: string
        YLeaf header_advertising_router; //type: string
        YLeaf header_sequence_number; //type: int32

}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionAreaDb


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionAsdb : public Entity
{
    public:
        RetransmissionAsdb();
        ~RetransmissionAsdb();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf header_lsa_type; //type: Ospfv3Lsa1Enum
        YLeaf header_lsa_age; //type: uint16
        YLeaf header_lsa_id; //type: string
        YLeaf header_advertising_router; //type: string
        YLeaf header_sequence_number; //type: int32

}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionAsdb


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable : public Entity
{
    public:
        DatabaseTable();
        ~DatabaseTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LsaTable; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable
        class LsaInternalTable; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable> lsa_internal_table;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable> lsa_table;
        
}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable : public Entity
{
    public:
        LsaTable();
        ~LsaTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Lsa; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa> > lsa;
        
}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa : public Entity
{
    public:
        Lsa();
        ~Lsa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf area_id; //type: int32
        YLeaf ls_type; //type: Ospfv3LsaEnum
        YLeaf advertising_router; //type: string
        YLeaf ls_id; //type: int32
        YLeaf interface_name; //type: string
        class LsaInfo; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo> lsa_info;
        
}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo : public Entity
{
    public:
        LsaInfo();
        ~LsaInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsa_info_type; //type: Ospfv3LsaInfoTypesEnum
        class LsaSummaryInfo; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo
        class RouterLsaType; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType
        class NetworkLsaType; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType
        class InterAreaPrefixLsaType; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType
        class InterAreaRouterLsaType; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType
        class ExternalLsaType; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType
        class NssalsaType; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType
        class LinkLsaType; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType
        class IntraAreaPrefixLsaType; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType
        class GraceLsa; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa
        class UnknownLinkLsaType; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType
        class UnknownAreaLsaType; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType
        class UnknownAslsaType; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType
        class UnknownLsaType; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType> external_lsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa> grace_lsa;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType> inter_area_prefix_lsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType> inter_area_router_lsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType> intra_area_prefix_lsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType> link_lsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo> lsa_summary_info;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType> network_lsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType> nssalsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType> router_lsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType> unknown_area_lsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType> unknown_aslsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType> unknown_link_lsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType> unknown_lsa_type;
        
}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo : public Entity
{
    public:
        LsaSummaryInfo();
        ~LsaSummaryInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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
        class LsaHeader; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType : public Entity
{
    public:
        RouterLsaType();
        ~RouterLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf router_la_bits; //type: uint8
        class LsaHeader; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaDetail
        class RpfPath; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::RpfPath
        class Link; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::Link

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::Link> > link;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaHeader> lsa_header;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::RpfPath> rpf_path;
        
}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaHeader


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaDetail


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::RpfPath : public Entity
{
    public:
        RpfPath();
        ~RpfPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rpf_multicast_next_hop; //type: uint32
        YLeaf interface_name; //type: string

}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::RpfPath


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::Link : public Entity
{
    public:
        Link();
        ~Link();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf link_type; //type: Ospfv3LinkEnum
        YLeaf link_metric; //type: uint16
        YLeaf link_interface_id; //type: uint32
        YLeaf link_neighbor_interface_id; //type: uint32
        YLeaf link_neighbor_router_id; //type: uint32

}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::Link


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType : public Entity
{
    public:
        NetworkLsaType();
        ~NetworkLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList neighbor_router; //type: list of  string
        class LsaHeader; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType : public Entity
{
    public:
        InterAreaPrefixLsaType();
        ~InterAreaPrefixLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf priority; //type: PrefixPriorityEnum
        class LsaHeader; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType : public Entity
{
    public:
        InterAreaRouterLsaType();
        ~InterAreaRouterLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsa_router_id; //type: uint32
        class LsaHeader; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType : public Entity
{
    public:
        ExternalLsaType();
        ~ExternalLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf metric_type; //type: Ospfv3DefaultMetricEnum
        YLeaf tos_cost; //type: uint32
        YLeaf is_forwarding_address_set; //type: boolean
        YLeaf forwarding_address; //type: string
        YLeaf external_tag; //type: uint32
        YLeaf priority; //type: PrefixPriorityEnum
        class LsaHeader; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType : public Entity
{
    public:
        NssalsaType();
        ~NssalsaType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf metric_type; //type: Ospfv3DefaultMetricEnum
        YLeaf tos_cost; //type: uint32
        YLeaf is_forwarding_address_set; //type: boolean
        YLeaf forwarding_address; //type: string
        YLeaf external_tag; //type: uint32
        YLeaf priority; //type: PrefixPriorityEnum
        class LsaHeader; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaHeader


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaDetail


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType : public Entity
{
    public:
        LinkLsaType();
        ~LinkLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf is_virtual_link; //type: boolean
        YLeaf virtual_link_id; //type: uint32
        YLeaf is_sham_link; //type: boolean
        YLeaf sham_link_id; //type: uint32
        YLeaf lsa_link_local; //type: string
        YLeaf router_priority; //type: uint8
        class LsaHeader; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaDetail
        class Prefix; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::Prefix

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaHeader> lsa_header;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::Prefix> > prefix;
        
}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaHeader


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaDetail


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::Prefix : public Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf ospfv3_prefix_length; //type: uint8
        YLeaf ospfv3_prefix_options; //type: uint8
        YLeaf ospfv3_prefix_metric; //type: uint16
        YLeaf priority; //type: PrefixPriorityEnum

}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::Prefix


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType : public Entity
{
    public:
        IntraAreaPrefixLsaType();
        ~IntraAreaPrefixLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf reference_type; //type: Ospfv3Lsa1Enum
        YLeaf reference_lsa_id; //type: uint32
        YLeaf reference_advertised_router; //type: string
        class LsaHeader; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail
        class Prefix; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader> lsa_header;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix> > prefix;
        
}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix : public Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf ospfv3_prefix_length; //type: uint8
        YLeaf ospfv3_prefix_options; //type: uint8
        YLeaf ospfv3_prefix_metric; //type: uint16
        YLeaf priority; //type: PrefixPriorityEnum

}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa : public Entity
{
    public:
        GraceLsa();
        ~GraceLsa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf grace_period; //type: uint32
        YLeaf grace_reason; //type: Ospfv3GracefulRestartReasonEnum
        class LsaHeader; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaHeader


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaDetail


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType : public Entity
{
    public:
        UnknownLinkLsaType();
        ~UnknownLinkLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf is_virtual_link; //type: boolean
        YLeaf virtual_link_id; //type: uint32
        YLeaf is_sham_link; //type: boolean
        YLeaf sham_link_id; //type: uint32
        class LsaHeader; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType : public Entity
{
    public:
        UnknownAreaLsaType();
        ~UnknownAreaLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf is_virtual_link; //type: boolean
        YLeaf virtual_link_id; //type: uint32
        YLeaf is_sham_link; //type: boolean
        YLeaf sham_link_id; //type: uint32
        class LsaHeader; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType : public Entity
{
    public:
        UnknownAslsaType();
        ~UnknownAslsaType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf is_virtual_link; //type: boolean
        YLeaf virtual_link_id; //type: uint32
        YLeaf is_sham_link; //type: boolean
        YLeaf sham_link_id; //type: uint32
        class LsaHeader; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType : public Entity
{
    public:
        UnknownLsaType();
        ~UnknownLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf is_virtual_link; //type: boolean
        YLeaf virtual_link_id; //type: uint32
        YLeaf is_sham_link; //type: boolean
        YLeaf sham_link_id; //type: uint32
        class LsaHeader; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader
        class LsaDetail; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail> lsa_detail;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader> lsa_header;
        
}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsa_type; //type: uint16
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf is_do_not_age_lsa; //type: boolean
        YLeaf ls_id; //type: uint32
        YLeaf advertising_router; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16
        YLeaf is_graceful_restart_active; //type: boolean

}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail : public Entity
{
    public:
        LsaDetail();
        ~LsaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable : public Entity
{
    public:
        LsaInternalTable();
        ~LsaInternalTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Lsa; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa> > lsa;
        
}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa : public Entity
{
    public:
        Lsa();
        ~Lsa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf area_id; //type: int32
        YLeaf ls_type; //type: Ospfv3LsaEnum
        YLeaf advertising_router; //type: string
        YLeaf ls_id; //type: int32
        YLeaf interface_name; //type: string
        class LsaInfo; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo> lsa_info;
        
}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa


class Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo : public Entity
{
    public:
        LsaInfo();
        ~LsaInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsa_info_type; //type: Ospfv3LsaInfoTypesEnum
        class LsaSummaryInfo; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo
        class RouterLsaType; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType
        class NetworkLsaType; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType
        class InterAreaPrefixLsaType; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType
        class InterAreaRouterLsaType; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType
        class ExternalLsaType; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType
        class NssalsaType; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType
        class LinkLsaType; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType
        class IntraAreaPrefixLsaType; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType
        class GraceLsa; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa
        class UnknownLinkLsaType; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType
        class UnknownAreaLsaType; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType
        class UnknownAslsaType; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType
        class UnknownLsaType; //type: Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType> external_lsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa> grace_lsa;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType> inter_area_prefix_lsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType> inter_area_router_lsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType> intra_area_prefix_lsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType> link_lsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo> lsa_summary_info;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType> network_lsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType> nssalsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType> router_lsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType> unknown_area_lsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType> unknown_aslsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType> unknown_link_lsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType> unknown_lsa_type;
        
}; // Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo


}
}

#endif /* _CISCO_IOS_XR_IPV6_OSPFV3_OPER_3_ */

