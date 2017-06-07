
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_traffmon_netflow_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_traffmon_netflow_cfg {

NetFlow::NetFlow()
    :
    flow_exporter_maps(std::make_shared<NetFlow::FlowExporterMaps>())
	,flow_monitor_map_performance_table(std::make_shared<NetFlow::FlowMonitorMapPerformanceTable>())
	,flow_monitor_map_table(std::make_shared<NetFlow::FlowMonitorMapTable>())
	,flow_sampler_maps(std::make_shared<NetFlow::FlowSamplerMaps>())
{
    flow_exporter_maps->parent = this;

    flow_monitor_map_performance_table->parent = this;

    flow_monitor_map_table->parent = this;

    flow_sampler_maps->parent = this;

    yang_name = "net-flow"; yang_parent_name = "Cisco-IOS-XR-traffmon-netflow-cfg";
}

NetFlow::~NetFlow()
{
}

bool NetFlow::has_data() const
{
    return (flow_exporter_maps !=  nullptr && flow_exporter_maps->has_data())
	|| (flow_monitor_map_performance_table !=  nullptr && flow_monitor_map_performance_table->has_data())
	|| (flow_monitor_map_table !=  nullptr && flow_monitor_map_table->has_data())
	|| (flow_sampler_maps !=  nullptr && flow_sampler_maps->has_data());
}

bool NetFlow::has_operation() const
{
    return is_set(operation)
	|| (flow_exporter_maps !=  nullptr && flow_exporter_maps->has_operation())
	|| (flow_monitor_map_performance_table !=  nullptr && flow_monitor_map_performance_table->has_operation())
	|| (flow_monitor_map_table !=  nullptr && flow_monitor_map_table->has_operation())
	|| (flow_sampler_maps !=  nullptr && flow_sampler_maps->has_operation());
}

std::string NetFlow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-traffmon-netflow-cfg:net-flow";

    return path_buffer.str();

}

const EntityPath NetFlow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetFlow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-exporter-maps")
    {
        if(flow_exporter_maps == nullptr)
        {
            flow_exporter_maps = std::make_shared<NetFlow::FlowExporterMaps>();
        }
        return flow_exporter_maps;
    }

    if(child_yang_name == "flow-monitor-map-performance-table")
    {
        if(flow_monitor_map_performance_table == nullptr)
        {
            flow_monitor_map_performance_table = std::make_shared<NetFlow::FlowMonitorMapPerformanceTable>();
        }
        return flow_monitor_map_performance_table;
    }

    if(child_yang_name == "flow-monitor-map-table")
    {
        if(flow_monitor_map_table == nullptr)
        {
            flow_monitor_map_table = std::make_shared<NetFlow::FlowMonitorMapTable>();
        }
        return flow_monitor_map_table;
    }

    if(child_yang_name == "flow-sampler-maps")
    {
        if(flow_sampler_maps == nullptr)
        {
            flow_sampler_maps = std::make_shared<NetFlow::FlowSamplerMaps>();
        }
        return flow_sampler_maps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetFlow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flow_exporter_maps != nullptr)
    {
        children["flow-exporter-maps"] = flow_exporter_maps;
    }

    if(flow_monitor_map_performance_table != nullptr)
    {
        children["flow-monitor-map-performance-table"] = flow_monitor_map_performance_table;
    }

    if(flow_monitor_map_table != nullptr)
    {
        children["flow-monitor-map-table"] = flow_monitor_map_table;
    }

    if(flow_sampler_maps != nullptr)
    {
        children["flow-sampler-maps"] = flow_sampler_maps;
    }

    return children;
}

void NetFlow::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> NetFlow::clone_ptr() const
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

NetFlow::FlowExporterMaps::FlowExporterMaps()
{
    yang_name = "flow-exporter-maps"; yang_parent_name = "net-flow";
}

NetFlow::FlowExporterMaps::~FlowExporterMaps()
{
}

bool NetFlow::FlowExporterMaps::has_data() const
{
    for (std::size_t index=0; index<flow_exporter_map.size(); index++)
    {
        if(flow_exporter_map[index]->has_data())
            return true;
    }
    return false;
}

