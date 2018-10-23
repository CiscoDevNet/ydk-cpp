
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_traffmon_netflow_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_traffmon_netflow_cfg {

NetFlow::NetFlow()
    :
    flow_exporter_maps(std::make_shared<NetFlow::FlowExporterMaps>())
    , flow_sampler_maps(std::make_shared<NetFlow::FlowSamplerMaps>())
    , flow_monitor_map_table(std::make_shared<NetFlow::FlowMonitorMapTable>())
    , flow_monitor_map_performance_table(std::make_shared<NetFlow::FlowMonitorMapPerformanceTable>())
{
    flow_exporter_maps->parent = this;
    flow_sampler_maps->parent = this;
    flow_monitor_map_table->parent = this;
    flow_monitor_map_performance_table->parent = this;

    yang_name = "net-flow"; yang_parent_name = "Cisco-IOS-XR-traffmon-netflow-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

NetFlow::~NetFlow()
{
}

bool NetFlow::has_data() const
{
    if (is_presence_container) return true;
    return (flow_exporter_maps !=  nullptr && flow_exporter_maps->has_data())
	|| (flow_sampler_maps !=  nullptr && flow_sampler_maps->has_data())
	|| (flow_monitor_map_table !=  nullptr && flow_monitor_map_table->has_data())
	|| (flow_monitor_map_performance_table !=  nullptr && flow_monitor_map_performance_table->has_data());
}

bool NetFlow::has_operation() const
{
    return is_set(yfilter)
	|| (flow_exporter_maps !=  nullptr && flow_exporter_maps->has_operation())
	|| (flow_sampler_maps !=  nullptr && flow_sampler_maps->has_operation())
	|| (flow_monitor_map_table !=  nullptr && flow_monitor_map_table->has_operation())
	|| (flow_monitor_map_performance_table !=  nullptr && flow_monitor_map_performance_table->has_operation());
}

std::string NetFlow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-traffmon-netflow-cfg:net-flow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetFlow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetFlow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-exporter-maps")
    {
        if(flow_exporter_maps == nullptr)
        {
            flow_exporter_maps = std::make_shared<NetFlow::FlowExporterMaps>();
        }
        return flow_exporter_maps;
    }

    if(child_yang_name == "flow-sampler-maps")
    {
        if(flow_sampler_maps == nullptr)
        {
            flow_sampler_maps = std::make_shared<NetFlow::FlowSamplerMaps>();
        }
        return flow_sampler_maps;
    }

    if(child_yang_name == "flow-monitor-map-table")
    {
        if(flow_monitor_map_table == nullptr)
        {
            flow_monitor_map_table = std::make_shared<NetFlow::FlowMonitorMapTable>();
        }
        return flow_monitor_map_table;
    }

    if(child_yang_name == "flow-monitor-map-performance-table")
    {
        if(flow_monitor_map_performance_table == nullptr)
        {
            flow_monitor_map_performance_table = std::make_shared<NetFlow::FlowMonitorMapPerformanceTable>();
        }
        return flow_monitor_map_performance_table;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetFlow::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(flow_exporter_maps != nullptr)
    {
        _children["flow-exporter-maps"] = flow_exporter_maps;
    }

    if(flow_sampler_maps != nullptr)
    {
        _children["flow-sampler-maps"] = flow_sampler_maps;
    }

    if(flow_monitor_map_table != nullptr)
    {
        _children["flow-monitor-map-table"] = flow_monitor_map_table;
    }

    if(flow_monitor_map_performance_table != nullptr)
    {
        _children["flow-monitor-map-performance-table"] = flow_monitor_map_performance_table;
    }

    return _children;
}

void NetFlow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetFlow::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> NetFlow::clone_ptr() const
{
    return std::make_shared<NetFlow>();
}

std::string NetFlow::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string NetFlow::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function NetFlow::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> NetFlow::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool NetFlow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-exporter-maps" || name == "flow-sampler-maps" || name == "flow-monitor-map-table" || name == "flow-monitor-map-performance-table")
        return true;
    return false;
}

NetFlow::FlowExporterMaps::FlowExporterMaps()
    :
    flow_exporter_map(this, {"exporter_map_name"})
{

    yang_name = "flow-exporter-maps"; yang_parent_name = "net-flow"; is_top_level_class = false; has_list_ancestor = false; 
}

NetFlow::FlowExporterMaps::~FlowExporterMaps()
{
}

bool NetFlow::FlowExporterMaps::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<flow_exporter_map.len(); index++)
    {
        if(flow_exporter_map[index]->has_data())
            return true;
    }
    return false;
}

bool NetFlow::FlowExporterMaps::has_operation() const
{
    for (std::size_t index=0; index<flow_exporter_map.len(); index++)
    {
        if(flow_exporter_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetFlow::FlowExporterMaps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-traffmon-netflow-cfg:net-flow/" << get_segment_path();
    return path_buffer.str();
}

std::string NetFlow::FlowExporterMaps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-exporter-maps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetFlow::FlowExporterMaps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetFlow::FlowExporterMaps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-exporter-map")
    {
        auto ent_ = std::make_shared<NetFlow::FlowExporterMaps::FlowExporterMap>();
        ent_->parent = this;
        flow_exporter_map.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetFlow::FlowExporterMaps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : flow_exporter_map.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetFlow::FlowExporterMaps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetFlow::FlowExporterMaps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetFlow::FlowExporterMaps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-exporter-map")
        return true;
    return false;
}

NetFlow::FlowExporterMaps::FlowExporterMap::FlowExporterMap()
    :
    exporter_map_name{YType::str, "exporter-map-name"},
    source_interface{YType::str, "source-interface"},
    dscp{YType::uint32, "dscp"},
    packet_length{YType::uint32, "packet-length"}
        ,
    udp(std::make_shared<NetFlow::FlowExporterMaps::FlowExporterMap::Udp>())
    , destination(std::make_shared<NetFlow::FlowExporterMaps::FlowExporterMap::Destination>())
    , version(std::make_shared<NetFlow::FlowExporterMaps::FlowExporterMap::Version>())
{
    udp->parent = this;
    destination->parent = this;
    version->parent = this;

    yang_name = "flow-exporter-map"; yang_parent_name = "flow-exporter-maps"; is_top_level_class = false; has_list_ancestor = false; 
}

NetFlow::FlowExporterMaps::FlowExporterMap::~FlowExporterMap()
{
}

bool NetFlow::FlowExporterMaps::FlowExporterMap::has_data() const
{
    if (is_presence_container) return true;
    return exporter_map_name.is_set
	|| source_interface.is_set
	|| dscp.is_set
	|| packet_length.is_set
	|| (udp !=  nullptr && udp->has_data())
	|| (destination !=  nullptr && destination->has_data())
	|| (version !=  nullptr && version->has_data());
}

bool NetFlow::FlowExporterMaps::FlowExporterMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(exporter_map_name.yfilter)
	|| ydk::is_set(source_interface.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(packet_length.yfilter)
	|| (udp !=  nullptr && udp->has_operation())
	|| (destination !=  nullptr && destination->has_operation())
	|| (version !=  nullptr && version->has_operation());
}

std::string NetFlow::FlowExporterMaps::FlowExporterMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-traffmon-netflow-cfg:net-flow/flow-exporter-maps/" << get_segment_path();
    return path_buffer.str();
}

std::string NetFlow::FlowExporterMaps::FlowExporterMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-exporter-map";
    ADD_KEY_TOKEN(exporter_map_name, "exporter-map-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetFlow::FlowExporterMaps::FlowExporterMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exporter_map_name.is_set || is_set(exporter_map_name.yfilter)) leaf_name_data.push_back(exporter_map_name.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (packet_length.is_set || is_set(packet_length.yfilter)) leaf_name_data.push_back(packet_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetFlow::FlowExporterMaps::FlowExporterMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<NetFlow::FlowExporterMaps::FlowExporterMap::Udp>();
        }
        return udp;
    }

    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<NetFlow::FlowExporterMaps::FlowExporterMap::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "version")
    {
        if(version == nullptr)
        {
            version = std::make_shared<NetFlow::FlowExporterMaps::FlowExporterMap::Version>();
        }
        return version;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetFlow::FlowExporterMaps::FlowExporterMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(udp != nullptr)
    {
        _children["udp"] = udp;
    }

    if(destination != nullptr)
    {
        _children["destination"] = destination;
    }

    if(version != nullptr)
    {
        _children["version"] = version;
    }

    return _children;
}

