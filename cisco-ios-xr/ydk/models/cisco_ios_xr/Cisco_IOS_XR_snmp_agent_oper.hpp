#ifndef _CISCO_IOS_XR_SNMP_AGENT_OPER_
#define _CISCO_IOS_XR_SNMP_AGENT_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xr {
namespace Cisco_IOS_XR_snmp_agent_oper {

class Snmp : public ydk::Entity
{
    public:
        Snmp();
        ~Snmp();

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

        class TrapServers; //type: Snmp::TrapServers
        class Information; //type: Snmp::Information
        class Interfaces; //type: Snmp::Interfaces
        class Correlator; //type: Snmp::Correlator
        class InterfaceIndexes; //type: Snmp::InterfaceIndexes
        class IfIndexes; //type: Snmp::IfIndexes
        class EntityMib; //type: Snmp::EntityMib
        class InterfaceMib; //type: Snmp::InterfaceMib
        class SensorMib; //type: Snmp::SensorMib

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_oper::Snmp::TrapServers> trap_servers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_oper::Snmp::Information> information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_oper::Snmp::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_oper::Snmp::Correlator> correlator;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_oper::Snmp::InterfaceIndexes> interface_indexes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_oper::Snmp::IfIndexes> if_indexes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_oper::Snmp::EntityMib> entity_mib;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_oper::Snmp::InterfaceMib> interface_mib;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_oper::Snmp::SensorMib> sensor_mib;
        
}; // Snmp


class Snmp::TrapServers : public ydk::Entity
{
    public:
        TrapServers();
        ~TrapServers();

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

        class TrapServer; //type: Snmp::TrapServers::TrapServer

        ydk::YList trap_server;
        
}; // Snmp::TrapServers


class Snmp::TrapServers::TrapServer : public ydk::Entity
{
    public:
        TrapServer();
        ~TrapServer();

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

        ydk::YLeaf trap_host; //type: string
        ydk::YLeaf port; //type: uint16
        ydk::YLeaf number_of_pkts_in_trap_q; //type: uint32
        ydk::YLeaf max_q_length_of_trap_q; //type: uint32
        ydk::YLeaf number_of_pkts_sent; //type: uint32
        ydk::YLeaf number_of_pkts_dropped; //type: uint32

}; // Snmp::TrapServers::TrapServer


class Snmp::Information : public ydk::Entity
{
    public:
        Information();
        ~Information();

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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::Hosts> hosts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::SystemUpTime> system_up_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::NmsAddresses> nms_addresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::EngineId> engine_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::RxQueue> rx_queue;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::SystemName> system_name;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::RequestTypeDetail> request_type_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::DuplicateDrop> duplicate_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::BulkStatsTransfers> bulk_stats_transfers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::TrapInfos> trap_infos;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::PollOids> poll_oids;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::InfomDetails> infom_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::Statistics> statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::IncomingQueue> incoming_queue;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::ContextMapping> context_mapping;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::TrapOids> trap_oids;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::NmSpackets> nm_spackets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::Mibs> mibs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::SerialNumbers> serial_numbers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::DropNmsAddresses> drop_nms_addresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::Views> views;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::SystemDescr> system_descr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::Tables> tables;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::SystemOid> system_oid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::TrapQueue> trap_queue;
        
}; // Snmp::Information


class Snmp::Information::Hosts : public ydk::Entity
{
    public:
        Hosts();
        ~Hosts();

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

        class Host; //type: Snmp::Information::Hosts::Host

        ydk::YList host;
        
}; // Snmp::Information::Hosts


class Snmp::Information::Hosts::Host : public ydk::Entity
{
    public:
        Host();
        ~Host();

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

        ydk::YLeaf name; //type: string
        class HostInformation; //type: Snmp::Information::Hosts::Host::HostInformation

        ydk::YList host_information;
        
}; // Snmp::Information::Hosts::Host


class Snmp::Information::Hosts::Host::HostInformation : public ydk::Entity
{
    public:
        HostInformation();
        ~HostInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf user; //type: string
        ydk::YLeaf snmp_target_address_t_host; //type: string
        ydk::YLeaf snmp_target_address_port; //type: string
        ydk::YLeaf snmp_target_addresstype; //type: string
        ydk::YLeaf snmp_target_params_security_model; //type: string
        ydk::YLeaf snmp_target_params_security_name; //type: string
        ydk::YLeaf snmp_target_params_security_level; //type: string

}; // Snmp::Information::Hosts::Host::HostInformation


class Snmp::Information::SystemUpTime : public ydk::Entity
{
    public:
        SystemUpTime();
        ~SystemUpTime();

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

        ydk::YLeaf system_up_time_edm; //type: string

}; // Snmp::Information::SystemUpTime


class Snmp::Information::NmsAddresses : public ydk::Entity
{
    public:
        NmsAddresses();
        ~NmsAddresses();

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

        class NmsAddress; //type: Snmp::Information::NmsAddresses::NmsAddress

        ydk::YList nms_address;
        
}; // Snmp::Information::NmsAddresses


class Snmp::Information::NmsAddresses::NmsAddress : public ydk::Entity
{
    public:
        NmsAddress();
        ~NmsAddress();

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

        ydk::YLeaf nms_addr; //type: string
        ydk::YLeaf nms_address; //type: string
        ydk::YLeaf get_request_count; //type: uint32
        ydk::YLeaf getnext_request_count; //type: uint32
        ydk::YLeaf getbulk_request_count; //type: uint32
        ydk::YLeaf set_request_count; //type: uint32
        ydk::YLeaf test_request_count; //type: uint32

}; // Snmp::Information::NmsAddresses::NmsAddress


class Snmp::Information::EngineId : public ydk::Entity
{
    public:
        EngineId();
        ~EngineId();

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

        ydk::YLeaf engine_id; //type: string

}; // Snmp::Information::EngineId


class Snmp::Information::RxQueue : public ydk::Entity
{
    public:
        RxQueue();
        ~RxQueue();

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

