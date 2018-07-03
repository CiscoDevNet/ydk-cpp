#ifndef _CISCO_IOS_XR_SKYWARP_NETFLOW_OPER_
#define _CISCO_IOS_XR_SKYWARP_NETFLOW_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_skywarp_netflow_oper {

class NetFlow : public ydk::Entity
{
    public:
        NetFlow();
        ~NetFlow();

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

        class Statistics; //type: NetFlow::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_skywarp_netflow_oper::NetFlow::Statistics> statistics;
        
}; // NetFlow


class NetFlow::Statistics : public ydk::Entity
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

        class Statistic; //type: NetFlow::Statistics::Statistic

        ydk::YList statistic;
        
}; // NetFlow::Statistics


class NetFlow::Statistics::Statistic : public ydk::Entity
{
    public:
        Statistic();
        ~Statistic();

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

        ydk::YLeaf node; //type: string
        class Producer; //type: NetFlow::Statistics::Statistic::Producer
        class Server; //type: NetFlow::Statistics::Statistic::Server

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_skywarp_netflow_oper::NetFlow::Statistics::Statistic::Producer> producer;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_skywarp_netflow_oper::NetFlow::Statistics::Statistic::Server> server;
        
}; // NetFlow::Statistics::Statistic


class NetFlow::Statistics::Statistic::Producer : public ydk::Entity
{
    public:
        Producer();
        ~Producer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Statistics_; //type: NetFlow::Statistics::Statistic::Producer::Statistics_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_skywarp_netflow_oper::NetFlow::Statistics::Statistic::Producer::Statistics_> statistics;
        
}; // NetFlow::Statistics::Statistic::Producer


class NetFlow::Statistics::Statistic::Producer::Statistics_ : public ydk::Entity
{
    public:
        Statistics_();
        ~Statistics_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ethernet_pkts; //type: uint64
        ydk::YLeaf drops_no_space; //type: uint64
        ydk::YLeaf drops_others; //type: uint64
        ydk::YLeaf unknown_ingress_flows; //type: uint64
        ydk::YLeaf waiting_servers; //type: uint64
        ydk::YLeaf spp_rx_counts; //type: uint64
        ydk::YLeaf flow_packet_counts; //type: uint64
        ydk::YLeaf last_cleared; //type: string

}; // NetFlow::Statistics::Statistic::Producer::Statistics_


class NetFlow::Statistics::Statistic::Server : public ydk::Entity
{
    public:
        Server();
        ~Server();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FlowExporters; //type: NetFlow::Statistics::Statistic::Server::FlowExporters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_skywarp_netflow_oper::NetFlow::Statistics::Statistic::Server::FlowExporters> flow_exporters;
        
}; // NetFlow::Statistics::Statistic::Server


class NetFlow::Statistics::Statistic::Server::FlowExporters : public ydk::Entity
{
    public:
        FlowExporters();
        ~FlowExporters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FlowExporter; //type: NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter

        ydk::YList flow_exporter;
        
}; // NetFlow::Statistics::Statistic::Server::FlowExporters


class NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter : public ydk::Entity
{
    public:
        FlowExporter();
        ~FlowExporter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf exporter_name; //type: string
        class Exporter; //type: NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_skywarp_netflow_oper::NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter> exporter;
        
}; // NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter


class NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter : public ydk::Entity
{
    public:
        Exporter();
        ~Exporter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Statistic_; //type: NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_

        ydk::YList statistic;
        
}; // NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter


class NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_ : public ydk::Entity
{
    public:
        Statistic_();
        ~Statistic_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf memory_usage; //type: uint32
        ydk::YLeafList used_by_flow_monitor; //type: list of  string
        class Collector; //type: NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_::Collector

        ydk::YList collector;
        
}; // NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_


class NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_::Collector : public ydk::Entity
{
    public:
        Collector();
        ~Collector();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf exporter_state; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf destination_port; //type: uint16
        ydk::YLeaf souce_port; //type: uint16
        ydk::YLeaf transport_protocol; //type: string
        ydk::YLeaf packets_sent; //type: uint64
        ydk::YLeaf flows_sent; //type: uint64
        ydk::YLeaf templates_sent; //type: uint64
        ydk::YLeaf option_templates_sent; //type: uint64
        ydk::YLeaf option_data_sent; //type: uint64
        ydk::YLeaf bytes_sent; //type: uint64
        ydk::YLeaf flow_bytes_sent; //type: uint64
        ydk::YLeaf template_bytes_sent; //type: uint64
        ydk::YLeaf option_template_bytes_sent; //type: uint64
        ydk::YLeaf option_data_bytes_sent; //type: uint64
        ydk::YLeaf packets_dropped; //type: uint64
        ydk::YLeaf flows_dropped; //type: uint64
        ydk::YLeaf templates_dropped; //type: uint64
        ydk::YLeaf option_templates_dropped; //type: uint64
        ydk::YLeaf option_data_dropped; //type: uint64
        ydk::YLeaf bytes_dropped; //type: uint64
        ydk::YLeaf flow_bytes_dropped; //type: uint64
        ydk::YLeaf template_bytes_dropped; //type: uint64
        ydk::YLeaf option_template_bytes_dropped; //type: uint64
        ydk::YLeaf option_data_bytes_dropped; //type: uint64
        ydk::YLeaf last_hour_packest_sent; //type: uint64
        ydk::YLeaf last_hour_bytes_sent; //type: uint64
        ydk::YLeaf last_hour_flows_sent; //type: uint64
        ydk::YLeaf last_minute_packets; //type: uint64
        ydk::YLeaf last_minute_bytes_sent; //type: uint64
        ydk::YLeaf last_minute_flows_sent; //type: uint64
        ydk::YLeaf last_second_packets_sent; //type: uint64
        ydk::YLeaf last_second_bytes_sent; //type: uint64
        ydk::YLeaf last_second_flows_sent; //type: uint64

}; // NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_::Collector


}
}

#endif /* _CISCO_IOS_XR_SKYWARP_NETFLOW_OPER_ */