bool NetFlow::FlowExporterMaps::has_operation() const
{
    for (std::size_t index=0; index<flow_exporter_map.size(); index++)
    {
        if(flow_exporter_map[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string NetFlow::FlowExporterMaps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-exporter-maps";

    return path_buffer.str();

}

const EntityPath NetFlow::FlowExporterMaps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-traffmon-netflow-cfg:net-flow/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetFlow::FlowExporterMaps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-exporter-map")
    {
        for(auto const & c : flow_exporter_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NetFlow::FlowExporterMaps::FlowExporterMap>();
        c->parent = this;
        flow_exporter_map.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetFlow::FlowExporterMaps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : flow_exporter_map)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NetFlow::FlowExporterMaps::set_value(const std::string & value_path, std::string value)
{
}

NetFlow::FlowExporterMaps::FlowExporterMap::FlowExporterMap()
    :
    exporter_map_name{YType::str, "exporter-map-name"},
    dscp{YType::uint32, "dscp"},
    packet_length{YType::uint32, "packet-length"},
    source_interface{YType::str, "source-interface"}
    	,
    destination(std::make_shared<NetFlow::FlowExporterMaps::FlowExporterMap::Destination>())
	,udp(std::make_shared<NetFlow::FlowExporterMaps::FlowExporterMap::Udp>())
	,versions(std::make_shared<NetFlow::FlowExporterMaps::FlowExporterMap::Versions>())
{
    destination->parent = this;

    udp->parent = this;

    versions->parent = this;

    yang_name = "flow-exporter-map"; yang_parent_name = "flow-exporter-maps";
}

NetFlow::FlowExporterMaps::FlowExporterMap::~FlowExporterMap()
{
}

bool NetFlow::FlowExporterMaps::FlowExporterMap::has_data() const
{
    return exporter_map_name.is_set
	|| dscp.is_set
	|| packet_length.is_set
	|| source_interface.is_set
	|| (destination !=  nullptr && destination->has_data())
	|| (udp !=  nullptr && udp->has_data())
	|| (versions !=  nullptr && versions->has_data());
}

bool NetFlow::FlowExporterMaps::FlowExporterMap::has_operation() const
{
    return is_set(operation)
	|| is_set(exporter_map_name.operation)
	|| is_set(dscp.operation)
	|| is_set(packet_length.operation)
	|| is_set(source_interface.operation)
	|| (destination !=  nullptr && destination->has_operation())
	|| (udp !=  nullptr && udp->has_operation())
	|| (versions !=  nullptr && versions->has_operation());
}

std::string NetFlow::FlowExporterMaps::FlowExporterMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-exporter-map" <<"[exporter-map-name='" <<exporter_map_name <<"']";

    return path_buffer.str();

}

const EntityPath NetFlow::FlowExporterMaps::FlowExporterMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-traffmon-netflow-cfg:net-flow/flow-exporter-maps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exporter_map_name.is_set || is_set(exporter_map_name.operation)) leaf_name_data.push_back(exporter_map_name.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.operation)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (packet_length.is_set || is_set(packet_length.operation)) leaf_name_data.push_back(packet_length.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.operation)) leaf_name_data.push_back(source_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetFlow::FlowExporterMaps::FlowExporterMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<NetFlow::FlowExporterMaps::FlowExporterMap::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<NetFlow::FlowExporterMaps::FlowExporterMap::Udp>();
        }
        return udp;
    }

    if(child_yang_name == "versions")
    {
        if(versions == nullptr)
        {
            versions = std::make_shared<NetFlow::FlowExporterMaps::FlowExporterMap::Versions>();
        }
        return versions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetFlow::FlowExporterMaps::FlowExporterMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(destination != nullptr)
    {
        children["destination"] = destination;
    }

    if(udp != nullptr)
    {
        children["udp"] = udp;
    }

    if(versions != nullptr)
    {
        children["versions"] = versions;
    }

    return children;
}

void NetFlow::FlowExporterMaps::FlowExporterMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "exporter-map-name")
    {
        exporter_map_name = value;
    }
    if(value_path == "dscp")
    {
        dscp = value;
    }
    if(value_path == "packet-length")
    {
        packet_length = value;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
    }
}

NetFlow::FlowExporterMaps::FlowExporterMap::Udp::Udp()
    :
    destination_port{YType::uint32, "destination-port"}
{
    yang_name = "udp"; yang_parent_name = "flow-exporter-map";
}

NetFlow::FlowExporterMaps::FlowExporterMap::Udp::~Udp()
{
}

bool NetFlow::FlowExporterMaps::FlowExporterMap::Udp::has_data() const
{
    return destination_port.is_set;
}

bool NetFlow::FlowExporterMaps::FlowExporterMap::Udp::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_port.operation);
}

std::string NetFlow::FlowExporterMaps::FlowExporterMap::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";

    return path_buffer.str();

}

const EntityPath NetFlow::FlowExporterMaps::FlowExporterMap::Udp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Udp' in Cisco_IOS_XR_traffmon_netflow_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_port.is_set || is_set(destination_port.operation)) leaf_name_data.push_back(destination_port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetFlow::FlowExporterMaps::FlowExporterMap::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetFlow::FlowExporterMaps::FlowExporterMap::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NetFlow::FlowExporterMaps::FlowExporterMap::Udp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-port")
    {
        destination_port = value;
    }
}

NetFlow::FlowExporterMaps::FlowExporterMap::Versions::Versions()
{
    yang_name = "versions"; yang_parent_name = "flow-exporter-map";
}

NetFlow::FlowExporterMaps::FlowExporterMap::Versions::~Versions()
{
}

bool NetFlow::FlowExporterMaps::FlowExporterMap::Versions::has_data() const
{
    for (std::size_t index=0; index<version.size(); index++)
    {
        if(version[index]->has_data())
            return true;
    }
    return false;
}