        ydk::YLeaf qlen; //type: uint32
        ydk::YLeaf in_min; //type: uint32
        ydk::YLeaf in_avg; //type: uint32
        ydk::YLeaf in_max; //type: uint32
        ydk::YLeaf pend_min; //type: uint32
        ydk::YLeaf pend_avg; //type: uint32
        ydk::YLeaf pend_max; //type: uint32
        class IncomingQ; //type: Snmp::Information::RxQueue::IncomingQ
        class PendingQ; //type: Snmp::Information::RxQueue::PendingQ

        ydk::YList incoming_q;
        ydk::YList pending_q;
        
}; // Snmp::Information::RxQueue


class Snmp::Information::RxQueue::IncomingQ : public ydk::Entity
{
    public:
        IncomingQ();
        ~IncomingQ();

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

        ydk::YLeaf min; //type: uint32
        ydk::YLeaf avg; //type: uint32
        ydk::YLeaf max; //type: uint32

}; // Snmp::Information::RxQueue::IncomingQ


class Snmp::Information::RxQueue::PendingQ : public ydk::Entity
{
    public:
        PendingQ();
        ~PendingQ();

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

        ydk::YLeaf min; //type: uint32
        ydk::YLeaf avg; //type: uint32
        ydk::YLeaf max; //type: uint32

}; // Snmp::Information::RxQueue::PendingQ


class Snmp::Information::SystemName : public ydk::Entity
{
    public:
        SystemName();
        ~SystemName();

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

        ydk::YLeaf system_name; //type: string

}; // Snmp::Information::SystemName


class Snmp::Information::RequestTypeDetail : public ydk::Entity
{
    public:
        RequestTypeDetail();
        ~RequestTypeDetail();

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

        class NmsAddresses; //type: Snmp::Information::RequestTypeDetail::NmsAddresses

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::RequestTypeDetail::NmsAddresses> nms_addresses;
        
}; // Snmp::Information::RequestTypeDetail


class Snmp::Information::RequestTypeDetail::NmsAddresses : public ydk::Entity
{
    public:
        NmsAddresses();
        ~NmsAddresses();

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

        class NmsAddress; //type: Snmp::Information::RequestTypeDetail::NmsAddresses::NmsAddress

        ydk::YList nms_address;
        
}; // Snmp::Information::RequestTypeDetail::NmsAddresses


class Snmp::Information::RequestTypeDetail::NmsAddresses::NmsAddress : public ydk::Entity
{
    public:
        NmsAddress();
        ~NmsAddress();

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

        ydk::YLeaf nms_addr; //type: string
        ydk::YLeaf total_count; //type: uint32
        ydk::YLeaf agent_request_count; //type: uint32
        ydk::YLeaf interface_request_count; //type: uint32
        ydk::YLeaf entity_request_count; //type: uint32
        ydk::YLeaf route_request_count; //type: uint32
        ydk::YLeaf infra_request_count; //type: uint32

}; // Snmp::Information::RequestTypeDetail::NmsAddresses::NmsAddress


class Snmp::Information::DuplicateDrop : public ydk::Entity
{
    public:
        DuplicateDrop();
        ~DuplicateDrop();

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

        ydk::YLeaf duplicate_request_status; //type: DupReqDropStatus
        ydk::YLeaf last_status_change_time; //type: string
        ydk::YLeaf duplicate_drop_configured_timeout; //type: uint32
        ydk::YLeaf duplicate_dropped_requests; //type: uint32
        ydk::YLeaf retry_processed_requests; //type: uint32
        ydk::YLeaf first_enable_time; //type: string
        ydk::YLeaf latest_duplicate_dropped_requests; //type: uint32
        ydk::YLeaf latest_retry_processed_requests; //type: uint32
        ydk::YLeaf duplicate_request_latest_enable_time; //type: string
        ydk::YLeaf duplicate_drop_enable_count; //type: uint32
        ydk::YLeaf duplicate_drop_disable_count; //type: uint32

}; // Snmp::Information::DuplicateDrop


class Snmp::Information::BulkStatsTransfers : public ydk::Entity
{
    public:
        BulkStatsTransfers();
        ~BulkStatsTransfers();

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

        class BulkStatsTransfer; //type: Snmp::Information::BulkStatsTransfers::BulkStatsTransfer

        ydk::YList bulk_stats_transfer;
        
}; // Snmp::Information::BulkStatsTransfers


class Snmp::Information::BulkStatsTransfers::BulkStatsTransfer : public ydk::Entity
{
    public:
        BulkStatsTransfer();
        ~BulkStatsTransfer();

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

        ydk::YLeaf transfer_name; //type: string
        ydk::YLeaf transfer_name_xr; //type: string
        ydk::YLeaf url_primary; //type: string
        ydk::YLeaf url_secondary; //type: string
        ydk::YLeaf retained_file; //type: string
        ydk::YLeaf time_left; //type: uint32
        ydk::YLeaf retry_left; //type: uint32

}; // Snmp::Information::BulkStatsTransfers::BulkStatsTransfer


class Snmp::Information::TrapInfos : public ydk::Entity
{
    public:
        TrapInfos();
        ~TrapInfos();

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

        class TrapInfo; //type: Snmp::Information::TrapInfos::TrapInfo

        ydk::YList trap_info;
        
}; // Snmp::Information::TrapInfos


class Snmp::Information::TrapInfos::TrapInfo : public ydk::Entity
{
    public:
        TrapInfo();
        ~TrapInfo();

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

        ydk::YLeaf trap_host; //type: string
        ydk::YLeaf port; //type: uint16
        ydk::YLeaf host; //type: string
        ydk::YLeaf port_xr; //type: uint16
        ydk::YLeaf trap_oid_count; //type: uint32
        class TrapOiDinfo; //type: Snmp::Information::TrapInfos::TrapInfo::TrapOiDinfo

        ydk::YList trap_oi_dinfo;
        
}; // Snmp::Information::TrapInfos::TrapInfo


class Snmp::Information::TrapInfos::TrapInfo::TrapOiDinfo : public ydk::Entity
{
    public:
        TrapOiDinfo();
        ~TrapOiDinfo();

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

