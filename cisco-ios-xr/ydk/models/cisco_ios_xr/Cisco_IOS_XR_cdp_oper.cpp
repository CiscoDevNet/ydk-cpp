
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_cdp_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_cdp_oper {

Cdp::Cdp()
    :
    nodes(std::make_shared<Cdp::Nodes>())
{
    nodes->parent = this;

    yang_name = "cdp"; yang_parent_name = "Cisco-IOS-XR-cdp-oper"; is_top_level_class = true; has_list_ancestor = false;
}

Cdp::~Cdp()
{
}

bool Cdp::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool Cdp::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Cdp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-cdp-oper:cdp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cdp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Cdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<Cdp::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cdp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void Cdp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Cdp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Cdp::clone_ptr() const
{
    return std::make_shared<Cdp>();
}

std::string Cdp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Cdp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Cdp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Cdp::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Cdp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

Cdp::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "cdp"; is_top_level_class = false; has_list_ancestor = false;
}

Cdp::Nodes::~Nodes()
{
}

bool Cdp::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Cdp::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Cdp::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-cdp-oper:cdp/" << get_segment_path();
    return path_buffer.str();
}

std::string Cdp::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cdp::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Cdp::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Cdp::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cdp::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Cdp::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Cdp::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Cdp::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

Cdp::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    neighbors(std::make_shared<Cdp::Nodes::Node::Neighbors>())
	,statistics(std::make_shared<Cdp::Nodes::Node::Statistics>())
	,interfaces(std::make_shared<Cdp::Nodes::Node::Interfaces>())
{
    neighbors->parent = this;
    statistics->parent = this;
    interfaces->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
}

Cdp::Nodes::Node::~Node()
{
}

bool Cdp::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (neighbors !=  nullptr && neighbors->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool Cdp::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string Cdp::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-cdp-oper:cdp/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string Cdp::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cdp::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Cdp::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<Cdp::Nodes::Node::Neighbors>();
        }
        return neighbors;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Cdp::Nodes::Node::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Cdp::Nodes::Node::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cdp::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbors != nullptr)
    {
        children["neighbors"] = neighbors;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    return children;
}

void Cdp::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Cdp::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool Cdp::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbors" || name == "statistics" || name == "interfaces" || name == "node-name")
        return true;
    return false;
}

Cdp::Nodes::Node::Neighbors::Neighbors()
    :
    details(std::make_shared<Cdp::Nodes::Node::Neighbors::Details>())
	,devices(std::make_shared<Cdp::Nodes::Node::Neighbors::Devices>())
	,summaries(std::make_shared<Cdp::Nodes::Node::Neighbors::Summaries>())
{
    details->parent = this;
    devices->parent = this;
    summaries->parent = this;

    yang_name = "neighbors"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Cdp::Nodes::Node::Neighbors::~Neighbors()
{
}

bool Cdp::Nodes::Node::Neighbors::has_data() const
{
    return (details !=  nullptr && details->has_data())
	|| (devices !=  nullptr && devices->has_data())
	|| (summaries !=  nullptr && summaries->has_data());
}

bool Cdp::Nodes::Node::Neighbors::has_operation() const
{
    return is_set(yfilter)
	|| (details !=  nullptr && details->has_operation())
	|| (devices !=  nullptr && devices->has_operation())
	|| (summaries !=  nullptr && summaries->has_operation());
}

std::string Cdp::Nodes::Node::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cdp::Nodes::Node::Neighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Cdp::Nodes::Node::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "details")
    {
        if(details == nullptr)
        {
            details = std::make_shared<Cdp::Nodes::Node::Neighbors::Details>();
        }
        return details;
    }

    if(child_yang_name == "devices")
    {
        if(devices == nullptr)
        {
            devices = std::make_shared<Cdp::Nodes::Node::Neighbors::Devices>();
        }
        return devices;
    }

    if(child_yang_name == "summaries")
    {
        if(summaries == nullptr)
        {
            summaries = std::make_shared<Cdp::Nodes::Node::Neighbors::Summaries>();
        }
        return summaries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cdp::Nodes::Node::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(details != nullptr)
    {
        children["details"] = details;
    }

    if(devices != nullptr)
    {
        children["devices"] = devices;
    }

    if(summaries != nullptr)
    {
        children["summaries"] = summaries;
    }

    return children;
}

void Cdp::Nodes::Node::Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Cdp::Nodes::Node::Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Cdp::Nodes::Node::Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "details" || name == "devices" || name == "summaries")
        return true;
    return false;
}

Cdp::Nodes::Node::Neighbors::Details::Details()
{

    yang_name = "details"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = true;
}

Cdp::Nodes::Node::Neighbors::Details::~Details()
{
}

bool Cdp::Nodes::Node::Neighbors::Details::has_data() const
{
    for (std::size_t index=0; index<detail.size(); index++)
    {
        if(detail[index]->has_data())
            return true;
    }
    return false;
}

