#ifndef _CISCO_IOS_XR_TRAFFMON_NETFLOW_CFG_
#define _CISCO_IOS_XR_TRAFFMON_NETFLOW_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_traffmon_netflow_cfg {

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

        class FlowExporterMaps; //type: NetFlow::FlowExporterMaps
        class FlowSamplerMaps; //type: NetFlow::FlowSamplerMaps
        class FlowMonitorMapTable; //type: NetFlow::FlowMonitorMapTable
        class FlowMonitorMapPerformanceTable; //type: NetFlow::FlowMonitorMapPerformanceTable

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_traffmon_netflow_cfg::NetFlow::FlowExporterMaps> flow_exporter_maps;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_traffmon_netflow_cfg::NetFlow::FlowMonitorMapPerformanceTable> flow_monitor_map_performance_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_traffmon_netflow_cfg::NetFlow::FlowMonitorMapTable> flow_monitor_map_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_traffmon_netflow_cfg::NetFlow::FlowSamplerMaps> flow_sampler_maps;
        
}; // NetFlow


class NetFlow::FlowExporterMaps : public ydk::Entity
{
    public:
        FlowExporterMaps();
        ~FlowExporterMaps();

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

        class FlowExporterMap; //type: NetFlow::FlowExporterMaps::FlowExporterMap

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_traffmon_netflow_cfg::NetFlow::FlowExporterMaps::FlowExporterMap> > flow_exporter_map;
        
}; // NetFlow::FlowExporterMaps


class NetFlow::FlowExporterMaps::FlowExporterMap : public ydk::Entity
{
    public:
        FlowExporterMap();
        ~FlowExporterMap();

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

        ydk::YLeaf exporter_map_name; //type: string
        ydk::YLeaf source_interface; //type: string
        ydk::YLeaf dscp; //type: uint32
        ydk::YLeaf packet_length; //type: uint32
        class Udp; //type: NetFlow::FlowExporterMaps::FlowExporterMap::Udp
        class Versions; //type: NetFlow::FlowExporterMaps::FlowExporterMap::Versions
        class Destination; //type: NetFlow::FlowExporterMaps::FlowExporterMap::Destination

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_traffmon_netflow_cfg::NetFlow::FlowExporterMaps::FlowExporterMap::Destination> destination;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_traffmon_netflow_cfg::NetFlow::FlowExporterMaps::FlowExporterMap::Udp> udp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_traffmon_netflow_cfg::NetFlow::FlowExporterMaps::FlowExporterMap::Versions> versions;
        
}; // NetFlow::FlowExporterMaps::FlowExporterMap


class NetFlow::FlowExporterMaps::FlowExporterMap::Destination : public ydk::Entity
{
    public:
        Destination();
        ~Destination();

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
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf vrf_name; //type: string

}; // NetFlow::FlowExporterMaps::FlowExporterMap::Destination


class NetFlow::FlowExporterMaps::FlowExporterMap::Udp : public ydk::Entity
{
    public:
        Udp();
        ~Udp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination_port; //type: uint32

}; // NetFlow::FlowExporterMaps::FlowExporterMap::Udp


class NetFlow::FlowExporterMaps::FlowExporterMap::Versions : public ydk::Entity
{
    public:
        Versions();
        ~Versions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Version; //type: NetFlow::FlowExporterMaps::FlowExporterMap::Versions::Version

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_traffmon_netflow_cfg::NetFlow::FlowExporterMaps::FlowExporterMap::Versions::Version> > version;
        
}; // NetFlow::FlowExporterMaps::FlowExporterMap::Versions


class NetFlow::FlowExporterMaps::FlowExporterMap::Versions::Version : public ydk::Entity
{
    public:
        Version();
        ~Version();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf version_number; //type: uint32
        ydk::YLeaf options_template_timeout; //type: uint32
        ydk::YLeaf common_template_timeout; //type: uint32
        ydk::YLeaf data_template_timeout; //type: uint32
        class Options; //type: NetFlow::FlowExporterMaps::FlowExporterMap::Versions::Version::Options

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_traffmon_netflow_cfg::NetFlow::FlowExporterMaps::FlowExporterMap::Versions::Version::Options> options;
        
}; // NetFlow::FlowExporterMaps::FlowExporterMap::Versions::Version


class NetFlow::FlowExporterMaps::FlowExporterMap::Versions::Version::Options : public ydk::Entity
{
    public:
        Options();
        ~Options();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_table_export_timeout; //type: uint32
        ydk::YLeaf sampler_table_export_timeout; //type: uint32
        ydk::YLeaf vrf_table_export_timeout; //type: uint32

}; // NetFlow::FlowExporterMaps::FlowExporterMap::Versions::Version::Options


class NetFlow::FlowMonitorMapPerformanceTable : public ydk::Entity
{
    public:
        FlowMonitorMapPerformanceTable();
        ~FlowMonitorMapPerformanceTable();

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

        class FlowMonitorMap; //type: NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_traffmon_netflow_cfg::NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap> > flow_monitor_map;
        
}; // NetFlow::FlowMonitorMapPerformanceTable


class NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap : public ydk::Entity
{
    public:
        FlowMonitorMap();
        ~FlowMonitorMap();

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

        ydk::YLeaf monitor_map_name; //type: string
        ydk::YLeaf cache_update_aging_timeout; //type: uint32
        ydk::YLeaf cache_entries; //type: uint32
        ydk::YLeaf cache_inactive_aging_timeout; //type: uint32
        ydk::YLeaf cache_active_aging_timeout; //type: uint32
        ydk::YLeaf cache_timeout_rate_limit; //type: uint32
        ydk::YLeaf cache_aging_mode; //type: NfCacheAgingMode
        class Option; //type: NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Option
        class Exporters; //type: NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters
        class Record; //type: NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Record

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_traffmon_netflow_cfg::NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters> exporters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_traffmon_netflow_cfg::NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Option> option;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_traffmon_netflow_cfg::NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Record> record; // presence node
        
}; // NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap


class NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters : public ydk::Entity
{
    public:
        Exporters();
        ~Exporters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Exporter; //type: NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters::Exporter

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_traffmon_netflow_cfg::NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters::Exporter> > exporter;
        
}; // NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters


class NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters::Exporter : public ydk::Entity
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

        ydk::YLeaf exporter_name; //type: string

}; // NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters::Exporter


class NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Option : public ydk::Entity
{
    public:
        Option();
        ~Option();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf filtered; //type: empty
        ydk::YLeaf out_bundle_member; //type: empty
        ydk::YLeaf out_phys_int; //type: empty
        ydk::YLeaf bgp_attr; //type: empty

}; // NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Option


class NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Record : public ydk::Entity
{
    public:
        Record();
        ~Record();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf record_name; //type: string
        ydk::YLeaf label; //type: uint32

}; // NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Record


class NetFlow::FlowMonitorMapTable : public ydk::Entity
{
    public:
        FlowMonitorMapTable();
        ~FlowMonitorMapTable();

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

        class FlowMonitorMap; //type: NetFlow::FlowMonitorMapTable::FlowMonitorMap

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_traffmon_netflow_cfg::NetFlow::FlowMonitorMapTable::FlowMonitorMap> > flow_monitor_map;
        
}; // NetFlow::FlowMonitorMapTable


class NetFlow::FlowMonitorMapTable::FlowMonitorMap : public ydk::Entity
{
    public:
        FlowMonitorMap();
        ~FlowMonitorMap();

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

        ydk::YLeaf monitor_map_name; //type: string
        ydk::YLeaf cache_update_aging_timeout; //type: uint32
        ydk::YLeaf cache_entries; //type: uint32
        ydk::YLeaf cache_inactive_aging_timeout; //type: uint32
        ydk::YLeaf cache_active_aging_timeout; //type: uint32
        ydk::YLeaf cache_timeout_rate_limit; //type: uint32
        ydk::YLeaf cache_aging_mode; //type: NfCacheAgingMode
        class Option; //type: NetFlow::FlowMonitorMapTable::FlowMonitorMap::Option
        class Exporters; //type: NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters
        class Record; //type: NetFlow::FlowMonitorMapTable::FlowMonitorMap::Record

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_traffmon_netflow_cfg::NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters> exporters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_traffmon_netflow_cfg::NetFlow::FlowMonitorMapTable::FlowMonitorMap::Option> option;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_traffmon_netflow_cfg::NetFlow::FlowMonitorMapTable::FlowMonitorMap::Record> record; // presence node
        
}; // NetFlow::FlowMonitorMapTable::FlowMonitorMap


class NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters : public ydk::Entity
{
    public:
        Exporters();
        ~Exporters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Exporter; //type: NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters::Exporter

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_traffmon_netflow_cfg::NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters::Exporter> > exporter;
        
}; // NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters


class NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters::Exporter : public ydk::Entity
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

        ydk::YLeaf exporter_name; //type: string

}; // NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters::Exporter


class NetFlow::FlowMonitorMapTable::FlowMonitorMap::Option : public ydk::Entity
{
    public:
        Option();
        ~Option();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf filtered; //type: empty
        ydk::YLeaf out_bundle_member; //type: empty
        ydk::YLeaf out_phys_int; //type: empty
        ydk::YLeaf bgp_attr; //type: empty

}; // NetFlow::FlowMonitorMapTable::FlowMonitorMap::Option


class NetFlow::FlowMonitorMapTable::FlowMonitorMap::Record : public ydk::Entity
{
    public:
        Record();
        ~Record();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf record_name; //type: string
        ydk::YLeaf label; //type: uint32

}; // NetFlow::FlowMonitorMapTable::FlowMonitorMap::Record


class NetFlow::FlowSamplerMaps : public ydk::Entity
{
    public:
        FlowSamplerMaps();
        ~FlowSamplerMaps();

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

        class FlowSamplerMap; //type: NetFlow::FlowSamplerMaps::FlowSamplerMap

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_traffmon_netflow_cfg::NetFlow::FlowSamplerMaps::FlowSamplerMap> > flow_sampler_map;
        
}; // NetFlow::FlowSamplerMaps


class NetFlow::FlowSamplerMaps::FlowSamplerMap : public ydk::Entity
{
    public:
        FlowSamplerMap();
        ~FlowSamplerMap();

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

        ydk::YLeaf sampler_map_name; //type: string
        class SamplingModes; //type: NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_traffmon_netflow_cfg::NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes> sampling_modes;
        
}; // NetFlow::FlowSamplerMaps::FlowSamplerMap


class NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes : public ydk::Entity
{
    public:
        SamplingModes();
        ~SamplingModes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SamplingMode; //type: NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes::SamplingMode

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_traffmon_netflow_cfg::NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes::SamplingMode> > sampling_mode;
        
}; // NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes


class NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes::SamplingMode : public ydk::Entity
{
    public:
        SamplingMode();
        ~SamplingMode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mode; //type: NfSamplingMode
        ydk::YLeaf sample_number; //type: uint32
        ydk::YLeaf interval; //type: uint32

}; // NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes::SamplingMode

class NfSamplingMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf random;

};

class NfCacheAgingMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf permanent;
        static const ydk::Enum::YLeaf immediate;

};


}
}

#endif /* _CISCO_IOS_XR_TRAFFMON_NETFLOW_CFG_ */