        ydk::YLeaf trap_oid; //type: string
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf drop_count; //type: uint32
        ydk::YLeaf retry_count; //type: uint32
        ydk::YLeaf lastsent_time; //type: string
        ydk::YLeaf lasrdrop_time; //type: string

}; // Snmp::Information::TrapInfos::TrapInfo::TrapOiDinfo


class Snmp::Information::PollOids : public ydk::Entity
{
    public:
        PollOids();
        ~PollOids();

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

        class PollOid; //type: Snmp::Information::PollOids::PollOid

        ydk::YList poll_oid;
        
}; // Snmp::Information::PollOids


class Snmp::Information::PollOids::PollOid : public ydk::Entity
{
    public:
        PollOid();
        ~PollOid();

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

        ydk::YLeaf object_id; //type: string
        ydk::YLeaf nms_count; //type: uint32
        ydk::YLeafList nms; //type: list of  string
        ydk::YLeafList request_count; //type: list of  uint32

}; // Snmp::Information::PollOids::PollOid


class Snmp::Information::InfomDetails : public ydk::Entity
{
    public:
        InfomDetails();
        ~InfomDetails();

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

        class InfomDetail; //type: Snmp::Information::InfomDetails::InfomDetail

        ydk::YList infom_detail;
        
}; // Snmp::Information::InfomDetails


class Snmp::Information::InfomDetails::InfomDetail : public ydk::Entity
{
    public:
        InfomDetail();
        ~InfomDetail();

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

        ydk::YLeaf trap_host; //type: string
        ydk::YLeaf port; //type: uint16
        ydk::YLeaf host; //type: string
        ydk::YLeaf port_xr; //type: uint16
        ydk::YLeaf trap_oid_count; //type: uint32
        class TrapOiDinfo; //type: Snmp::Information::InfomDetails::InfomDetail::TrapOiDinfo

        ydk::YList trap_oi_dinfo;
        
}; // Snmp::Information::InfomDetails::InfomDetail


class Snmp::Information::InfomDetails::InfomDetail::TrapOiDinfo : public ydk::Entity
{
    public:
        TrapOiDinfo();
        ~TrapOiDinfo();

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

        ydk::YLeaf trap_oid; //type: string
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf drop_count; //type: uint32
        ydk::YLeaf retry_count; //type: uint32
        ydk::YLeaf lastsent_time; //type: string
        ydk::YLeaf lasrdrop_time; //type: string

}; // Snmp::Information::InfomDetails::InfomDetail::TrapOiDinfo


class Snmp::Information::Statistics : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf packets_received; //type: uint32
        ydk::YLeaf bad_versions_received; //type: uint32
        ydk::YLeaf bad_community_names_received; //type: uint32
        ydk::YLeaf bad_community_uses_received; //type: uint32
        ydk::YLeaf asn_parse_errors_received; //type: uint32
        ydk::YLeaf silent_drop_count; //type: uint32
        ydk::YLeaf proxy_drop_count; //type: uint32
        ydk::YLeaf too_big_packet_received; //type: uint32
        ydk::YLeaf max_packet_size; //type: uint32
        ydk::YLeaf no_such_names_received; //type: uint32
        ydk::YLeaf bad_values_received; //type: uint32
        ydk::YLeaf read_only_received; //type: uint32
        ydk::YLeaf total_general_errors; //type: uint32
        ydk::YLeaf total_requested_variables; //type: uint32
        ydk::YLeaf total_set_variables_received; //type: uint32
        ydk::YLeaf get_requests_received; //type: uint32
        ydk::YLeaf get_next_requests_received; //type: uint32
        ydk::YLeaf set_requests_received; //type: uint32
        ydk::YLeaf get_responses_received; //type: uint32
        ydk::YLeaf traps_received; //type: uint32
        ydk::YLeaf total_packets_sent; //type: uint32
        ydk::YLeaf too_big_packets_sent; //type: uint32
        ydk::YLeaf no_such_names_sent; //type: uint32
        ydk::YLeaf bad_values_sent; //type: uint32
        ydk::YLeaf general_errors_sent; //type: uint32
        ydk::YLeaf get_requests_sent; //type: uint32
        ydk::YLeaf get_next_request_sent; //type: uint32
        ydk::YLeaf set_requests_sent; //type: uint32
        ydk::YLeaf get_responses_sent; //type: uint32
        ydk::YLeaf traps_sent; //type: uint32

}; // Snmp::Information::Statistics


class Snmp::Information::IncomingQueue : public ydk::Entity
{
    public:
        IncomingQueue();
        ~IncomingQueue();

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

        ydk::YLeaf queue_count; //type: uint32
        class InqEntry; //type: Snmp::Information::IncomingQueue::InqEntry

        ydk::YList inq_entry;
        
}; // Snmp::Information::IncomingQueue


class Snmp::Information::IncomingQueue::InqEntry : public ydk::Entity
{
    public:
        InqEntry();
        ~InqEntry();

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

        ydk::YLeaf address_of_queue; //type: string
        ydk::YLeaf request_count; //type: uint32
        ydk::YLeaf processed_request_count; //type: uint32
        ydk::YLeaf last_access_time; //type: string
        ydk::YLeaf priority; //type: uint8

}; // Snmp::Information::IncomingQueue::InqEntry


class Snmp::Information::ContextMapping : public ydk::Entity
{
    public:
        ContextMapping();
        ~ContextMapping();

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

        class ContexMapping; //type: Snmp::Information::ContextMapping::ContexMapping

        ydk::YList contex_mapping;
        
}; // Snmp::Information::ContextMapping


class Snmp::Information::ContextMapping::ContexMapping : public ydk::Entity
{
    public:
        ContexMapping();
        ~ContexMapping();

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

        ydk::YLeaf context; //type: string
        ydk::YLeaf feature_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf topology; //type: string
        ydk::YLeaf feature; //type: string

}; // Snmp::Information::ContextMapping::ContexMapping


class Snmp::Information::TrapOids : public ydk::Entity
{
    public:
        TrapOids();
        ~TrapOids();

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