bool NetFlow::FlowExporterMaps::FlowExporterMap::Versions::has_operation() const
{
    for (std::size_t index=0; index<version.size(); index++)
    {
        if(version[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string NetFlow::FlowExporterMaps::FlowExporterMap::Versions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "versions";

    return path_buffer.str();

}

const EntityPath NetFlow::FlowExporterMaps::FlowExporterMap::Versions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Versions' in Cisco_IOS_XR_traffmon_netflow_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetFlow::FlowExporterMaps::FlowExporterMap::Versions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "version")
    {
        for(auto const & c : version)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NetFlow::FlowExporterMaps::FlowExporterMap::Versions::Version>();
        c->parent = this;
        version.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetFlow::FlowExporterMaps::FlowExporterMap::Versions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : version)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NetFlow::FlowExporterMaps::FlowExporterMap::Versions::set_value(const std::string & value_path, std::string value)
{
}

NetFlow::FlowExporterMaps::FlowExporterMap::Versions::Version::Version()
    :
    version_number{YType::uint32, "version-number"},
    common_template_timeout{YType::uint32, "common-template-timeout"},
    data_template_timeout{YType::uint32, "data-template-timeout"},
    options_template_timeout{YType::uint32, "options-template-timeout"}
    	,
    options(std::make_shared<NetFlow::FlowExporterMaps::FlowExporterMap::Versions::Version::Options>())
{
    options->parent = this;

    yang_name = "version"; yang_parent_name = "versions";
}

NetFlow::FlowExporterMaps::FlowExporterMap::Versions::Version::~Version()
{
}

bool NetFlow::FlowExporterMaps::FlowExporterMap::Versions::Version::has_data() const
{
    return version_number.is_set
	|| common_template_timeout.is_set
	|| data_template_timeout.is_set
	|| options_template_timeout.is_set
	|| (options !=  nullptr && options->has_data());
}

bool NetFlow::FlowExporterMaps::FlowExporterMap::Versions::Version::has_operation() const
{
    return is_set(operation)
	|| is_set(version_number.operation)
	|| is_set(common_template_timeout.operation)
	|| is_set(data_template_timeout.operation)
	|| is_set(options_template_timeout.operation)
	|| (options !=  nullptr && options->has_operation());
}

std::string NetFlow::FlowExporterMaps::FlowExporterMap::Versions::Version::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version" <<"[version-number='" <<version_number <<"']";

    return path_buffer.str();

}

const EntityPath NetFlow::FlowExporterMaps::FlowExporterMap::Versions::Version::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Version' in Cisco_IOS_XR_traffmon_netflow_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version_number.is_set || is_set(version_number.operation)) leaf_name_data.push_back(version_number.get_name_leafdata());
    if (common_template_timeout.is_set || is_set(common_template_timeout.operation)) leaf_name_data.push_back(common_template_timeout.get_name_leafdata());
    if (data_template_timeout.is_set || is_set(data_template_timeout.operation)) leaf_name_data.push_back(data_template_timeout.get_name_leafdata());
    if (options_template_timeout.is_set || is_set(options_template_timeout.operation)) leaf_name_data.push_back(options_template_timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetFlow::FlowExporterMaps::FlowExporterMap::Versions::Version::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "options")
    {
        if(options == nullptr)
        {
            options = std::make_shared<NetFlow::FlowExporterMaps::FlowExporterMap::Versions::Version::Options>();
        }
        return options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetFlow::FlowExporterMaps::FlowExporterMap::Versions::Version::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(options != nullptr)
    {
        children["options"] = options;
    }

    return children;
}

void NetFlow::FlowExporterMaps::FlowExporterMap::Versions::Version::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "version-number")
    {
        version_number = value;
    }
    if(value_path == "common-template-timeout")
    {
        common_template_timeout = value;
    }
    if(value_path == "data-template-timeout")
    {
        data_template_timeout = value;
    }
    if(value_path == "options-template-timeout")
    {
        options_template_timeout = value;
    }
}

NetFlow::FlowExporterMaps::FlowExporterMap::Versions::Version::Options::Options()
    :
    interface_table_export_timeout{YType::uint32, "interface-table-export-timeout"},
    sampler_table_export_timeout{YType::uint32, "sampler-table-export-timeout"},
    vrf_table_export_timeout{YType::uint32, "vrf-table-export-timeout"}
{
    yang_name = "options"; yang_parent_name = "version";
}

NetFlow::FlowExporterMaps::FlowExporterMap::Versions::Version::Options::~Options()
{
}

bool NetFlow::FlowExporterMaps::FlowExporterMap::Versions::Version::Options::has_data() const
{
    return interface_table_export_timeout.is_set
	|| sampler_table_export_timeout.is_set
	|| vrf_table_export_timeout.is_set;
}

bool NetFlow::FlowExporterMaps::FlowExporterMap::Versions::Version::Options::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_table_export_timeout.operation)
	|| is_set(sampler_table_export_timeout.operation)
	|| is_set(vrf_table_export_timeout.operation);
}

std::string NetFlow::FlowExporterMaps::FlowExporterMap::Versions::Version::Options::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "options";

    return path_buffer.str();

}

const EntityPath NetFlow::FlowExporterMaps::FlowExporterMap::Versions::Version::Options::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Options' in Cisco_IOS_XR_traffmon_netflow_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_table_export_timeout.is_set || is_set(interface_table_export_timeout.operation)) leaf_name_data.push_back(interface_table_export_timeout.get_name_leafdata());
    if (sampler_table_export_timeout.is_set || is_set(sampler_table_export_timeout.operation)) leaf_name_data.push_back(sampler_table_export_timeout.get_name_leafdata());
    if (vrf_table_export_timeout.is_set || is_set(vrf_table_export_timeout.operation)) leaf_name_data.push_back(vrf_table_export_timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetFlow::FlowExporterMaps::FlowExporterMap::Versions::Version::Options::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetFlow::FlowExporterMaps::FlowExporterMap::Versions::Version::Options::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NetFlow::FlowExporterMaps::FlowExporterMap::Versions::Version::Options::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-table-export-timeout")
    {
        interface_table_export_timeout = value;
    }
    if(value_path == "sampler-table-export-timeout")
    {
        sampler_table_export_timeout = value;
    }
    if(value_path == "vrf-table-export-timeout")
    {
        vrf_table_export_timeout = value;
    }
}

NetFlow::FlowExporterMaps::FlowExporterMap::Destination::Destination()
    :
    ip_address{YType::str, "ip-address"},
    ipv6_address{YType::str, "ipv6-address"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "destination"; yang_parent_name = "flow-exporter-map";
}

NetFlow::FlowExporterMaps::FlowExporterMap::Destination::~Destination()
{
}

bool NetFlow::FlowExporterMaps::FlowExporterMap::Destination::has_data() const
{
    return ip_address.is_set
	|| ipv6_address.is_set
	|| vrf_name.is_set;
}

bool NetFlow::FlowExporterMaps::FlowExporterMap::Destination::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_address.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(vrf_name.operation);
}

