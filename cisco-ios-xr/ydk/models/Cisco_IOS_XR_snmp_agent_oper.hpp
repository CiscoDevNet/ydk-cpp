#ifndef _CISCO_IOS_XR_SNMP_AGENT_OPER_
#define _CISCO_IOS_XR_SNMP_AGENT_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

#include "Cisco_IOS_XR_snmp_ifmib_oper.hpp"

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
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class TrapServers : public Entity
    {
        public:
            TrapServers();
            ~TrapServers();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class TrapServer : public Entity
        {
            public:
                TrapServer();
                ~TrapServer();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value trap_host; //type: string
                Value port; //type: uint16
                Value number_of_pkts_in_trap_q; //type: uint32
                Value max_q_length_of_trap_q; //type: uint32
                Value number_of_pkts_sent; //type: uint32
                Value number_of_pkts_dropped; //type: uint32




        }; // Snmp::TrapServers::TrapServer


            std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::TrapServers::TrapServer> > trap_server;


    }; // Snmp::TrapServers


    class Information : public Entity
    {
        public:
            Information();
            ~Information();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Hosts : public Entity
        {
            public:
                Hosts();
                ~Hosts();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Host : public Entity
            {
                public:
                    Host();
                    ~Host();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value name; //type: string


                class HostInformation : public Entity
                {
                    public:
                        HostInformation();
                        ~HostInformation();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value user; //type: string
                        Value snmp_target_address_t_host; //type: string
                        Value snmp_target_address_port; //type: string
                        Value snmp_target_addresstype; //type: string
                        Value snmp_target_params_security_model; //type: string
                        Value snmp_target_params_security_name; //type: string
                        Value snmp_target_params_security_level; //type: string




                }; // Snmp::Information::Hosts::Host::HostInformation


                    std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::Hosts::Host::HostInformation> > host_information;


            }; // Snmp::Information::Hosts::Host


                std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::Hosts::Host> > host;


        }; // Snmp::Information::Hosts


        class SystemUpTime : public Entity
        {
            public:
                SystemUpTime();
                ~SystemUpTime();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value system_up_time_edm; //type: string




        }; // Snmp::Information::SystemUpTime


        class NmsAddresses : public Entity
        {
            public:
                NmsAddresses();
                ~NmsAddresses();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class NmsAddress : public Entity
            {
                public:
                    NmsAddress();
                    ~NmsAddress();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value nms_addr; //type: string
                    Value nms_address; //type: string
                    Value get_request_count; //type: uint32
                    Value getnext_request_count; //type: uint32
                    Value getbulk_request_count; //type: uint32
                    Value set_request_count; //type: uint32
                    Value test_request_count; //type: uint32




            }; // Snmp::Information::NmsAddresses::NmsAddress


                std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::NmsAddresses::NmsAddress> > nms_address;


        }; // Snmp::Information::NmsAddresses


        class EngineId : public Entity
        {
            public:
                EngineId();
                ~EngineId();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value engine_id; //type: string




        }; // Snmp::Information::EngineId


        class RxQueue : public Entity
        {
            public:
                RxQueue();
                ~RxQueue();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value qlen; //type: uint32
                Value in_min; //type: uint32
                Value in_avg; //type: uint32
                Value in_max; //type: uint32
                Value pend_min; //type: uint32
                Value pend_avg; //type: uint32
                Value pend_max; //type: uint32
                Value incoming_q; //type: string
                Value pending_q; //type: string




        }; // Snmp::Information::RxQueue


        class SystemName : public Entity
        {
            public:
                SystemName();
                ~SystemName();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value system_name; //type: string




        }; // Snmp::Information::SystemName


        class RequestTypeDetail : public Entity
        {
            public:
                RequestTypeDetail();
                ~RequestTypeDetail();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class NmsAddresses : public Entity
            {
                public:
                    NmsAddresses();
                    ~NmsAddresses();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class NmsAddress : public Entity
                {
                    public:
                        NmsAddress();
                        ~NmsAddress();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value nms_addr; //type: string
                        Value total_count; //type: uint32
                        Value agent_request_count; //type: uint32
                        Value interface_request_count; //type: uint32
                        Value entity_request_count; //type: uint32
                        Value route_request_count; //type: uint32
                        Value infra_request_count; //type: uint32




                }; // Snmp::Information::RequestTypeDetail::NmsAddresses::NmsAddress


                    std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::RequestTypeDetail::NmsAddresses::NmsAddress> > nms_address;


            }; // Snmp::Information::RequestTypeDetail::NmsAddresses


                std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::RequestTypeDetail::NmsAddresses> nms_addresses;


        }; // Snmp::Information::RequestTypeDetail


        class DuplicateDrop : public Entity
        {
            public:
                DuplicateDrop();
                ~DuplicateDrop();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value duplicate_request_status; //type: DupReqDropStatusEnum
                Value last_status_change_time; //type: string
                Value duplicate_drop_configured_timeout; //type: uint32
                Value duplicate_dropped_requests; //type: uint32
                Value retry_processed_requests; //type: uint32
                Value first_enable_time; //type: string
                Value latest_duplicate_dropped_requests; //type: uint32
                Value latest_retry_processed_requests; //type: uint32
                Value duplicate_request_latest_enable_time; //type: string
                Value duplicate_drop_enable_count; //type: uint32
                Value duplicate_drop_disable_count; //type: uint32


                class DupReqDropStatusEnum;


        }; // Snmp::Information::DuplicateDrop


        class BulkStatsTransfers : public Entity
        {
            public:
                BulkStatsTransfers();
                ~BulkStatsTransfers();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class BulkStatsTransfer : public Entity
            {
                public:
                    BulkStatsTransfer();
                    ~BulkStatsTransfer();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value transfer_name; //type: string
                    Value transfer_name_xr; //type: string
                    Value url_primary; //type: string
                    Value url_secondary; //type: string
                    Value retained_file; //type: string
                    Value time_left; //type: uint32
                    Value retry_left; //type: uint32




            }; // Snmp::Information::BulkStatsTransfers::BulkStatsTransfer


                std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::BulkStatsTransfers::BulkStatsTransfer> > bulk_stats_transfer;


        }; // Snmp::Information::BulkStatsTransfers


        class TrapInfos : public Entity
        {
            public:
                TrapInfos();
                ~TrapInfos();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class TrapInfo : public Entity
            {
                public:
                    TrapInfo();
                    ~TrapInfo();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value trap_host; //type: string
                    Value port; //type: uint16
                    Value host; //type: string
                    Value port_xr; //type: uint16
                    Value trap_oid_count; //type: uint32


                class TrapOiDinfo : public Entity
                {
                    public:
                        TrapOiDinfo();
                        ~TrapOiDinfo();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value trap_oid; //type: string
                        Value count; //type: uint32
                        Value drop_count; //type: uint32
                        Value retry_count; //type: uint32
                        Value lastsent_time; //type: string
                        Value lasrdrop_time; //type: string




                }; // Snmp::Information::TrapInfos::TrapInfo::TrapOiDinfo


                    std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::TrapInfos::TrapInfo::TrapOiDinfo> > trap_oi_dinfo;


            }; // Snmp::Information::TrapInfos::TrapInfo


                std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::TrapInfos::TrapInfo> > trap_info;


        }; // Snmp::Information::TrapInfos


        class PollOids : public Entity
        {
            public:
                PollOids();
                ~PollOids();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class PollOid : public Entity
            {
                public:
                    PollOid();
                    ~PollOid();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value object_id; //type: string
                    Value nms_count; //type: uint32
                    ValueList nms; //type: list of  string
                    ValueList request_count; //type: list of  uint32




            }; // Snmp::Information::PollOids::PollOid


                std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::PollOids::PollOid> > poll_oid;


        }; // Snmp::Information::PollOids


        class InfomDetails : public Entity
        {
            public:
                InfomDetails();
                ~InfomDetails();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class InfomDetail : public Entity
            {
                public:
                    InfomDetail();
                    ~InfomDetail();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value trap_host; //type: string
                    Value port; //type: uint16
                    Value host; //type: string
                    Value port_xr; //type: uint16
                    Value trap_oid_count; //type: uint32


                class TrapOiDinfo : public Entity
                {
                    public:
                        TrapOiDinfo();
                        ~TrapOiDinfo();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value trap_oid; //type: string
                        Value count; //type: uint32
                        Value drop_count; //type: uint32
                        Value retry_count; //type: uint32
                        Value lastsent_time; //type: string
                        Value lasrdrop_time; //type: string




                }; // Snmp::Information::InfomDetails::InfomDetail::TrapOiDinfo


                    std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::InfomDetails::InfomDetail::TrapOiDinfo> > trap_oi_dinfo;


            }; // Snmp::Information::InfomDetails::InfomDetail


                std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::InfomDetails::InfomDetail> > infom_detail;


        }; // Snmp::Information::InfomDetails


        class Statistics : public Entity
        {
            public:
                Statistics();
                ~Statistics();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value packets_received; //type: uint32
                Value bad_versions_received; //type: uint32
                Value bad_community_names_received; //type: uint32
                Value bad_community_uses_received; //type: uint32
                Value asn_parse_errors_received; //type: uint32
                Value silent_drop_count; //type: uint32
                Value proxy_drop_count; //type: uint32
                Value too_big_packet_received; //type: uint32
                Value max_packet_size; //type: uint32
                Value no_such_names_received; //type: uint32
                Value bad_values_received; //type: uint32
                Value read_only_received; //type: uint32
                Value total_general_errors; //type: uint32
                Value total_requested_variables; //type: uint32
                Value total_set_variables_received; //type: uint32
                Value get_requests_received; //type: uint32
                Value get_next_requests_received; //type: uint32
                Value set_requests_received; //type: uint32
                Value get_responses_received; //type: uint32
                Value traps_received; //type: uint32
                Value total_packets_sent; //type: uint32
                Value too_big_packets_sent; //type: uint32
                Value no_such_names_sent; //type: uint32
                Value bad_values_sent; //type: uint32
                Value general_errors_sent; //type: uint32
                Value get_requests_sent; //type: uint32
                Value get_next_request_sent; //type: uint32
                Value set_requests_sent; //type: uint32
                Value get_responses_sent; //type: uint32
                Value traps_sent; //type: uint32




        }; // Snmp::Information::Statistics


        class IncomingQueue : public Entity
        {
            public:
                IncomingQueue();
                ~IncomingQueue();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value queue_count; //type: uint32


            class InqEntry : public Entity
            {
                public:
                    InqEntry();
                    ~InqEntry();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value address_of_queue; //type: string
                    Value request_count; //type: uint32
                    Value processed_request_count; //type: uint32
                    Value last_access_time; //type: string
                    Value priority; //type: uint8




            }; // Snmp::Information::IncomingQueue::InqEntry


                std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::IncomingQueue::InqEntry> > inq_entry;


        }; // Snmp::Information::IncomingQueue


        class ContextMapping : public Entity
        {
            public:
                ContextMapping();
                ~ContextMapping();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class ContexMapping : public Entity
            {
                public:
                    ContexMapping();
                    ~ContexMapping();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value context; //type: string
                    Value feature_name; //type: string
                    Value instance; //type: string
                    Value topology; //type: string
                    Value feature; //type: string




            }; // Snmp::Information::ContextMapping::ContexMapping


                std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::ContextMapping::ContexMapping> > contex_mapping;


        }; // Snmp::Information::ContextMapping


        class TrapOids : public Entity
        {
            public:
                TrapOids();
                ~TrapOids();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class TrapOid : public Entity
            {
                public:
                    TrapOid();
                    ~TrapOid();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value trap_oid; //type: string
                    Value trap_oid_count; //type: uint32
                    Value trap_oid_xr; //type: string




            }; // Snmp::Information::TrapOids::TrapOid


                std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::TrapOids::TrapOid> > trap_oid;


        }; // Snmp::Information::TrapOids


        class NmSpackets : public Entity
        {
            public:
                NmSpackets();
                ~NmSpackets();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class NmSpacket : public Entity
            {
                public:
                    NmSpacket();
                    ~NmSpacket();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value packetcount; //type: string
                    Value number_of_nmsq_pkts_dropped; //type: uint32
                    Value number_of_pkts_dropped; //type: uint32
                    Value overload_start_time; //type: string
                    Value overload_end_time; //type: string




            }; // Snmp::Information::NmSpackets::NmSpacket


                std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::NmSpackets::NmSpacket> > nm_spacket;


        }; // Snmp::Information::NmSpackets


        class Mibs : public Entity
        {
            public:
                Mibs();
                ~Mibs();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Mib : public Entity
            {
                public:
                    Mib();
                    ~Mib();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value name; //type: string


                class Oids : public Entity
                {
                    public:
                        Oids();
                        ~Oids();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Oid : public Entity
                    {
                        public:
                            Oid();
                            ~Oid();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value oid; //type: string
                            Value oid_name; //type: string




                    }; // Snmp::Information::Mibs::Mib::Oids::Oid


                        std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::Mibs::Mib::Oids::Oid> > oid;


                }; // Snmp::Information::Mibs::Mib::Oids


                class MibInformation : public Entity
                {
                    public:
                        MibInformation();
                        ~MibInformation();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value mib_name; //type: string
                        Value dll_name; //type: string
                        Value mib_config_filename; //type: string
                        Value is_mib_loaded; //type: boolean
                        Value dll_capabilities; //type: uint32
                        Value trap_strings; //type: string
                        Value timeout; //type: boolean
                        Value load_time; //type: uint32




                }; // Snmp::Information::Mibs::Mib::MibInformation


                    std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::Mibs::Mib::MibInformation> mib_information;
                    std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::Mibs::Mib::Oids> oids;


            }; // Snmp::Information::Mibs::Mib


                std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::Mibs::Mib> > mib;


        }; // Snmp::Information::Mibs


        class SerialNumbers : public Entity
        {
            public:
                SerialNumbers();
                ~SerialNumbers();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class SerialNumber : public Entity
            {
                public:
                    SerialNumber();
                    ~SerialNumber();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value number; //type: string
                    Value req_id; //type: int32
                    Value port; //type: uint16
                    Value nms; //type: string
                    Value request_id; //type: uint32
                    Value port_xr; //type: uint16
                    Value pdu_type; //type: uint16
                    Value error_status; //type: uint16
                    Value serial_num; //type: uint32
                    Value input_q; //type: string
                    Value output_q; //type: uint32
                    Value pending_q; //type: uint32
                    Value response_out; //type: uint32




            }; // Snmp::Information::SerialNumbers::SerialNumber


                std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::SerialNumbers::SerialNumber> > serial_number;


        }; // Snmp::Information::SerialNumbers


        class DropNmsAddresses : public Entity
        {
            public:
                DropNmsAddresses();
                ~DropNmsAddresses();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class DropNmsAddress : public Entity
            {
                public:
                    DropNmsAddress();
                    ~DropNmsAddress();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value nms_addr; //type: string
                    Value nms_address; //type: string
                    Value incoming_q_count; //type: uint32
                    Value threshold_incoming_q_count; //type: uint32
                    Value encode_count; //type: uint32
                    Value duplicate_count; //type: uint32
                    Value stack_count; //type: uint32
                    Value aipc_count; //type: uint32
                    Value overload_count; //type: uint32
                    Value timeout_count; //type: uint32
                    Value internal_count; //type: uint32




            }; // Snmp::Information::DropNmsAddresses::DropNmsAddress


                std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::DropNmsAddresses::DropNmsAddress> > drop_nms_address;


        }; // Snmp::Information::DropNmsAddresses


        class Views : public Entity
        {
            public:
                Views();
                ~Views();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class View : public Entity
            {
                public:
                    View();
                    ~View();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value name; //type: string


                class ViewInformation : public Entity
                {
                    public:
                        ViewInformation();
                        ~ViewInformation();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value object_id; //type: string
                        Value snmp_view_family_type; //type: string
                        Value snmp_view_family_storage_type; //type: string
                        Value snmp_view_family_status; //type: string




                }; // Snmp::Information::Views::View::ViewInformation


                    std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::Views::View::ViewInformation> > view_information;


            }; // Snmp::Information::Views::View


                std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::Views::View> > view;


        }; // Snmp::Information::Views


        class SystemDescr : public Entity
        {
            public:
                SystemDescr();
                ~SystemDescr();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value sys_descr; //type: string




        }; // Snmp::Information::SystemDescr


        class Tables : public Entity
        {
            public:
                Tables();
                ~Tables();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Groups : public Entity
            {
                public:
                    Groups();
                    ~Groups();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Group : public Entity
                {
                    public:
                        Group();
                        ~Group();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value name; //type: string


                    class GroupInformations : public Entity
                    {
                        public:
                            GroupInformations();
                            ~GroupInformations();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class GroupInformation : public Entity
                        {
                            public:
                                GroupInformation();
                                ~GroupInformation();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value modelnumber; //type: string
                                Value level; //type: string
                                Value vacm_access_read_view_name; //type: string
                                Value vacm_access_write_view_name; //type: string
                                Value vacm_access_notify_view_name; //type: string
                                Value vacm_access_status; //type: uint32




                        }; // Snmp::Information::Tables::Groups::Group::GroupInformations::GroupInformation


                            std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::Tables::Groups::Group::GroupInformations::GroupInformation> > group_information;


                    }; // Snmp::Information::Tables::Groups::Group::GroupInformations


                        std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::Tables::Groups::Group::GroupInformations> group_informations;


                }; // Snmp::Information::Tables::Groups::Group


                    std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::Tables::Groups::Group> > group;


            }; // Snmp::Information::Tables::Groups


            class UserEngineIds : public Entity
            {
                public:
                    UserEngineIds();
                    ~UserEngineIds();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class UserEngineId : public Entity
                {
                    public:
                        UserEngineId();
                        ~UserEngineId();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value engine_id; //type: string


                    class UserName : public Entity
                    {
                        public:
                            UserName();
                            ~UserName();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value user_name; //type: string
                            Value usm_user_storage_type; //type: uint32
                            Value usm_user_status; //type: uint32




                    }; // Snmp::Information::Tables::UserEngineIds::UserEngineId::UserName


                        std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::Tables::UserEngineIds::UserEngineId::UserName> > user_name;


                }; // Snmp::Information::Tables::UserEngineIds::UserEngineId


                    std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::Tables::UserEngineIds::UserEngineId> > user_engine_id;


            }; // Snmp::Information::Tables::UserEngineIds


                std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::Tables::Groups> groups;
                std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::Tables::UserEngineIds> user_engine_ids;


        }; // Snmp::Information::Tables


        class SystemOid : public Entity
        {
            public:
                SystemOid();
                ~SystemOid();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value sys_obj_id; //type: string




        }; // Snmp::Information::SystemOid


        class TrapQueue : public Entity
        {
            public:
                TrapQueue();
                ~TrapQueue();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value trap_min; //type: uint32
                Value trap_avg; //type: uint32
                Value trap_max; //type: uint32
                Value trap_q; //type: string




        }; // Snmp::Information::TrapQueue


            std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::BulkStatsTransfers> bulk_stats_transfers;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::ContextMapping> context_mapping;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::DropNmsAddresses> drop_nms_addresses;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::DuplicateDrop> duplicate_drop;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::EngineId> engine_id;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::Hosts> hosts;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::IncomingQueue> incoming_queue;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::InfomDetails> infom_details;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::Mibs> mibs;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::NmSpackets> nm_spackets;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::NmsAddresses> nms_addresses;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::PollOids> poll_oids;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::RequestTypeDetail> request_type_detail;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::RxQueue> rx_queue;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::SerialNumbers> serial_numbers;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::Statistics> statistics;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::SystemDescr> system_descr;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::SystemName> system_name;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::SystemOid> system_oid;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::SystemUpTime> system_up_time;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::Tables> tables;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::TrapInfos> trap_infos;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::TrapOids> trap_oids;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::TrapQueue> trap_queue;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information::Views> views;


    }; // Snmp::Information


    class Interfaces : public Entity
    {
        public:
            Interfaces();
            ~Interfaces();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Interface : public Entity
        {
            public:
                Interface();
                ~Interface();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value name; //type: string
                Value interface_index; //type: int32




        }; // Snmp::Interfaces::Interface


            std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Interfaces::Interface> > interface;


    }; // Snmp::Interfaces


    class Correlator : public Entity
    {
        public:
            Correlator();
            ~Correlator();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class RuleDetails : public Entity
        {
            public:
                RuleDetails();
                ~RuleDetails();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class RuleDetail : public Entity
            {
                public:
                    RuleDetail();
                    ~RuleDetail();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value rule_name; //type: string
                    Value timeout; //type: uint32


                class RuleSummary : public Entity
                {
                    public:
                        RuleSummary();
                        ~RuleSummary();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value rule_name; //type: string
                        Value rule_state; //type: SnmpCorrRuleStateEnum
                        Value buffered_traps_count; //type: uint32


                        class SnmpCorrRuleStateEnum;


                }; // Snmp::Correlator::RuleDetails::RuleDetail::RuleSummary


                class RootCause : public Entity
                {
                    public:
                        RootCause();
                        ~RootCause();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value oid; //type: string


                    class VarBind : public Entity
                    {
                        public:
                            VarBind();
                            ~VarBind();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value oid; //type: string
                            Value match_type; //type: SnmpCorrVbindMatchEnum
                            Value reg_exp; //type: string


                            class SnmpCorrVbindMatchEnum;


                    }; // Snmp::Correlator::RuleDetails::RuleDetail::RootCause::VarBind


                        std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Correlator::RuleDetails::RuleDetail::RootCause::VarBind> > var_bind;


                }; // Snmp::Correlator::RuleDetails::RuleDetail::RootCause


                class NonRootcaus : public Entity
                {
                    public:
                        NonRootcaus();
                        ~NonRootcaus();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value oid; //type: string


                    class VarBind : public Entity
                    {
                        public:
                            VarBind();
                            ~VarBind();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value oid; //type: string
                            Value match_type; //type: SnmpCorrVbindMatchEnum
                            Value reg_exp; //type: string


                            class SnmpCorrVbindMatchEnum;


                    }; // Snmp::Correlator::RuleDetails::RuleDetail::NonRootcaus::VarBind


                        std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Correlator::RuleDetails::RuleDetail::NonRootcaus::VarBind> > var_bind;


                }; // Snmp::Correlator::RuleDetails::RuleDetail::NonRootcaus


                class ApplyHost : public Entity
                {
                    public:
                        ApplyHost();
                        ~ApplyHost();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value ip_address; //type: string
                        Value port; //type: uint16




                }; // Snmp::Correlator::RuleDetails::RuleDetail::ApplyHost


                    std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Correlator::RuleDetails::RuleDetail::ApplyHost> > apply_host;
                    std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Correlator::RuleDetails::RuleDetail::NonRootcaus> > non_rootcaus;
                    std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Correlator::RuleDetails::RuleDetail::RootCause> root_cause;
                    std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Correlator::RuleDetails::RuleDetail::RuleSummary> rule_summary;


            }; // Snmp::Correlator::RuleDetails::RuleDetail


                std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Correlator::RuleDetails::RuleDetail> > rule_detail;


        }; // Snmp::Correlator::RuleDetails


        class BufferStatus : public Entity
        {
            public:
                BufferStatus();
                ~BufferStatus();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value current_size; //type: uint32
                Value configured_size; //type: uint32




        }; // Snmp::Correlator::BufferStatus


        class RuleSetDetails : public Entity
        {
            public:
                RuleSetDetails();
                ~RuleSetDetails();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class RuleSetDetail : public Entity
            {
                public:
                    RuleSetDetail();
                    ~RuleSetDetail();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value rule_set_name; //type: string
                    Value rule_set_name_xr; //type: string


                class Rules : public Entity
                {
                    public:
                        Rules();
                        ~Rules();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value rule_name; //type: string
                        Value rule_state; //type: SnmpCorrRuleStateEnum
                        Value buffered_traps_count; //type: uint32


                        class SnmpCorrRuleStateEnum;


                }; // Snmp::Correlator::RuleSetDetails::RuleSetDetail::Rules


                    std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Correlator::RuleSetDetails::RuleSetDetail::Rules> > rules;


            }; // Snmp::Correlator::RuleSetDetails::RuleSetDetail


                std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Correlator::RuleSetDetails::RuleSetDetail> > rule_set_detail;


        }; // Snmp::Correlator::RuleSetDetails


        class Traps : public Entity
        {
            public:
                Traps();
                ~Traps();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Trap : public Entity
            {
                public:
                    Trap();
                    ~Trap();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value entry_id; //type: int32
                    Value correlation_id; //type: uint32
                    Value is_root_cause; //type: boolean
                    Value rule_name; //type: string


                class TrapInfo : public Entity
                {
                    public:
                        TrapInfo();
                        ~TrapInfo();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value oid; //type: string
                        Value relative_timestamp; //type: uint32
                        Value timestamp; //type: uint64


                    class VarBind : public Entity
                    {
                        public:
                            VarBind();
                            ~VarBind();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value oid; //type: string
                            Value value_; //type: string




                    }; // Snmp::Correlator::Traps::Trap::TrapInfo::VarBind


                        std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Correlator::Traps::Trap::TrapInfo::VarBind> > var_bind;


                }; // Snmp::Correlator::Traps::Trap::TrapInfo


                    std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Correlator::Traps::Trap::TrapInfo> trap_info;


            }; // Snmp::Correlator::Traps::Trap


                std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Correlator::Traps::Trap> > trap;


        }; // Snmp::Correlator::Traps


            std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Correlator::BufferStatus> buffer_status;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Correlator::RuleDetails> rule_details;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Correlator::RuleSetDetails> rule_set_details;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Correlator::Traps> traps;


    }; // Snmp::Correlator


    class InterfaceIndexes : public Entity
    {
        public:
            InterfaceIndexes();
            ~InterfaceIndexes();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class InterfaceIndex : public Entity
        {
            public:
                InterfaceIndex();
                ~InterfaceIndex();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value interface_index; //type: int32
                Value interface_name; //type: string




        }; // Snmp::InterfaceIndexes::InterfaceIndex


            std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::InterfaceIndexes::InterfaceIndex> > interface_index;


    }; // Snmp::InterfaceIndexes


    class IfIndexes : public Entity
    {
        public:
            IfIndexes();
            ~IfIndexes();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class IfIndex : public Entity
        {
            public:
                IfIndex();
                ~IfIndex();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value interface_index; //type: int32
                Value interface_name; //type: string




        }; // Snmp::IfIndexes::IfIndex


            std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::IfIndexes::IfIndex> > if_index;


    }; // Snmp::IfIndexes


    class EntityMib : public Entity
    {
        public:
            EntityMib();
            ~EntityMib();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class EntityPhysicalIndexes : public Entity
        {
            public:
                EntityPhysicalIndexes();
                ~EntityPhysicalIndexes();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class EntityPhysicalIndex : public Entity
            {
                public:
                    EntityPhysicalIndex();
                    ~EntityPhysicalIndex();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value entity_phynum; //type: string
                    Value physical_index; //type: uint32
                    Value ent_physical_name; //type: string
                    Value location; //type: string
                    Value ent_physical_descr; //type: string
                    Value ent_physical_firmware_rev; //type: string
                    Value ent_physical_hardware_rev; //type: string
                    Value ent_physical_modelname; //type: string
                    Value ent_physical_serial_num; //type: string
                    Value ent_physical_software_rev; //type: string
                    Value ent_physical_mfg_name; //type: string




            }; // Snmp::EntityMib::EntityPhysicalIndexes::EntityPhysicalIndex


                std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::EntityMib::EntityPhysicalIndexes::EntityPhysicalIndex> > entity_physical_index;


        }; // Snmp::EntityMib::EntityPhysicalIndexes


            std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::EntityMib::EntityPhysicalIndexes> entity_physical_indexes;


    }; // Snmp::EntityMib


    class InterfaceMib : public Entity
    {
        public:
            InterfaceMib();
            ~InterfaceMib();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Interfaces : public Entity
        {
            public:
                Interfaces();
                ~Interfaces();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Interface : public Entity
            {
                public:
                    Interface();
                    ~Interface();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value interface_name; //type: string
                    Value if_index; //type: uint32




            }; // Snmp::InterfaceMib::Interfaces::Interface


                std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::InterfaceMib::Interfaces::Interface> > interface;


        }; // Snmp::InterfaceMib::Interfaces


        class InterfaceConnectors : public Entity
        {
            public:
                InterfaceConnectors();
                ~InterfaceConnectors();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class InterfaceConnector : public Entity
            {
                public:
                    InterfaceConnector();
                    ~InterfaceConnector();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value interface_name; //type: string
                    Value if_connector_present; //type: string




            }; // Snmp::InterfaceMib::InterfaceConnectors::InterfaceConnector


                std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::InterfaceMib::InterfaceConnectors::InterfaceConnector> > interface_connector;


        }; // Snmp::InterfaceMib::InterfaceConnectors


        class InterfaceAliases : public Entity
        {
            public:
                InterfaceAliases();
                ~InterfaceAliases();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class InterfaceAlias : public Entity
            {
                public:
                    InterfaceAlias();
                    ~InterfaceAlias();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value interface_name; //type: string
                    Value if_alias; //type: string




            }; // Snmp::InterfaceMib::InterfaceAliases::InterfaceAlias


                std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::InterfaceMib::InterfaceAliases::InterfaceAlias> > interface_alias;


        }; // Snmp::InterfaceMib::InterfaceAliases


        class NotificationInterfaces : public Entity
        {
            public:
                NotificationInterfaces();
                ~NotificationInterfaces();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class NotificationInterface : public Entity
            {
                public:
                    NotificationInterface();
                    ~NotificationInterface();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value interface_name; //type: string
                    Value link_up_down_notif_status; //type: LinkUpDownStatusEnum


                    class LinkUpDownStatusEnum;


            }; // Snmp::InterfaceMib::NotificationInterfaces::NotificationInterface


                std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::InterfaceMib::NotificationInterfaces::NotificationInterface> > notification_interface;


        }; // Snmp::InterfaceMib::NotificationInterfaces


        class InterfaceStackStatuses : public Entity
        {
            public:
                InterfaceStackStatuses();
                ~InterfaceStackStatuses();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class InterfaceStackStatus : public Entity
            {
                public:
                    InterfaceStackStatus();
                    ~InterfaceStackStatus();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value interface_stack_status; //type: string
                    Value if_stack_higher_layer; //type: string
                    Value if_stack_lower_layer; //type: string
                    Value if_stack_status; //type: string




            }; // Snmp::InterfaceMib::InterfaceStackStatuses::InterfaceStackStatus


                std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::InterfaceMib::InterfaceStackStatuses::InterfaceStackStatus> > interface_stack_status;


        }; // Snmp::InterfaceMib::InterfaceStackStatuses


            std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::InterfaceMib::InterfaceAliases> interface_aliases;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::InterfaceMib::InterfaceConnectors> interface_connectors;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::InterfaceMib::InterfaceStackStatuses> interface_stack_statuses;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::InterfaceMib::Interfaces> interfaces;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::InterfaceMib::NotificationInterfaces> notification_interfaces;


    }; // Snmp::InterfaceMib


    class SensorMib : public Entity
    {
        public:
            SensorMib();
            ~SensorMib();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class PhysicalIndexes : public Entity
        {
            public:
                PhysicalIndexes();
                ~PhysicalIndexes();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class PhysicalIndex : public Entity
            {
                public:
                    PhysicalIndex();
                    ~PhysicalIndex();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value index_; //type: string


                class ThresholdIndexes : public Entity
                {
                    public:
                        ThresholdIndexes();
                        ~ThresholdIndexes();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class ThresholdIndex : public Entity
                    {
                        public:
                            ThresholdIndex();
                            ~ThresholdIndex();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value phy_index; //type: string
                            Value thre_index; //type: string
                            Value threshold_severity; //type: uint32
                            Value threshold_relation; //type: uint32
                            Value threshold_value; //type: uint32
                            Value threshold_evaluation; //type: boolean
                            Value threshold_notification_enabled; //type: boolean




                    }; // Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes::ThresholdIndex


                        std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes::ThresholdIndex> > threshold_index;


                }; // Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes


                    std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::SensorMib::PhysicalIndexes::PhysicalIndex::ThresholdIndexes> threshold_indexes;


            }; // Snmp::SensorMib::PhysicalIndexes::PhysicalIndex


                std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::SensorMib::PhysicalIndexes::PhysicalIndex> > physical_index;


        }; // Snmp::SensorMib::PhysicalIndexes


        class EntPhyIndexes : public Entity
        {
            public:
                EntPhyIndexes();
                ~EntPhyIndexes();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class EntPhyIndex : public Entity
            {
                public:
                    EntPhyIndex();
                    ~EntPhyIndex();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value index_; //type: string
                    Value field_validity_bitmap; //type: uint32
                    Value device_description; //type: string
                    Value units; //type: string
                    Value device_id; //type: uint32
                    Value value_; //type: uint32
                    Value alarm_type; //type: uint32
                    Value data_type; //type: uint32
                    Value scale; //type: uint32
                    Value precision; //type: uint32
                    Value status; //type: uint32
                    Value age_time_stamp; //type: uint32
                    Value update_rate; //type: uint32
                    Value measured_entity; //type: uint32




            }; // Snmp::SensorMib::EntPhyIndexes::EntPhyIndex


                std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::SensorMib::EntPhyIndexes::EntPhyIndex> > ent_phy_index;


        }; // Snmp::SensorMib::EntPhyIndexes


            std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::SensorMib::EntPhyIndexes> ent_phy_indexes;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::SensorMib::PhysicalIndexes> physical_indexes;


    }; // Snmp::SensorMib


        std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Correlator> correlator;
        std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::EntityMib> entity_mib;
        std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::IfIndexes> if_indexes;
        std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Information> information;
        std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::InterfaceIndexes> interface_indexes;
        std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::InterfaceMib> interface_mib;
        std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::Interfaces> interfaces;
        std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::SensorMib> sensor_mib;
        std::unique_ptr<Cisco_IOS_XR_snmp_agent_oper::Snmp::TrapServers> trap_servers;


}; // Snmp


class SnmpCorrVbindMatchEnum : public Enum
{
    public:
        static const Enum::Value index_;
        static const Enum::Value value_;

};

class SnmpCorrRuleStateEnum : public Enum
{
    public:
        static const Enum::Value rule_unapplied;
        static const Enum::Value rule_applied;
        static const Enum::Value rule_applied_all;

};

class DupReqDropStatusEnum : public Enum
{
    public:
        static const Enum::Value disabled;
        static const Enum::Value enabled;

};


}
}

#endif /* _CISCO_IOS_XR_SNMP_AGENT_OPER_ */

