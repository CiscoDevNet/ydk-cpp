#ifndef _CISCO_IOS_XR_ASR9K_NETFLOW_OPER_
#define _CISCO_IOS_XR_ASR9K_NETFLOW_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_asr9k_netflow_oper {

class NetFlow : public Entity
{
    public:
        NetFlow();
        ~NetFlow();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class Configuration : public Entity
    {
        public:
            Configuration();
            ~Configuration();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class FlowExporterMaps : public Entity
        {
            public:
                FlowExporterMaps();
                ~FlowExporterMaps();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class FlowExporterMap : public Entity
            {
                public:
                    FlowExporterMap();
                    ~FlowExporterMap();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value exporter_name; //type: string
                    Value id; //type: uint32
                    Value name; //type: string


                class Version : public Entity
                {
                    public:
                        Version();
                        ~Version();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value version; //type: NfmgrFemEdmExpVerEnum


                    class Version9 : public Entity
                    {
                        public:
                            Version9();
                            ~Version9();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value sampler_table_export_timeout; //type: uint32
                            Value interface_table_export_timeout; //type: uint32
                            Value vrf_table_export_timeout; //type: uint32
                            Value options_template_export_timeout; //type: uint32
                            Value data_template_export_timeout; //type: uint32
                            Value common_template_export_timeout; //type: uint32




                    }; // NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::Version::Version9


                    class Ipfix : public Entity
                    {
                        public:
                            Ipfix();
                            ~Ipfix();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value sampler_table_export_timeout; //type: uint32
                            Value interface_table_export_timeout; //type: uint32
                            Value vrf_table_export_timeout; //type: uint32
                            Value options_template_export_timeout; //type: uint32
                            Value data_template_export_timeout; //type: uint32
                            Value common_template_export_timeout; //type: uint32




                    }; // NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::Version::Ipfix


                        std::unique_ptr<Cisco_IOS_XR_asr9k_netflow_oper::NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::Version::Ipfix> ipfix;
                        std::unique_ptr<Cisco_IOS_XR_asr9k_netflow_oper::NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::Version::Version9> version9;
                        class NfmgrFemEdmExpVerEnum;


                }; // NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::Version


                class Collector : public Entity
                {
                    public:
                        Collector();
                        ~Collector();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value destination_address; //type: string
                        Value source_address; //type: string
                        Value vrf_name; //type: string
                        Value source_interface; //type: string
                        Value dscp; //type: uint8
                        Value transport_protocol; //type: NfmgrFemEdmTransProtoEnum
                        Value destination_port; //type: uint16


                        class NfmgrFemEdmTransProtoEnum;


                }; // NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::Collector


                    std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_netflow_oper::NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::Collector> > collector;
                    std::unique_ptr<Cisco_IOS_XR_asr9k_netflow_oper::NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::Version> version;


            }; // NetFlow::Configuration::FlowExporterMaps::FlowExporterMap


                std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_netflow_oper::NetFlow::Configuration::FlowExporterMaps::FlowExporterMap> > flow_exporter_map;


        }; // NetFlow::Configuration::FlowExporterMaps


        class FlowMonitorMaps : public Entity
        {
            public:
                FlowMonitorMaps();
                ~FlowMonitorMaps();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class FlowMonitorMap : public Entity
            {
                public:
                    FlowMonitorMap();
                    ~FlowMonitorMap();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value monitor_name; //type: string
                    Value id; //type: uint32
                    Value name; //type: string
                    Value record_map; //type: string
                    Value cache_aging_mode; //type: string
                    Value number_of_labels; //type: uint32
                    Value cache_max_entry; //type: uint32
                    Value cache_active_timeout; //type: uint32
                    Value cache_inactive_timeout; //type: uint32
                    Value cache_update_timeout; //type: uint32
                    Value cache_timeout_rate_limit; //type: uint32
                    Value options; //type: uint32


                class Exporter : public Entity
                {
                    public:
                        Exporter();
                        ~Exporter();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value name; //type: string




                }; // NetFlow::Configuration::FlowMonitorMaps::FlowMonitorMap::Exporter


                    std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_netflow_oper::NetFlow::Configuration::FlowMonitorMaps::FlowMonitorMap::Exporter> > exporter;


            }; // NetFlow::Configuration::FlowMonitorMaps::FlowMonitorMap


                std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_netflow_oper::NetFlow::Configuration::FlowMonitorMaps::FlowMonitorMap> > flow_monitor_map;


        }; // NetFlow::Configuration::FlowMonitorMaps


        class FlowSamplerMaps : public Entity
        {
            public:
                FlowSamplerMaps();
                ~FlowSamplerMaps();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class FlowSamplerMap : public Entity
            {
                public:
                    FlowSamplerMap();
                    ~FlowSamplerMap();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value sampler_name; //type: string
                    Value id; //type: uint32
                    Value name; //type: string
                    Value sampling_mode; //type: string




            }; // NetFlow::Configuration::FlowSamplerMaps::FlowSamplerMap


                std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_netflow_oper::NetFlow::Configuration::FlowSamplerMaps::FlowSamplerMap> > flow_sampler_map;


        }; // NetFlow::Configuration::FlowSamplerMaps


            std::unique_ptr<Cisco_IOS_XR_asr9k_netflow_oper::NetFlow::Configuration::FlowExporterMaps> flow_exporter_maps;
            std::unique_ptr<Cisco_IOS_XR_asr9k_netflow_oper::NetFlow::Configuration::FlowMonitorMaps> flow_monitor_maps;
            std::unique_ptr<Cisco_IOS_XR_asr9k_netflow_oper::NetFlow::Configuration::FlowSamplerMaps> flow_sampler_maps;


    }; // NetFlow::Configuration


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