void NetFlow::FlowExporterMaps::FlowExporterMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exporter-map-name")
    {
        exporter_map_name = value;
        exporter_map_name.value_namespace = name_space;
        exporter_map_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-length")
    {
        packet_length = value;
        packet_length.value_namespace = name_space;
        packet_length.value_namespace_prefix = name_space_prefix;
    }
}

void NetFlow::FlowExporterMaps::FlowExporterMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exporter-map-name")
    {
        exporter_map_name.yfilter = yfilter;
    }
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "packet-length")
    {
        packet_length.yfilter = yfilter;
    }
}

bool NetFlow::FlowExporterMaps::FlowExporterMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp" || name == "destination" || name == "version" || name == "exporter-map-name" || name == "source-interface" || name == "dscp" || name == "packet-length")
        return true;
    return false;
}

NetFlow::FlowExporterMaps::FlowExporterMap::Udp::Udp()
    :
    destination_port{YType::uint32, "destination-port"}
{

    yang_name = "udp"; yang_parent_name = "flow-exporter-map"; is_top_level_class = false; has_list_ancestor = true; 
}

NetFlow::FlowExporterMaps::FlowExporterMap::Udp::~Udp()
{
}

bool NetFlow::FlowExporterMaps::FlowExporterMap::Udp::has_data() const
{
    if (is_presence_container) return true;
    return destination_port.is_set;
}

bool NetFlow::FlowExporterMaps::FlowExporterMap::Udp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_port.yfilter);
}

std::string NetFlow::FlowExporterMaps::FlowExporterMap::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetFlow::FlowExporterMaps::FlowExporterMap::Udp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetFlow::FlowExporterMaps::FlowExporterMap::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetFlow::FlowExporterMaps::FlowExporterMap::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetFlow::FlowExporterMaps::FlowExporterMap::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-port")
    {
        destination_port = value;
        destination_port.value_namespace = name_space;
        destination_port.value_namespace_prefix = name_space_prefix;
    }
}

void NetFlow::FlowExporterMaps::FlowExporterMap::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
}

bool NetFlow::FlowExporterMaps::FlowExporterMap::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-port")
        return true;
    return false;
}

NetFlow::FlowExporterMaps::FlowExporterMap::Destination::Destination()
    :
    ip_address{YType::str, "ip-address"},
    ipv6_address{YType::str, "ipv6-address"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "destination"; yang_parent_name = "flow-exporter-map"; is_top_level_class = false; has_list_ancestor = true; 
}

NetFlow::FlowExporterMaps::FlowExporterMap::Destination::~Destination()
{
}

bool NetFlow::FlowExporterMaps::FlowExporterMap::Destination::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set
	|| ipv6_address.is_set
	|| vrf_name.is_set;
}

bool NetFlow::FlowExporterMaps::FlowExporterMap::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string NetFlow::FlowExporterMaps::FlowExporterMap::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetFlow::FlowExporterMaps::FlowExporterMap::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetFlow::FlowExporterMaps::FlowExporterMap::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetFlow::FlowExporterMaps::FlowExporterMap::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetFlow::FlowExporterMaps::FlowExporterMap::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void NetFlow::FlowExporterMaps::FlowExporterMap::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool NetFlow::FlowExporterMaps::FlowExporterMap::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address" || name == "ipv6-address" || name == "vrf-name")
        return true;
    return false;
}

NetFlow::FlowExporterMaps::FlowExporterMap::Version::Version()
    :
    version_type{YType::uint32, "version-type"},
    options_template_timeout{YType::uint32, "options-template-timeout"},
    common_template_timeout{YType::uint32, "common-template-timeout"},
    data_template_timeout{YType::uint32, "data-template-timeout"}
        ,
    options(std::make_shared<NetFlow::FlowExporterMaps::FlowExporterMap::Version::Options>())
{
    options->parent = this;

    yang_name = "version"; yang_parent_name = "flow-exporter-map"; is_top_level_class = false; has_list_ancestor = true; 
}

NetFlow::FlowExporterMaps::FlowExporterMap::Version::~Version()
{
}

bool NetFlow::FlowExporterMaps::FlowExporterMap::Version::has_data() const
{
    if (is_presence_container) return true;
    return version_type.is_set
	|| options_template_timeout.is_set
	|| common_template_timeout.is_set
	|| data_template_timeout.is_set
	|| (options !=  nullptr && options->has_data());
}

bool NetFlow::FlowExporterMaps::FlowExporterMap::Version::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version_type.yfilter)
	|| ydk::is_set(options_template_timeout.yfilter)
	|| ydk::is_set(common_template_timeout.yfilter)
	|| ydk::is_set(data_template_timeout.yfilter)
	|| (options !=  nullptr && options->has_operation());
}