std::string NetFlow::FlowExporterMaps::FlowExporterMap::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";

    return path_buffer.str();

}

const EntityPath NetFlow::FlowExporterMaps::FlowExporterMap::Destination::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Destination' in Cisco_IOS_XR_traffmon_netflow_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetFlow::FlowExporterMaps::FlowExporterMap::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetFlow::FlowExporterMaps::FlowExporterMap::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NetFlow::FlowExporterMaps::FlowExporterMap::Destination::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

NetFlow::FlowSamplerMaps::FlowSamplerMaps()
{
    yang_name = "flow-sampler-maps"; yang_parent_name = "net-flow";
}

NetFlow::FlowSamplerMaps::~FlowSamplerMaps()
{
}

bool NetFlow::FlowSamplerMaps::has_data() const
{
    for (std::size_t index=0; index<flow_sampler_map.size(); index++)
    {
        if(flow_sampler_map[index]->has_data())
            return true;
    }
    return false;
}

bool NetFlow::FlowSamplerMaps::has_operation() const
{
    for (std::size_t index=0; index<flow_sampler_map.size(); index++)
    {
        if(flow_sampler_map[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string NetFlow::FlowSamplerMaps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-sampler-maps";

    return path_buffer.str();

}

const EntityPath NetFlow::FlowSamplerMaps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-traffmon-netflow-cfg:net-flow/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetFlow::FlowSamplerMaps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-sampler-map")
    {
        for(auto const & c : flow_sampler_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NetFlow::FlowSamplerMaps::FlowSamplerMap>();
        c->parent = this;
        flow_sampler_map.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetFlow::FlowSamplerMaps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : flow_sampler_map)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NetFlow::FlowSamplerMaps::set_value(const std::string & value_path, std::string value)
{
}

NetFlow::FlowSamplerMaps::FlowSamplerMap::FlowSamplerMap()
    :
    sampler_map_name{YType::str, "sampler-map-name"}
    	,
    sampling_modes(std::make_shared<NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes>())
{
    sampling_modes->parent = this;

    yang_name = "flow-sampler-map"; yang_parent_name = "flow-sampler-maps";
}

NetFlow::FlowSamplerMaps::FlowSamplerMap::~FlowSamplerMap()
{
}

bool NetFlow::FlowSamplerMaps::FlowSamplerMap::has_data() const
{
    return sampler_map_name.is_set
	|| (sampling_modes !=  nullptr && sampling_modes->has_data());
}

bool NetFlow::FlowSamplerMaps::FlowSamplerMap::has_operation() const
{
    return is_set(operation)
	|| is_set(sampler_map_name.operation)
	|| (sampling_modes !=  nullptr && sampling_modes->has_operation());
}

std::string NetFlow::FlowSamplerMaps::FlowSamplerMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-sampler-map" <<"[sampler-map-name='" <<sampler_map_name <<"']";

    return path_buffer.str();

}

const EntityPath NetFlow::FlowSamplerMaps::FlowSamplerMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-traffmon-netflow-cfg:net-flow/flow-sampler-maps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sampler_map_name.is_set || is_set(sampler_map_name.operation)) leaf_name_data.push_back(sampler_map_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetFlow::FlowSamplerMaps::FlowSamplerMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> NetFlow::FlowSamplerMaps::FlowSamplerMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sampling_modes != nullptr)
    {
        children["sampling-modes"] = sampling_modes;
    }

    return children;
}

void NetFlow::FlowSamplerMaps::FlowSamplerMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sampler-map-name")
    {
        sampler_map_name = value;
    }
}

NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes::SamplingModes()
{
    yang_name = "sampling-modes"; yang_parent_name = "flow-sampler-map";
}

NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes::~SamplingModes()
{
}

bool NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes::has_data() const
{
    for (std::size_t index=0; index<sampling_mode.size(); index++)
    {
        if(sampling_mode[index]->has_data())
            return true;
    }
    return false;
}

