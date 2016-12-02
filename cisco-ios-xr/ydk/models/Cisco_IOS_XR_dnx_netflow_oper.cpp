
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_dnx_netflow_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_dnx_netflow_oper {

NetFlow::Configuration::FlowMonitorMaps::FlowMonitorMap::Exporter::Exporter()
    :
    	name{YType::str, "name"}
{
    yang_name = "exporter"; yang_parent_name = "flow-monitor-map";
}

NetFlow::Configuration::FlowMonitorMaps::FlowMonitorMap::Exporter::~Exporter()
{
}

bool NetFlow::Configuration::FlowMonitorMaps::FlowMonitorMap::Exporter::has_data() const
{
    return name.is_set;
}

bool NetFlow::Configuration::FlowMonitorMaps::FlowMonitorMap::Exporter::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation);
}

std::string NetFlow::Configuration::FlowMonitorMaps::FlowMonitorMap::Exporter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exporter";

    return path_buffer.str();

}

EntityPath NetFlow::Configuration::FlowMonitorMaps::FlowMonitorMap::Exporter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NetFlow::Configuration::FlowMonitorMaps::FlowMonitorMap::Exporter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NetFlow::Configuration::FlowMonitorMaps::FlowMonitorMap::Exporter::get_children()
{
    return children;
}

void NetFlow::Configuration::FlowMonitorMaps::FlowMonitorMap::Exporter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

NetFlow::Configuration::FlowMonitorMaps::FlowMonitorMap::FlowMonitorMap()
    :
    	monitor_name{YType::str, "monitor-name"},
	 cache_active_timeout{YType::uint32, "cache-active-timeout"},
	 cache_aging_mode{YType::str, "cache-aging-mode"},
	 cache_inactive_timeout{YType::uint32, "cache-inactive-timeout"},
	 cache_max_entry{YType::uint32, "cache-max-entry"},
	 cache_timeout_rate_limit{YType::uint32, "cache-timeout-rate-limit"},
	 cache_update_timeout{YType::uint32, "cache-update-timeout"},
	 id{YType::uint32, "id"},
	 name{YType::str, "name"},
	 number_of_labels{YType::uint32, "number-of-labels"},
	 options{YType::uint32, "options"},
	 record_map{YType::str, "record-map"}
{
    yang_name = "flow-monitor-map"; yang_parent_name = "flow-monitor-maps";
}

NetFlow::Configuration::FlowMonitorMaps::FlowMonitorMap::~FlowMonitorMap()
{
}

bool NetFlow::Configuration::FlowMonitorMaps::FlowMonitorMap::has_data() const
{
    for (std::size_t index=0; index<exporter.size(); index++)
    {
        if(exporter[index]->has_data())
            return true;
    }
    return monitor_name.is_set
	|| cache_active_timeout.is_set
	|| cache_aging_mode.is_set
	|| cache_inactive_timeout.is_set
	|| cache_max_entry.is_set
	|| cache_timeout_rate_limit.is_set
	|| cache_update_timeout.is_set
	|| id.is_set
	|| name.is_set
	|| number_of_labels.is_set
	|| options.is_set
	|| record_map.is_set;
}

