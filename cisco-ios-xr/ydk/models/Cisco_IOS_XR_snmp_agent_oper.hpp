#ifndef _CISCO_IOS_XR_SNMP_AGENT_OPER_
#define _CISCO_IOS_XR_SNMP_AGENT_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"


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


                YLeaf trap_host; //type: string
                YLeaf port; //type: uint16
                YLeaf number_of_pkts_in_trap_q; //type: uint32
                YLeaf max_q_length_of_trap_q; //type: uint32
                YLeaf number_of_pkts_sent; //type: uint32
                YLeaf number_of_pkts_dropped; //type: uint32



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


                    YLeaf name; //type: string

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


                        YLeaf user; //type: string
                        YLeaf snmp_target_address_t_host; //type: string
                        YLeaf snmp_target_address_port; //type: string
                        YLeaf snmp_target_addresstype; //type: string
                        YLeaf snmp_target_params_security_model; //type: string
                        YLeaf snmp_target_params_security_name; //type: string
                        YLeaf snmp_target_params_security_level; //type: string



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


                YLeaf system_up_time_edm; //type: string



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


                    YLeaf nms_addr; //type: string
                    YLeaf nms_address; //type: string
                    YLeaf get_request_count; //type: uint32
                    YLeaf getnext_request_count; //type: uint32
                    YLeaf getbulk_request_count; //type: uint32
                    YLeaf set_request_count; //type: uint32
                    YLeaf test_request_count; //type: uint32



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


                YLeaf engine_id; //type: string



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


                YLeaf system_name; //type: string



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


                        YLeaf nms_addr; //type: string
                        YLeaf total_count; //type: uint32
                        YLeaf agent_request_count; //type: uint32
                        YLeaf interface_request_count; //type: uint32
                        YLeaf entity_request_count; //type: uint32
                        YLeaf route_request_count; //type: uint32
                        YLeaf infra_request_count; //type: uint32



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


                    YLeaf transfer_name; //type: string
                    YLeaf transfer_name_xr; //type: string
                    YLeaf url_primary; //type: string
                    YLeaf url_secondary; //type: string
                    YLeaf retained_file; //type: string
                    YLeaf time_left; //type: uint32
                    YLeaf retry_left; //type: uint32



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


                    YLeaf trap_host; //type: string
                    YLeaf port; //type: uint16
                    YLeaf host; //type: string
                    YLeaf port_xr; //type: uint16
                    YLeaf trap_oid_count; //type: uint32

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


                        YLeaf trap_oid; //type: string
                        YLeaf count; //type: uint32
                        YLeaf drop_count; //type: uint32
                        YLeaf retry_count; //type: uint32
                        YLeaf lastsent_time; //type: string
                        YLeaf lasrdrop_time; //type: string



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


                    YLeaf object_id; //type: string
                    YLeaf nms_count; //type: uint32
                    YLeafList nms; //type: list of  string
                    YLeafList request_count; //type: list of  uint32



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


                    YLeaf trap_host; //type: string
                    YLeaf port; //type: uint16
                    YLeaf host; //type: string
                    YLeaf port_xr; //type: uint16
                    YLeaf trap_oid_count; //type: uint32

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


                        YLeaf trap_oid; //type: string
                        YLeaf count; //type: uint32
                        YLeaf drop_count; //type: uint32
                        YLeaf retry_count; //type: uint32
                        YLeaf lastsent_time; //type: string
                        YLeaf lasrdrop_time; //type: string



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


                YLeaf queue_count; //type: uint32

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


                    YLeaf address_of_queue; //type: string
                    YLeaf request_count; //type: uint32
                    YLeaf processed_request_count; //type: uint32
                    YLeaf last_access_time; //type: string
                    YLeaf priority; //type: uint8



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


                    YLeaf context; //type: string
                    YLeaf feature_name; //type: string
                    YLeaf instance; //type: string
                    YLeaf topology; //type: string
                    YLeaf feature; //type: string



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


                    YLeaf trap_oid; //type: string
                    YLeaf trap_oid_count; //type: uint32
                    YLeaf trap_oid_xr; //type: string



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


                    YLeaf packetcount; //type: string
                    YLeaf number_of_nmsq_pkts_dropped; //type: uint32
                    YLeaf number_of_pkts_dropped; //type: uint32
                    YLeaf overload_start_time; //type: string
                    YLeaf overload_end_time; //type: string



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


                    YLeaf name; //type: string

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


                            YLeaf oid; //type: string
                            YLeaf oid_name; //type: string



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


                        YLeaf mib_name; //type: string
                        YLeaf dll_name; //type: string
                        YLeaf mib_config_filename; //type: string
                        YLeaf is_mib_loaded; //type: boolean
                        YLeaf dll_capabilities; //type: uint32
                        YLeaf trap_strings; //type: string
                        YLeaf timeout; //type: boolean
                        YLeaf load_time; //type: uint32



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


                    YLeaf name; //type: string

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


                        YLeaf object_id; //type: string
                        YLeaf snmp_view_family_type; //type: string
                        YLeaf snmp_view_family_storage_type; //type: string
                        YLeaf snmp_view_family_status; //type: string



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


                YLeaf sys_descr; //type: string



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


                        YLeaf name; //type: string

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


                                YLeaf modelnumber; //type: string
                                YLeaf level; //type: string
                                YLeaf vacm_access_read_view_name; //type: string
                                YLeaf vacm_access_write_view_name; //type: string
                                YLeaf vacm_access_notify_view_name; //type: string
                                YLeaf vacm_access_status; //type: uint32



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


                        YLeaf engine_id; //type: string

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


                            YLeaf user_name; //type: string
                            YLeaf usm_user_storage_type; //type: uint32
                            YLeaf usm_user_status; //type: uint32



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


                YLeaf sys_obj_id; //type: string



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


                YLeaf trap_min; //type: uint32
                YLeaf trap_avg; //type: uint32
                YLeaf trap_max; //type: uint32
                YLeaf trap_q; //type: string



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


                YLeaf name; //type: string
                YLeaf interface_index; //type: int32



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


                    YLeaf rule_name; //type: string
                    YLeaf timeout; //type: uint32

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


                        YLeaf rule_name; //type: string
                        YLeaf rule_state; //type: SnmpCorrRuleStateEnum
                        YLeaf buffered_traps_count; //type: uint32



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


                        YLeaf oid; //type: string

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


                            YLeaf oid; //type: string
                            YLeaf match_type; //type: SnmpCorrVbindMatchEnum
                            YLeaf reg_exp; //type: string



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


                        YLeaf oid; //type: string

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


                            YLeaf oid; //type: string
                            YLeaf match_type; //type: SnmpCorrVbindMatchEnum
                            YLeaf reg_exp; //type: string



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


                        YLeaf ip_address; //type: string
                        YLeaf port; //type: uint16



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


                YLeaf current_size; //type: uint32
                YLeaf configured_size; //type: uint32



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


                    YLeaf rule_set_name; //type: string
                    YLeaf rule_set_name_xr; //type: string

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


                        YLeaf rule_name; //type: string
                        YLeaf rule_state; //type: SnmpCorrRuleStateEnum
                        YLeaf buffered_traps_count; //type: uint32



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


                    YLeaf entry_id; //type: int32
                    YLeaf correlation_id; //type: uint32
                    YLeaf is_root_cause; //type: boolean
                    YLeaf rule_name; //type: string

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


                        YLeaf oid; //type: string
                        YLeaf relative_timestamp; //type: uint32
                        YLeaf timestamp; //type: uint64

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


                            YLeaf oid; //type: string
                            YLeaf value_; //type: string



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


                YLeaf interface_index; //type: int32
                YLeaf interface_name; //type: string



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


                YLeaf interface_index; //type: int32
                YLeaf interface_name; //type: string



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


                    YLeaf interface_name; //type: string
                    YLeaf if_index; //type: uint32



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


                    YLeaf interface_name; //type: string
                    YLeaf if_connector_present; //type: string



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


                    YLeaf interface_name; //type: string
                    YLeaf if_alias; //type: string



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


                    YLeaf interface_name; //type: string
                    YLeaf link_up_down_notif_status; //type: LinkUpDownStatusEnum



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


                    YLeaf interface_stack_status; //type: string
                    YLeaf if_stack_higher_layer; //type: string
                    YLeaf if_stack_lower_layer; //type: string
                    YLeaf if_stack_status; //type: string



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


                    YLeaf index_; //type: string

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


                            YLeaf phy_index; //type: string
                            YLeaf thre_index; //type: string
                            YLeaf threshold_severity; //type: uint32
                            YLeaf threshold_relation; //type: uint32
                            YLeaf threshold_value; //type: uint32
                            YLeaf threshold_evaluation; //type: boolean
                            YLeaf threshold_notification_enabled; //type: boolean



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