        class TrapOid; //type: Snmp::Information::TrapOids::TrapOid

        ydk::YList trap_oid;
        
}; // Snmp::Information::TrapOids


class Snmp::Information::TrapOids::TrapOid : public ydk::Entity
{
    public:
        TrapOid();
        ~TrapOid();

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

        ydk::YLeaf trap_oid; //type: string
        ydk::YLeaf trap_oid_count; //type: uint32
        ydk::YLeaf trap_oid_xr; //type: string

}; // Snmp::Information::TrapOids::TrapOid


class Snmp::Information::NmSpackets : public ydk::Entity
{
    public:
        NmSpackets();
        ~NmSpackets();

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

        class NmSpacket; //type: Snmp::Information::NmSpackets::NmSpacket

        ydk::YList nm_spacket;
        
}; // Snmp::Information::NmSpackets


class Snmp::Information::NmSpackets::NmSpacket : public ydk::Entity
{
    public:
        NmSpacket();
        ~NmSpacket();

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

        ydk::YLeaf packetcount; //type: string
        ydk::YLeaf number_of_nmsq_pkts_dropped; //type: uint32
        ydk::YLeaf number_of_pkts_dropped; //type: uint32
        ydk::YLeaf overload_start_time; //type: string
        ydk::YLeaf overload_end_time; //type: string

}; // Snmp::Information::NmSpackets::NmSpacket


class Snmp::Information::Mibs : public ydk::Entity
{
    public:
        Mibs();
        ~Mibs();

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

        class Mib; //type: Snmp::Information::Mibs::Mib

        ydk::YList mib;
        
}; // Snmp::Information::Mibs


class Snmp::Information::Mibs::Mib : public ydk::Entity
{
    public:
        Mib();
        ~Mib();

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

        ydk::YLeaf name; //type: string
        class Oids; //type: Snmp::Information::Mibs::Mib::Oids
        class MibInformation; //type: Snmp::Information::Mibs::Mib::MibInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::Mibs::Mib::Oids> oids;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::Mibs::Mib::MibInformation> mib_information;
        
}; // Snmp::Information::Mibs::Mib


class Snmp::Information::Mibs::Mib::Oids : public ydk::Entity
{
    public:
        Oids();
        ~Oids();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Oid; //type: Snmp::Information::Mibs::Mib::Oids::Oid

        ydk::YList oid;
        
}; // Snmp::Information::Mibs::Mib::Oids


class Snmp::Information::Mibs::Mib::Oids::Oid : public ydk::Entity
{
    public:
        Oid();
        ~Oid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf oid; //type: string
        ydk::YLeaf oid_name; //type: string

}; // Snmp::Information::Mibs::Mib::Oids::Oid


class Snmp::Information::Mibs::Mib::MibInformation : public ydk::Entity
{
    public:
        MibInformation();
        ~MibInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mib_name; //type: string
        ydk::YLeaf dll_name; //type: string
        ydk::YLeaf mib_config_filename; //type: string
        ydk::YLeaf is_mib_loaded; //type: boolean
        ydk::YLeaf dll_capabilities; //type: uint32
        ydk::YLeaf trap_strings; //type: string
        ydk::YLeaf timeout; //type: boolean
        ydk::YLeaf load_time; //type: uint32

}; // Snmp::Information::Mibs::Mib::MibInformation


class Snmp::Information::SerialNumbers : public ydk::Entity
{
    public:
        SerialNumbers();
        ~SerialNumbers();

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

        class SerialNumber; //type: Snmp::Information::SerialNumbers::SerialNumber

        ydk::YList serial_number;
        
}; // Snmp::Information::SerialNumbers


class Snmp::Information::SerialNumbers::SerialNumber : public ydk::Entity
{
    public:
        SerialNumber();
        ~SerialNumber();

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

        ydk::YLeaf number; //type: string
        ydk::YLeaf req_id; //type: uint32
        ydk::YLeaf port; //type: uint16
        ydk::YLeaf nms; //type: string
        ydk::YLeaf request_id; //type: uint32
        ydk::YLeaf port_xr; //type: uint16
        ydk::YLeaf pdu_type; //type: uint16
        ydk::YLeaf error_status; //type: uint16
        ydk::YLeaf serial_num; //type: uint32
        ydk::YLeaf input_q; //type: string
        ydk::YLeaf output_q; //type: uint32
        ydk::YLeaf pending_q; //type: uint32
        ydk::YLeaf response_out; //type: uint32

}; // Snmp::Information::SerialNumbers::SerialNumber


class Snmp::Information::DropNmsAddresses : public ydk::Entity
{
    public:
        DropNmsAddresses();
        ~DropNmsAddresses();

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

        class DropNmsAddress; //type: Snmp::Information::DropNmsAddresses::DropNmsAddress

        ydk::YList drop_nms_address;
        
}; // Snmp::Information::DropNmsAddresses


class Snmp::Information::DropNmsAddresses::DropNmsAddress : public ydk::Entity
{
    public:
        DropNmsAddress();
        ~DropNmsAddress();

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

        ydk::YLeaf nms_addr; //type: string
        ydk::YLeaf nms_address; //type: string
        ydk::YLeaf incoming_q_count; //type: uint32
        ydk::YLeaf threshold_incoming_q_count; //type: uint32
        ydk::YLeaf encode_count; //type: uint32
        ydk::YLeaf duplicate_count; //type: uint32
        ydk::YLeaf stack_count; //type: uint32
        ydk::YLeaf aipc_count; //type: uint32
        ydk::YLeaf overload_count; //type: uint32
        ydk::YLeaf timeout_count; //type: uint32
        ydk::YLeaf internal_count; //type: uint32

}; // Snmp::Information::DropNmsAddresses::DropNmsAddress


class Snmp::Information::Views : public ydk::Entity
{
    public:
        Views();
        ~Views();

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

        class View; //type: Snmp::Information::Views::View

        ydk::YList view;
        
}; // Snmp::Information::Views


class Snmp::Information::Views::View : public ydk::Entity
{
    public:
        View();
        ~View();

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