bool NetFlow::Configuration::FlowMonitorMaps::FlowMonitorMap::has_operation() const
{
    for (std::size_t index=0; index<exporter.size(); index++)
    {
        if(exporter[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(monitor_name.operation)
	|| is_set(cache_active_timeout.operation)
	|| is_set(cache_aging_mode.operation)
	|| is_set(cache_inactive_timeout.operation)
	|| is_set(cache_max_entry.operation)
	|| is_set(cache_timeout_rate_limit.operation)
	|| is_set(cache_update_timeout.operation)
	|| is_set(id.operation)
	|| is_set(name.operation)
	|| is_set(number_of_labels.operation)
	|| is_set(options.operation)
	|| is_set(record_map.operation);
}

std::string NetFlow::Configuration::FlowMonitorMaps::FlowMonitorMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-monitor-map" <<"[monitor-name='" <<monitor_name.get() <<"']";

    return path_buffer.str();

}

EntityPath NetFlow::Configuration::FlowMonitorMaps::FlowMonitorMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-dnx-netflow-oper:net-flow/configuration/flow-monitor-maps/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor_name.is_set || is_set(monitor_name.operation)) leaf_name_data.push_back(monitor_name.get_name_leafdata());
    if (cache_active_timeout.is_set || is_set(cache_active_timeout.operation)) leaf_name_data.push_back(cache_active_timeout.get_name_leafdata());
    if (cache_aging_mode.is_set || is_set(cache_aging_mode.operation)) leaf_name_data.push_back(cache_aging_mode.get_name_leafdata());
    if (cache_inactive_timeout.is_set || is_set(cache_inactive_timeout.operation)) leaf_name_data.push_back(cache_inactive_timeout.get_name_leafdata());
    if (cache_max_entry.is_set || is_set(cache_max_entry.operation)) leaf_name_data.push_back(cache_max_entry.get_name_leafdata());
    if (cache_timeout_rate_limit.is_set || is_set(cache_timeout_rate_limit.operation)) leaf_name_data.push_back(cache_timeout_rate_limit.get_name_leafdata());
    if (cache_update_timeout.is_set || is_set(cache_update_timeout.operation)) leaf_name_data.push_back(cache_update_timeout.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (number_of_labels.is_set || is_set(number_of_labels.operation)) leaf_name_data.push_back(number_of_labels.get_name_leafdata());
    if (options.is_set || is_set(options.operation)) leaf_name_data.push_back(options.get_name_leafdata());
    if (record_map.is_set || is_set(record_map.operation)) leaf_name_data.push_back(record_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NetFlow::Configuration::FlowMonitorMaps::FlowMonitorMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "exporter")
    {
        for(auto const & c : exporter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<NetFlow::Configuration::FlowMonitorMaps::FlowMonitorMap::Exporter>();
        c->parent = this;
        exporter.push_back(std::move(c));
        children[segment_path] = exporter.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NetFlow::Configuration::FlowMonitorMaps::FlowMonitorMap::get_children()
{
    for (auto const & c : exporter)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void NetFlow::Configuration::FlowMonitorMaps::FlowMonitorMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "monitor-name")
    {
        monitor_name = value;
    }
    if(value_path == "cache-active-timeout")
    {
        cache_active_timeout = value;
    }
    if(value_path == "cache-aging-mode")
    {
        cache_aging_mode = value;
    }
    if(value_path == "cache-inactive-timeout")
    {
        cache_inactive_timeout = value;
    }
    if(value_path == "cache-max-entry")
    {
        cache_max_entry = value;
    }
    if(value_path == "cache-timeout-rate-limit")
    {
        cache_timeout_rate_limit = value;
    }
    if(value_path == "cache-update-timeout")
    {
        cache_update_timeout = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "number-of-labels")
    {
        number_of_labels = value;
    }
    if(value_path == "options")
    {
        options = value;
    }
    if(value_path == "record-map")
    {
        record_map = value;
    }
}

NetFlow::Configuration::FlowMonitorMaps::FlowMonitorMaps()
{
    yang_name = "flow-monitor-maps"; yang_parent_name = "configuration";
}

NetFlow::Configuration::FlowMonitorMaps::~FlowMonitorMaps()
{
}

bool NetFlow::Configuration::FlowMonitorMaps::has_data() const
{
    for (std::size_t index=0; index<flow_monitor_map.size(); index++)
    {
        if(flow_monitor_map[index]->has_data())
            return true;
    }
    return false;
}

bool NetFlow::Configuration::FlowMonitorMaps::has_operation() const
{
    for (std::size_t index=0; index<flow_monitor_map.size(); index++)
    {
        if(flow_monitor_map[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string NetFlow::Configuration::FlowMonitorMaps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-monitor-maps";

    return path_buffer.str();

}

EntityPath NetFlow::Configuration::FlowMonitorMaps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-dnx-netflow-oper:net-flow/configuration/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NetFlow::Configuration::FlowMonitorMaps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flow-monitor-map")
    {
        for(auto const & c : flow_monitor_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<NetFlow::Configuration::FlowMonitorMaps::FlowMonitorMap>();
        c->parent = this;
        flow_monitor_map.push_back(std::move(c));
        children[segment_path] = flow_monitor_map.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NetFlow::Configuration::FlowMonitorMaps::get_children()
{
    for (auto const & c : flow_monitor_map)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void NetFlow::Configuration::FlowMonitorMaps::set_value(const std::string & value_path, std::string value)
{
}

NetFlow::Configuration::FlowSamplerMaps::FlowSamplerMap::FlowSamplerMap()
    :
    	sampler_name{YType::str, "sampler-name"},
	 id{YType::uint32, "id"},
	 name{YType::str, "name"},
	 sampling_mode{YType::str, "sampling-mode"}
{
    yang_name = "flow-sampler-map"; yang_parent_name = "flow-sampler-maps";
}

NetFlow::Configuration::FlowSamplerMaps::FlowSamplerMap::~FlowSamplerMap()
{
}

bool NetFlow::Configuration::FlowSamplerMaps::FlowSamplerMap::has_data() const
{
    return sampler_name.is_set
	|| id.is_set
	|| name.is_set
	|| sampling_mode.is_set;
}

bool NetFlow::Configuration::FlowSamplerMaps::FlowSamplerMap::has_operation() const
{
    return is_set(operation)
	|| is_set(sampler_name.operation)
	|| is_set(id.operation)
	|| is_set(name.operation)
	|| is_set(sampling_mode.operation);
}

std::string NetFlow::Configuration::FlowSamplerMaps::FlowSamplerMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-sampler-map" <<"[sampler-name='" <<sampler_name.get() <<"']";

    return path_buffer.str();

}

EntityPath NetFlow::Configuration::FlowSamplerMaps::FlowSamplerMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-dnx-netflow-oper:net-flow/configuration/flow-sampler-maps/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sampler_name.is_set || is_set(sampler_name.operation)) leaf_name_data.push_back(sampler_name.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (sampling_mode.is_set || is_set(sampling_mode.operation)) leaf_name_data.push_back(sampling_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NetFlow::Configuration::FlowSamplerMaps::FlowSamplerMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NetFlow::Configuration::FlowSamplerMaps::FlowSamplerMap::get_children()
{
    return children;
}

void NetFlow::Configuration::FlowSamplerMaps::FlowSamplerMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sampler-name")
    {
        sampler_name = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "sampling-mode")
    {
        sampling_mode = value;
    }
}

NetFlow::Configuration::FlowSamplerMaps::FlowSamplerMaps()
{
    yang_name = "flow-sampler-maps"; yang_parent_name = "configuration";
}

NetFlow::Configuration::FlowSamplerMaps::~FlowSamplerMaps()
{
}

bool NetFlow::Configuration::FlowSamplerMaps::has_data() const
{
    for (std::size_t index=0; index<flow_sampler_map.size(); index++)
    {
        if(flow_sampler_map[index]->has_data())
            return true;
    }
    return false;
}

bool NetFlow::Configuration::FlowSamplerMaps::has_operation() const
{
    for (std::size_t index=0; index<flow_sampler_map.size(); index++)
    {
        if(flow_sampler_map[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string NetFlow::Configuration::FlowSamplerMaps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-sampler-maps";

    return path_buffer.str();

}

EntityPath NetFlow::Configuration::FlowSamplerMaps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-dnx-netflow-oper:net-flow/configuration/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NetFlow::Configuration::FlowSamplerMaps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flow-sampler-map")
    {
        for(auto const & c : flow_sampler_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<NetFlow::Configuration::FlowSamplerMaps::FlowSamplerMap>();
        c->parent = this;
        flow_sampler_map.push_back(std::move(c));
        children[segment_path] = flow_sampler_map.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NetFlow::Configuration::FlowSamplerMaps::get_children()
{
    for (auto const & c : flow_sampler_map)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void NetFlow::Configuration::FlowSamplerMaps::set_value(const std::string & value_path, std::string value)
{
}

NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::Version::Version9::Version9()
    :
    	common_template_export_timeout{YType::uint32, "common-template-export-timeout"},
	 data_template_export_timeout{YType::uint32, "data-template-export-timeout"},
	 interface_table_export_timeout{YType::uint32, "interface-table-export-timeout"},
	 options_template_export_timeout{YType::uint32, "options-template-export-timeout"},
	 sampler_table_export_timeout{YType::uint32, "sampler-table-export-timeout"},
	 vrf_table_export_timeout{YType::uint32, "vrf-table-export-timeout"}
{
    yang_name = "version9"; yang_parent_name = "version";
}

NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::Version::Version9::~Version9()
{
}

bool NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::Version::Version9::has_data() const
{
    return common_template_export_timeout.is_set
	|| data_template_export_timeout.is_set
	|| interface_table_export_timeout.is_set
	|| options_template_export_timeout.is_set
	|| sampler_table_export_timeout.is_set
	|| vrf_table_export_timeout.is_set;
}

bool NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::Version::Version9::has_operation() const
{
    return is_set(operation)
	|| is_set(common_template_export_timeout.operation)
	|| is_set(data_template_export_timeout.operation)
	|| is_set(interface_table_export_timeout.operation)
	|| is_set(options_template_export_timeout.operation)
	|| is_set(sampler_table_export_timeout.operation)
	|| is_set(vrf_table_export_timeout.operation);
}

std::string NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::Version::Version9::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version9";

    return path_buffer.str();

}

EntityPath NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::Version::Version9::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common_template_export_timeout.is_set || is_set(common_template_export_timeout.operation)) leaf_name_data.push_back(common_template_export_timeout.get_name_leafdata());
    if (data_template_export_timeout.is_set || is_set(data_template_export_timeout.operation)) leaf_name_data.push_back(data_template_export_timeout.get_name_leafdata());
    if (interface_table_export_timeout.is_set || is_set(interface_table_export_timeout.operation)) leaf_name_data.push_back(interface_table_export_timeout.get_name_leafdata());
    if (options_template_export_timeout.is_set || is_set(options_template_export_timeout.operation)) leaf_name_data.push_back(options_template_export_timeout.get_name_leafdata());
    if (sampler_table_export_timeout.is_set || is_set(sampler_table_export_timeout.operation)) leaf_name_data.push_back(sampler_table_export_timeout.get_name_leafdata());
    if (vrf_table_export_timeout.is_set || is_set(vrf_table_export_timeout.operation)) leaf_name_data.push_back(vrf_table_export_timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::Version::Version9::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::Version::Version9::get_children()
{
    return children;
}

void NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::Version::Version9::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "common-template-export-timeout")
    {
        common_template_export_timeout = value;
    }
    if(value_path == "data-template-export-timeout")
    {
        data_template_export_timeout = value;
    }
    if(value_path == "interface-table-export-timeout")
    {
        interface_table_export_timeout = value;
    }
    if(value_path == "options-template-export-timeout")
    {
        options_template_export_timeout = value;
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

NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::Version::Ipfix::Ipfix()
    :
    	common_template_export_timeout{YType::uint32, "common-template-export-timeout"},
	 data_template_export_timeout{YType::uint32, "data-template-export-timeout"},
	 interface_table_export_timeout{YType::uint32, "interface-table-export-timeout"},
	 options_template_export_timeout{YType::uint32, "options-template-export-timeout"},
	 sampler_table_export_timeout{YType::uint32, "sampler-table-export-timeout"},
	 vrf_table_export_timeout{YType::uint32, "vrf-table-export-timeout"}
{
    yang_name = "ipfix"; yang_parent_name = "version";
}

NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::Version::Ipfix::~Ipfix()
{
}

bool NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::Version::Ipfix::has_data() const
{
    return common_template_export_timeout.is_set
	|| data_template_export_timeout.is_set
	|| interface_table_export_timeout.is_set
	|| options_template_export_timeout.is_set
	|| sampler_table_export_timeout.is_set
	|| vrf_table_export_timeout.is_set;
}

bool NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::Version::Ipfix::has_operation() const
{
    return is_set(operation)
	|| is_set(common_template_export_timeout.operation)
	|| is_set(data_template_export_timeout.operation)
	|| is_set(interface_table_export_timeout.operation)
	|| is_set(options_template_export_timeout.operation)
	|| is_set(sampler_table_export_timeout.operation)
	|| is_set(vrf_table_export_timeout.operation);
}

std::string NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::Version::Ipfix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipfix";

    return path_buffer.str();

}

EntityPath NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::Version::Ipfix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common_template_export_timeout.is_set || is_set(common_template_export_timeout.operation)) leaf_name_data.push_back(common_template_export_timeout.get_name_leafdata());
    if (data_template_export_timeout.is_set || is_set(data_template_export_timeout.operation)) leaf_name_data.push_back(data_template_export_timeout.get_name_leafdata());
    if (interface_table_export_timeout.is_set || is_set(interface_table_export_timeout.operation)) leaf_name_data.push_back(interface_table_export_timeout.get_name_leafdata());
    if (options_template_export_timeout.is_set || is_set(options_template_export_timeout.operation)) leaf_name_data.push_back(options_template_export_timeout.get_name_leafdata());
    if (sampler_table_export_timeout.is_set || is_set(sampler_table_export_timeout.operation)) leaf_name_data.push_back(sampler_table_export_timeout.get_name_leafdata());
    if (vrf_table_export_timeout.is_set || is_set(vrf_table_export_timeout.operation)) leaf_name_data.push_back(vrf_table_export_timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::Version::Ipfix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::Version::Ipfix::get_children()
{
    return children;
}

void NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::Version::Ipfix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "common-template-export-timeout")
    {
        common_template_export_timeout = value;
    }
    if(value_path == "data-template-export-timeout")
    {
        data_template_export_timeout = value;
    }
    if(value_path == "interface-table-export-timeout")
    {
        interface_table_export_timeout = value;
    }
    if(value_path == "options-template-export-timeout")
    {
        options_template_export_timeout = value;
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

NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::Version::Version()
    :
    	version{YType::enumeration, "version"}
    	,
    ipfix(std::make_unique<NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::Version::Ipfix>())
	,version9(std::make_unique<NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::Version::Version9>())
{
    ipfix->parent = this;
    children["ipfix"] = ipfix.get();

    version9->parent = this;
    children["version9"] = version9.get();

    yang_name = "version"; yang_parent_name = "flow-exporter-map";
}

NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::Version::~Version()
{
}

bool NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::Version::has_data() const
{
    return version.is_set
	|| (ipfix !=  nullptr && ipfix->has_data())
	|| (version9 !=  nullptr && version9->has_data());
}

bool NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::Version::has_operation() const
{
    return is_set(operation)
	|| is_set(version.operation)
	|| (ipfix !=  nullptr && is_set(ipfix->operation))
	|| (version9 !=  nullptr && is_set(version9->operation));
}

std::string NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::Version::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version";

    return path_buffer.str();

}

EntityPath NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::Version::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::Version::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipfix")
    {
        if(ipfix != nullptr)
        {
            children["ipfix"] = ipfix.get();
        }
        else
        {
            ipfix = std::make_unique<NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::Version::Ipfix>();
            ipfix->parent = this;
            children["ipfix"] = ipfix.get();
        }
        return children.at("ipfix");
    }

    if(child_yang_name == "version9")
    {
        if(version9 != nullptr)
        {
            children["version9"] = version9.get();
        }
        else
        {
            version9 = std::make_unique<NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::Version::Version9>();
            version9->parent = this;
            children["version9"] = version9.get();
        }
        return children.at("version9");
    }

    return nullptr;
}

std::map<std::string, Entity*> & NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::Version::get_children()
{
    if(children.find("ipfix") == children.end())
    {
        if(ipfix != nullptr)
        {
            children["ipfix"] = ipfix.get();
        }
    }

    if(children.find("version9") == children.end())
    {
        if(version9 != nullptr)
        {
            children["version9"] = version9.get();
        }
    }

    return children;
}

void NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::Version::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "version")
    {
        version = value;
    }
}

NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::Collector::Collector()
    :
    	destination_address{YType::str, "destination-address"},
	 destination_port{YType::uint16, "destination-port"},
	 dscp{YType::uint8, "dscp"},
	 source_address{YType::str, "source-address"},
	 source_interface{YType::str, "source-interface"},
	 transport_protocol{YType::enumeration, "transport-protocol"},
	 vrf_name{YType::str, "vrf-name"}
{
    yang_name = "collector"; yang_parent_name = "flow-exporter-map";
}

NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::Collector::~Collector()
{
}

bool NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::Collector::has_data() const
{
    return destination_address.is_set
	|| destination_port.is_set
	|| dscp.is_set
	|| source_address.is_set
	|| source_interface.is_set
	|| transport_protocol.is_set
	|| vrf_name.is_set;
}

bool NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::Collector::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(destination_port.operation)
	|| is_set(dscp.operation)
	|| is_set(source_address.operation)
	|| is_set(source_interface.operation)
	|| is_set(transport_protocol.operation)
	|| is_set(vrf_name.operation);
}

std::string NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::Collector::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "collector";

    return path_buffer.str();

}

EntityPath NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::Collector::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.operation)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.operation)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.operation)) leaf_name_data.push_back(source_interface.get_name_leafdata());
    if (transport_protocol.is_set || is_set(transport_protocol.operation)) leaf_name_data.push_back(transport_protocol.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::Collector::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::Collector::get_children()
{
    return children;
}

void NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::Collector::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
    }
    if(value_path == "dscp")
    {
        dscp = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
    }
    if(value_path == "transport-protocol")
    {
        transport_protocol = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::FlowExporterMap()
    :
    	exporter_name{YType::str, "exporter-name"},
	 id{YType::uint32, "id"},
	 name{YType::str, "name"}
    	,
    version(std::make_unique<NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::Version>())
{
    version->parent = this;
    children["version"] = version.get();

    yang_name = "flow-exporter-map"; yang_parent_name = "flow-exporter-maps";
}

NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::~FlowExporterMap()
{
}

bool NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::has_data() const
{
    for (std::size_t index=0; index<collector.size(); index++)
    {
        if(collector[index]->has_data())
            return true;
    }
    return exporter_name.is_set
	|| id.is_set
	|| name.is_set
	|| (version !=  nullptr && version->has_data());
}

bool NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::has_operation() const
{
    for (std::size_t index=0; index<collector.size(); index++)
    {
        if(collector[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(exporter_name.operation)
	|| is_set(id.operation)
	|| is_set(name.operation)
	|| (version !=  nullptr && is_set(version->operation));
}

std::string NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-exporter-map" <<"[exporter-name='" <<exporter_name.get() <<"']";

    return path_buffer.str();

}

EntityPath NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-dnx-netflow-oper:net-flow/configuration/flow-exporter-maps/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exporter_name.is_set || is_set(exporter_name.operation)) leaf_name_data.push_back(exporter_name.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "collector")
    {
        for(auto const & c : collector)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::Collector>();
        c->parent = this;
        collector.push_back(std::move(c));
        children[segment_path] = collector.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "version")
    {
        if(version != nullptr)
        {
            children["version"] = version.get();
        }
        else
        {
            version = std::make_unique<NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::Version>();
            version->parent = this;
            children["version"] = version.get();
        }
        return children.at("version");
    }

    return nullptr;
}

std::map<std::string, Entity*> & NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::get_children()
{
    for (auto const & c : collector)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    if(children.find("version") == children.end())
    {
        if(version != nullptr)
        {
            children["version"] = version.get();
        }
    }

    return children;
}

void NetFlow::Configuration::FlowExporterMaps::FlowExporterMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "exporter-name")
    {
        exporter_name = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

NetFlow::Configuration::FlowExporterMaps::FlowExporterMaps()
{
    yang_name = "flow-exporter-maps"; yang_parent_name = "configuration";
}

NetFlow::Configuration::FlowExporterMaps::~FlowExporterMaps()
{
}

bool NetFlow::Configuration::FlowExporterMaps::has_data() const
{
    for (std::size_t index=0; index<flow_exporter_map.size(); index++)
    {
        if(flow_exporter_map[index]->has_data())
            return true;
    }
    return false;
}

bool NetFlow::Configuration::FlowExporterMaps::has_operation() const
{
    for (std::size_t index=0; index<flow_exporter_map.size(); index++)
    {
        if(flow_exporter_map[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string NetFlow::Configuration::FlowExporterMaps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-exporter-maps";

    return path_buffer.str();

}

EntityPath NetFlow::Configuration::FlowExporterMaps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-dnx-netflow-oper:net-flow/configuration/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NetFlow::Configuration::FlowExporterMaps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flow-exporter-map")
    {
        for(auto const & c : flow_exporter_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<NetFlow::Configuration::FlowExporterMaps::FlowExporterMap>();
        c->parent = this;
        flow_exporter_map.push_back(std::move(c));
        children[segment_path] = flow_exporter_map.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NetFlow::Configuration::FlowExporterMaps::get_children()
{
    for (auto const & c : flow_exporter_map)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void NetFlow::Configuration::FlowExporterMaps::set_value(const std::string & value_path, std::string value)
{
}

NetFlow::Configuration::Configuration()
    :
    flow_exporter_maps(std::make_unique<NetFlow::Configuration::FlowExporterMaps>())
	,flow_monitor_maps(std::make_unique<NetFlow::Configuration::FlowMonitorMaps>())
	,flow_sampler_maps(std::make_unique<NetFlow::Configuration::FlowSamplerMaps>())
{
    flow_exporter_maps->parent = this;
    children["flow-exporter-maps"] = flow_exporter_maps.get();

    flow_monitor_maps->parent = this;
    children["flow-monitor-maps"] = flow_monitor_maps.get();

    flow_sampler_maps->parent = this;
    children["flow-sampler-maps"] = flow_sampler_maps.get();

    yang_name = "configuration"; yang_parent_name = "net-flow";
}

NetFlow::Configuration::~Configuration()
{
}

bool NetFlow::Configuration::has_data() const
{
    return (flow_exporter_maps !=  nullptr && flow_exporter_maps->has_data())
	|| (flow_monitor_maps !=  nullptr && flow_monitor_maps->has_data())
	|| (flow_sampler_maps !=  nullptr && flow_sampler_maps->has_data());
}

bool NetFlow::Configuration::has_operation() const
{
    return is_set(operation)
	|| (flow_exporter_maps !=  nullptr && is_set(flow_exporter_maps->operation))
	|| (flow_monitor_maps !=  nullptr && is_set(flow_monitor_maps->operation))
	|| (flow_sampler_maps !=  nullptr && is_set(flow_sampler_maps->operation));
}

std::string NetFlow::Configuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration";

    return path_buffer.str();

}

EntityPath NetFlow::Configuration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-dnx-netflow-oper:net-flow/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NetFlow::Configuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flow-exporter-maps")
    {
        if(flow_exporter_maps != nullptr)
        {
            children["flow-exporter-maps"] = flow_exporter_maps.get();
        }
        else
        {
            flow_exporter_maps = std::make_unique<NetFlow::Configuration::FlowExporterMaps>();
            flow_exporter_maps->parent = this;
            children["flow-exporter-maps"] = flow_exporter_maps.get();
        }
        return children.at("flow-exporter-maps");
    }

    if(child_yang_name == "flow-monitor-maps")
    {
        if(flow_monitor_maps != nullptr)
        {
            children["flow-monitor-maps"] = flow_monitor_maps.get();
        }
        else
        {
            flow_monitor_maps = std::make_unique<NetFlow::Configuration::FlowMonitorMaps>();
            flow_monitor_maps->parent = this;
            children["flow-monitor-maps"] = flow_monitor_maps.get();
        }
        return children.at("flow-monitor-maps");
    }

    if(child_yang_name == "flow-sampler-maps")
    {
        if(flow_sampler_maps != nullptr)
        {
            children["flow-sampler-maps"] = flow_sampler_maps.get();
        }
        else
        {
            flow_sampler_maps = std::make_unique<NetFlow::Configuration::FlowSamplerMaps>();
            flow_sampler_maps->parent = this;
            children["flow-sampler-maps"] = flow_sampler_maps.get();
        }
        return children.at("flow-sampler-maps");
    }

    return nullptr;
}

std::map<std::string, Entity*> & NetFlow::Configuration::get_children()
{
    if(children.find("flow-exporter-maps") == children.end())
    {
        if(flow_exporter_maps != nullptr)
        {
            children["flow-exporter-maps"] = flow_exporter_maps.get();
        }
    }

    if(children.find("flow-monitor-maps") == children.end())
    {
        if(flow_monitor_maps != nullptr)
        {
            children["flow-monitor-maps"] = flow_monitor_maps.get();
        }
    }

    if(children.find("flow-sampler-maps") == children.end())
    {
        if(flow_sampler_maps != nullptr)
        {
            children["flow-sampler-maps"] = flow_sampler_maps.get();
        }
    }

    return children;
}

void NetFlow::Configuration::set_value(const std::string & value_path, std::string value)
{
}

NetFlow::Statistics::Statistic::Producer::Statistics_::Statistics_()
    :
    	drops_no_space{YType::uint64, "drops-no-space"},
	 drops_others{YType::uint64, "drops-others"},
	 ipv4_egress_flows{YType::uint64, "ipv4-egress-flows"},
	 ipv4_ingress_flows{YType::uint64, "ipv4-ingress-flows"},
	 ipv6_egress_flows{YType::uint64, "ipv6-egress-flows"},
	 ipv6_ingress_flows{YType::uint64, "ipv6-ingress-flows"},
	 last_cleared{YType::str, "last-cleared"},
	 mpls_egress_flows{YType::uint64, "mpls-egress-flows"},
	 mpls_ingress_flows{YType::uint64, "mpls-ingress-flows"},
	 unknown_egress_flows{YType::uint64, "unknown-egress-flows"},
	 unknown_ingress_flows{YType::uint64, "unknown-ingress-flows"},
	 waiting_servers{YType::uint64, "waiting-servers"}
{
    yang_name = "statistics"; yang_parent_name = "producer";
}

NetFlow::Statistics::Statistic::Producer::Statistics_::~Statistics_()
{
}

bool NetFlow::Statistics::Statistic::Producer::Statistics_::has_data() const
{
    return drops_no_space.is_set
	|| drops_others.is_set
	|| ipv4_egress_flows.is_set
	|| ipv4_ingress_flows.is_set
	|| ipv6_egress_flows.is_set
	|| ipv6_ingress_flows.is_set
	|| last_cleared.is_set
	|| mpls_egress_flows.is_set
	|| mpls_ingress_flows.is_set
	|| unknown_egress_flows.is_set
	|| unknown_ingress_flows.is_set
	|| waiting_servers.is_set;
}

bool NetFlow::Statistics::Statistic::Producer::Statistics_::has_operation() const
{
    return is_set(operation)
	|| is_set(drops_no_space.operation)
	|| is_set(drops_others.operation)
	|| is_set(ipv4_egress_flows.operation)
	|| is_set(ipv4_ingress_flows.operation)
	|| is_set(ipv6_egress_flows.operation)
	|| is_set(ipv6_ingress_flows.operation)
	|| is_set(last_cleared.operation)
	|| is_set(mpls_egress_flows.operation)
	|| is_set(mpls_ingress_flows.operation)
	|| is_set(unknown_egress_flows.operation)
	|| is_set(unknown_ingress_flows.operation)
	|| is_set(waiting_servers.operation);
}

std::string NetFlow::Statistics::Statistic::Producer::Statistics_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath NetFlow::Statistics::Statistic::Producer::Statistics_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drops_no_space.is_set || is_set(drops_no_space.operation)) leaf_name_data.push_back(drops_no_space.get_name_leafdata());
    if (drops_others.is_set || is_set(drops_others.operation)) leaf_name_data.push_back(drops_others.get_name_leafdata());
    if (ipv4_egress_flows.is_set || is_set(ipv4_egress_flows.operation)) leaf_name_data.push_back(ipv4_egress_flows.get_name_leafdata());
    if (ipv4_ingress_flows.is_set || is_set(ipv4_ingress_flows.operation)) leaf_name_data.push_back(ipv4_ingress_flows.get_name_leafdata());
    if (ipv6_egress_flows.is_set || is_set(ipv6_egress_flows.operation)) leaf_name_data.push_back(ipv6_egress_flows.get_name_leafdata());
    if (ipv6_ingress_flows.is_set || is_set(ipv6_ingress_flows.operation)) leaf_name_data.push_back(ipv6_ingress_flows.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.operation)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (mpls_egress_flows.is_set || is_set(mpls_egress_flows.operation)) leaf_name_data.push_back(mpls_egress_flows.get_name_leafdata());
    if (mpls_ingress_flows.is_set || is_set(mpls_ingress_flows.operation)) leaf_name_data.push_back(mpls_ingress_flows.get_name_leafdata());
    if (unknown_egress_flows.is_set || is_set(unknown_egress_flows.operation)) leaf_name_data.push_back(unknown_egress_flows.get_name_leafdata());
    if (unknown_ingress_flows.is_set || is_set(unknown_ingress_flows.operation)) leaf_name_data.push_back(unknown_ingress_flows.get_name_leafdata());
    if (waiting_servers.is_set || is_set(waiting_servers.operation)) leaf_name_data.push_back(waiting_servers.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NetFlow::Statistics::Statistic::Producer::Statistics_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NetFlow::Statistics::Statistic::Producer::Statistics_::get_children()
{
    return children;
}

void NetFlow::Statistics::Statistic::Producer::Statistics_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "drops-no-space")
    {
        drops_no_space = value;
    }
    if(value_path == "drops-others")
    {
        drops_others = value;
    }
    if(value_path == "ipv4-egress-flows")
    {
        ipv4_egress_flows = value;
    }
    if(value_path == "ipv4-ingress-flows")
    {
        ipv4_ingress_flows = value;
    }
    if(value_path == "ipv6-egress-flows")
    {
        ipv6_egress_flows = value;
    }
    if(value_path == "ipv6-ingress-flows")
    {
        ipv6_ingress_flows = value;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
    }
    if(value_path == "mpls-egress-flows")
    {
        mpls_egress_flows = value;
    }
    if(value_path == "mpls-ingress-flows")
    {
        mpls_ingress_flows = value;
    }
    if(value_path == "unknown-egress-flows")
    {
        unknown_egress_flows = value;
    }
    if(value_path == "unknown-ingress-flows")
    {
        unknown_ingress_flows = value;
    }
    if(value_path == "waiting-servers")
    {
        waiting_servers = value;
    }
}

NetFlow::Statistics::Statistic::Producer::Producer()
    :
    statistics(std::make_unique<NetFlow::Statistics::Statistic::Producer::Statistics_>())
{
    statistics->parent = this;
    children["statistics"] = statistics.get();

    yang_name = "producer"; yang_parent_name = "statistic";
}

NetFlow::Statistics::Statistic::Producer::~Producer()
{
}

bool NetFlow::Statistics::Statistic::Producer::has_data() const
{
    return (statistics !=  nullptr && statistics->has_data());
}

bool NetFlow::Statistics::Statistic::Producer::has_operation() const
{
    return is_set(operation)
	|| (statistics !=  nullptr && is_set(statistics->operation));
}

std::string NetFlow::Statistics::Statistic::Producer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "producer";

    return path_buffer.str();

}

EntityPath NetFlow::Statistics::Statistic::Producer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NetFlow::Statistics::Statistic::Producer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "statistics")
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics.get();
        }
        else
        {
            statistics = std::make_unique<NetFlow::Statistics::Statistic::Producer::Statistics_>();
            statistics->parent = this;
            children["statistics"] = statistics.get();
        }
        return children.at("statistics");
    }

    return nullptr;
}