std::string NetFlow::FlowExporterMaps::FlowExporterMap::Version::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetFlow::FlowExporterMaps::FlowExporterMap::Version::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version_type.is_set || is_set(version_type.yfilter)) leaf_name_data.push_back(version_type.get_name_leafdata());
    if (options_template_timeout.is_set || is_set(options_template_timeout.yfilter)) leaf_name_data.push_back(options_template_timeout.get_name_leafdata());
    if (common_template_timeout.is_set || is_set(common_template_timeout.yfilter)) leaf_name_data.push_back(common_template_timeout.get_name_leafdata());
    if (data_template_timeout.is_set || is_set(data_template_timeout.yfilter)) leaf_name_data.push_back(data_template_timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetFlow::FlowExporterMaps::FlowExporterMap::Version::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "options")
    {
        if(options == nullptr)
        {
            options = std::make_shared<NetFlow::FlowExporterMaps::FlowExporterMap::Version::Options>();
        }
        return options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetFlow::FlowExporterMaps::FlowExporterMap::Version::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(options != nullptr)
    {
        _children["options"] = options;
    }

    return _children;
}

void NetFlow::FlowExporterMaps::FlowExporterMap::Version::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version-type")
    {
        version_type = value;
        version_type.value_namespace = name_space;
        version_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "options-template-timeout")
    {
        options_template_timeout = value;
        options_template_timeout.value_namespace = name_space;
        options_template_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "common-template-timeout")
    {
        common_template_timeout = value;
        common_template_timeout.value_namespace = name_space;
        common_template_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-template-timeout")
    {
        data_template_timeout = value;
        data_template_timeout.value_namespace = name_space;
        data_template_timeout.value_namespace_prefix = name_space_prefix;
    }
}

void NetFlow::FlowExporterMaps::FlowExporterMap::Version::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version-type")
    {
        version_type.yfilter = yfilter;
    }
    if(value_path == "options-template-timeout")
    {
        options_template_timeout.yfilter = yfilter;
    }
    if(value_path == "common-template-timeout")
    {
        common_template_timeout.yfilter = yfilter;
    }
    if(value_path == "data-template-timeout")
    {
        data_template_timeout.yfilter = yfilter;
    }
}

bool NetFlow::FlowExporterMaps::FlowExporterMap::Version::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "options" || name == "version-type" || name == "options-template-timeout" || name == "common-template-timeout" || name == "data-template-timeout")
        return true;
    return false;
}

NetFlow::FlowExporterMaps::FlowExporterMap::Version::Options::Options()
    :
    interface_table_export_timeout{YType::uint32, "interface-table-export-timeout"},
    sampler_table_export_timeout{YType::uint32, "sampler-table-export-timeout"},
    vrf_table_export_timeout{YType::uint32, "vrf-table-export-timeout"}
{

    yang_name = "options"; yang_parent_name = "version"; is_top_level_class = false; has_list_ancestor = true; 
}

NetFlow::FlowExporterMaps::FlowExporterMap::Version::Options::~Options()
{
}

bool NetFlow::FlowExporterMaps::FlowExporterMap::Version::Options::has_data() const
{
    if (is_presence_container) return true;
    return interface_table_export_timeout.is_set
	|| sampler_table_export_timeout.is_set
	|| vrf_table_export_timeout.is_set;
}

bool NetFlow::FlowExporterMaps::FlowExporterMap::Version::Options::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_table_export_timeout.yfilter)
	|| ydk::is_set(sampler_table_export_timeout.yfilter)
	|| ydk::is_set(vrf_table_export_timeout.yfilter);
}

std::string NetFlow::FlowExporterMaps::FlowExporterMap::Version::Options::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetFlow::FlowExporterMaps::FlowExporterMap::Version::Options::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_table_export_timeout.is_set || is_set(interface_table_export_timeout.yfilter)) leaf_name_data.push_back(interface_table_export_timeout.get_name_leafdata());
    if (sampler_table_export_timeout.is_set || is_set(sampler_table_export_timeout.yfilter)) leaf_name_data.push_back(sampler_table_export_timeout.get_name_leafdata());
    if (vrf_table_export_timeout.is_set || is_set(vrf_table_export_timeout.yfilter)) leaf_name_data.push_back(vrf_table_export_timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetFlow::FlowExporterMaps::FlowExporterMap::Version::Options::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetFlow::FlowExporterMaps::FlowExporterMap::Version::Options::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetFlow::FlowExporterMaps::FlowExporterMap::Version::Options::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-table-export-timeout")
    {
        interface_table_export_timeout = value;
        interface_table_export_timeout.value_namespace = name_space;
        interface_table_export_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sampler-table-export-timeout")
    {
        sampler_table_export_timeout = value;
        sampler_table_export_timeout.value_namespace = name_space;
        sampler_table_export_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-table-export-timeout")
    {
        vrf_table_export_timeout = value;
        vrf_table_export_timeout.value_namespace = name_space;
        vrf_table_export_timeout.value_namespace_prefix = name_space_prefix;
    }
}

void NetFlow::FlowExporterMaps::FlowExporterMap::Version::Options::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-table-export-timeout")
    {
        interface_table_export_timeout.yfilter = yfilter;
    }
    if(value_path == "sampler-table-export-timeout")
    {
        sampler_table_export_timeout.yfilter = yfilter;
    }
    if(value_path == "vrf-table-export-timeout")
    {
        vrf_table_export_timeout.yfilter = yfilter;
    }
}

bool NetFlow::FlowExporterMaps::FlowExporterMap::Version::Options::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-table-export-timeout" || name == "sampler-table-export-timeout" || name == "vrf-table-export-timeout")
        return true;
    return false;
}

NetFlow::FlowSamplerMaps::FlowSamplerMaps()
    :
    flow_sampler_map(this, {"sampler_map_name"})
{

    yang_name = "flow-sampler-maps"; yang_parent_name = "net-flow"; is_top_level_class = false; has_list_ancestor = false; 
}

NetFlow::FlowSamplerMaps::~FlowSamplerMaps()
{
}

bool NetFlow::FlowSamplerMaps::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<flow_sampler_map.len(); index++)
    {
        if(flow_sampler_map[index]->has_data())
            return true;
    }
    return false;
}

