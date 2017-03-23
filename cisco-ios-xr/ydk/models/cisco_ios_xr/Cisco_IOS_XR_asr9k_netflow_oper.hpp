#ifndef _CISCO_IOS_XR_ASR9K_NETFLOW_OPER_
#define _CISCO_IOS_XR_ASR9K_NETFLOW_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

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
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class Statistics; //type: NetFlow::Statistics

        std::shared_ptr<Cisco_IOS_XR_asr9k_netflow_oper::NetFlow::Statistics> statistics;


}; // NetFlow


class NetFlow::Statistics : public Entity
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



        class Statistic; //type: NetFlow::Statistics::Statistic

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_netflow_oper::NetFlow::Statistics::Statistic> > statistic;


}; // NetFlow::Statistics


class NetFlow::Statistics::Statistic : public Entity
{
    public:
        Statistic();
        ~Statistic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node; //type: string

        class Producer; //type: NetFlow::Statistics::Statistic::Producer
        class Server; //type: NetFlow::Statistics::Statistic::Server

        std::shared_ptr<Cisco_IOS_XR_asr9k_netflow_oper::NetFlow::Statistics::Statistic::Producer> producer;
        std::shared_ptr<Cisco_IOS_XR_asr9k_netflow_oper::NetFlow::Statistics::Statistic::Server> server;


}; // NetFlow::Statistics::Statistic


class NetFlow::Statistics::Statistic::Producer : public Entity
{
    public:
        Producer();
        ~Producer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Statistics_; //type: NetFlow::Statistics::Statistic::Producer::Statistics_

        std::shared_ptr<Cisco_IOS_XR_asr9k_netflow_oper::NetFlow::Statistics::Statistic::Producer::Statistics_> statistics;


}; // NetFlow::Statistics::Statistic::Producer


class NetFlow::Statistics::Statistic::Producer::Statistics_ : public Entity
{
    public:
        Statistics_();
        ~Statistics_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        YLeaf spp_rx_counts; //type: uint64
        YLeaf flow_packet_counts; //type: uint64
        YLeaf last_cleared; //type: string



}; // NetFlow::Statistics::Statistic::Producer::Statistics_


class NetFlow::Statistics::Statistic::Server : public Entity
{
    public:
        Server();
        ~Server();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class FlowExporters; //type: NetFlow::Statistics::Statistic::Server::FlowExporters

        std::shared_ptr<Cisco_IOS_XR_asr9k_netflow_oper::NetFlow::Statistics::Statistic::Server::FlowExporters> flow_exporters;


}; // NetFlow::Statistics::Statistic::Server


class NetFlow::Statistics::Statistic::Server::FlowExporters : public Entity
{
    public:
        FlowExporters();
        ~FlowExporters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class FlowExporter; //type: NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_netflow_oper::NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter> > flow_exporter;


}; // NetFlow::Statistics::Statistic::Server::FlowExporters


class NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter : public Entity
{
    public:
        FlowExporter();
        ~FlowExporter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf exporter_name; //type: string

        class Exporter; //type: NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter

        std::shared_ptr<Cisco_IOS_XR_asr9k_netflow_oper::NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter> exporter;


}; // NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter


class NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter : public Entity
{
    public:
        Exporter();
        ~Exporter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Statistic_; //type: NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_netflow_oper::NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_> > statistic;


}; // NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter


class NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_ : public Entity
{
    public:
        Statistic_();
        ~Statistic_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf memory_usage; //type: uint32
        YLeafList used_by_flow_monitor; //type: list of  string

        class Collector; //type: NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_::Collector

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_netflow_oper::NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_::Collector> > collector;


}; // NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_


class NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_::Collector : public Entity
{
    public:
        Collector();
        ~Collector();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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


}
}

#endif /* _CISCO_IOS_XR_ASR9K_NETFLOW_OPER_ */