        ydk::YLeaf name; //type: string
        class ViewInformation; //type: Snmp::Information::Views::View::ViewInformation

        ydk::YList view_information;
        
}; // Snmp::Information::Views::View


class Snmp::Information::Views::View::ViewInformation : public ydk::Entity
{
    public:
        ViewInformation();
        ~ViewInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf object_id; //type: string
        ydk::YLeaf snmp_view_family_type; //type: string
        ydk::YLeaf snmp_view_family_storage_type; //type: string
        ydk::YLeaf snmp_view_family_status; //type: string

}; // Snmp::Information::Views::View::ViewInformation


class Snmp::Information::SystemDescr : public ydk::Entity
{
    public:
        SystemDescr();
        ~SystemDescr();

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

        ydk::YLeaf sys_descr; //type: string

}; // Snmp::Information::SystemDescr


class Snmp::Information::Tables : public ydk::Entity
{
    public:
        Tables();
        ~Tables();

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

        class Groups; //type: Snmp::Information::Tables::Groups
        class UserEngineIds; //type: Snmp::Information::Tables::UserEngineIds

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::Tables::Groups> groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::Tables::UserEngineIds> user_engine_ids;
        
}; // Snmp::Information::Tables


class Snmp::Information::Tables::Groups : public ydk::Entity
{
    public:
        Groups();
        ~Groups();

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

        class Group; //type: Snmp::Information::Tables::Groups::Group

        ydk::YList group;
        
}; // Snmp::Information::Tables::Groups


class Snmp::Information::Tables::Groups::Group : public ydk::Entity
{
    public:
        Group();
        ~Group();

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

        ydk::YLeaf name; //type: string
        class GroupInformations; //type: Snmp::Information::Tables::Groups::Group::GroupInformations

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::Tables::Groups::Group::GroupInformations> group_informations;
        
}; // Snmp::Information::Tables::Groups::Group


class Snmp::Information::Tables::Groups::Group::GroupInformations : public ydk::Entity
{
    public:
        GroupInformations();
        ~GroupInformations();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class GroupInformation; //type: Snmp::Information::Tables::Groups::Group::GroupInformations::GroupInformation

        ydk::YList group_information;
        
}; // Snmp::Information::Tables::Groups::Group::GroupInformations


class Snmp::Information::Tables::Groups::Group::GroupInformations::GroupInformation : public ydk::Entity
{
    public:
        GroupInformation();
        ~GroupInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf modelnumber; //type: string
        ydk::YLeaf level; //type: string
        ydk::YLeaf vacm_access_read_view_name; //type: string
        ydk::YLeaf vacm_access_write_view_name; //type: string
        ydk::YLeaf vacm_access_notify_view_name; //type: string
        ydk::YLeaf vacm_access_status; //type: uint32

}; // Snmp::Information::Tables::Groups::Group::GroupInformations::GroupInformation


class Snmp::Information::Tables::UserEngineIds : public ydk::Entity
{
    public:
        UserEngineIds();
        ~UserEngineIds();

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

        class UserEngineId; //type: Snmp::Information::Tables::UserEngineIds::UserEngineId

        ydk::YList user_engine_id;
        
}; // Snmp::Information::Tables::UserEngineIds


class Snmp::Information::Tables::UserEngineIds::UserEngineId : public ydk::Entity
{
    public:
        UserEngineId();
        ~UserEngineId();

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

        ydk::YLeaf engine_id; //type: string
        class UserName; //type: Snmp::Information::Tables::UserEngineIds::UserEngineId::UserName

        ydk::YList user_name;
        
}; // Snmp::Information::Tables::UserEngineIds::UserEngineId


class Snmp::Information::Tables::UserEngineIds::UserEngineId::UserName : public ydk::Entity
{
    public:
        UserName();
        ~UserName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf user_name; //type: string
        ydk::YLeaf usm_user_storage_type; //type: uint32
        ydk::YLeaf usm_user_status; //type: uint32

}; // Snmp::Information::Tables::UserEngineIds::UserEngineId::UserName


class Snmp::Information::SystemOid : public ydk::Entity
{
    public:
        SystemOid();
        ~SystemOid();

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

        ydk::YLeaf sys_obj_id; //type: string

}; // Snmp::Information::SystemOid


class Snmp::Information::TrapQueue : public ydk::Entity
{
    public:
        TrapQueue();
        ~TrapQueue();

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

        ydk::YLeaf trap_min; //type: uint32
        ydk::YLeaf trap_avg; //type: uint32
        ydk::YLeaf trap_max; //type: uint32
        class TrapQ; //type: Snmp::Information::TrapQueue::TrapQ

        ydk::YList trap_q;
        
}; // Snmp::Information::TrapQueue


class Snmp::Information::TrapQueue::TrapQ : public ydk::Entity
{
    public:
        TrapQ();
        ~TrapQ();

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

        ydk::YLeaf min; //type: uint32
        ydk::YLeaf avg; //type: uint32
        ydk::YLeaf max; //type: uint32

}; // Snmp::Information::TrapQueue::TrapQ


class Snmp::Interfaces : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Interface; //type: Snmp::Interfaces::Interface

        ydk::YList interface;
        
}; // Snmp::Interfaces


class Snmp::Interfaces::Interface : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf interface_index; //type: uint32

}; // Snmp::Interfaces::Interface


class Snmp::Correlator : public ydk::Entity
{
    public:
        Correlator();
        ~Correlator();

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

        class RuleDetails; //type: Snmp::Correlator::RuleDetails
        class BufferStatus; //type: Snmp::Correlator::BufferStatus
        class RuleSetDetails; //type: Snmp::Correlator::RuleSetDetails
        class Traps; //type: Snmp::Correlator::Traps

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_oper::Snmp::Correlator::RuleDetails> rule_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_oper::Snmp::Correlator::BufferStatus> buffer_status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_oper::Snmp::Correlator::RuleSetDetails> rule_set_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_oper::Snmp::Correlator::Traps> traps;
        
}; // Snmp::Correlator


class Snmp::Correlator::RuleDetails : public ydk::Entity
{
    public:
        RuleDetails();
        ~RuleDetails();

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

