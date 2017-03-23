
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ifmgr_cfg_1.hpp"
#include "Cisco_IOS_XR_ifmgr_cfg_2.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ifmgr_cfg {

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::FlowMonitorName::FlowMonitorName()
    :
    monitor_map_name{YType::str, "monitor-map-name"},
    sampler_map_name{YType::str, "sampler-map-name"}
{
    yang_name = "flow-monitor-name"; yang_parent_name = "ingress";
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::FlowMonitorName::~FlowMonitorName()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::FlowMonitorName::has_data() const
{
    return monitor_map_name.is_set
	|| sampler_map_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::FlowMonitorName::has_operation() const
{
    return is_set(operation)
	|| is_set(monitor_map_name.operation)
	|| is_set(sampler_map_name.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::FlowMonitorName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-monitor-name" <<"[monitor-map-name='" <<monitor_map_name <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::FlowMonitorName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FlowMonitorName' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor_map_name.is_set || is_set(monitor_map_name.operation)) leaf_name_data.push_back(monitor_map_name.get_name_leafdata());
    if (sampler_map_name.is_set || is_set(sampler_map_name.operation)) leaf_name_data.push_back(sampler_map_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::FlowMonitorName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::FlowMonitorName::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::FlowMonitorName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "monitor-map-name")
    {
        monitor_map_name = value;
    }
    if(value_path == "sampler-map-name")
    {
        sampler_map_name = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::Egress()
{
    yang_name = "egress"; yang_parent_name = "flow-monitor-map";
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::~Egress()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::has_data() const
{
    for (std::size_t index=0; index<flow_monitor_name.size(); index++)
    {
        if(flow_monitor_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::has_operation() const
{
    for (std::size_t index=0; index<flow_monitor_name.size(); index++)
    {
        if(flow_monitor_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "egress";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Egress' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flow-monitor-name")
    {
        for(auto const & c : flow_monitor_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::FlowMonitorName>();
        c->parent = this;
        flow_monitor_name.push_back(std::move(c));
        children[segment_path] = flow_monitor_name.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::get_children()
{
    for (auto const & c : flow_monitor_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::FlowMonitorName::FlowMonitorName()
    :
    monitor_map_name{YType::str, "monitor-map-name"},
    sampler_map_name{YType::str, "sampler-map-name"}
{
    yang_name = "flow-monitor-name"; yang_parent_name = "egress";
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::FlowMonitorName::~FlowMonitorName()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::FlowMonitorName::has_data() const
{
    return monitor_map_name.is_set
	|| sampler_map_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::FlowMonitorName::has_operation() const
{
    return is_set(operation)
	|| is_set(monitor_map_name.operation)
	|| is_set(sampler_map_name.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::FlowMonitorName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-monitor-name" <<"[monitor-map-name='" <<monitor_map_name <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::FlowMonitorName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FlowMonitorName' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor_map_name.is_set || is_set(monitor_map_name.operation)) leaf_name_data.push_back(monitor_map_name.get_name_leafdata());
    if (sampler_map_name.is_set || is_set(sampler_map_name.operation)) leaf_name_data.push_back(sampler_map_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::FlowMonitorName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::FlowMonitorName::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::FlowMonitorName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "monitor-map-name")
    {
        monitor_map_name = value;
    }
    if(value_path == "sampler-map-name")
    {
        sampler_map_name = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::Ipv6()
    :
    flow_monitor_map(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap>())
{
    flow_monitor_map->parent = this;
    children["flow-monitor-map"] = flow_monitor_map;

    yang_name = "ipv6"; yang_parent_name = "net-flow";
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::~Ipv6()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::has_data() const
{
    return (flow_monitor_map !=  nullptr && flow_monitor_map->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::has_operation() const
{
    return is_set(operation)
	|| (flow_monitor_map !=  nullptr && flow_monitor_map->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        if(flow_monitor_map != nullptr)
        {
            children["flow-monitor-map"] = flow_monitor_map;
        }
        else
        {
            flow_monitor_map = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap>();
            flow_monitor_map->parent = this;
            children["flow-monitor-map"] = flow_monitor_map;
        }
        return children.at("flow-monitor-map");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::get_children()
{
    if(children.find("flow-monitor-map") == children.end())
    {
        if(flow_monitor_map != nullptr)
        {
            children["flow-monitor-map"] = flow_monitor_map;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::FlowMonitorMap()
    :
    egress(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress>())
	,ingress(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress>())
{
    egress->parent = this;
    children["egress"] = egress;

    ingress->parent = this;
    children["ingress"] = ingress;

    yang_name = "flow-monitor-map"; yang_parent_name = "ipv6";
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::~FlowMonitorMap()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::has_data() const
{
    return (egress !=  nullptr && egress->has_data())
	|| (ingress !=  nullptr && ingress->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::has_operation() const
{
    return is_set(operation)
	|| (egress !=  nullptr && egress->has_operation())
	|| (ingress !=  nullptr && ingress->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-monitor-map";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FlowMonitorMap' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "egress")
    {
        if(egress != nullptr)
        {
            children["egress"] = egress;
        }
        else
        {
            egress = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress>();
            egress->parent = this;
            children["egress"] = egress;
        }
        return children.at("egress");
    }

    if(child_yang_name == "ingress")
    {
        if(ingress != nullptr)
        {
            children["ingress"] = ingress;
        }
        else
        {
            ingress = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress>();
            ingress->parent = this;
            children["ingress"] = ingress;
        }
        return children.at("ingress");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::get_children()
{
    if(children.find("egress") == children.end())
    {
        if(egress != nullptr)
        {
            children["egress"] = egress;
        }
    }

    if(children.find("ingress") == children.end())
    {
        if(ingress != nullptr)
        {
            children["ingress"] = ingress;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::Ingress()
{
    yang_name = "ingress"; yang_parent_name = "flow-monitor-map";
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::~Ingress()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::has_data() const
{
    for (std::size_t index=0; index<flow_monitor_name.size(); index++)
    {
        if(flow_monitor_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::has_operation() const
{
    for (std::size_t index=0; index<flow_monitor_name.size(); index++)
    {
        if(flow_monitor_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ingress";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ingress' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flow-monitor-name")
    {
        for(auto const & c : flow_monitor_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::FlowMonitorName>();
        c->parent = this;
        flow_monitor_name.push_back(std::move(c));
        children[segment_path] = flow_monitor_name.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::get_children()
{
    for (auto const & c : flow_monitor_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::FlowMonitorName::FlowMonitorName()
    :
    monitor_map_name{YType::str, "monitor-map-name"},
    sampler_map_name{YType::str, "sampler-map-name"}
{
    yang_name = "flow-monitor-name"; yang_parent_name = "ingress";
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::FlowMonitorName::~FlowMonitorName()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::FlowMonitorName::has_data() const
{
    return monitor_map_name.is_set
	|| sampler_map_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::FlowMonitorName::has_operation() const
{
    return is_set(operation)
	|| is_set(monitor_map_name.operation)
	|| is_set(sampler_map_name.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::FlowMonitorName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-monitor-name" <<"[monitor-map-name='" <<monitor_map_name <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::FlowMonitorName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FlowMonitorName' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor_map_name.is_set || is_set(monitor_map_name.operation)) leaf_name_data.push_back(monitor_map_name.get_name_leafdata());
    if (sampler_map_name.is_set || is_set(sampler_map_name.operation)) leaf_name_data.push_back(sampler_map_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::FlowMonitorName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::FlowMonitorName::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::FlowMonitorName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "monitor-map-name")
    {
        monitor_map_name = value;
    }
    if(value_path == "sampler-map-name")
    {
        sampler_map_name = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::Egress()
{
    yang_name = "egress"; yang_parent_name = "flow-monitor-map";
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::~Egress()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::has_data() const
{
    for (std::size_t index=0; index<flow_monitor_name.size(); index++)
    {
        if(flow_monitor_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::has_operation() const
{
    for (std::size_t index=0; index<flow_monitor_name.size(); index++)
    {
        if(flow_monitor_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "egress";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Egress' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flow-monitor-name")
    {
        for(auto const & c : flow_monitor_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::FlowMonitorName>();
        c->parent = this;
        flow_monitor_name.push_back(std::move(c));
        children[segment_path] = flow_monitor_name.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::get_children()
{
    for (auto const & c : flow_monitor_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::FlowMonitorName::FlowMonitorName()
    :
    monitor_map_name{YType::str, "monitor-map-name"},
    sampler_map_name{YType::str, "sampler-map-name"}
{
    yang_name = "flow-monitor-name"; yang_parent_name = "egress";
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::FlowMonitorName::~FlowMonitorName()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::FlowMonitorName::has_data() const
{
    return monitor_map_name.is_set
	|| sampler_map_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::FlowMonitorName::has_operation() const
{
    return is_set(operation)
	|| is_set(monitor_map_name.operation)
	|| is_set(sampler_map_name.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::FlowMonitorName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-monitor-name" <<"[monitor-map-name='" <<monitor_map_name <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::FlowMonitorName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FlowMonitorName' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor_map_name.is_set || is_set(monitor_map_name.operation)) leaf_name_data.push_back(monitor_map_name.get_name_leafdata());
    if (sampler_map_name.is_set || is_set(sampler_map_name.operation)) leaf_name_data.push_back(sampler_map_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::FlowMonitorName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::FlowMonitorName::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::FlowMonitorName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "monitor-map-name")
    {
        monitor_map_name = value;
    }
    if(value_path == "sampler-map-name")
    {
        sampler_map_name = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::Ipv4()
    :
    flow_monitor_map(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap>())
{
    flow_monitor_map->parent = this;
    children["flow-monitor-map"] = flow_monitor_map;

    yang_name = "ipv4"; yang_parent_name = "net-flow";
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::~Ipv4()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::has_data() const
{
    return (flow_monitor_map !=  nullptr && flow_monitor_map->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::has_operation() const
{
    return is_set(operation)
	|| (flow_monitor_map !=  nullptr && flow_monitor_map->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        if(flow_monitor_map != nullptr)
        {
            children["flow-monitor-map"] = flow_monitor_map;
        }
        else
        {
            flow_monitor_map = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap>();
            flow_monitor_map->parent = this;
            children["flow-monitor-map"] = flow_monitor_map;
        }
        return children.at("flow-monitor-map");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::get_children()
{
    if(children.find("flow-monitor-map") == children.end())
    {
        if(flow_monitor_map != nullptr)
        {
            children["flow-monitor-map"] = flow_monitor_map;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::FlowMonitorMap()
    :
    egress(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress>())
	,ingress(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress>())
{
    egress->parent = this;
    children["egress"] = egress;

    ingress->parent = this;
    children["ingress"] = ingress;

    yang_name = "flow-monitor-map"; yang_parent_name = "ipv4";
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::~FlowMonitorMap()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::has_data() const
{
    return (egress !=  nullptr && egress->has_data())
	|| (ingress !=  nullptr && ingress->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::has_operation() const
{
    return is_set(operation)
	|| (egress !=  nullptr && egress->has_operation())
	|| (ingress !=  nullptr && ingress->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-monitor-map";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FlowMonitorMap' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "egress")
    {
        if(egress != nullptr)
        {
            children["egress"] = egress;
        }
        else
        {
            egress = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress>();
            egress->parent = this;
            children["egress"] = egress;
        }
        return children.at("egress");
    }

    if(child_yang_name == "ingress")
    {
        if(ingress != nullptr)
        {
            children["ingress"] = ingress;
        }
        else
        {
            ingress = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress>();
            ingress->parent = this;
            children["ingress"] = ingress;
        }
        return children.at("ingress");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::get_children()
{
    if(children.find("egress") == children.end())
    {
        if(egress != nullptr)
        {
            children["egress"] = egress;
        }
    }

    if(children.find("ingress") == children.end())
    {
        if(ingress != nullptr)
        {
            children["ingress"] = ingress;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::Ingress()
{
    yang_name = "ingress"; yang_parent_name = "flow-monitor-map";
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::~Ingress()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::has_data() const
{
    for (std::size_t index=0; index<flow_monitor_name.size(); index++)
    {
        if(flow_monitor_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::has_operation() const
{
    for (std::size_t index=0; index<flow_monitor_name.size(); index++)
    {
        if(flow_monitor_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ingress";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ingress' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flow-monitor-name")
    {
        for(auto const & c : flow_monitor_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::FlowMonitorName>();
        c->parent = this;
        flow_monitor_name.push_back(std::move(c));
        children[segment_path] = flow_monitor_name.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::get_children()
{
    for (auto const & c : flow_monitor_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::FlowMonitorName::FlowMonitorName()
    :
    monitor_map_name{YType::str, "monitor-map-name"},
    sampler_map_name{YType::str, "sampler-map-name"}
{
    yang_name = "flow-monitor-name"; yang_parent_name = "ingress";
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::FlowMonitorName::~FlowMonitorName()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::FlowMonitorName::has_data() const
{
    return monitor_map_name.is_set
	|| sampler_map_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::FlowMonitorName::has_operation() const
{
    return is_set(operation)
	|| is_set(monitor_map_name.operation)
	|| is_set(sampler_map_name.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::FlowMonitorName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-monitor-name" <<"[monitor-map-name='" <<monitor_map_name <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::FlowMonitorName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FlowMonitorName' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor_map_name.is_set || is_set(monitor_map_name.operation)) leaf_name_data.push_back(monitor_map_name.get_name_leafdata());
    if (sampler_map_name.is_set || is_set(sampler_map_name.operation)) leaf_name_data.push_back(sampler_map_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::FlowMonitorName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::FlowMonitorName::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::FlowMonitorName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "monitor-map-name")
    {
        monitor_map_name = value;
    }
    if(value_path == "sampler-map-name")
    {
        sampler_map_name = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::Egress()
{
    yang_name = "egress"; yang_parent_name = "flow-monitor-map";
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::~Egress()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::has_data() const
{
    for (std::size_t index=0; index<flow_monitor_name.size(); index++)
    {
        if(flow_monitor_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::has_operation() const
{
    for (std::size_t index=0; index<flow_monitor_name.size(); index++)
    {
        if(flow_monitor_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "egress";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Egress' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flow-monitor-name")
    {
        for(auto const & c : flow_monitor_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::FlowMonitorName>();
        c->parent = this;
        flow_monitor_name.push_back(std::move(c));
        children[segment_path] = flow_monitor_name.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::get_children()
{
    for (auto const & c : flow_monitor_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::FlowMonitorName::FlowMonitorName()
    :
    monitor_map_name{YType::str, "monitor-map-name"},
    sampler_map_name{YType::str, "sampler-map-name"}
{
    yang_name = "flow-monitor-name"; yang_parent_name = "egress";
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::FlowMonitorName::~FlowMonitorName()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::FlowMonitorName::has_data() const
{
    return monitor_map_name.is_set
	|| sampler_map_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::FlowMonitorName::has_operation() const
{
    return is_set(operation)
	|| is_set(monitor_map_name.operation)
	|| is_set(sampler_map_name.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::FlowMonitorName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-monitor-name" <<"[monitor-map-name='" <<monitor_map_name <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::FlowMonitorName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FlowMonitorName' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor_map_name.is_set || is_set(monitor_map_name.operation)) leaf_name_data.push_back(monitor_map_name.get_name_leafdata());
    if (sampler_map_name.is_set || is_set(sampler_map_name.operation)) leaf_name_data.push_back(sampler_map_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::FlowMonitorName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::FlowMonitorName::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::FlowMonitorName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "monitor-map-name")
    {
        monitor_map_name = value;
    }
    if(value_path == "sampler-map-name")
    {
        sampler_map_name = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Lldp::Lldp()
    :
    lldp_intf_enter{YType::boolean, "lldp-intf-enter"}
    	,
    receive(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive>())
	,transmit(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit>())
{
    receive->parent = this;
    children["receive"] = receive;

    transmit->parent = this;
    children["transmit"] = transmit;

    yang_name = "lldp"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::Lldp::~Lldp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Lldp::has_data() const
{
    return lldp_intf_enter.is_set
	|| (receive !=  nullptr && receive->has_data())
	|| (transmit !=  nullptr && transmit->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Lldp::has_operation() const
{
    return is_set(operation)
	|| is_set(lldp_intf_enter.operation)
	|| (receive !=  nullptr && receive->has_operation())
	|| (transmit !=  nullptr && transmit->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Lldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ethernet-lldp-cfg:lldp";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Lldp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lldp' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lldp_intf_enter.is_set || is_set(lldp_intf_enter.operation)) leaf_name_data.push_back(lldp_intf_enter.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Lldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "receive")
    {
        if(receive != nullptr)
        {
            children["receive"] = receive;
        }
        else
        {
            receive = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive>();
            receive->parent = this;
            children["receive"] = receive;
        }
        return children.at("receive");
    }

    if(child_yang_name == "transmit")
    {
        if(transmit != nullptr)
        {
            children["transmit"] = transmit;
        }
        else
        {
            transmit = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit>();
            transmit->parent = this;
            children["transmit"] = transmit;
        }
        return children.at("transmit");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Lldp::get_children()
{
    if(children.find("receive") == children.end())
    {
        if(receive != nullptr)
        {
            children["receive"] = receive;
        }
    }

    if(children.find("transmit") == children.end())
    {
        if(transmit != nullptr)
        {
            children["transmit"] = transmit;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Lldp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lldp-intf-enter")
    {
        lldp_intf_enter = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit::Transmit()
    :
    disable{YType::boolean, "disable"}
{
    yang_name = "transmit"; yang_parent_name = "lldp";
}

InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit::~Transmit()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit::has_data() const
{
    return disable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Transmit' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive::Receive()
    :
    disable{YType::boolean, "disable"}
{
    yang_name = "receive"; yang_parent_name = "lldp";
}

InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive::~Receive()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive::has_data() const
{
    return disable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Receive' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Atm()
    :
    max_vpi_bits{YType::enumeration, "max-vpi-bits"},
    vc_class{YType::str, "vc-class"}
    	,
    maximum_cell_packing_timers(nullptr) // presence node
	,pvcs(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs>())
	,pvps(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps>())
	,vp_tunnels(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels>())
{
    pvcs->parent = this;
    children["pvcs"] = pvcs;

    pvps->parent = this;
    children["pvps"] = pvps;

    vp_tunnels->parent = this;
    children["vp-tunnels"] = vp_tunnels;

    yang_name = "atm"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::Atm::~Atm()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::has_data() const
{
    return max_vpi_bits.is_set
	|| vc_class.is_set
	|| (maximum_cell_packing_timers !=  nullptr && maximum_cell_packing_timers->has_data())
	|| (pvcs !=  nullptr && pvcs->has_data())
	|| (pvps !=  nullptr && pvps->has_data())
	|| (vp_tunnels !=  nullptr && vp_tunnels->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::has_operation() const
{
    return is_set(operation)
	|| is_set(max_vpi_bits.operation)
	|| is_set(vc_class.operation)
	|| (maximum_cell_packing_timers !=  nullptr && maximum_cell_packing_timers->has_operation())
	|| (pvcs !=  nullptr && pvcs->has_operation())
	|| (pvps !=  nullptr && pvps->has_operation())
	|| (vp_tunnels !=  nullptr && vp_tunnels->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Atm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-atm-vcm-cfg:atm";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Atm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Atm' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_vpi_bits.is_set || is_set(max_vpi_bits.operation)) leaf_name_data.push_back(max_vpi_bits.get_name_leafdata());
    if (vc_class.is_set || is_set(vc_class.operation)) leaf_name_data.push_back(vc_class.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Atm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "maximum-cell-packing-timers")
    {
        if(maximum_cell_packing_timers != nullptr)
        {
            children["maximum-cell-packing-timers"] = maximum_cell_packing_timers;
        }
        else
        {
            maximum_cell_packing_timers = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::MaximumCellPackingTimers>();
            maximum_cell_packing_timers->parent = this;
            children["maximum-cell-packing-timers"] = maximum_cell_packing_timers;
        }
        return children.at("maximum-cell-packing-timers");
    }

    if(child_yang_name == "pvcs")
    {
        if(pvcs != nullptr)
        {
            children["pvcs"] = pvcs;
        }
        else
        {
            pvcs = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs>();
            pvcs->parent = this;
            children["pvcs"] = pvcs;
        }
        return children.at("pvcs");
    }

    if(child_yang_name == "pvps")
    {
        if(pvps != nullptr)
        {
            children["pvps"] = pvps;
        }
        else
        {
            pvps = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps>();
            pvps->parent = this;
            children["pvps"] = pvps;
        }
        return children.at("pvps");
    }

    if(child_yang_name == "vp-tunnels")
    {
        if(vp_tunnels != nullptr)
        {
            children["vp-tunnels"] = vp_tunnels;
        }
        else
        {
            vp_tunnels = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels>();
            vp_tunnels->parent = this;
            children["vp-tunnels"] = vp_tunnels;
        }
        return children.at("vp-tunnels");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Atm::get_children()
{
    if(children.find("maximum-cell-packing-timers") == children.end())
    {
        if(maximum_cell_packing_timers != nullptr)
        {
            children["maximum-cell-packing-timers"] = maximum_cell_packing_timers;
        }
    }

    if(children.find("pvcs") == children.end())
    {
        if(pvcs != nullptr)
        {
            children["pvcs"] = pvcs;
        }
    }

    if(children.find("pvps") == children.end())
    {
        if(pvps != nullptr)
        {
            children["pvps"] = pvps;
        }
    }

    if(children.find("vp-tunnels") == children.end())
    {
        if(vp_tunnels != nullptr)
        {
            children["vp-tunnels"] = vp_tunnels;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-vpi-bits")
    {
        max_vpi_bits = value;
    }
    if(value_path == "vc-class")
    {
        vc_class = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvps()
{
    yang_name = "pvps"; yang_parent_name = "atm";
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::~Pvps()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::has_data() const
{
    for (std::size_t index=0; index<pvp.size(); index++)
    {
        if(pvp[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::has_operation() const
{
    for (std::size_t index=0; index<pvp.size(); index++)
    {
        if(pvp[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pvps";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pvps' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "pvp")
    {
        for(auto const & c : pvp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp>();
        c->parent = this;
        pvp.push_back(std::move(c));
        children[segment_path] = pvp.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::get_children()
{
    for (auto const & c : pvp)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Pvp()
    :
    vpi{YType::uint32, "vpi"},
    enable{YType::empty, "enable"},
    oam_segment_endpoint{YType::empty, "oam-segment-endpoint"},
    test_mode{YType::enumeration, "test-mode"}
    	,
    cell_packing(nullptr) // presence node
	,shape(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape>())
{
    shape->parent = this;
    children["shape"] = shape;

    yang_name = "pvp"; yang_parent_name = "pvps";
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::~Pvp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::has_data() const
{
    return vpi.is_set
	|| enable.is_set
	|| oam_segment_endpoint.is_set
	|| test_mode.is_set
	|| (cell_packing !=  nullptr && cell_packing->has_data())
	|| (shape !=  nullptr && shape->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::has_operation() const
{
    return is_set(operation)
	|| is_set(vpi.operation)
	|| is_set(enable.operation)
	|| is_set(oam_segment_endpoint.operation)
	|| is_set(test_mode.operation)
	|| (cell_packing !=  nullptr && cell_packing->has_operation())
	|| (shape !=  nullptr && shape->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pvp" <<"[vpi='" <<vpi <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pvp' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vpi.is_set || is_set(vpi.operation)) leaf_name_data.push_back(vpi.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (oam_segment_endpoint.is_set || is_set(oam_segment_endpoint.operation)) leaf_name_data.push_back(oam_segment_endpoint.get_name_leafdata());
    if (test_mode.is_set || is_set(test_mode.operation)) leaf_name_data.push_back(test_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cell-packing")
    {
        if(cell_packing != nullptr)
        {
            children["cell-packing"] = cell_packing;
        }
        else
        {
            cell_packing = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking>();
            cell_packing->parent = this;
            children["cell-packing"] = cell_packing;
        }
        return children.at("cell-packing");
    }

    if(child_yang_name == "shape")
    {
        if(shape != nullptr)
        {
            children["shape"] = shape;
        }
        else
        {
            shape = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape>();
            shape->parent = this;
            children["shape"] = shape;
        }
        return children.at("shape");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::get_children()
{
    if(children.find("cell-packing") == children.end())
    {
        if(cell_packing != nullptr)
        {
            children["cell-packing"] = cell_packing;
        }
    }

    if(children.find("shape") == children.end())
    {
        if(shape != nullptr)
        {
            children["shape"] = shape;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vpi")
    {
        vpi = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "oam-segment-endpoint")
    {
        oam_segment_endpoint = value;
    }
    if(value_path == "test-mode")
    {
        test_mode = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape::Shape()
    :
    burst_size{YType::uint32, "burst-size"},
    peak_cell_rate{YType::uint32, "peak-cell-rate"},
    sustained_cell_rate{YType::uint32, "sustained-cell-rate"},
    type{YType::enumeration, "type"}
{
    yang_name = "shape"; yang_parent_name = "pvp";
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape::~Shape()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape::has_data() const
{
    return burst_size.is_set
	|| peak_cell_rate.is_set
	|| sustained_cell_rate.is_set
	|| type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape::has_operation() const
{
    return is_set(operation)
	|| is_set(burst_size.operation)
	|| is_set(peak_cell_rate.operation)
	|| is_set(sustained_cell_rate.operation)
	|| is_set(type.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shape";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Shape' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (burst_size.is_set || is_set(burst_size.operation)) leaf_name_data.push_back(burst_size.get_name_leafdata());
    if (peak_cell_rate.is_set || is_set(peak_cell_rate.operation)) leaf_name_data.push_back(peak_cell_rate.get_name_leafdata());
    if (sustained_cell_rate.is_set || is_set(sustained_cell_rate.operation)) leaf_name_data.push_back(sustained_cell_rate.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "burst-size")
    {
        burst_size = value;
    }
    if(value_path == "peak-cell-rate")
    {
        peak_cell_rate = value;
    }
    if(value_path == "sustained-cell-rate")
    {
        sustained_cell_rate = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking::CellPacking()
    :
    cell_packing_timer_id{YType::uint32, "cell-packing-timer-id"},
    maximum_cells_packed{YType::uint32, "maximum-cells-packed"}
{
    yang_name = "cell-packing"; yang_parent_name = "pvp";
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking::~CellPacking()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking::has_data() const
{
    return cell_packing_timer_id.is_set
	|| maximum_cells_packed.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking::has_operation() const
{
    return is_set(operation)
	|| is_set(cell_packing_timer_id.operation)
	|| is_set(maximum_cells_packed.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cell-packing";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CellPacking' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cell_packing_timer_id.is_set || is_set(cell_packing_timer_id.operation)) leaf_name_data.push_back(cell_packing_timer_id.get_name_leafdata());
    if (maximum_cells_packed.is_set || is_set(maximum_cells_packed.operation)) leaf_name_data.push_back(maximum_cells_packed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cell-packing-timer-id")
    {
        cell_packing_timer_id = value;
    }
    if(value_path == "maximum-cells-packed")
    {
        maximum_cells_packed = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvcs()
{
    yang_name = "pvcs"; yang_parent_name = "atm";
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::~Pvcs()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::has_data() const
{
    for (std::size_t index=0; index<pvc.size(); index++)
    {
        if(pvc[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::has_operation() const
{
    for (std::size_t index=0; index<pvc.size(); index++)
    {
        if(pvc[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pvcs";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pvcs' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "pvc")
    {
        for(auto const & c : pvc)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc>();
        c->parent = this;
        pvc.push_back(std::move(c));
        children[segment_path] = pvc.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::get_children()
{
    for (auto const & c : pvc)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Pvc()
    :
    pv_ctype{YType::enumeration, "pv-ctype"},
    vci{YType::uint32, "vci"},
    vpi{YType::uint32, "vpi"},
    enable{YType::empty, "enable"},
    encapsulation{YType::enumeration, "encapsulation"},
    oam_segment_endpoint{YType::empty, "oam-segment-endpoint"},
    test_mode{YType::enumeration, "test-mode"},
    vc_class{YType::str, "vc-class"}
    	,
    cell_packing(nullptr) // presence node
	,oam_emulation(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation>())
	,shape(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape>())
{
    oam_emulation->parent = this;
    children["oam-emulation"] = oam_emulation;

    shape->parent = this;
    children["shape"] = shape;

    yang_name = "pvc"; yang_parent_name = "pvcs";
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::~Pvc()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::has_data() const
{
    return pv_ctype.is_set
	|| vci.is_set
	|| vpi.is_set
	|| enable.is_set
	|| encapsulation.is_set
	|| oam_segment_endpoint.is_set
	|| test_mode.is_set
	|| vc_class.is_set
	|| (cell_packing !=  nullptr && cell_packing->has_data())
	|| (oam_emulation !=  nullptr && oam_emulation->has_data())
	|| (shape !=  nullptr && shape->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::has_operation() const
{
    return is_set(operation)
	|| is_set(pv_ctype.operation)
	|| is_set(vci.operation)
	|| is_set(vpi.operation)
	|| is_set(enable.operation)
	|| is_set(encapsulation.operation)
	|| is_set(oam_segment_endpoint.operation)
	|| is_set(test_mode.operation)
	|| is_set(vc_class.operation)
	|| (cell_packing !=  nullptr && cell_packing->has_operation())
	|| (oam_emulation !=  nullptr && oam_emulation->has_operation())
	|| (shape !=  nullptr && shape->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pvc" <<"[pv-ctype='" <<pv_ctype <<"']" <<"[vci='" <<vci <<"']" <<"[vpi='" <<vpi <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pvc' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pv_ctype.is_set || is_set(pv_ctype.operation)) leaf_name_data.push_back(pv_ctype.get_name_leafdata());
    if (vci.is_set || is_set(vci.operation)) leaf_name_data.push_back(vci.get_name_leafdata());
    if (vpi.is_set || is_set(vpi.operation)) leaf_name_data.push_back(vpi.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.operation)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (oam_segment_endpoint.is_set || is_set(oam_segment_endpoint.operation)) leaf_name_data.push_back(oam_segment_endpoint.get_name_leafdata());
    if (test_mode.is_set || is_set(test_mode.operation)) leaf_name_data.push_back(test_mode.get_name_leafdata());
    if (vc_class.is_set || is_set(vc_class.operation)) leaf_name_data.push_back(vc_class.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cell-packing")
    {
        if(cell_packing != nullptr)
        {
            children["cell-packing"] = cell_packing;
        }
        else
        {
            cell_packing = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking>();
            cell_packing->parent = this;
            children["cell-packing"] = cell_packing;
        }
        return children.at("cell-packing");
    }

    if(child_yang_name == "oam-emulation")
    {
        if(oam_emulation != nullptr)
        {
            children["oam-emulation"] = oam_emulation;
        }
        else
        {
            oam_emulation = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation>();
            oam_emulation->parent = this;
            children["oam-emulation"] = oam_emulation;
        }
        return children.at("oam-emulation");
    }

    if(child_yang_name == "shape")
    {
        if(shape != nullptr)
        {
            children["shape"] = shape;
        }
        else
        {
            shape = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape>();
            shape->parent = this;
            children["shape"] = shape;
        }
        return children.at("shape");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::get_children()
{
    if(children.find("cell-packing") == children.end())
    {
        if(cell_packing != nullptr)
        {
            children["cell-packing"] = cell_packing;
        }
    }

    if(children.find("oam-emulation") == children.end())
    {
        if(oam_emulation != nullptr)
        {
            children["oam-emulation"] = oam_emulation;
        }
    }

    if(children.find("shape") == children.end())
    {
        if(shape != nullptr)
        {
            children["shape"] = shape;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pv-ctype")
    {
        pv_ctype = value;
    }
    if(value_path == "vci")
    {
        vci = value;
    }
    if(value_path == "vpi")
    {
        vpi = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
    }
    if(value_path == "oam-segment-endpoint")
    {
        oam_segment_endpoint = value;
    }
    if(value_path == "test-mode")
    {
        test_mode = value;
    }
    if(value_path == "vc-class")
    {
        vc_class = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape::Shape()
    :
    burst_size{YType::uint32, "burst-size"},
    peak_cell_rate{YType::uint32, "peak-cell-rate"},
    sustained_cell_rate{YType::uint32, "sustained-cell-rate"},
    type{YType::enumeration, "type"}
{
    yang_name = "shape"; yang_parent_name = "pvc";
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape::~Shape()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape::has_data() const
{
    return burst_size.is_set
	|| peak_cell_rate.is_set
	|| sustained_cell_rate.is_set
	|| type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape::has_operation() const
{
    return is_set(operation)
	|| is_set(burst_size.operation)
	|| is_set(peak_cell_rate.operation)
	|| is_set(sustained_cell_rate.operation)
	|| is_set(type.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shape";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Shape' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (burst_size.is_set || is_set(burst_size.operation)) leaf_name_data.push_back(burst_size.get_name_leafdata());
    if (peak_cell_rate.is_set || is_set(peak_cell_rate.operation)) leaf_name_data.push_back(peak_cell_rate.get_name_leafdata());
    if (sustained_cell_rate.is_set || is_set(sustained_cell_rate.operation)) leaf_name_data.push_back(sustained_cell_rate.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "burst-size")
    {
        burst_size = value;
    }
    if(value_path == "peak-cell-rate")
    {
        peak_cell_rate = value;
    }
    if(value_path == "sustained-cell-rate")
    {
        sustained_cell_rate = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation::OamEmulation()
    :
    ais_transmit_rate{YType::uint32, "ais-transmit-rate"},
    enable{YType::empty, "enable"}
{
    yang_name = "oam-emulation"; yang_parent_name = "pvc";
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation::~OamEmulation()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation::has_data() const
{
    return ais_transmit_rate.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation::has_operation() const
{
    return is_set(operation)
	|| is_set(ais_transmit_rate.operation)
	|| is_set(enable.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oam-emulation";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OamEmulation' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ais_transmit_rate.is_set || is_set(ais_transmit_rate.operation)) leaf_name_data.push_back(ais_transmit_rate.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ais-transmit-rate")
    {
        ais_transmit_rate = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking::CellPacking()
    :
    cell_packing_timer_id{YType::uint32, "cell-packing-timer-id"},
    maximum_cells_packed{YType::uint32, "maximum-cells-packed"}
{
    yang_name = "cell-packing"; yang_parent_name = "pvc";
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking::~CellPacking()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking::has_data() const
{
    return cell_packing_timer_id.is_set
	|| maximum_cells_packed.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking::has_operation() const
{
    return is_set(operation)
	|| is_set(cell_packing_timer_id.operation)
	|| is_set(maximum_cells_packed.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cell-packing";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CellPacking' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cell_packing_timer_id.is_set || is_set(cell_packing_timer_id.operation)) leaf_name_data.push_back(cell_packing_timer_id.get_name_leafdata());
    if (maximum_cells_packed.is_set || is_set(maximum_cells_packed.operation)) leaf_name_data.push_back(maximum_cells_packed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cell-packing-timer-id")
    {
        cell_packing_timer_id = value;
    }
    if(value_path == "maximum-cells-packed")
    {
        maximum_cells_packed = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Atm::MaximumCellPackingTimers::MaximumCellPackingTimers()
    :
    cell_packing_timer1{YType::uint32, "cell-packing-timer1"},
    cell_packing_timer2{YType::uint32, "cell-packing-timer2"},
    cell_packing_timer3{YType::uint32, "cell-packing-timer3"}
{
    yang_name = "maximum-cell-packing-timers"; yang_parent_name = "atm";
}

InterfaceConfigurations::InterfaceConfiguration::Atm::MaximumCellPackingTimers::~MaximumCellPackingTimers()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::MaximumCellPackingTimers::has_data() const
{
    return cell_packing_timer1.is_set
	|| cell_packing_timer2.is_set
	|| cell_packing_timer3.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::MaximumCellPackingTimers::has_operation() const
{
    return is_set(operation)
	|| is_set(cell_packing_timer1.operation)
	|| is_set(cell_packing_timer2.operation)
	|| is_set(cell_packing_timer3.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Atm::MaximumCellPackingTimers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-cell-packing-timers";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Atm::MaximumCellPackingTimers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaximumCellPackingTimers' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cell_packing_timer1.is_set || is_set(cell_packing_timer1.operation)) leaf_name_data.push_back(cell_packing_timer1.get_name_leafdata());
    if (cell_packing_timer2.is_set || is_set(cell_packing_timer2.operation)) leaf_name_data.push_back(cell_packing_timer2.get_name_leafdata());
    if (cell_packing_timer3.is_set || is_set(cell_packing_timer3.operation)) leaf_name_data.push_back(cell_packing_timer3.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Atm::MaximumCellPackingTimers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Atm::MaximumCellPackingTimers::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::MaximumCellPackingTimers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cell-packing-timer1")
    {
        cell_packing_timer1 = value;
    }
    if(value_path == "cell-packing-timer2")
    {
        cell_packing_timer2 = value;
    }
    if(value_path == "cell-packing-timer3")
    {
        cell_packing_timer3 = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnels()
{
    yang_name = "vp-tunnels"; yang_parent_name = "atm";
}

InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::~VpTunnels()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::has_data() const
{
    for (std::size_t index=0; index<vp_tunnel.size(); index++)
    {
        if(vp_tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::has_operation() const
{
    for (std::size_t index=0; index<vp_tunnel.size(); index++)
    {
        if(vp_tunnel[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vp-tunnels";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VpTunnels' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vp-tunnel")
    {
        for(auto const & c : vp_tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel>();
        c->parent = this;
        vp_tunnel.push_back(std::move(c));
        children[segment_path] = vp_tunnel.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::get_children()
{
    for (auto const & c : vp_tunnel)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::VpTunnel()
    :
    vpi{YType::uint32, "vpi"},
    disable_f4oam{YType::empty, "disable-f4oam"},
    enable{YType::empty, "enable"},
    enable_hierarchical_shaping{YType::empty, "enable-hierarchical-shaping"}
    	,
    shape(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape>())
{
    shape->parent = this;
    children["shape"] = shape;

    yang_name = "vp-tunnel"; yang_parent_name = "vp-tunnels";
}

InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::~VpTunnel()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::has_data() const
{
    return vpi.is_set
	|| disable_f4oam.is_set
	|| enable.is_set
	|| enable_hierarchical_shaping.is_set
	|| (shape !=  nullptr && shape->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::has_operation() const
{
    return is_set(operation)
	|| is_set(vpi.operation)
	|| is_set(disable_f4oam.operation)
	|| is_set(enable.operation)
	|| is_set(enable_hierarchical_shaping.operation)
	|| (shape !=  nullptr && shape->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vp-tunnel" <<"[vpi='" <<vpi <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VpTunnel' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vpi.is_set || is_set(vpi.operation)) leaf_name_data.push_back(vpi.get_name_leafdata());
    if (disable_f4oam.is_set || is_set(disable_f4oam.operation)) leaf_name_data.push_back(disable_f4oam.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (enable_hierarchical_shaping.is_set || is_set(enable_hierarchical_shaping.operation)) leaf_name_data.push_back(enable_hierarchical_shaping.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "shape")
    {
        if(shape != nullptr)
        {
            children["shape"] = shape;
        }
        else
        {
            shape = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape>();
            shape->parent = this;
            children["shape"] = shape;
        }
        return children.at("shape");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::get_children()
{
    if(children.find("shape") == children.end())
    {
        if(shape != nullptr)
        {
            children["shape"] = shape;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vpi")
    {
        vpi = value;
    }
    if(value_path == "disable-f4oam")
    {
        disable_f4oam = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "enable-hierarchical-shaping")
    {
        enable_hierarchical_shaping = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape::Shape()
    :
    burst_size{YType::uint32, "burst-size"},
    peak_cell_rate{YType::uint32, "peak-cell-rate"},
    sustained_cell_rate{YType::uint32, "sustained-cell-rate"},
    type{YType::enumeration, "type"}
{
    yang_name = "shape"; yang_parent_name = "vp-tunnel";
}

InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape::~Shape()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape::has_data() const
{
    return burst_size.is_set
	|| peak_cell_rate.is_set
	|| sustained_cell_rate.is_set
	|| type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape::has_operation() const
{
    return is_set(operation)
	|| is_set(burst_size.operation)
	|| is_set(peak_cell_rate.operation)
	|| is_set(sustained_cell_rate.operation)
	|| is_set(type.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shape";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Shape' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (burst_size.is_set || is_set(burst_size.operation)) leaf_name_data.push_back(burst_size.get_name_leafdata());
    if (peak_cell_rate.is_set || is_set(peak_cell_rate.operation)) leaf_name_data.push_back(peak_cell_rate.get_name_leafdata());
    if (sustained_cell_rate.is_set || is_set(sustained_cell_rate.operation)) leaf_name_data.push_back(sustained_cell_rate.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "burst-size")
    {
        burst_size = value;
    }
    if(value_path == "peak-cell-rate")
    {
        peak_cell_rate = value;
    }
    if(value_path == "sustained-cell-rate")
    {
        sustained_cell_rate = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::Subscriber()
    :
    ip_subscriber(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber>())
{
    ip_subscriber->parent = this;
    children["ip-subscriber"] = ip_subscriber;

    yang_name = "subscriber"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::~Subscriber()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::has_data() const
{
    return (ip_subscriber !=  nullptr && ip_subscriber->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::has_operation() const
{
    return is_set(operation)
	|| (ip_subscriber !=  nullptr && ip_subscriber->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Subscriber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-subscriber-ipsub-cfg:subscriber";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Subscriber::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Subscriber' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ip-subscriber")
    {
        if(ip_subscriber != nullptr)
        {
            children["ip-subscriber"] = ip_subscriber;
        }
        else
        {
            ip_subscriber = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber>();
            ip_subscriber->parent = this;
            children["ip-subscriber"] = ip_subscriber;
        }
        return children.at("ip-subscriber");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Subscriber::get_children()
{
    if(children.find("ip-subscriber") == children.end())
    {
        if(ip_subscriber != nullptr)
        {
            children["ip-subscriber"] = ip_subscriber;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::IpSubscriber()
    :
    interface{YType::empty, "interface"},
    subscriber_templates{YType::uint32, "subscriber-templates"}
    	,
    ipv4(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4>())
	,ipv6(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6>())
	,session_limit(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit>())
{
    ipv4->parent = this;
    children["ipv4"] = ipv4;

    ipv6->parent = this;
    children["ipv6"] = ipv6;

    session_limit->parent = this;
    children["session-limit"] = session_limit;

    yang_name = "ip-subscriber"; yang_parent_name = "subscriber";
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::~IpSubscriber()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::has_data() const
{
    return interface.is_set
	|| subscriber_templates.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (session_limit !=  nullptr && session_limit->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation)
	|| is_set(subscriber_templates.operation)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (session_limit !=  nullptr && session_limit->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpSubscriber' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subscriber_templates.is_set || is_set(subscriber_templates.operation)) leaf_name_data.push_back(subscriber_templates.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4;
        }
        else
        {
            ipv4 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4>();
            ipv4->parent = this;
            children["ipv4"] = ipv4;
        }
        return children.at("ipv4");
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 != nullptr)
        {
            children["ipv6"] = ipv6;
        }
        else
        {
            ipv6 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6>();
            ipv6->parent = this;
            children["ipv6"] = ipv6;
        }
        return children.at("ipv6");
    }

    if(child_yang_name == "session-limit")
    {
        if(session_limit != nullptr)
        {
            children["session-limit"] = session_limit;
        }
        else
        {
            session_limit = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit>();
            session_limit->parent = this;
            children["session-limit"] = session_limit;
        }
        return children.at("session-limit");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::get_children()
{
    if(children.find("ipv4") == children.end())
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4;
        }
    }

    if(children.find("ipv6") == children.end())
    {
        if(ipv6 != nullptr)
        {
            children["ipv6"] = ipv6;
        }
    }

    if(children.find("session-limit") == children.end())
    {
        if(session_limit != nullptr)
        {
            children["session-limit"] = session_limit;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "subscriber-templates")
    {
        subscriber_templates = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Ipv4()
    :
    l2_connected(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected>())
	,routed(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed>())
{
    l2_connected->parent = this;
    children["l2-connected"] = l2_connected;

    routed->parent = this;
    children["routed"] = routed;

    yang_name = "ipv4"; yang_parent_name = "ip-subscriber";
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::~Ipv4()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::has_data() const
{
    return (l2_connected !=  nullptr && l2_connected->has_data())
	|| (routed !=  nullptr && routed->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::has_operation() const
{
    return is_set(operation)
	|| (l2_connected !=  nullptr && l2_connected->has_operation())
	|| (routed !=  nullptr && routed->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "l2-connected")
    {
        if(l2_connected != nullptr)
        {
            children["l2-connected"] = l2_connected;
        }
        else
        {
            l2_connected = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected>();
            l2_connected->parent = this;
            children["l2-connected"] = l2_connected;
        }
        return children.at("l2-connected");
    }

    if(child_yang_name == "routed")
    {
        if(routed != nullptr)
        {
            children["routed"] = routed;
        }
        else
        {
            routed = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed>();
            routed->parent = this;
            children["routed"] = routed;
        }
        return children.at("routed");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::get_children()
{
    if(children.find("l2-connected") == children.end())
    {
        if(l2_connected != nullptr)
        {
            children["l2-connected"] = l2_connected;
        }
    }

    if(children.find("routed") == children.end())
    {
        if(routed != nullptr)
        {
            children["routed"] = routed;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::L2Connected()
    :
    initiator(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator>())
{
    initiator->parent = this;
    children["initiator"] = initiator;

    yang_name = "l2-connected"; yang_parent_name = "ipv4";
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::~L2Connected()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::has_data() const
{
    return (initiator !=  nullptr && initiator->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::has_operation() const
{
    return is_set(operation)
	|| (initiator !=  nullptr && initiator->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2-connected";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2Connected' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "initiator")
    {
        if(initiator != nullptr)
        {
            children["initiator"] = initiator;
        }
        else
        {
            initiator = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator>();
            initiator->parent = this;
            children["initiator"] = initiator;
        }
        return children.at("initiator");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::get_children()
{
    if(children.find("initiator") == children.end())
    {
        if(initiator != nullptr)
        {
            children["initiator"] = initiator;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::Initiator()
    :
    dhcp{YType::empty, "dhcp"}
    	,
    unclassified_source_fsol(nullptr) // presence node
{
    yang_name = "initiator"; yang_parent_name = "l2-connected";
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::~Initiator()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::has_data() const
{
    return dhcp.is_set
	|| (unclassified_source_fsol !=  nullptr && unclassified_source_fsol->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::has_operation() const
{
    return is_set(operation)
	|| is_set(dhcp.operation)
	|| (unclassified_source_fsol !=  nullptr && unclassified_source_fsol->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "initiator";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Initiator' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dhcp.is_set || is_set(dhcp.operation)) leaf_name_data.push_back(dhcp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "unclassified-source-fsol")
    {
        if(unclassified_source_fsol != nullptr)
        {
            children["unclassified-source-fsol"] = unclassified_source_fsol;
        }
        else
        {
            unclassified_source_fsol = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::UnclassifiedSourceFsol>();
            unclassified_source_fsol->parent = this;
            children["unclassified-source-fsol"] = unclassified_source_fsol;
        }
        return children.at("unclassified-source-fsol");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::get_children()
{
    if(children.find("unclassified-source-fsol") == children.end())
    {
        if(unclassified_source_fsol != nullptr)
        {
            children["unclassified-source-fsol"] = unclassified_source_fsol;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dhcp")
    {
        dhcp = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::UnclassifiedSourceFsol::UnclassifiedSourceFsol()
    :
    address_unique{YType::boolean, "address-unique"},
    enable{YType::empty, "enable"}
{
    yang_name = "unclassified-source-fsol"; yang_parent_name = "initiator";
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::UnclassifiedSourceFsol::~UnclassifiedSourceFsol()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::UnclassifiedSourceFsol::has_data() const
{
    return address_unique.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::UnclassifiedSourceFsol::has_operation() const
{
    return is_set(operation)
	|| is_set(address_unique.operation)
	|| is_set(enable.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::UnclassifiedSourceFsol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unclassified-source-fsol";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::UnclassifiedSourceFsol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnclassifiedSourceFsol' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_unique.is_set || is_set(address_unique.operation)) leaf_name_data.push_back(address_unique.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::UnclassifiedSourceFsol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::UnclassifiedSourceFsol::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::UnclassifiedSourceFsol::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-unique")
    {
        address_unique = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::Routed()
    :
    initiator(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::Initiator>())
{
    initiator->parent = this;
    children["initiator"] = initiator;

    yang_name = "routed"; yang_parent_name = "ipv4";
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::~Routed()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::has_data() const
{
    return (initiator !=  nullptr && initiator->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::has_operation() const
{
    return is_set(operation)
	|| (initiator !=  nullptr && initiator->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routed";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Routed' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "initiator")
    {
        if(initiator != nullptr)
        {
            children["initiator"] = initiator;
        }
        else
        {
            initiator = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::Initiator>();
            initiator->parent = this;
            children["initiator"] = initiator;
        }
        return children.at("initiator");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::get_children()
{
    if(children.find("initiator") == children.end())
    {
        if(initiator != nullptr)
        {
            children["initiator"] = initiator;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::Initiator::Initiator()
    :
    dhcp{YType::empty, "dhcp"},
    unclassified_ip{YType::empty, "unclassified-ip"}
{
    yang_name = "initiator"; yang_parent_name = "routed";
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::Initiator::~Initiator()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::Initiator::has_data() const
{
    return dhcp.is_set
	|| unclassified_ip.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::Initiator::has_operation() const
{
    return is_set(operation)
	|| is_set(dhcp.operation)
	|| is_set(unclassified_ip.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::Initiator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "initiator";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::Initiator::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Initiator' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dhcp.is_set || is_set(dhcp.operation)) leaf_name_data.push_back(dhcp.get_name_leafdata());
    if (unclassified_ip.is_set || is_set(unclassified_ip.operation)) leaf_name_data.push_back(unclassified_ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::Initiator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::Initiator::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::Initiator::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dhcp")
    {
        dhcp = value;
    }
    if(value_path == "unclassified-ip")
    {
        unclassified_ip = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::SessionLimit()
    :
    total(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::Total>())
	,unclassified_source(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::UnclassifiedSource>())
{
    total->parent = this;
    children["total"] = total;

    unclassified_source->parent = this;
    children["unclassified-source"] = unclassified_source;

    yang_name = "session-limit"; yang_parent_name = "ip-subscriber";
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::~SessionLimit()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::has_data() const
{
    return (total !=  nullptr && total->has_data())
	|| (unclassified_source !=  nullptr && unclassified_source->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::has_operation() const
{
    return is_set(operation)
	|| (total !=  nullptr && total->has_operation())
	|| (unclassified_source !=  nullptr && unclassified_source->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-limit";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SessionLimit' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "total")
    {
        if(total != nullptr)
        {
            children["total"] = total;
        }
        else
        {
            total = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::Total>();
            total->parent = this;
            children["total"] = total;
        }
        return children.at("total");
    }

    if(child_yang_name == "unclassified-source")
    {
        if(unclassified_source != nullptr)
        {
            children["unclassified-source"] = unclassified_source;
        }
        else
        {
            unclassified_source = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::UnclassifiedSource>();
            unclassified_source->parent = this;
            children["unclassified-source"] = unclassified_source;
        }
        return children.at("unclassified-source");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::get_children()
{
    if(children.find("total") == children.end())
    {
        if(total != nullptr)
        {
            children["total"] = total;
        }
    }

    if(children.find("unclassified-source") == children.end())
    {
        if(unclassified_source != nullptr)
        {
            children["unclassified-source"] = unclassified_source;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::Total::Total()
    :
    per_vlan{YType::int32, "per-vlan"}
{
    yang_name = "total"; yang_parent_name = "session-limit";
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::Total::~Total()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::Total::has_data() const
{
    return per_vlan.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::Total::has_operation() const
{
    return is_set(operation)
	|| is_set(per_vlan.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::Total::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::Total::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Total' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (per_vlan.is_set || is_set(per_vlan.operation)) leaf_name_data.push_back(per_vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::Total::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::Total::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::Total::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "per-vlan")
    {
        per_vlan = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::UnclassifiedSource::UnclassifiedSource()
    :
    per_vlan{YType::int32, "per-vlan"}
{
    yang_name = "unclassified-source"; yang_parent_name = "session-limit";
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::UnclassifiedSource::~UnclassifiedSource()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::UnclassifiedSource::has_data() const
{
    return per_vlan.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::UnclassifiedSource::has_operation() const
{
    return is_set(operation)
	|| is_set(per_vlan.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::UnclassifiedSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unclassified-source";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::UnclassifiedSource::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnclassifiedSource' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (per_vlan.is_set || is_set(per_vlan.operation)) leaf_name_data.push_back(per_vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::UnclassifiedSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::UnclassifiedSource::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::UnclassifiedSource::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "per-vlan")
    {
        per_vlan = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Ipv6()
    :
    l2_connected(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected>())
	,routed(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed>())
{
    l2_connected->parent = this;
    children["l2-connected"] = l2_connected;

    routed->parent = this;
    children["routed"] = routed;

    yang_name = "ipv6"; yang_parent_name = "ip-subscriber";
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::~Ipv6()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::has_data() const
{
    return (l2_connected !=  nullptr && l2_connected->has_data())
	|| (routed !=  nullptr && routed->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::has_operation() const
{
    return is_set(operation)
	|| (l2_connected !=  nullptr && l2_connected->has_operation())
	|| (routed !=  nullptr && routed->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "l2-connected")
    {
        if(l2_connected != nullptr)
        {
            children["l2-connected"] = l2_connected;
        }
        else
        {
            l2_connected = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected>();
            l2_connected->parent = this;
            children["l2-connected"] = l2_connected;
        }
        return children.at("l2-connected");
    }

    if(child_yang_name == "routed")
    {
        if(routed != nullptr)
        {
            children["routed"] = routed;
        }
        else
        {
            routed = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed>();
            routed->parent = this;
            children["routed"] = routed;
        }
        return children.at("routed");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::get_children()
{
    if(children.find("l2-connected") == children.end())
    {
        if(l2_connected != nullptr)
        {
            children["l2-connected"] = l2_connected;
        }
    }

    if(children.find("routed") == children.end())
    {
        if(routed != nullptr)
        {
            children["routed"] = routed;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::L2Connected()
    :
    initiator(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator>())
{
    initiator->parent = this;
    children["initiator"] = initiator;

    yang_name = "l2-connected"; yang_parent_name = "ipv6";
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::~L2Connected()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::has_data() const
{
    return (initiator !=  nullptr && initiator->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::has_operation() const
{
    return is_set(operation)
	|| (initiator !=  nullptr && initiator->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2-connected";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2Connected' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "initiator")
    {
        if(initiator != nullptr)
        {
            children["initiator"] = initiator;
        }
        else
        {
            initiator = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator>();
            initiator->parent = this;
            children["initiator"] = initiator;
        }
        return children.at("initiator");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::get_children()
{
    if(children.find("initiator") == children.end())
    {
        if(initiator != nullptr)
        {
            children["initiator"] = initiator;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::Initiator()
    :
    dhcp{YType::empty, "dhcp"}
    	,
    unclassified_source_fsol(nullptr) // presence node
{
    yang_name = "initiator"; yang_parent_name = "l2-connected";
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::~Initiator()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::has_data() const
{
    return dhcp.is_set
	|| (unclassified_source_fsol !=  nullptr && unclassified_source_fsol->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::has_operation() const
{
    return is_set(operation)
	|| is_set(dhcp.operation)
	|| (unclassified_source_fsol !=  nullptr && unclassified_source_fsol->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "initiator";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Initiator' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dhcp.is_set || is_set(dhcp.operation)) leaf_name_data.push_back(dhcp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "unclassified-source-fsol")
    {
        if(unclassified_source_fsol != nullptr)
        {
            children["unclassified-source-fsol"] = unclassified_source_fsol;
        }
        else
        {
            unclassified_source_fsol = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::UnclassifiedSourceFsol>();
            unclassified_source_fsol->parent = this;
            children["unclassified-source-fsol"] = unclassified_source_fsol;
        }
        return children.at("unclassified-source-fsol");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::get_children()
{
    if(children.find("unclassified-source-fsol") == children.end())
    {
        if(unclassified_source_fsol != nullptr)
        {
            children["unclassified-source-fsol"] = unclassified_source_fsol;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dhcp")
    {
        dhcp = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::UnclassifiedSourceFsol::UnclassifiedSourceFsol()
    :
    address_unique{YType::boolean, "address-unique"},
    enable{YType::empty, "enable"}
{
    yang_name = "unclassified-source-fsol"; yang_parent_name = "initiator";
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::UnclassifiedSourceFsol::~UnclassifiedSourceFsol()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::UnclassifiedSourceFsol::has_data() const
{
    return address_unique.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::UnclassifiedSourceFsol::has_operation() const
{
    return is_set(operation)
	|| is_set(address_unique.operation)
	|| is_set(enable.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::UnclassifiedSourceFsol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unclassified-source-fsol";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::UnclassifiedSourceFsol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnclassifiedSourceFsol' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_unique.is_set || is_set(address_unique.operation)) leaf_name_data.push_back(address_unique.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::UnclassifiedSourceFsol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::UnclassifiedSourceFsol::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::UnclassifiedSourceFsol::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-unique")
    {
        address_unique = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::Routed()
    :
    initiator(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::Initiator>())
{
    initiator->parent = this;
    children["initiator"] = initiator;

    yang_name = "routed"; yang_parent_name = "ipv6";
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::~Routed()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::has_data() const
{
    return (initiator !=  nullptr && initiator->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::has_operation() const
{
    return is_set(operation)
	|| (initiator !=  nullptr && initiator->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routed";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Routed' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "initiator")
    {
        if(initiator != nullptr)
        {
            children["initiator"] = initiator;
        }
        else
        {
            initiator = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::Initiator>();
            initiator->parent = this;
            children["initiator"] = initiator;
        }
        return children.at("initiator");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::get_children()
{
    if(children.find("initiator") == children.end())
    {
        if(initiator != nullptr)
        {
            children["initiator"] = initiator;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::Initiator::Initiator()
    :
    unclassified_ip{YType::uint32, "unclassified-ip"}
{
    yang_name = "initiator"; yang_parent_name = "routed";
}

InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::Initiator::~Initiator()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::Initiator::has_data() const
{
    return unclassified_ip.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::Initiator::has_operation() const
{
    return is_set(operation)
	|| is_set(unclassified_ip.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::Initiator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "initiator";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::Initiator::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Initiator' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unclassified_ip.is_set || is_set(unclassified_ip.operation)) leaf_name_data.push_back(unclassified_ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::Initiator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::Initiator::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::Initiator::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unclassified-ip")
    {
        unclassified_ip = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagrs()
{
    yang_name = "dagrs"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::Dagrs::~Dagrs()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::has_data() const
{
    for (std::size_t index=0; index<dagr.size(); index++)
    {
        if(dagr[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::has_operation() const
{
    for (std::size_t index=0; index<dagr.size(); index++)
    {
        if(dagr[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dagrs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-arp-cfg:dagrs";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Dagrs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dagrs' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dagrs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dagr")
    {
        for(auto const & c : dagr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr>();
        c->parent = this;
        dagr.push_back(std::move(c));
        children[segment_path] = dagr.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Dagrs::get_children()
{
    for (auto const & c : dagr)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dagrs::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Dagr()
    :
    ip_addr{YType::str, "ip-addr"},
    enter{YType::empty, "enter"}
    	,
    sub(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub>())
{
    sub->parent = this;
    children["sub"] = sub;

    yang_name = "dagr"; yang_parent_name = "dagrs";
}

InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::~Dagr()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::has_data() const
{
    return ip_addr.is_set
	|| enter.is_set
	|| (sub !=  nullptr && sub->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation)
	|| is_set(enter.operation)
	|| (sub !=  nullptr && sub->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dagr" <<"[ip-addr='" <<ip_addr <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dagr' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (enter.is_set || is_set(enter.operation)) leaf_name_data.push_back(enter.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sub")
    {
        if(sub != nullptr)
        {
            children["sub"] = sub;
        }
        else
        {
            sub = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub>();
            sub->parent = this;
            children["sub"] = sub;
        }
        return children.at("sub");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::get_children()
{
    if(children.find("sub") == children.end())
    {
        if(sub != nullptr)
        {
            children["sub"] = sub;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
    if(value_path == "enter")
    {
        enter = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Sub()
    :
    priority_timeout{YType::uint32, "priority-timeout"}
    	,
    distance(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance>())
	,metric(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric>())
	,timers(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers>())
{
    distance->parent = this;
    children["distance"] = distance;

    metric->parent = this;
    children["metric"] = metric;

    timers->parent = this;
    children["timers"] = timers;

    yang_name = "sub"; yang_parent_name = "dagr";
}

InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::~Sub()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::has_data() const
{
    return priority_timeout.is_set
	|| (distance !=  nullptr && distance->has_data())
	|| (metric !=  nullptr && metric->has_data())
	|| (timers !=  nullptr && timers->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::has_operation() const
{
    return is_set(operation)
	|| is_set(priority_timeout.operation)
	|| (distance !=  nullptr && distance->has_operation())
	|| (metric !=  nullptr && metric->has_operation())
	|| (timers !=  nullptr && timers->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sub' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority_timeout.is_set || is_set(priority_timeout.operation)) leaf_name_data.push_back(priority_timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "distance")
    {
        if(distance != nullptr)
        {
            children["distance"] = distance;
        }
        else
        {
            distance = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance>();
            distance->parent = this;
            children["distance"] = distance;
        }
        return children.at("distance");
    }

    if(child_yang_name == "metric")
    {
        if(metric != nullptr)
        {
            children["metric"] = metric;
        }
        else
        {
            metric = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric>();
            metric->parent = this;
            children["metric"] = metric;
        }
        return children.at("metric");
    }

    if(child_yang_name == "timers")
    {
        if(timers != nullptr)
        {
            children["timers"] = timers;
        }
        else
        {
            timers = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers>();
            timers->parent = this;
            children["timers"] = timers;
        }
        return children.at("timers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::get_children()
{
    if(children.find("distance") == children.end())
    {
        if(distance != nullptr)
        {
            children["distance"] = distance;
        }
    }

    if(children.find("metric") == children.end())
    {
        if(metric != nullptr)
        {
            children["metric"] = metric;
        }
    }

    if(children.find("timers") == children.end())
    {
        if(timers != nullptr)
        {
            children["timers"] = timers;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "priority-timeout")
    {
        priority_timeout = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric::Metric()
    :
    metric_norm{YType::uint32, "metric-norm"},
    metric_prio{YType::uint32, "metric-prio"}
{
    yang_name = "metric"; yang_parent_name = "sub";
}

InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric::~Metric()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric::has_data() const
{
    return metric_norm.is_set
	|| metric_prio.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric::has_operation() const
{
    return is_set(operation)
	|| is_set(metric_norm.operation)
	|| is_set(metric_prio.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Metric' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_norm.is_set || is_set(metric_norm.operation)) leaf_name_data.push_back(metric_norm.get_name_leafdata());
    if (metric_prio.is_set || is_set(metric_prio.operation)) leaf_name_data.push_back(metric_prio.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric-norm")
    {
        metric_norm = value;
    }
    if(value_path == "metric-prio")
    {
        metric_prio = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers::Timers()
    :
    query_time{YType::uint32, "query-time"},
    sby_time{YType::uint32, "sby-time"}
{
    yang_name = "timers"; yang_parent_name = "sub";
}

InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers::~Timers()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers::has_data() const
{
    return query_time.is_set
	|| sby_time.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers::has_operation() const
{
    return is_set(operation)
	|| is_set(query_time.operation)
	|| is_set(sby_time.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Timers' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (query_time.is_set || is_set(query_time.operation)) leaf_name_data.push_back(query_time.get_name_leafdata());
    if (sby_time.is_set || is_set(sby_time.operation)) leaf_name_data.push_back(sby_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "query-time")
    {
        query_time = value;
    }
    if(value_path == "sby-time")
    {
        sby_time = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance::Distance()
    :
    dist_norm{YType::uint32, "dist-norm"},
    dist_prio{YType::uint32, "dist-prio"}
{
    yang_name = "distance"; yang_parent_name = "sub";
}

InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance::~Distance()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance::has_data() const
{
    return dist_norm.is_set
	|| dist_prio.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance::has_operation() const
{
    return is_set(operation)
	|| is_set(dist_norm.operation)
	|| is_set(dist_prio.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Distance' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dist_norm.is_set || is_set(dist_norm.operation)) leaf_name_data.push_back(dist_norm.get_name_leafdata());
    if (dist_prio.is_set || is_set(dist_prio.operation)) leaf_name_data.push_back(dist_prio.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dist-norm")
    {
        dist_norm = value;
    }
    if(value_path == "dist-prio")
    {
        dist_prio = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Arp::Ipv4Arp()
    :
    gratuitous_ignore{YType::empty, "gratuitous-ignore"},
    learning_disable{YType::empty, "learning-disable"},
    learning_local{YType::empty, "learning-local"},
    local_proxy_arp{YType::empty, "local-proxy-arp"},
    proxy_arp{YType::empty, "proxy-arp"},
    purge_delay{YType::uint32, "purge-delay"},
    timeout{YType::uint32, "timeout"}
{
    yang_name = "ipv4arp"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Arp::~Ipv4Arp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Arp::has_data() const
{
    return gratuitous_ignore.is_set
	|| learning_disable.is_set
	|| learning_local.is_set
	|| local_proxy_arp.is_set
	|| proxy_arp.is_set
	|| purge_delay.is_set
	|| timeout.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Arp::has_operation() const
{
    return is_set(operation)
	|| is_set(gratuitous_ignore.operation)
	|| is_set(learning_disable.operation)
	|| is_set(learning_local.operation)
	|| is_set(local_proxy_arp.operation)
	|| is_set(proxy_arp.operation)
	|| is_set(purge_delay.operation)
	|| is_set(timeout.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Arp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-arp-cfg:ipv4arp";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv4Arp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4Arp' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gratuitous_ignore.is_set || is_set(gratuitous_ignore.operation)) leaf_name_data.push_back(gratuitous_ignore.get_name_leafdata());
    if (learning_disable.is_set || is_set(learning_disable.operation)) leaf_name_data.push_back(learning_disable.get_name_leafdata());
    if (learning_local.is_set || is_set(learning_local.operation)) leaf_name_data.push_back(learning_local.get_name_leafdata());
    if (local_proxy_arp.is_set || is_set(local_proxy_arp.operation)) leaf_name_data.push_back(local_proxy_arp.get_name_leafdata());
    if (proxy_arp.is_set || is_set(proxy_arp.operation)) leaf_name_data.push_back(proxy_arp.get_name_leafdata());
    if (purge_delay.is_set || is_set(purge_delay.operation)) leaf_name_data.push_back(purge_delay.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Arp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Ipv4Arp::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Arp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "gratuitous-ignore")
    {
        gratuitous_ignore = value;
    }
    if(value_path == "learning-disable")
    {
        learning_disable = value;
    }
    if(value_path == "learning-local")
    {
        learning_local = value;
    }
    if(value_path == "local-proxy-arp")
    {
        local_proxy_arp = value;
    }
    if(value_path == "proxy-arp")
    {
        proxy_arp = value;
    }
    if(value_path == "purge-delay")
    {
        purge_delay = value;
    }
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::ClientPort::ClientPort()
    :
    channels(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::ClientPort::Channels>())
	,logical_channel_assignments(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::ClientPort::LogicalChannelAssignments>())
{
    channels->parent = this;
    children["channels"] = channels;

    logical_channel_assignments->parent = this;
    children["logical-channel-assignments"] = logical_channel_assignments;

    yang_name = "client-port"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::ClientPort::~ClientPort()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::ClientPort::has_data() const
{
    return (channels !=  nullptr && channels->has_data())
	|| (logical_channel_assignments !=  nullptr && logical_channel_assignments->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::ClientPort::has_operation() const
{
    return is_set(operation)
	|| (channels !=  nullptr && channels->has_operation())
	|| (logical_channel_assignments !=  nullptr && logical_channel_assignments->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::ClientPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-openconfig-optical-client-cfg:client-port";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::ClientPort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClientPort' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::ClientPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "channels")
    {
        if(channels != nullptr)
        {
            children["channels"] = channels;
        }
        else
        {
            channels = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::ClientPort::Channels>();
            channels->parent = this;
            children["channels"] = channels;
        }
        return children.at("channels");
    }

    if(child_yang_name == "logical-channel-assignments")
    {
        if(logical_channel_assignments != nullptr)
        {
            children["logical-channel-assignments"] = logical_channel_assignments;
        }
        else
        {
            logical_channel_assignments = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::ClientPort::LogicalChannelAssignments>();
            logical_channel_assignments->parent = this;
            children["logical-channel-assignments"] = logical_channel_assignments;
        }
        return children.at("logical-channel-assignments");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::ClientPort::get_children()
{
    if(children.find("channels") == children.end())
    {
        if(channels != nullptr)
        {
            children["channels"] = channels;
        }
    }

    if(children.find("logical-channel-assignments") == children.end())
    {
        if(logical_channel_assignments != nullptr)
        {
            children["logical-channel-assignments"] = logical_channel_assignments;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::ClientPort::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::ClientPort::LogicalChannelAssignments::LogicalChannelAssignments()
{
    yang_name = "logical-channel-assignments"; yang_parent_name = "client-port";
}

InterfaceConfigurations::InterfaceConfiguration::ClientPort::LogicalChannelAssignments::~LogicalChannelAssignments()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::ClientPort::LogicalChannelAssignments::has_data() const
{
    for (std::size_t index=0; index<logical_channel_assignment.size(); index++)
    {
        if(logical_channel_assignment[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::ClientPort::LogicalChannelAssignments::has_operation() const
{
    for (std::size_t index=0; index<logical_channel_assignment.size(); index++)
    {
        if(logical_channel_assignment[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::ClientPort::LogicalChannelAssignments::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logical-channel-assignments";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::ClientPort::LogicalChannelAssignments::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LogicalChannelAssignments' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::ClientPort::LogicalChannelAssignments::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "logical-channel-assignment")
    {
        for(auto const & c : logical_channel_assignment)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::ClientPort::LogicalChannelAssignments::LogicalChannelAssignment>();
        c->parent = this;
        logical_channel_assignment.push_back(std::move(c));
        children[segment_path] = logical_channel_assignment.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::ClientPort::LogicalChannelAssignments::get_children()
{
    for (auto const & c : logical_channel_assignment)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::ClientPort::LogicalChannelAssignments::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::ClientPort::LogicalChannelAssignments::LogicalChannelAssignment::LogicalChannelAssignment()
    :
    assignment_index{YType::int32, "assignment-index"},
    allocation{YType::int32, "allocation"},
    description{YType::str, "description"},
    logical_channel_id{YType::int32, "logical-channel-id"}
{
    yang_name = "logical-channel-assignment"; yang_parent_name = "logical-channel-assignments";
}

InterfaceConfigurations::InterfaceConfiguration::ClientPort::LogicalChannelAssignments::LogicalChannelAssignment::~LogicalChannelAssignment()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::ClientPort::LogicalChannelAssignments::LogicalChannelAssignment::has_data() const
{
    return assignment_index.is_set
	|| allocation.is_set
	|| description.is_set
	|| logical_channel_id.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::ClientPort::LogicalChannelAssignments::LogicalChannelAssignment::has_operation() const
{
    return is_set(operation)
	|| is_set(assignment_index.operation)
	|| is_set(allocation.operation)
	|| is_set(description.operation)
	|| is_set(logical_channel_id.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::ClientPort::LogicalChannelAssignments::LogicalChannelAssignment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logical-channel-assignment" <<"[assignment-index='" <<assignment_index <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::ClientPort::LogicalChannelAssignments::LogicalChannelAssignment::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LogicalChannelAssignment' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (assignment_index.is_set || is_set(assignment_index.operation)) leaf_name_data.push_back(assignment_index.get_name_leafdata());
    if (allocation.is_set || is_set(allocation.operation)) leaf_name_data.push_back(allocation.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (logical_channel_id.is_set || is_set(logical_channel_id.operation)) leaf_name_data.push_back(logical_channel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::ClientPort::LogicalChannelAssignments::LogicalChannelAssignment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::ClientPort::LogicalChannelAssignments::LogicalChannelAssignment::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::ClientPort::LogicalChannelAssignments::LogicalChannelAssignment::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "assignment-index")
    {
        assignment_index = value;
    }
    if(value_path == "allocation")
    {
        allocation = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "logical-channel-id")
    {
        logical_channel_id = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::ClientPort::Channels::Channels()
{
    yang_name = "channels"; yang_parent_name = "client-port";
}

InterfaceConfigurations::InterfaceConfiguration::ClientPort::Channels::~Channels()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::ClientPort::Channels::has_data() const
{
    for (std::size_t index=0; index<channel.size(); index++)
    {
        if(channel[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::ClientPort::Channels::has_operation() const
{
    for (std::size_t index=0; index<channel.size(); index++)
    {
        if(channel[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::ClientPort::Channels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "channels";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::ClientPort::Channels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Channels' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::ClientPort::Channels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "channel")
    {
        for(auto const & c : channel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::ClientPort::Channels::Channel>();
        c->parent = this;
        channel.push_back(std::move(c));
        children[segment_path] = channel.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::ClientPort::Channels::get_children()
{
    for (auto const & c : channel)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::ClientPort::Channels::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::ClientPort::Channels::Channel::Channel()
    :
    index_{YType::int32, "index"},
    channel_description{YType::str, "channel-description"}
{
    yang_name = "channel"; yang_parent_name = "channels";
}

InterfaceConfigurations::InterfaceConfiguration::ClientPort::Channels::Channel::~Channel()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::ClientPort::Channels::Channel::has_data() const
{
    return index_.is_set
	|| channel_description.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::ClientPort::Channels::Channel::has_operation() const
{
    return is_set(operation)
	|| is_set(index_.operation)
	|| is_set(channel_description.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::ClientPort::Channels::Channel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "channel" <<"[index='" <<index_ <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::ClientPort::Channels::Channel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Channel' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (channel_description.is_set || is_set(channel_description.operation)) leaf_name_data.push_back(channel_description.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::ClientPort::Channels::Channel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::ClientPort::Channels::Channel::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::ClientPort::Channels::Channel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "channel-description")
    {
        channel_description = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelTeAttributes()
    :
    destination{YType::str, "destination"},
    forward_class{YType::uint32, "forward-class"},
    load_share{YType::uint32, "load-share"},
    path_protection{YType::empty, "path-protection"},
    path_selection_metric{YType::enumeration, "path-selection-metric"},
    record_route{YType::empty, "record-route"},
    signalled_name{YType::str, "signalled-name"},
    soft_preemption{YType::empty, "soft-preemption"}
    	,
    admin_mode(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode>())
	,affinity_mask(nullptr) // presence node
	,auto_bandwidth(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth>())
	,autoroute(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute>())
	,backup_bandwidth(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth>())
	,bandwidth(nullptr) // presence node
	,bfd_over_lsp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp>())
	,bidirectional(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional>())
	,binding_segment_id_mpls(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls>())
	,fast_reroute(nullptr) // presence node
	,forwarding_adjacency(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency>())
	,logging(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging>())
	,new_style_affinity_affinity_types(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes>())
	,path_option_protects(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects>())
	,pce(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce>())
	,policy_classes(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses>())
	,priority(nullptr) // presence node
	,switching(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching>())
	,tunnel_path_selection(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection>())
{
    admin_mode->parent = this;
    children["admin-mode"] = admin_mode;

    auto_bandwidth->parent = this;
    children["auto-bandwidth"] = auto_bandwidth;

    autoroute->parent = this;
    children["autoroute"] = autoroute;

    backup_bandwidth->parent = this;
    children["backup-bandwidth"] = backup_bandwidth;

    bfd_over_lsp->parent = this;
    children["bfd-over-lsp"] = bfd_over_lsp;

    bidirectional->parent = this;
    children["bidirectional"] = bidirectional;

    binding_segment_id_mpls->parent = this;
    children["binding-segment-id-mpls"] = binding_segment_id_mpls;

    forwarding_adjacency->parent = this;
    children["forwarding-adjacency"] = forwarding_adjacency;

    logging->parent = this;
    children["logging"] = logging;

    new_style_affinity_affinity_types->parent = this;
    children["new-style-affinity-affinity-types"] = new_style_affinity_affinity_types;

    path_option_protects->parent = this;
    children["path-option-protects"] = path_option_protects;

    pce->parent = this;
    children["pce"] = pce;

    policy_classes->parent = this;
    children["policy-classes"] = policy_classes;

    switching->parent = this;
    children["switching"] = switching;

    tunnel_path_selection->parent = this;
    children["tunnel-path-selection"] = tunnel_path_selection;

    yang_name = "tunnel-te-attributes"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::~TunnelTeAttributes()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::has_data() const
{
    return destination.is_set
	|| forward_class.is_set
	|| load_share.is_set
	|| path_protection.is_set
	|| path_selection_metric.is_set
	|| record_route.is_set
	|| signalled_name.is_set
	|| soft_preemption.is_set
	|| (admin_mode !=  nullptr && admin_mode->has_data())
	|| (affinity_mask !=  nullptr && affinity_mask->has_data())
	|| (auto_bandwidth !=  nullptr && auto_bandwidth->has_data())
	|| (autoroute !=  nullptr && autoroute->has_data())
	|| (backup_bandwidth !=  nullptr && backup_bandwidth->has_data())
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (bfd_over_lsp !=  nullptr && bfd_over_lsp->has_data())
	|| (bidirectional !=  nullptr && bidirectional->has_data())
	|| (binding_segment_id_mpls !=  nullptr && binding_segment_id_mpls->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (forwarding_adjacency !=  nullptr && forwarding_adjacency->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (new_style_affinity_affinity_types !=  nullptr && new_style_affinity_affinity_types->has_data())
	|| (path_option_protects !=  nullptr && path_option_protects->has_data())
	|| (pce !=  nullptr && pce->has_data())
	|| (policy_classes !=  nullptr && policy_classes->has_data())
	|| (priority !=  nullptr && priority->has_data())
	|| (switching !=  nullptr && switching->has_data())
	|| (tunnel_path_selection !=  nullptr && tunnel_path_selection->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::has_operation() const
{
    return is_set(operation)
	|| is_set(destination.operation)
	|| is_set(forward_class.operation)
	|| is_set(load_share.operation)
	|| is_set(path_protection.operation)
	|| is_set(path_selection_metric.operation)
	|| is_set(record_route.operation)
	|| is_set(signalled_name.operation)
	|| is_set(soft_preemption.operation)
	|| (admin_mode !=  nullptr && admin_mode->has_operation())
	|| (affinity_mask !=  nullptr && affinity_mask->has_operation())
	|| (auto_bandwidth !=  nullptr && auto_bandwidth->has_operation())
	|| (autoroute !=  nullptr && autoroute->has_operation())
	|| (backup_bandwidth !=  nullptr && backup_bandwidth->has_operation())
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (bfd_over_lsp !=  nullptr && bfd_over_lsp->has_operation())
	|| (bidirectional !=  nullptr && bidirectional->has_operation())
	|| (binding_segment_id_mpls !=  nullptr && binding_segment_id_mpls->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (forwarding_adjacency !=  nullptr && forwarding_adjacency->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (new_style_affinity_affinity_types !=  nullptr && new_style_affinity_affinity_types->has_operation())
	|| (path_option_protects !=  nullptr && path_option_protects->has_operation())
	|| (pce !=  nullptr && pce->has_operation())
	|| (policy_classes !=  nullptr && policy_classes->has_operation())
	|| (priority !=  nullptr && priority->has_operation())
	|| (switching !=  nullptr && switching->has_operation())
	|| (tunnel_path_selection !=  nullptr && tunnel_path_selection->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:tunnel-te-attributes";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TunnelTeAttributes' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.operation)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.operation)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (load_share.is_set || is_set(load_share.operation)) leaf_name_data.push_back(load_share.get_name_leafdata());
    if (path_protection.is_set || is_set(path_protection.operation)) leaf_name_data.push_back(path_protection.get_name_leafdata());
    if (path_selection_metric.is_set || is_set(path_selection_metric.operation)) leaf_name_data.push_back(path_selection_metric.get_name_leafdata());
    if (record_route.is_set || is_set(record_route.operation)) leaf_name_data.push_back(record_route.get_name_leafdata());
    if (signalled_name.is_set || is_set(signalled_name.operation)) leaf_name_data.push_back(signalled_name.get_name_leafdata());
    if (soft_preemption.is_set || is_set(soft_preemption.operation)) leaf_name_data.push_back(soft_preemption.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "admin-mode")
    {
        if(admin_mode != nullptr)
        {
            children["admin-mode"] = admin_mode;
        }
        else
        {
            admin_mode = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode>();
            admin_mode->parent = this;
            children["admin-mode"] = admin_mode;
        }
        return children.at("admin-mode");
    }

    if(child_yang_name == "affinity-mask")
    {
        if(affinity_mask != nullptr)
        {
            children["affinity-mask"] = affinity_mask;
        }
        else
        {
            affinity_mask = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask>();
            affinity_mask->parent = this;
            children["affinity-mask"] = affinity_mask;
        }
        return children.at("affinity-mask");
    }

    if(child_yang_name == "auto-bandwidth")
    {
        if(auto_bandwidth != nullptr)
        {
            children["auto-bandwidth"] = auto_bandwidth;
        }
        else
        {
            auto_bandwidth = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth>();
            auto_bandwidth->parent = this;
            children["auto-bandwidth"] = auto_bandwidth;
        }
        return children.at("auto-bandwidth");
    }

    if(child_yang_name == "autoroute")
    {
        if(autoroute != nullptr)
        {
            children["autoroute"] = autoroute;
        }
        else
        {
            autoroute = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute>();
            autoroute->parent = this;
            children["autoroute"] = autoroute;
        }
        return children.at("autoroute");
    }

    if(child_yang_name == "backup-bandwidth")
    {
        if(backup_bandwidth != nullptr)
        {
            children["backup-bandwidth"] = backup_bandwidth;
        }
        else
        {
            backup_bandwidth = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth>();
            backup_bandwidth->parent = this;
            children["backup-bandwidth"] = backup_bandwidth;
        }
        return children.at("backup-bandwidth");
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth != nullptr)
        {
            children["bandwidth"] = bandwidth;
        }
        else
        {
            bandwidth = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth>();
            bandwidth->parent = this;
            children["bandwidth"] = bandwidth;
        }
        return children.at("bandwidth");
    }

    if(child_yang_name == "bfd-over-lsp")
    {
        if(bfd_over_lsp != nullptr)
        {
            children["bfd-over-lsp"] = bfd_over_lsp;
        }
        else
        {
            bfd_over_lsp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp>();
            bfd_over_lsp->parent = this;
            children["bfd-over-lsp"] = bfd_over_lsp;
        }
        return children.at("bfd-over-lsp");
    }

    if(child_yang_name == "bidirectional")
    {
        if(bidirectional != nullptr)
        {
            children["bidirectional"] = bidirectional;
        }
        else
        {
            bidirectional = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional>();
            bidirectional->parent = this;
            children["bidirectional"] = bidirectional;
        }
        return children.at("bidirectional");
    }

    if(child_yang_name == "binding-segment-id-mpls")
    {
        if(binding_segment_id_mpls != nullptr)
        {
            children["binding-segment-id-mpls"] = binding_segment_id_mpls;
        }
        else
        {
            binding_segment_id_mpls = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls>();
            binding_segment_id_mpls->parent = this;
            children["binding-segment-id-mpls"] = binding_segment_id_mpls;
        }
        return children.at("binding-segment-id-mpls");
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute != nullptr)
        {
            children["fast-reroute"] = fast_reroute;
        }
        else
        {
            fast_reroute = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute>();
            fast_reroute->parent = this;
            children["fast-reroute"] = fast_reroute;
        }
        return children.at("fast-reroute");
    }

    if(child_yang_name == "forwarding-adjacency")
    {
        if(forwarding_adjacency != nullptr)
        {
            children["forwarding-adjacency"] = forwarding_adjacency;
        }
        else
        {
            forwarding_adjacency = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency>();
            forwarding_adjacency->parent = this;
            children["forwarding-adjacency"] = forwarding_adjacency;
        }
        return children.at("forwarding-adjacency");
    }

    if(child_yang_name == "logging")
    {
        if(logging != nullptr)
        {
            children["logging"] = logging;
        }
        else
        {
            logging = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging>();
            logging->parent = this;
            children["logging"] = logging;
        }
        return children.at("logging");
    }

    if(child_yang_name == "new-style-affinity-affinity-types")
    {
        if(new_style_affinity_affinity_types != nullptr)
        {
            children["new-style-affinity-affinity-types"] = new_style_affinity_affinity_types;
        }
        else
        {
            new_style_affinity_affinity_types = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes>();
            new_style_affinity_affinity_types->parent = this;
            children["new-style-affinity-affinity-types"] = new_style_affinity_affinity_types;
        }
        return children.at("new-style-affinity-affinity-types");
    }

    if(child_yang_name == "path-option-protects")
    {
        if(path_option_protects != nullptr)
        {
            children["path-option-protects"] = path_option_protects;
        }
        else
        {
            path_option_protects = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects>();
            path_option_protects->parent = this;
            children["path-option-protects"] = path_option_protects;
        }
        return children.at("path-option-protects");
    }

    if(child_yang_name == "pce")
    {
        if(pce != nullptr)
        {
            children["pce"] = pce;
        }
        else
        {
            pce = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce>();
            pce->parent = this;
            children["pce"] = pce;
        }
        return children.at("pce");
    }

    if(child_yang_name == "policy-classes")
    {
        if(policy_classes != nullptr)
        {
            children["policy-classes"] = policy_classes;
        }
        else
        {
            policy_classes = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses>();
            policy_classes->parent = this;
            children["policy-classes"] = policy_classes;
        }
        return children.at("policy-classes");
    }

    if(child_yang_name == "priority")
    {
        if(priority != nullptr)
        {
            children["priority"] = priority;
        }
        else
        {
            priority = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority>();
            priority->parent = this;
            children["priority"] = priority;
        }
        return children.at("priority");
    }

    if(child_yang_name == "switching")
    {
        if(switching != nullptr)
        {
            children["switching"] = switching;
        }
        else
        {
            switching = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching>();
            switching->parent = this;
            children["switching"] = switching;
        }
        return children.at("switching");
    }

    if(child_yang_name == "tunnel-path-selection")
    {
        if(tunnel_path_selection != nullptr)
        {
            children["tunnel-path-selection"] = tunnel_path_selection;
        }
        else
        {
            tunnel_path_selection = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection>();
            tunnel_path_selection->parent = this;
            children["tunnel-path-selection"] = tunnel_path_selection;
        }
        return children.at("tunnel-path-selection");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::get_children()
{
    if(children.find("admin-mode") == children.end())
    {
        if(admin_mode != nullptr)
        {
            children["admin-mode"] = admin_mode;
        }
    }

    if(children.find("affinity-mask") == children.end())
    {
        if(affinity_mask != nullptr)
        {
            children["affinity-mask"] = affinity_mask;
        }
    }

    if(children.find("auto-bandwidth") == children.end())
    {
        if(auto_bandwidth != nullptr)
        {
            children["auto-bandwidth"] = auto_bandwidth;
        }
    }

    if(children.find("autoroute") == children.end())
    {
        if(autoroute != nullptr)
        {
            children["autoroute"] = autoroute;
        }
    }

    if(children.find("backup-bandwidth") == children.end())
    {
        if(backup_bandwidth != nullptr)
        {
            children["backup-bandwidth"] = backup_bandwidth;
        }
    }

    if(children.find("bandwidth") == children.end())
    {
        if(bandwidth != nullptr)
        {
            children["bandwidth"] = bandwidth;
        }
    }

    if(children.find("bfd-over-lsp") == children.end())
    {
        if(bfd_over_lsp != nullptr)
        {
            children["bfd-over-lsp"] = bfd_over_lsp;
        }
    }

    if(children.find("bidirectional") == children.end())
    {
        if(bidirectional != nullptr)
        {
            children["bidirectional"] = bidirectional;
        }
    }

    if(children.find("binding-segment-id-mpls") == children.end())
    {
        if(binding_segment_id_mpls != nullptr)
        {
            children["binding-segment-id-mpls"] = binding_segment_id_mpls;
        }
    }

    if(children.find("fast-reroute") == children.end())
    {
        if(fast_reroute != nullptr)
        {
            children["fast-reroute"] = fast_reroute;
        }
    }

    if(children.find("forwarding-adjacency") == children.end())
    {
        if(forwarding_adjacency != nullptr)
        {
            children["forwarding-adjacency"] = forwarding_adjacency;
        }
    }

    if(children.find("logging") == children.end())
    {
        if(logging != nullptr)
        {
            children["logging"] = logging;
        }
    }

    if(children.find("new-style-affinity-affinity-types") == children.end())
    {
        if(new_style_affinity_affinity_types != nullptr)
        {
            children["new-style-affinity-affinity-types"] = new_style_affinity_affinity_types;
        }
    }

    if(children.find("path-option-protects") == children.end())
    {
        if(path_option_protects != nullptr)
        {
            children["path-option-protects"] = path_option_protects;
        }
    }

    if(children.find("pce") == children.end())
    {
        if(pce != nullptr)
        {
            children["pce"] = pce;
        }
    }

    if(children.find("policy-classes") == children.end())
    {
        if(policy_classes != nullptr)
        {
            children["policy-classes"] = policy_classes;
        }
    }

    if(children.find("priority") == children.end())
    {
        if(priority != nullptr)
        {
            children["priority"] = priority;
        }
    }

    if(children.find("switching") == children.end())
    {
        if(switching != nullptr)
        {
            children["switching"] = switching;
        }
    }

    if(children.find("tunnel-path-selection") == children.end())
    {
        if(tunnel_path_selection != nullptr)
        {
            children["tunnel-path-selection"] = tunnel_path_selection;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination")
    {
        destination = value;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
    }
    if(value_path == "load-share")
    {
        load_share = value;
    }
    if(value_path == "path-protection")
    {
        path_protection = value;
    }
    if(value_path == "path-selection-metric")
    {
        path_selection_metric = value;
    }
    if(value_path == "record-route")
    {
        record_route = value;
    }
    if(value_path == "signalled-name")
    {
        signalled_name = value;
    }
    if(value_path == "soft-preemption")
    {
        soft_preemption = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth::BackupBandwidth()
    :
    backup_bandwidth{YType::uint32, "backup-bandwidth"},
    class_type{YType::enumeration, "class-type"},
    dste_type{YType::enumeration, "dste-type"},
    limit_type{YType::enumeration, "limit-type"},
    pool_type{YType::enumeration, "pool-type"}
{
    yang_name = "backup-bandwidth"; yang_parent_name = "tunnel-te-attributes";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth::~BackupBandwidth()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth::has_data() const
{
    return backup_bandwidth.is_set
	|| class_type.is_set
	|| dste_type.is_set
	|| limit_type.is_set
	|| pool_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth::has_operation() const
{
    return is_set(operation)
	|| is_set(backup_bandwidth.operation)
	|| is_set(class_type.operation)
	|| is_set(dste_type.operation)
	|| is_set(limit_type.operation)
	|| is_set(pool_type.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-bandwidth";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupBandwidth' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_bandwidth.is_set || is_set(backup_bandwidth.operation)) leaf_name_data.push_back(backup_bandwidth.get_name_leafdata());
    if (class_type.is_set || is_set(class_type.operation)) leaf_name_data.push_back(class_type.get_name_leafdata());
    if (dste_type.is_set || is_set(dste_type.operation)) leaf_name_data.push_back(dste_type.get_name_leafdata());
    if (limit_type.is_set || is_set(limit_type.operation)) leaf_name_data.push_back(limit_type.get_name_leafdata());
    if (pool_type.is_set || is_set(pool_type.operation)) leaf_name_data.push_back(pool_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-bandwidth")
    {
        backup_bandwidth = value;
    }
    if(value_path == "class-type")
    {
        class_type = value;
    }
    if(value_path == "dste-type")
    {
        dste_type = value;
    }
    if(value_path == "limit-type")
    {
        limit_type = value;
    }
    if(value_path == "pool-type")
    {
        pool_type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp::BfdOverLsp()
    :
    bringup_timeout{YType::uint32, "bringup-timeout"},
    dampening_initial_wait{YType::uint32, "dampening-initial-wait"},
    dampening_maximum_wait{YType::uint32, "dampening-maximum-wait"},
    dampening_secondary_wait{YType::uint32, "dampening-secondary-wait"},
    enable{YType::empty, "enable"},
    encap_mode{YType::uint32, "encap-mode"},
    fast_detect{YType::enumeration, "fast-detect"},
    minimum_interval{YType::uint32, "minimum-interval"},
    multiplier{YType::uint32, "multiplier"},
    periodic_ping_disable{YType::empty, "periodic-ping-disable"},
    periodic_ping_interval{YType::uint32, "periodic-ping-interval"}
{
    yang_name = "bfd-over-lsp"; yang_parent_name = "tunnel-te-attributes";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp::~BfdOverLsp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp::has_data() const
{
    return bringup_timeout.is_set
	|| dampening_initial_wait.is_set
	|| dampening_maximum_wait.is_set
	|| dampening_secondary_wait.is_set
	|| enable.is_set
	|| encap_mode.is_set
	|| fast_detect.is_set
	|| minimum_interval.is_set
	|| multiplier.is_set
	|| periodic_ping_disable.is_set
	|| periodic_ping_interval.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp::has_operation() const
{
    return is_set(operation)
	|| is_set(bringup_timeout.operation)
	|| is_set(dampening_initial_wait.operation)
	|| is_set(dampening_maximum_wait.operation)
	|| is_set(dampening_secondary_wait.operation)
	|| is_set(enable.operation)
	|| is_set(encap_mode.operation)
	|| is_set(fast_detect.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(multiplier.operation)
	|| is_set(periodic_ping_disable.operation)
	|| is_set(periodic_ping_interval.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-over-lsp";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BfdOverLsp' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bringup_timeout.is_set || is_set(bringup_timeout.operation)) leaf_name_data.push_back(bringup_timeout.get_name_leafdata());
    if (dampening_initial_wait.is_set || is_set(dampening_initial_wait.operation)) leaf_name_data.push_back(dampening_initial_wait.get_name_leafdata());
    if (dampening_maximum_wait.is_set || is_set(dampening_maximum_wait.operation)) leaf_name_data.push_back(dampening_maximum_wait.get_name_leafdata());
    if (dampening_secondary_wait.is_set || is_set(dampening_secondary_wait.operation)) leaf_name_data.push_back(dampening_secondary_wait.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (encap_mode.is_set || is_set(encap_mode.operation)) leaf_name_data.push_back(encap_mode.get_name_leafdata());
    if (fast_detect.is_set || is_set(fast_detect.operation)) leaf_name_data.push_back(fast_detect.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (multiplier.is_set || is_set(multiplier.operation)) leaf_name_data.push_back(multiplier.get_name_leafdata());
    if (periodic_ping_disable.is_set || is_set(periodic_ping_disable.operation)) leaf_name_data.push_back(periodic_ping_disable.get_name_leafdata());
    if (periodic_ping_interval.is_set || is_set(periodic_ping_interval.operation)) leaf_name_data.push_back(periodic_ping_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bringup-timeout")
    {
        bringup_timeout = value;
    }
    if(value_path == "dampening-initial-wait")
    {
        dampening_initial_wait = value;
    }
    if(value_path == "dampening-maximum-wait")
    {
        dampening_maximum_wait = value;
    }
    if(value_path == "dampening-secondary-wait")
    {
        dampening_secondary_wait = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "encap-mode")
    {
        encap_mode = value;
    }
    if(value_path == "fast-detect")
    {
        fast_detect = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "multiplier")
    {
        multiplier = value;
    }
    if(value_path == "periodic-ping-disable")
    {
        periodic_ping_disable = value;
    }
    if(value_path == "periodic-ping-interval")
    {
        periodic_ping_interval = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls::BindingSegmentIdMpls()
    :
    label_value{YType::uint32, "label-value"},
    segment_id_type{YType::enumeration, "segment-id-type"}
{
    yang_name = "binding-segment-id-mpls"; yang_parent_name = "tunnel-te-attributes";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls::~BindingSegmentIdMpls()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls::has_data() const
{
    return label_value.is_set
	|| segment_id_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls::has_operation() const
{
    return is_set(operation)
	|| is_set(label_value.operation)
	|| is_set(segment_id_type.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding-segment-id-mpls";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BindingSegmentIdMpls' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_value.is_set || is_set(label_value.operation)) leaf_name_data.push_back(label_value.get_name_leafdata());
    if (segment_id_type.is_set || is_set(segment_id_type.operation)) leaf_name_data.push_back(segment_id_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-value")
    {
        label_value = value;
    }
    if(value_path == "segment-id-type")
    {
        segment_id_type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency::ForwardingAdjacency()
    :
    enable{YType::empty, "enable"},
    hold_time{YType::uint32, "hold-time"},
    include_ipv6{YType::empty, "include-ipv6"}
{
    yang_name = "forwarding-adjacency"; yang_parent_name = "tunnel-te-attributes";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency::~ForwardingAdjacency()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency::has_data() const
{
    return enable.is_set
	|| hold_time.is_set
	|| include_ipv6.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(hold_time.operation)
	|| is_set(include_ipv6.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-adjacency";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ForwardingAdjacency' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.operation)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (include_ipv6.is_set || is_set(include_ipv6.operation)) leaf_name_data.push_back(include_ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
    }
    if(value_path == "include-ipv6")
    {
        include_ipv6 = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtects()
{
    yang_name = "path-option-protects"; yang_parent_name = "tunnel-te-attributes";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::~PathOptionProtects()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::has_data() const
{
    for (std::size_t index=0; index<path_option_protect.size(); index++)
    {
        if(path_option_protect[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::has_operation() const
{
    for (std::size_t index=0; index<path_option_protect.size(); index++)
    {
        if(path_option_protect[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-option-protects";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathOptionProtects' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "path-option-protect")
    {
        for(auto const & c : path_option_protect)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect>();
        c->parent = this;
        path_option_protect.push_back(std::move(c));
        children[segment_path] = path_option_protect.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::get_children()
{
    for (auto const & c : path_option_protect)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptionProtect()
    :
    protection{YType::enumeration, "protection"}
    	,
    path_options(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions>())
{
    path_options->parent = this;
    children["path-options"] = path_options;

    yang_name = "path-option-protect"; yang_parent_name = "path-option-protects";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::~PathOptionProtect()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::has_data() const
{
    return protection.is_set
	|| (path_options !=  nullptr && path_options->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::has_operation() const
{
    return is_set(operation)
	|| is_set(protection.operation)
	|| (path_options !=  nullptr && path_options->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-option-protect" <<"[protection='" <<protection <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathOptionProtect' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protection.is_set || is_set(protection.operation)) leaf_name_data.push_back(protection.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "path-options")
    {
        if(path_options != nullptr)
        {
            children["path-options"] = path_options;
        }
        else
        {
            path_options = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions>();
            path_options->parent = this;
            children["path-options"] = path_options;
        }
        return children.at("path-options");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::get_children()
{
    if(children.find("path-options") == children.end())
    {
        if(path_options != nullptr)
        {
            children["path-options"] = path_options;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "protection")
    {
        protection = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOptions()
{
    yang_name = "path-options"; yang_parent_name = "path-option-protect";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::~PathOptions()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::has_data() const
{
    for (std::size_t index=0; index<path_option.size(); index++)
    {
        if(path_option[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::has_operation() const
{
    for (std::size_t index=0; index<path_option.size(); index++)
    {
        if(path_option[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-options";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathOptions' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "path-option")
    {
        for(auto const & c : path_option)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption>();
        c->parent = this;
        path_option.push_back(std::move(c));
        children[segment_path] = path_option.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::get_children()
{
    for (auto const & c : path_option)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption::PathOption()
    :
    preference_level{YType::uint32, "preference-level"},
    destination{YType::str, "destination"},
    igp_area{YType::int32, "igp-area"},
    igp_area_ip_address_id{YType::str, "igp-area-ip-address-id"},
    igp_instance{YType::str, "igp-instance"},
    igp_type{YType::enumeration, "igp-type"},
    interface{YType::str, "interface"},
    lockdown{YType::enumeration, "lockdown"},
    output_label{YType::int32, "output-label"},
    path_id{YType::uint32, "path-id"},
    path_name{YType::str, "path-name"},
    path_option_attribute_set_name{YType::str, "path-option-attribute-set-name"},
    path_property{YType::int32, "path-property"},
    path_type{YType::enumeration, "path-type"},
    pce{YType::enumeration, "pce"},
    pce_address{YType::str, "pce-address"},
    protected_by_preference_level{YType::uint32, "protected-by-preference-level"},
    segment_routing{YType::enumeration, "segment-routing"},
    verbatim{YType::enumeration, "verbatim"}
{
    yang_name = "path-option"; yang_parent_name = "path-options";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption::~PathOption()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption::has_data() const
{
    return preference_level.is_set
	|| destination.is_set
	|| igp_area.is_set
	|| igp_area_ip_address_id.is_set
	|| igp_instance.is_set
	|| igp_type.is_set
	|| interface.is_set
	|| lockdown.is_set
	|| output_label.is_set
	|| path_id.is_set
	|| path_name.is_set
	|| path_option_attribute_set_name.is_set
	|| path_property.is_set
	|| path_type.is_set
	|| pce.is_set
	|| pce_address.is_set
	|| protected_by_preference_level.is_set
	|| segment_routing.is_set
	|| verbatim.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption::has_operation() const
{
    return is_set(operation)
	|| is_set(preference_level.operation)
	|| is_set(destination.operation)
	|| is_set(igp_area.operation)
	|| is_set(igp_area_ip_address_id.operation)
	|| is_set(igp_instance.operation)
	|| is_set(igp_type.operation)
	|| is_set(interface.operation)
	|| is_set(lockdown.operation)
	|| is_set(output_label.operation)
	|| is_set(path_id.operation)
	|| is_set(path_name.operation)
	|| is_set(path_option_attribute_set_name.operation)
	|| is_set(path_property.operation)
	|| is_set(path_type.operation)
	|| is_set(pce.operation)
	|| is_set(pce_address.operation)
	|| is_set(protected_by_preference_level.operation)
	|| is_set(segment_routing.operation)
	|| is_set(verbatim.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-option" <<"[preference-level='" <<preference_level <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathOption' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (preference_level.is_set || is_set(preference_level.operation)) leaf_name_data.push_back(preference_level.get_name_leafdata());
    if (destination.is_set || is_set(destination.operation)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (igp_area.is_set || is_set(igp_area.operation)) leaf_name_data.push_back(igp_area.get_name_leafdata());
    if (igp_area_ip_address_id.is_set || is_set(igp_area_ip_address_id.operation)) leaf_name_data.push_back(igp_area_ip_address_id.get_name_leafdata());
    if (igp_instance.is_set || is_set(igp_instance.operation)) leaf_name_data.push_back(igp_instance.get_name_leafdata());
    if (igp_type.is_set || is_set(igp_type.operation)) leaf_name_data.push_back(igp_type.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (lockdown.is_set || is_set(lockdown.operation)) leaf_name_data.push_back(lockdown.get_name_leafdata());
    if (output_label.is_set || is_set(output_label.operation)) leaf_name_data.push_back(output_label.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.operation)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (path_name.is_set || is_set(path_name.operation)) leaf_name_data.push_back(path_name.get_name_leafdata());
    if (path_option_attribute_set_name.is_set || is_set(path_option_attribute_set_name.operation)) leaf_name_data.push_back(path_option_attribute_set_name.get_name_leafdata());
    if (path_property.is_set || is_set(path_property.operation)) leaf_name_data.push_back(path_property.get_name_leafdata());
    if (path_type.is_set || is_set(path_type.operation)) leaf_name_data.push_back(path_type.get_name_leafdata());
    if (pce.is_set || is_set(pce.operation)) leaf_name_data.push_back(pce.get_name_leafdata());
    if (pce_address.is_set || is_set(pce_address.operation)) leaf_name_data.push_back(pce_address.get_name_leafdata());
    if (protected_by_preference_level.is_set || is_set(protected_by_preference_level.operation)) leaf_name_data.push_back(protected_by_preference_level.get_name_leafdata());
    if (segment_routing.is_set || is_set(segment_routing.operation)) leaf_name_data.push_back(segment_routing.get_name_leafdata());
    if (verbatim.is_set || is_set(verbatim.operation)) leaf_name_data.push_back(verbatim.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "preference-level")
    {
        preference_level = value;
    }
    if(value_path == "destination")
    {
        destination = value;
    }
    if(value_path == "igp-area")
    {
        igp_area = value;
    }
    if(value_path == "igp-area-ip-address-id")
    {
        igp_area_ip_address_id = value;
    }
    if(value_path == "igp-instance")
    {
        igp_instance = value;
    }
    if(value_path == "igp-type")
    {
        igp_type = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "lockdown")
    {
        lockdown = value;
    }
    if(value_path == "output-label")
    {
        output_label = value;
    }
    if(value_path == "path-id")
    {
        path_id = value;
    }
    if(value_path == "path-name")
    {
        path_name = value;
    }
    if(value_path == "path-option-attribute-set-name")
    {
        path_option_attribute_set_name = value;
    }
    if(value_path == "path-property")
    {
        path_property = value;
    }
    if(value_path == "path-type")
    {
        path_type = value;
    }
    if(value_path == "pce")
    {
        pce = value;
    }
    if(value_path == "pce-address")
    {
        pce_address = value;
    }
    if(value_path == "protected-by-preference-level")
    {
        protected_by_preference_level = value;
    }
    if(value_path == "segment-routing")
    {
        segment_routing = value;
    }
    if(value_path == "verbatim")
    {
        verbatim = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::Bidirectional()
    :
    enabled{YType::empty, "enabled"}
    	,
    association_corouted_type(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType>())
	,association_parameters(nullptr) // presence node
{
    association_corouted_type->parent = this;
    children["association-corouted-type"] = association_corouted_type;

    yang_name = "bidirectional"; yang_parent_name = "tunnel-te-attributes";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::~Bidirectional()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::has_data() const
{
    return enabled.is_set
	|| (association_corouted_type !=  nullptr && association_corouted_type->has_data())
	|| (association_parameters !=  nullptr && association_parameters->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::has_operation() const
{
    return is_set(operation)
	|| is_set(enabled.operation)
	|| (association_corouted_type !=  nullptr && association_corouted_type->has_operation())
	|| (association_parameters !=  nullptr && association_parameters->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bidirectional";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bidirectional' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "association-corouted-type")
    {
        if(association_corouted_type != nullptr)
        {
            children["association-corouted-type"] = association_corouted_type;
        }
        else
        {
            association_corouted_type = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType>();
            association_corouted_type->parent = this;
            children["association-corouted-type"] = association_corouted_type;
        }
        return children.at("association-corouted-type");
    }

    if(child_yang_name == "association-parameters")
    {
        if(association_parameters != nullptr)
        {
            children["association-parameters"] = association_parameters;
        }
        else
        {
            association_parameters = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters>();
            association_parameters->parent = this;
            children["association-parameters"] = association_parameters;
        }
        return children.at("association-parameters");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::get_children()
{
    if(children.find("association-corouted-type") == children.end())
    {
        if(association_corouted_type != nullptr)
        {
            children["association-corouted-type"] = association_corouted_type;
        }
    }

    if(children.find("association-parameters") == children.end())
    {
        if(association_parameters != nullptr)
        {
            children["association-parameters"] = association_parameters;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enabled")
    {
        enabled = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::AssociationCoroutedType()
    :
    enable{YType::empty, "enable"},
    wrap_protection_enable{YType::empty, "wrap-protection-enable"}
    	,
    fault_oam(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam>())
{
    fault_oam->parent = this;
    children["fault-oam"] = fault_oam;

    yang_name = "association-corouted-type"; yang_parent_name = "bidirectional";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::~AssociationCoroutedType()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::has_data() const
{
    return enable.is_set
	|| wrap_protection_enable.is_set
	|| (fault_oam !=  nullptr && fault_oam->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(wrap_protection_enable.operation)
	|| (fault_oam !=  nullptr && fault_oam->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association-corouted-type";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AssociationCoroutedType' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (wrap_protection_enable.is_set || is_set(wrap_protection_enable.operation)) leaf_name_data.push_back(wrap_protection_enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fault-oam")
    {
        if(fault_oam != nullptr)
        {
            children["fault-oam"] = fault_oam;
        }
        else
        {
            fault_oam = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam>();
            fault_oam->parent = this;
            children["fault-oam"] = fault_oam;
        }
        return children.at("fault-oam");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::get_children()
{
    if(children.find("fault-oam") == children.end())
    {
        if(fault_oam != nullptr)
        {
            children["fault-oam"] = fault_oam;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "wrap-protection-enable")
    {
        wrap_protection_enable = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam::FaultOam()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "fault-oam"; yang_parent_name = "association-corouted-type";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam::~FaultOam()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam::has_data() const
{
    return enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fault-oam";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FaultOam' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters::AssociationParameters()
    :
    association_global_id{YType::uint32, "association-global-id"},
    association_id{YType::uint32, "association-id"},
    association_is_global_id_configured{YType::boolean, "association-is-global-id-configured"},
    association_source_address{YType::str, "association-source-address"}
{
    yang_name = "association-parameters"; yang_parent_name = "bidirectional";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters::~AssociationParameters()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters::has_data() const
{
    return association_global_id.is_set
	|| association_id.is_set
	|| association_is_global_id_configured.is_set
	|| association_source_address.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters::has_operation() const
{
    return is_set(operation)
	|| is_set(association_global_id.operation)
	|| is_set(association_id.operation)
	|| is_set(association_is_global_id_configured.operation)
	|| is_set(association_source_address.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association-parameters";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AssociationParameters' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (association_global_id.is_set || is_set(association_global_id.operation)) leaf_name_data.push_back(association_global_id.get_name_leafdata());
    if (association_id.is_set || is_set(association_id.operation)) leaf_name_data.push_back(association_id.get_name_leafdata());
    if (association_is_global_id_configured.is_set || is_set(association_is_global_id_configured.operation)) leaf_name_data.push_back(association_is_global_id_configured.get_name_leafdata());
    if (association_source_address.is_set || is_set(association_source_address.operation)) leaf_name_data.push_back(association_source_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "association-global-id")
    {
        association_global_id = value;
    }
    if(value_path == "association-id")
    {
        association_id = value;
    }
    if(value_path == "association-is-global-id-configured")
    {
        association_is_global_id_configured = value;
    }
    if(value_path == "association-source-address")
    {
        association_source_address = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode::AdminMode()
    :
    deactivate_tunnel{YType::empty, "deactivate-tunnel"}
{
    yang_name = "admin-mode"; yang_parent_name = "tunnel-te-attributes";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode::~AdminMode()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode::has_data() const
{
    return deactivate_tunnel.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode::has_operation() const
{
    return is_set(operation)
	|| is_set(deactivate_tunnel.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admin-mode";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdminMode' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (deactivate_tunnel.is_set || is_set(deactivate_tunnel.operation)) leaf_name_data.push_back(deactivate_tunnel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "deactivate-tunnel")
    {
        deactivate_tunnel = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Switching()
    :
    endpoint(nullptr) // presence node
	,transit(nullptr) // presence node
{
    yang_name = "switching"; yang_parent_name = "tunnel-te-attributes";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::~Switching()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::has_data() const
{
    return (endpoint !=  nullptr && endpoint->has_data())
	|| (transit !=  nullptr && transit->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::has_operation() const
{
    return is_set(operation)
	|| (endpoint !=  nullptr && endpoint->has_operation())
	|| (transit !=  nullptr && transit->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switching";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Switching' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "endpoint")
    {
        if(endpoint != nullptr)
        {
            children["endpoint"] = endpoint;
        }
        else
        {
            endpoint = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint>();
            endpoint->parent = this;
            children["endpoint"] = endpoint;
        }
        return children.at("endpoint");
    }

    if(child_yang_name == "transit")
    {
        if(transit != nullptr)
        {
            children["transit"] = transit;
        }
        else
        {
            transit = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit>();
            transit->parent = this;
            children["transit"] = transit;
        }
        return children.at("transit");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::get_children()
{
    if(children.find("endpoint") == children.end())
    {
        if(endpoint != nullptr)
        {
            children["endpoint"] = endpoint;
        }
    }

    if(children.find("transit") == children.end())
    {
        if(transit != nullptr)
        {
            children["transit"] = transit;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit::Transit()
    :
    capability{YType::enumeration, "capability"},
    encoding{YType::enumeration, "encoding"}
{
    yang_name = "transit"; yang_parent_name = "switching";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit::~Transit()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit::has_data() const
{
    return capability.is_set
	|| encoding.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit::has_operation() const
{
    return is_set(operation)
	|| is_set(capability.operation)
	|| is_set(encoding.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transit";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Transit' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (capability.is_set || is_set(capability.operation)) leaf_name_data.push_back(capability.get_name_leafdata());
    if (encoding.is_set || is_set(encoding.operation)) leaf_name_data.push_back(encoding.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "capability")
    {
        capability = value;
    }
    if(value_path == "encoding")
    {
        encoding = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint::Endpoint()
    :
    capability{YType::enumeration, "capability"},
    encoding{YType::enumeration, "encoding"}
{
    yang_name = "endpoint"; yang_parent_name = "switching";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint::~Endpoint()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint::has_data() const
{
    return capability.is_set
	|| encoding.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint::has_operation() const
{
    return is_set(operation)
	|| is_set(capability.operation)
	|| is_set(encoding.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "endpoint";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Endpoint' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (capability.is_set || is_set(capability.operation)) leaf_name_data.push_back(capability.get_name_leafdata());
    if (encoding.is_set || is_set(encoding.operation)) leaf_name_data.push_back(encoding.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "capability")
    {
        capability = value;
    }
    if(value_path == "encoding")
    {
        encoding = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce::Pce()
    :
    delegation{YType::empty, "delegation"},
    enable{YType::empty, "enable"}
{
    yang_name = "pce"; yang_parent_name = "tunnel-te-attributes";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce::~Pce()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce::has_data() const
{
    return delegation.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce::has_operation() const
{
    return is_set(operation)
	|| is_set(delegation.operation)
	|| is_set(enable.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pce";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pce' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delegation.is_set || is_set(delegation.operation)) leaf_name_data.push_back(delegation.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "delegation")
    {
        delegation = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::TunnelPathSelection()
    :
    path_selection_cost_limit{YType::uint32, "path-selection-cost-limit"},
    path_selection_hop_limit{YType::uint32, "path-selection-hop-limit"},
    tiebreaker{YType::enumeration, "tiebreaker"}
    	,
    invalidation(nullptr) // presence node
{
    yang_name = "tunnel-path-selection"; yang_parent_name = "tunnel-te-attributes";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::~TunnelPathSelection()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::has_data() const
{
    return path_selection_cost_limit.is_set
	|| path_selection_hop_limit.is_set
	|| tiebreaker.is_set
	|| (invalidation !=  nullptr && invalidation->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::has_operation() const
{
    return is_set(operation)
	|| is_set(path_selection_cost_limit.operation)
	|| is_set(path_selection_hop_limit.operation)
	|| is_set(tiebreaker.operation)
	|| (invalidation !=  nullptr && invalidation->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-path-selection";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TunnelPathSelection' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_selection_cost_limit.is_set || is_set(path_selection_cost_limit.operation)) leaf_name_data.push_back(path_selection_cost_limit.get_name_leafdata());
    if (path_selection_hop_limit.is_set || is_set(path_selection_hop_limit.operation)) leaf_name_data.push_back(path_selection_hop_limit.get_name_leafdata());
    if (tiebreaker.is_set || is_set(tiebreaker.operation)) leaf_name_data.push_back(tiebreaker.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "invalidation")
    {
        if(invalidation != nullptr)
        {
            children["invalidation"] = invalidation;
        }
        else
        {
            invalidation = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation>();
            invalidation->parent = this;
            children["invalidation"] = invalidation;
        }
        return children.at("invalidation");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::get_children()
{
    if(children.find("invalidation") == children.end())
    {
        if(invalidation != nullptr)
        {
            children["invalidation"] = invalidation;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "path-selection-cost-limit")
    {
        path_selection_cost_limit = value;
    }
    if(value_path == "path-selection-hop-limit")
    {
        path_selection_hop_limit = value;
    }
    if(value_path == "tiebreaker")
    {
        tiebreaker = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation::Invalidation()
    :
    path_invalidation_action{YType::enumeration, "path-invalidation-action"},
    path_invalidation_timeout{YType::uint32, "path-invalidation-timeout"}
{
    yang_name = "invalidation"; yang_parent_name = "tunnel-path-selection";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation::~Invalidation()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation::has_data() const
{
    return path_invalidation_action.is_set
	|| path_invalidation_timeout.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation::has_operation() const
{
    return is_set(operation)
	|| is_set(path_invalidation_action.operation)
	|| is_set(path_invalidation_timeout.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "invalidation";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Invalidation' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_invalidation_action.is_set || is_set(path_invalidation_action.operation)) leaf_name_data.push_back(path_invalidation_action.get_name_leafdata());
    if (path_invalidation_timeout.is_set || is_set(path_invalidation_timeout.operation)) leaf_name_data.push_back(path_invalidation_timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "path-invalidation-action")
    {
        path_invalidation_action = value;
    }
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AutoBandwidth()
    :
    application_frequency{YType::uint32, "application-frequency"},
    collection_only{YType::empty, "collection-only"},
    enabled{YType::boolean, "enabled"},
    overflow_enable{YType::boolean, "overflow-enable"},
    underflow_enable{YType::boolean, "underflow-enable"}
    	,
    adjustment_threshold(nullptr) // presence node
	,bandwidth_limits(nullptr) // presence node
	,overflow(nullptr) // presence node
	,underflow(nullptr) // presence node
{
    yang_name = "auto-bandwidth"; yang_parent_name = "tunnel-te-attributes";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::~AutoBandwidth()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::has_data() const
{
    return application_frequency.is_set
	|| collection_only.is_set
	|| enabled.is_set
	|| overflow_enable.is_set
	|| underflow_enable.is_set
	|| (adjustment_threshold !=  nullptr && adjustment_threshold->has_data())
	|| (bandwidth_limits !=  nullptr && bandwidth_limits->has_data())
	|| (overflow !=  nullptr && overflow->has_data())
	|| (underflow !=  nullptr && underflow->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::has_operation() const
{
    return is_set(operation)
	|| is_set(application_frequency.operation)
	|| is_set(collection_only.operation)
	|| is_set(enabled.operation)
	|| is_set(overflow_enable.operation)
	|| is_set(underflow_enable.operation)
	|| (adjustment_threshold !=  nullptr && adjustment_threshold->has_operation())
	|| (bandwidth_limits !=  nullptr && bandwidth_limits->has_operation())
	|| (overflow !=  nullptr && overflow->has_operation())
	|| (underflow !=  nullptr && underflow->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-bandwidth";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AutoBandwidth' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_frequency.is_set || is_set(application_frequency.operation)) leaf_name_data.push_back(application_frequency.get_name_leafdata());
    if (collection_only.is_set || is_set(collection_only.operation)) leaf_name_data.push_back(collection_only.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (overflow_enable.is_set || is_set(overflow_enable.operation)) leaf_name_data.push_back(overflow_enable.get_name_leafdata());
    if (underflow_enable.is_set || is_set(underflow_enable.operation)) leaf_name_data.push_back(underflow_enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "adjustment-threshold")
    {
        if(adjustment_threshold != nullptr)
        {
            children["adjustment-threshold"] = adjustment_threshold;
        }
        else
        {
            adjustment_threshold = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold>();
            adjustment_threshold->parent = this;
            children["adjustment-threshold"] = adjustment_threshold;
        }
        return children.at("adjustment-threshold");
    }

    if(child_yang_name == "bandwidth-limits")
    {
        if(bandwidth_limits != nullptr)
        {
            children["bandwidth-limits"] = bandwidth_limits;
        }
        else
        {
            bandwidth_limits = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits>();
            bandwidth_limits->parent = this;
            children["bandwidth-limits"] = bandwidth_limits;
        }
        return children.at("bandwidth-limits");
    }

    if(child_yang_name == "overflow")
    {
        if(overflow != nullptr)
        {
            children["overflow"] = overflow;
        }
        else
        {
            overflow = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow>();
            overflow->parent = this;
            children["overflow"] = overflow;
        }
        return children.at("overflow");
    }

    if(child_yang_name == "underflow")
    {
        if(underflow != nullptr)
        {
            children["underflow"] = underflow;
        }
        else
        {
            underflow = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow>();
            underflow->parent = this;
            children["underflow"] = underflow;
        }
        return children.at("underflow");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::get_children()
{
    if(children.find("adjustment-threshold") == children.end())
    {
        if(adjustment_threshold != nullptr)
        {
            children["adjustment-threshold"] = adjustment_threshold;
        }
    }

    if(children.find("bandwidth-limits") == children.end())
    {
        if(bandwidth_limits != nullptr)
        {
            children["bandwidth-limits"] = bandwidth_limits;
        }
    }

    if(children.find("overflow") == children.end())
    {
        if(overflow != nullptr)
        {
            children["overflow"] = overflow;
        }
    }

    if(children.find("underflow") == children.end())
    {
        if(underflow != nullptr)
        {
            children["underflow"] = underflow;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "application-frequency")
    {
        application_frequency = value;
    }
    if(value_path == "collection-only")
    {
        collection_only = value;
    }
    if(value_path == "enabled")
    {
        enabled = value;
    }
    if(value_path == "overflow-enable")
    {
        overflow_enable = value;
    }
    if(value_path == "underflow-enable")
    {
        underflow_enable = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow::Underflow()
    :
    underflow_threshold_limit{YType::uint32, "underflow-threshold-limit"},
    underflow_threshold_percent{YType::uint32, "underflow-threshold-percent"},
    underflow_threshold_value{YType::uint32, "underflow-threshold-value"}
{
    yang_name = "underflow"; yang_parent_name = "auto-bandwidth";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow::~Underflow()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow::has_data() const
{
    return underflow_threshold_limit.is_set
	|| underflow_threshold_percent.is_set
	|| underflow_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow::has_operation() const
{
    return is_set(operation)
	|| is_set(underflow_threshold_limit.operation)
	|| is_set(underflow_threshold_percent.operation)
	|| is_set(underflow_threshold_value.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "underflow";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Underflow' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (underflow_threshold_limit.is_set || is_set(underflow_threshold_limit.operation)) leaf_name_data.push_back(underflow_threshold_limit.get_name_leafdata());
    if (underflow_threshold_percent.is_set || is_set(underflow_threshold_percent.operation)) leaf_name_data.push_back(underflow_threshold_percent.get_name_leafdata());
    if (underflow_threshold_value.is_set || is_set(underflow_threshold_value.operation)) leaf_name_data.push_back(underflow_threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "underflow-threshold-limit")
    {
        underflow_threshold_limit = value;
    }
    if(value_path == "underflow-threshold-percent")
    {
        underflow_threshold_percent = value;
    }
    if(value_path == "underflow-threshold-value")
    {
        underflow_threshold_value = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow::Overflow()
    :
    overflow_threshold_limit{YType::uint32, "overflow-threshold-limit"},
    overflow_threshold_percent{YType::uint32, "overflow-threshold-percent"},
    overflow_threshold_value{YType::uint32, "overflow-threshold-value"}
{
    yang_name = "overflow"; yang_parent_name = "auto-bandwidth";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow::~Overflow()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow::has_data() const
{
    return overflow_threshold_limit.is_set
	|| overflow_threshold_percent.is_set
	|| overflow_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow::has_operation() const
{
    return is_set(operation)
	|| is_set(overflow_threshold_limit.operation)
	|| is_set(overflow_threshold_percent.operation)
	|| is_set(overflow_threshold_value.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overflow";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Overflow' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (overflow_threshold_limit.is_set || is_set(overflow_threshold_limit.operation)) leaf_name_data.push_back(overflow_threshold_limit.get_name_leafdata());
    if (overflow_threshold_percent.is_set || is_set(overflow_threshold_percent.operation)) leaf_name_data.push_back(overflow_threshold_percent.get_name_leafdata());
    if (overflow_threshold_value.is_set || is_set(overflow_threshold_value.operation)) leaf_name_data.push_back(overflow_threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "overflow-threshold-limit")
    {
        overflow_threshold_limit = value;
    }
    if(value_path == "overflow-threshold-percent")
    {
        overflow_threshold_percent = value;
    }
    if(value_path == "overflow-threshold-value")
    {
        overflow_threshold_value = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits::BandwidthLimits()
    :
    bandwidth_max_limit{YType::uint32, "bandwidth-max-limit"},
    bandwidth_min_limit{YType::uint32, "bandwidth-min-limit"}
{
    yang_name = "bandwidth-limits"; yang_parent_name = "auto-bandwidth";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits::~BandwidthLimits()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits::has_data() const
{
    return bandwidth_max_limit.is_set
	|| bandwidth_min_limit.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits::has_operation() const
{
    return is_set(operation)
	|| is_set(bandwidth_max_limit.operation)
	|| is_set(bandwidth_min_limit.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-limits";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BandwidthLimits' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_max_limit.is_set || is_set(bandwidth_max_limit.operation)) leaf_name_data.push_back(bandwidth_max_limit.get_name_leafdata());
    if (bandwidth_min_limit.is_set || is_set(bandwidth_min_limit.operation)) leaf_name_data.push_back(bandwidth_min_limit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth-max-limit")
    {
        bandwidth_max_limit = value;
    }
    if(value_path == "bandwidth-min-limit")
    {
        bandwidth_min_limit = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold::AdjustmentThreshold()
    :
    adjustment_threshold_percent{YType::uint32, "adjustment-threshold-percent"},
    adjustment_threshold_value{YType::uint32, "adjustment-threshold-value"}
{
    yang_name = "adjustment-threshold"; yang_parent_name = "auto-bandwidth";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold::~AdjustmentThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold::has_data() const
{
    return adjustment_threshold_percent.is_set
	|| adjustment_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(adjustment_threshold_percent.operation)
	|| is_set(adjustment_threshold_value.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjustment-threshold";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdjustmentThreshold' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjustment_threshold_percent.is_set || is_set(adjustment_threshold_percent.operation)) leaf_name_data.push_back(adjustment_threshold_percent.get_name_leafdata());
    if (adjustment_threshold_value.is_set || is_set(adjustment_threshold_value.operation)) leaf_name_data.push_back(adjustment_threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adjustment-threshold-percent")
    {
        adjustment_threshold_percent = value;
    }
    if(value_path == "adjustment-threshold-value")
    {
        adjustment_threshold_value = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority::Priority()
    :
    hold_priority{YType::uint32, "hold-priority"},
    setup_priority{YType::uint32, "setup-priority"}
{
    yang_name = "priority"; yang_parent_name = "tunnel-te-attributes";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority::~Priority()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority::has_data() const
{
    return hold_priority.is_set
	|| setup_priority.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority::has_operation() const
{
    return is_set(operation)
	|| is_set(hold_priority.operation)
	|| is_set(setup_priority.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Priority' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_priority.is_set || is_set(hold_priority.operation)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.operation)) leaf_name_data.push_back(setup_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hold-priority")
    {
        hold_priority = value;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask::AffinityMask()
    :
    affinity{YType::str, "affinity"},
    mask{YType::str, "mask"}
{
    yang_name = "affinity-mask"; yang_parent_name = "tunnel-te-attributes";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask::~AffinityMask()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask::has_data() const
{
    return affinity.is_set
	|| mask.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity.operation)
	|| is_set(mask.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-mask";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AffinityMask' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity.is_set || is_set(affinity.operation)) leaf_name_data.push_back(affinity.get_name_leafdata());
    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity")
    {
        affinity = value;
    }
    if(value_path == "mask")
    {
        mask = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging::Logging()
    :
    all{YType::empty, "all"},
    bandwidth_change_message{YType::empty, "bandwidth-change-message"},
    bfd_state_message{YType::empty, "bfd-state-message"},
    insufficient_bw_message{YType::empty, "insufficient-bw-message"},
    lsp_switch_over_change_message{YType::empty, "lsp-switch-over-change-message"},
    pcalc_failure_message{YType::empty, "pcalc-failure-message"},
    record_route_messsage{YType::empty, "record-route-messsage"},
    reoptimize_attempts_message{YType::empty, "reoptimize-attempts-message"},
    reoptimized_message{YType::empty, "reoptimized-message"},
    reroute_messsage{YType::empty, "reroute-messsage"},
    state_message{YType::empty, "state-message"}
{
    yang_name = "logging"; yang_parent_name = "tunnel-te-attributes";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging::~Logging()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging::has_data() const
{
    return all.is_set
	|| bandwidth_change_message.is_set
	|| bfd_state_message.is_set
	|| insufficient_bw_message.is_set
	|| lsp_switch_over_change_message.is_set
	|| pcalc_failure_message.is_set
	|| record_route_messsage.is_set
	|| reoptimize_attempts_message.is_set
	|| reoptimized_message.is_set
	|| reroute_messsage.is_set
	|| state_message.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging::has_operation() const
{
    return is_set(operation)
	|| is_set(all.operation)
	|| is_set(bandwidth_change_message.operation)
	|| is_set(bfd_state_message.operation)
	|| is_set(insufficient_bw_message.operation)
	|| is_set(lsp_switch_over_change_message.operation)
	|| is_set(pcalc_failure_message.operation)
	|| is_set(record_route_messsage.operation)
	|| is_set(reoptimize_attempts_message.operation)
	|| is_set(reoptimized_message.operation)
	|| is_set(reroute_messsage.operation)
	|| is_set(state_message.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Logging' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());
    if (bandwidth_change_message.is_set || is_set(bandwidth_change_message.operation)) leaf_name_data.push_back(bandwidth_change_message.get_name_leafdata());
    if (bfd_state_message.is_set || is_set(bfd_state_message.operation)) leaf_name_data.push_back(bfd_state_message.get_name_leafdata());
    if (insufficient_bw_message.is_set || is_set(insufficient_bw_message.operation)) leaf_name_data.push_back(insufficient_bw_message.get_name_leafdata());
    if (lsp_switch_over_change_message.is_set || is_set(lsp_switch_over_change_message.operation)) leaf_name_data.push_back(lsp_switch_over_change_message.get_name_leafdata());
    if (pcalc_failure_message.is_set || is_set(pcalc_failure_message.operation)) leaf_name_data.push_back(pcalc_failure_message.get_name_leafdata());
    if (record_route_messsage.is_set || is_set(record_route_messsage.operation)) leaf_name_data.push_back(record_route_messsage.get_name_leafdata());
    if (reoptimize_attempts_message.is_set || is_set(reoptimize_attempts_message.operation)) leaf_name_data.push_back(reoptimize_attempts_message.get_name_leafdata());
    if (reoptimized_message.is_set || is_set(reoptimized_message.operation)) leaf_name_data.push_back(reoptimized_message.get_name_leafdata());
    if (reroute_messsage.is_set || is_set(reroute_messsage.operation)) leaf_name_data.push_back(reroute_messsage.get_name_leafdata());
    if (state_message.is_set || is_set(state_message.operation)) leaf_name_data.push_back(state_message.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all")
    {
        all = value;
    }
    if(value_path == "bandwidth-change-message")
    {
        bandwidth_change_message = value;
    }
    if(value_path == "bfd-state-message")
    {
        bfd_state_message = value;
    }
    if(value_path == "insufficient-bw-message")
    {
        insufficient_bw_message = value;
    }
    if(value_path == "lsp-switch-over-change-message")
    {
        lsp_switch_over_change_message = value;
    }
    if(value_path == "pcalc-failure-message")
    {
        pcalc_failure_message = value;
    }
    if(value_path == "record-route-messsage")
    {
        record_route_messsage = value;
    }
    if(value_path == "reoptimize-attempts-message")
    {
        reoptimize_attempts_message = value;
    }
    if(value_path == "reoptimized-message")
    {
        reoptimized_message = value;
    }
    if(value_path == "reroute-messsage")
    {
        reroute_messsage = value;
    }
    if(value_path == "state-message")
    {
        state_message = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth::Bandwidth()
    :
    bandwidth{YType::uint32, "bandwidth"},
    class_or_pool_type{YType::uint32, "class-or-pool-type"},
    dste_type{YType::enumeration, "dste-type"}
{
    yang_name = "bandwidth"; yang_parent_name = "tunnel-te-attributes";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth::~Bandwidth()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth::has_data() const
{
    return bandwidth.is_set
	|| class_or_pool_type.is_set
	|| dste_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth::has_operation() const
{
    return is_set(operation)
	|| is_set(bandwidth.operation)
	|| is_set(class_or_pool_type.operation)
	|| is_set(dste_type.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bandwidth' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.operation)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (class_or_pool_type.is_set || is_set(class_or_pool_type.operation)) leaf_name_data.push_back(class_or_pool_type.get_name_leafdata());
    if (dste_type.is_set || is_set(dste_type.operation)) leaf_name_data.push_back(dste_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
    }
    if(value_path == "class-or-pool-type")
    {
        class_or_pool_type = value;
    }
    if(value_path == "dste-type")
    {
        dste_type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Autoroute()
    :
    destination{YType::empty, "destination"}
    	,
    autoroute_announce(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce>())
	,destination_xr(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::DestinationXr>())
	,metric(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Metric>())
{
    autoroute_announce->parent = this;
    children["autoroute-announce"] = autoroute_announce;

    destination_xr->parent = this;
    children["destination-xr"] = destination_xr;

    metric->parent = this;
    children["metric"] = metric;

    yang_name = "autoroute"; yang_parent_name = "tunnel-te-attributes";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::~Autoroute()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::has_data() const
{
    return destination.is_set
	|| (autoroute_announce !=  nullptr && autoroute_announce->has_data())
	|| (destination_xr !=  nullptr && destination_xr->has_data())
	|| (metric !=  nullptr && metric->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::has_operation() const
{
    return is_set(operation)
	|| is_set(destination.operation)
	|| (autoroute_announce !=  nullptr && autoroute_announce->has_operation())
	|| (destination_xr !=  nullptr && destination_xr->has_operation())
	|| (metric !=  nullptr && metric->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoroute";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Autoroute' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.operation)) leaf_name_data.push_back(destination.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "autoroute-announce")
    {
        if(autoroute_announce != nullptr)
        {
            children["autoroute-announce"] = autoroute_announce;
        }
        else
        {
            autoroute_announce = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce>();
            autoroute_announce->parent = this;
            children["autoroute-announce"] = autoroute_announce;
        }
        return children.at("autoroute-announce");
    }

    if(child_yang_name == "destination-xr")
    {
        if(destination_xr != nullptr)
        {
            children["destination-xr"] = destination_xr;
        }
        else
        {
            destination_xr = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::DestinationXr>();
            destination_xr->parent = this;
            children["destination-xr"] = destination_xr;
        }
        return children.at("destination-xr");
    }

    if(child_yang_name == "metric")
    {
        if(metric != nullptr)
        {
            children["metric"] = metric;
        }
        else
        {
            metric = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Metric>();
            metric->parent = this;
            children["metric"] = metric;
        }
        return children.at("metric");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::get_children()
{
    if(children.find("autoroute-announce") == children.end())
    {
        if(autoroute_announce != nullptr)
        {
            children["autoroute-announce"] = autoroute_announce;
        }
    }

    if(children.find("destination-xr") == children.end())
    {
        if(destination_xr != nullptr)
        {
            children["destination-xr"] = destination_xr;
        }
    }

    if(children.find("metric") == children.end())
    {
        if(metric != nullptr)
        {
            children["metric"] = metric;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination")
    {
        destination = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Metric::Metric()
    :
    absolute_metric{YType::uint32, "absolute-metric"},
    constant_metric{YType::uint32, "constant-metric"},
    metric_type{YType::enumeration, "metric-type"},
    relative_metric{YType::int32, "relative-metric"}
{
    yang_name = "metric"; yang_parent_name = "autoroute";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Metric::~Metric()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Metric::has_data() const
{
    return absolute_metric.is_set
	|| constant_metric.is_set
	|| metric_type.is_set
	|| relative_metric.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Metric::has_operation() const
{
    return is_set(operation)
	|| is_set(absolute_metric.operation)
	|| is_set(constant_metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(relative_metric.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Metric' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (absolute_metric.is_set || is_set(absolute_metric.operation)) leaf_name_data.push_back(absolute_metric.get_name_leafdata());
    if (constant_metric.is_set || is_set(constant_metric.operation)) leaf_name_data.push_back(constant_metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (relative_metric.is_set || is_set(relative_metric.operation)) leaf_name_data.push_back(relative_metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Metric::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Metric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "absolute-metric")
    {
        absolute_metric = value;
    }
    if(value_path == "constant-metric")
    {
        constant_metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "relative-metric")
    {
        relative_metric = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::AutorouteAnnounce()
    :
    enable{YType::empty, "enable"},
    include_ipv6{YType::empty, "include-ipv6"}
    	,
    exclude_traffic(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic>())
	,metric(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric>())
{
    exclude_traffic->parent = this;
    children["exclude-traffic"] = exclude_traffic;

    metric->parent = this;
    children["metric"] = metric;

    yang_name = "autoroute-announce"; yang_parent_name = "autoroute";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::~AutorouteAnnounce()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::has_data() const
{
    return enable.is_set
	|| include_ipv6.is_set
	|| (exclude_traffic !=  nullptr && exclude_traffic->has_data())
	|| (metric !=  nullptr && metric->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(include_ipv6.operation)
	|| (exclude_traffic !=  nullptr && exclude_traffic->has_operation())
	|| (metric !=  nullptr && metric->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoroute-announce";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AutorouteAnnounce' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (include_ipv6.is_set || is_set(include_ipv6.operation)) leaf_name_data.push_back(include_ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "exclude-traffic")
    {
        if(exclude_traffic != nullptr)
        {
            children["exclude-traffic"] = exclude_traffic;
        }
        else
        {
            exclude_traffic = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic>();
            exclude_traffic->parent = this;
            children["exclude-traffic"] = exclude_traffic;
        }
        return children.at("exclude-traffic");
    }

    if(child_yang_name == "metric")
    {
        if(metric != nullptr)
        {
            children["metric"] = metric;
        }
        else
        {
            metric = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric>();
            metric->parent = this;
            children["metric"] = metric;
        }
        return children.at("metric");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::get_children()
{
    if(children.find("exclude-traffic") == children.end())
    {
        if(exclude_traffic != nullptr)
        {
            children["exclude-traffic"] = exclude_traffic;
        }
    }

    if(children.find("metric") == children.end())
    {
        if(metric != nullptr)
        {
            children["metric"] = metric;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "include-ipv6")
    {
        include_ipv6 = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::ExcludeTraffic()
    :
    segment_routing{YType::empty, "segment-routing"}
{
    yang_name = "exclude-traffic"; yang_parent_name = "autoroute-announce";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::~ExcludeTraffic()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::has_data() const
{
    return segment_routing.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::has_operation() const
{
    return is_set(operation)
	|| is_set(segment_routing.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-traffic";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExcludeTraffic' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (segment_routing.is_set || is_set(segment_routing.operation)) leaf_name_data.push_back(segment_routing.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "segment-routing")
    {
        segment_routing = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric::Metric()
    :
    absolute_metric{YType::uint32, "absolute-metric"},
    constant_metric{YType::uint32, "constant-metric"},
    metric_type{YType::enumeration, "metric-type"},
    relative_metric{YType::int32, "relative-metric"}
{
    yang_name = "metric"; yang_parent_name = "autoroute-announce";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric::~Metric()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric::has_data() const
{
    return absolute_metric.is_set
	|| constant_metric.is_set
	|| metric_type.is_set
	|| relative_metric.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric::has_operation() const
{
    return is_set(operation)
	|| is_set(absolute_metric.operation)
	|| is_set(constant_metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(relative_metric.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Metric' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (absolute_metric.is_set || is_set(absolute_metric.operation)) leaf_name_data.push_back(absolute_metric.get_name_leafdata());
    if (constant_metric.is_set || is_set(constant_metric.operation)) leaf_name_data.push_back(constant_metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (relative_metric.is_set || is_set(relative_metric.operation)) leaf_name_data.push_back(relative_metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "absolute-metric")
    {
        absolute_metric = value;
    }
    if(value_path == "constant-metric")
    {
        constant_metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "relative-metric")
    {
        relative_metric = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::DestinationXr::DestinationXr()
{
    yang_name = "destination-xr"; yang_parent_name = "autoroute";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::DestinationXr::~DestinationXr()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::DestinationXr::has_data() const
{
    for (std::size_t index=0; index<destination.size(); index++)
    {
        if(destination[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::DestinationXr::has_operation() const
{
    for (std::size_t index=0; index<destination.size(); index++)
    {
        if(destination[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::DestinationXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-xr";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::DestinationXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DestinationXr' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::DestinationXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        for(auto const & c : destination)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::DestinationXr::Destination>();
        c->parent = this;
        destination.push_back(std::move(c));
        children[segment_path] = destination.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::DestinationXr::get_children()
{
    for (auto const & c : destination)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::DestinationXr::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::DestinationXr::Destination::Destination()
    :
    destination_address{YType::str, "destination-address"}
{
    yang_name = "destination"; yang_parent_name = "destination-xr";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::DestinationXr::Destination::~Destination()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::DestinationXr::Destination::has_data() const
{
    return destination_address.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::DestinationXr::Destination::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::DestinationXr::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination" <<"[destination-address='" <<destination_address <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::DestinationXr::Destination::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Destination' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::DestinationXr::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::DestinationXr::Destination::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::DestinationXr::Destination::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses::PolicyClasses()
    :
    policy_class{YType::uint32, "policy-class"}
{
    yang_name = "policy-classes"; yang_parent_name = "tunnel-te-attributes";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses::~PolicyClasses()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses::has_data() const
{
    for (auto const & leaf : policy_class.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses::has_operation() const
{
    for (auto const & leaf : policy_class.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(policy_class.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-classes";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PolicyClasses' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto policy_class_name_datas = policy_class.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), policy_class_name_datas.begin(), policy_class_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-class")
    {
        policy_class.append(value);
    }
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypes()
{
    yang_name = "new-style-affinity-affinity-types"; yang_parent_name = "tunnel-te-attributes";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::~NewStyleAffinityAffinityTypes()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::has_data() const
{
    for (std::size_t index=0; index<new_style_affinity_affinity_type.size(); index++)
    {
        if(new_style_affinity_affinity_type[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::has_operation() const
{
    for (std::size_t index=0; index<new_style_affinity_affinity_type.size(); index++)
    {
        if(new_style_affinity_affinity_type[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-types";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypes' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type")
    {
        for(auto const & c : new_style_affinity_affinity_type)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType>();
        c->parent = this;
        new_style_affinity_affinity_type.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1_affinity2.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1_affinity2_affinity3.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::get_children()
{
    for (auto const & c : new_style_affinity_affinity_type)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::NewStyleAffinityAffinityType()
    :
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type"; yang_parent_name = "new-style-affinity-affinity-types";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::~NewStyleAffinityAffinityType()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::has_data() const
{
    return affinity_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity_type.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityType' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::NewStyleAffinityAffinityTypeAffinity1()
    :
    affinity1{YType::str, "affinity1"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1"; yang_parent_name = "new-style-affinity-affinity-types";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::~NewStyleAffinityAffinityTypeAffinity1()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::has_data() const
{
    return affinity1.is_set
	|| affinity_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity_type.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::NewStyleAffinityAffinityTypeAffinity1Affinity2()
    :
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2"; yang_parent_name = "new-style-affinity-affinity-types";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::~NewStyleAffinityAffinityTypeAffinity1Affinity2()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::has_data() const
{
    return affinity1.is_set
	|| affinity2.is_set
	|| affinity_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity_type.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1Affinity2' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3()
    :
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3"; yang_parent_name = "new-style-affinity-affinity-types";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::has_data() const
{
    return affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity3.operation)
	|| is_set(affinity_type.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.operation)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4()
    :
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4"; yang_parent_name = "new-style-affinity-affinity-types";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::has_data() const
{
    return affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity3.operation)
	|| is_set(affinity4.operation)
	|| is_set(affinity_type.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.operation)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.operation)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5()
    :
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5"; yang_parent_name = "new-style-affinity-affinity-types";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::has_data() const
{
    return affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity3.operation)
	|| is_set(affinity4.operation)
	|| is_set(affinity5.operation)
	|| is_set(affinity_type.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.operation)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.operation)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.operation)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6()
    :
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6"; yang_parent_name = "new-style-affinity-affinity-types";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::has_data() const
{
    return affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity3.operation)
	|| is_set(affinity4.operation)
	|| is_set(affinity5.operation)
	|| is_set(affinity6.operation)
	|| is_set(affinity_type.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.operation)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.operation)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.operation)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.operation)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7()
    :
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7"; yang_parent_name = "new-style-affinity-affinity-types";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::has_data() const
{
    return affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity3.operation)
	|| is_set(affinity4.operation)
	|| is_set(affinity5.operation)
	|| is_set(affinity6.operation)
	|| is_set(affinity7.operation)
	|| is_set(affinity_type.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.operation)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.operation)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.operation)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.operation)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.operation)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8()
    :
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8"; yang_parent_name = "new-style-affinity-affinity-types";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::has_data() const
{
    return affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set
	|| affinity_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity3.operation)
	|| is_set(affinity4.operation)
	|| is_set(affinity5.operation)
	|| is_set(affinity6.operation)
	|| is_set(affinity7.operation)
	|| is_set(affinity8.operation)
	|| is_set(affinity_type.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity8='" <<affinity8 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.operation)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.operation)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.operation)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.operation)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.operation)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.operation)) leaf_name_data.push_back(affinity8.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9()
    :
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"},
    affinity9{YType::str, "affinity9"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9"; yang_parent_name = "new-style-affinity-affinity-types";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::has_data() const
{
    return affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set
	|| affinity9.is_set
	|| affinity_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity3.operation)
	|| is_set(affinity4.operation)
	|| is_set(affinity5.operation)
	|| is_set(affinity6.operation)
	|| is_set(affinity7.operation)
	|| is_set(affinity8.operation)
	|| is_set(affinity9.operation)
	|| is_set(affinity_type.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity8='" <<affinity8 <<"']" <<"[affinity9='" <<affinity9 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.operation)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.operation)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.operation)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.operation)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.operation)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.operation)) leaf_name_data.push_back(affinity8.get_name_leafdata());
    if (affinity9.is_set || is_set(affinity9.operation)) leaf_name_data.push_back(affinity9.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
    }
    if(value_path == "affinity9")
    {
        affinity9 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10()
    :
    affinity1{YType::str, "affinity1"},
    affinity10{YType::str, "affinity10"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"},
    affinity9{YType::str, "affinity9"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10"; yang_parent_name = "new-style-affinity-affinity-types";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::has_data() const
{
    return affinity1.is_set
	|| affinity10.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set
	|| affinity9.is_set
	|| affinity_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity10.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity3.operation)
	|| is_set(affinity4.operation)
	|| is_set(affinity5.operation)
	|| is_set(affinity6.operation)
	|| is_set(affinity7.operation)
	|| is_set(affinity8.operation)
	|| is_set(affinity9.operation)
	|| is_set(affinity_type.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity10='" <<affinity10 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity8='" <<affinity8 <<"']" <<"[affinity9='" <<affinity9 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity10.is_set || is_set(affinity10.operation)) leaf_name_data.push_back(affinity10.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.operation)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.operation)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.operation)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.operation)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.operation)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.operation)) leaf_name_data.push_back(affinity8.get_name_leafdata());
    if (affinity9.is_set || is_set(affinity9.operation)) leaf_name_data.push_back(affinity9.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity10")
    {
        affinity10 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
    }
    if(value_path == "affinity9")
    {
        affinity9 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute::FastReroute()
    :
    bandwidth_protection{YType::uint32, "bandwidth-protection"},
    node_protection{YType::uint32, "node-protection"}
{
    yang_name = "fast-reroute"; yang_parent_name = "tunnel-te-attributes";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute::~FastReroute()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute::has_data() const
{
    return bandwidth_protection.is_set
	|| node_protection.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute::has_operation() const
{
    return is_set(operation)
	|| is_set(bandwidth_protection.operation)
	|| is_set(node_protection.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FastReroute' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_protection.is_set || is_set(bandwidth_protection.operation)) leaf_name_data.push_back(bandwidth_protection.get_name_leafdata());
    if (node_protection.is_set || is_set(node_protection.operation)) leaf_name_data.push_back(node_protection.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth-protection")
    {
        bandwidth_protection = value;
    }
    if(value_path == "node-protection")
    {
        node_protection = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::TransportProfileTunnel()
    :
    source{YType::str, "source"}
    	,
    bfd(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd>())
	,destination(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination>())
	,fault(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault>())
	,protect_lsp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp>())
	,working_lsp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp>())
{
    bfd->parent = this;
    children["bfd"] = bfd;

    destination->parent = this;
    children["destination"] = destination;

    fault->parent = this;
    children["fault"] = fault;

    protect_lsp->parent = this;
    children["protect-lsp"] = protect_lsp;

    working_lsp->parent = this;
    children["working-lsp"] = working_lsp;

    yang_name = "transport-profile-tunnel"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::~TransportProfileTunnel()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::has_data() const
{
    return source.is_set
	|| (bfd !=  nullptr && bfd->has_data())
	|| (destination !=  nullptr && destination->has_data())
	|| (fault !=  nullptr && fault->has_data())
	|| (protect_lsp !=  nullptr && protect_lsp->has_data())
	|| (working_lsp !=  nullptr && working_lsp->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::has_operation() const
{
    return is_set(operation)
	|| is_set(source.operation)
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (destination !=  nullptr && destination->has_operation())
	|| (fault !=  nullptr && fault->has_operation())
	|| (protect_lsp !=  nullptr && protect_lsp->has_operation())
	|| (working_lsp !=  nullptr && working_lsp->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:transport-profile-tunnel";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TransportProfileTunnel' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bfd")
    {
        if(bfd != nullptr)
        {
            children["bfd"] = bfd;
        }
        else
        {
            bfd = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd>();
            bfd->parent = this;
            children["bfd"] = bfd;
        }
        return children.at("bfd");
    }

    if(child_yang_name == "destination")
    {
        if(destination != nullptr)
        {
            children["destination"] = destination;
        }
        else
        {
            destination = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination>();
            destination->parent = this;
            children["destination"] = destination;
        }
        return children.at("destination");
    }

    if(child_yang_name == "fault")
    {
        if(fault != nullptr)
        {
            children["fault"] = fault;
        }
        else
        {
            fault = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault>();
            fault->parent = this;
            children["fault"] = fault;
        }
        return children.at("fault");
    }

    if(child_yang_name == "protect-lsp")
    {
        if(protect_lsp != nullptr)
        {
            children["protect-lsp"] = protect_lsp;
        }
        else
        {
            protect_lsp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp>();
            protect_lsp->parent = this;
            children["protect-lsp"] = protect_lsp;
        }
        return children.at("protect-lsp");
    }

    if(child_yang_name == "working-lsp")
    {
        if(working_lsp != nullptr)
        {
            children["working-lsp"] = working_lsp;
        }
        else
        {
            working_lsp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp>();
            working_lsp->parent = this;
            children["working-lsp"] = working_lsp;
        }
        return children.at("working-lsp");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::get_children()
{
    if(children.find("bfd") == children.end())
    {
        if(bfd != nullptr)
        {
            children["bfd"] = bfd;
        }
    }

    if(children.find("destination") == children.end())
    {
        if(destination != nullptr)
        {
            children["destination"] = destination;
        }
    }

    if(children.find("fault") == children.end())
    {
        if(fault != nullptr)
        {
            children["fault"] = fault;
        }
    }

    if(children.find("protect-lsp") == children.end())
    {
        if(protect_lsp != nullptr)
        {
            children["protect-lsp"] = protect_lsp;
        }
    }

    if(children.find("working-lsp") == children.end())
    {
        if(working_lsp != nullptr)
        {
            children["working-lsp"] = working_lsp;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "source")
    {
        source = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::Bfd()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    enable{YType::empty, "enable"},
    multiplier_standby{YType::uint32, "multiplier-standby"}
    	,
    min_interval(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval>())
	,min_interval_standby(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby>())
{
    min_interval->parent = this;
    children["min-interval"] = min_interval;

    min_interval_standby->parent = this;
    children["min-interval-standby"] = min_interval_standby;

    yang_name = "bfd"; yang_parent_name = "transport-profile-tunnel";
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::~Bfd()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::has_data() const
{
    return detection_multiplier.is_set
	|| enable.is_set
	|| multiplier_standby.is_set
	|| (min_interval !=  nullptr && min_interval->has_data())
	|| (min_interval_standby !=  nullptr && min_interval_standby->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::has_operation() const
{
    return is_set(operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(enable.operation)
	|| is_set(multiplier_standby.operation)
	|| (min_interval !=  nullptr && min_interval->has_operation())
	|| (min_interval_standby !=  nullptr && min_interval_standby->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bfd' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (multiplier_standby.is_set || is_set(multiplier_standby.operation)) leaf_name_data.push_back(multiplier_standby.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "min-interval")
    {
        if(min_interval != nullptr)
        {
            children["min-interval"] = min_interval;
        }
        else
        {
            min_interval = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval>();
            min_interval->parent = this;
            children["min-interval"] = min_interval;
        }
        return children.at("min-interval");
    }

    if(child_yang_name == "min-interval-standby")
    {
        if(min_interval_standby != nullptr)
        {
            children["min-interval-standby"] = min_interval_standby;
        }
        else
        {
            min_interval_standby = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby>();
            min_interval_standby->parent = this;
            children["min-interval-standby"] = min_interval_standby;
        }
        return children.at("min-interval-standby");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::get_children()
{
    if(children.find("min-interval") == children.end())
    {
        if(min_interval != nullptr)
        {
            children["min-interval"] = min_interval;
        }
    }

    if(children.find("min-interval-standby") == children.end())
    {
        if(min_interval_standby != nullptr)
        {
            children["min-interval-standby"] = min_interval_standby;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "multiplier-standby")
    {
        multiplier_standby = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval::MinInterval()
    :
    interval_ms{YType::uint32, "interval-ms"},
    interval_us{YType::uint32, "interval-us"}
{
    yang_name = "min-interval"; yang_parent_name = "bfd";
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval::~MinInterval()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval::has_data() const
{
    return interval_ms.is_set
	|| interval_us.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval::has_operation() const
{
    return is_set(operation)
	|| is_set(interval_ms.operation)
	|| is_set(interval_us.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min-interval";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MinInterval' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval_ms.is_set || is_set(interval_ms.operation)) leaf_name_data.push_back(interval_ms.get_name_leafdata());
    if (interval_us.is_set || is_set(interval_us.operation)) leaf_name_data.push_back(interval_us.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interval-ms")
    {
        interval_ms = value;
    }
    if(value_path == "interval-us")
    {
        interval_us = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby::MinIntervalStandby()
    :
    interval_standby_ms{YType::uint32, "interval-standby-ms"},
    interval_standby_us{YType::uint32, "interval-standby-us"}
{
    yang_name = "min-interval-standby"; yang_parent_name = "bfd";
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby::~MinIntervalStandby()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby::has_data() const
{
    return interval_standby_ms.is_set
	|| interval_standby_us.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby::has_operation() const
{
    return is_set(operation)
	|| is_set(interval_standby_ms.operation)
	|| is_set(interval_standby_us.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min-interval-standby";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MinIntervalStandby' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval_standby_ms.is_set || is_set(interval_standby_ms.operation)) leaf_name_data.push_back(interval_standby_ms.get_name_leafdata());
    if (interval_standby_us.is_set || is_set(interval_standby_us.operation)) leaf_name_data.push_back(interval_standby_us.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interval-standby-ms")
    {
        interval_standby_ms = value;
    }
    if(value_path == "interval-standby-us")
    {
        interval_standby_us = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::WorkingLsp()
    :
    in_label{YType::uint32, "in-label"},
    lockout{YType::empty, "lockout"},
    lsp_id{YType::uint32, "lsp-id"}
    	,
    out_label(nullptr) // presence node
{
    yang_name = "working-lsp"; yang_parent_name = "transport-profile-tunnel";
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::~WorkingLsp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::has_data() const
{
    return in_label.is_set
	|| lockout.is_set
	|| lsp_id.is_set
	|| (out_label !=  nullptr && out_label->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::has_operation() const
{
    return is_set(operation)
	|| is_set(in_label.operation)
	|| is_set(lockout.operation)
	|| is_set(lsp_id.operation)
	|| (out_label !=  nullptr && out_label->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "working-lsp";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'WorkingLsp' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_label.is_set || is_set(in_label.operation)) leaf_name_data.push_back(in_label.get_name_leafdata());
    if (lockout.is_set || is_set(lockout.operation)) leaf_name_data.push_back(lockout.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.operation)) leaf_name_data.push_back(lsp_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "out-label")
    {
        if(out_label != nullptr)
        {
            children["out-label"] = out_label;
        }
        else
        {
            out_label = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::OutLabel>();
            out_label->parent = this;
            children["out-label"] = out_label;
        }
        return children.at("out-label");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::get_children()
{
    if(children.find("out-label") == children.end())
    {
        if(out_label != nullptr)
        {
            children["out-label"] = out_label;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in-label")
    {
        in_label = value;
    }
    if(value_path == "lockout")
    {
        lockout = value;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::OutLabel::OutLabel()
    :
    label{YType::uint32, "label"},
    link{YType::uint32, "link"}
{
    yang_name = "out-label"; yang_parent_name = "working-lsp";
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::OutLabel::~OutLabel()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::OutLabel::has_data() const
{
    return label.is_set
	|| link.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::OutLabel::has_operation() const
{
    return is_set(operation)
	|| is_set(label.operation)
	|| is_set(link.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::OutLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-label";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::OutLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutLabel' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());
    if (link.is_set || is_set(link.operation)) leaf_name_data.push_back(link.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::OutLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::OutLabel::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::OutLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label")
    {
        label = value;
    }
    if(value_path == "link")
    {
        link = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination::Destination()
    :
    global_id{YType::uint32, "global-id"},
    node_id{YType::str, "node-id"},
    tunnel_id{YType::uint32, "tunnel-id"}
{
    yang_name = "destination"; yang_parent_name = "transport-profile-tunnel";
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination::~Destination()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination::has_data() const
{
    return global_id.is_set
	|| node_id.is_set
	|| tunnel_id.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination::has_operation() const
{
    return is_set(operation)
	|| is_set(global_id.operation)
	|| is_set(node_id.operation)
	|| is_set(tunnel_id.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Destination' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_id.is_set || is_set(global_id.operation)) leaf_name_data.push_back(global_id.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "global-id")
    {
        global_id = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::Fault()
    :
    enable{YType::empty, "enable"}
    	,
    protection_trigger(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger>())
{
    protection_trigger->parent = this;
    children["protection-trigger"] = protection_trigger;

    yang_name = "fault"; yang_parent_name = "transport-profile-tunnel";
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::~Fault()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::has_data() const
{
    return enable.is_set
	|| (protection_trigger !=  nullptr && protection_trigger->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| (protection_trigger !=  nullptr && protection_trigger->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fault";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Fault' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "protection-trigger")
    {
        if(protection_trigger != nullptr)
        {
            children["protection-trigger"] = protection_trigger;
        }
        else
        {
            protection_trigger = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger>();
            protection_trigger->parent = this;
            children["protection-trigger"] = protection_trigger;
        }
        return children.at("protection-trigger");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::get_children()
{
    if(children.find("protection-trigger") == children.end())
    {
        if(protection_trigger != nullptr)
        {
            children["protection-trigger"] = protection_trigger;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger::ProtectionTrigger()
    :
    ais{YType::boolean, "ais"},
    ldi{YType::boolean, "ldi"},
    lkr{YType::boolean, "lkr"}
{
    yang_name = "protection-trigger"; yang_parent_name = "fault";
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger::~ProtectionTrigger()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger::has_data() const
{
    return ais.is_set
	|| ldi.is_set
	|| lkr.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger::has_operation() const
{
    return is_set(operation)
	|| is_set(ais.operation)
	|| is_set(ldi.operation)
	|| is_set(lkr.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection-trigger";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtectionTrigger' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ais.is_set || is_set(ais.operation)) leaf_name_data.push_back(ais.get_name_leafdata());
    if (ldi.is_set || is_set(ldi.operation)) leaf_name_data.push_back(ldi.get_name_leafdata());
    if (lkr.is_set || is_set(lkr.operation)) leaf_name_data.push_back(lkr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ais")
    {
        ais = value;
    }
    if(value_path == "ldi")
    {
        ldi = value;
    }
    if(value_path == "lkr")
    {
        lkr = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::ProtectLsp()
    :
    in_label{YType::uint32, "in-label"},
    lockout{YType::empty, "lockout"},
    lsp_id{YType::uint32, "lsp-id"}
    	,
    out_label(nullptr) // presence node
{
    yang_name = "protect-lsp"; yang_parent_name = "transport-profile-tunnel";
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::~ProtectLsp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::has_data() const
{
    return in_label.is_set
	|| lockout.is_set
	|| lsp_id.is_set
	|| (out_label !=  nullptr && out_label->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::has_operation() const
{
    return is_set(operation)
	|| is_set(in_label.operation)
	|| is_set(lockout.operation)
	|| is_set(lsp_id.operation)
	|| (out_label !=  nullptr && out_label->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protect-lsp";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtectLsp' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_label.is_set || is_set(in_label.operation)) leaf_name_data.push_back(in_label.get_name_leafdata());
    if (lockout.is_set || is_set(lockout.operation)) leaf_name_data.push_back(lockout.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.operation)) leaf_name_data.push_back(lsp_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "out-label")
    {
        if(out_label != nullptr)
        {
            children["out-label"] = out_label;
        }
        else
        {
            out_label = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::OutLabel>();
            out_label->parent = this;
            children["out-label"] = out_label;
        }
        return children.at("out-label");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::get_children()
{
    if(children.find("out-label") == children.end())
    {
        if(out_label != nullptr)
        {
            children["out-label"] = out_label;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in-label")
    {
        in_label = value;
    }
    if(value_path == "lockout")
    {
        lockout = value;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::OutLabel::OutLabel()
    :
    label{YType::uint32, "label"},
    link{YType::uint32, "link"}
{
    yang_name = "out-label"; yang_parent_name = "protect-lsp";
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::OutLabel::~OutLabel()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::OutLabel::has_data() const
{
    return label.is_set
	|| link.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::OutLabel::has_operation() const
{
    return is_set(operation)
	|| is_set(label.operation)
	|| is_set(link.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::OutLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-label";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::OutLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutLabel' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());
    if (link.is_set || is_set(link.operation)) leaf_name_data.push_back(link.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::OutLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::OutLabel::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::OutLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label")
    {
        label = value;
    }
    if(value_path == "link")
    {
        link = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::MteTunnelAttributes()
    :
    fast_reroute{YType::empty, "fast-reroute"},
    impose_explicit_null{YType::empty, "impose-explicit-null"},
    path_selection_metric{YType::enumeration, "path-selection-metric"},
    record_route{YType::empty, "record-route"},
    signalled_name{YType::str, "signalled-name"},
    signalled_payload{YType::str, "signalled-payload"}
    	,
    affinity_mask(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::AffinityMask>())
	,bandwidth(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Bandwidth>())
	,destination_leafs(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs>())
	,logging(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Logging>())
	,new_style_affinities(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities>())
	,priority(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Priority>())
{
    affinity_mask->parent = this;
    children["affinity-mask"] = affinity_mask;

    bandwidth->parent = this;
    children["bandwidth"] = bandwidth;

    destination_leafs->parent = this;
    children["destination-leafs"] = destination_leafs;

    logging->parent = this;
    children["logging"] = logging;

    new_style_affinities->parent = this;
    children["new-style-affinities"] = new_style_affinities;

    priority->parent = this;
    children["priority"] = priority;

    yang_name = "mte-tunnel-attributes"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::~MteTunnelAttributes()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::has_data() const
{
    return fast_reroute.is_set
	|| impose_explicit_null.is_set
	|| path_selection_metric.is_set
	|| record_route.is_set
	|| signalled_name.is_set
	|| signalled_payload.is_set
	|| (affinity_mask !=  nullptr && affinity_mask->has_data())
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (destination_leafs !=  nullptr && destination_leafs->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (new_style_affinities !=  nullptr && new_style_affinities->has_data())
	|| (priority !=  nullptr && priority->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::has_operation() const
{
    return is_set(operation)
	|| is_set(fast_reroute.operation)
	|| is_set(impose_explicit_null.operation)
	|| is_set(path_selection_metric.operation)
	|| is_set(record_route.operation)
	|| is_set(signalled_name.operation)
	|| is_set(signalled_payload.operation)
	|| (affinity_mask !=  nullptr && affinity_mask->has_operation())
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (destination_leafs !=  nullptr && destination_leafs->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (new_style_affinities !=  nullptr && new_style_affinities->has_operation())
	|| (priority !=  nullptr && priority->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mte-tunnel-attributes";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MteTunnelAttributes' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute.is_set || is_set(fast_reroute.operation)) leaf_name_data.push_back(fast_reroute.get_name_leafdata());
    if (impose_explicit_null.is_set || is_set(impose_explicit_null.operation)) leaf_name_data.push_back(impose_explicit_null.get_name_leafdata());
    if (path_selection_metric.is_set || is_set(path_selection_metric.operation)) leaf_name_data.push_back(path_selection_metric.get_name_leafdata());
    if (record_route.is_set || is_set(record_route.operation)) leaf_name_data.push_back(record_route.get_name_leafdata());
    if (signalled_name.is_set || is_set(signalled_name.operation)) leaf_name_data.push_back(signalled_name.get_name_leafdata());
    if (signalled_payload.is_set || is_set(signalled_payload.operation)) leaf_name_data.push_back(signalled_payload.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "affinity-mask")
    {
        if(affinity_mask != nullptr)
        {
            children["affinity-mask"] = affinity_mask;
        }
        else
        {
            affinity_mask = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::AffinityMask>();
            affinity_mask->parent = this;
            children["affinity-mask"] = affinity_mask;
        }
        return children.at("affinity-mask");
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth != nullptr)
        {
            children["bandwidth"] = bandwidth;
        }
        else
        {
            bandwidth = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Bandwidth>();
            bandwidth->parent = this;
            children["bandwidth"] = bandwidth;
        }
        return children.at("bandwidth");
    }

    if(child_yang_name == "destination-leafs")
    {
        if(destination_leafs != nullptr)
        {
            children["destination-leafs"] = destination_leafs;
        }
        else
        {
            destination_leafs = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs>();
            destination_leafs->parent = this;
            children["destination-leafs"] = destination_leafs;
        }
        return children.at("destination-leafs");
    }

    if(child_yang_name == "logging")
    {
        if(logging != nullptr)
        {
            children["logging"] = logging;
        }
        else
        {
            logging = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Logging>();
            logging->parent = this;
            children["logging"] = logging;
        }
        return children.at("logging");
    }

    if(child_yang_name == "new-style-affinities")
    {
        if(new_style_affinities != nullptr)
        {
            children["new-style-affinities"] = new_style_affinities;
        }
        else
        {
            new_style_affinities = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities>();
            new_style_affinities->parent = this;
            children["new-style-affinities"] = new_style_affinities;
        }
        return children.at("new-style-affinities");
    }

    if(child_yang_name == "priority")
    {
        if(priority != nullptr)
        {
            children["priority"] = priority;
        }
        else
        {
            priority = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Priority>();
            priority->parent = this;
            children["priority"] = priority;
        }
        return children.at("priority");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::get_children()
{
    if(children.find("affinity-mask") == children.end())
    {
        if(affinity_mask != nullptr)
        {
            children["affinity-mask"] = affinity_mask;
        }
    }

    if(children.find("bandwidth") == children.end())
    {
        if(bandwidth != nullptr)
        {
            children["bandwidth"] = bandwidth;
        }
    }

    if(children.find("destination-leafs") == children.end())
    {
        if(destination_leafs != nullptr)
        {
            children["destination-leafs"] = destination_leafs;
        }
    }

    if(children.find("logging") == children.end())
    {
        if(logging != nullptr)
        {
            children["logging"] = logging;
        }
    }

    if(children.find("new-style-affinities") == children.end())
    {
        if(new_style_affinities != nullptr)
        {
            children["new-style-affinities"] = new_style_affinities;
        }
    }

    if(children.find("priority") == children.end())
    {
        if(priority != nullptr)
        {
            children["priority"] = priority;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fast-reroute")
    {
        fast_reroute = value;
    }
    if(value_path == "impose-explicit-null")
    {
        impose_explicit_null = value;
    }
    if(value_path == "path-selection-metric")
    {
        path_selection_metric = value;
    }
    if(value_path == "record-route")
    {
        record_route = value;
    }
    if(value_path == "signalled-name")
    {
        signalled_name = value;
    }
    if(value_path == "signalled-payload")
    {
        signalled_payload = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeafs()
{
    yang_name = "destination-leafs"; yang_parent_name = "mte-tunnel-attributes";
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::~DestinationLeafs()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::has_data() const
{
    for (std::size_t index=0; index<destination_leaf.size(); index++)
    {
        if(destination_leaf[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::has_operation() const
{
    for (std::size_t index=0; index<destination_leaf.size(); index++)
    {
        if(destination_leaf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-leafs";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DestinationLeafs' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "destination-leaf")
    {
        for(auto const & c : destination_leaf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf>();
        c->parent = this;
        destination_leaf.push_back(std::move(c));
        children[segment_path] = destination_leaf.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::get_children()
{
    for (auto const & c : destination_leaf)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::DestinationLeaf()
    :
    address{YType::str, "address"},
    destination{YType::empty, "destination"},
    destination_disable{YType::empty, "destination-disable"}
    	,
    path_options(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions>())
	,s2l_logging(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::S2LLogging>())
{
    path_options->parent = this;
    children["path-options"] = path_options;

    s2l_logging->parent = this;
    children["s2l-logging"] = s2l_logging;

    yang_name = "destination-leaf"; yang_parent_name = "destination-leafs";
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::~DestinationLeaf()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::has_data() const
{
    return address.is_set
	|| destination.is_set
	|| destination_disable.is_set
	|| (path_options !=  nullptr && path_options->has_data())
	|| (s2l_logging !=  nullptr && s2l_logging->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(destination.operation)
	|| is_set(destination_disable.operation)
	|| (path_options !=  nullptr && path_options->has_operation())
	|| (s2l_logging !=  nullptr && s2l_logging->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-leaf" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DestinationLeaf' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (destination.is_set || is_set(destination.operation)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (destination_disable.is_set || is_set(destination_disable.operation)) leaf_name_data.push_back(destination_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "path-options")
    {
        if(path_options != nullptr)
        {
            children["path-options"] = path_options;
        }
        else
        {
            path_options = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions>();
            path_options->parent = this;
            children["path-options"] = path_options;
        }
        return children.at("path-options");
    }

    if(child_yang_name == "s2l-logging")
    {
        if(s2l_logging != nullptr)
        {
            children["s2l-logging"] = s2l_logging;
        }
        else
        {
            s2l_logging = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::S2LLogging>();
            s2l_logging->parent = this;
            children["s2l-logging"] = s2l_logging;
        }
        return children.at("s2l-logging");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::get_children()
{
    if(children.find("path-options") == children.end())
    {
        if(path_options != nullptr)
        {
            children["path-options"] = path_options;
        }
    }

    if(children.find("s2l-logging") == children.end())
    {
        if(s2l_logging != nullptr)
        {
            children["s2l-logging"] = s2l_logging;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "destination")
    {
        destination = value;
    }
    if(value_path == "destination-disable")
    {
        destination_disable = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::S2LLogging::S2LLogging()
    :
    s2l_insufficient_bw_messsage{YType::empty, "s2l-insufficient-bw-messsage"},
    s2l_pcalc_failure_message{YType::empty, "s2l-pcalc-failure-message"},
    s2l_reroute_messsage{YType::empty, "s2l-reroute-messsage"},
    s2l_state_message{YType::empty, "s2l-state-message"}
{
    yang_name = "s2l-logging"; yang_parent_name = "destination-leaf";
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::S2LLogging::~S2LLogging()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::S2LLogging::has_data() const
{
    return s2l_insufficient_bw_messsage.is_set
	|| s2l_pcalc_failure_message.is_set
	|| s2l_reroute_messsage.is_set
	|| s2l_state_message.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::S2LLogging::has_operation() const
{
    return is_set(operation)
	|| is_set(s2l_insufficient_bw_messsage.operation)
	|| is_set(s2l_pcalc_failure_message.operation)
	|| is_set(s2l_reroute_messsage.operation)
	|| is_set(s2l_state_message.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::S2LLogging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-logging";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::S2LLogging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'S2LLogging' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_insufficient_bw_messsage.is_set || is_set(s2l_insufficient_bw_messsage.operation)) leaf_name_data.push_back(s2l_insufficient_bw_messsage.get_name_leafdata());
    if (s2l_pcalc_failure_message.is_set || is_set(s2l_pcalc_failure_message.operation)) leaf_name_data.push_back(s2l_pcalc_failure_message.get_name_leafdata());
    if (s2l_reroute_messsage.is_set || is_set(s2l_reroute_messsage.operation)) leaf_name_data.push_back(s2l_reroute_messsage.get_name_leafdata());
    if (s2l_state_message.is_set || is_set(s2l_state_message.operation)) leaf_name_data.push_back(s2l_state_message.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::S2LLogging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::S2LLogging::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::S2LLogging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "s2l-insufficient-bw-messsage")
    {
        s2l_insufficient_bw_messsage = value;
    }
    if(value_path == "s2l-pcalc-failure-message")
    {
        s2l_pcalc_failure_message = value;
    }
    if(value_path == "s2l-reroute-messsage")
    {
        s2l_reroute_messsage = value;
    }
    if(value_path == "s2l-state-message")
    {
        s2l_state_message = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::PathOptions()
{
    yang_name = "path-options"; yang_parent_name = "destination-leaf";
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::~PathOptions()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::has_data() const
{
    for (std::size_t index=0; index<path_option.size(); index++)
    {
        if(path_option[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::has_operation() const
{
    for (std::size_t index=0; index<path_option.size(); index++)
    {
        if(path_option[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-options";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathOptions' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "path-option")
    {
        for(auto const & c : path_option)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::PathOption>();
        c->parent = this;
        path_option.push_back(std::move(c));
        children[segment_path] = path_option.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::get_children()
{
    for (auto const & c : path_option)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::PathOption::PathOption()
    :
    preference_level{YType::uint32, "preference-level"},
    lockdown{YType::enumeration, "lockdown"},
    path_id{YType::uint32, "path-id"},
    path_name{YType::str, "path-name"},
    path_type{YType::enumeration, "path-type"},
    verbatim{YType::enumeration, "verbatim"}
{
    yang_name = "path-option"; yang_parent_name = "path-options";
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::PathOption::~PathOption()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::PathOption::has_data() const
{
    return preference_level.is_set
	|| lockdown.is_set
	|| path_id.is_set
	|| path_name.is_set
	|| path_type.is_set
	|| verbatim.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::PathOption::has_operation() const
{
    return is_set(operation)
	|| is_set(preference_level.operation)
	|| is_set(lockdown.operation)
	|| is_set(path_id.operation)
	|| is_set(path_name.operation)
	|| is_set(path_type.operation)
	|| is_set(verbatim.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::PathOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-option" <<"[preference-level='" <<preference_level <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::PathOption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathOption' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (preference_level.is_set || is_set(preference_level.operation)) leaf_name_data.push_back(preference_level.get_name_leafdata());
    if (lockdown.is_set || is_set(lockdown.operation)) leaf_name_data.push_back(lockdown.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.operation)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (path_name.is_set || is_set(path_name.operation)) leaf_name_data.push_back(path_name.get_name_leafdata());
    if (path_type.is_set || is_set(path_type.operation)) leaf_name_data.push_back(path_type.get_name_leafdata());
    if (verbatim.is_set || is_set(verbatim.operation)) leaf_name_data.push_back(verbatim.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::PathOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::PathOption::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::PathOption::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "preference-level")
    {
        preference_level = value;
    }
    if(value_path == "lockdown")
    {
        lockdown = value;
    }
    if(value_path == "path-id")
    {
        path_id = value;
    }
    if(value_path == "path-name")
    {
        path_name = value;
    }
    if(value_path == "path-type")
    {
        path_type = value;
    }
    if(value_path == "verbatim")
    {
        verbatim = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Priority::Priority()
    :
    hold_priority{YType::uint32, "hold-priority"},
    setup_priority{YType::uint32, "setup-priority"}
{
    yang_name = "priority"; yang_parent_name = "mte-tunnel-attributes";
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Priority::~Priority()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Priority::has_data() const
{
    return hold_priority.is_set
	|| setup_priority.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Priority::has_operation() const
{
    return is_set(operation)
	|| is_set(hold_priority.operation)
	|| is_set(setup_priority.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Priority' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_priority.is_set || is_set(hold_priority.operation)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.operation)) leaf_name_data.push_back(setup_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Priority::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Priority::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hold-priority")
    {
        hold_priority = value;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::NewStyleAffinities()
{
    yang_name = "new-style-affinities"; yang_parent_name = "mte-tunnel-attributes";
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::~NewStyleAffinities()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::has_data() const
{
    for (std::size_t index=0; index<new_style_affinity.size(); index++)
    {
        if(new_style_affinity[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::has_operation() const
{
    for (std::size_t index=0; index<new_style_affinity.size(); index++)
    {
        if(new_style_affinity[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinities";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinities' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity")
    {
        for(auto const & c : new_style_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::NewStyleAffinity>();
        c->parent = this;
        new_style_affinity.push_back(std::move(c));
        children[segment_path] = new_style_affinity.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::get_children()
{
    for (auto const & c : new_style_affinity)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::NewStyleAffinity::NewStyleAffinity()
    :
    affinity1{YType::str, "affinity1"},
    affinity10{YType::str, "affinity10"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"},
    affinity9{YType::str, "affinity9"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity"; yang_parent_name = "new-style-affinities";
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::NewStyleAffinity::~NewStyleAffinity()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::NewStyleAffinity::has_data() const
{
    return affinity1.is_set
	|| affinity10.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set
	|| affinity9.is_set
	|| affinity_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::NewStyleAffinity::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity10.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity3.operation)
	|| is_set(affinity4.operation)
	|| is_set(affinity5.operation)
	|| is_set(affinity6.operation)
	|| is_set(affinity7.operation)
	|| is_set(affinity8.operation)
	|| is_set(affinity9.operation)
	|| is_set(affinity_type.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::NewStyleAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity10='" <<affinity10 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity8='" <<affinity8 <<"']" <<"[affinity9='" <<affinity9 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::NewStyleAffinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinity' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity10.is_set || is_set(affinity10.operation)) leaf_name_data.push_back(affinity10.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.operation)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.operation)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.operation)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.operation)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.operation)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.operation)) leaf_name_data.push_back(affinity8.get_name_leafdata());
    if (affinity9.is_set || is_set(affinity9.operation)) leaf_name_data.push_back(affinity9.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::NewStyleAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::NewStyleAffinity::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::NewStyleAffinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity10")
    {
        affinity10 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
    }
    if(value_path == "affinity9")
    {
        affinity9 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Bandwidth::Bandwidth()
    :
    bandwidth{YType::uint32, "bandwidth"},
    class_or_pool_type{YType::uint32, "class-or-pool-type"},
    dste_type{YType::enumeration, "dste-type"}
{
    yang_name = "bandwidth"; yang_parent_name = "mte-tunnel-attributes";
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Bandwidth::~Bandwidth()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Bandwidth::has_data() const
{
    return bandwidth.is_set
	|| class_or_pool_type.is_set
	|| dste_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Bandwidth::has_operation() const
{
    return is_set(operation)
	|| is_set(bandwidth.operation)
	|| is_set(class_or_pool_type.operation)
	|| is_set(dste_type.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Bandwidth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bandwidth' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.operation)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (class_or_pool_type.is_set || is_set(class_or_pool_type.operation)) leaf_name_data.push_back(class_or_pool_type.get_name_leafdata());
    if (dste_type.is_set || is_set(dste_type.operation)) leaf_name_data.push_back(dste_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Bandwidth::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Bandwidth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
    }
    if(value_path == "class-or-pool-type")
    {
        class_or_pool_type = value;
    }
    if(value_path == "dste-type")
    {
        dste_type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::AffinityMask::AffinityMask()
    :
    affinity{YType::str, "affinity"},
    mask{YType::str, "mask"}
{
    yang_name = "affinity-mask"; yang_parent_name = "mte-tunnel-attributes";
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::AffinityMask::~AffinityMask()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::AffinityMask::has_data() const
{
    return affinity.is_set
	|| mask.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::AffinityMask::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity.operation)
	|| is_set(mask.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::AffinityMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-mask";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::AffinityMask::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AffinityMask' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity.is_set || is_set(affinity.operation)) leaf_name_data.push_back(affinity.get_name_leafdata());
    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::AffinityMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::AffinityMask::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::AffinityMask::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity")
    {
        affinity = value;
    }
    if(value_path == "mask")
    {
        mask = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Logging::Logging()
    :
    all{YType::empty, "all"},
    bandwidth_change_message{YType::empty, "bandwidth-change-message"},
    insufficient_bw_message{YType::empty, "insufficient-bw-message"},
    pcalc_failure_message{YType::empty, "pcalc-failure-message"},
    reoptimize_attempts_message{YType::empty, "reoptimize-attempts-message"},
    reoptimized_message{YType::empty, "reoptimized-message"},
    reroute_messsage{YType::empty, "reroute-messsage"},
    state_message{YType::empty, "state-message"},
    sub_lsp_state_message{YType::empty, "sub-lsp-state-message"}
{
    yang_name = "logging"; yang_parent_name = "mte-tunnel-attributes";
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Logging::~Logging()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Logging::has_data() const
{
    return all.is_set
	|| bandwidth_change_message.is_set
	|| insufficient_bw_message.is_set
	|| pcalc_failure_message.is_set
	|| reoptimize_attempts_message.is_set
	|| reoptimized_message.is_set
	|| reroute_messsage.is_set
	|| state_message.is_set
	|| sub_lsp_state_message.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Logging::has_operation() const
{
    return is_set(operation)
	|| is_set(all.operation)
	|| is_set(bandwidth_change_message.operation)
	|| is_set(insufficient_bw_message.operation)
	|| is_set(pcalc_failure_message.operation)
	|| is_set(reoptimize_attempts_message.operation)
	|| is_set(reoptimized_message.operation)
	|| is_set(reroute_messsage.operation)
	|| is_set(state_message.operation)
	|| is_set(sub_lsp_state_message.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Logging' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());
    if (bandwidth_change_message.is_set || is_set(bandwidth_change_message.operation)) leaf_name_data.push_back(bandwidth_change_message.get_name_leafdata());
    if (insufficient_bw_message.is_set || is_set(insufficient_bw_message.operation)) leaf_name_data.push_back(insufficient_bw_message.get_name_leafdata());
    if (pcalc_failure_message.is_set || is_set(pcalc_failure_message.operation)) leaf_name_data.push_back(pcalc_failure_message.get_name_leafdata());
    if (reoptimize_attempts_message.is_set || is_set(reoptimize_attempts_message.operation)) leaf_name_data.push_back(reoptimize_attempts_message.get_name_leafdata());
    if (reoptimized_message.is_set || is_set(reoptimized_message.operation)) leaf_name_data.push_back(reoptimized_message.get_name_leafdata());
    if (reroute_messsage.is_set || is_set(reroute_messsage.operation)) leaf_name_data.push_back(reroute_messsage.get_name_leafdata());
    if (state_message.is_set || is_set(state_message.operation)) leaf_name_data.push_back(state_message.get_name_leafdata());
    if (sub_lsp_state_message.is_set || is_set(sub_lsp_state_message.operation)) leaf_name_data.push_back(sub_lsp_state_message.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Logging::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Logging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all")
    {
        all = value;
    }
    if(value_path == "bandwidth-change-message")
    {
        bandwidth_change_message = value;
    }
    if(value_path == "insufficient-bw-message")
    {
        insufficient_bw_message = value;
    }
    if(value_path == "pcalc-failure-message")
    {
        pcalc_failure_message = value;
    }
    if(value_path == "reoptimize-attempts-message")
    {
        reoptimize_attempts_message = value;
    }
    if(value_path == "reoptimized-message")
    {
        reoptimized_message = value;
    }
    if(value_path == "reroute-messsage")
    {
        reroute_messsage = value;
    }
    if(value_path == "state-message")
    {
        state_message = value;
    }
    if(value_path == "sub-lsp-state-message")
    {
        sub_lsp_state_message = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TunnelIp::TunnelIp()
    :
    allow_key{YType::empty, "allow-key"},
    disable{YType::int32, "disable"},
    tos{YType::uint32, "tos"},
    ttl{YType::uint32, "ttl"},
    tunnel_vrf{YType::str, "tunnel-vrf"}
    	,
    destination(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Destination>())
	,keepalive(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Keepalive>())
	,key(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Key>())
	,mode(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Mode>())
	,source(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Source>())
{
    destination->parent = this;
    children["destination"] = destination;

    keepalive->parent = this;
    children["keepalive"] = keepalive;

    key->parent = this;
    children["key"] = key;

    mode->parent = this;
    children["mode"] = mode;

    source->parent = this;
    children["source"] = source;

    yang_name = "tunnel-ip"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelIp::~TunnelIp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelIp::has_data() const
{
    return allow_key.is_set
	|| disable.is_set
	|| tos.is_set
	|| ttl.is_set
	|| tunnel_vrf.is_set
	|| (destination !=  nullptr && destination->has_data())
	|| (keepalive !=  nullptr && keepalive->has_data())
	|| (key !=  nullptr && key->has_data())
	|| (mode !=  nullptr && mode->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelIp::has_operation() const
{
    return is_set(operation)
	|| is_set(allow_key.operation)
	|| is_set(disable.operation)
	|| is_set(tos.operation)
	|| is_set(ttl.operation)
	|| is_set(tunnel_vrf.operation)
	|| (destination !=  nullptr && destination->has_operation())
	|| (keepalive !=  nullptr && keepalive->has_operation())
	|| (key !=  nullptr && key->has_operation())
	|| (mode !=  nullptr && mode->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-gre-cfg:tunnel-ip";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelIp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TunnelIp' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_key.is_set || is_set(allow_key.operation)) leaf_name_data.push_back(allow_key.get_name_leafdata());
    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (tos.is_set || is_set(tos.operation)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.operation)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (tunnel_vrf.is_set || is_set(tunnel_vrf.operation)) leaf_name_data.push_back(tunnel_vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            children["destination"] = destination;
        }
        else
        {
            destination = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Destination>();
            destination->parent = this;
            children["destination"] = destination;
        }
        return children.at("destination");
    }

    if(child_yang_name == "keepalive")
    {
        if(keepalive != nullptr)
        {
            children["keepalive"] = keepalive;
        }
        else
        {
            keepalive = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Keepalive>();
            keepalive->parent = this;
            children["keepalive"] = keepalive;
        }
        return children.at("keepalive");
    }

    if(child_yang_name == "key")
    {
        if(key != nullptr)
        {
            children["key"] = key;
        }
        else
        {
            key = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Key>();
            key->parent = this;
            children["key"] = key;
        }
        return children.at("key");
    }

    if(child_yang_name == "mode")
    {
        if(mode != nullptr)
        {
            children["mode"] = mode;
        }
        else
        {
            mode = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Mode>();
            mode->parent = this;
            children["mode"] = mode;
        }
        return children.at("mode");
    }

    if(child_yang_name == "source")
    {
        if(source != nullptr)
        {
            children["source"] = source;
        }
        else
        {
            source = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Source>();
            source->parent = this;
            children["source"] = source;
        }
        return children.at("source");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TunnelIp::get_children()
{
    if(children.find("destination") == children.end())
    {
        if(destination != nullptr)
        {
            children["destination"] = destination;
        }
    }

    if(children.find("keepalive") == children.end())
    {
        if(keepalive != nullptr)
        {
            children["keepalive"] = keepalive;
        }
    }

    if(children.find("key") == children.end())
    {
        if(key != nullptr)
        {
            children["key"] = key;
        }
    }

    if(children.find("mode") == children.end())
    {
        if(mode != nullptr)
        {
            children["mode"] = mode;
        }
    }

    if(children.find("source") == children.end())
    {
        if(source != nullptr)
        {
            children["source"] = source;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelIp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "allow-key")
    {
        allow_key = value;
    }
    if(value_path == "disable")
    {
        disable = value;
    }
    if(value_path == "tos")
    {
        tos = value;
    }
    if(value_path == "ttl")
    {
        ttl = value;
    }
    if(value_path == "tunnel-vrf")
    {
        tunnel_vrf = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Mode::Mode()
    :
    decap{YType::empty, "decap"},
    value_{YType::int32, "value"}
{
    yang_name = "mode"; yang_parent_name = "tunnel-ip";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Mode::~Mode()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Mode::has_data() const
{
    return decap.is_set
	|| value_.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Mode::has_operation() const
{
    return is_set(operation)
	|| is_set(decap.operation)
	|| is_set(value_.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Mode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mode' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (decap.is_set || is_set(decap.operation)) leaf_name_data.push_back(decap.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Mode::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Mode::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "decap")
    {
        decap = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Source::Source()
    :
    address{YType::str, "address"},
    interface_name{YType::str, "interface-name"},
    ipv6_address{YType::str, "ipv6-address"},
    type{YType::int32, "type"}
{
    yang_name = "source"; yang_parent_name = "tunnel-ip";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Source::~Source()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Source::has_data() const
{
    return address.is_set
	|| interface_name.is_set
	|| ipv6_address.is_set
	|| type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Source::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(interface_name.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(type.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Source::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Source' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Source::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Source::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Key::Key()
    :
    entropy{YType::empty, "entropy"},
    value_{YType::uint32, "value"}
{
    yang_name = "key"; yang_parent_name = "tunnel-ip";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Key::~Key()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Key::has_data() const
{
    return entropy.is_set
	|| value_.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Key::has_operation() const
{
    return is_set(operation)
	|| is_set(entropy.operation)
	|| is_set(value_.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Key::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entropy.is_set || is_set(entropy.operation)) leaf_name_data.push_back(entropy.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Key::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Key::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entropy")
    {
        entropy = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Keepalive::Keepalive()
    :
    keep_alive_period{YType::uint32, "keep-alive-period"},
    keep_alive_retries{YType::uint32, "keep-alive-retries"}
{
    yang_name = "keepalive"; yang_parent_name = "tunnel-ip";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Keepalive::~Keepalive()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Keepalive::has_data() const
{
    return keep_alive_period.is_set
	|| keep_alive_retries.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Keepalive::has_operation() const
{
    return is_set(operation)
	|| is_set(keep_alive_period.operation)
	|| is_set(keep_alive_retries.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Keepalive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Keepalive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Keepalive' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keep_alive_period.is_set || is_set(keep_alive_period.operation)) leaf_name_data.push_back(keep_alive_period.get_name_leafdata());
    if (keep_alive_retries.is_set || is_set(keep_alive_retries.operation)) leaf_name_data.push_back(keep_alive_retries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Keepalive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Keepalive::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Keepalive::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "keep-alive-period")
    {
        keep_alive_period = value;
    }
    if(value_path == "keep-alive-retries")
    {
        keep_alive_retries = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Destination::Destination()
    :
    address{YType::str, "address"},
    address_mask{YType::str, "address-mask"},
    ipv6_address{YType::str, "ipv6-address"},
    prefix_list_name{YType::str, "prefix-list-name"},
    type{YType::int32, "type"}
{
    yang_name = "destination"; yang_parent_name = "tunnel-ip";
}

InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Destination::~Destination()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Destination::has_data() const
{
    return address.is_set
	|| address_mask.is_set
	|| ipv6_address.is_set
	|| prefix_list_name.is_set
	|| type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Destination::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(address_mask.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(prefix_list_name.operation)
	|| is_set(type.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Destination::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Destination' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (address_mask.is_set || is_set(address_mask.operation)) leaf_name_data.push_back(address_mask.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (prefix_list_name.is_set || is_set(prefix_list_name.operation)) leaf_name_data.push_back(prefix_list_name.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Destination::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Destination::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "address-mask")
    {
        address_mask = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "prefix-list-name")
    {
        prefix_list_name = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::SsrpSession::SsrpSession()
    :
    group_id(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId>())
{
    group_id->parent = this;
    children["group-id"] = group_id;

    yang_name = "ssrp-session"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::SsrpSession::~SsrpSession()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::SsrpSession::has_data() const
{
    return (group_id !=  nullptr && group_id->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::SsrpSession::has_operation() const
{
    return is_set(operation)
	|| (group_id !=  nullptr && group_id->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::SsrpSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ppp-ma-ssrp-cfg:ssrp-session";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::SsrpSession::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SsrpSession' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::SsrpSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group-id")
    {
        if(group_id != nullptr)
        {
            children["group-id"] = group_id;
        }
        else
        {
            group_id = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId>();
            group_id->parent = this;
            children["group-id"] = group_id;
        }
        return children.at("group-id");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::SsrpSession::get_children()
{
    if(children.find("group-id") == children.end())
    {
        if(group_id != nullptr)
        {
            children["group-id"] = group_id;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::SsrpSession::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId::GroupId()
    :
    group{YType::uint32, "group"},
    id{YType::uint32, "id"}
{
    yang_name = "group-id"; yang_parent_name = "ssrp-session";
}

InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId::~GroupId()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId::has_data() const
{
    return group.is_set
	|| id.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId::has_operation() const
{
    return is_set(operation)
	|| is_set(group.operation)
	|| is_set(id.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-id";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupId' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::NvSatelliteAccess()
    :
    qos(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos>())
{
    qos->parent = this;
    children["qos"] = qos;

    yang_name = "nv-satellite-access"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::~NvSatelliteAccess()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::has_data() const
{
    return (qos !=  nullptr && qos->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::has_operation() const
{
    return is_set(operation)
	|| (qos !=  nullptr && qos->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-icpe-infra-cfg:nv-satellite-access";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NvSatelliteAccess' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "qos")
    {
        if(qos != nullptr)
        {
            children["qos"] = qos;
        }
        else
        {
            qos = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos>();
            qos->parent = this;
            children["qos"] = qos;
        }
        return children.at("qos");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::get_children()
{
    if(children.find("qos") == children.end())
    {
        if(qos != nullptr)
        {
            children["qos"] = qos;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Qos()
    :
    input(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input>())
	,output(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output>())
{
    input->parent = this;
    children["input"] = input;

    output->parent = this;
    children["output"] = output;

    yang_name = "qos"; yang_parent_name = "nv-satellite-access";
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::~Qos()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-qos-ma-sat-cfg:qos";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Qos' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "input")
    {
        if(input != nullptr)
        {
            children["input"] = input;
        }
        else
        {
            input = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input>();
            input->parent = this;
            children["input"] = input;
        }
        return children.at("input");
    }

    if(child_yang_name == "output")
    {
        if(output != nullptr)
        {
            children["output"] = output;
        }
        else
        {
            output = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output>();
            output->parent = this;
            children["output"] = output;
        }
        return children.at("output");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::get_children()
{
    if(children.find("input") == children.end())
    {
        if(input != nullptr)
        {
            children["input"] = input;
        }
    }

    if(children.find("output") == children.end())
    {
        if(output != nullptr)
        {
            children["output"] = output;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::Output()
{
    yang_name = "output"; yang_parent_name = "qos";
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::~Output()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::has_data() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::has_operation() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Output' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "service-policy")
    {
        for(auto const & c : service_policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::ServicePolicy>();
        c->parent = this;
        service_policy.push_back(std::move(c));
        children[segment_path] = service_policy.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::get_children()
{
    for (auto const & c : service_policy)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::ServicePolicy::ServicePolicy()
    :
    service_policy_name{YType::str, "service-policy-name"}
{
    yang_name = "service-policy"; yang_parent_name = "output";
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::ServicePolicy::~ServicePolicy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::ServicePolicy::has_data() const
{
    return service_policy_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::ServicePolicy::has_operation() const
{
    return is_set(operation)
	|| is_set(service_policy_name.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy" <<"[service-policy-name='" <<service_policy_name <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::ServicePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicy' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.operation)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::ServicePolicy::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::ServicePolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::Input()
{
    yang_name = "input"; yang_parent_name = "qos";
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::~Input()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::has_data() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::has_operation() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Input' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "service-policy")
    {
        for(auto const & c : service_policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::ServicePolicy>();
        c->parent = this;
        service_policy.push_back(std::move(c));
        children[segment_path] = service_policy.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::get_children()
{
    for (auto const & c : service_policy)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::ServicePolicy::ServicePolicy()
    :
    service_policy_name{YType::str, "service-policy-name"}
{
    yang_name = "service-policy"; yang_parent_name = "input";
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::ServicePolicy::~ServicePolicy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::ServicePolicy::has_data() const
{
    return service_policy_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::ServicePolicy::has_operation() const
{
    return is_set(operation)
	|| is_set(service_policy_name.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy" <<"[service-policy-name='" <<service_policy_name <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::ServicePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicy' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.operation)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::ServicePolicy::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::ServicePolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::NvSatelliteFabricLink()
    :
    minimum_required_links{YType::uint32, "minimum-required-links"},
    satellite{YType::uint32, "satellite"}
    	,
    ethernet_features(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures>())
	,qos(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos>())
	,redundancy(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy>())
	,remote_ports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts>())
{
    ethernet_features->parent = this;
    children["ethernet-features"] = ethernet_features;

    qos->parent = this;
    children["qos"] = qos;

    redundancy->parent = this;
    children["redundancy"] = redundancy;

    remote_ports->parent = this;
    children["remote-ports"] = remote_ports;

    yang_name = "nv-satellite-fabric-link"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::~NvSatelliteFabricLink()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::has_data() const
{
    return minimum_required_links.is_set
	|| satellite.is_set
	|| (ethernet_features !=  nullptr && ethernet_features->has_data())
	|| (qos !=  nullptr && qos->has_data())
	|| (redundancy !=  nullptr && redundancy->has_data())
	|| (remote_ports !=  nullptr && remote_ports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::has_operation() const
{
    return is_set(operation)
	|| is_set(minimum_required_links.operation)
	|| is_set(satellite.operation)
	|| (ethernet_features !=  nullptr && ethernet_features->has_operation())
	|| (qos !=  nullptr && qos->has_operation())
	|| (redundancy !=  nullptr && redundancy->has_operation())
	|| (remote_ports !=  nullptr && remote_ports->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-icpe-infra-cfg:nv-satellite-fabric-link";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NvSatelliteFabricLink' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_required_links.is_set || is_set(minimum_required_links.operation)) leaf_name_data.push_back(minimum_required_links.get_name_leafdata());
    if (satellite.is_set || is_set(satellite.operation)) leaf_name_data.push_back(satellite.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ethernet-features")
    {
        if(ethernet_features != nullptr)
        {
            children["ethernet-features"] = ethernet_features;
        }
        else
        {
            ethernet_features = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures>();
            ethernet_features->parent = this;
            children["ethernet-features"] = ethernet_features;
        }
        return children.at("ethernet-features");
    }

    if(child_yang_name == "qos")
    {
        if(qos != nullptr)
        {
            children["qos"] = qos;
        }
        else
        {
            qos = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos>();
            qos->parent = this;
            children["qos"] = qos;
        }
        return children.at("qos");
    }

    if(child_yang_name == "redundancy")
    {
        if(redundancy != nullptr)
        {
            children["redundancy"] = redundancy;
        }
        else
        {
            redundancy = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy>();
            redundancy->parent = this;
            children["redundancy"] = redundancy;
        }
        return children.at("redundancy");
    }

    if(child_yang_name == "remote-ports")
    {
        if(remote_ports != nullptr)
        {
            children["remote-ports"] = remote_ports;
        }
        else
        {
            remote_ports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts>();
            remote_ports->parent = this;
            children["remote-ports"] = remote_ports;
        }
        return children.at("remote-ports");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::get_children()
{
    if(children.find("ethernet-features") == children.end())
    {
        if(ethernet_features != nullptr)
        {
            children["ethernet-features"] = ethernet_features;
        }
    }

    if(children.find("qos") == children.end())
    {
        if(qos != nullptr)
        {
            children["qos"] = qos;
        }
    }

    if(children.find("redundancy") == children.end())
    {
        if(redundancy != nullptr)
        {
            children["redundancy"] = redundancy;
        }
    }

    if(children.find("remote-ports") == children.end())
    {
        if(remote_ports != nullptr)
        {
            children["remote-ports"] = remote_ports;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "minimum-required-links")
    {
        minimum_required_links = value;
    }
    if(value_path == "satellite")
    {
        satellite = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy::Redundancy()
    :
    iccp_group{YType::uint32, "iccp-group"},
    minimum_preferred_links{YType::uint32, "minimum-preferred-links"}
{
    yang_name = "redundancy"; yang_parent_name = "nv-satellite-fabric-link";
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy::~Redundancy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy::has_data() const
{
    return iccp_group.is_set
	|| minimum_preferred_links.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy::has_operation() const
{
    return is_set(operation)
	|| is_set(iccp_group.operation)
	|| is_set(minimum_preferred_links.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Redundancy' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group.is_set || is_set(iccp_group.operation)) leaf_name_data.push_back(iccp_group.get_name_leafdata());
    if (minimum_preferred_links.is_set || is_set(minimum_preferred_links.operation)) leaf_name_data.push_back(minimum_preferred_links.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "iccp-group")
    {
        iccp_group = value;
    }
    if(value_path == "minimum-preferred-links")
    {
        minimum_preferred_links = value;
    }
}


}
}

