#ifndef _CISCO_IOS_XR_SNMP_AGENT_OPER_
#define _CISCO_IOS_XR_SNMP_AGENT_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace Cisco_IOS_XR_snmp_agent_oper {

class Snmp : public Entity
{
    public:
        Snmp();
        ~Snmp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class TrapServers; //type: Snmp::TrapServers
        class Information; //type: Snmp::Information
        class Interfaces; //type: Snmp::Interfaces
        class Correlator; //type: Snmp::Correlator
        class InterfaceIndexes; //type: Snmp::InterfaceIndexes
        class IfIndexes; //type: Snmp::IfIndexes
        class EntityMib; //type: Snmp::EntityMib
        class InterfaceMib; //type: Snmp::InterfaceMib
        class SensorMib; //type: Snmp::SensorMib

        std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Correlator> correlator;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::EntityMib> entity_mib;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::IfIndexes> if_indexes;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information> information;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::InterfaceIndexes> interface_indexes;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::InterfaceMib> interface_mib;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::SensorMib> sensor_mib;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::TrapServers> trap_servers;


}; // Snmp


class Snmp::TrapServers : public Entity
{
    public:
        TrapServers();
        ~TrapServers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TrapServer; //type: Snmp::TrapServers::TrapServer

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::TrapServers::TrapServer> > trap_server;


}; // Snmp::TrapServers


class Snmp::TrapServers::TrapServer : public Entity
{
    public:
        TrapServer();
        ~TrapServer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf trap_host; //type: string
        YLeaf port; //type: uint16
        YLeaf number_of_pkts_in_trap_q; //type: uint32
        YLeaf max_q_length_of_trap_q; //type: uint32
        YLeaf number_of_pkts_sent; //type: uint32
        YLeaf number_of_pkts_dropped; //type: uint32



}; // Snmp::TrapServers::TrapServer


class Snmp::Information : public Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Hosts; //type: Snmp::Information::Hosts
        class SystemUpTime; //type: Snmp::Information::SystemUpTime
        class NmsAddresses; //type: Snmp::Information::NmsAddresses
        class EngineId; //type: Snmp::Information::EngineId
        class RxQueue; //type: Snmp::Information::RxQueue
        class SystemName; //type: Snmp::Information::SystemName
        class RequestTypeDetail; //type: Snmp::Information::RequestTypeDetail
        class DuplicateDrop; //type: Snmp::Information::DuplicateDrop
        class BulkStatsTransfers; //type: Snmp::Information::BulkStatsTransfers
        class TrapInfos; //type: Snmp::Information::TrapInfos
        class PollOids; //type: Snmp::Information::PollOids
        class InfomDetails; //type: Snmp::Information::InfomDetails
        class Statistics; //type: Snmp::Information::Statistics
        class IncomingQueue; //type: Snmp::Information::IncomingQueue
        class ContextMapping; //type: Snmp::Information::ContextMapping
        class TrapOids; //type: Snmp::Information::TrapOids
        class NmSpackets; //type: Snmp::Information::NmSpackets
        class Mibs; //type: Snmp::Information::Mibs
        class SerialNumbers; //type: Snmp::Information::SerialNumbers
        class DropNmsAddresses; //type: Snmp::Information::DropNmsAddresses
        class Views; //type: Snmp::Information::Views
        class SystemDescr; //type: Snmp::Information::SystemDescr
        class Tables; //type: Snmp::Information::Tables
        class SystemOid; //type: Snmp::Information::SystemOid
        class TrapQueue; //type: Snmp::Information::TrapQueue

        std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::BulkStatsTransfers> bulk_stats_transfers;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::ContextMapping> context_mapping;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::DropNmsAddresses> drop_nms_addresses;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::DuplicateDrop> duplicate_drop;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::EngineId> engine_id;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::Hosts> hosts;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::IncomingQueue> incoming_queue;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::InfomDetails> infom_details;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::Mibs> mibs;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::NmSpackets> nm_spackets;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::NmsAddresses> nms_addresses;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::PollOids> poll_oids;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::RequestTypeDetail> request_type_detail;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::RxQueue> rx_queue;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::SerialNumbers> serial_numbers;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::Statistics> statistics;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::SystemDescr> system_descr;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::SystemName> system_name;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::SystemOid> system_oid;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::SystemUpTime> system_up_time;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::Tables> tables;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::TrapInfos> trap_infos;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::TrapOids> trap_oids;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::TrapQueue> trap_queue;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::Views> views;


}; // Snmp::Information


class Snmp::Information::Hosts : public Entity
{
    public:
        Hosts();
        ~Hosts();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Host; //type: Snmp::Information::Hosts::Host

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::Hosts::Host> > host;


}; // Snmp::Information::Hosts


class Snmp::Information::Hosts::Host : public Entity
{
    public:
        Host();
        ~Host();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string

        class HostInformation; //type: Snmp::Information::Hosts::Host::HostInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::Hosts::Host::HostInformation> > host_information;


}; // Snmp::Information::Hosts::Host


class Snmp::Information::Hosts::Host::HostInformation : public Entity
{
    public:
        HostInformation();
        ~HostInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf user; //type: string
        YLeaf snmp_target_address_t_host; //type: string
        YLeaf snmp_target_address_port; //type: string
        YLeaf snmp_target_addresstype; //type: string
        YLeaf snmp_target_params_security_model; //type: string
        YLeaf snmp_target_params_security_name; //type: string
        YLeaf snmp_target_params_security_level; //type: string



}; // Snmp::Information::Hosts::Host::HostInformation


class Snmp::Information::SystemUpTime : public Entity
{
    public:
        SystemUpTime();
        ~SystemUpTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf system_up_time_edm; //type: string



}; // Snmp::Information::SystemUpTime


