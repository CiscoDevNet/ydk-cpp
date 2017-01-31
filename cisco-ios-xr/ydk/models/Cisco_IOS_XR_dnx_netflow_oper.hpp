#ifndef _CISCO_IOS_XR_DNX_NETFLOW_OPER_
#define _CISCO_IOS_XR_DNX_NETFLOW_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_dnx_netflow_oper {

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


                    YLeaf monitor_name; //type: string
                    YLeaf id; //type: uint32
                    YLeaf name; //type: string
                    YLeaf record_map; //type: string
                    YLeaf cache_aging_mode; //type: string
                    YLeaf number_of_labels; //type: uint32
                    YLeaf cache_max_entry; //type: uint32
                    YLeaf cache_active_timeout; //type: uint32
                    YLeaf cache_inactive_timeout; //type: uint32
                    YLeaf cache_update_timeout; //type: uint32
                    YLeaf cache_timeout_rate_limit; //type: uint32
                    YLeaf options; //type: uint32

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


                        YLeaf name; //type: string



                }; // NetFlow::Configuration::FlowMonitorMaps::FlowMonitorMap::Exporter


                    std::vector<std::unique_ptr<Cisco_IOS_XR_dnx_netflow_oper::NetFlow::Configuration::FlowMonitorMaps::FlowMonitorMap::Exporter> > exporter;


            }; // NetFlow::Configuration::FlowMonitorMaps::FlowMonitorMap


                std::vector<std::unique_ptr<Cisco_IOS_XR_dnx_netflow_oper::NetFlow::Configuration::FlowMonitorMaps::FlowMonitorMap> > flow_monitor_map;


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


                    YLeaf sampler_name; //type: string
                    YLeaf id; //type: uint32
                    YLeaf name; //type: string
                    YLeaf sampling_mode; //type: string



            }; // NetFlow::Configuration::FlowSamplerMaps::FlowSamplerMap


                std::vector<std::unique_ptr<Cisco_IOS_XR_dnx_netflow_oper::NetFlow::Configuration::FlowSamplerMaps::FlowSamplerMap> > flow_sampler_map;


        }; // NetFlow::Configuration::FlowSamplerMaps


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


                    YLeaf exporter_name; //type: string
                    YLeaf id; //type: uint32
                    YLeaf name; //type: string

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


                        YLeaf version; //type: NfmgrFemEdmExpVerEnum

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


                            YLeaf sampler_table_export_timeout; //type: uint32
                            YLeaf interface_table_export_timeout; //type: uint32
                            YLeaf vrf_table_export_timeout; //type: uint32
                            YLeaf options_template_export_timeout; //type: uint32
                            YLeaf data_template_export_timeout; //type: uint32
                            YLeaf common_template_export_timeout; //type: uint32



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


                            YLeaf sampler_table_export_timeout; //type: uint32
                            YLeaf interface_table_export_timeout; //type: uint32
                            YLeaf vrf_table_export_timeout; //type: uint32
                            YLeaf options_template_export_timeout; //type: uint32
                            YLeaf data_template_export_timeout; //type: uint32
                            YLeaf common_template_export_timeout; //type: uint32



                    }; // NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::Version::Ipfix


                        std::unique_ptr<Cisco_IOS_XR_dnx_netflow_oper::NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::Version::Ipfix> ipfix;
                        std::unique_ptr<Cisco_IOS_XR_dnx_netflow_oper::NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::Version::Version9> version9;


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


                        YLeaf destination_address; //type: string
                        YLeaf source_address; //type: string
                        YLeaf vrf_name; //type: string
                        YLeaf source_interface; //type: string
                        YLeaf dscp; //type: uint8
                        YLeaf transport_protocol; //type: NfmgrFemEdmTransProtoEnum
                        YLeaf destination_port; //type: uint16



                }; // NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::Collector


                    std::vector<std::unique_ptr<Cisco_IOS_XR_dnx_netflow_oper::NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::Collector> > collector;
                    std::unique_ptr<Cisco_IOS_XR_dnx_netflow_oper::NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::Version> version;


            }; // NetFlow::Configuration::FlowExporterMaps::FlowExporterMap


                std::vector<std::unique_ptr<Cisco_IOS_XR_dnx_netflow_oper::NetFlow::Configuration::FlowExporterMaps::FlowExporterMap> > flow_exporter_map;


        }; // NetFlow::Configuration::FlowExporterMaps


            std::unique_ptr<Cisco_IOS_XR_dnx_netflow_oper::NetFlow::Configuration::FlowExporterMaps> flow_exporter_maps;
            std::unique_ptr<Cisco_IOS_XR_dnx_netflow_oper::NetFlow::Configuration::FlowMonitorMaps> flow_monitor_maps;
            std::unique_ptr<Cisco_IOS_XR_dnx_netflow_oper::NetFlow::Configuration::FlowSamplerMaps> flow_sampler_maps;


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


                YLeaf node; //type: string

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


                        YLeaf ipv4_ingress_flows; //type: uint64
                        YLeaf ipv4_egress_flows; //type: uint64
                        YLeaf ipv6_ingress_flows; //type: uint64
                        YLeaf ipv6_egress_flows; //type: uint64
                        YLeaf mpls_ingress_flows; //type: uint64
                        YLeaf mpls_egress_flows; //type: uint64
                        YLeaf drops_no_space; //type: uint64
                        YLeaf drops_others; //type: uint64
                        YLeaf unknown_ingress_flows; //type: uint64
                        YLeaf unknown_egress_flows; //type: uint64
                        YLeaf waiting_servers; //type: uint64
                        YLeaf last_cleared; //type: string



                }; // NetFlow::Statistics::Statistic::Producer::Statistics_


                    std::unique_ptr<Cisco_IOS_XR_dnx_netflow_oper::NetFlow::Statistics::Statistic::Producer::Statistics_> statistics;


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


                            YLeaf exporter_name; //type: string

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


                                    YLeaf name; //type: string
                                    YLeaf memory_usage; //type: uint32
                                    YLeafList used_by_flow_monitor; //type: list of  string

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


                                        YLeaf exporter_state; //type: string
                                        YLeaf destination_address; //type: string
                                        YLeaf source_address; //type: string
                                        YLeaf vrf_name; //type: string
                                        YLeaf destination_port; //type: uint16
                                        YLeaf souce_port; //type: uint16
                                        YLeaf transport_protocol; //type: string
                                        YLeaf packets_sent; //type: uint64
                                        YLeaf flows_sent; //type: uint64
                                        YLeaf templates_sent; //type: uint64
                                        YLeaf option_templates_sent; //type: uint64
                                        YLeaf option_data_sent; //type: uint64
                                        YLeaf bytes_sent; //type: uint64
                                        YLeaf flow_bytes_sent; //type: uint64
                                        YLeaf template_bytes_sent; //type: uint64
                                        YLeaf option_template_bytes_sent; //type: uint64
                                        YLeaf option_data_bytes_sent; //type: uint64
                                        YLeaf packets_dropped; //type: uint64
                                        YLeaf flows_dropped; //type: uint64
                                        YLeaf templates_dropped; //type: uint64
                                        YLeaf option_templates_dropped; //type: uint64
                                        YLeaf option_data_dropped; //type: uint64
                                        YLeaf bytes_dropped; //type: uint64
                                        YLeaf flow_bytes_dropped; //type: uint64
                                        YLeaf template_bytes_dropped; //type: uint64
                                        YLeaf option_template_bytes_dropped; //type: uint64
                                        YLeaf option_data_bytes_dropped; //type: uint64
                                        YLeaf last_hour_packest_sent; //type: uint64
                                        YLeaf last_hour_bytes_sent; //type: uint64
                                        YLeaf last_hour_flows_sent; //type: uint64
                                        YLeaf last_minute_packets; //type: uint64
                                        YLeaf last_minute_bytes_sent; //type: uint64
                                        YLeaf last_minute_flows_sent; //type: uint64
                                        YLeaf last_second_packets_sent; //type: uint64
                                        YLeaf last_second_bytes_sent; //type: uint64
                                        YLeaf last_second_flows_sent; //type: uint64



                                }; // NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_::Collector


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_dnx_netflow_oper::NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_::Collector> > collector;


                            }; // NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_


                                std::vector<std::unique_ptr<Cisco_IOS_XR_dnx_netflow_oper::NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_> > statistic;


                        }; // NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter


                            std::unique_ptr<Cisco_IOS_XR_dnx_netflow_oper::NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter> exporter;


                    }; // NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter


                        std::vector<std::unique_ptr<Cisco_IOS_XR_dnx_netflow_oper::NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter> > flow_exporter;


                }; // NetFlow::Statistics::Statistic::Server::FlowExporters


                    std::unique_ptr<Cisco_IOS_XR_dnx_netflow_oper::NetFlow::Statistics::Statistic::Server::FlowExporters> flow_exporters;


            }; // NetFlow::Statistics::Statistic::Server


                std::unique_ptr<Cisco_IOS_XR_dnx_netflow_oper::NetFlow::Statistics::Statistic::Producer> producer;
                std::unique_ptr<Cisco_IOS_XR_dnx_netflow_oper::NetFlow::Statistics::Statistic::Server> server;


        }; // NetFlow::Statistics::Statistic


            std::vector<std::unique_ptr<Cisco_IOS_XR_dnx_netflow_oper::NetFlow::Statistics::Statistic> > statistic;


    }; // NetFlow::Statistics


        std::unique_ptr<Cisco_IOS_XR_dnx_netflow_oper::NetFlow::Configuration> configuration;
        std::unique_ptr<Cisco_IOS_XR_dnx_netflow_oper::NetFlow::Statistics> statistics;


}; // NetFlow


class NfmgrFemEdmExpVerEnum : public Enum
{
    public:
        static const Enum::YLeaf v9;
        static const Enum::YLeaf ip_fix;

};

class NfmgrFemEdmTransProtoEnum : public Enum
{
    public:
        static const Enum::YLeaf unspecified;
        static const Enum::YLeaf udp;

};


}
}

#endif /* _CISCO_IOS_XR_DNX_NETFLOW_OPER_ */