bool NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes::has_operation() const
{
    for (std::size_t index=0; index<sampling_mode.size(); index++)
    {
        if(sampling_mode[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sampling-modes";

    return path_buffer.str();

}

const EntityPath NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SamplingModes' in Cisco_IOS_XR_traffmon_netflow_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sampling-mode")
    {
        for(auto const & c : sampling_mode)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes::SamplingMode>();
        c->parent = this;
        sampling_mode.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sampling_mode)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes::set_value(const std::string & value_path, std::string value)
{
}

NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes::SamplingMode::SamplingMode()
    :
    mode{YType::enumeration, "mode"},
    interval{YType::uint32, "interval"},
    sample_number{YType::uint32, "sample-number"}
{
    yang_name = "sampling-mode"; yang_parent_name = "sampling-modes";
}

NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes::SamplingMode::~SamplingMode()
{
}

bool NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes::SamplingMode::has_data() const
{
    return mode.is_set
	|| interval.is_set
	|| sample_number.is_set;
}

bool NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes::SamplingMode::has_operation() const
{
    return is_set(operation)
	|| is_set(mode.operation)
	|| is_set(interval.operation)
	|| is_set(sample_number.operation);
}

std::string NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes::SamplingMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sampling-mode" <<"[mode='" <<mode <<"']";

    return path_buffer.str();

}

const EntityPath NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes::SamplingMode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SamplingMode' in Cisco_IOS_XR_traffmon_netflow_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (sample_number.is_set || is_set(sample_number.operation)) leaf_name_data.push_back(sample_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes::SamplingMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes::SamplingMode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes::SamplingMode::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mode")
    {
        mode = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "sample-number")
    {
        sample_number = value;
    }
}

NetFlow::FlowMonitorMapTable::FlowMonitorMapTable()
{
    yang_name = "flow-monitor-map-table"; yang_parent_name = "net-flow";
}

NetFlow::FlowMonitorMapTable::~FlowMonitorMapTable()
{
}

bool NetFlow::FlowMonitorMapTable::has_data() const
{
    for (std::size_t index=0; index<flow_monitor_map.size(); index++)
    {
        if(flow_monitor_map[index]->has_data())
            return true;
    }
    return false;
}

bool NetFlow::FlowMonitorMapTable::has_operation() const
{
    for (std::size_t index=0; index<flow_monitor_map.size(); index++)
    {
        if(flow_monitor_map[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string NetFlow::FlowMonitorMapTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-monitor-map-table";

    return path_buffer.str();

}

const EntityPath NetFlow::FlowMonitorMapTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-traffmon-netflow-cfg:net-flow/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetFlow::FlowMonitorMapTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-monitor-map")
    {
        for(auto const & c : flow_monitor_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NetFlow::FlowMonitorMapTable::FlowMonitorMap>();
        c->parent = this;
        flow_monitor_map.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetFlow::FlowMonitorMapTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : flow_monitor_map)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NetFlow::FlowMonitorMapTable::set_value(const std::string & value_path, std::string value)
{
}

NetFlow::FlowMonitorMapTable::FlowMonitorMap::FlowMonitorMap()
    :
    monitor_map_name{YType::str, "monitor-map-name"},
    cache_active_aging_timeout{YType::uint32, "cache-active-aging-timeout"},
    cache_aging_mode{YType::enumeration, "cache-aging-mode"},
    cache_entries{YType::uint32, "cache-entries"},
    cache_inactive_aging_timeout{YType::uint32, "cache-inactive-aging-timeout"},
    cache_timeout_rate_limit{YType::uint32, "cache-timeout-rate-limit"},
    cache_update_aging_timeout{YType::uint32, "cache-update-aging-timeout"}
    	,
    exporters(std::make_shared<NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters>())
	,option(std::make_shared<NetFlow::FlowMonitorMapTable::FlowMonitorMap::Option>())
	,record(nullptr) // presence node
{
    exporters->parent = this;

    option->parent = this;

    yang_name = "flow-monitor-map"; yang_parent_name = "flow-monitor-map-table";
}

NetFlow::FlowMonitorMapTable::FlowMonitorMap::~FlowMonitorMap()
{
}

bool NetFlow::FlowMonitorMapTable::FlowMonitorMap::has_data() const
{
    return monitor_map_name.is_set
	|| cache_active_aging_timeout.is_set
	|| cache_aging_mode.is_set
	|| cache_entries.is_set
	|| cache_inactive_aging_timeout.is_set
	|| cache_timeout_rate_limit.is_set
	|| cache_update_aging_timeout.is_set
	|| (exporters !=  nullptr && exporters->has_data())
	|| (option !=  nullptr && option->has_data())
	|| (record !=  nullptr && record->has_data());
}

bool NetFlow::FlowMonitorMapTable::FlowMonitorMap::has_operation() const
{
    return is_set(operation)
	|| is_set(monitor_map_name.operation)
	|| is_set(cache_active_aging_timeout.operation)
	|| is_set(cache_aging_mode.operation)
	|| is_set(cache_entries.operation)
	|| is_set(cache_inactive_aging_timeout.operation)
	|| is_set(cache_timeout_rate_limit.operation)
	|| is_set(cache_update_aging_timeout.operation)
	|| (exporters !=  nullptr && exporters->has_operation())
	|| (option !=  nullptr && option->has_operation())
	|| (record !=  nullptr && record->has_operation());
}

std::string NetFlow::FlowMonitorMapTable::FlowMonitorMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-monitor-map" <<"[monitor-map-name='" <<monitor_map_name <<"']";

    return path_buffer.str();

}

const EntityPath NetFlow::FlowMonitorMapTable::FlowMonitorMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-traffmon-netflow-cfg:net-flow/flow-monitor-map-table/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor_map_name.is_set || is_set(monitor_map_name.operation)) leaf_name_data.push_back(monitor_map_name.get_name_leafdata());
    if (cache_active_aging_timeout.is_set || is_set(cache_active_aging_timeout.operation)) leaf_name_data.push_back(cache_active_aging_timeout.get_name_leafdata());
    if (cache_aging_mode.is_set || is_set(cache_aging_mode.operation)) leaf_name_data.push_back(cache_aging_mode.get_name_leafdata());
    if (cache_entries.is_set || is_set(cache_entries.operation)) leaf_name_data.push_back(cache_entries.get_name_leafdata());
    if (cache_inactive_aging_timeout.is_set || is_set(cache_inactive_aging_timeout.operation)) leaf_name_data.push_back(cache_inactive_aging_timeout.get_name_leafdata());
    if (cache_timeout_rate_limit.is_set || is_set(cache_timeout_rate_limit.operation)) leaf_name_data.push_back(cache_timeout_rate_limit.get_name_leafdata());
    if (cache_update_aging_timeout.is_set || is_set(cache_update_aging_timeout.operation)) leaf_name_data.push_back(cache_update_aging_timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetFlow::FlowMonitorMapTable::FlowMonitorMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exporters")
    {
        if(exporters == nullptr)
        {
            exporters = std::make_shared<NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters>();
        }
        return exporters;
    }

    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<NetFlow::FlowMonitorMapTable::FlowMonitorMap::Option>();
        }
        return option;
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

std::map<std::string, std::shared_ptr<Entity>> NetFlow::FlowMonitorMapTable::FlowMonitorMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exporters != nullptr)
    {
        children["exporters"] = exporters;
    }

    if(option != nullptr)
    {
        children["option"] = option;
    }

    if(record != nullptr)
    {
        children["record"] = record;
    }

    return children;
}

void NetFlow::FlowMonitorMapTable::FlowMonitorMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "monitor-map-name")
    {
        monitor_map_name = value;
    }
    if(value_path == "cache-active-aging-timeout")
    {
        cache_active_aging_timeout = value;
    }
    if(value_path == "cache-aging-mode")
    {
        cache_aging_mode = value;
    }
    if(value_path == "cache-entries")
    {
        cache_entries = value;
    }
    if(value_path == "cache-inactive-aging-timeout")
    {
        cache_inactive_aging_timeout = value;
    }
    if(value_path == "cache-timeout-rate-limit")
    {
        cache_timeout_rate_limit = value;
    }
    if(value_path == "cache-update-aging-timeout")
    {
        cache_update_aging_timeout = value;
    }
}