class Snmp::Information::NmsAddresses : public Entity
{
    public:
        NmsAddresses();
        ~NmsAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NmsAddress; //type: Snmp::Information::NmsAddresses::NmsAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::NmsAddresses::NmsAddress> > nms_address;


}; // Snmp::Information::NmsAddresses


class Snmp::Information::NmsAddresses::NmsAddress : public Entity
{
    public:
        NmsAddress();
        ~NmsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf nms_addr; //type: string
        YLeaf nms_address; //type: string
        YLeaf get_request_count; //type: uint32
        YLeaf getnext_request_count; //type: uint32
        YLeaf getbulk_request_count; //type: uint32
        YLeaf set_request_count; //type: uint32
        YLeaf test_request_count; //type: uint32



}; // Snmp::Information::NmsAddresses::NmsAddress


class Snmp::Information::EngineId : public Entity
{
    public:
        EngineId();
        ~EngineId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf engine_id; //type: string



}; // Snmp::Information::EngineId


class Snmp::Information::RxQueue : public Entity
{
    public:
        RxQueue();
        ~RxQueue();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf qlen; //type: uint32
        YLeaf in_min; //type: uint32
        YLeaf in_avg; //type: uint32
        YLeaf in_max; //type: uint32
        YLeaf pend_min; //type: uint32
        YLeaf pend_avg; //type: uint32
        YLeaf pend_max; //type: uint32
        YLeaf incoming_q; //type: string
        YLeaf pending_q; //type: string



}; // Snmp::Information::RxQueue


class Snmp::Information::SystemName : public Entity
{
    public:
        SystemName();
        ~SystemName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf system_name; //type: string



}; // Snmp::Information::SystemName


class Snmp::Information::RequestTypeDetail : public Entity
{
    public:
        RequestTypeDetail();
        ~RequestTypeDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NmsAddresses; //type: Snmp::Information::RequestTypeDetail::NmsAddresses

        std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::RequestTypeDetail::NmsAddresses> nms_addresses;


}; // Snmp::Information::RequestTypeDetail


class Snmp::Information::RequestTypeDetail::NmsAddresses : public Entity
{
    public:
        NmsAddresses();
        ~NmsAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NmsAddress; //type: Snmp::Information::RequestTypeDetail::NmsAddresses::NmsAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::RequestTypeDetail::NmsAddresses::NmsAddress> > nms_address;


}; // Snmp::Information::RequestTypeDetail::NmsAddresses


class Snmp::Information::RequestTypeDetail::NmsAddresses::NmsAddress : public Entity
{
    public:
        NmsAddress();
        ~NmsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf nms_addr; //type: string
        YLeaf total_count; //type: uint32
        YLeaf agent_request_count; //type: uint32
        YLeaf interface_request_count; //type: uint32
        YLeaf entity_request_count; //type: uint32
        YLeaf route_request_count; //type: uint32
        YLeaf infra_request_count; //type: uint32



}; // Snmp::Information::RequestTypeDetail::NmsAddresses::NmsAddress


class Snmp::Information::DuplicateDrop : public Entity
{
    public:
        DuplicateDrop();
        ~DuplicateDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf duplicate_request_status; //type: DupReqDropStatusEnum
        YLeaf last_status_change_time; //type: string
        YLeaf duplicate_drop_configured_timeout; //type: uint32
        YLeaf duplicate_dropped_requests; //type: uint32
        YLeaf retry_processed_requests; //type: uint32
        YLeaf first_enable_time; //type: string
        YLeaf latest_duplicate_dropped_requests; //type: uint32
        YLeaf latest_retry_processed_requests; //type: uint32
        YLeaf duplicate_request_latest_enable_time; //type: string
        YLeaf duplicate_drop_enable_count; //type: uint32
        YLeaf duplicate_drop_disable_count; //type: uint32



}; // Snmp::Information::DuplicateDrop


class Snmp::Information::BulkStatsTransfers : public Entity
{
    public:
        BulkStatsTransfers();
        ~BulkStatsTransfers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BulkStatsTransfer; //type: Snmp::Information::BulkStatsTransfers::BulkStatsTransfer

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::BulkStatsTransfers::BulkStatsTransfer> > bulk_stats_transfer;


}; // Snmp::Information::BulkStatsTransfers


class Snmp::Information::BulkStatsTransfers::BulkStatsTransfer : public Entity
{
    public:
        BulkStatsTransfer();
        ~BulkStatsTransfer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf transfer_name; //type: string
        YLeaf transfer_name_xr; //type: string
        YLeaf url_primary; //type: string
        YLeaf url_secondary; //type: string
        YLeaf retained_file; //type: string
        YLeaf time_left; //type: uint32
        YLeaf retry_left; //type: uint32



}; // Snmp::Information::BulkStatsTransfers::BulkStatsTransfer


class Snmp::Information::TrapInfos : public Entity
{
    public:
        TrapInfos();
        ~TrapInfos();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TrapInfo; //type: Snmp::Information::TrapInfos::TrapInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::TrapInfos::TrapInfo> > trap_info;


}; // Snmp::Information::TrapInfos


class Snmp::Information::TrapInfos::TrapInfo : public Entity
{
    public:
        TrapInfo();
        ~TrapInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf trap_host; //type: string
        YLeaf port; //type: uint16
        YLeaf host; //type: string
        YLeaf port_xr; //type: uint16
        YLeaf trap_oid_count; //type: uint32

        class TrapOiDinfo; //type: Snmp::Information::TrapInfos::TrapInfo::TrapOiDinfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::TrapInfos::TrapInfo::TrapOiDinfo> > trap_oi_dinfo;


}; // Snmp::Information::TrapInfos::TrapInfo