        class RuleDetail; //type: Snmp::Correlator::RuleDetails::RuleDetail

        ydk::YList rule_detail;
        
}; // Snmp::Correlator::RuleDetails


class Snmp::Correlator::RuleDetails::RuleDetail : public ydk::Entity
{
    public:
        RuleDetail();
        ~RuleDetail();

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

        ydk::YLeaf rule_name; //type: string
        ydk::YLeaf timeout; //type: uint32
        class RuleSummary; //type: Snmp::Correlator::RuleDetails::RuleDetail::RuleSummary
        class RootCause; //type: Snmp::Correlator::RuleDetails::RuleDetail::RootCause
        class NonRootcaus; //type: Snmp::Correlator::RuleDetails::RuleDetail::NonRootcaus
        class ApplyHost; //type: Snmp::Correlator::RuleDetails::RuleDetail::ApplyHost

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_oper::Snmp::Correlator::RuleDetails::RuleDetail::RuleSummary> rule_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_oper::Snmp::Correlator::RuleDetails::RuleDetail::RootCause> root_cause;
        ydk::YList non_rootcaus;
        ydk::YList apply_host;
        
}; // Snmp::Correlator::RuleDetails::RuleDetail


class Snmp::Correlator::RuleDetails::RuleDetail::RuleSummary : public ydk::Entity
{
    public:
        RuleSummary();
        ~RuleSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rule_name; //type: string
        ydk::YLeaf rule_state; //type: SnmpCorrRuleState
        ydk::YLeaf buffered_traps_count; //type: uint32

}; // Snmp::Correlator::RuleDetails::RuleDetail::RuleSummary


class Snmp::Correlator::RuleDetails::RuleDetail::RootCause : public ydk::Entity
{
    public:
        RootCause();
        ~RootCause();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf oid; //type: string
        class VarBind; //type: Snmp::Correlator::RuleDetails::RuleDetail::RootCause::VarBind

        ydk::YList var_bind;
        
}; // Snmp::Correlator::RuleDetails::RuleDetail::RootCause


class Snmp::Correlator::RuleDetails::RuleDetail::RootCause::VarBind : public ydk::Entity
{
    public:
        VarBind();
        ~VarBind();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf oid; //type: string
        ydk::YLeaf match_type; //type: SnmpCorrVbindMatch
        ydk::YLeaf reg_exp; //type: string

}; // Snmp::Correlator::RuleDetails::RuleDetail::RootCause::VarBind


class Snmp::Correlator::RuleDetails::RuleDetail::NonRootcaus : public ydk::Entity
{
    public:
        NonRootcaus();
        ~NonRootcaus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf oid; //type: string
        class VarBind; //type: Snmp::Correlator::RuleDetails::RuleDetail::NonRootcaus::VarBind

        ydk::YList var_bind;
        
}; // Snmp::Correlator::RuleDetails::RuleDetail::NonRootcaus


class Snmp::Correlator::RuleDetails::RuleDetail::NonRootcaus::VarBind : public ydk::Entity
{
    public:
        VarBind();
        ~VarBind();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf oid; //type: string
        ydk::YLeaf match_type; //type: SnmpCorrVbindMatch
        ydk::YLeaf reg_exp; //type: string

}; // Snmp::Correlator::RuleDetails::RuleDetail::NonRootcaus::VarBind


class Snmp::Correlator::RuleDetails::RuleDetail::ApplyHost : public ydk::Entity
{
    public:
        ApplyHost();
        ~ApplyHost();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf port; //type: uint16

}; // Snmp::Correlator::RuleDetails::RuleDetail::ApplyHost


class Snmp::Correlator::BufferStatus : public ydk::Entity
{
    public:
        BufferStatus();
        ~BufferStatus();

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

        ydk::YLeaf current_size; //type: uint32
        ydk::YLeaf configured_size; //type: uint32

}; // Snmp::Correlator::BufferStatus


class Snmp::Correlator::RuleSetDetails : public ydk::Entity
{
    public:
        RuleSetDetails();
        ~RuleSetDetails();

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

        class RuleSetDetail; //type: Snmp::Correlator::RuleSetDetails::RuleSetDetail

        ydk::YList rule_set_detail;
        
}; // Snmp::Correlator::RuleSetDetails


class Snmp::Correlator::RuleSetDetails::RuleSetDetail : public ydk::Entity
{
    public:
        RuleSetDetail();
        ~RuleSetDetail();

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

        ydk::YLeaf rule_set_name; //type: string
        ydk::YLeaf rule_set_name_xr; //type: string
        class Rules; //type: Snmp::Correlator::RuleSetDetails::RuleSetDetail::Rules

        ydk::YList rules;
        
}; // Snmp::Correlator::RuleSetDetails::RuleSetDetail


class Snmp::Correlator::RuleSetDetails::RuleSetDetail::Rules : public ydk::Entity
{
    public:
        Rules();
        ~Rules();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rule_name; //type: string
        ydk::YLeaf rule_state; //type: SnmpCorrRuleState
        ydk::YLeaf buffered_traps_count; //type: uint32

}; // Snmp::Correlator::RuleSetDetails::RuleSetDetail::Rules


class Snmp::Correlator::Traps : public ydk::Entity
{
    public:
        Traps();
        ~Traps();

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

        class Trap; //type: Snmp::Correlator::Traps::Trap

        ydk::YList trap;
        
}; // Snmp::Correlator::Traps


class Snmp::Correlator::Traps::Trap : public ydk::Entity
{
    public:
        Trap();
        ~Trap();

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

        ydk::YLeaf entry_id; //type: uint32
        ydk::YLeaf correlation_id; //type: uint32
        ydk::YLeaf is_root_cause; //type: boolean
        ydk::YLeaf rule_name; //type: string
        class TrapInfo; //type: Snmp::Correlator::Traps::Trap::TrapInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_oper::Snmp::Correlator::Traps::Trap::TrapInfo> trap_info;
        
}; // Snmp::Correlator::Traps::Trap