std::map<std::string, Entity*> & NetFlow::Statistics::Statistic::Producer::get_children()
{
    if(children.find("statistics") == children.end())
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics.get();
        }
    }

    return children;
}

void NetFlow::Statistics::Statistic::Producer::set_value(const std::string & value_path, std::string value)
{
}

NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_::Collector::Collector()
    :
    	bytes_dropped{YType::uint64, "bytes-dropped"},
	 bytes_sent{YType::uint64, "bytes-sent"},
	 destination_address{YType::str, "destination-address"},
	 destination_port{YType::uint16, "destination-port"},
	 exporter_state{YType::str, "exporter-state"},
	 flow_bytes_dropped{YType::uint64, "flow-bytes-dropped"},
	 flow_bytes_sent{YType::uint64, "flow-bytes-sent"},
	 flows_dropped{YType::uint64, "flows-dropped"},
	 flows_sent{YType::uint64, "flows-sent"},
	 last_hour_bytes_sent{YType::uint64, "last-hour-bytes-sent"},
	 last_hour_flows_sent{YType::uint64, "last-hour-flows-sent"},
	 last_hour_packest_sent{YType::uint64, "last-hour-packest-sent"},
	 last_minute_bytes_sent{YType::uint64, "last-minute-bytes-sent"},
	 last_minute_flows_sent{YType::uint64, "last-minute-flows-sent"},
	 last_minute_packets{YType::uint64, "last-minute-packets"},
	 last_second_bytes_sent{YType::uint64, "last-second-bytes-sent"},
	 last_second_flows_sent{YType::uint64, "last-second-flows-sent"},
	 last_second_packets_sent{YType::uint64, "last-second-packets-sent"},
	 option_data_bytes_dropped{YType::uint64, "option-data-bytes-dropped"},
	 option_data_bytes_sent{YType::uint64, "option-data-bytes-sent"},
	 option_data_dropped{YType::uint64, "option-data-dropped"},
	 option_data_sent{YType::uint64, "option-data-sent"},
	 option_template_bytes_dropped{YType::uint64, "option-template-bytes-dropped"},
	 option_template_bytes_sent{YType::uint64, "option-template-bytes-sent"},
	 option_templates_dropped{YType::uint64, "option-templates-dropped"},
	 option_templates_sent{YType::uint64, "option-templates-sent"},
	 packets_dropped{YType::uint64, "packets-dropped"},
	 packets_sent{YType::uint64, "packets-sent"},
	 souce_port{YType::uint16, "souce-port"},
	 source_address{YType::str, "source-address"},
	 template_bytes_dropped{YType::uint64, "template-bytes-dropped"},
	 template_bytes_sent{YType::uint64, "template-bytes-sent"},
	 templates_dropped{YType::uint64, "templates-dropped"},
	 templates_sent{YType::uint64, "templates-sent"},
	 transport_protocol{YType::str, "transport-protocol"},
	 vrf_name{YType::str, "vrf-name"}
{
    yang_name = "collector"; yang_parent_name = "statistic";
}

NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_::Collector::~Collector()
{
}

bool NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_::Collector::has_data() const
{
    return bytes_dropped.is_set
	|| bytes_sent.is_set
	|| destination_address.is_set
	|| destination_port.is_set
	|| exporter_state.is_set
	|| flow_bytes_dropped.is_set
	|| flow_bytes_sent.is_set
	|| flows_dropped.is_set
	|| flows_sent.is_set
	|| last_hour_bytes_sent.is_set
	|| last_hour_flows_sent.is_set
	|| last_hour_packest_sent.is_set
	|| last_minute_bytes_sent.is_set
	|| last_minute_flows_sent.is_set
	|| last_minute_packets.is_set
	|| last_second_bytes_sent.is_set
	|| last_second_flows_sent.is_set
	|| last_second_packets_sent.is_set
	|| option_data_bytes_dropped.is_set
	|| option_data_bytes_sent.is_set
	|| option_data_dropped.is_set
	|| option_data_sent.is_set
	|| option_template_bytes_dropped.is_set
	|| option_template_bytes_sent.is_set
	|| option_templates_dropped.is_set
	|| option_templates_sent.is_set
	|| packets_dropped.is_set
	|| packets_sent.is_set
	|| souce_port.is_set
	|| source_address.is_set
	|| template_bytes_dropped.is_set
	|| template_bytes_sent.is_set
	|| templates_dropped.is_set
	|| templates_sent.is_set
	|| transport_protocol.is_set
	|| vrf_name.is_set;
}