class Snmp::Information::TrapInfos::TrapInfo::TrapOiDinfo : public Entity
{
    public:
        TrapOiDinfo();
        ~TrapOiDinfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf trap_oid; //type: string
        YLeaf count; //type: uint32
        YLeaf drop_count; //type: uint32
        YLeaf retry_count; //type: uint32
        YLeaf lastsent_time; //type: string
        YLeaf lasrdrop_time; //type: string



}; // Snmp::Information::TrapInfos::TrapInfo::TrapOiDinfo


class Snmp::Information::PollOids : public Entity
{
    public:
        PollOids();
        ~PollOids();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PollOid; //type: Snmp::Information::PollOids::PollOid

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::PollOids::PollOid> > poll_oid;


}; // Snmp::Information::PollOids


class Snmp::Information::PollOids::PollOid : public Entity
{
    public:
        PollOid();
        ~PollOid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf object_id; //type: string
        YLeaf nms_count; //type: uint32
        YLeafList nms; //type: list of  string
        YLeafList request_count; //type: list of  uint32



}; // Snmp::Information::PollOids::PollOid


class Snmp::Information::InfomDetails : public Entity
{
    public:
        InfomDetails();
        ~InfomDetails();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InfomDetail; //type: Snmp::Information::InfomDetails::InfomDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::InfomDetails::InfomDetail> > infom_detail;


}; // Snmp::Information::InfomDetails


class Snmp::Information::InfomDetails::InfomDetail : public Entity
{
    public:
        InfomDetail();
        ~InfomDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf trap_host; //type: string
        YLeaf port; //type: uint16
        YLeaf host; //type: string
        YLeaf port_xr; //type: uint16
        YLeaf trap_oid_count; //type: uint32

        class TrapOiDinfo; //type: Snmp::Information::InfomDetails::InfomDetail::TrapOiDinfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::InfomDetails::InfomDetail::TrapOiDinfo> > trap_oi_dinfo;


}; // Snmp::Information::InfomDetails::InfomDetail


class Snmp::Information::InfomDetails::InfomDetail::TrapOiDinfo : public Entity
{
    public:
        TrapOiDinfo();
        ~TrapOiDinfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf trap_oid; //type: string
        YLeaf count; //type: uint32
        YLeaf drop_count; //type: uint32
        YLeaf retry_count; //type: uint32
        YLeaf lastsent_time; //type: string
        YLeaf lasrdrop_time; //type: string



}; // Snmp::Information::InfomDetails::InfomDetail::TrapOiDinfo


class Snmp::Information::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packets_received; //type: uint32
        YLeaf bad_versions_received; //type: uint32
        YLeaf bad_community_names_received; //type: uint32
        YLeaf bad_community_uses_received; //type: uint32
        YLeaf asn_parse_errors_received; //type: uint32
        YLeaf silent_drop_count; //type: uint32
        YLeaf proxy_drop_count; //type: uint32
        YLeaf too_big_packet_received; //type: uint32
        YLeaf max_packet_size; //type: uint32
        YLeaf no_such_names_received; //type: uint32
        YLeaf bad_values_received; //type: uint32
        YLeaf read_only_received; //type: uint32
        YLeaf total_general_errors; //type: uint32
        YLeaf total_requested_variables; //type: uint32
        YLeaf total_set_variables_received; //type: uint32
        YLeaf get_requests_received; //type: uint32
        YLeaf get_next_requests_received; //type: uint32
        YLeaf set_requests_received; //type: uint32
        YLeaf get_responses_received; //type: uint32
        YLeaf traps_received; //type: uint32
        YLeaf total_packets_sent; //type: uint32
        YLeaf too_big_packets_sent; //type: uint32
        YLeaf no_such_names_sent; //type: uint32
        YLeaf bad_values_sent; //type: uint32
        YLeaf general_errors_sent; //type: uint32
        YLeaf get_requests_sent; //type: uint32
        YLeaf get_next_request_sent; //type: uint32
        YLeaf set_requests_sent; //type: uint32
        YLeaf get_responses_sent; //type: uint32
        YLeaf traps_sent; //type: uint32



}; // Snmp::Information::Statistics


class Snmp::Information::IncomingQueue : public Entity
{
    public:
        IncomingQueue();
        ~IncomingQueue();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf queue_count; //type: uint32

        class InqEntry; //type: Snmp::Information::IncomingQueue::InqEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::IncomingQueue::InqEntry> > inq_entry;


}; // Snmp::Information::IncomingQueue


class Snmp::Information::IncomingQueue::InqEntry : public Entity
{
    public:
        InqEntry();
        ~InqEntry();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_of_queue; //type: string
        YLeaf request_count; //type: uint32
        YLeaf processed_request_count; //type: uint32
        YLeaf last_access_time; //type: string
        YLeaf priority; //type: uint8



}; // Snmp::Information::IncomingQueue::InqEntry


class Snmp::Information::ContextMapping : public Entity
{
    public:
        ContextMapping();
        ~ContextMapping();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ContexMapping; //type: Snmp::Information::ContextMapping::ContexMapping

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::ContextMapping::ContexMapping> > contex_mapping;


}; // Snmp::Information::ContextMapping


class Snmp::Information::ContextMapping::ContexMapping : public Entity
{
    public:
        ContexMapping();
        ~ContexMapping();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf context; //type: string
        YLeaf feature_name; //type: string
        YLeaf instance; //type: string
        YLeaf topology; //type: string
        YLeaf feature; //type: string



}; // Snmp::Information::ContextMapping::ContexMapping