class Snmp::Correlator::Traps::Trap::TrapInfo : public ydk::Entity
{
    public:
        TrapInfo();
        ~TrapInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf oid; //type: string
        ydk::YLeaf relative_timestamp; //type: uint32
        ydk::YLeaf timestamp; //type: uint64
        class VarBind; //type: Snmp::Correlator::Traps::Trap::TrapInfo::VarBind

        ydk::YList var_bind;
        
}; // Snmp::Correlator::Traps::Trap::TrapInfo


class Snmp::Correlator::Traps::Trap::TrapInfo::VarBind : public ydk::Entity
{
    public:
        VarBind();
        ~VarBind();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf oid; //type: string
        ydk::YLeaf value_; //type: string

}; // Snmp::Correlator::Traps::Trap::TrapInfo::VarBind


class Snmp::InterfaceIndexes : public ydk::Entity
{
    public:
        InterfaceIndexes();
        ~InterfaceIndexes();

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

        class InterfaceIndex; //type: Snmp::InterfaceIndexes::InterfaceIndex

        ydk::YList interface_index;
        
}; // Snmp::InterfaceIndexes


class Snmp::InterfaceIndexes::InterfaceIndex : public ydk::Entity
{
    public:
        InterfaceIndex();
        ~InterfaceIndex();

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

        ydk::YLeaf interface_index; //type: uint32
        ydk::YLeaf interface_name; //type: string

}; // Snmp::InterfaceIndexes::InterfaceIndex


class Snmp::IfIndexes : public ydk::Entity
{
    public:
        IfIndexes();
        ~IfIndexes();

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

        class IfIndex; //type: Snmp::IfIndexes::IfIndex

        ydk::YList if_index;
        
}; // Snmp::IfIndexes


class Snmp::IfIndexes::IfIndex : public ydk::Entity
{
    public:
        IfIndex();
        ~IfIndex();

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

        ydk::YLeaf interface_index; //type: uint32
        ydk::YLeaf interface_name; //type: string

}; // Snmp::IfIndexes::IfIndex


class Snmp::EntityMib : public ydk::Entity
{
    public:
        EntityMib();
        ~EntityMib();

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

        class EntityPhysicalIndexes; //type: Snmp::EntityMib::EntityPhysicalIndexes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_oper::Snmp::EntityMib::EntityPhysicalIndexes> entity_physical_indexes;
        
}; // Snmp::EntityMib


class Snmp::EntityMib::EntityPhysicalIndexes : public ydk::Entity
{
    public:
        EntityPhysicalIndexes();
        ~EntityPhysicalIndexes();

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

        class EntityPhysicalIndex; //type: Snmp::EntityMib::EntityPhysicalIndexes::EntityPhysicalIndex

        ydk::YList entity_physical_index;
        
}; // Snmp::EntityMib::EntityPhysicalIndexes


class Snmp::EntityMib::EntityPhysicalIndexes::EntityPhysicalIndex : public ydk::Entity
{
    public:
        EntityPhysicalIndex();
        ~EntityPhysicalIndex();

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

        ydk::YLeaf entity_phynum; //type: string
        ydk::YLeaf physical_index; //type: uint32
        ydk::YLeaf ent_physical_name; //type: string
        ydk::YLeaf location; //type: string
        ydk::YLeaf ent_physical_descr; //type: string
        ydk::YLeaf ent_physical_firmware_rev; //type: string
        ydk::YLeaf ent_physical_hardware_rev; //type: string
        ydk::YLeaf ent_physical_modelname; //type: string
        ydk::YLeaf ent_physical_serial_num; //type: string
        ydk::YLeaf ent_physical_software_rev; //type: string
        ydk::YLeaf ent_physical_mfg_name; //type: string

}; // Snmp::EntityMib::EntityPhysicalIndexes::EntityPhysicalIndex


class Snmp::InterfaceMib : public ydk::Entity
{
    public:
        InterfaceMib();
        ~InterfaceMib();

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

        class Interfaces; //type: Snmp::InterfaceMib::Interfaces
        class InterfaceConnectors; //type: Snmp::InterfaceMib::InterfaceConnectors
        class InterfaceAliases; //type: Snmp::InterfaceMib::InterfaceAliases
        class NotificationInterfaces; //type: Snmp::InterfaceMib::NotificationInterfaces
        class InterfaceStackStatuses; //type: Snmp::InterfaceMib::InterfaceStackStatuses

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_oper::Snmp::InterfaceMib::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_oper::Snmp::InterfaceMib::InterfaceConnectors> interface_connectors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_oper::Snmp::InterfaceMib::InterfaceAliases> interface_aliases;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_oper::Snmp::InterfaceMib::NotificationInterfaces> notification_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_oper::Snmp::InterfaceMib::InterfaceStackStatuses> interface_stack_statuses;
        
}; // Snmp::InterfaceMib


class Snmp::InterfaceMib::Interfaces : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Interface; //type: Snmp::InterfaceMib::Interfaces::Interface

        ydk::YList interface;
        
}; // Snmp::InterfaceMib::Interfaces


class Snmp::InterfaceMib::Interfaces::Interface : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf if_index; //type: uint32

}; // Snmp::InterfaceMib::Interfaces::Interface


class Snmp::InterfaceMib::InterfaceConnectors : public ydk::Entity
{
    public:
        InterfaceConnectors();
        ~InterfaceConnectors();

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

        class InterfaceConnector; //type: Snmp::InterfaceMib::InterfaceConnectors::InterfaceConnector

        ydk::YList interface_connector;
        
}; // Snmp::InterfaceMib::InterfaceConnectors


class Snmp::InterfaceMib::InterfaceConnectors::InterfaceConnector : public ydk::Entity
{
    public:
        InterfaceConnector();
        ~InterfaceConnector();

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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf if_connector_present; //type: string

}; // Snmp::InterfaceMib::InterfaceConnectors::InterfaceConnector


class Snmp::InterfaceMib::InterfaceAliases : public ydk::Entity
{
    public:
        InterfaceAliases();
        ~InterfaceAliases();

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