NetFlow::FlowMonitorMapTable::FlowMonitorMap::Option::Option()
    :
    bgp_attr{YType::empty, "bgp-attr"},
    filtered{YType::empty, "filtered"},
    out_bundle_member{YType::empty, "out-bundle-member"},
    out_phys_int{YType::empty, "out-phys-int"}
{
    yang_name = "option"; yang_parent_name = "flow-monitor-map";
}

NetFlow::FlowMonitorMapTable::FlowMonitorMap::Option::~Option()
{
}

bool NetFlow::FlowMonitorMapTable::FlowMonitorMap::Option::has_data() const
{
    return bgp_attr.is_set
	|| filtered.is_set
	|| out_bundle_member.is_set
	|| out_phys_int.is_set;
}

bool NetFlow::FlowMonitorMapTable::FlowMonitorMap::Option::has_operation() const
{
    return is_set(operation)
	|| is_set(bgp_attr.operation)
	|| is_set(filtered.operation)
	|| is_set(out_bundle_member.operation)
	|| is_set(out_phys_int.operation);
}

std::string NetFlow::FlowMonitorMapTable::FlowMonitorMap::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";

    return path_buffer.str();

}

const EntityPath NetFlow::FlowMonitorMapTable::FlowMonitorMap::Option::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Option' in Cisco_IOS_XR_traffmon_netflow_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp_attr.is_set || is_set(bgp_attr.operation)) leaf_name_data.push_back(bgp_attr.get_name_leafdata());
    if (filtered.is_set || is_set(filtered.operation)) leaf_name_data.push_back(filtered.get_name_leafdata());
    if (out_bundle_member.is_set || is_set(out_bundle_member.operation)) leaf_name_data.push_back(out_bundle_member.get_name_leafdata());
    if (out_phys_int.is_set || is_set(out_phys_int.operation)) leaf_name_data.push_back(out_phys_int.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetFlow::FlowMonitorMapTable::FlowMonitorMap::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetFlow::FlowMonitorMapTable::FlowMonitorMap::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NetFlow::FlowMonitorMapTable::FlowMonitorMap::Option::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bgp-attr")
    {
        bgp_attr = value;
    }
    if(value_path == "filtered")
    {
        filtered = value;
    }
    if(value_path == "out-bundle-member")
    {
        out_bundle_member = value;
    }
    if(value_path == "out-phys-int")
    {
        out_phys_int = value;
    }
}

NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters::Exporters()
{
    yang_name = "exporters"; yang_parent_name = "flow-monitor-map";
}

NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters::~Exporters()
{
}

bool NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters::has_data() const
{
    for (std::size_t index=0; index<exporter.size(); index++)
    {
        if(exporter[index]->has_data())
            return true;
    }
    return false;
}