bool Cdp::Nodes::Node::Neighbors::Details::has_operation() const
{
    for (std::size_t index=0; index<detail.size(); index++)
    {
        if(detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Cdp::Nodes::Node::Neighbors::Details::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cdp::Nodes::Node::Neighbors::Details::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Cdp::Nodes::Node::Neighbors::Details::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail")
    {
        for(auto const & c : detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Cdp::Nodes::Node::Neighbors::Details::Detail>();
        c->parent = this;
        detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cdp::Nodes::Node::Neighbors::Details::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Cdp::Nodes::Node::Neighbors::Details::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Cdp::Nodes::Node::Neighbors::Details::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Cdp::Nodes::Node::Neighbors::Details::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail")
        return true;
    return false;
}

Cdp::Nodes::Node::Neighbors::Details::Detail::Detail()
    :
    interface_name{YType::str, "interface-name"},
    device_id{YType::str, "device-id"}
{

    yang_name = "detail"; yang_parent_name = "details"; is_top_level_class = false; has_list_ancestor = true;
}

Cdp::Nodes::Node::Neighbors::Details::Detail::~Detail()
{
}

bool Cdp::Nodes::Node::Neighbors::Details::Detail::has_data() const
{
    for (std::size_t index=0; index<cdp_neighbor.size(); index++)
    {
        if(cdp_neighbor[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| device_id.is_set;
}

bool Cdp::Nodes::Node::Neighbors::Details::Detail::has_operation() const
{
    for (std::size_t index=0; index<cdp_neighbor.size(); index++)
    {
        if(cdp_neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(device_id.yfilter);
}

std::string Cdp::Nodes::Node::Neighbors::Details::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cdp::Nodes::Node::Neighbors::Details::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (device_id.is_set || is_set(device_id.yfilter)) leaf_name_data.push_back(device_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Cdp::Nodes::Node::Neighbors::Details::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdp-neighbor")
    {
        for(auto const & c : cdp_neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor>();
        c->parent = this;
        cdp_neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cdp::Nodes::Node::Neighbors::Details::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cdp_neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Cdp::Nodes::Node::Neighbors::Details::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "device-id")
    {
        device_id = value;
        device_id.value_namespace = name_space;
        device_id.value_namespace_prefix = name_space_prefix;
    }
}

void Cdp::Nodes::Node::Neighbors::Details::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "device-id")
    {
        device_id.yfilter = yfilter;
    }
}

bool Cdp::Nodes::Node::Neighbors::Details::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdp-neighbor" || name == "interface-name" || name == "device-id")
        return true;
    return false;
}

Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::CdpNeighbor()
    :
    receiving_interface_name{YType::str, "receiving-interface-name"},
    device_id{YType::str, "device-id"},
    port_id{YType::str, "port-id"},
    header_version{YType::uint8, "header-version"},
    hold_time{YType::uint16, "hold-time"},
    capabilities{YType::str, "capabilities"},
    platform{YType::str, "platform"}
    	,
    detail(std::make_shared<Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_>())
{
    detail->parent = this;

    yang_name = "cdp-neighbor"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::~CdpNeighbor()
{
}

bool Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::has_data() const
{
    return receiving_interface_name.is_set
	|| device_id.is_set
	|| port_id.is_set
	|| header_version.is_set
	|| hold_time.is_set
	|| capabilities.is_set
	|| platform.is_set
	|| (detail !=  nullptr && detail->has_data());
}

bool Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(receiving_interface_name.yfilter)
	|| ydk::is_set(device_id.yfilter)
	|| ydk::is_set(port_id.yfilter)
	|| ydk::is_set(header_version.yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| ydk::is_set(capabilities.yfilter)
	|| ydk::is_set(platform.yfilter)
	|| (detail !=  nullptr && detail->has_operation());
}

std::string Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdp-neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receiving_interface_name.is_set || is_set(receiving_interface_name.yfilter)) leaf_name_data.push_back(receiving_interface_name.get_name_leafdata());
    if (device_id.is_set || is_set(device_id.yfilter)) leaf_name_data.push_back(device_id.get_name_leafdata());
    if (port_id.is_set || is_set(port_id.yfilter)) leaf_name_data.push_back(port_id.get_name_leafdata());
    if (header_version.is_set || is_set(header_version.yfilter)) leaf_name_data.push_back(header_version.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (capabilities.is_set || is_set(capabilities.yfilter)) leaf_name_data.push_back(capabilities.get_name_leafdata());
    if (platform.is_set || is_set(platform.yfilter)) leaf_name_data.push_back(platform.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(detail != nullptr)
    {
        children["detail"] = detail;
    }

    return children;
}

void Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "receiving-interface-name")
    {
        receiving_interface_name = value;
        receiving_interface_name.value_namespace = name_space;
        receiving_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "device-id")
    {
        device_id = value;
        device_id.value_namespace = name_space;
        device_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-id")
    {
        port_id = value;
        port_id.value_namespace = name_space;
        port_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-version")
    {
        header_version = value;
        header_version.value_namespace = name_space;
        header_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capabilities")
    {
        capabilities = value;
        capabilities.value_namespace = name_space;
        capabilities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "platform")
    {
        platform = value;
        platform.value_namespace = name_space;
        platform.value_namespace_prefix = name_space_prefix;
    }
}

void Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "receiving-interface-name")
    {
        receiving_interface_name.yfilter = yfilter;
    }
    if(value_path == "device-id")
    {
        device_id.yfilter = yfilter;
    }
    if(value_path == "port-id")
    {
        port_id.yfilter = yfilter;
    }
    if(value_path == "header-version")
    {
        header_version.yfilter = yfilter;
    }
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
    if(value_path == "capabilities")
    {
        capabilities.yfilter = yfilter;
    }
    if(value_path == "platform")
    {
        platform.yfilter = yfilter;
    }
}

bool Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail" || name == "receiving-interface-name" || name == "device-id" || name == "port-id" || name == "header-version" || name == "hold-time" || name == "capabilities" || name == "platform")
        return true;
    return false;
}

Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::Detail_()
    :
    version{YType::str, "version"},
    vtp_domain{YType::str, "vtp-domain"},
    native_vlan{YType::uint32, "native-vlan"},
    duplex{YType::enumeration, "duplex"},
    system_name{YType::str, "system-name"}
    	,
    network_addresses(std::make_shared<Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses>())
	,protocol_hello_list(std::make_shared<Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::ProtocolHelloList>())
{
    network_addresses->parent = this;
    protocol_hello_list->parent = this;

    yang_name = "detail"; yang_parent_name = "cdp-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::~Detail_()
{
}

bool Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::has_data() const
{
    return version.is_set
	|| vtp_domain.is_set
	|| native_vlan.is_set
	|| duplex.is_set
	|| system_name.is_set
	|| (network_addresses !=  nullptr && network_addresses->has_data())
	|| (protocol_hello_list !=  nullptr && protocol_hello_list->has_data());
}

bool Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(vtp_domain.yfilter)
	|| ydk::is_set(native_vlan.yfilter)
	|| ydk::is_set(duplex.yfilter)
	|| ydk::is_set(system_name.yfilter)
	|| (network_addresses !=  nullptr && network_addresses->has_operation())
	|| (protocol_hello_list !=  nullptr && protocol_hello_list->has_operation());
}

std::string Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (vtp_domain.is_set || is_set(vtp_domain.yfilter)) leaf_name_data.push_back(vtp_domain.get_name_leafdata());
    if (native_vlan.is_set || is_set(native_vlan.yfilter)) leaf_name_data.push_back(native_vlan.get_name_leafdata());
    if (duplex.is_set || is_set(duplex.yfilter)) leaf_name_data.push_back(duplex.get_name_leafdata());
    if (system_name.is_set || is_set(system_name.yfilter)) leaf_name_data.push_back(system_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network-addresses")
    {
        if(network_addresses == nullptr)
        {
            network_addresses = std::make_shared<Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses>();
        }
        return network_addresses;
    }

    if(child_yang_name == "protocol-hello-list")
    {
        if(protocol_hello_list == nullptr)
        {
            protocol_hello_list = std::make_shared<Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::ProtocolHelloList>();
        }
        return protocol_hello_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(network_addresses != nullptr)
    {
        children["network-addresses"] = network_addresses;
    }

    if(protocol_hello_list != nullptr)
    {
        children["protocol-hello-list"] = protocol_hello_list;
    }

    return children;
}

void Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtp-domain")
    {
        vtp_domain = value;
        vtp_domain.value_namespace = name_space;
        vtp_domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "native-vlan")
    {
        native_vlan = value;
        native_vlan.value_namespace = name_space;
        native_vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duplex")
    {
        duplex = value;
        duplex.value_namespace = name_space;
        duplex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-name")
    {
        system_name = value;
        system_name.value_namespace = name_space;
        system_name.value_namespace_prefix = name_space_prefix;
    }
}

void Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "vtp-domain")
    {
        vtp_domain.yfilter = yfilter;
    }
    if(value_path == "native-vlan")
    {
        native_vlan.yfilter = yfilter;
    }
    if(value_path == "duplex")
    {
        duplex.yfilter = yfilter;
    }
    if(value_path == "system-name")
    {
        system_name.yfilter = yfilter;
    }
}

bool Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network-addresses" || name == "protocol-hello-list" || name == "version" || name == "vtp-domain" || name == "native-vlan" || name == "duplex" || name == "system-name")
        return true;
    return false;
}

Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::NetworkAddresses()
{

    yang_name = "network-addresses"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::~NetworkAddresses()
{
}

bool Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::has_data() const
{
    for (std::size_t index=0; index<cdp_addr_entry.size(); index++)
    {
        if(cdp_addr_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::has_operation() const
{
    for (std::size_t index=0; index<cdp_addr_entry.size(); index++)
    {
        if(cdp_addr_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdp-addr-entry")
    {
        for(auto const & c : cdp_addr_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::CdpAddrEntry>();
        c->parent = this;
        cdp_addr_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cdp_addr_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdp-addr-entry")
        return true;
    return false;
}

Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::CdpAddrEntry::CdpAddrEntry()
    :
    address(std::make_shared<Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::CdpAddrEntry::Address>())
{
    address->parent = this;

    yang_name = "cdp-addr-entry"; yang_parent_name = "network-addresses"; is_top_level_class = false; has_list_ancestor = true;
}

Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::CdpAddrEntry::~CdpAddrEntry()
{
}

bool Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::CdpAddrEntry::has_data() const
{
    return (address !=  nullptr && address->has_data());
}

bool Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::CdpAddrEntry::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::CdpAddrEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdp-addr-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::CdpAddrEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::CdpAddrEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::CdpAddrEntry::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::CdpAddrEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::CdpAddrEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::CdpAddrEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::CdpAddrEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::CdpAddrEntry::Address::Address()
    :
    address_type{YType::enumeration, "address-type"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "address"; yang_parent_name = "cdp-addr-entry"; is_top_level_class = false; has_list_ancestor = true;
}

Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::CdpAddrEntry::Address::~Address()
{
}

bool Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::CdpAddrEntry::Address::has_data() const
{
    return address_type.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::CdpAddrEntry::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::CdpAddrEntry::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::CdpAddrEntry::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_type.is_set || is_set(address_type.yfilter)) leaf_name_data.push_back(address_type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::CdpAddrEntry::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::CdpAddrEntry::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::CdpAddrEntry::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-type")
    {
        address_type = value;
        address_type.value_namespace = name_space;
        address_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::CdpAddrEntry::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-type")
    {
        address_type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::CdpAddrEntry::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-type" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::ProtocolHelloList::ProtocolHelloList()
{

    yang_name = "protocol-hello-list"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::ProtocolHelloList::~ProtocolHelloList()
{
}

bool Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::ProtocolHelloList::has_data() const
{
    for (std::size_t index=0; index<cdp_prot_hello_entry.size(); index++)
    {
        if(cdp_prot_hello_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::ProtocolHelloList::has_operation() const
{
    for (std::size_t index=0; index<cdp_prot_hello_entry.size(); index++)
    {
        if(cdp_prot_hello_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::ProtocolHelloList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-hello-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::ProtocolHelloList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::ProtocolHelloList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdp-prot-hello-entry")
    {
        for(auto const & c : cdp_prot_hello_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::ProtocolHelloList::CdpProtHelloEntry>();
        c->parent = this;
        cdp_prot_hello_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::ProtocolHelloList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cdp_prot_hello_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::ProtocolHelloList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::ProtocolHelloList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::ProtocolHelloList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdp-prot-hello-entry")
        return true;
    return false;
}

Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::ProtocolHelloList::CdpProtHelloEntry::CdpProtHelloEntry()
    :
    hello_message{YType::str, "hello-message"}
{

    yang_name = "cdp-prot-hello-entry"; yang_parent_name = "protocol-hello-list"; is_top_level_class = false; has_list_ancestor = true;
}

Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::ProtocolHelloList::CdpProtHelloEntry::~CdpProtHelloEntry()
{
}

bool Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::ProtocolHelloList::CdpProtHelloEntry::has_data() const
{
    return hello_message.is_set;
}

bool Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::ProtocolHelloList::CdpProtHelloEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hello_message.yfilter);
}

std::string Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::ProtocolHelloList::CdpProtHelloEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdp-prot-hello-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::ProtocolHelloList::CdpProtHelloEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hello_message.is_set || is_set(hello_message.yfilter)) leaf_name_data.push_back(hello_message.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::ProtocolHelloList::CdpProtHelloEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::ProtocolHelloList::CdpProtHelloEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::ProtocolHelloList::CdpProtHelloEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hello-message")
    {
        hello_message = value;
        hello_message.value_namespace = name_space;
        hello_message.value_namespace_prefix = name_space_prefix;
    }
}

void Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::ProtocolHelloList::CdpProtHelloEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hello-message")
    {
        hello_message.yfilter = yfilter;
    }
}

bool Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::ProtocolHelloList::CdpProtHelloEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello-message")
        return true;
    return false;
}

Cdp::Nodes::Node::Neighbors::Devices::Devices()
{

    yang_name = "devices"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = true;
}

Cdp::Nodes::Node::Neighbors::Devices::~Devices()
{
}

bool Cdp::Nodes::Node::Neighbors::Devices::has_data() const
{
    for (std::size_t index=0; index<device.size(); index++)
    {
        if(device[index]->has_data())
            return true;
    }
    return false;
}

bool Cdp::Nodes::Node::Neighbors::Devices::has_operation() const
{
    for (std::size_t index=0; index<device.size(); index++)
    {
        if(device[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Cdp::Nodes::Node::Neighbors::Devices::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "devices";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cdp::Nodes::Node::Neighbors::Devices::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Cdp::Nodes::Node::Neighbors::Devices::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "device")
    {
        for(auto const & c : device)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Cdp::Nodes::Node::Neighbors::Devices::Device>();
        c->parent = this;
        device.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cdp::Nodes::Node::Neighbors::Devices::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : device)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Cdp::Nodes::Node::Neighbors::Devices::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Cdp::Nodes::Node::Neighbors::Devices::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Cdp::Nodes::Node::Neighbors::Devices::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device")
        return true;
    return false;
}

Cdp::Nodes::Node::Neighbors::Devices::Device::Device()
    :
    device_id{YType::str, "device-id"}
{

    yang_name = "device"; yang_parent_name = "devices"; is_top_level_class = false; has_list_ancestor = true;
}

Cdp::Nodes::Node::Neighbors::Devices::Device::~Device()
{
}

bool Cdp::Nodes::Node::Neighbors::Devices::Device::has_data() const
{
    for (std::size_t index=0; index<cdp_neighbor.size(); index++)
    {
        if(cdp_neighbor[index]->has_data())
            return true;
    }
    return device_id.is_set;
}

bool Cdp::Nodes::Node::Neighbors::Devices::Device::has_operation() const
{
    for (std::size_t index=0; index<cdp_neighbor.size(); index++)
    {
        if(cdp_neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(device_id.yfilter);
}

std::string Cdp::Nodes::Node::Neighbors::Devices::Device::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "device" <<"[device-id='" <<device_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cdp::Nodes::Node::Neighbors::Devices::Device::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_id.is_set || is_set(device_id.yfilter)) leaf_name_data.push_back(device_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Cdp::Nodes::Node::Neighbors::Devices::Device::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdp-neighbor")
    {
        for(auto const & c : cdp_neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor>();
        c->parent = this;
        cdp_neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cdp::Nodes::Node::Neighbors::Devices::Device::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cdp_neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Cdp::Nodes::Node::Neighbors::Devices::Device::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device-id")
    {
        device_id = value;
        device_id.value_namespace = name_space;
        device_id.value_namespace_prefix = name_space_prefix;
    }
}

void Cdp::Nodes::Node::Neighbors::Devices::Device::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device-id")
    {
        device_id.yfilter = yfilter;
    }
}

bool Cdp::Nodes::Node::Neighbors::Devices::Device::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdp-neighbor" || name == "device-id")
        return true;
    return false;
}

Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::CdpNeighbor()
    :
    receiving_interface_name{YType::str, "receiving-interface-name"},
    device_id{YType::str, "device-id"},
    port_id{YType::str, "port-id"},
    header_version{YType::uint8, "header-version"},
    hold_time{YType::uint16, "hold-time"},
    capabilities{YType::str, "capabilities"},
    platform{YType::str, "platform"}
    	,
    detail(std::make_shared<Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail>())
{
    detail->parent = this;

    yang_name = "cdp-neighbor"; yang_parent_name = "device"; is_top_level_class = false; has_list_ancestor = true;
}

Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::~CdpNeighbor()
{
}

bool Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::has_data() const
{
    return receiving_interface_name.is_set
	|| device_id.is_set
	|| port_id.is_set
	|| header_version.is_set
	|| hold_time.is_set
	|| capabilities.is_set
	|| platform.is_set
	|| (detail !=  nullptr && detail->has_data());
}

bool Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(receiving_interface_name.yfilter)
	|| ydk::is_set(device_id.yfilter)
	|| ydk::is_set(port_id.yfilter)
	|| ydk::is_set(header_version.yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| ydk::is_set(capabilities.yfilter)
	|| ydk::is_set(platform.yfilter)
	|| (detail !=  nullptr && detail->has_operation());
}

std::string Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdp-neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receiving_interface_name.is_set || is_set(receiving_interface_name.yfilter)) leaf_name_data.push_back(receiving_interface_name.get_name_leafdata());
    if (device_id.is_set || is_set(device_id.yfilter)) leaf_name_data.push_back(device_id.get_name_leafdata());
    if (port_id.is_set || is_set(port_id.yfilter)) leaf_name_data.push_back(port_id.get_name_leafdata());
    if (header_version.is_set || is_set(header_version.yfilter)) leaf_name_data.push_back(header_version.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (capabilities.is_set || is_set(capabilities.yfilter)) leaf_name_data.push_back(capabilities.get_name_leafdata());
    if (platform.is_set || is_set(platform.yfilter)) leaf_name_data.push_back(platform.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(detail != nullptr)
    {
        children["detail"] = detail;
    }

    return children;
}

void Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "receiving-interface-name")
    {
        receiving_interface_name = value;
        receiving_interface_name.value_namespace = name_space;
        receiving_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "device-id")
    {
        device_id = value;
        device_id.value_namespace = name_space;
        device_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-id")
    {
        port_id = value;
        port_id.value_namespace = name_space;
        port_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-version")
    {
        header_version = value;
        header_version.value_namespace = name_space;
        header_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capabilities")
    {
        capabilities = value;
        capabilities.value_namespace = name_space;
        capabilities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "platform")
    {
        platform = value;
        platform.value_namespace = name_space;
        platform.value_namespace_prefix = name_space_prefix;
    }
}

void Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "receiving-interface-name")
    {
        receiving_interface_name.yfilter = yfilter;
    }
    if(value_path == "device-id")
    {
        device_id.yfilter = yfilter;
    }
    if(value_path == "port-id")
    {
        port_id.yfilter = yfilter;
    }
    if(value_path == "header-version")
    {
        header_version.yfilter = yfilter;
    }
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
    if(value_path == "capabilities")
    {
        capabilities.yfilter = yfilter;
    }
    if(value_path == "platform")
    {
        platform.yfilter = yfilter;
    }
}

bool Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail" || name == "receiving-interface-name" || name == "device-id" || name == "port-id" || name == "header-version" || name == "hold-time" || name == "capabilities" || name == "platform")
        return true;
    return false;
}

Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::Detail()
    :
    version{YType::str, "version"},
    vtp_domain{YType::str, "vtp-domain"},
    native_vlan{YType::uint32, "native-vlan"},
    duplex{YType::enumeration, "duplex"},
    system_name{YType::str, "system-name"}
    	,
    network_addresses(std::make_shared<Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses>())
	,protocol_hello_list(std::make_shared<Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::ProtocolHelloList>())
{
    network_addresses->parent = this;
    protocol_hello_list->parent = this;

    yang_name = "detail"; yang_parent_name = "cdp-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::~Detail()
{
}

bool Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::has_data() const
{
    return version.is_set
	|| vtp_domain.is_set
	|| native_vlan.is_set
	|| duplex.is_set
	|| system_name.is_set
	|| (network_addresses !=  nullptr && network_addresses->has_data())
	|| (protocol_hello_list !=  nullptr && protocol_hello_list->has_data());
}

bool Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(vtp_domain.yfilter)
	|| ydk::is_set(native_vlan.yfilter)
	|| ydk::is_set(duplex.yfilter)
	|| ydk::is_set(system_name.yfilter)
	|| (network_addresses !=  nullptr && network_addresses->has_operation())
	|| (protocol_hello_list !=  nullptr && protocol_hello_list->has_operation());
}

std::string Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (vtp_domain.is_set || is_set(vtp_domain.yfilter)) leaf_name_data.push_back(vtp_domain.get_name_leafdata());
    if (native_vlan.is_set || is_set(native_vlan.yfilter)) leaf_name_data.push_back(native_vlan.get_name_leafdata());
    if (duplex.is_set || is_set(duplex.yfilter)) leaf_name_data.push_back(duplex.get_name_leafdata());
    if (system_name.is_set || is_set(system_name.yfilter)) leaf_name_data.push_back(system_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network-addresses")
    {
        if(network_addresses == nullptr)
        {
            network_addresses = std::make_shared<Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses>();
        }
        return network_addresses;
    }

    if(child_yang_name == "protocol-hello-list")
    {
        if(protocol_hello_list == nullptr)
        {
            protocol_hello_list = std::make_shared<Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::ProtocolHelloList>();
        }
        return protocol_hello_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(network_addresses != nullptr)
    {
        children["network-addresses"] = network_addresses;
    }

    if(protocol_hello_list != nullptr)
    {
        children["protocol-hello-list"] = protocol_hello_list;
    }

    return children;
}

void Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtp-domain")
    {
        vtp_domain = value;
        vtp_domain.value_namespace = name_space;
        vtp_domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "native-vlan")
    {
        native_vlan = value;
        native_vlan.value_namespace = name_space;
        native_vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duplex")
    {
        duplex = value;
        duplex.value_namespace = name_space;
        duplex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-name")
    {
        system_name = value;
        system_name.value_namespace = name_space;
        system_name.value_namespace_prefix = name_space_prefix;
    }
}

void Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "vtp-domain")
    {
        vtp_domain.yfilter = yfilter;
    }
    if(value_path == "native-vlan")
    {
        native_vlan.yfilter = yfilter;
    }
    if(value_path == "duplex")
    {
        duplex.yfilter = yfilter;
    }
    if(value_path == "system-name")
    {
        system_name.yfilter = yfilter;
    }
}

bool Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network-addresses" || name == "protocol-hello-list" || name == "version" || name == "vtp-domain" || name == "native-vlan" || name == "duplex" || name == "system-name")
        return true;
    return false;
}

Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::NetworkAddresses()
{

    yang_name = "network-addresses"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::~NetworkAddresses()
{
}

bool Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::has_data() const
{
    for (std::size_t index=0; index<cdp_addr_entry.size(); index++)
    {
        if(cdp_addr_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::has_operation() const
{
    for (std::size_t index=0; index<cdp_addr_entry.size(); index++)
    {
        if(cdp_addr_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdp-addr-entry")
    {
        for(auto const & c : cdp_addr_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry>();
        c->parent = this;
        cdp_addr_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cdp_addr_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdp-addr-entry")
        return true;
    return false;
}

Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::CdpAddrEntry()
    :
    address(std::make_shared<Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::Address>())
{
    address->parent = this;

    yang_name = "cdp-addr-entry"; yang_parent_name = "network-addresses"; is_top_level_class = false; has_list_ancestor = true;
}

Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::~CdpAddrEntry()
{
}

bool Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::has_data() const
{
    return (address !=  nullptr && address->has_data());
}

bool Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdp-addr-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::Address::Address()
    :
    address_type{YType::enumeration, "address-type"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "address"; yang_parent_name = "cdp-addr-entry"; is_top_level_class = false; has_list_ancestor = true;
}

Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::Address::~Address()
{
}

bool Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::Address::has_data() const
{
    return address_type.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_type.is_set || is_set(address_type.yfilter)) leaf_name_data.push_back(address_type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-type")
    {
        address_type = value;
        address_type.value_namespace = name_space;
        address_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-type")
    {
        address_type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-type" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::ProtocolHelloList::ProtocolHelloList()
{

    yang_name = "protocol-hello-list"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::ProtocolHelloList::~ProtocolHelloList()
{
}

bool Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::ProtocolHelloList::has_data() const
{
    for (std::size_t index=0; index<cdp_prot_hello_entry.size(); index++)
    {
        if(cdp_prot_hello_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::ProtocolHelloList::has_operation() const
{
    for (std::size_t index=0; index<cdp_prot_hello_entry.size(); index++)
    {
        if(cdp_prot_hello_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::ProtocolHelloList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-hello-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::ProtocolHelloList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::ProtocolHelloList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdp-prot-hello-entry")
    {
        for(auto const & c : cdp_prot_hello_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::ProtocolHelloList::CdpProtHelloEntry>();
        c->parent = this;
        cdp_prot_hello_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::ProtocolHelloList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cdp_prot_hello_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::ProtocolHelloList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::ProtocolHelloList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::ProtocolHelloList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdp-prot-hello-entry")
        return true;
    return false;
}

Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::ProtocolHelloList::CdpProtHelloEntry::CdpProtHelloEntry()
    :
    hello_message{YType::str, "hello-message"}
{

    yang_name = "cdp-prot-hello-entry"; yang_parent_name = "protocol-hello-list"; is_top_level_class = false; has_list_ancestor = true;
}

Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::ProtocolHelloList::CdpProtHelloEntry::~CdpProtHelloEntry()
{
}

bool Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::ProtocolHelloList::CdpProtHelloEntry::has_data() const
{
    return hello_message.is_set;
}

bool Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::ProtocolHelloList::CdpProtHelloEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hello_message.yfilter);
}

std::string Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::ProtocolHelloList::CdpProtHelloEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdp-prot-hello-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::ProtocolHelloList::CdpProtHelloEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hello_message.is_set || is_set(hello_message.yfilter)) leaf_name_data.push_back(hello_message.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::ProtocolHelloList::CdpProtHelloEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::ProtocolHelloList::CdpProtHelloEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::ProtocolHelloList::CdpProtHelloEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hello-message")
    {
        hello_message = value;
        hello_message.value_namespace = name_space;
        hello_message.value_namespace_prefix = name_space_prefix;
    }
}

void Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::ProtocolHelloList::CdpProtHelloEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hello-message")
    {
        hello_message.yfilter = yfilter;
    }
}

bool Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::ProtocolHelloList::CdpProtHelloEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello-message")
        return true;
    return false;
}

Cdp::Nodes::Node::Neighbors::Summaries::Summaries()
{

    yang_name = "summaries"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = true;
}

Cdp::Nodes::Node::Neighbors::Summaries::~Summaries()
{
}

bool Cdp::Nodes::Node::Neighbors::Summaries::has_data() const
{
    for (std::size_t index=0; index<summary.size(); index++)
    {
        if(summary[index]->has_data())
            return true;
    }
    return false;
}

bool Cdp::Nodes::Node::Neighbors::Summaries::has_operation() const
{
    for (std::size_t index=0; index<summary.size(); index++)
    {
        if(summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Cdp::Nodes::Node::Neighbors::Summaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cdp::Nodes::Node::Neighbors::Summaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Cdp::Nodes::Node::Neighbors::Summaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary")
    {
        for(auto const & c : summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Cdp::Nodes::Node::Neighbors::Summaries::Summary>();
        c->parent = this;
        summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cdp::Nodes::Node::Neighbors::Summaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Cdp::Nodes::Node::Neighbors::Summaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Cdp::Nodes::Node::Neighbors::Summaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Cdp::Nodes::Node::Neighbors::Summaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary")
        return true;
    return false;
}

Cdp::Nodes::Node::Neighbors::Summaries::Summary::Summary()
    :
    interface_name{YType::str, "interface-name"},
    device_id{YType::str, "device-id"}
{

    yang_name = "summary"; yang_parent_name = "summaries"; is_top_level_class = false; has_list_ancestor = true;
}

Cdp::Nodes::Node::Neighbors::Summaries::Summary::~Summary()
{
}

bool Cdp::Nodes::Node::Neighbors::Summaries::Summary::has_data() const
{
    for (std::size_t index=0; index<cdp_neighbor.size(); index++)
    {
        if(cdp_neighbor[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| device_id.is_set;
}

bool Cdp::Nodes::Node::Neighbors::Summaries::Summary::has_operation() const
{
    for (std::size_t index=0; index<cdp_neighbor.size(); index++)
    {
        if(cdp_neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(device_id.yfilter);
}

std::string Cdp::Nodes::Node::Neighbors::Summaries::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cdp::Nodes::Node::Neighbors::Summaries::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (device_id.is_set || is_set(device_id.yfilter)) leaf_name_data.push_back(device_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Cdp::Nodes::Node::Neighbors::Summaries::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdp-neighbor")
    {
        for(auto const & c : cdp_neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor>();
        c->parent = this;
        cdp_neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cdp::Nodes::Node::Neighbors::Summaries::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cdp_neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Cdp::Nodes::Node::Neighbors::Summaries::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "device-id")
    {
        device_id = value;
        device_id.value_namespace = name_space;
        device_id.value_namespace_prefix = name_space_prefix;
    }
}

void Cdp::Nodes::Node::Neighbors::Summaries::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "device-id")
    {
        device_id.yfilter = yfilter;
    }
}

bool Cdp::Nodes::Node::Neighbors::Summaries::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdp-neighbor" || name == "interface-name" || name == "device-id")
        return true;
    return false;
}

Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::CdpNeighbor()
    :
    receiving_interface_name{YType::str, "receiving-interface-name"},
    device_id{YType::str, "device-id"},
    port_id{YType::str, "port-id"},
    header_version{YType::uint8, "header-version"},
    hold_time{YType::uint16, "hold-time"},
    capabilities{YType::str, "capabilities"},
    platform{YType::str, "platform"}
    	,
    detail(std::make_shared<Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail>())
{
    detail->parent = this;

    yang_name = "cdp-neighbor"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = true;
}

Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::~CdpNeighbor()
{
}

bool Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::has_data() const
{
    return receiving_interface_name.is_set
	|| device_id.is_set
	|| port_id.is_set
	|| header_version.is_set
	|| hold_time.is_set
	|| capabilities.is_set
	|| platform.is_set
	|| (detail !=  nullptr && detail->has_data());
}

bool Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(receiving_interface_name.yfilter)
	|| ydk::is_set(device_id.yfilter)
	|| ydk::is_set(port_id.yfilter)
	|| ydk::is_set(header_version.yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| ydk::is_set(capabilities.yfilter)
	|| ydk::is_set(platform.yfilter)
	|| (detail !=  nullptr && detail->has_operation());
}

std::string Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdp-neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receiving_interface_name.is_set || is_set(receiving_interface_name.yfilter)) leaf_name_data.push_back(receiving_interface_name.get_name_leafdata());
    if (device_id.is_set || is_set(device_id.yfilter)) leaf_name_data.push_back(device_id.get_name_leafdata());
    if (port_id.is_set || is_set(port_id.yfilter)) leaf_name_data.push_back(port_id.get_name_leafdata());
    if (header_version.is_set || is_set(header_version.yfilter)) leaf_name_data.push_back(header_version.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (capabilities.is_set || is_set(capabilities.yfilter)) leaf_name_data.push_back(capabilities.get_name_leafdata());
    if (platform.is_set || is_set(platform.yfilter)) leaf_name_data.push_back(platform.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(detail != nullptr)
    {
        children["detail"] = detail;
    }

    return children;
}

void Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "receiving-interface-name")
    {
        receiving_interface_name = value;
        receiving_interface_name.value_namespace = name_space;
        receiving_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "device-id")
    {
        device_id = value;
        device_id.value_namespace = name_space;
        device_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-id")
    {
        port_id = value;
        port_id.value_namespace = name_space;
        port_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-version")
    {
        header_version = value;
        header_version.value_namespace = name_space;
        header_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capabilities")
    {
        capabilities = value;
        capabilities.value_namespace = name_space;
        capabilities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "platform")
    {
        platform = value;
        platform.value_namespace = name_space;
        platform.value_namespace_prefix = name_space_prefix;
    }
}

void Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "receiving-interface-name")
    {
        receiving_interface_name.yfilter = yfilter;
    }
    if(value_path == "device-id")
    {
        device_id.yfilter = yfilter;
    }
    if(value_path == "port-id")
    {
        port_id.yfilter = yfilter;
    }
    if(value_path == "header-version")
    {
        header_version.yfilter = yfilter;
    }
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
    if(value_path == "capabilities")
    {
        capabilities.yfilter = yfilter;
    }
    if(value_path == "platform")
    {
        platform.yfilter = yfilter;
    }
}

bool Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail" || name == "receiving-interface-name" || name == "device-id" || name == "port-id" || name == "header-version" || name == "hold-time" || name == "capabilities" || name == "platform")
        return true;
    return false;
}

Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::Detail()
    :
    version{YType::str, "version"},
    vtp_domain{YType::str, "vtp-domain"},
    native_vlan{YType::uint32, "native-vlan"},
    duplex{YType::enumeration, "duplex"},
    system_name{YType::str, "system-name"}
    	,
    network_addresses(std::make_shared<Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses>())
	,protocol_hello_list(std::make_shared<Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::ProtocolHelloList>())
{
    network_addresses->parent = this;
    protocol_hello_list->parent = this;

    yang_name = "detail"; yang_parent_name = "cdp-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::~Detail()
{
}

bool Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::has_data() const
{
    return version.is_set
	|| vtp_domain.is_set
	|| native_vlan.is_set
	|| duplex.is_set
	|| system_name.is_set
	|| (network_addresses !=  nullptr && network_addresses->has_data())
	|| (protocol_hello_list !=  nullptr && protocol_hello_list->has_data());
}

bool Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(vtp_domain.yfilter)
	|| ydk::is_set(native_vlan.yfilter)
	|| ydk::is_set(duplex.yfilter)
	|| ydk::is_set(system_name.yfilter)
	|| (network_addresses !=  nullptr && network_addresses->has_operation())
	|| (protocol_hello_list !=  nullptr && protocol_hello_list->has_operation());
}

std::string Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (vtp_domain.is_set || is_set(vtp_domain.yfilter)) leaf_name_data.push_back(vtp_domain.get_name_leafdata());
    if (native_vlan.is_set || is_set(native_vlan.yfilter)) leaf_name_data.push_back(native_vlan.get_name_leafdata());
    if (duplex.is_set || is_set(duplex.yfilter)) leaf_name_data.push_back(duplex.get_name_leafdata());
    if (system_name.is_set || is_set(system_name.yfilter)) leaf_name_data.push_back(system_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network-addresses")
    {
        if(network_addresses == nullptr)
        {
            network_addresses = std::make_shared<Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses>();
        }
        return network_addresses;
    }

    if(child_yang_name == "protocol-hello-list")
    {
        if(protocol_hello_list == nullptr)
        {
            protocol_hello_list = std::make_shared<Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::ProtocolHelloList>();
        }
        return protocol_hello_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(network_addresses != nullptr)
    {
        children["network-addresses"] = network_addresses;
    }

    if(protocol_hello_list != nullptr)
    {
        children["protocol-hello-list"] = protocol_hello_list;
    }

    return children;
}

void Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtp-domain")
    {
        vtp_domain = value;
        vtp_domain.value_namespace = name_space;
        vtp_domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "native-vlan")
    {
        native_vlan = value;
        native_vlan.value_namespace = name_space;
        native_vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duplex")
    {
        duplex = value;
        duplex.value_namespace = name_space;
        duplex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-name")
    {
        system_name = value;
        system_name.value_namespace = name_space;
        system_name.value_namespace_prefix = name_space_prefix;
    }
}

void Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "vtp-domain")
    {
        vtp_domain.yfilter = yfilter;
    }
    if(value_path == "native-vlan")
    {
        native_vlan.yfilter = yfilter;
    }
    if(value_path == "duplex")
    {
        duplex.yfilter = yfilter;
    }
    if(value_path == "system-name")
    {
        system_name.yfilter = yfilter;
    }
}

bool Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network-addresses" || name == "protocol-hello-list" || name == "version" || name == "vtp-domain" || name == "native-vlan" || name == "duplex" || name == "system-name")
        return true;
    return false;
}

Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::NetworkAddresses()
{

    yang_name = "network-addresses"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::~NetworkAddresses()
{
}

bool Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::has_data() const
{
    for (std::size_t index=0; index<cdp_addr_entry.size(); index++)
    {
        if(cdp_addr_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::has_operation() const
{
    for (std::size_t index=0; index<cdp_addr_entry.size(); index++)
    {
        if(cdp_addr_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdp-addr-entry")
    {
        for(auto const & c : cdp_addr_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry>();
        c->parent = this;
        cdp_addr_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cdp_addr_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdp-addr-entry")
        return true;
    return false;
}

Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::CdpAddrEntry()
    :
    address(std::make_shared<Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::Address>())
{
    address->parent = this;

    yang_name = "cdp-addr-entry"; yang_parent_name = "network-addresses"; is_top_level_class = false; has_list_ancestor = true;
}

Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::~CdpAddrEntry()
{
}

bool Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::has_data() const
{
    return (address !=  nullptr && address->has_data());
}

bool Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdp-addr-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::Address::Address()
    :
    address_type{YType::enumeration, "address-type"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "address"; yang_parent_name = "cdp-addr-entry"; is_top_level_class = false; has_list_ancestor = true;
}

Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::Address::~Address()
{
}

bool Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::Address::has_data() const
{
    return address_type.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_type.is_set || is_set(address_type.yfilter)) leaf_name_data.push_back(address_type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-type")
    {
        address_type = value;
        address_type.value_namespace = name_space;
        address_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-type")
    {
        address_type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-type" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::ProtocolHelloList::ProtocolHelloList()
{

    yang_name = "protocol-hello-list"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::ProtocolHelloList::~ProtocolHelloList()
{
}

bool Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::ProtocolHelloList::has_data() const
{
    for (std::size_t index=0; index<cdp_prot_hello_entry.size(); index++)
    {
        if(cdp_prot_hello_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::ProtocolHelloList::has_operation() const
{
    for (std::size_t index=0; index<cdp_prot_hello_entry.size(); index++)
    {
        if(cdp_prot_hello_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::ProtocolHelloList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-hello-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::ProtocolHelloList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::ProtocolHelloList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdp-prot-hello-entry")
    {
        for(auto const & c : cdp_prot_hello_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::ProtocolHelloList::CdpProtHelloEntry>();
        c->parent = this;
        cdp_prot_hello_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::ProtocolHelloList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cdp_prot_hello_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::ProtocolHelloList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::ProtocolHelloList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::ProtocolHelloList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdp-prot-hello-entry")
        return true;
    return false;
}

Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::ProtocolHelloList::CdpProtHelloEntry::CdpProtHelloEntry()
    :
    hello_message{YType::str, "hello-message"}
{

    yang_name = "cdp-prot-hello-entry"; yang_parent_name = "protocol-hello-list"; is_top_level_class = false; has_list_ancestor = true;
}

Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::ProtocolHelloList::CdpProtHelloEntry::~CdpProtHelloEntry()
{
}

bool Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::ProtocolHelloList::CdpProtHelloEntry::has_data() const
{
    return hello_message.is_set;
}

bool Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::ProtocolHelloList::CdpProtHelloEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hello_message.yfilter);
}

std::string Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::ProtocolHelloList::CdpProtHelloEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdp-prot-hello-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::ProtocolHelloList::CdpProtHelloEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hello_message.is_set || is_set(hello_message.yfilter)) leaf_name_data.push_back(hello_message.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::ProtocolHelloList::CdpProtHelloEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::ProtocolHelloList::CdpProtHelloEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::ProtocolHelloList::CdpProtHelloEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hello-message")
    {
        hello_message = value;
        hello_message.value_namespace = name_space;
        hello_message.value_namespace_prefix = name_space_prefix;
    }
}

void Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::ProtocolHelloList::CdpProtHelloEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hello-message")
    {
        hello_message.yfilter = yfilter;
    }
}

bool Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::ProtocolHelloList::CdpProtHelloEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello-message")
        return true;
    return false;
}

Cdp::Nodes::Node::Statistics::Statistics()
    :
    received_packets{YType::uint32, "received-packets"},
    received_packets_v1{YType::uint32, "received-packets-v1"},
    received_packets_v2{YType::uint32, "received-packets-v2"},
    transmitted_packets{YType::uint32, "transmitted-packets"},
    transmitted_packets_v1{YType::uint32, "transmitted-packets-v1"},
    transmitted_packets_v2{YType::uint32, "transmitted-packets-v2"},
    header_errors{YType::uint32, "header-errors"},
    checksum_errors{YType::uint32, "checksum-errors"},
    encapsulation_errors{YType::uint32, "encapsulation-errors"},
    bad_packet_errors{YType::uint32, "bad-packet-errors"},
    out_of_memory_errors{YType::uint32, "out-of-memory-errors"},
    truncated_packet_errors{YType::uint32, "truncated-packet-errors"},
    header_version_errors{YType::uint32, "header-version-errors"},
    open_file_errors{YType::uint32, "open-file-errors"}
{

    yang_name = "statistics"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Cdp::Nodes::Node::Statistics::~Statistics()
{
}

bool Cdp::Nodes::Node::Statistics::has_data() const
{
    return received_packets.is_set
	|| received_packets_v1.is_set
	|| received_packets_v2.is_set
	|| transmitted_packets.is_set
	|| transmitted_packets_v1.is_set
	|| transmitted_packets_v2.is_set
	|| header_errors.is_set
	|| checksum_errors.is_set
	|| encapsulation_errors.is_set
	|| bad_packet_errors.is_set
	|| out_of_memory_errors.is_set
	|| truncated_packet_errors.is_set
	|| header_version_errors.is_set
	|| open_file_errors.is_set;
}

bool Cdp::Nodes::Node::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(received_packets_v1.yfilter)
	|| ydk::is_set(received_packets_v2.yfilter)
	|| ydk::is_set(transmitted_packets.yfilter)
	|| ydk::is_set(transmitted_packets_v1.yfilter)
	|| ydk::is_set(transmitted_packets_v2.yfilter)
	|| ydk::is_set(header_errors.yfilter)
	|| ydk::is_set(checksum_errors.yfilter)
	|| ydk::is_set(encapsulation_errors.yfilter)
	|| ydk::is_set(bad_packet_errors.yfilter)
	|| ydk::is_set(out_of_memory_errors.yfilter)
	|| ydk::is_set(truncated_packet_errors.yfilter)
	|| ydk::is_set(header_version_errors.yfilter)
	|| ydk::is_set(open_file_errors.yfilter);
}

std::string Cdp::Nodes::Node::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cdp::Nodes::Node::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (received_packets_v1.is_set || is_set(received_packets_v1.yfilter)) leaf_name_data.push_back(received_packets_v1.get_name_leafdata());
    if (received_packets_v2.is_set || is_set(received_packets_v2.yfilter)) leaf_name_data.push_back(received_packets_v2.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.yfilter)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());
    if (transmitted_packets_v1.is_set || is_set(transmitted_packets_v1.yfilter)) leaf_name_data.push_back(transmitted_packets_v1.get_name_leafdata());
    if (transmitted_packets_v2.is_set || is_set(transmitted_packets_v2.yfilter)) leaf_name_data.push_back(transmitted_packets_v2.get_name_leafdata());
    if (header_errors.is_set || is_set(header_errors.yfilter)) leaf_name_data.push_back(header_errors.get_name_leafdata());
    if (checksum_errors.is_set || is_set(checksum_errors.yfilter)) leaf_name_data.push_back(checksum_errors.get_name_leafdata());
    if (encapsulation_errors.is_set || is_set(encapsulation_errors.yfilter)) leaf_name_data.push_back(encapsulation_errors.get_name_leafdata());
    if (bad_packet_errors.is_set || is_set(bad_packet_errors.yfilter)) leaf_name_data.push_back(bad_packet_errors.get_name_leafdata());
    if (out_of_memory_errors.is_set || is_set(out_of_memory_errors.yfilter)) leaf_name_data.push_back(out_of_memory_errors.get_name_leafdata());
    if (truncated_packet_errors.is_set || is_set(truncated_packet_errors.yfilter)) leaf_name_data.push_back(truncated_packet_errors.get_name_leafdata());
    if (header_version_errors.is_set || is_set(header_version_errors.yfilter)) leaf_name_data.push_back(header_version_errors.get_name_leafdata());
    if (open_file_errors.is_set || is_set(open_file_errors.yfilter)) leaf_name_data.push_back(open_file_errors.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Cdp::Nodes::Node::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cdp::Nodes::Node::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Cdp::Nodes::Node::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets-v1")
    {
        received_packets_v1 = value;
        received_packets_v1.value_namespace = name_space;
        received_packets_v1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets-v2")
    {
        received_packets_v2 = value;
        received_packets_v2.value_namespace = name_space;
        received_packets_v2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
        transmitted_packets.value_namespace = name_space;
        transmitted_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-packets-v1")
    {
        transmitted_packets_v1 = value;
        transmitted_packets_v1.value_namespace = name_space;
        transmitted_packets_v1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-packets-v2")
    {
        transmitted_packets_v2 = value;
        transmitted_packets_v2.value_namespace = name_space;
        transmitted_packets_v2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-errors")
    {
        header_errors = value;
        header_errors.value_namespace = name_space;
        header_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checksum-errors")
    {
        checksum_errors = value;
        checksum_errors.value_namespace = name_space;
        checksum_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation-errors")
    {
        encapsulation_errors = value;
        encapsulation_errors.value_namespace = name_space;
        encapsulation_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-packet-errors")
    {
        bad_packet_errors = value;
        bad_packet_errors.value_namespace = name_space;
        bad_packet_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-memory-errors")
    {
        out_of_memory_errors = value;
        out_of_memory_errors.value_namespace = name_space;
        out_of_memory_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "truncated-packet-errors")
    {
        truncated_packet_errors = value;
        truncated_packet_errors.value_namespace = name_space;
        truncated_packet_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-version-errors")
    {
        header_version_errors = value;
        header_version_errors.value_namespace = name_space;
        header_version_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "open-file-errors")
    {
        open_file_errors = value;
        open_file_errors.value_namespace = name_space;
        open_file_errors.value_namespace_prefix = name_space_prefix;
    }
}

void Cdp::Nodes::Node::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "received-packets-v1")
    {
        received_packets_v1.yfilter = yfilter;
    }
    if(value_path == "received-packets-v2")
    {
        received_packets_v2.yfilter = yfilter;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets.yfilter = yfilter;
    }
    if(value_path == "transmitted-packets-v1")
    {
        transmitted_packets_v1.yfilter = yfilter;
    }
    if(value_path == "transmitted-packets-v2")
    {
        transmitted_packets_v2.yfilter = yfilter;
    }
    if(value_path == "header-errors")
    {
        header_errors.yfilter = yfilter;
    }
    if(value_path == "checksum-errors")
    {
        checksum_errors.yfilter = yfilter;
    }
    if(value_path == "encapsulation-errors")
    {
        encapsulation_errors.yfilter = yfilter;
    }
    if(value_path == "bad-packet-errors")
    {
        bad_packet_errors.yfilter = yfilter;
    }
    if(value_path == "out-of-memory-errors")
    {
        out_of_memory_errors.yfilter = yfilter;
    }
    if(value_path == "truncated-packet-errors")
    {
        truncated_packet_errors.yfilter = yfilter;
    }
    if(value_path == "header-version-errors")
    {
        header_version_errors.yfilter = yfilter;
    }
    if(value_path == "open-file-errors")
    {
        open_file_errors.yfilter = yfilter;
    }
}

bool Cdp::Nodes::Node::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-packets" || name == "received-packets-v1" || name == "received-packets-v2" || name == "transmitted-packets" || name == "transmitted-packets-v1" || name == "transmitted-packets-v2" || name == "header-errors" || name == "checksum-errors" || name == "encapsulation-errors" || name == "bad-packet-errors" || name == "out-of-memory-errors" || name == "truncated-packet-errors" || name == "header-version-errors" || name == "open-file-errors")
        return true;
    return false;
}

Cdp::Nodes::Node::Interfaces::Interfaces()
{

    yang_name = "interfaces"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Cdp::Nodes::Node::Interfaces::~Interfaces()
{
}

bool Cdp::Nodes::Node::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Cdp::Nodes::Node::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Cdp::Nodes::Node::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cdp::Nodes::Node::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Cdp::Nodes::Node::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Cdp::Nodes::Node::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cdp::Nodes::Node::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Cdp::Nodes::Node::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Cdp::Nodes::Node::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Cdp::Nodes::Node::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Cdp::Nodes::Node::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    interface_handle{YType::str, "interface-handle"},
    basecaps_state{YType::uint32, "basecaps-state"},
    cdp_protocol_state{YType::uint32, "cdp-protocol-state"},
    interface_encaps{YType::str, "interface-encaps"}
{

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Cdp::Nodes::Node::Interfaces::Interface::~Interface()
{
}

bool Cdp::Nodes::Node::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| interface_handle.is_set
	|| basecaps_state.is_set
	|| cdp_protocol_state.is_set
	|| interface_encaps.is_set;
}

bool Cdp::Nodes::Node::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(basecaps_state.yfilter)
	|| ydk::is_set(cdp_protocol_state.yfilter)
	|| ydk::is_set(interface_encaps.yfilter);
}

std::string Cdp::Nodes::Node::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cdp::Nodes::Node::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (basecaps_state.is_set || is_set(basecaps_state.yfilter)) leaf_name_data.push_back(basecaps_state.get_name_leafdata());
    if (cdp_protocol_state.is_set || is_set(cdp_protocol_state.yfilter)) leaf_name_data.push_back(cdp_protocol_state.get_name_leafdata());
    if (interface_encaps.is_set || is_set(interface_encaps.yfilter)) leaf_name_data.push_back(interface_encaps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Cdp::Nodes::Node::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cdp::Nodes::Node::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Cdp::Nodes::Node::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "basecaps-state")
    {
        basecaps_state = value;
        basecaps_state.value_namespace = name_space;
        basecaps_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdp-protocol-state")
    {
        cdp_protocol_state = value;
        cdp_protocol_state.value_namespace = name_space;
        cdp_protocol_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-encaps")
    {
        interface_encaps = value;
        interface_encaps.value_namespace = name_space;
        interface_encaps.value_namespace_prefix = name_space_prefix;
    }
}

void Cdp::Nodes::Node::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "basecaps-state")
    {
        basecaps_state.yfilter = yfilter;
    }
    if(value_path == "cdp-protocol-state")
    {
        cdp_protocol_state.yfilter = yfilter;
    }
    if(value_path == "interface-encaps")
    {
        interface_encaps.yfilter = yfilter;
    }
}

bool Cdp::Nodes::Node::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "interface-handle" || name == "basecaps-state" || name == "cdp-protocol-state" || name == "interface-encaps")
        return true;
    return false;
}

const Enum::YLeaf CdpDuplex::cdp_dplx_none {0, "cdp-dplx-none"};
const Enum::YLeaf CdpDuplex::cdp_dplx_half {1, "cdp-dplx-half"};
const Enum::YLeaf CdpDuplex::cdp_dplx_full {2, "cdp-dplx-full"};

const Enum::YLeaf CdpL3AddrProtocol::ipv4 {0, "ipv4"};
const Enum::YLeaf CdpL3AddrProtocol::ipv6 {1, "ipv6"};


}
}