        class InterfaceAlias; //type: Snmp::InterfaceMib::InterfaceAliases::InterfaceAlias

        ydk::YList interface_alias;
        
}; // Snmp::InterfaceMib::InterfaceAliases


class Snmp::InterfaceMib::InterfaceAliases::InterfaceAlias : public ydk::Entity
{
    public:
        InterfaceAlias();
        ~InterfaceAlias();

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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf if_alias; //type: string

}; // Snmp::InterfaceMib::InterfaceAliases::InterfaceAlias


class Snmp::InterfaceMib::NotificationInterfaces : public ydk::Entity
{
    public:
        NotificationInterfaces();
        ~NotificationInterfaces();

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

        class NotificationInterface; //type: Snmp::InterfaceMib::NotificationInterfaces::NotificationInterface

        ydk::YList notification_interface;
        
}; // Snmp::InterfaceMib::NotificationInterfaces


class Snmp::InterfaceMib::NotificationInterfaces::NotificationInterface : public ydk::Entity
{
    public:
        NotificationInterface();
        ~NotificationInterface();

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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf link_up_down_notif_status; //type: LinkUpDownStatus

}; // Snmp::InterfaceMib::NotificationInterfaces::NotificationInterface


class Snmp::InterfaceMib::InterfaceStackStatuses : public ydk::Entity
{
    public:
        InterfaceStackStatuses();
        ~InterfaceStackStatuses();

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

        class InterfaceStackStatus; //type: Snmp::InterfaceMib::InterfaceStackStatuses::InterfaceStackStatus

        ydk::YList interface_stack_status;
        
}; // Snmp::InterfaceMib::InterfaceStackStatuses


class Snmp::InterfaceMib::InterfaceStackStatuses::InterfaceStackStatus : public ydk::Entity
{
    public:
        InterfaceStackStatus();
        ~InterfaceStackStatus();

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

        ydk::YLeaf interface_stack_status; //type: string
        ydk::YLeaf if_stack_higher_layer; //type: string
        ydk::YLeaf if_stack_lower_layer; //type: string
        ydk::YLeaf if_stack_status; //type: string

}; // Snmp::InterfaceMib::InterfaceStackStatuses::InterfaceStackStatus


class Snmp::SensorMib : public ydk::Entity
{
    public:
        SensorMib();
        ~SensorMib();

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

        class PhysicalIndexes; //type: Snmp::SensorMib::PhysicalIndexes
        class EntPhyIndexes; //type: Snmp::SensorMib::EntPhyIndexes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_oper::Snmp::SensorMib::PhysicalIndexes> physical_indexes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_oper::Snmp::SensorMib::EntPhyIndexes> ent_phy_indexes;
        
}; // Snmp::SensorMib


class Snmp::SensorMib::PhysicalIndexes : public ydk::Entity
{
    public:
        PhysicalIndexes();
        ~PhysicalIndexes();

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

        class PhysicalIndex; //type: Snmp::SensorMib::PhysicalIndexes::PhysicalIndex

        ydk::YList physical_index;
        
}; // Snmp::SensorMib::PhysicalIndexes


class Snmp::SensorMib::PhysicalIndexes::PhysicalIndex : public ydk::Entity
{
    public:
        PhysicalIndex();
        ~PhysicalIndex();

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

        ydk::YLeaf index_; //type: string
        class ThresholdIndexes; //type: Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_oper::Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes> threshold_indexes;
        
}; // Snmp::SensorMib::PhysicalIndexes::PhysicalIndex


class Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes : public ydk::Entity
{
    public:
        ThresholdIndexes();
        ~ThresholdIndexes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThresholdIndex; //type: Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes::ThresholdIndex

        ydk::YList threshold_index;
        
}; // Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes


class Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes::ThresholdIndex : public ydk::Entity
{
    public:
        ThresholdIndex();
        ~ThresholdIndex();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf phy_index; //type: string
        ydk::YLeaf thre_index; //type: string
        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes::ThresholdIndex


class Snmp::SensorMib::EntPhyIndexes : public ydk::Entity
{
    public:
        EntPhyIndexes();
        ~EntPhyIndexes();

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

        class EntPhyIndex; //type: Snmp::SensorMib::EntPhyIndexes::EntPhyIndex

        ydk::YList ent_phy_index;
        
}; // Snmp::SensorMib::EntPhyIndexes


class Snmp::SensorMib::EntPhyIndexes::EntPhyIndex : public ydk::Entity
{
    public:
        EntPhyIndex();
        ~EntPhyIndex();

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

        ydk::YLeaf index_; //type: string
        ydk::YLeaf field_validity_bitmap; //type: uint32
        ydk::YLeaf device_description; //type: string
        ydk::YLeaf units; //type: string
        ydk::YLeaf device_id; //type: uint32
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf alarm_type; //type: uint32
        ydk::YLeaf data_type; //type: uint32
        ydk::YLeaf scale; //type: uint32
        ydk::YLeaf precision; //type: uint32
        ydk::YLeaf status; //type: uint32
        ydk::YLeaf age_time_stamp; //type: uint32
        ydk::YLeaf update_rate; //type: uint32
        ydk::YLeaf measured_entity; //type: uint32

}; // Snmp::SensorMib::EntPhyIndexes::EntPhyIndex

class SnmpCorrVbindMatch : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf index_;
        static const ydk::Enum::YLeaf value_;

        static int get_enum_value(const std::string & name) {
            if (name == "index") return 0;
            if (name == "value") return 1;
            return -1;
        }
};

class SnmpCorrRuleState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rule_unapplied;
        static const ydk::Enum::YLeaf rule_applied;
        static const ydk::Enum::YLeaf rule_applied_all;

        static int get_enum_value(const std::string & name) {
            if (name == "rule-unapplied") return 0;
            if (name == "rule-applied") return 1;
            if (name == "rule-applied-all") return 2;
            return -1;
        }
};

class DupReqDropStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf enabled;

        static int get_enum_value(const std::string & name) {
            if (name == "disabled") return 0;
            if (name == "enabled") return 1;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_SNMP_AGENT_OPER_ */