class Snmp::Information::TrapOids : public Entity
{
    public:
        TrapOids();
        ~TrapOids();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TrapOid; //type: Snmp::Information::TrapOids::TrapOid

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::TrapOids::TrapOid> > trap_oid;


}; // Snmp::Information::TrapOids


class Snmp::Information::TrapOids::TrapOid : public Entity
{
    public:
        TrapOid();
        ~TrapOid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf trap_oid; //type: string
        YLeaf trap_oid_count; //type: uint32
        YLeaf trap_oid_xr; //type: string



}; // Snmp::Information::TrapOids::TrapOid


class Snmp::Information::NmSpackets : public Entity
{
    public:
        NmSpackets();
        ~NmSpackets();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NmSpacket; //type: Snmp::Information::NmSpackets::NmSpacket

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::NmSpackets::NmSpacket> > nm_spacket;


}; // Snmp::Information::NmSpackets


class Snmp::Information::NmSpackets::NmSpacket : public Entity
{
    public:
        NmSpacket();
        ~NmSpacket();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packetcount; //type: string
        YLeaf number_of_nmsq_pkts_dropped; //type: uint32
        YLeaf number_of_pkts_dropped; //type: uint32
        YLeaf overload_start_time; //type: string
        YLeaf overload_end_time; //type: string



}; // Snmp::Information::NmSpackets::NmSpacket


class Snmp::Information::Mibs : public Entity
{
    public:
        Mibs();
        ~Mibs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Mib; //type: Snmp::Information::Mibs::Mib

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::Mibs::Mib> > mib;


}; // Snmp::Information::Mibs


class Snmp::Information::Mibs::Mib : public Entity
{
    public:
        Mib();
        ~Mib();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string

        class Oids; //type: Snmp::Information::Mibs::Mib::Oids
        class MibInformation; //type: Snmp::Information::Mibs::Mib::MibInformation

        std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::Mibs::Mib::MibInformation> mib_information;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::Mibs::Mib::Oids> oids;


}; // Snmp::Information::Mibs::Mib


class Snmp::Information::Mibs::Mib::Oids : public Entity
{
    public:
        Oids();
        ~Oids();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Oid; //type: Snmp::Information::Mibs::Mib::Oids::Oid

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::Mibs::Mib::Oids::Oid> > oid;


}; // Snmp::Information::Mibs::Mib::Oids


class Snmp::Information::Mibs::Mib::Oids::Oid : public Entity
{
    public:
        Oid();
        ~Oid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf oid; //type: string
        YLeaf oid_name; //type: string



}; // Snmp::Information::Mibs::Mib::Oids::Oid


class Snmp::Information::Mibs::Mib::MibInformation : public Entity
{
    public:
        MibInformation();
        ~MibInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mib_name; //type: string
        YLeaf dll_name; //type: string
        YLeaf mib_config_filename; //type: string
        YLeaf is_mib_loaded; //type: boolean
        YLeaf dll_capabilities; //type: uint32
        YLeaf trap_strings; //type: string
        YLeaf timeout; //type: boolean
        YLeaf load_time; //type: uint32



}; // Snmp::Information::Mibs::Mib::MibInformation


class Snmp::Information::SerialNumbers : public Entity
{
    public:
        SerialNumbers();
        ~SerialNumbers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SerialNumber; //type: Snmp::Information::SerialNumbers::SerialNumber

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::SerialNumbers::SerialNumber> > serial_number;


}; // Snmp::Information::SerialNumbers


class Snmp::Information::SerialNumbers::SerialNumber : public Entity
{
    public:
        SerialNumber();
        ~SerialNumber();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: string
        YLeaf req_id; //type: int32
        YLeaf port; //type: uint16
        YLeaf nms; //type: string
        YLeaf request_id; //type: uint32
        YLeaf port_xr; //type: uint16
        YLeaf pdu_type; //type: uint16
        YLeaf error_status; //type: uint16
        YLeaf serial_num; //type: uint32
        YLeaf input_q; //type: string
        YLeaf output_q; //type: uint32
        YLeaf pending_q; //type: uint32
        YLeaf response_out; //type: uint32



}; // Snmp::Information::SerialNumbers::SerialNumber


class Snmp::Information::DropNmsAddresses : public Entity
{
    public:
        DropNmsAddresses();
        ~DropNmsAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class DropNmsAddress; //type: Snmp::Information::DropNmsAddresses::DropNmsAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::DropNmsAddresses::DropNmsAddress> > drop_nms_address;


}; // Snmp::Information::DropNmsAddresses


class Snmp::Information::DropNmsAddresses::DropNmsAddress : public Entity
{
    public:
        DropNmsAddress();
        ~DropNmsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf nms_addr; //type: string
        YLeaf nms_address; //type: string
        YLeaf incoming_q_count; //type: uint32
        YLeaf threshold_incoming_q_count; //type: uint32
        YLeaf encode_count; //type: uint32
        YLeaf duplicate_count; //type: uint32
        YLeaf stack_count; //type: uint32
        YLeaf aipc_count; //type: uint32
        YLeaf overload_count; //type: uint32
        YLeaf timeout_count; //type: uint32
        YLeaf internal_count; //type: uint32



}; // Snmp::Information::DropNmsAddresses::DropNmsAddress


class Snmp::Information::Views : public Entity
{
    public:
        Views();
        ~Views();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class View; //type: Snmp::Information::Views::View

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::Views::View> > view;


}; // Snmp::Information::Views


class Snmp::Information::Views::View : public Entity
{
    public:
        View();
        ~View();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string

        class ViewInformation; //type: Snmp::Information::Views::View::ViewInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::Views::View::ViewInformation> > view_information;


}; // Snmp::Information::Views::View


