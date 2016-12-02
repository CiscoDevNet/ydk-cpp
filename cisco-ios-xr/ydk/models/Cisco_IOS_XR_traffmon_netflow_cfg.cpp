
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_traffmon_netflow_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_traffmon_netflow_cfg {

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

EntityPath NetFlow::FlowExporterMaps::FlowExporterMap::Udp::get_entity_path(Entity* ancestor) const
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

    if (destination_port.is_set || is_set(destination_port.operation)) leaf_name_data.push_back(destination_port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NetFlow::FlowExporterMaps::FlowExporterMap::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & NetFlow::FlowExporterMaps::FlowExporterMap::Udp::get_children()
{
    return children;
}

void NetFlow::FlowExporterMaps::FlowExporterMap::Udp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-port")
    {
        destination_port = value;
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

EntityPath NetFlow::FlowExporterMaps::FlowExporterMap::Versions::Version::Options::get_entity_path(Entity* ancestor) const
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

    if (interface_table_export_timeout.is_set || is_set(interface_table_export_timeout.operation)) leaf_name_data.push_back(interface_table_export_timeout.get_name_leafdata());
    if (sampler_table_export_timeout.is_set || is_set(sampler_table_export_timeout.operation)) leaf_name_data.push_back(sampler_table_export_timeout.get_name_leafdata());
    if (vrf_table_export_timeout.is_set || is_set(vrf_table_export_timeout.operation)) leaf_name_data.push_back(vrf_table_export_timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NetFlow::FlowExporterMaps::FlowExporterMap::Versions::Version::Options::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & NetFlow::FlowExporterMaps::FlowExporterMap::Versions::Version::Options::get_children()
{
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

NetFlow::FlowExporterMaps::FlowExporterMap::Versions::Version::Version()
    :
    	version_number{YType::uint32, "version-number"},
	 common_template_timeout{YType::uint32, "common-template-timeout"},
	 data_template_timeout{YType::uint32, "data-template-timeout"},
	 options_template_timeout{YType::uint32, "options-template-timeout"}
    	,
    options(std::make_unique<NetFlow::FlowExporterMaps::FlowExporterMap::Versions::Version::Options>())
{
    options->parent = this;
    children["options"] = options.get();

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
	|| (options !=  nullptr && is_set(options->operation));
}

std::string NetFlow::FlowExporterMaps::FlowExporterMap::Versions::Version::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version" <<"[version-number='" <<version_number.get() <<"']";

    return path_buffer.str();

}

EntityPath NetFlow::FlowExporterMaps::FlowExporterMap::Versions::Version::get_entity_path(Entity* ancestor) const
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

    if (version_number.is_set || is_set(version_number.operation)) leaf_name_data.push_back(version_number.get_name_leafdata());
    if (common_template_timeout.is_set || is_set(common_template_timeout.operation)) leaf_name_data.push_back(common_template_timeout.get_name_leafdata());
    if (data_template_timeout.is_set || is_set(data_template_timeout.operation)) leaf_name_data.push_back(data_template_timeout.get_name_leafdata());
    if (options_template_timeout.is_set || is_set(options_template_timeout.operation)) leaf_name_data.push_back(options_template_timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NetFlow::FlowExporterMaps::FlowExporterMap::Versions::Version::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "options")
    {
        if(options != nullptr)
        {
            children["options"] = options.get();
        }
        else
        {
            options = std::make_unique<NetFlow::FlowExporterMaps::FlowExporterMap::Versions::Version::Options>();
            options->parent = this;
            children["options"] = options.get();
        }
        return children.at("options");
    }

    return nullptr;
}

std::map<std::string, Entity*> & NetFlow::FlowExporterMaps::FlowExporterMap::Versions::Version::get_children()
{
    if(children.find("options") == children.end())
    {
        if(options != nullptr)
        {
            children["options"] = options.get();
        }
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

EntityPath NetFlow::FlowExporterMaps::FlowExporterMap::Versions::get_entity_path(Entity* ancestor) const
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

Entity* NetFlow::FlowExporterMaps::FlowExporterMap::Versions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "version")
    {
        for(auto const & c : version)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<NetFlow::FlowExporterMaps::FlowExporterMap::Versions::Version>();
        c->parent = this;
        version.push_back(std::move(c));
        children[segment_path] = version.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NetFlow::FlowExporterMaps::FlowExporterMap::Versions::get_children()
{
    for (auto const & c : version)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void NetFlow::FlowExporterMaps::FlowExporterMap::Versions::set_value(const std::string & value_path, std::string value)
{
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

EntityPath NetFlow::FlowExporterMaps::FlowExporterMap::Destination::get_entity_path(Entity* ancestor) const
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

    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NetFlow::FlowExporterMaps::FlowExporterMap::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & NetFlow::FlowExporterMaps::FlowExporterMap::Destination::get_children()
{
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

NetFlow::FlowExporterMaps::FlowExporterMap::FlowExporterMap()
    :
    	exporter_map_name{YType::str, "exporter-map-name"},
	 dscp{YType::uint32, "dscp"},
	 source_interface{YType::str, "source-interface"}
    	,
    destination(std::make_unique<NetFlow::FlowExporterMaps::FlowExporterMap::Destination>())
	,udp(std::make_unique<NetFlow::FlowExporterMaps::FlowExporterMap::Udp>())
	,versions(std::make_unique<NetFlow::FlowExporterMaps::FlowExporterMap::Versions>())
{
    destination->parent = this;
    children["destination"] = destination.get();

    udp->parent = this;
    children["udp"] = udp.get();

    versions->parent = this;
    children["versions"] = versions.get();

    yang_name = "flow-exporter-map"; yang_parent_name = "flow-exporter-maps";
}

NetFlow::FlowExporterMaps::FlowExporterMap::~FlowExporterMap()
{
}

bool NetFlow::FlowExporterMaps::FlowExporterMap::has_data() const
{
    return exporter_map_name.is_set
	|| dscp.is_set
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
	|| is_set(source_interface.operation)
	|| (destination !=  nullptr && is_set(destination->operation))
	|| (udp !=  nullptr && is_set(udp->operation))
	|| (versions !=  nullptr && is_set(versions->operation));
}

std::string NetFlow::FlowExporterMaps::FlowExporterMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-exporter-map" <<"[exporter-map-name='" <<exporter_map_name.get() <<"']";

    return path_buffer.str();

}

EntityPath NetFlow::FlowExporterMaps::FlowExporterMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-traffmon-netflow-cfg:net-flow/flow-exporter-maps/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exporter_map_name.is_set || is_set(exporter_map_name.operation)) leaf_name_data.push_back(exporter_map_name.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.operation)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.operation)) leaf_name_data.push_back(source_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NetFlow::FlowExporterMaps::FlowExporterMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "destination")
    {
        if(destination != nullptr)
        {
            children["destination"] = destination.get();
        }
        else
        {
            destination = std::make_unique<NetFlow::FlowExporterMaps::FlowExporterMap::Destination>();
            destination->parent = this;
            children["destination"] = destination.get();
        }
        return children.at("destination");
    }

    if(child_yang_name == "udp")
    {
        if(udp != nullptr)
        {
            children["udp"] = udp.get();
        }
        else
        {
            udp = std::make_unique<NetFlow::FlowExporterMaps::FlowExporterMap::Udp>();
            udp->parent = this;
            children["udp"] = udp.get();
        }
        return children.at("udp");
    }

    if(child_yang_name == "versions")
    {
        if(versions != nullptr)
        {
            children["versions"] = versions.get();
        }
        else
        {
            versions = std::make_unique<NetFlow::FlowExporterMaps::FlowExporterMap::Versions>();
            versions->parent = this;
            children["versions"] = versions.get();
        }
        return children.at("versions");
    }

    return nullptr;
}

std::map<std::string, Entity*> & NetFlow::FlowExporterMaps::FlowExporterMap::get_children()
{
    if(children.find("destination") == children.end())
    {
        if(destination != nullptr)
        {
            children["destination"] = destination.get();
        }
    }

    if(children.find("udp") == children.end())
    {
        if(udp != nullptr)
        {
            children["udp"] = udp.get();
        }
    }

    if(children.find("versions") == children.end())
    {
        if(versions != nullptr)
        {
            children["versions"] = versions.get();
        }
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
    if(value_path == "source-interface")
    {
        source_interface = value;
    }
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

EntityPath NetFlow::FlowExporterMaps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-traffmon-netflow-cfg:net-flow/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NetFlow::FlowExporterMaps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<NetFlow::FlowExporterMaps::FlowExporterMap>();
        c->parent = this;
        flow_exporter_map.push_back(std::move(c));
        children[segment_path] = flow_exporter_map.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NetFlow::FlowExporterMaps::get_children()
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

void NetFlow::FlowExporterMaps::set_value(const std::string & value_path, std::string value)
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
    path_buffer << "sampling-mode" <<"[mode='" <<mode.get() <<"']";

    return path_buffer.str();

}

EntityPath NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes::SamplingMode::get_entity_path(Entity* ancestor) const
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

    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (sample_number.is_set || is_set(sample_number.operation)) leaf_name_data.push_back(sample_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes::SamplingMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes::SamplingMode::get_children()
{
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

EntityPath NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes::get_entity_path(Entity* ancestor) const
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

Entity* NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sampling-mode")
    {
        for(auto const & c : sampling_mode)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes::SamplingMode>();
        c->parent = this;
        sampling_mode.push_back(std::move(c));
        children[segment_path] = sampling_mode.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes::get_children()
{
    for (auto const & c : sampling_mode)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes::set_value(const std::string & value_path, std::string value)
{
}

NetFlow::FlowSamplerMaps::FlowSamplerMap::FlowSamplerMap()
    :
    	sampler_map_name{YType::str, "sampler-map-name"}
    	,
    sampling_modes(std::make_unique<NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes>())
{
    sampling_modes->parent = this;
    children["sampling-modes"] = sampling_modes.get();

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
	|| (sampling_modes !=  nullptr && is_set(sampling_modes->operation));
}

std::string NetFlow::FlowSamplerMaps::FlowSamplerMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-sampler-map" <<"[sampler-map-name='" <<sampler_map_name.get() <<"']";

    return path_buffer.str();

}

EntityPath NetFlow::FlowSamplerMaps::FlowSamplerMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-traffmon-netflow-cfg:net-flow/flow-sampler-maps/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sampler_map_name.is_set || is_set(sampler_map_name.operation)) leaf_name_data.push_back(sampler_map_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NetFlow::FlowSamplerMaps::FlowSamplerMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sampling-modes")
    {
        if(sampling_modes != nullptr)
        {
            children["sampling-modes"] = sampling_modes.get();
        }
        else
        {
            sampling_modes = std::make_unique<NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes>();
            sampling_modes->parent = this;
            children["sampling-modes"] = sampling_modes.get();
        }
        return children.at("sampling-modes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & NetFlow::FlowSamplerMaps::FlowSamplerMap::get_children()
{
    if(children.find("sampling-modes") == children.end())
    {
        if(sampling_modes != nullptr)
        {
            children["sampling-modes"] = sampling_modes.get();
        }
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

EntityPath NetFlow::FlowSamplerMaps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-traffmon-netflow-cfg:net-flow/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NetFlow::FlowSamplerMaps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<NetFlow::FlowSamplerMaps::FlowSamplerMap>();
        c->parent = this;
        flow_sampler_map.push_back(std::move(c));
        children[segment_path] = flow_sampler_map.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NetFlow::FlowSamplerMaps::get_children()
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

void NetFlow::FlowSamplerMaps::set_value(const std::string & value_path, std::string value)
{
}

NetFlow::FlowMonitorMapTable::FlowMonitorMap::Option::Option()
    :
    	filtered{YType::empty, "filtered"},
	 out_phys_int{YType::empty, "out-phys-int"}
{
    yang_name = "option"; yang_parent_name = "flow-monitor-map";
}

NetFlow::FlowMonitorMapTable::FlowMonitorMap::Option::~Option()
{
}

bool NetFlow::FlowMonitorMapTable::FlowMonitorMap::Option::has_data() const
{
    return filtered.is_set
	|| out_phys_int.is_set;
}

bool NetFlow::FlowMonitorMapTable::FlowMonitorMap::Option::has_operation() const
{
    return is_set(operation)
	|| is_set(filtered.operation)
	|| is_set(out_phys_int.operation);
}

std::string NetFlow::FlowMonitorMapTable::FlowMonitorMap::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";

    return path_buffer.str();

}

EntityPath NetFlow::FlowMonitorMapTable::FlowMonitorMap::Option::get_entity_path(Entity* ancestor) const
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

    if (filtered.is_set || is_set(filtered.operation)) leaf_name_data.push_back(filtered.get_name_leafdata());
    if (out_phys_int.is_set || is_set(out_phys_int.operation)) leaf_name_data.push_back(out_phys_int.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NetFlow::FlowMonitorMapTable::FlowMonitorMap::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & NetFlow::FlowMonitorMapTable::FlowMonitorMap::Option::get_children()
{
    return children;
}

void NetFlow::FlowMonitorMapTable::FlowMonitorMap::Option::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "filtered")
    {
        filtered = value;
    }
    if(value_path == "out-phys-int")
    {
        out_phys_int = value;
    }
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
    path_buffer << "exporter" <<"[exporter-name='" <<exporter_name.get() <<"']";

    return path_buffer.str();

}

EntityPath NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters::Exporter::get_entity_path(Entity* ancestor) const
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

Entity* NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters::Exporter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters::Exporter::get_children()
{
    return children;
}

void NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters::Exporter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "exporter-name")
    {
        exporter_name = value;
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

EntityPath NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters::get_entity_path(Entity* ancestor) const
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

Entity* NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters::Exporter>();
        c->parent = this;
        exporter.push_back(std::move(c));
        children[segment_path] = exporter.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters::get_children()
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

void NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters::set_value(const std::string & value_path, std::string value)
{
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

EntityPath NetFlow::FlowMonitorMapTable::FlowMonitorMap::Record::get_entity_path(Entity* ancestor) const
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

    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());
    if (record_name.is_set || is_set(record_name.operation)) leaf_name_data.push_back(record_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NetFlow::FlowMonitorMapTable::FlowMonitorMap::Record::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & NetFlow::FlowMonitorMapTable::FlowMonitorMap::Record::get_children()
{
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
    exporters(std::make_unique<NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters>())
	,option(std::make_unique<NetFlow::FlowMonitorMapTable::FlowMonitorMap::Option>())
	,record(nullptr) // presence node
{
    exporters->parent = this;
    children["exporters"] = exporters.get();

    option->parent = this;
    children["option"] = option.get();

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
	|| (exporters !=  nullptr && is_set(exporters->operation))
	|| (option !=  nullptr && is_set(option->operation))
	|| (record !=  nullptr && is_set(record->operation));
}

std::string NetFlow::FlowMonitorMapTable::FlowMonitorMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-monitor-map" <<"[monitor-map-name='" <<monitor_map_name.get() <<"']";

    return path_buffer.str();

}

EntityPath NetFlow::FlowMonitorMapTable::FlowMonitorMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-traffmon-netflow-cfg:net-flow/flow-monitor-map-table/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
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

Entity* NetFlow::FlowMonitorMapTable::FlowMonitorMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "exporters")
    {
        if(exporters != nullptr)
        {
            children["exporters"] = exporters.get();
        }
        else
        {
            exporters = std::make_unique<NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters>();
            exporters->parent = this;
            children["exporters"] = exporters.get();
        }
        return children.at("exporters");
    }

    if(child_yang_name == "option")
    {
        if(option != nullptr)
        {
            children["option"] = option.get();
        }
        else
        {
            option = std::make_unique<NetFlow::FlowMonitorMapTable::FlowMonitorMap::Option>();
            option->parent = this;
            children["option"] = option.get();
        }
        return children.at("option");
    }

    if(child_yang_name == "record")
    {
        if(record != nullptr)
        {
            children["record"] = record.get();
        }
        else
        {
            record = std::make_unique<NetFlow::FlowMonitorMapTable::FlowMonitorMap::Record>();
            record->parent = this;
            children["record"] = record.get();
        }
        return children.at("record");
    }

    return nullptr;
}

std::map<std::string, Entity*> & NetFlow::FlowMonitorMapTable::FlowMonitorMap::get_children()
{
    if(children.find("exporters") == children.end())
    {
        if(exporters != nullptr)
        {
            children["exporters"] = exporters.get();
        }
    }

    if(children.find("option") == children.end())
    {
        if(option != nullptr)
        {
            children["option"] = option.get();
        }
    }

    if(children.find("record") == children.end())
    {
        if(record != nullptr)
        {
            children["record"] = record.get();
        }
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

EntityPath NetFlow::FlowMonitorMapTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-traffmon-netflow-cfg:net-flow/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NetFlow::FlowMonitorMapTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<NetFlow::FlowMonitorMapTable::FlowMonitorMap>();
        c->parent = this;
        flow_monitor_map.push_back(std::move(c));
        children[segment_path] = flow_monitor_map.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NetFlow::FlowMonitorMapTable::get_children()
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

void NetFlow::FlowMonitorMapTable::set_value(const std::string & value_path, std::string value)
{
}

NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Option::Option()
    :
    	filtered{YType::empty, "filtered"},
	 out_phys_int{YType::empty, "out-phys-int"}
{
    yang_name = "option"; yang_parent_name = "flow-monitor-map";
}

NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Option::~Option()
{
}

bool NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Option::has_data() const
{
    return filtered.is_set
	|| out_phys_int.is_set;
}

bool NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Option::has_operation() const
{
    return is_set(operation)
	|| is_set(filtered.operation)
	|| is_set(out_phys_int.operation);
}

std::string NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";

    return path_buffer.str();

}

EntityPath NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Option::get_entity_path(Entity* ancestor) const
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

    if (filtered.is_set || is_set(filtered.operation)) leaf_name_data.push_back(filtered.get_name_leafdata());
    if (out_phys_int.is_set || is_set(out_phys_int.operation)) leaf_name_data.push_back(out_phys_int.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Option::get_children()
{
    return children;
}

void NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Option::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "filtered")
    {
        filtered = value;
    }
    if(value_path == "out-phys-int")
    {
        out_phys_int = value;
    }
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
    path_buffer << "exporter" <<"[exporter-name='" <<exporter_name.get() <<"']";

    return path_buffer.str();

}

EntityPath NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters::Exporter::get_entity_path(Entity* ancestor) const
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

Entity* NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters::Exporter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters::Exporter::get_children()
{
    return children;
}

void NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters::Exporter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "exporter-name")
    {
        exporter_name = value;
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

EntityPath NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters::get_entity_path(Entity* ancestor) const
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

Entity* NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters::Exporter>();
        c->parent = this;
        exporter.push_back(std::move(c));
        children[segment_path] = exporter.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters::get_children()
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

void NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters::set_value(const std::string & value_path, std::string value)
{
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

EntityPath NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Record::get_entity_path(Entity* ancestor) const
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

    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());
    if (record_name.is_set || is_set(record_name.operation)) leaf_name_data.push_back(record_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Record::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Record::get_children()
{
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
    exporters(std::make_unique<NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters>())
	,option(std::make_unique<NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Option>())
	,record(nullptr) // presence node
{
    exporters->parent = this;
    children["exporters"] = exporters.get();

    option->parent = this;
    children["option"] = option.get();

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
	|| (exporters !=  nullptr && is_set(exporters->operation))
	|| (option !=  nullptr && is_set(option->operation))
	|| (record !=  nullptr && is_set(record->operation));
}

std::string NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-monitor-map" <<"[monitor-map-name='" <<monitor_map_name.get() <<"']";

    return path_buffer.str();

}

EntityPath NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-traffmon-netflow-cfg:net-flow/flow-monitor-map-performance-table/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
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

Entity* NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "exporters")
    {
        if(exporters != nullptr)
        {
            children["exporters"] = exporters.get();
        }
        else
        {
            exporters = std::make_unique<NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters>();
            exporters->parent = this;
            children["exporters"] = exporters.get();
        }
        return children.at("exporters");
    }

    if(child_yang_name == "option")
    {
        if(option != nullptr)
        {
            children["option"] = option.get();
        }
        else
        {
            option = std::make_unique<NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Option>();
            option->parent = this;
            children["option"] = option.get();
        }
        return children.at("option");
    }

    if(child_yang_name == "record")
    {
        if(record != nullptr)
        {
            children["record"] = record.get();
        }
        else
        {
            record = std::make_unique<NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Record>();
            record->parent = this;
            children["record"] = record.get();
        }
        return children.at("record");
    }

    return nullptr;
}

std::map<std::string, Entity*> & NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::get_children()
{
    if(children.find("exporters") == children.end())
    {
        if(exporters != nullptr)
        {
            children["exporters"] = exporters.get();
        }
    }

    if(children.find("option") == children.end())
    {
        if(option != nullptr)
        {
            children["option"] = option.get();
        }
    }

    if(children.find("record") == children.end())
    {
        if(record != nullptr)
        {
            children["record"] = record.get();
        }
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

EntityPath NetFlow::FlowMonitorMapPerformanceTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-traffmon-netflow-cfg:net-flow/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NetFlow::FlowMonitorMapPerformanceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap>();
        c->parent = this;
        flow_monitor_map.push_back(std::move(c));
        children[segment_path] = flow_monitor_map.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NetFlow::FlowMonitorMapPerformanceTable::get_children()
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

void NetFlow::FlowMonitorMapPerformanceTable::set_value(const std::string & value_path, std::string value)
{
}

NetFlow::NetFlow()
    :
    flow_exporter_maps(std::make_unique<NetFlow::FlowExporterMaps>())
	,flow_monitor_map_performance_table(std::make_unique<NetFlow::FlowMonitorMapPerformanceTable>())
	,flow_monitor_map_table(std::make_unique<NetFlow::FlowMonitorMapTable>())
	,flow_sampler_maps(std::make_unique<NetFlow::FlowSamplerMaps>())
{
    flow_exporter_maps->parent = this;
    children["flow-exporter-maps"] = flow_exporter_maps.get();

    flow_monitor_map_performance_table->parent = this;
    children["flow-monitor-map-performance-table"] = flow_monitor_map_performance_table.get();

    flow_monitor_map_table->parent = this;
    children["flow-monitor-map-table"] = flow_monitor_map_table.get();

    flow_sampler_maps->parent = this;
    children["flow-sampler-maps"] = flow_sampler_maps.get();

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
	|| (flow_exporter_maps !=  nullptr && is_set(flow_exporter_maps->operation))
	|| (flow_monitor_map_performance_table !=  nullptr && is_set(flow_monitor_map_performance_table->operation))
	|| (flow_monitor_map_table !=  nullptr && is_set(flow_monitor_map_table->operation))
	|| (flow_sampler_maps !=  nullptr && is_set(flow_sampler_maps->operation));
}

std::string NetFlow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-traffmon-netflow-cfg:net-flow";

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

    if(child_yang_name == "flow-exporter-maps")
    {
        if(flow_exporter_maps != nullptr)
        {
            children["flow-exporter-maps"] = flow_exporter_maps.get();
        }
        else
        {
            flow_exporter_maps = std::make_unique<NetFlow::FlowExporterMaps>();
            flow_exporter_maps->parent = this;
            children["flow-exporter-maps"] = flow_exporter_maps.get();
        }
        return children.at("flow-exporter-maps");
    }

    if(child_yang_name == "flow-monitor-map-performance-table")
    {
        if(flow_monitor_map_performance_table != nullptr)
        {
            children["flow-monitor-map-performance-table"] = flow_monitor_map_performance_table.get();
        }
        else
        {
            flow_monitor_map_performance_table = std::make_unique<NetFlow::FlowMonitorMapPerformanceTable>();
            flow_monitor_map_performance_table->parent = this;
            children["flow-monitor-map-performance-table"] = flow_monitor_map_performance_table.get();
        }
        return children.at("flow-monitor-map-performance-table");
    }

    if(child_yang_name == "flow-monitor-map-table")
    {
        if(flow_monitor_map_table != nullptr)
        {
            children["flow-monitor-map-table"] = flow_monitor_map_table.get();
        }
        else
        {
            flow_monitor_map_table = std::make_unique<NetFlow::FlowMonitorMapTable>();
            flow_monitor_map_table->parent = this;
            children["flow-monitor-map-table"] = flow_monitor_map_table.get();
        }
        return children.at("flow-monitor-map-table");
    }

    if(child_yang_name == "flow-sampler-maps")
    {
        if(flow_sampler_maps != nullptr)
        {
            children["flow-sampler-maps"] = flow_sampler_maps.get();
        }
        else
        {
            flow_sampler_maps = std::make_unique<NetFlow::FlowSamplerMaps>();
            flow_sampler_maps->parent = this;
            children["flow-sampler-maps"] = flow_sampler_maps.get();
        }
        return children.at("flow-sampler-maps");
    }

    return nullptr;
}

std::map<std::string, Entity*> & NetFlow::get_children()
{
    if(children.find("flow-exporter-maps") == children.end())
    {
        if(flow_exporter_maps != nullptr)
        {
            children["flow-exporter-maps"] = flow_exporter_maps.get();
        }
    }

    if(children.find("flow-monitor-map-performance-table") == children.end())
    {
        if(flow_monitor_map_performance_table != nullptr)
        {
            children["flow-monitor-map-performance-table"] = flow_monitor_map_performance_table.get();
        }
    }

    if(children.find("flow-monitor-map-table") == children.end())
    {
        if(flow_monitor_map_table != nullptr)
        {
            children["flow-monitor-map-table"] = flow_monitor_map_table.get();
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

void NetFlow::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> NetFlow::clone_ptr()
{
    return std::make_unique<NetFlow>();
}

const Enum::Value NfSamplingModeEnum::random {2, "random"};

const Enum::Value NfCacheAgingModeEnum::normal {0, "normal"};
const Enum::Value NfCacheAgingModeEnum::permanent {1, "permanent"};


}
}