bool NetFlow::FlowSamplerMaps::has_operation() const
{
    for (std::size_t index=0; index<flow_sampler_map.len(); index++)
    {
        if(flow_sampler_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetFlow::FlowSamplerMaps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-traffmon-netflow-cfg:net-flow/" << get_segment_path();
    return path_buffer.str();
}

std::string NetFlow::FlowSamplerMaps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-sampler-maps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetFlow::FlowSamplerMaps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetFlow::FlowSamplerMaps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-sampler-map")
    {
        auto ent_ = std::make_shared<NetFlow::FlowSamplerMaps::FlowSamplerMap>();
        ent_->parent = this;
        flow_sampler_map.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetFlow::FlowSamplerMaps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : flow_sampler_map.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetFlow::FlowSamplerMaps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetFlow::FlowSamplerMaps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetFlow::FlowSamplerMaps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-sampler-map")
        return true;
    return false;
}

NetFlow::FlowSamplerMaps::FlowSamplerMap::FlowSamplerMap()
    :
    sampler_map_name{YType::str, "sampler-map-name"}
        ,
    sampling_modes(std::make_shared<NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes>())
{
    sampling_modes->parent = this;

    yang_name = "flow-sampler-map"; yang_parent_name = "flow-sampler-maps"; is_top_level_class = false; has_list_ancestor = false; 
}

NetFlow::FlowSamplerMaps::FlowSamplerMap::~FlowSamplerMap()
{
}

bool NetFlow::FlowSamplerMaps::FlowSamplerMap::has_data() const
{
    if (is_presence_container) return true;
    return sampler_map_name.is_set
	|| (sampling_modes !=  nullptr && sampling_modes->has_data());
}

bool NetFlow::FlowSamplerMaps::FlowSamplerMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sampler_map_name.yfilter)
	|| (sampling_modes !=  nullptr && sampling_modes->has_operation());
}

std::string NetFlow::FlowSamplerMaps::FlowSamplerMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-traffmon-netflow-cfg:net-flow/flow-sampler-maps/" << get_segment_path();
    return path_buffer.str();
}

std::string NetFlow::FlowSamplerMaps::FlowSamplerMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-sampler-map";
    ADD_KEY_TOKEN(sampler_map_name, "sampler-map-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetFlow::FlowSamplerMaps::FlowSamplerMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sampler_map_name.is_set || is_set(sampler_map_name.yfilter)) leaf_name_data.push_back(sampler_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetFlow::FlowSamplerMaps::FlowSamplerMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sampling-modes")
    {
        if(sampling_modes == nullptr)
        {
            sampling_modes = std::make_shared<NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes>();
        }
        return sampling_modes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetFlow::FlowSamplerMaps::FlowSamplerMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sampling_modes != nullptr)
    {
        _children["sampling-modes"] = sampling_modes;
    }

    return _children;
}

void NetFlow::FlowSamplerMaps::FlowSamplerMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sampler-map-name")
    {
        sampler_map_name = value;
        sampler_map_name.value_namespace = name_space;
        sampler_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void NetFlow::FlowSamplerMaps::FlowSamplerMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sampler-map-name")
    {
        sampler_map_name.yfilter = yfilter;
    }
}

bool NetFlow::FlowSamplerMaps::FlowSamplerMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sampling-modes" || name == "sampler-map-name")
        return true;
    return false;
}

NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes::SamplingModes()
    :
    sampling_mode(this, {"mode"})
{

    yang_name = "sampling-modes"; yang_parent_name = "flow-sampler-map"; is_top_level_class = false; has_list_ancestor = true; 
}

NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes::~SamplingModes()
{
}

bool NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sampling_mode.len(); index++)
    {
        if(sampling_mode[index]->has_data())
            return true;
    }
    return false;
}

