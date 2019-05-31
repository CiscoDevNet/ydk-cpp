#ifndef _CISCO_IOS_XE_FLOW_MONITOR_OPER_
#define _CISCO_IOS_XE_FLOW_MONITOR_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_flow_monitor_oper {

class FlowMonitors : public ydk::Entity
{
    public:
        FlowMonitors();
        ~FlowMonitors();

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

        class FlowMonitor; //type: FlowMonitors::FlowMonitor
        class FlowExportStatistics; //type: FlowMonitors::FlowExportStatistics
        class FlowCacheStatistics; //type: FlowMonitors::FlowCacheStatistics
        class FlowMonitorStatistics; //type: FlowMonitors::FlowMonitorStatistics

        ydk::YList flow_monitor;
        ydk::YList flow_export_statistics;
        ydk::YList flow_cache_statistics;
        ydk::YList flow_monitor_statistics;
        
}; // FlowMonitors


class FlowMonitors::FlowMonitor : public ydk::Entity
{
    public:
        FlowMonitor();
        ~FlowMonitor();

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
        ydk::YLeaf time_collected; //type: uint64
        class Flows; //type: FlowMonitors::FlowMonitor::Flows

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_flow_monitor_oper::FlowMonitors::FlowMonitor::Flows> flows;
        
}; // FlowMonitors::FlowMonitor


class FlowMonitors::FlowMonitor::Flows : public ydk::Entity
{
    public:
        Flows();
        ~Flows();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Flow; //type: FlowMonitors::FlowMonitor::Flows::Flow

        ydk::YList flow;
        
}; // FlowMonitors::FlowMonitor::Flows


class FlowMonitors::FlowMonitor::Flows::Flow : public ydk::Entity
{
    public:
        Flow();
        ~Flow();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf interface_input; //type: string
        ydk::YLeaf is_multicast; //type: string
        ydk::YLeaf vrf_id_input; //type: int64
        ydk::YLeaf source_port; //type: int64
        ydk::YLeaf destination_port; //type: int64
        ydk::YLeaf ip_tos; //type: string
        ydk::YLeaf ip_protocol; //type: int64
        ydk::YLeaf interface_output; //type: string
        ydk::YLeaf bytes; //type: int64
        ydk::YLeaf packets; //type: int64

}; // FlowMonitors::FlowMonitor::Flows::Flow


class FlowMonitors::FlowExportStatistics : public ydk::Entity
{
    public:
        FlowExportStatistics();
        ~FlowExportStatistics();

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
        class TransportStats; //type: FlowMonitors::FlowExportStatistics::TransportStats
        class ExportClient; //type: FlowMonitors::FlowExportStatistics::ExportClient

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_flow_monitor_oper::FlowMonitors::FlowExportStatistics::TransportStats> transport_stats;
        ydk::YList export_client;
        
}; // FlowMonitors::FlowExportStatistics


class FlowMonitors::FlowExportStatistics::TransportStats : public ydk::Entity
{
    public:
        TransportStats();
        ~TransportStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf last_cleared; //type: string
        class FlowExporterStats; //type: FlowMonitors::FlowExportStatistics::TransportStats::FlowExporterStats

        ydk::YList flow_exporter_stats;
        
}; // FlowMonitors::FlowExportStatistics::TransportStats


class FlowMonitors::FlowExportStatistics::TransportStats::FlowExporterStats : public ydk::Entity
{
    public:
        FlowExporterStats();
        ~FlowExporterStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: FlowExporterIpwriteStatsType
        ydk::YLeaf pkt_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // FlowMonitors::FlowExportStatistics::TransportStats::FlowExporterStats


class FlowMonitors::FlowExportStatistics::ExportClient : public ydk::Entity
{
    public:
        ExportClient();
        ~ExportClient();

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
        ydk::YLeaf group; //type: string
        class ProtocolStats; //type: FlowMonitors::FlowExportStatistics::ExportClient::ProtocolStats

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_flow_monitor_oper::FlowMonitors::FlowExportStatistics::ExportClient::ProtocolStats> protocol_stats;
        
}; // FlowMonitors::FlowExportStatistics::ExportClient


class FlowMonitors::FlowExportStatistics::ExportClient::ProtocolStats : public ydk::Entity
{
    public:
        ProtocolStats();
        ~ProtocolStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bytes_added; //type: uint64
        ydk::YLeaf bytes_sent; //type: uint64
        ydk::YLeaf bytes_dropped; //type: uint64
        ydk::YLeaf records_added; //type: uint64
        ydk::YLeaf records_sent; //type: uint64
        ydk::YLeaf records_dropped; //type: uint64

}; // FlowMonitors::FlowExportStatistics::ExportClient::ProtocolStats


class FlowMonitors::FlowCacheStatistics : public ydk::Entity
{
    public:
        FlowCacheStatistics();
        ~FlowCacheStatistics();

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
        ydk::YLeaf cache_size; //type: uint64
        ydk::YLeaf current_entries; //type: uint64
        ydk::YLeaf high_watermark; //type: uint64
        ydk::YLeaf flows_added; //type: uint64
        ydk::YLeaf flows_aged; //type: uint64
        ydk::YLeaf active_flows_timed_out; //type: uint64
        ydk::YLeaf inactive_flows_timed_out; //type: uint64

}; // FlowMonitors::FlowCacheStatistics


class FlowMonitors::FlowMonitorStatistics : public ydk::Entity
{
    public:
        FlowMonitorStatistics();
        ~FlowMonitorStatistics();

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