bool NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_::Collector::has_operation() const
{
    return is_set(operation)
	|| is_set(bytes_dropped.operation)
	|| is_set(bytes_sent.operation)
	|| is_set(destination_address.operation)
	|| is_set(destination_port.operation)
	|| is_set(exporter_state.operation)
	|| is_set(flow_bytes_dropped.operation)
	|| is_set(flow_bytes_sent.operation)
	|| is_set(flows_dropped.operation)
	|| is_set(flows_sent.operation)
	|| is_set(last_hour_bytes_sent.operation)
	|| is_set(last_hour_flows_sent.operation)
	|| is_set(last_hour_packest_sent.operation)
	|| is_set(last_minute_bytes_sent.operation)
	|| is_set(last_minute_flows_sent.operation)
	|| is_set(last_minute_packets.operation)
	|| is_set(last_second_bytes_sent.operation)
	|| is_set(last_second_flows_sent.operation)
	|| is_set(last_second_packets_sent.operation)
	|| is_set(option_data_bytes_dropped.operation)
	|| is_set(option_data_bytes_sent.operation)
	|| is_set(option_data_dropped.operation)
	|| is_set(option_data_sent.operation)
	|| is_set(option_template_bytes_dropped.operation)
	|| is_set(option_template_bytes_sent.operation)
	|| is_set(option_templates_dropped.operation)
	|| is_set(option_templates_sent.operation)
	|| is_set(packets_dropped.operation)
	|| is_set(packets_sent.operation)
	|| is_set(souce_port.operation)
	|| is_set(source_address.operation)
	|| is_set(template_bytes_dropped.operation)
	|| is_set(template_bytes_sent.operation)
	|| is_set(templates_dropped.operation)
	|| is_set(templates_sent.operation)
	|| is_set(transport_protocol.operation)
	|| is_set(vrf_name.operation);
}