bool NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes::has_operation() const
{
    for (std::size_t index=0; index<sampling_mode.len(); index++)
    {
        if(sampling_mode[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sampling-modes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sampling-mode")
    {
        auto ent_ = std::make_shared<NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes::SamplingMode>();
        ent_->parent = this;
        sampling_mode.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sampling_mode.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sampling-mode")
        return true;
    return false;
}

NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes::SamplingMode::SamplingMode()
    :
    mode{YType::enumeration, "mode"},
    sample_number{YType::uint32, "sample-number"},
    interval{YType::uint32, "interval"}
{

    yang_name = "sampling-mode"; yang_parent_name = "sampling-modes"; is_top_level_class = false; has_list_ancestor = true; 
}

NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes::SamplingMode::~SamplingMode()
{
}

bool NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes::SamplingMode::has_data() const
{
    if (is_presence_container) return true;
    return mode.is_set
	|| sample_number.is_set
	|| interval.is_set;
}

bool NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes::SamplingMode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(sample_number.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes::SamplingMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sampling-mode";
    ADD_KEY_TOKEN(mode, "mode");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes::SamplingMode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (sample_number.is_set || is_set(sample_number.yfilter)) leaf_name_data.push_back(sample_number.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes::SamplingMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes::SamplingMode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes::SamplingMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-number")
    {
        sample_number = value;
        sample_number.value_namespace = name_space;
        sample_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes::SamplingMode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "sample-number")
    {
        sample_number.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes::SamplingMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "sample-number" || name == "interval")
        return true;
    return false;
}

NetFlow::FlowMonitorMapTable::FlowMonitorMapTable()
    :
    flow_monitor_map(this, {"monitor_map_name"})
{

    yang_name = "flow-monitor-map-table"; yang_parent_name = "net-flow"; is_top_level_class = false; has_list_ancestor = false; 
}

NetFlow::FlowMonitorMapTable::~FlowMonitorMapTable()
{
}

bool NetFlow::FlowMonitorMapTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<flow_monitor_map.len(); index++)
    {
        if(flow_monitor_map[index]->has_data())
            return true;
    }
    return false;
}

bool NetFlow::FlowMonitorMapTable::has_operation() const
{
    for (std::size_t index=0; index<flow_monitor_map.len(); index++)
    {
        if(flow_monitor_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetFlow::FlowMonitorMapTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-traffmon-netflow-cfg:net-flow/" << get_segment_path();
    return path_buffer.str();
}

std::string NetFlow::FlowMonitorMapTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-monitor-map-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetFlow::FlowMonitorMapTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetFlow::FlowMonitorMapTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-monitor-map")
    {
        auto ent_ = std::make_shared<NetFlow::FlowMonitorMapTable::FlowMonitorMap>();
        ent_->parent = this;
        flow_monitor_map.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetFlow::FlowMonitorMapTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : flow_monitor_map.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetFlow::FlowMonitorMapTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetFlow::FlowMonitorMapTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetFlow::FlowMonitorMapTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-monitor-map")
        return true;
    return false;
}

NetFlow::FlowMonitorMapTable::FlowMonitorMap::FlowMonitorMap()
    :
    monitor_map_name{YType::str, "monitor-map-name"},
    cache_update_aging_timeout{YType::uint32, "cache-update-aging-timeout"},
    cache_entries{YType::uint32, "cache-entries"},
    cache_inactive_aging_timeout{YType::uint32, "cache-inactive-aging-timeout"},
    cache_active_aging_timeout{YType::uint32, "cache-active-aging-timeout"},
    cache_timeout_rate_limit{YType::uint32, "cache-timeout-rate-limit"},
    cache_aging_mode{YType::enumeration, "cache-aging-mode"}
        ,
    option(std::make_shared<NetFlow::FlowMonitorMapTable::FlowMonitorMap::Option>())
    , exporters(std::make_shared<NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters>())
    , record(nullptr) // presence node
{
    option->parent = this;
    exporters->parent = this;

    yang_name = "flow-monitor-map"; yang_parent_name = "flow-monitor-map-table"; is_top_level_class = false; has_list_ancestor = false; 
}

NetFlow::FlowMonitorMapTable::FlowMonitorMap::~FlowMonitorMap()
{
}

bool NetFlow::FlowMonitorMapTable::FlowMonitorMap::has_data() const
{
    if (is_presence_container) return true;
    return monitor_map_name.is_set
	|| cache_update_aging_timeout.is_set
	|| cache_entries.is_set
	|| cache_inactive_aging_timeout.is_set
	|| cache_active_aging_timeout.is_set
	|| cache_timeout_rate_limit.is_set
	|| cache_aging_mode.is_set
	|| (option !=  nullptr && option->has_data())
	|| (exporters !=  nullptr && exporters->has_data())
	|| (record !=  nullptr && record->has_data());
}

bool NetFlow::FlowMonitorMapTable::FlowMonitorMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(monitor_map_name.yfilter)
	|| ydk::is_set(cache_update_aging_timeout.yfilter)
	|| ydk::is_set(cache_entries.yfilter)
	|| ydk::is_set(cache_inactive_aging_timeout.yfilter)
	|| ydk::is_set(cache_active_aging_timeout.yfilter)
	|| ydk::is_set(cache_timeout_rate_limit.yfilter)
	|| ydk::is_set(cache_aging_mode.yfilter)
	|| (option !=  nullptr && option->has_operation())
	|| (exporters !=  nullptr && exporters->has_operation())
	|| (record !=  nullptr && record->has_operation());
}

std::string NetFlow::FlowMonitorMapTable::FlowMonitorMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-traffmon-netflow-cfg:net-flow/flow-monitor-map-table/" << get_segment_path();
    return path_buffer.str();
}

std::string NetFlow::FlowMonitorMapTable::FlowMonitorMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-monitor-map";
    ADD_KEY_TOKEN(monitor_map_name, "monitor-map-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetFlow::FlowMonitorMapTable::FlowMonitorMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor_map_name.is_set || is_set(monitor_map_name.yfilter)) leaf_name_data.push_back(monitor_map_name.get_name_leafdata());
    if (cache_update_aging_timeout.is_set || is_set(cache_update_aging_timeout.yfilter)) leaf_name_data.push_back(cache_update_aging_timeout.get_name_leafdata());
    if (cache_entries.is_set || is_set(cache_entries.yfilter)) leaf_name_data.push_back(cache_entries.get_name_leafdata());
    if (cache_inactive_aging_timeout.is_set || is_set(cache_inactive_aging_timeout.yfilter)) leaf_name_data.push_back(cache_inactive_aging_timeout.get_name_leafdata());
    if (cache_active_aging_timeout.is_set || is_set(cache_active_aging_timeout.yfilter)) leaf_name_data.push_back(cache_active_aging_timeout.get_name_leafdata());
    if (cache_timeout_rate_limit.is_set || is_set(cache_timeout_rate_limit.yfilter)) leaf_name_data.push_back(cache_timeout_rate_limit.get_name_leafdata());
    if (cache_aging_mode.is_set || is_set(cache_aging_mode.yfilter)) leaf_name_data.push_back(cache_aging_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetFlow::FlowMonitorMapTable::FlowMonitorMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<NetFlow::FlowMonitorMapTable::FlowMonitorMap::Option>();
        }
        return option;
    }

    if(child_yang_name == "exporters")
    {
        if(exporters == nullptr)
        {
            exporters = std::make_shared<NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters>();
        }
        return exporters;
    }

    if(child_yang_name == "record")
    {
        if(record == nullptr)
        {
            record = std::make_shared<NetFlow::FlowMonitorMapTable::FlowMonitorMap::Record>();
        }
        return record;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetFlow::FlowMonitorMapTable::FlowMonitorMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(option != nullptr)
    {
        _children["option"] = option;
    }

    if(exporters != nullptr)
    {
        _children["exporters"] = exporters;
    }

    if(record != nullptr)
    {
        _children["record"] = record;
    }

    return _children;
}

void NetFlow::FlowMonitorMapTable::FlowMonitorMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "monitor-map-name")
    {
        monitor_map_name = value;
        monitor_map_name.value_namespace = name_space;
        monitor_map_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache-update-aging-timeout")
    {
        cache_update_aging_timeout = value;
        cache_update_aging_timeout.value_namespace = name_space;
        cache_update_aging_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache-entries")
    {
        cache_entries = value;
        cache_entries.value_namespace = name_space;
        cache_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache-inactive-aging-timeout")
    {
        cache_inactive_aging_timeout = value;
        cache_inactive_aging_timeout.value_namespace = name_space;
        cache_inactive_aging_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache-active-aging-timeout")
    {
        cache_active_aging_timeout = value;
        cache_active_aging_timeout.value_namespace = name_space;
        cache_active_aging_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache-timeout-rate-limit")
    {
        cache_timeout_rate_limit = value;
        cache_timeout_rate_limit.value_namespace = name_space;
        cache_timeout_rate_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache-aging-mode")
    {
        cache_aging_mode = value;
        cache_aging_mode.value_namespace = name_space;
        cache_aging_mode.value_namespace_prefix = name_space_prefix;
    }
}

void NetFlow::FlowMonitorMapTable::FlowMonitorMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "monitor-map-name")
    {
        monitor_map_name.yfilter = yfilter;
    }
    if(value_path == "cache-update-aging-timeout")
    {
        cache_update_aging_timeout.yfilter = yfilter;
    }
    if(value_path == "cache-entries")
    {
        cache_entries.yfilter = yfilter;
    }
    if(value_path == "cache-inactive-aging-timeout")
    {
        cache_inactive_aging_timeout.yfilter = yfilter;
    }
    if(value_path == "cache-active-aging-timeout")
    {
        cache_active_aging_timeout.yfilter = yfilter;
    }
    if(value_path == "cache-timeout-rate-limit")
    {
        cache_timeout_rate_limit.yfilter = yfilter;
    }
    if(value_path == "cache-aging-mode")
    {
        cache_aging_mode.yfilter = yfilter;
    }
}

bool NetFlow::FlowMonitorMapTable::FlowMonitorMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option" || name == "exporters" || name == "record" || name == "monitor-map-name" || name == "cache-update-aging-timeout" || name == "cache-entries" || name == "cache-inactive-aging-timeout" || name == "cache-active-aging-timeout" || name == "cache-timeout-rate-limit" || name == "cache-aging-mode")
        return true;
    return false;
}

NetFlow::FlowMonitorMapTable::FlowMonitorMap::Option::Option()
    :
    filtered{YType::empty, "filtered"},
    out_bundle_member{YType::empty, "out-bundle-member"},
    out_phys_int{YType::empty, "out-phys-int"},
    bgp_attr{YType::empty, "bgp-attr"}
{

    yang_name = "option"; yang_parent_name = "flow-monitor-map"; is_top_level_class = false; has_list_ancestor = true; 
}

NetFlow::FlowMonitorMapTable::FlowMonitorMap::Option::~Option()
{
}

bool NetFlow::FlowMonitorMapTable::FlowMonitorMap::Option::has_data() const
{
    if (is_presence_container) return true;
    return filtered.is_set
	|| out_bundle_member.is_set
	|| out_phys_int.is_set
	|| bgp_attr.is_set;
}

bool NetFlow::FlowMonitorMapTable::FlowMonitorMap::Option::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(filtered.yfilter)
	|| ydk::is_set(out_bundle_member.yfilter)
	|| ydk::is_set(out_phys_int.yfilter)
	|| ydk::is_set(bgp_attr.yfilter);
}

std::string NetFlow::FlowMonitorMapTable::FlowMonitorMap::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetFlow::FlowMonitorMapTable::FlowMonitorMap::Option::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filtered.is_set || is_set(filtered.yfilter)) leaf_name_data.push_back(filtered.get_name_leafdata());
    if (out_bundle_member.is_set || is_set(out_bundle_member.yfilter)) leaf_name_data.push_back(out_bundle_member.get_name_leafdata());
    if (out_phys_int.is_set || is_set(out_phys_int.yfilter)) leaf_name_data.push_back(out_phys_int.get_name_leafdata());
    if (bgp_attr.is_set || is_set(bgp_attr.yfilter)) leaf_name_data.push_back(bgp_attr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetFlow::FlowMonitorMapTable::FlowMonitorMap::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetFlow::FlowMonitorMapTable::FlowMonitorMap::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetFlow::FlowMonitorMapTable::FlowMonitorMap::Option::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "filtered")
    {
        filtered = value;
        filtered.value_namespace = name_space;
        filtered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-bundle-member")
    {
        out_bundle_member = value;
        out_bundle_member.value_namespace = name_space;
        out_bundle_member.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-phys-int")
    {
        out_phys_int = value;
        out_phys_int.value_namespace = name_space;
        out_phys_int.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-attr")
    {
        bgp_attr = value;
        bgp_attr.value_namespace = name_space;
        bgp_attr.value_namespace_prefix = name_space_prefix;
    }
}

void NetFlow::FlowMonitorMapTable::FlowMonitorMap::Option::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "filtered")
    {
        filtered.yfilter = yfilter;
    }
    if(value_path == "out-bundle-member")
    {
        out_bundle_member.yfilter = yfilter;
    }
    if(value_path == "out-phys-int")
    {
        out_phys_int.yfilter = yfilter;
    }
    if(value_path == "bgp-attr")
    {
        bgp_attr.yfilter = yfilter;
    }
}

bool NetFlow::FlowMonitorMapTable::FlowMonitorMap::Option::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filtered" || name == "out-bundle-member" || name == "out-phys-int" || name == "bgp-attr")
        return true;
    return false;
}

NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters::Exporters()
    :
    exporter(this, {"exporter_name"})
{

    yang_name = "exporters"; yang_parent_name = "flow-monitor-map"; is_top_level_class = false; has_list_ancestor = true; 
}

NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters::~Exporters()
{
}

bool NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<exporter.len(); index++)
    {
        if(exporter[index]->has_data())
            return true;
    }
    return false;
}