class Snmp::Information::Views::View::ViewInformation : public Entity
{
    public:
        ViewInformation();
        ~ViewInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf object_id; //type: string
        YLeaf snmp_view_family_type; //type: string
        YLeaf snmp_view_family_storage_type; //type: string
        YLeaf snmp_view_family_status; //type: string



}; // Snmp::Information::Views::View::ViewInformation


class Snmp::Information::SystemDescr : public Entity
{
    public:
        SystemDescr();
        ~SystemDescr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sys_descr; //type: string



}; // Snmp::Information::SystemDescr


class Snmp::Information::Tables : public Entity
{
    public:
        Tables();
        ~Tables();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Groups; //type: Snmp::Information::Tables::Groups
        class UserEngineIds; //type: Snmp::Information::Tables::UserEngineIds

        std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::Tables::Groups> groups;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::Tables::UserEngineIds> user_engine_ids;


}; // Snmp::Information::Tables


class Snmp::Information::Tables::Groups : public Entity
{
    public:
        Groups();
        ~Groups();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Group; //type: Snmp::Information::Tables::Groups::Group

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::Tables::Groups::Group> > group;


}; // Snmp::Information::Tables::Groups


class Snmp::Information::Tables::Groups::Group : public Entity
{
    public:
        Group();
        ~Group();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string

        class GroupInformations; //type: Snmp::Information::Tables::Groups::Group::GroupInformations

        std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::Tables::Groups::Group::GroupInformations> group_informations;


}; // Snmp::Information::Tables::Groups::Group


class Snmp::Information::Tables::Groups::Group::GroupInformations : public Entity
{
    public:
        GroupInformations();
        ~GroupInformations();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class GroupInformation; //type: Snmp::Information::Tables::Groups::Group::GroupInformations::GroupInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::Tables::Groups::Group::GroupInformations::GroupInformation> > group_information;


}; // Snmp::Information::Tables::Groups::Group::GroupInformations


class Snmp::Information::Tables::Groups::Group::GroupInformations::GroupInformation : public Entity
{
    public:
        GroupInformation();
        ~GroupInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf modelnumber; //type: string
        YLeaf level; //type: string
        YLeaf vacm_access_read_view_name; //type: string
        YLeaf vacm_access_write_view_name; //type: string
        YLeaf vacm_access_notify_view_name; //type: string
        YLeaf vacm_access_status; //type: uint32



}; // Snmp::Information::Tables::Groups::Group::GroupInformations::GroupInformation


class Snmp::Information::Tables::UserEngineIds : public Entity
{
    public:
        UserEngineIds();
        ~UserEngineIds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class UserEngineId; //type: Snmp::Information::Tables::UserEngineIds::UserEngineId

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::Tables::UserEngineIds::UserEngineId> > user_engine_id;


}; // Snmp::Information::Tables::UserEngineIds


class Snmp::Information::Tables::UserEngineIds::UserEngineId : public Entity
{
    public:
        UserEngineId();
        ~UserEngineId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf engine_id; //type: string

        class UserName; //type: Snmp::Information::Tables::UserEngineIds::UserEngineId::UserName

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::Tables::UserEngineIds::UserEngineId::UserName> > user_name;


}; // Snmp::Information::Tables::UserEngineIds::UserEngineId


class Snmp::Information::Tables::UserEngineIds::UserEngineId::UserName : public Entity
{
    public:
        UserName();
        ~UserName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf user_name; //type: string
        YLeaf usm_user_storage_type; //type: uint32
        YLeaf usm_user_status; //type: uint32



}; // Snmp::Information::Tables::UserEngineIds::UserEngineId::UserName


class Snmp::Information::SystemOid : public Entity
{
    public:
        SystemOid();
        ~SystemOid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sys_obj_id; //type: string



}; // Snmp::Information::SystemOid


class Snmp::Information::TrapQueue : public Entity
{
    public:
        TrapQueue();
        ~TrapQueue();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf trap_min; //type: uint32
        YLeaf trap_avg; //type: uint32
        YLeaf trap_max; //type: uint32
        YLeaf trap_q; //type: string



}; // Snmp::Information::TrapQueue


class Snmp::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Interface; //type: Snmp::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Interfaces::Interface> > interface;


}; // Snmp::Interfaces


class Snmp::Interfaces::Interface : public Entity
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


        YLeaf name; //type: string
        YLeaf interface_index; //type: int32



}; // Snmp::Interfaces::Interface


class Snmp::Correlator : public Entity
{
    public:
        Correlator();
        ~Correlator();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RuleDetails; //type: Snmp::Correlator::RuleDetails
        class BufferStatus; //type: Snmp::Correlator::BufferStatus
        class RuleSetDetails; //type: Snmp::Correlator::RuleSetDetails
        class Traps; //type: Snmp::Correlator::Traps

        std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Correlator::BufferStatus> buffer_status;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Correlator::RuleDetails> rule_details;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Correlator::RuleSetDetails> rule_set_details;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Correlator::Traps> traps;


}; // Snmp::Correlator


class Snmp::Correlator::RuleDetails : public Entity
{
    public:
        RuleDetails();
        ~RuleDetails();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RuleDetail; //type: Snmp::Correlator::RuleDetails::RuleDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Correlator::RuleDetails::RuleDetail> > rule_detail;


}; // Snmp::Correlator::RuleDetails


class Snmp::Correlator::RuleDetails::RuleDetail : public Entity
{
    public:
        RuleDetail();
        ~RuleDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rule_name; //type: string
        YLeaf timeout; //type: uint32