bool NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters::has_operation() const
{
    for (std::size_t index=0; index<exporter.size(); index++)
    {
        if(exporter[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exporters";

    return path_buffer.str();

}

const EntityPath NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Exporters' in Cisco_IOS_XR_traffmon_netflow_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exporter")
    {
        for(auto const & c : exporter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters::Exporter>();
        c->parent = this;
        exporter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : exporter)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters::set_value(const std::string & value_path, std::string value)
{
}

NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters::Exporter::Exporter()
    :
    exporter_name{YType::str, "exporter-name"}
{
    yang_name = "exporter"; yang_parent_name = "exporters";
}

NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters::Exporter::~Exporter()
{
}

bool NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters::Exporter::has_data() const
{
    return exporter_name.is_set;
}

bool NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters::Exporter::has_operation() const
{
    return is_set(operation)
	|| is_set(exporter_name.operation);
}

std::string NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters::Exporter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exporter" <<"[exporter-name='" <<exporter_name <<"']";

    return path_buffer.str();

}

const EntityPath NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters::Exporter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Exporter' in Cisco_IOS_XR_traffmon_netflow_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exporter_name.is_set || is_set(exporter_name.operation)) leaf_name_data.push_back(exporter_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters::Exporter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters::Exporter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters::Exporter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "exporter-name")
    {
        exporter_name = value;
    }
}

NetFlow::FlowMonitorMapTable::FlowMonitorMap::Record::Record()
    :
    label{YType::uint32, "label"},
    record_name{YType::str, "record-name"}
{
    yang_name = "record"; yang_parent_name = "flow-monitor-map";
}

NetFlow::FlowMonitorMapTable::FlowMonitorMap::Record::~Record()
{
}

bool NetFlow::FlowMonitorMapTable::FlowMonitorMap::Record::has_data() const
{
    return label.is_set
	|| record_name.is_set;
}

bool NetFlow::FlowMonitorMapTable::FlowMonitorMap::Record::has_operation() const
{
    return is_set(operation)
	|| is_set(label.operation)
	|| is_set(record_name.operation);
}

std::string NetFlow::FlowMonitorMapTable::FlowMonitorMap::Record::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "record";

    return path_buffer.str();

}

const EntityPath NetFlow::FlowMonitorMapTable::FlowMonitorMap::Record::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Record' in Cisco_IOS_XR_traffmon_netflow_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());
    if (record_name.is_set || is_set(record_name.operation)) leaf_name_data.push_back(record_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetFlow::FlowMonitorMapTable::FlowMonitorMap::Record::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetFlow::FlowMonitorMapTable::FlowMonitorMap::Record::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NetFlow::FlowMonitorMapTable::FlowMonitorMap::Record::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label")
    {
        label = value;
    }
    if(value_path == "record-name")
    {
        record_name = value;
    }
}

NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMapPerformanceTable()
{
    yang_name = "flow-monitor-map-performance-table"; yang_parent_name = "net-flow";
}

NetFlow::FlowMonitorMapPerformanceTable::~FlowMonitorMapPerformanceTable()
{
}

bool NetFlow::FlowMonitorMapPerformanceTable::has_data() const
{
    for (std::size_t index=0; index<flow_monitor_map.size(); index++)
    {
        if(flow_monitor_map[index]->has_data())
            return true;
    }
    return false;
}

bool NetFlow::FlowMonitorMapPerformanceTable::has_operation() const
{
    for (std::size_t index=0; index<flow_monitor_map.size(); index++)
    {
        if(flow_monitor_map[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string NetFlow::FlowMonitorMapPerformanceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-monitor-map-performance-table";

    return path_buffer.str();

}

const EntityPath NetFlow::FlowMonitorMapPerformanceTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-traffmon-netflow-cfg:net-flow/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetFlow::FlowMonitorMapPerformanceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-monitor-map")
    {
        for(auto const & c : flow_monitor_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap>();
        c->parent = this;
        flow_monitor_map.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetFlow::FlowMonitorMapPerformanceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : flow_monitor_map)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NetFlow::FlowMonitorMapPerformanceTable::set_value(const std::string & value_path, std::string value)
{
}

NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::FlowMonitorMap()
    :
    monitor_map_name{YType::str, "monitor-map-name"},
    cache_active_aging_timeout{YType::uint32, "cache-active-aging-timeout"},
    cache_aging_mode{YType::enumeration, "cache-aging-mode"},
    cache_entries{YType::uint32, "cache-entries"},
    cache_inactive_aging_timeout{YType::uint32, "cache-inactive-aging-timeout"},
    cache_timeout_rate_limit{YType::uint32, "cache-timeout-rate-limit"},
    cache_update_aging_timeout{YType::uint32, "cache-update-aging-timeout"}
    	,
    exporters(std::make_shared<NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters>())
	,option(std::make_shared<NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Option>())
	,record(nullptr) // presence node
{
    exporters->parent = this;

    option->parent = this;

    yang_name = "flow-monitor-map"; yang_parent_name = "flow-monitor-map-performance-table";
}

NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::~FlowMonitorMap()
{
}

bool NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::has_data() const
{
    return monitor_map_name.is_set
	|| cache_active_aging_timeout.is_set
	|| cache_aging_mode.is_set
	|| cache_entries.is_set
	|| cache_inactive_aging_timeout.is_set
	|| cache_timeout_rate_limit.is_set
	|| cache_update_aging_timeout.is_set
	|| (exporters !=  nullptr && exporters->has_data())
	|| (option !=  nullptr && option->has_data())
	|| (record !=  nullptr && record->has_data());
}

bool NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::has_operation() const
{
    return is_set(operation)
	|| is_set(monitor_map_name.operation)
	|| is_set(cache_active_aging_timeout.operation)
	|| is_set(cache_aging_mode.operation)
	|| is_set(cache_entries.operation)
	|| is_set(cache_inactive_aging_timeout.operation)
	|| is_set(cache_timeout_rate_limit.operation)
	|| is_set(cache_update_aging_timeout.operation)
	|| (exporters !=  nullptr && exporters->has_operation())
	|| (option !=  nullptr && option->has_operation())
	|| (record !=  nullptr && record->has_operation());
}

std::string NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-monitor-map" <<"[monitor-map-name='" <<monitor_map_name <<"']";

    return path_buffer.str();

}

const EntityPath NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-traffmon-netflow-cfg:net-flow/flow-monitor-map-performance-table/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor_map_name.is_set || is_set(monitor_map_name.operation)) leaf_name_data.push_back(monitor_map_name.get_name_leafdata());
    if (cache_active_aging_timeout.is_set || is_set(cache_active_aging_timeout.operation)) leaf_name_data.push_back(cache_active_aging_timeout.get_name_leafdata());
    if (cache_aging_mode.is_set || is_set(cache_aging_mode.operation)) leaf_name_data.push_back(cache_aging_mode.get_name_leafdata());
    if (cache_entries.is_set || is_set(cache_entries.operation)) leaf_name_data.push_back(cache_entries.get_name_leafdata());
    if (cache_inactive_aging_timeout.is_set || is_set(cache_inactive_aging_timeout.operation)) leaf_name_data.push_back(cache_inactive_aging_timeout.get_name_leafdata());
    if (cache_timeout_rate_limit.is_set || is_set(cache_timeout_rate_limit.operation)) leaf_name_data.push_back(cache_timeout_rate_limit.get_name_leafdata());
    if (cache_update_aging_timeout.is_set || is_set(cache_update_aging_timeout.operation)) leaf_name_data.push_back(cache_update_aging_timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exporters")
    {
        if(exporters == nullptr)
        {
            exporters = std::make_shared<NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters>();
        }
        return exporters;
    }

    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Option>();
        }
        return option;
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

std::map<std::string, std::shared_ptr<Entity>> NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exporters != nullptr)
    {
        children["exporters"] = exporters;
    }

    if(option != nullptr)
    {
        children["option"] = option;
    }

    if(record != nullptr)
    {
        children["record"] = record;
    }

    return children;
}

void NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "monitor-map-name")
    {
        monitor_map_name = value;
    }
    if(value_path == "cache-active-aging-timeout")
    {
        cache_active_aging_timeout = value;
    }
    if(value_path == "cache-aging-mode")
    {
        cache_aging_mode = value;
    }
    if(value_path == "cache-entries")
    {
        cache_entries = value;
    }
    if(value_path == "cache-inactive-aging-timeout")
    {
        cache_inactive_aging_timeout = value;
    }
    if(value_path == "cache-timeout-rate-limit")
    {
        cache_timeout_rate_limit = value;
    }
    if(value_path == "cache-update-aging-timeout")
    {
        cache_update_aging_timeout = value;
    }
}

NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Option::Option()
    :
    bgp_attr{YType::empty, "bgp-attr"},
    filtered{YType::empty, "filtered"},
    out_bundle_member{YType::empty, "out-bundle-member"},
    out_phys_int{YType::empty, "out-phys-int"}
{
    yang_name = "option"; yang_parent_name = "flow-monitor-map";
}

NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Option::~Option()
{
}

bool NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Option::has_data() const
{
    return bgp_attr.is_set
	|| filtered.is_set
	|| out_bundle_member.is_set
	|| out_phys_int.is_set;
}

bool NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Option::has_operation() const
{
    return is_set(operation)
	|| is_set(bgp_attr.operation)
	|| is_set(filtered.operation)
	|| is_set(out_bundle_member.operation)
	|| is_set(out_phys_int.operation);
}

std::string NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";

    return path_buffer.str();

}

const EntityPath NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Option::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Option' in Cisco_IOS_XR_traffmon_netflow_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp_attr.is_set || is_set(bgp_attr.operation)) leaf_name_data.push_back(bgp_attr.get_name_leafdata());
    if (filtered.is_set || is_set(filtered.operation)) leaf_name_data.push_back(filtered.get_name_leafdata());
    if (out_bundle_member.is_set || is_set(out_bundle_member.operation)) leaf_name_data.push_back(out_bundle_member.get_name_leafdata());
    if (out_phys_int.is_set || is_set(out_phys_int.operation)) leaf_name_data.push_back(out_phys_int.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Option::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bgp-attr")
    {
        bgp_attr = value;
    }
    if(value_path == "filtered")
    {
        filtered = value;
    }
    if(value_path == "out-bundle-member")
    {
        out_bundle_member = value;
    }
    if(value_path == "out-phys-int")
    {
        out_phys_int = value;
    }
}

NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters::Exporters()
{
    yang_name = "exporters"; yang_parent_name = "flow-monitor-map";
}

NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters::~Exporters()
{
}

bool NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters::has_data() const
{
    for (std::size_t index=0; index<exporter.size(); index++)
    {
        if(exporter[index]->has_data())
            return true;
    }
    return false;
}

bool NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters::has_operation() const
{
    for (std::size_t index=0; index<exporter.size(); index++)
    {
        if(exporter[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exporters";

    return path_buffer.str();

}

const EntityPath NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Exporters' in Cisco_IOS_XR_traffmon_netflow_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exporter")
    {
        for(auto const & c : exporter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters::Exporter>();
        c->parent = this;
        exporter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : exporter)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters::set_value(const std::string & value_path, std::string value)
{
}

NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters::Exporter::Exporter()
    :
    exporter_name{YType::str, "exporter-name"}
{
    yang_name = "exporter"; yang_parent_name = "exporters";
}

NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters::Exporter::~Exporter()
{
}

bool NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters::Exporter::has_data() const
{
    return exporter_name.is_set;
}

bool NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters::Exporter::has_operation() const
{
    return is_set(operation)
	|| is_set(exporter_name.operation);
}

std::string NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters::Exporter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exporter" <<"[exporter-name='" <<exporter_name <<"']";

    return path_buffer.str();

}

const EntityPath NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters::Exporter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Exporter' in Cisco_IOS_XR_traffmon_netflow_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exporter_name.is_set || is_set(exporter_name.operation)) leaf_name_data.push_back(exporter_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters::Exporter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters::Exporter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters::Exporter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "exporter-name")
    {
        exporter_name = value;
    }
}

NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Record::Record()
    :
    label{YType::uint32, "label"},
    record_name{YType::str, "record-name"}
{
    yang_name = "record"; yang_parent_name = "flow-monitor-map";
}

NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Record::~Record()
{
}

bool NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Record::has_data() const
{
    return label.is_set
	|| record_name.is_set;
}

bool NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Record::has_operation() const
{
    return is_set(operation)
	|| is_set(label.operation)
	|| is_set(record_name.operation);
}

std::string NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Record::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "record";

    return path_buffer.str();

}

const EntityPath NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Record::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Record' in Cisco_IOS_XR_traffmon_netflow_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());
    if (record_name.is_set || is_set(record_name.operation)) leaf_name_data.push_back(record_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Record::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Record::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Record::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label")
    {
        label = value;
    }
    if(value_path == "record-name")
    {
        record_name = value;
    }
}

const Enum::YLeaf NfSamplingModeEnum::random {2, "random"};

const Enum::YLeaf NfCacheAgingModeEnum::normal {0, "normal"};
const Enum::YLeaf NfCacheAgingModeEnum::permanent {1, "permanent"};
const Enum::YLeaf NfCacheAgingModeEnum::immediate {2, "immediate"};


}
}