bool NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters::has_operation() const
{
    for (std::size_t index=0; index<exporter.len(); index++)
    {
        if(exporter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exporters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exporter")
    {
        auto ent_ = std::make_shared<NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters::Exporter>();
        ent_->parent = this;
        exporter.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : exporter.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exporter")
        return true;
    return false;
}

NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters::Exporter::Exporter()
    :
    exporter_name{YType::str, "exporter-name"}
{

    yang_name = "exporter"; yang_parent_name = "exporters"; is_top_level_class = false; has_list_ancestor = true; 
}

NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters::Exporter::~Exporter()
{
}

bool NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters::Exporter::has_data() const
{
    if (is_presence_container) return true;
    return exporter_name.is_set;
}

bool NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters::Exporter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(exporter_name.yfilter);
}

std::string NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters::Exporter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exporter";
    ADD_KEY_TOKEN(exporter_name, "exporter-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters::Exporter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exporter_name.is_set || is_set(exporter_name.yfilter)) leaf_name_data.push_back(exporter_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters::Exporter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters::Exporter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters::Exporter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exporter-name")
    {
        exporter_name = value;
        exporter_name.value_namespace = name_space;
        exporter_name.value_namespace_prefix = name_space_prefix;
    }
}

void NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters::Exporter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exporter-name")
    {
        exporter_name.yfilter = yfilter;
    }
}

bool NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters::Exporter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exporter-name")
        return true;
    return false;
}

NetFlow::FlowMonitorMapTable::FlowMonitorMap::Record::Record()
    :
    record_name{YType::str, "record-name"},
    label{YType::uint32, "label"}
{

    yang_name = "record"; yang_parent_name = "flow-monitor-map"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

NetFlow::FlowMonitorMapTable::FlowMonitorMap::Record::~Record()
{
}

bool NetFlow::FlowMonitorMapTable::FlowMonitorMap::Record::has_data() const
{
    if (is_presence_container) return true;
    return record_name.is_set
	|| label.is_set;
}

bool NetFlow::FlowMonitorMapTable::FlowMonitorMap::Record::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(record_name.yfilter)
	|| ydk::is_set(label.yfilter);
}

std::string NetFlow::FlowMonitorMapTable::FlowMonitorMap::Record::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "record";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetFlow::FlowMonitorMapTable::FlowMonitorMap::Record::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (record_name.is_set || is_set(record_name.yfilter)) leaf_name_data.push_back(record_name.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetFlow::FlowMonitorMapTable::FlowMonitorMap::Record::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetFlow::FlowMonitorMapTable::FlowMonitorMap::Record::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetFlow::FlowMonitorMapTable::FlowMonitorMap::Record::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "record-name")
    {
        record_name = value;
        record_name.value_namespace = name_space;
        record_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
}

void NetFlow::FlowMonitorMapTable::FlowMonitorMap::Record::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "record-name")
    {
        record_name.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool NetFlow::FlowMonitorMapTable::FlowMonitorMap::Record::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "record-name" || name == "label")
        return true;
    return false;
}

NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMapPerformanceTable()
    :
    flow_monitor_map(this, {"monitor_map_name"})
{

    yang_name = "flow-monitor-map-performance-table"; yang_parent_name = "net-flow"; is_top_level_class = false; has_list_ancestor = false; 
}

NetFlow::FlowMonitorMapPerformanceTable::~FlowMonitorMapPerformanceTable()
{
}

bool NetFlow::FlowMonitorMapPerformanceTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<flow_monitor_map.len(); index++)
    {
        if(flow_monitor_map[index]->has_data())
            return true;
    }
    return false;
}

bool NetFlow::FlowMonitorMapPerformanceTable::has_operation() const
{
    for (std::size_t index=0; index<flow_monitor_map.len(); index++)
    {
        if(flow_monitor_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetFlow::FlowMonitorMapPerformanceTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-traffmon-netflow-cfg:net-flow/" << get_segment_path();
    return path_buffer.str();
}

std::string NetFlow::FlowMonitorMapPerformanceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-monitor-map-performance-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetFlow::FlowMonitorMapPerformanceTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetFlow::FlowMonitorMapPerformanceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-monitor-map")
    {
        auto ent_ = std::make_shared<NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap>();
        ent_->parent = this;
        flow_monitor_map.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetFlow::FlowMonitorMapPerformanceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : flow_monitor_map.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetFlow::FlowMonitorMapPerformanceTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetFlow::FlowMonitorMapPerformanceTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetFlow::FlowMonitorMapPerformanceTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-monitor-map")
        return true;
    return false;
}

NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::FlowMonitorMap()
    :
    monitor_map_name{YType::str, "monitor-map-name"},
    cache_update_aging_timeout{YType::uint32, "cache-update-aging-timeout"},
    cache_entries{YType::uint32, "cache-entries"},
    cache_inactive_aging_timeout{YType::uint32, "cache-inactive-aging-timeout"},
    cache_active_aging_timeout{YType::uint32, "cache-active-aging-timeout"},
    cache_timeout_rate_limit{YType::uint32, "cache-timeout-rate-limit"},
    cache_aging_mode{YType::enumeration, "cache-aging-mode"}
        ,
    option(std::make_shared<NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Option>())
    , exporters(std::make_shared<NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters>())
    , record(nullptr) // presence node
{
    option->parent = this;
    exporters->parent = this;

    yang_name = "flow-monitor-map"; yang_parent_name = "flow-monitor-map-performance-table"; is_top_level_class = false; has_list_ancestor = false; 
}

NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::~FlowMonitorMap()
{
}

bool NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::has_data() const
{
    if (is_presence_container) return true;
    return monitor_map_name.is_set
	|| cache_update_aging_timeout.is_set
	|| cache_entries.is_set
	|| cache_inactive_aging_timeout.is_set
	|| cache_active_aging_timeout.is_set
	|| cache_timeout_rate_limit.is_set
	|| cache_aging_mode.is_set
	|| (option !=  nullptr && option->has_data())
	|| (exporters !=  nullptr && exporters->has_data())
	|| (record !=  nullptr && record->has_data());
}

bool NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(monitor_map_name.yfilter)
	|| ydk::is_set(cache_update_aging_timeout.yfilter)
	|| ydk::is_set(cache_entries.yfilter)
	|| ydk::is_set(cache_inactive_aging_timeout.yfilter)
	|| ydk::is_set(cache_active_aging_timeout.yfilter)
	|| ydk::is_set(cache_timeout_rate_limit.yfilter)
	|| ydk::is_set(cache_aging_mode.yfilter)
	|| (option !=  nullptr && option->has_operation())
	|| (exporters !=  nullptr && exporters->has_operation())
	|| (record !=  nullptr && record->has_operation());
}

std::string NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-traffmon-netflow-cfg:net-flow/flow-monitor-map-performance-table/" << get_segment_path();
    return path_buffer.str();
}

std::string NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-monitor-map";
    ADD_KEY_TOKEN(monitor_map_name, "monitor-map-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor_map_name.is_set || is_set(monitor_map_name.yfilter)) leaf_name_data.push_back(monitor_map_name.get_name_leafdata());
    if (cache_update_aging_timeout.is_set || is_set(cache_update_aging_timeout.yfilter)) leaf_name_data.push_back(cache_update_aging_timeout.get_name_leafdata());
    if (cache_entries.is_set || is_set(cache_entries.yfilter)) leaf_name_data.push_back(cache_entries.get_name_leafdata());
    if (cache_inactive_aging_timeout.is_set || is_set(cache_inactive_aging_timeout.yfilter)) leaf_name_data.push_back(cache_inactive_aging_timeout.get_name_leafdata());
    if (cache_active_aging_timeout.is_set || is_set(cache_active_aging_timeout.yfilter)) leaf_name_data.push_back(cache_active_aging_timeout.get_name_leafdata());
    if (cache_timeout_rate_limit.is_set || is_set(cache_timeout_rate_limit.yfilter)) leaf_name_data.push_back(cache_timeout_rate_limit.get_name_leafdata());
    if (cache_aging_mode.is_set || is_set(cache_aging_mode.yfilter)) leaf_name_data.push_back(cache_aging_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Option>();
        }
        return option;
    }

    if(child_yang_name == "exporters")
    {
        if(exporters == nullptr)
        {
            exporters = std::make_shared<NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters>();
        }
        return exporters;
    }

    if(child_yang_name == "record")
    {
        if(record == nullptr)
        {
            record = std::make_shared<NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Record>();
        }
        return record;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(option != nullptr)
    {
        _children["option"] = option;
    }

    if(exporters != nullptr)
    {
        _children["exporters"] = exporters;
    }

    if(record != nullptr)
    {
        _children["record"] = record;
    }

    return _children;
}

void NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "monitor-map-name")
    {
        monitor_map_name = value;
        monitor_map_name.value_namespace = name_space;
        monitor_map_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache-update-aging-timeout")
    {
        cache_update_aging_timeout = value;
        cache_update_aging_timeout.value_namespace = name_space;
        cache_update_aging_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache-entries")
    {
        cache_entries = value;
        cache_entries.value_namespace = name_space;
        cache_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache-inactive-aging-timeout")
    {
        cache_inactive_aging_timeout = value;
        cache_inactive_aging_timeout.value_namespace = name_space;
        cache_inactive_aging_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache-active-aging-timeout")
    {
        cache_active_aging_timeout = value;
        cache_active_aging_timeout.value_namespace = name_space;
        cache_active_aging_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache-timeout-rate-limit")
    {
        cache_timeout_rate_limit = value;
        cache_timeout_rate_limit.value_namespace = name_space;
        cache_timeout_rate_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache-aging-mode")
    {
        cache_aging_mode = value;
        cache_aging_mode.value_namespace = name_space;
        cache_aging_mode.value_namespace_prefix = name_space_prefix;
    }
}

void NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "monitor-map-name")
    {
        monitor_map_name.yfilter = yfilter;
    }
    if(value_path == "cache-update-aging-timeout")
    {
        cache_update_aging_timeout.yfilter = yfilter;
    }
    if(value_path == "cache-entries")
    {
        cache_entries.yfilter = yfilter;
    }
    if(value_path == "cache-inactive-aging-timeout")
    {
        cache_inactive_aging_timeout.yfilter = yfilter;
    }
    if(value_path == "cache-active-aging-timeout")
    {
        cache_active_aging_timeout.yfilter = yfilter;
    }
    if(value_path == "cache-timeout-rate-limit")
    {
        cache_timeout_rate_limit.yfilter = yfilter;
    }
    if(value_path == "cache-aging-mode")
    {
        cache_aging_mode.yfilter = yfilter;
    }
}

bool NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option" || name == "exporters" || name == "record" || name == "monitor-map-name" || name == "cache-update-aging-timeout" || name == "cache-entries" || name == "cache-inactive-aging-timeout" || name == "cache-active-aging-timeout" || name == "cache-timeout-rate-limit" || name == "cache-aging-mode")
        return true;
    return false;
}

NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Option::Option()
    :
    filtered{YType::empty, "filtered"},
    out_bundle_member{YType::empty, "out-bundle-member"},
    out_phys_int{YType::empty, "out-phys-int"},
    bgp_attr{YType::empty, "bgp-attr"}
{

    yang_name = "option"; yang_parent_name = "flow-monitor-map"; is_top_level_class = false; has_list_ancestor = true; 
}

NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Option::~Option()
{
}

bool NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Option::has_data() const
{
    if (is_presence_container) return true;
    return filtered.is_set
	|| out_bundle_member.is_set
	|| out_phys_int.is_set
	|| bgp_attr.is_set;
}

bool NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Option::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(filtered.yfilter)
	|| ydk::is_set(out_bundle_member.yfilter)
	|| ydk::is_set(out_phys_int.yfilter)
	|| ydk::is_set(bgp_attr.yfilter);
}

std::string NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Option::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filtered.is_set || is_set(filtered.yfilter)) leaf_name_data.push_back(filtered.get_name_leafdata());
    if (out_bundle_member.is_set || is_set(out_bundle_member.yfilter)) leaf_name_data.push_back(out_bundle_member.get_name_leafdata());
    if (out_phys_int.is_set || is_set(out_phys_int.yfilter)) leaf_name_data.push_back(out_phys_int.get_name_leafdata());
    if (bgp_attr.is_set || is_set(bgp_attr.yfilter)) leaf_name_data.push_back(bgp_attr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Option::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "filtered")
    {
        filtered = value;
        filtered.value_namespace = name_space;
        filtered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-bundle-member")
    {
        out_bundle_member = value;
        out_bundle_member.value_namespace = name_space;
        out_bundle_member.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-phys-int")
    {
        out_phys_int = value;
        out_phys_int.value_namespace = name_space;
        out_phys_int.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-attr")
    {
        bgp_attr = value;
        bgp_attr.value_namespace = name_space;
        bgp_attr.value_namespace_prefix = name_space_prefix;
    }
}

void NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Option::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "filtered")
    {
        filtered.yfilter = yfilter;
    }
    if(value_path == "out-bundle-member")
    {
        out_bundle_member.yfilter = yfilter;
    }
    if(value_path == "out-phys-int")
    {
        out_phys_int.yfilter = yfilter;
    }
    if(value_path == "bgp-attr")
    {
        bgp_attr.yfilter = yfilter;
    }
}

bool NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Option::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filtered" || name == "out-bundle-member" || name == "out-phys-int" || name == "bgp-attr")
        return true;
    return false;
}

NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters::Exporters()
    :
    exporter(this, {"exporter_name"})
{

    yang_name = "exporters"; yang_parent_name = "flow-monitor-map"; is_top_level_class = false; has_list_ancestor = true; 
}

NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters::~Exporters()
{
}

bool NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<exporter.len(); index++)
    {
        if(exporter[index]->has_data())
            return true;
    }
    return false;
}

bool NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters::has_operation() const
{
    for (std::size_t index=0; index<exporter.len(); index++)
    {
        if(exporter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exporters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exporter")
    {
        auto ent_ = std::make_shared<NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters::Exporter>();
        ent_->parent = this;
        exporter.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : exporter.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exporter")
        return true;
    return false;
}

NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters::Exporter::Exporter()
    :
    exporter_name{YType::str, "exporter-name"}
{

    yang_name = "exporter"; yang_parent_name = "exporters"; is_top_level_class = false; has_list_ancestor = true; 
}

NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters::Exporter::~Exporter()
{
}

bool NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters::Exporter::has_data() const
{
    if (is_presence_container) return true;
    return exporter_name.is_set;
}

bool NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters::Exporter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(exporter_name.yfilter);
}

std::string NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters::Exporter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exporter";
    ADD_KEY_TOKEN(exporter_name, "exporter-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters::Exporter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exporter_name.is_set || is_set(exporter_name.yfilter)) leaf_name_data.push_back(exporter_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters::Exporter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters::Exporter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters::Exporter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exporter-name")
    {
        exporter_name = value;
        exporter_name.value_namespace = name_space;
        exporter_name.value_namespace_prefix = name_space_prefix;
    }
}

void NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters::Exporter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exporter-name")
    {
        exporter_name.yfilter = yfilter;
    }
}

bool NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters::Exporter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exporter-name")
        return true;
    return false;
}

NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Record::Record()
    :
    record_name{YType::str, "record-name"},
    label{YType::uint32, "label"}
{

    yang_name = "record"; yang_parent_name = "flow-monitor-map"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Record::~Record()
{
}

bool NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Record::has_data() const
{
    if (is_presence_container) return true;
    return record_name.is_set
	|| label.is_set;
}

bool NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Record::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(record_name.yfilter)
	|| ydk::is_set(label.yfilter);
}

std::string NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Record::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "record";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Record::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (record_name.is_set || is_set(record_name.yfilter)) leaf_name_data.push_back(record_name.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Record::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Record::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Record::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "record-name")
    {
        record_name = value;
        record_name.value_namespace = name_space;
        record_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
}

void NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Record::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "record-name")
    {
        record_name.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Record::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "record-name" || name == "label")
        return true;
    return false;
}

const Enum::YLeaf NfSamplingMode::random {2, "random"};

const Enum::YLeaf NfCacheAgingMode::normal {0, "normal"};
const Enum::YLeaf NfCacheAgingMode::permanent {1, "permanent"};
const Enum::YLeaf NfCacheAgingMode::immediate {2, "immediate"};


}
}