        class RuleSummary; //type: Snmp::Correlator::RuleDetails::RuleDetail::RuleSummary
        class RootCause; //type: Snmp::Correlator::RuleDetails::RuleDetail::RootCause
        class NonRootcaus; //type: Snmp::Correlator::RuleDetails::RuleDetail::NonRootcaus
        class ApplyHost; //type: Snmp::Correlator::RuleDetails::RuleDetail::ApplyHost

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Correlator::RuleDetails::RuleDetail::ApplyHost> > apply_host;
        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Correlator::RuleDetails::RuleDetail::NonRootcaus> > non_rootcaus;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Correlator::RuleDetails::RuleDetail::RootCause> root_cause;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Correlator::RuleDetails::RuleDetail::RuleSummary> rule_summary;


}; // Snmp::Correlator::RuleDetails::RuleDetail


class Snmp::Correlator::RuleDetails::RuleDetail::RuleSummary : public Entity
{
    public:
        RuleSummary();
        ~RuleSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rule_name; //type: string
        YLeaf rule_state; //type: SnmpCorrRuleStateEnum
        YLeaf buffered_traps_count; //type: uint32



}; // Snmp::Correlator::RuleDetails::RuleDetail::RuleSummary


class Snmp::Correlator::RuleDetails::RuleDetail::RootCause : public Entity
{
    public:
        RootCause();
        ~RootCause();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf oid; //type: string

        class VarBind; //type: Snmp::Correlator::RuleDetails::RuleDetail::RootCause::VarBind

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Correlator::RuleDetails::RuleDetail::RootCause::VarBind> > var_bind;


}; // Snmp::Correlator::RuleDetails::RuleDetail::RootCause


class Snmp::Correlator::RuleDetails::RuleDetail::RootCause::VarBind : public Entity
{
    public:
        VarBind();
        ~VarBind();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf oid; //type: string
        YLeaf match_type; //type: SnmpCorrVbindMatchEnum
        YLeaf reg_exp; //type: string



}; // Snmp::Correlator::RuleDetails::RuleDetail::RootCause::VarBind


class Snmp::Correlator::RuleDetails::RuleDetail::NonRootcaus : public Entity
{
    public:
        NonRootcaus();
        ~NonRootcaus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf oid; //type: string

        class VarBind; //type: Snmp::Correlator::RuleDetails::RuleDetail::NonRootcaus::VarBind

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Correlator::RuleDetails::RuleDetail::NonRootcaus::VarBind> > var_bind;


}; // Snmp::Correlator::RuleDetails::RuleDetail::NonRootcaus


class Snmp::Correlator::RuleDetails::RuleDetail::NonRootcaus::VarBind : public Entity
{
    public:
        VarBind();
        ~VarBind();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf oid; //type: string
        YLeaf match_type; //type: SnmpCorrVbindMatchEnum
        YLeaf reg_exp; //type: string



}; // Snmp::Correlator::RuleDetails::RuleDetail::NonRootcaus::VarBind


class Snmp::Correlator::RuleDetails::RuleDetail::ApplyHost : public Entity
{
    public:
        ApplyHost();
        ~ApplyHost();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ip_address; //type: string
        YLeaf port; //type: uint16



}; // Snmp::Correlator::RuleDetails::RuleDetail::ApplyHost


class Snmp::Correlator::BufferStatus : public Entity
{
    public:
        BufferStatus();
        ~BufferStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf current_size; //type: uint32
        YLeaf configured_size; //type: uint32



}; // Snmp::Correlator::BufferStatus


class Snmp::Correlator::RuleSetDetails : public Entity
{
    public:
        RuleSetDetails();
        ~RuleSetDetails();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RuleSetDetail; //type: Snmp::Correlator::RuleSetDetails::RuleSetDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Correlator::RuleSetDetails::RuleSetDetail> > rule_set_detail;


}; // Snmp::Correlator::RuleSetDetails


class Snmp::Correlator::RuleSetDetails::RuleSetDetail : public Entity
{
    public:
        RuleSetDetail();
        ~RuleSetDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rule_set_name; //type: string
        YLeaf rule_set_name_xr; //type: string

        class Rules; //type: Snmp::Correlator::RuleSetDetails::RuleSetDetail::Rules

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Correlator::RuleSetDetails::RuleSetDetail::Rules> > rules;


}; // Snmp::Correlator::RuleSetDetails::RuleSetDetail


class Snmp::Correlator::RuleSetDetails::RuleSetDetail::Rules : public Entity
{
    public:
        Rules();
        ~Rules();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rule_name; //type: string
        YLeaf rule_state; //type: SnmpCorrRuleStateEnum
        YLeaf buffered_traps_count; //type: uint32



}; // Snmp::Correlator::RuleSetDetails::RuleSetDetail::Rules


class Snmp::Correlator::Traps : public Entity
{
    public:
        Traps();
        ~Traps();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Trap; //type: Snmp::Correlator::Traps::Trap

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Correlator::Traps::Trap> > trap;


}; // Snmp::Correlator::Traps


class Snmp::Correlator::Traps::Trap : public Entity
{
    public:
        Trap();
        ~Trap();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry_id; //type: int32
        YLeaf correlation_id; //type: uint32
        YLeaf is_root_cause; //type: boolean
        YLeaf rule_name; //type: string

        class TrapInfo; //type: Snmp::Correlator::Traps::Trap::TrapInfo

        std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Correlator::Traps::Trap::TrapInfo> trap_info;


}; // Snmp::Correlator::Traps::Trap


class Snmp::Correlator::Traps::Trap::TrapInfo : public Entity
{
    public:
        TrapInfo();
        ~TrapInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf oid; //type: string
        YLeaf relative_timestamp; //type: uint32
        YLeaf timestamp; //type: uint64