        class Statistic : public Entity
        {
            public:
                Statistic();
                ~Statistic();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value node; //type: string


            class Producer : public Entity
            {
                public:
                    Producer();
                    ~Producer();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Statistics_ : public Entity
                {
                    public:
                        Statistics_();
                        ~Statistics_();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value ipv4_ingress_flows; //type: uint64
                        Value ipv4_egress_flows; //type: uint64
                        Value ipv6_ingress_flows; //type: uint64
                        Value ipv6_egress_flows; //type: uint64
                        Value mpls_ingress_flows; //type: uint64
                        Value mpls_egress_flows; //type: uint64
                        Value drops_no_space; //type: uint64
                        Value drops_others; //type: uint64
                        Value unknown_ingress_flows; //type: uint64
                        Value unknown_egress_flows; //type: uint64
                        Value waiting_servers; //type: uint64
                        Value spp_rx_counts; //type: uint64
                        Value flow_packet_counts; //type: uint64
                        Value last_cleared; //type: string




                }; // NetFlow::Statistics::Statistic::Producer::Statistics_


                    std::unique_ptr<Cisco_IOS_XR_asr9k_netflow_oper::NetFlow::Statistics::Statistic::Producer::Statistics_> statistics;


            }; // NetFlow::Statistics::Statistic::Producer


            class Server : public Entity
            {
                public:
                    Server();
                    ~Server();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class FlowExporters : public Entity
                {
                    public:
                        FlowExporters();
                        ~FlowExporters();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class FlowExporter : public Entity
                    {
                        public:
                            FlowExporter();
                            ~FlowExporter();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value exporter_name; //type: string


                        class Exporter : public Entity
                        {
                            public:
                                Exporter();
                                ~Exporter();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class Statistic_ : public Entity
                            {
                                public:
                                    Statistic_();
                                    ~Statistic_();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value name; //type: string
                                    Value memory_usage; //type: uint32
                                    ValueList used_by_flow_monitor; //type: list of  string


                                class Collector : public Entity
                                {
                                    public:
                                        Collector();
                                        ~Collector();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value exporter_state; //type: string
                                        Value destination_address; //type: string
                                        Value source_address; //type: string
                                        Value vrf_name; //type: string
                                        Value destination_port; //type: uint16
                                        Value souce_port; //type: uint16
                                        Value transport_protocol; //type: string
                                        Value packets_sent; //type: uint64
                                        Value flows_sent; //type: uint64
                                        Value templates_sent; //type: uint64
                                        Value option_templates_sent; //type: uint64
                                        Value option_data_sent; //type: uint64
                                        Value bytes_sent; //type: uint64
                                        Value flow_bytes_sent; //type: uint64
                                        Value template_bytes_sent; //type: uint64
                                        Value option_template_bytes_sent; //type: uint64
                                        Value option_data_bytes_sent; //type: uint64
                                        Value packets_dropped; //type: uint64
                                        Value flows_dropped; //type: uint64
                                        Value templates_dropped; //type: uint64
                                        Value option_templates_dropped; //type: uint64
                                        Value option_data_dropped; //type: uint64
                                        Value bytes_dropped; //type: uint64
                                        Value flow_bytes_dropped; //type: uint64
                                        Value template_bytes_dropped; //type: uint64
                                        Value option_template_bytes_dropped; //type: uint64
                                        Value option_data_bytes_dropped; //type: uint64
                                        Value last_hour_packest_sent; //type: uint64
                                        Value last_hour_bytes_sent; //type: uint64
                                        Value last_hour_flows_sent; //type: uint64
                                        Value last_minute_packets; //type: uint64
                                        Value last_minute_bytes_sent; //type: uint64
                                        Value last_minute_flows_sent; //type: uint64
                                        Value last_second_packets_sent; //type: uint64
                                        Value last_second_bytes_sent; //type: uint64
                                        Value last_second_flows_sent; //type: uint64




                                }; // NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_::Collector


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_netflow_oper::NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_::Collector> > collector;


                            }; // NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_


                                std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_netflow_oper::NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_> > statistic;


                        }; // NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter


                            std::unique_ptr<Cisco_IOS_XR_asr9k_netflow_oper::NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter> exporter;


                    }; // NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter


                        std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_netflow_oper::NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter> > flow_exporter;


                }; // NetFlow::Statistics::Statistic::Server::FlowExporters


                    std::unique_ptr<Cisco_IOS_XR_asr9k_netflow_oper::NetFlow::Statistics::Statistic::Server::FlowExporters> flow_exporters;


            }; // NetFlow::Statistics::Statistic::Server


                std::unique_ptr<Cisco_IOS_XR_asr9k_netflow_oper::NetFlow::Statistics::Statistic::Producer> producer;
                std::unique_ptr<Cisco_IOS_XR_asr9k_netflow_oper::NetFlow::Statistics::Statistic::Server> server;


        }; // NetFlow::Statistics::Statistic


            std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_netflow_oper::NetFlow::Statistics::Statistic> > statistic;


    }; // NetFlow::Statistics


        std::unique_ptr<Cisco_IOS_XR_asr9k_netflow_oper::NetFlow::Configuration> configuration;
        std::unique_ptr<Cisco_IOS_XR_asr9k_netflow_oper::NetFlow::Statistics> statistics;


}; // NetFlow


class NfmgrFemEdmExpVerEnum : public Enum
{
    public:
        static const Enum::Value v9;
        static const Enum::Value ip_fix;

};

class NfmgrFemEdmTransProtoEnum : public Enum
{
    public:
        static const Enum::Value unspecified;
        static const Enum::Value udp;

};


}
}

#endif /* _CISCO_IOS_XR_ASR9K_NETFLOW_OPER_ */