std::string NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_::Collector::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "collector";

    return path_buffer.str();

}

EntityPath NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_::Collector::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes_dropped.is_set || is_set(bytes_dropped.operation)) leaf_name_data.push_back(bytes_dropped.get_name_leafdata());
    if (bytes_sent.is_set || is_set(bytes_sent.operation)) leaf_name_data.push_back(bytes_sent.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.operation)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (exporter_state.is_set || is_set(exporter_state.operation)) leaf_name_data.push_back(exporter_state.get_name_leafdata());
    if (flow_bytes_dropped.is_set || is_set(flow_bytes_dropped.operation)) leaf_name_data.push_back(flow_bytes_dropped.get_name_leafdata());
    if (flow_bytes_sent.is_set || is_set(flow_bytes_sent.operation)) leaf_name_data.push_back(flow_bytes_sent.get_name_leafdata());
    if (flows_dropped.is_set || is_set(flows_dropped.operation)) leaf_name_data.push_back(flows_dropped.get_name_leafdata());
    if (flows_sent.is_set || is_set(flows_sent.operation)) leaf_name_data.push_back(flows_sent.get_name_leafdata());
    if (last_hour_bytes_sent.is_set || is_set(last_hour_bytes_sent.operation)) leaf_name_data.push_back(last_hour_bytes_sent.get_name_leafdata());
    if (last_hour_flows_sent.is_set || is_set(last_hour_flows_sent.operation)) leaf_name_data.push_back(last_hour_flows_sent.get_name_leafdata());
    if (last_hour_packest_sent.is_set || is_set(last_hour_packest_sent.operation)) leaf_name_data.push_back(last_hour_packest_sent.get_name_leafdata());
    if (last_minute_bytes_sent.is_set || is_set(last_minute_bytes_sent.operation)) leaf_name_data.push_back(last_minute_bytes_sent.get_name_leafdata());
    if (last_minute_flows_sent.is_set || is_set(last_minute_flows_sent.operation)) leaf_name_data.push_back(last_minute_flows_sent.get_name_leafdata());
    if (last_minute_packets.is_set || is_set(last_minute_packets.operation)) leaf_name_data.push_back(last_minute_packets.get_name_leafdata());
    if (last_second_bytes_sent.is_set || is_set(last_second_bytes_sent.operation)) leaf_name_data.push_back(last_second_bytes_sent.get_name_leafdata());
    if (last_second_flows_sent.is_set || is_set(last_second_flows_sent.operation)) leaf_name_data.push_back(last_second_flows_sent.get_name_leafdata());
    if (last_second_packets_sent.is_set || is_set(last_second_packets_sent.operation)) leaf_name_data.push_back(last_second_packets_sent.get_name_leafdata());
    if (option_data_bytes_dropped.is_set || is_set(option_data_bytes_dropped.operation)) leaf_name_data.push_back(option_data_bytes_dropped.get_name_leafdata());
    if (option_data_bytes_sent.is_set || is_set(option_data_bytes_sent.operation)) leaf_name_data.push_back(option_data_bytes_sent.get_name_leafdata());
    if (option_data_dropped.is_set || is_set(option_data_dropped.operation)) leaf_name_data.push_back(option_data_dropped.get_name_leafdata());
    if (option_data_sent.is_set || is_set(option_data_sent.operation)) leaf_name_data.push_back(option_data_sent.get_name_leafdata());
    if (option_template_bytes_dropped.is_set || is_set(option_template_bytes_dropped.operation)) leaf_name_data.push_back(option_template_bytes_dropped.get_name_leafdata());
    if (option_template_bytes_sent.is_set || is_set(option_template_bytes_sent.operation)) leaf_name_data.push_back(option_template_bytes_sent.get_name_leafdata());
    if (option_templates_dropped.is_set || is_set(option_templates_dropped.operation)) leaf_name_data.push_back(option_templates_dropped.get_name_leafdata());
    if (option_templates_sent.is_set || is_set(option_templates_sent.operation)) leaf_name_data.push_back(option_templates_sent.get_name_leafdata());
    if (packets_dropped.is_set || is_set(packets_dropped.operation)) leaf_name_data.push_back(packets_dropped.get_name_leafdata());
    if (packets_sent.is_set || is_set(packets_sent.operation)) leaf_name_data.push_back(packets_sent.get_name_leafdata());
    if (souce_port.is_set || is_set(souce_port.operation)) leaf_name_data.push_back(souce_port.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (template_bytes_dropped.is_set || is_set(template_bytes_dropped.operation)) leaf_name_data.push_back(template_bytes_dropped.get_name_leafdata());
    if (template_bytes_sent.is_set || is_set(template_bytes_sent.operation)) leaf_name_data.push_back(template_bytes_sent.get_name_leafdata());
    if (templates_dropped.is_set || is_set(templates_dropped.operation)) leaf_name_data.push_back(templates_dropped.get_name_leafdata());
    if (templates_sent.is_set || is_set(templates_sent.operation)) leaf_name_data.push_back(templates_sent.get_name_leafdata());
    if (transport_protocol.is_set || is_set(transport_protocol.operation)) leaf_name_data.push_back(transport_protocol.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_::Collector::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_::Collector::get_children()
{
    return children;
}

void NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_::Collector::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bytes-dropped")
    {
        bytes_dropped = value;
    }
    if(value_path == "bytes-sent")
    {
        bytes_sent = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
    }
    if(value_path == "exporter-state")
    {
        exporter_state = value;
    }
    if(value_path == "flow-bytes-dropped")
    {
        flow_bytes_dropped = value;
    }
    if(value_path == "flow-bytes-sent")
    {
        flow_bytes_sent = value;
    }
    if(value_path == "flows-dropped")
    {
        flows_dropped = value;
    }
    if(value_path == "flows-sent")
    {
        flows_sent = value;
    }
    if(value_path == "last-hour-bytes-sent")
    {
        last_hour_bytes_sent = value;
    }
    if(value_path == "last-hour-flows-sent")
    {
        last_hour_flows_sent = value;
    }
    if(value_path == "last-hour-packest-sent")
    {
        last_hour_packest_sent = value;
    }
    if(value_path == "last-minute-bytes-sent")
    {
        last_minute_bytes_sent = value;
    }
    if(value_path == "last-minute-flows-sent")
    {
        last_minute_flows_sent = value;
    }
    if(value_path == "last-minute-packets")
    {
        last_minute_packets = value;
    }
    if(value_path == "last-second-bytes-sent")
    {
        last_second_bytes_sent = value;
    }
    if(value_path == "last-second-flows-sent")
    {
        last_second_flows_sent = value;
    }
    if(value_path == "last-second-packets-sent")
    {
        last_second_packets_sent = value;
    }
    if(value_path == "option-data-bytes-dropped")
    {
        option_data_bytes_dropped = value;
    }
    if(value_path == "option-data-bytes-sent")
    {
        option_data_bytes_sent = value;
    }
    if(value_path == "option-data-dropped")
    {
        option_data_dropped = value;
    }
    if(value_path == "option-data-sent")
    {
        option_data_sent = value;
    }
    if(value_path == "option-template-bytes-dropped")
    {
        option_template_bytes_dropped = value;
    }
    if(value_path == "option-template-bytes-sent")
    {
        option_template_bytes_sent = value;
    }
    if(value_path == "option-templates-dropped")
    {
        option_templates_dropped = value;
    }
    if(value_path == "option-templates-sent")
    {
        option_templates_sent = value;
    }
    if(value_path == "packets-dropped")
    {
        packets_dropped = value;
    }
    if(value_path == "packets-sent")
    {
        packets_sent = value;
    }
    if(value_path == "souce-port")
    {
        souce_port = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "template-bytes-dropped")
    {
        template_bytes_dropped = value;
    }
    if(value_path == "template-bytes-sent")
    {
        template_bytes_sent = value;
    }
    if(value_path == "templates-dropped")
    {
        templates_dropped = value;
    }
    if(value_path == "templates-sent")
    {
        templates_sent = value;
    }
    if(value_path == "transport-protocol")
    {
        transport_protocol = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_::Statistic_()
    :
    	memory_usage{YType::uint32, "memory-usage"},
	 name{YType::str, "name"},
	 used_by_flow_monitor{YType::str, "used-by-flow-monitor"}
{
    yang_name = "statistic"; yang_parent_name = "exporter";
}

NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_::~Statistic_()
{
}

bool NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_::has_data() const
{
    for (std::size_t index=0; index<collector.size(); index++)
    {
        if(collector[index]->has_data())
            return true;
    }
    for (auto const & leaf : used_by_flow_monitor.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    return memory_usage.is_set
	|| name.is_set;
}

bool NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_::has_operation() const
{
    for (std::size_t index=0; index<collector.size(); index++)
    {
        if(collector[index]->has_operation())
            return true;
    }
    for (auto const & leaf : used_by_flow_monitor.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(memory_usage.operation)
	|| is_set(name.operation);
}

std::string NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistic";

    return path_buffer.str();

}

EntityPath NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (memory_usage.is_set || is_set(memory_usage.operation)) leaf_name_data.push_back(memory_usage.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());

    auto used_by_flow_monitor_name_datas = used_by_flow_monitor.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), used_by_flow_monitor_name_datas.begin(), used_by_flow_monitor_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "collector")
    {
        for(auto const & c : collector)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_::Collector>();
        c->parent = this;
        collector.push_back(std::move(c));
        children[segment_path] = collector.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_::get_children()
{
    for (auto const & c : collector)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "memory-usage")
    {
        memory_usage = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "used-by-flow-monitor")
    {
        used_by_flow_monitor.append(value);
    }
}

NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Exporter()
{
    yang_name = "exporter"; yang_parent_name = "flow-exporter";
}

NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::~Exporter()
{
}

bool NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::has_data() const
{
    for (std::size_t index=0; index<statistic.size(); index++)
    {
        if(statistic[index]->has_data())
            return true;
    }
    return false;
}

bool NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::has_operation() const
{
    for (std::size_t index=0; index<statistic.size(); index++)
    {
        if(statistic[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exporter";

    return path_buffer.str();

}

EntityPath NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "statistic")
    {
        for(auto const & c : statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_>();
        c->parent = this;
        statistic.push_back(std::move(c));
        children[segment_path] = statistic.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::get_children()
{
    for (auto const & c : statistic)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::set_value(const std::string & value_path, std::string value)
{
}

NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::FlowExporter()
    :
    	exporter_name{YType::str, "exporter-name"}
    	,
    exporter(std::make_unique<NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter>())
{
    exporter->parent = this;
    children["exporter"] = exporter.get();

    yang_name = "flow-exporter"; yang_parent_name = "flow-exporters";
}

NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::~FlowExporter()
{
}

bool NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::has_data() const
{
    return exporter_name.is_set
	|| (exporter !=  nullptr && exporter->has_data());
}

bool NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::has_operation() const
{
    return is_set(operation)
	|| is_set(exporter_name.operation)
	|| (exporter !=  nullptr && is_set(exporter->operation));
}

std::string NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-exporter" <<"[exporter-name='" <<exporter_name.get() <<"']";

    return path_buffer.str();

}

EntityPath NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exporter_name.is_set || is_set(exporter_name.operation)) leaf_name_data.push_back(exporter_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "exporter")
    {
        if(exporter != nullptr)
        {
            children["exporter"] = exporter.get();
        }
        else
        {
            exporter = std::make_unique<NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter>();
            exporter->parent = this;
            children["exporter"] = exporter.get();
        }
        return children.at("exporter");
    }

    return nullptr;
}

std::map<std::string, Entity*> & NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::get_children()
{
    if(children.find("exporter") == children.end())
    {
        if(exporter != nullptr)
        {
            children["exporter"] = exporter.get();
        }
    }

    return children;
}

void NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "exporter-name")
    {
        exporter_name = value;
    }
}

NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporters()
{
    yang_name = "flow-exporters"; yang_parent_name = "server";
}

NetFlow::Statistics::Statistic::Server::FlowExporters::~FlowExporters()
{
}

bool NetFlow::Statistics::Statistic::Server::FlowExporters::has_data() const
{
    for (std::size_t index=0; index<flow_exporter.size(); index++)
    {
        if(flow_exporter[index]->has_data())
            return true;
    }
    return false;
}

bool NetFlow::Statistics::Statistic::Server::FlowExporters::has_operation() const
{
    for (std::size_t index=0; index<flow_exporter.size(); index++)
    {
        if(flow_exporter[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string NetFlow::Statistics::Statistic::Server::FlowExporters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-exporters";

    return path_buffer.str();

}

EntityPath NetFlow::Statistics::Statistic::Server::FlowExporters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NetFlow::Statistics::Statistic::Server::FlowExporters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flow-exporter")
    {
        for(auto const & c : flow_exporter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter>();
        c->parent = this;
        flow_exporter.push_back(std::move(c));
        children[segment_path] = flow_exporter.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NetFlow::Statistics::Statistic::Server::FlowExporters::get_children()
{
    for (auto const & c : flow_exporter)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void NetFlow::Statistics::Statistic::Server::FlowExporters::set_value(const std::string & value_path, std::string value)
{
}

NetFlow::Statistics::Statistic::Server::Server()
    :
    flow_exporters(std::make_unique<NetFlow::Statistics::Statistic::Server::FlowExporters>())
{
    flow_exporters->parent = this;
    children["flow-exporters"] = flow_exporters.get();

    yang_name = "server"; yang_parent_name = "statistic";
}

NetFlow::Statistics::Statistic::Server::~Server()
{
}

bool NetFlow::Statistics::Statistic::Server::has_data() const
{
    return (flow_exporters !=  nullptr && flow_exporters->has_data());
}

bool NetFlow::Statistics::Statistic::Server::has_operation() const
{
    return is_set(operation)
	|| (flow_exporters !=  nullptr && is_set(flow_exporters->operation));
}

std::string NetFlow::Statistics::Statistic::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";

    return path_buffer.str();

}

EntityPath NetFlow::Statistics::Statistic::Server::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NetFlow::Statistics::Statistic::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flow-exporters")
    {
        if(flow_exporters != nullptr)
        {
            children["flow-exporters"] = flow_exporters.get();
        }
        else
        {
            flow_exporters = std::make_unique<NetFlow::Statistics::Statistic::Server::FlowExporters>();
            flow_exporters->parent = this;
            children["flow-exporters"] = flow_exporters.get();
        }
        return children.at("flow-exporters");
    }

    return nullptr;
}

std::map<std::string, Entity*> & NetFlow::Statistics::Statistic::Server::get_children()
{
    if(children.find("flow-exporters") == children.end())
    {
        if(flow_exporters != nullptr)
        {
            children["flow-exporters"] = flow_exporters.get();
        }
    }

    return children;
}

void NetFlow::Statistics::Statistic::Server::set_value(const std::string & value_path, std::string value)
{
}

NetFlow::Statistics::Statistic::Statistic()
    :
    	node{YType::str, "node"}
    	,
    producer(std::make_unique<NetFlow::Statistics::Statistic::Producer>())
	,server(std::make_unique<NetFlow::Statistics::Statistic::Server>())
{
    producer->parent = this;
    children["producer"] = producer.get();

    server->parent = this;
    children["server"] = server.get();

    yang_name = "statistic"; yang_parent_name = "statistics";
}

NetFlow::Statistics::Statistic::~Statistic()
{
}

bool NetFlow::Statistics::Statistic::has_data() const
{
    return node.is_set
	|| (producer !=  nullptr && producer->has_data())
	|| (server !=  nullptr && server->has_data());
}

bool NetFlow::Statistics::Statistic::has_operation() const
{
    return is_set(operation)
	|| is_set(node.operation)
	|| (producer !=  nullptr && is_set(producer->operation))
	|| (server !=  nullptr && is_set(server->operation));
}

std::string NetFlow::Statistics::Statistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistic" <<"[node='" <<node.get() <<"']";

    return path_buffer.str();

}

EntityPath NetFlow::Statistics::Statistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-dnx-netflow-oper:net-flow/statistics/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.operation)) leaf_name_data.push_back(node.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NetFlow::Statistics::Statistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "producer")
    {
        if(producer != nullptr)
        {
            children["producer"] = producer.get();
        }
        else
        {
            producer = std::make_unique<NetFlow::Statistics::Statistic::Producer>();
            producer->parent = this;
            children["producer"] = producer.get();
        }
        return children.at("producer");
    }

    if(child_yang_name == "server")
    {
        if(server != nullptr)
        {
            children["server"] = server.get();
        }
        else
        {
            server = std::make_unique<NetFlow::Statistics::Statistic::Server>();
            server->parent = this;
            children["server"] = server.get();
        }
        return children.at("server");
    }

    return nullptr;
}

std::map<std::string, Entity*> & NetFlow::Statistics::Statistic::get_children()
{
    if(children.find("producer") == children.end())
    {
        if(producer != nullptr)
        {
            children["producer"] = producer.get();
        }
    }

    if(children.find("server") == children.end())
    {
        if(server != nullptr)
        {
            children["server"] = server.get();
        }
    }

    return children;
}

void NetFlow::Statistics::Statistic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node")
    {
        node = value;
    }
}

NetFlow::Statistics::Statistics()
{
    yang_name = "statistics"; yang_parent_name = "net-flow";
}

NetFlow::Statistics::~Statistics()
{
}

bool NetFlow::Statistics::has_data() const
{
    for (std::size_t index=0; index<statistic.size(); index++)
    {
        if(statistic[index]->has_data())
            return true;
    }
    return false;
}

bool NetFlow::Statistics::has_operation() const
{
    for (std::size_t index=0; index<statistic.size(); index++)
    {
        if(statistic[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string NetFlow::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath NetFlow::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-dnx-netflow-oper:net-flow/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NetFlow::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "statistic")
    {
        for(auto const & c : statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<NetFlow::Statistics::Statistic>();
        c->parent = this;
        statistic.push_back(std::move(c));
        children[segment_path] = statistic.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NetFlow::Statistics::get_children()
{
    for (auto const & c : statistic)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void NetFlow::Statistics::set_value(const std::string & value_path, std::string value)
{
}

NetFlow::NetFlow()
    :
    configuration(std::make_unique<NetFlow::Configuration>())
	,statistics(std::make_unique<NetFlow::Statistics>())
{
    configuration->parent = this;
    children["configuration"] = configuration.get();

    statistics->parent = this;
    children["statistics"] = statistics.get();

    yang_name = "net-flow"; yang_parent_name = "Cisco-IOS-XR-dnx-netflow-oper";
}

NetFlow::~NetFlow()
{
}

bool NetFlow::has_data() const
{
    return (configuration !=  nullptr && configuration->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool NetFlow::has_operation() const
{
    return is_set(operation)
	|| (configuration !=  nullptr && is_set(configuration->operation))
	|| (statistics !=  nullptr && is_set(statistics->operation));
}

std::string NetFlow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-dnx-netflow-oper:net-flow";

    return path_buffer.str();

}

EntityPath NetFlow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NetFlow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "configuration")
    {
        if(configuration != nullptr)
        {
            children["configuration"] = configuration.get();
        }
        else
        {
            configuration = std::make_unique<NetFlow::Configuration>();
            configuration->parent = this;
            children["configuration"] = configuration.get();
        }
        return children.at("configuration");
    }

    if(child_yang_name == "statistics")
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics.get();
        }
        else
        {
            statistics = std::make_unique<NetFlow::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics.get();
        }
        return children.at("statistics");
    }

    return nullptr;
}

std::map<std::string, Entity*> & NetFlow::get_children()
{
    if(children.find("configuration") == children.end())
    {
        if(configuration != nullptr)
        {
            children["configuration"] = configuration.get();
        }
    }

    if(children.find("statistics") == children.end())
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics.get();
        }
    }

    return children;
}

void NetFlow::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> NetFlow::clone_ptr()
{
    return std::make_unique<NetFlow>();
}

const Enum::Value NfmgrFemEdmExpVerEnum::v9 {0, "v9"};
const Enum::Value NfmgrFemEdmExpVerEnum::ip_fix {1, "ip-fix"};

const Enum::Value NfmgrFemEdmTransProtoEnum::unspecified {0, "unspecified"};
const Enum::Value NfmgrFemEdmTransProtoEnum::udp {1, "udp"};


}
}