        class VarBind; //type: Snmp::Correlator::Traps::Trap::TrapInfo::VarBind

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Correlator::Traps::Trap::TrapInfo::VarBind> > var_bind;


}; // Snmp::Correlator::Traps::Trap::TrapInfo


class Snmp::Correlator::Traps::Trap::TrapInfo::VarBind : public Entity
{
    public:
        VarBind();
        ~VarBind();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf oid; //type: string
        YLeaf value_; //type: string



}; // Snmp::Correlator::Traps::Trap::TrapInfo::VarBind


class Snmp::InterfaceIndexes : public Entity
{
    public:
        InterfaceIndexes();
        ~InterfaceIndexes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InterfaceIndex; //type: Snmp::InterfaceIndexes::InterfaceIndex

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::InterfaceIndexes::InterfaceIndex> > interface_index;


}; // Snmp::InterfaceIndexes


class Snmp::InterfaceIndexes::InterfaceIndex : public Entity
{
    public:
        InterfaceIndex();
        ~InterfaceIndex();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_index; //type: int32
        YLeaf interface_name; //type: string



}; // Snmp::InterfaceIndexes::InterfaceIndex


class Snmp::IfIndexes : public Entity
{
    public:
        IfIndexes();
        ~IfIndexes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class IfIndex; //type: Snmp::IfIndexes::IfIndex

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::IfIndexes::IfIndex> > if_index;


}; // Snmp::IfIndexes


class Snmp::IfIndexes::IfIndex : public Entity
{
    public:
        IfIndex();
        ~IfIndex();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_index; //type: int32
        YLeaf interface_name; //type: string



}; // Snmp::IfIndexes::IfIndex


class Snmp::EntityMib : public Entity
{
    public:
        EntityMib();
        ~EntityMib();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class EntityPhysicalIndexes; //type: Snmp::EntityMib::EntityPhysicalIndexes

        std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::EntityMib::EntityPhysicalIndexes> entity_physical_indexes;


}; // Snmp::EntityMib


class Snmp::EntityMib::EntityPhysicalIndexes : public Entity
{
    public:
        EntityPhysicalIndexes();
        ~EntityPhysicalIndexes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class EntityPhysicalIndex; //type: Snmp::EntityMib::EntityPhysicalIndexes::EntityPhysicalIndex

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::EntityMib::EntityPhysicalIndexes::EntityPhysicalIndex> > entity_physical_index;


}; // Snmp::EntityMib::EntityPhysicalIndexes


class Snmp::EntityMib::EntityPhysicalIndexes::EntityPhysicalIndex : public Entity
{
    public:
        EntityPhysicalIndex();
        ~EntityPhysicalIndex();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entity_phynum; //type: string
        YLeaf physical_index; //type: uint32
        YLeaf ent_physical_name; //type: string
        YLeaf location; //type: string
        YLeaf ent_physical_descr; //type: string
        YLeaf ent_physical_firmware_rev; //type: string
        YLeaf ent_physical_hardware_rev; //type: string
        YLeaf ent_physical_modelname; //type: string
        YLeaf ent_physical_serial_num; //type: string
        YLeaf ent_physical_software_rev; //type: string
        YLeaf ent_physical_mfg_name; //type: string



}; // Snmp::EntityMib::EntityPhysicalIndexes::EntityPhysicalIndex


class Snmp::InterfaceMib : public Entity
{
    public:
        InterfaceMib();
        ~InterfaceMib();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Interfaces; //type: Snmp::InterfaceMib::Interfaces
        class InterfaceConnectors; //type: Snmp::InterfaceMib::InterfaceConnectors
        class InterfaceAliases; //type: Snmp::InterfaceMib::InterfaceAliases
        class NotificationInterfaces; //type: Snmp::InterfaceMib::NotificationInterfaces
        class InterfaceStackStatuses; //type: Snmp::InterfaceMib::InterfaceStackStatuses

        std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::InterfaceMib::InterfaceAliases> interface_aliases;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::InterfaceMib::InterfaceConnectors> interface_connectors;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::InterfaceMib::InterfaceStackStatuses> interface_stack_statuses;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::InterfaceMib::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::InterfaceMib::NotificationInterfaces> notification_interfaces;


}; // Snmp::InterfaceMib


class Snmp::InterfaceMib::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Interface; //type: Snmp::InterfaceMib::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::InterfaceMib::Interfaces::Interface> > interface;


}; // Snmp::InterfaceMib::Interfaces


class Snmp::InterfaceMib::Interfaces::Interface : public Entity
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
        YLeaf if_index; //type: uint32



}; // Snmp::InterfaceMib::Interfaces::Interface


class Snmp::InterfaceMib::InterfaceConnectors : public Entity
{
    public:
        InterfaceConnectors();
        ~InterfaceConnectors();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InterfaceConnector; //type: Snmp::InterfaceMib::InterfaceConnectors::InterfaceConnector

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::InterfaceMib::InterfaceConnectors::InterfaceConnector> > interface_connector;


}; // Snmp::InterfaceMib::InterfaceConnectors


class Snmp::InterfaceMib::InterfaceConnectors::InterfaceConnector : public Entity
{
    public:
        InterfaceConnector();
        ~InterfaceConnector();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf if_connector_present; //type: string



}; // Snmp::InterfaceMib::InterfaceConnectors::InterfaceConnector


class Snmp::InterfaceMib::InterfaceAliases : public Entity
{
    public:
        InterfaceAliases();
        ~InterfaceAliases();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InterfaceAlias; //type: Snmp::InterfaceMib::InterfaceAliases::InterfaceAlias

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::InterfaceMib::InterfaceAliases::InterfaceAlias> > interface_alias;


}; // Snmp::InterfaceMib::InterfaceAliases