        ydk::YLeaf monitor_name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf record_name; //type: string
        ydk::YLeaf invalid_packet_counts; //type: uint64
        ydk::YLeaf transaction_end_ager_enabled; //type: boolean
        ydk::YLeaf protocol_dist_configured; //type: string
        ydk::YLeaf size_dist_configured; //type: string
        ydk::YLeaf inactive_timer; //type: uint32
        ydk::YLeaf active_timer; //type: uint32
        ydk::YLeaf update_timeout; //type: uint32
        ydk::YLeaf synchronized_timeout; //type: uint32
        ydk::YLeaf export_spread_interval; //type: uint32
        ydk::YLeaf immediate_timeout; //type: uint32
        ydk::YLeafList active_flow_exporter; //type: list of  string
        ydk::YLeafList inactive_flow_exporter; //type: list of  string
        class CacheData; //type: FlowMonitors::FlowMonitorStatistics::CacheData

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_flow_monitor_oper::FlowMonitors::FlowMonitorStatistics::CacheData> cache_data;
        
}; // FlowMonitors::FlowMonitorStatistics


class FlowMonitors::FlowMonitorStatistics::CacheData : public ydk::Entity
{
    public:
        CacheData();
        ~CacheData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf state; //type: FlowMonitorCacheState
        ydk::YLeaf type; //type: string
        ydk::YLeaf cache_name; //type: string
        ydk::YLeaf status; //type: string
        ydk::YLeaf num_entries; //type: uint64
        ydk::YLeaf num_bytes; //type: uint64

}; // FlowMonitors::FlowMonitorStatistics::CacheData

class FlowExporterIpwriteStatsType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf flow_exporter_ipwrite_stats_ok;
        static const ydk::Enum::YLeaf flow_exporter_ipwrite_stats_no_fib;
        static const ydk::Enum::YLeaf flow_exporter_ipwrite_stats_fail_event;
        static const ydk::Enum::YLeaf flow_exporter_ipwrite_stats_process;
        static const ydk::Enum::YLeaf flow_exporter_ipwrite_stats_enqueue_failed;
        static const ydk::Enum::YLeaf flow_exporter_ipwrite_stats_ipc_failed;
        static const ydk::Enum::YLeaf flow_exporter_ipwrite_stats_output_failed;
        static const ydk::Enum::YLeaf flow_exporter_ipwrite_stats_mtu_failed;
        static const ydk::Enum::YLeaf flow_exporter_ipwrite_stats_encapfix_failed;
        static const ydk::Enum::YLeaf flow_exporter_ipwrite_stats_cef_off;
        static const ydk::Enum::YLeaf flow_exporter_ipwrite_stats_other;
        static const ydk::Enum::YLeaf flow_exporter_ipwrite_stats_rate_limit;
        static const ydk::Enum::YLeaf flow_exporter_ipwrite_stats_no_destination;

};

class FlowMonitorCacheType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf flow_monitor_cache_type_normal;
        static const ydk::Enum::YLeaf flow_monitor_cache_type_permanent;
        static const ydk::Enum::YLeaf flow_monitor_cache_type_synchronized;
        static const ydk::Enum::YLeaf flow_monitor_cache_type_immediate;

};

class FlowMonitorCacheState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf flow_monitor_cache_state_being_deleted;
        static const ydk::Enum::YLeaf flow_monitor_cache_state_being_allocated;
        static const ydk::Enum::YLeaf flow_monitor_cache_state_not_allocated;

};


}
}

#endif /* _CISCO_IOS_XE_FLOW_MONITOR_OPER_ */