class Snmp::InterfaceMib::InterfaceAliases::InterfaceAlias : public Entity
{
    public:
        InterfaceAlias();
        ~InterfaceAlias();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf if_alias; //type: string



}; // Snmp::InterfaceMib::InterfaceAliases::InterfaceAlias


class Snmp::InterfaceMib::NotificationInterfaces : public Entity
{
    public:
        NotificationInterfaces();
        ~NotificationInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NotificationInterface; //type: Snmp::InterfaceMib::NotificationInterfaces::NotificationInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::InterfaceMib::NotificationInterfaces::NotificationInterface> > notification_interface;


}; // Snmp::InterfaceMib::NotificationInterfaces


class Snmp::InterfaceMib::NotificationInterfaces::NotificationInterface : public Entity
{
    public:
        NotificationInterface();
        ~NotificationInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf link_up_down_notif_status; //type: LinkUpDownStatusEnum



}; // Snmp::InterfaceMib::NotificationInterfaces::NotificationInterface


class Snmp::InterfaceMib::InterfaceStackStatuses : public Entity
{
    public:
        InterfaceStackStatuses();
        ~InterfaceStackStatuses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InterfaceStackStatus; //type: Snmp::InterfaceMib::InterfaceStackStatuses::InterfaceStackStatus

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::InterfaceMib::InterfaceStackStatuses::InterfaceStackStatus> > interface_stack_status;


}; // Snmp::InterfaceMib::InterfaceStackStatuses


class Snmp::InterfaceMib::InterfaceStackStatuses::InterfaceStackStatus : public Entity
{
    public:
        InterfaceStackStatus();
        ~InterfaceStackStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_stack_status; //type: string
        YLeaf if_stack_higher_layer; //type: string
        YLeaf if_stack_lower_layer; //type: string
        YLeaf if_stack_status; //type: string



}; // Snmp::InterfaceMib::InterfaceStackStatuses::InterfaceStackStatus


class Snmp::SensorMib : public Entity
{
    public:
        SensorMib();
        ~SensorMib();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PhysicalIndexes; //type: Snmp::SensorMib::PhysicalIndexes
        class EntPhyIndexes; //type: Snmp::SensorMib::EntPhyIndexes

        std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::SensorMib::EntPhyIndexes> ent_phy_indexes;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::SensorMib::PhysicalIndexes> physical_indexes;


}; // Snmp::SensorMib


class Snmp::SensorMib::PhysicalIndexes : public Entity
{
    public:
        PhysicalIndexes();
        ~PhysicalIndexes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PhysicalIndex; //type: Snmp::SensorMib::PhysicalIndexes::PhysicalIndex

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::SensorMib::PhysicalIndexes::PhysicalIndex> > physical_index;


}; // Snmp::SensorMib::PhysicalIndexes


class Snmp::SensorMib::PhysicalIndexes::PhysicalIndex : public Entity
{
    public:
        PhysicalIndex();
        ~PhysicalIndex();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf index_; //type: string

        class ThresholdIndexes; //type: Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes

        std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes> threshold_indexes;


}; // Snmp::SensorMib::PhysicalIndexes::PhysicalIndex


class Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes : public Entity
{
    public:
        ThresholdIndexes();
        ~ThresholdIndexes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ThresholdIndex; //type: Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes::ThresholdIndex

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes::ThresholdIndex> > threshold_index;


}; // Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes


class Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes::ThresholdIndex : public Entity
{
    public:
        ThresholdIndex();
        ~ThresholdIndex();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf phy_index; //type: string
        YLeaf thre_index; //type: string
        YLeaf threshold_severity; //type: uint32
        YLeaf threshold_relation; //type: uint32
        YLeaf threshold_value; //type: uint32
        YLeaf threshold_evaluation; //type: boolean
        YLeaf threshold_notification_enabled; //type: boolean



}; // Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes::ThresholdIndex


class Snmp::SensorMib::EntPhyIndexes : public Entity
{
    public:
        EntPhyIndexes();
        ~EntPhyIndexes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class EntPhyIndex; //type: Snmp::SensorMib::EntPhyIndexes::EntPhyIndex

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::SensorMib::EntPhyIndexes::EntPhyIndex> > ent_phy_index;


}; // Snmp::SensorMib::EntPhyIndexes


class Snmp::SensorMib::EntPhyIndexes::EntPhyIndex : public Entity
{
    public:
        EntPhyIndex();
        ~EntPhyIndex();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf index_; //type: string
        YLeaf field_validity_bitmap; //type: uint32
        YLeaf device_description; //type: string
        YLeaf units; //type: string
        YLeaf device_id; //type: uint32
        YLeaf value_; //type: uint32
        YLeaf alarm_type; //type: uint32
        YLeaf data_type; //type: uint32
        YLeaf scale; //type: uint32
        YLeaf precision; //type: uint32
        YLeaf status; //type: uint32
        YLeaf age_time_stamp; //type: uint32
        YLeaf update_rate; //type: uint32
        YLeaf measured_entity; //type: uint32



}; // Snmp::SensorMib::EntPhyIndexes::EntPhyIndex

class SnmpCorrVbindMatchEnum : public Enum
{
    public:
        static const Enum::YLeaf index_;
        static const Enum::YLeaf value_;

};

class SnmpCorrRuleStateEnum : public Enum
{
    public:
        static const Enum::YLeaf rule_unapplied;
        static const Enum::YLeaf rule_applied;
        static const Enum::YLeaf rule_applied_all;

};

class DupReqDropStatusEnum : public Enum
{
    public:
        static const Enum::YLeaf disabled;
        static const Enum::YLeaf enabled;

};


}
}

#endif /* _CISCO_IOS_XR_SNMP_AGENT_OPER_ */

